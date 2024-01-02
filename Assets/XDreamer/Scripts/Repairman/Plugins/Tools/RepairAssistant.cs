using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Extensions;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginRepairman.Tools;
using XCSJ.PluginTools.GameObjects;
using XCSJ.PluginTools.Items;
using XCSJ.Collections;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.PluginTools;
using XCSJ.PluginTools.Draggers;
using System.Collections.Generic;
using XCSJ.PluginXGUI.Windows.ListViews;
using XCSJ.PluginMMO;
using XCSJ.Helper;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace XCSJ.PluginRepairman
{
    /// <summary>
    /// 拆装助手：
    /// 1、辅助用户对设备进行拆或装。作为底层拆装模型与上层UI界面之间的中介
    /// 2、分为拆模式、装模式和拆装模式
    /// 3、拆模式：只对设备进行拆操作。装模式：只对设备进行装操作。拆装模式：对设备可拆可装
    /// 4、与可抓对象列表进行交互，可将拆下的零件放入列表中。也可从列表中获取零件安装到设备上
    /// 5、可一次性将所有零件放入可抓对象列表，也可一次性从列表中移除并组装为设备
    /// </summary>
    [Name("拆装助手")]
    [XCSJ.Attributes.Icon(EIcon.Tool)]
    [DisallowMultipleComponent]
    [RequireManager(typeof(RepairmanManager))]
    [Owner(typeof(RepairmanManager))]
    [Tool(RepairmanCategory.Step, rootType = typeof(ToolsManager))]
    public class RepairAssistant : Interactor, ISocketInfo, IMMOObject
    {
        /// <summary>
        /// 设备
        /// </summary>
        [Name("设备")]
        public Device _device;

        /// <summary>
        /// 设备
        /// </summary>
        public Device device { get => _device; private set => _device =value; }

        /// <summary>
        /// 列表视图
        /// </summary>
        [Name("列表视图")]
        [Tip("用于将设备对象中的零件生成列表的管理器", "Manager for generating a list of parts from equipment objects")]
        [Readonly(EEditorMode.Runtime)]
        [ComponentPopup]
        public GrabbableList _grabbableList;

        /// <summary>
        /// 列表视图
        /// </summary>
        public GrabbableList grabbableList => this.XGetComponentInGlobal<GrabbableList>(ref _grabbableList);

        /// <summary>
        /// 工作模式
        /// </summary>
        public enum EWorkMode
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None,

            /// <summary>
            /// 装配
            /// </summary>
            [Name("装配")]
            Assembled,

            /// <summary>
            /// 拆卸
            /// </summary>
            [Name("拆卸")]
            Disassembled,

            /// <summary>
            /// 拆卸
            /// </summary>
            [Name("拆卸和装配")]
            DisassembledAndAssembled
        }

        /// <summary>
        /// 工作模式
        /// </summary>
        [Name("工作模式")]
        [EnumPopup]
        public EWorkMode _workMode = EWorkMode.DisassembledAndAssembled;

        #region 装配可视化

        /// <summary>
        /// 装配可视化
        /// </summary>
        public enum EAssembledVisual
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None,

            /// <summary>
            /// 透明材质
            /// </summary>
            [Name("透明材质")]
            TransparentMaterial,

            /// <summary>
            /// 线
            /// </summary>
            [Name("线")]
            Line,
        }

        /// <summary>
        /// 装配可视化
        /// </summary>
        [Name("装配可视化")]
        [EnumPopup]
        public EAssembledVisual _assembledVisual = EAssembledVisual.TransparentMaterial;

        /// <summary>
        /// 装配可视化材质
        /// </summary>
        [Name("装配可视化材质")]
        [HideInSuperInspector(nameof(_assembledVisual), EValidityCheckType.NotEqual, EAssembledVisual.TransparentMaterial)]
        public Material _assembledVisualMaterial = null;

        private GameObject _matchSocketMaterialObject = null;

        /// <summary>
        /// 装配可视化线
        /// </summary>
        [Name("装配可视化线")]
        [HideInSuperInspector(nameof(_assembledVisual), EValidityCheckType.NotEqual, EAssembledVisual.Line)]
        public LineRenderer _assembledVisualLine;

        #endregion
        
        /// <summary>
        /// 重置
        /// </summary>
        public override void Reset()
        {
            base.Reset();

            _device = GetComponent<Device>();

#if UNITY_EDITOR
            // 添加指示匹配的材质
            this.XModifyProperty(() => _assembledVisualMaterial = AssetDatabase.LoadAssetAtPath("Assets/XDreamer-Assets/基础/Materials/常用/TransparentRim.mat", typeof(Material)) as Material);
#endif
        }

        #region 抓放回调

        /// <summary>
        /// 当前零件装配节点
        /// </summary>
        public PartAssemblyNode currentPartAssemblyNode => _currentPartAssemblyNode;
        private PartAssemblyNode _currentPartAssemblyNode = null;
        private bool SetCurrentPartAssemblyNode(PartAssemblyNode partSocket)
        {
            if (_currentPartAssemblyNode != partSocket)
            {
                var old = _currentPartAssemblyNode;
                _currentPartAssemblyNode = partSocket;
                OnPartAssemblyNodeChanged(old, _currentPartAssemblyNode);
                return true;
            }
            return false;
        }

        /// <summary>
        /// 输入交互
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="interactData"></param>
        protected override void OnInputInteract(InteractObject sender, InteractData interactData)
        {
            base.OnInputInteract(sender, interactData);

            if (interactData.interactor is Grabbable grabbable1 && grabbable1)
            {
                var part = grabbable1.GetComponent<Part>();
                if (!part) return;

                switch (interactData.cmd)
                {
                    case nameof(Grabbable.Grab): OnGrab(part); break;
                    case nameof(Grabbable.Hold): OnHold(part); break;
                    case nameof(Grabbable.Release): OnRelease(part); break;
                }
            }

            if (interactData.interactResult == EInteractResult.Success)
            {
                OnGrabbableList(interactData);
            }
        }

        private void OnGrab(Part part)
        {
            switch (_assembledVisual)
            {
                case EAssembledVisual.Line:
                    {
                        if (_assembledVisualLine)
                        {
                            _assembledVisualLine.enabled = true;
                        }
                        break;
                    }
            }
        }

        private void OnHold(Part part)
        {
            var ps = part.partAssemblyNode;
            if (SetCurrentPartAssemblyNode(ps ?? device.GetNearestEmptyPartAssemblyNode(part)))
            {
                if (currentPartAssemblyNode != null)
                {
                    part.grabbable.SetRotationAndCallFinished(currentPartAssemblyNode.rotation);
                }
            }

            if (currentPartAssemblyNode == null) return;

            var canAssembly = currentPartAssemblyNode.InSnapDistance(part);
            switch (_assembledVisual)
            {
                case EAssembledVisual.TransparentMaterial:
                    {
                        if (_matchSocketMaterialObject)
                        {
                            _matchSocketMaterialObject.SetActive(canAssembly);
                        }
                        break;
                    }
                case EAssembledVisual.Line:
                    {
                        if (_assembledVisualLine)
                        {
                            _assembledVisualLine.positionCount = 2;
                            _assembledVisualLine.SetPosition(0, currentPartAssemblyNode.position);
                            _assembledVisualLine.SetPosition(1, part.transform.position);
                            var color = canAssembly ? Color.green : Color.magenta;
                            _assembledVisualLine.startColor = _assembledVisualLine.endColor = color;
                            _assembledVisualLine.material.color = color;
                        }
                        break;
                    }
            }
        }

        /// <summary>
        /// 更新状态零件路径
        /// </summary>
        public string updateStatePartPath
        {
            get => _updateStatePartPath;
            set
            {
                _updateStatePartPath = value;
                device.UpdatePartAssemblyState(CommonFun.StringToGameObjectComponent(_updateStatePartPath) as Part);
            }
        }

        private void OnRelease(Part part)
        {
            switch (_assembledVisual)
            {
                case EAssembledVisual.Line:
                    {
                        if (_assembledVisualLine)
                        {
                            _assembledVisualLine.enabled = false;
                        }
                        break;
                    }
            }

            SetCurrentPartAssemblyNode(null);

            if (CommonFun.IsOnUGUI() && grabbableList && grabbableList.Contains(part.grabbable)) return;

            updateStatePartPath = CommonFun.ObjectToString(part);
        }

        private void OnPartAssemblyNodeChanged(PartAssemblyNode oldPartAssemblyNode, PartAssemblyNode newPartAssemblyNode)
        {
            switch (_assembledVisual)
            {
                case EAssembledVisual.TransparentMaterial:
                    {
                        if (oldPartAssemblyNode != null && _matchSocketMaterialObject)
                        {
                            DestroyImmediate(_matchSocketMaterialObject);
                        }

                        if (newPartAssemblyNode != null && _assembledVisualMaterial)
                        {
                            var part = newPartAssemblyNode._partPrototype;
                            if (part)
                            {
                                _matchSocketMaterialObject = Instantiate(part.gameObject, newPartAssemblyNode.position, newPartAssemblyNode.rotation);
                                _matchSocketMaterialObject.GetComponentsInChildren<Renderer>().Foreach(r => r.materials = new Material[] { _assembledVisualMaterial });
                                _matchSocketMaterialObject.SetActive(false);
                                // 当前对象仅用于显示，禁用交互功能组件
                                foreach (var item in _matchSocketMaterialObject.GetComponentsInChildren<AbstractInteract>())
                                {
                                    item.enabled = false;
                                }
                            }
                        }
                        break;
                    }
            }
        }

        /// <summary>
        /// 获取姿态：当前拖拽对象的姿态
        /// </summary>
        /// <param name="pose"></param>
        /// <returns></returns>
        public bool TryGetPose(out Pose pose)
        {
            if (_currentPartAssemblyNode != null)
            {
                pose = _currentPartAssemblyNode.pose;
                return true;
            }
            pose = default;
            return false;
        }

        #endregion

        #region 可抓对象列表

        private void OnGrabbableList(InteractData interactData)
        {
            // 可抓模型列表添加模型后设置零件对象为拆卸态
            if (interactData.interactor is GrabbableList && interactData.interactable is Grabbable grabbable2 && grabbable2)
            {
                var part = grabbable2.GetComponent<Part>();
                if (!part) return;

                switch (interactData.cmd)
                {
                    case nameof(GrabbableList.AddModel):
                        {
                            part.SetAssembleState(EAssembleState.Disassembled);
                            break;
                        }
                    case nameof(GrabbableList.RemoveModel):
                        {
                            if (device)
                            {
                                device.UpdatePartAssemblyState(part);
                            }
                            break;
                        }
                }
            }
        }

        /// <summary>
        /// 添加零件到可抓列表
        /// </summary>
        /// <param name="parts"></param>
        /// <param name="interactable"></param>
        /// <returns></returns>
        public List<PartModel> AddPartsToGrabbableList(IEnumerable<Part> parts, bool interactable = true)
        {
            var list = new List<PartModel>();
            if (grabbableList)
            {
                foreach (var part in parts)
                {
                    if (grabbableList.Contains(part.grabbable)) continue;

                    var entity = part.GetComponent<GrabbableListItemModelEntity>();
                    if (entity)
                    {
                        if (entity.enabled)
                        {
                            list.Add(new PartModel(part, device, entity._grabbableModel._title, entity._grabbableModel._texture2D, interactable));
                        }
                    }
                    else
                    {
                        Debug.LogWarningFormat("【{0}】零件缺少【{1}】类型组件，无法加入【{3}】列表视图中", CommonFun.ObjectToString(part), typeof(GrabbableListItemModelEntity), CommonFun.ObjectToString(grabbableList));
                    }
                }

                grabbableList.AddModels(list);
            }
            return list;
        }

        /// <summary>
        /// 从可抓列表移除零件
        /// </summary>
        /// <param name="partModels"></param>
        public void RemovePartsFromGrabbableList(IEnumerable<PartModel> partModels)
        {
            if (grabbableList)
            {
                grabbableList.RemoveModels(partModels);
            }
        }

        #endregion

        #region MMO对象

        /// <summary>
        /// 用户编号
        /// </summary>
        [Group("MMO信息", textEN = "MMO Information", defaultIsExpanded = false)]
        [Readonly(EEditorMode.Both)]
        [SerializeField]
        [Name("用户编号", "")]
        [Tip("如果当前对象在场景启动时就存在，本项为空；如果本对象是在运行期间被动态克隆的，那么本项为发起克隆命令的用户编号；", "If the current object exists when the scene is started, this item is empty; If this object is dynamically cloned during operation, this item is the user number that initiates the cloning command;")]
        internal string _userGuid = "";

        /// <summary>
        /// 原始编号
        /// </summary>
        [Readonly(EEditorMode.Both)]
        [SerializeField]
        [Name("原始编号", "")]
        [Tip("如果当前对象在场景启动时就存在，本项为空；如果本对象是在运行期间被动态克隆的，那么本项为被克隆对象的唯一编号；", "If the current object exists when the scene is started, this item is empty; If this object is dynamically cloned during operation, this item is the unique number of the cloned object;")]
        internal string _originalGuid = "";

        /// <summary>
        /// 唯一编号
        /// </summary>
        [Readonly(EEditorMode.Runtime)]
        [GuidCreater]
        [SerializeField]
        [Name("唯一编号", "")]
        [Tip("在进行网络同步时，用于标识不同网络客户端上相同对象的唯一编号；", "During network synchronization, it is used to identify the unique number of the same object on different network clients;")]
        internal string _guid = GuidHelper.GetNewGuid();

        /// <summary>
        /// 版本
        /// </summary>
        [Readonly(EEditorMode.Both)]
        [Name("版本", "")]
        [Tip("在进行网络同步时，用于标识当前对象被更新时的版本信息；", "During network synchronization, it is used to identify the version information when the current object is updated;")]
        public int _version;

        /// <summary>
        /// 用户GUID
        /// </summary>
        public string userGuid
        {
            get
            {
                return _userGuid;
            }
            set
            {
                _userGuid = value;
            }
        }

        /// <summary>
        /// 原始GUID
        /// </summary>
        public string originalGuid
        {
            get
            {
                return _originalGuid;
            }
            set
            {
                _originalGuid = value;
            }
        }

        /// <summary>
        /// GUID
        /// </summary>
        public string guid
        {
            get
            {
                return _guid;
            }
            set
            {
                _guid = value;
            }
        }

        /// <summary>
        /// 版本
        /// </summary>
        public int version
        {
            get
            {
                return _version;
            }
            set
            {
                _version = value;
            }
        }

        /// <summary>
        /// 网络ID
        /// </summary>
        public NetIdentity netIdentity => GetComponentInParent<NetIdentity>();

        /// <summary>
        /// 更新状态零件路径
        /// </summary>
        [Readonly]
        [Name("更新状态零件路径")]
        public string _updateStatePartPath = "";

        /// <summary>
        /// 上一次数据
        /// </summary>
        [Readonly]
        [Name("上一次数据")]
        public string _lastData = "";

        /// <summary>
        /// 原始数据
        /// </summary>
        [Readonly]
        [Name("原始数据")]
        public string _originalData = "";

        /// <summary>
        /// 当序列化
        /// </summary>
        /// <param name="data"></param>
        /// <returns></returns>
        public bool OnSerialize(out string data)
        {
            if (updateStatePartPath != _lastData || isDirty)
            {
                isDirty = false;
                _lastData = data = updateStatePartPath;
                return true;
            }
            data = default;
            return false;
        }

        /// <summary>
        /// 当反序列化
        /// </summary>
        /// <param name="data"></param>
        public void OnDeserialize(Data data)
        {
            version = data.version;
            updateStatePartPath = _lastData = data.data;
        }

        /// <summary>
        /// 当MMO将要启动
        /// </summary>
        public void OnMMOWillStart() { }

        /// <summary>
        /// 当MMO启动完成
        /// </summary>
        /// <param name="result"></param>
        public void OnMMOStartCompleted(EACode result) { }

        /// <summary>
        /// 当MMO已停止
        /// </summary>
        public void OnMMOStoped() { }

        /// <summary>
        /// 当MMO进入房间完成
        /// </summary>
        /// <param name="result"></param>
        public void OnMMOEnterRoomCompleted(EACode result)
        {
            version = 0;
            _originalData = _lastData = updateStatePartPath;

            if (device)
            {
                device.UpdatePartAssemblyState();
            }
        }

        /// <summary>
        /// 当MMO退出房间完成
        /// </summary>
        public void OnMMOExitRoomCompleted()
        {
            version = 0;
            updateStatePartPath = _originalData;
        }

        /// <summary>
        /// 当MMO房间添加用户
        /// </summary>
        /// <param name="userGuid"></param>
        public void OnMMORoomAddUser(string userGuid) { }

        /// <summary>
        /// 当MMO房间移除用户
        /// </summary>
        /// <param name="userGuid"></param>
        public void OnMMORoomRemoveUser(string userGuid) { }

        /// <summary>
        /// 当MMO房间添加玩家
        /// </summary>
        /// <param name="playerGuid"></param>
        public void OnMMORoomAddPlayer(string playerGuid) { }

        /// <summary>
        /// 当MMO房间移除玩家
        /// </summary>
        /// <param name="playerGuid"></param>
        public void OnMMORoomRemovePlayer(string playerGuid) { }

        /// <summary>
        /// 当MMO已克隆作为新对象
        /// </summary>
        public void OnMMOClonedAsNew() { }

        /// <summary>
        /// 当MMO已克隆作为模版
        /// </summary>
        /// <param name="newNetIdentity"></param>
        public void OnMMOClonedAsTemplate(NetIdentity newNetIdentity) { }

        /// <summary>
        /// 当MMO将要销毁
        /// </summary>
        public void OnMMOWillDestroy() { }

        /// <summary>
        /// 当MMO开始玩家关联
        /// </summary>
        public void OnMMOStartPlayerLink() { }

        /// <summary>
        /// 当MMO停止玩家关联
        /// </summary>
        public void OnMMOStopPlayerLink() { }

        /// <summary>
        /// 当MMO开始控制权限
        /// </summary>
        public void OnMMOStartControlAccess() { }

        /// <summary>
        /// 当MMO停止控制权限
        /// </summary>
        public void OnMMOStopControlAccess() { }

        private bool isDirty = false;

        /// <summary>
        /// 标记脏
        /// </summary>
        public void MarkDirty() { isDirty = true; }

        #endregion
    }

    /// <summary>
    /// 零件模型:与可抓列表配合生成列表视图项对象
    /// </summary>
    [Name("零件模型")]
    public class PartModel : GrabbableModel
    {
        /// <summary>
        /// 零件
        /// </summary>
        public Tools.Part part { get; private set; }

        /// <summary>
        /// 设备
        /// </summary>
        public Tools.Device device { get; private set; }

        /// <summary>
        /// 可交互
        /// </summary>
        public override bool interactable { get => _interactable; }
        private bool _interactable = false;

        /// <summary>
        /// 能否从列表中移除
        /// </summary>
        public override bool allowRemoveFromList => !device || part.assembleState == EAssembleState.Assembled || device.CanAssembly(part);

        /// <summary>
        /// 匹配
        /// </summary>
        /// <param name="part"></param>
        /// <param name="interactable"></param>
        /// <returns></returns>
        public bool SetInteractable(Tools.Part part, bool interactable)
        {
            if (this.part.IsMatchRepacePartTag(part))
            {
                _interactable = interactable;
                return true;
            }
            return false;
        }

        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="part"></param>
        /// <param name="device"></param>
        /// <param name="title"></param>
        /// <param name="texture2D"></param>
        /// <param name="interactable"></param>
        public PartModel(Tools.Part part, Tools.Device device, string title = null, Texture2D texture2D = null, bool interactable = false) : base(part.grabbable, title, texture2D)
        {
            this.part = part;
            this.device = device;
            _interactable = interactable;
        }
    }
}
