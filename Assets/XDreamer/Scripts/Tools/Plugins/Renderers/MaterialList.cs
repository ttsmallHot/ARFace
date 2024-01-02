using System;
using System.Collections.Generic;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Extensions;
using XCSJ.Extension.Base.Recorders;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCamera;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginTools.Draggers;
using XCSJ.PluginXGUI.Windows.ListViews;

namespace XCSJ.PluginTools.Renderers
{
    /// <summary>
    /// 材质列表
    /// </summary>
    [Name("材质列表")]
    [DisallowMultipleComponent]
    [RequireManager(typeof(CameraManager))]
    public class MaterialList : ListViewModelProvider
    {
        /// <summary>
        /// 材质列表
        /// </summary>
        [Name("材质列表")]
        public List<MaterialModel> _materials= new List<MaterialModel>();

        /// <summary>
        /// 材质列表
        /// </summary>
        protected override IEnumerable<ListViewItemModel> prefabModels => _materials;

        private Dragger dragger = null;

        private InteractableEntity lastHit;

        private RendererRecorder rendererRecorder = new RendererRecorder();

        /// <summary>
        /// 能否交互
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public override bool CanInteract(InteractData interactData)
        {
            return base.CanInteract(interactData) && (interactData as ListViewInteractData).listViewItemModel is MaterialModel;
        }

        /// <summary>
        /// 开始拖拽
        /// </summary>
        /// <param name="listViewInteractData"></param>
        internal override void OnDragStart(ListViewInteractData listViewInteractData)
        {
            base.OnDragStart(listViewInteractData);

            listView.TrySelectModel(listViewInteractData.listViewItemModel);

            dragger = this.XGetComponentInParentOrGlobal<Dragger>(false);
            if (!dragger)
            {
                Debug.LogErrorFormat("[{0}]未找到有效的主动拖拽器!", CommonFun.ObjectToString(this));
            }

            lastHit = null;
        }

        /// <summary>
        /// 拖拽中
        /// </summary>
        /// <param name="listViewInteractData"></param>
        internal override void OnDrag(ListViewInteractData listViewInteractData)
        {
            base.OnDrag(listViewInteractData);

            var model = listViewInteractData.listViewItemModel as MaterialModel;

            //即使拖拽器没有在拖拽对象，也通过外部【鼠标输入】产生了【保持】数据
            if (dragger && dragger.holdData != null)
            {
                var entity = dragger.holdData.interactable as InteractableEntity;
                if (lastHit != entity)
                {
                    // 还原上次改变材质的对象
                    rendererRecorder.Recover();
                    rendererRecorder.Clear();

                    lastHit = entity;
                    if (lastHit)
                    {
                        rendererRecorder.Record(lastHit.gameObject, true);

                        foreach (var item in rendererRecorder.records)
                        {
                            item.FillMaterialSize(model.unityObject);
                        }
                    }
                }
            }
        }

        /// <summary>
        /// 结束拖拽
        /// </summary>
        /// <param name="listViewInteractData"></param>
        internal override void OnDragEnd(ListViewInteractData listViewInteractData)
        {
            base.OnDragEnd(listViewInteractData);

            dragger = null;
            rendererRecorder.Clear();
        }
    }

    /// <summary>
    /// 材质模型
    /// </summary>
    [Serializable]
    public class MaterialModel : UnityObjectModel<Material>
    {
        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="material"></param>
        public MaterialModel(Material material) : base(material) { }
    }
}
