using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Extension.CNScripts;
using XCSJ.Extension.Interactions.Base;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;

namespace XCSJ.Extension.Interactions.Tools
{
    /// <summary>
    /// 可扩展的交互对象
    /// </summary>
    public abstract class ExtensionalInteractObject : InteractObject, ITagPropertyHost, IUsageHost, IReferenceObject
    {
        #region 引用对象

        /// <summary>
        /// 引用变量字符串
        /// </summary>
        [Group("基础交互设置", textEN = "Base Interact Settings", defaultIsExpanded = false)]
        [Name("引用变量字符串")]
        [Tip("使用当前组件对象在执行某些特定的交互方法时,传入参数可使用的基于当前组件对象的引用变量字符串，以完成一些特殊参数赋值操作；", "When using the current component object to execute certain specific interaction methods, the reference variable string based on the current component object can be used to pass in parameters to complete some special parameter assignment operations;")]
        [ReferenceVarString]
        public string _referenceVarString = "";

        /// <summary>
        /// 引用对象变量字符串
        /// </summary>
        private string _referenceObjectVarString = null;

        /// <summary>
        /// 引用对象变量字符串
        /// </summary>
        public string referenceObjectVarString => _referenceObjectVarString ?? (_referenceObjectVarString = GetType().GetRootReferenceVarString());

        #endregion

        #region 标签属性

        /// <summary>
        /// 标签属性
        /// </summary>
        [Name("标签属性")]
        public TagProperty _tagProperty = new TagProperty();

        /// <summary>
        /// 标签属性
        /// </summary>
        public ITagProperty tagProperty => _tagProperty;

        #endregion

        #region 用途

        private Usage _usage;

        /// <summary>
        /// 用途
        /// </summary>
        public Usage usage => _usage ?? (_usage = new Usage(this));

        /// <summary>
        /// 获取用途关键字
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public virtual string GetUsageKey(string key = null) => key ?? GetType().Name;

        /// <summary>
        /// 添加用途
        /// </summary>
        /// <param name="usageData"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        public virtual bool OnAddUsage(UsageData usageData, InteractObject user) => true;

        /// <summary>
        /// 移除用途
        /// </summary>
        /// <param name="usageData"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        public virtual bool OnRemoveUsage(UsageData usageData, InteractObject user) => true;

        #endregion

        #region 交互命令

        /// <summary>
        /// 交互命令数据列表
        /// </summary>
        private InteractCmdDatas _interactCmdDatas;

        /// <summary>
        /// 交互命令数据列表
        /// </summary>
        public InteractCmdDatas interactCmdDatas => _interactCmdDatas ?? (_interactCmdDatas = GetType().GetInteractCmdDatas());

        /// <summary>
        /// 交互命令方法数据列表
        /// </summary>
        private InteractCmdFunDatas _interactCmdFunDatas;

        /// <summary>
        /// 交互命令方法数据列表
        /// </summary>
        public InteractCmdFunDatas interactCmdFunDatas => _interactCmdFunDatas ?? (_interactCmdFunDatas = GetType().GetInteractCmdFunDatas());

        #region 输入命令

        /// <summary>
        /// 输入命令列表
        /// </summary>
        [Name("输入命令列表")]
        public DefaultCmds _inCmds = new DefaultCmds();

        /// <summary>
        /// 输入命令列表
        /// </summary>
        public virtual Cmds inCmds => _inCmds;

        /// <summary>
        ///  输入命令列表
        /// </summary>
        public override List<string> inCmdList => inCmds.cmdList;

        /// <summary>
        /// 输入命令名称列表
        /// </summary>
        public override List<string> inCmdNameList => inCmds.cmdNameList;

        /// <summary>
        /// 包含输入命令
        /// </summary>
        /// <param name="inCmd"></param>
        /// <returns></returns>
        public virtual bool ContainsInCmd(string inCmd) => inCmds.ContainsCmd(inCmd);

        /// <summary>
        /// 获取输入命令
        /// </summary>
        /// <param name="inCmdName"></param>
        /// <returns></returns>
        public override string GetInCmd(string inCmdName)
        {
            string inCmd = inCmds.GetCmd(inCmdName);
            if (string.IsNullOrEmpty(inCmd))
            {
                UnityEngine.Debug.LogWarningFormat("【{0}】交互对象中未找到输入命令名称为【{1}】对应的命令", CommonFun.ObjectToString(this), inCmdName);
            }
            return inCmd;
        }

        /// <summary>
        /// 包含输入命令名称
        /// </summary>
        /// <param name="inCmdName"></param>
        /// <returns></returns>
        public virtual bool ContainsInCmdName(string inCmdName) => inCmds.ContainsCmdName(inCmdName);

        /// <summary>
        /// 获取输入命令名称
        /// </summary>
        /// <param name="inCmd"></param>
        /// <returns></returns>
        public override string GetInCmdName(string inCmd) 
        {
            string inCmdName = inCmds.GetCmdName(inCmd);
            if (string.IsNullOrEmpty(inCmdName))
            {
                UnityEngine.Debug.LogWarningFormat("【{0}】交互对象中未找到输入命令为【{1}】对应的命令名称", CommonFun.ObjectToString(this), inCmd);
            }
            return inCmdName;
        }

        /// <summary>
        /// 获取输入命令名称集：通过输入命令获取输入命令名称集（命令与命令名称为1：N关系）
        /// </summary>
        /// <param name="inCmd"></param>
        /// <returns></returns>
        public override string[] GetInCmdNames(string inCmd) =>  inCmds.GetCmdNames(inCmd);

        #endregion

        #region 输出命令

        /// <summary>
        /// 输出命令列表
        /// </summary>
        [Name("输出命令列表")]
        public DefaultCmds _outCmds = new DefaultCmds();

        /// <summary>
        /// 输出命令列表
        /// </summary>
        public virtual Cmds outCmds => _outCmds;

        /// <summary>
        /// 输出命令列表
        /// </summary>
        public override List<string> outCmdList => outCmds.cmdList;

        /// <summary>
        /// 输出命令名称列表
        /// </summary>
        public override List<string> outCmdNameList => outCmds.cmdNameList;

        /// <summary>
        /// 包含输出命令
        /// </summary>
        /// <param name="outCmd"></param>
        /// <returns></returns>
        public virtual bool ContainsOutCmd(string outCmd) => outCmds.ContainsCmd(outCmd);

        /// <summary>
        /// 获取输出命令
        /// </summary>
        /// <param name="outCmdName"></param>
        /// <returns></returns>
        public override string GetOutCmd(string outCmdName)
        {
            var outCmd = outCmds.GetCmd(outCmdName);
            if (string.IsNullOrEmpty(outCmd))
            {
                UnityEngine.Debug.LogWarningFormat("【{0}】交互对象中未找到输出命令名称为【{1}】对应的命令", CommonFun.ObjectToString(this), outCmdName);
            }
            return outCmd;
        }

        /// <summary>
        /// 包含输出命令名称
        /// </summary>
        /// <param name="outCmdName"></param>
        /// <returns></returns>
        public virtual bool ContainsOutCmdName(string outCmdName) => outCmds.ContainsCmdName(outCmdName);

        /// <summary>
        /// 获取输出命令名称
        /// </summary>
        /// <param name="outCmd"></param>
        /// <returns></returns>
        public override string GetOutCmdName(string outCmd) 
        {
            string outCmdName = outCmds.GetCmdName(outCmd);
            if (string.IsNullOrEmpty(outCmdName))
            {
                UnityEngine.Debug.LogWarningFormat("【{0}】交互对象中未找到输出命令为【{1}】对应的命令名称", CommonFun.ObjectToString(this), outCmd);
            }
            return outCmdName;
        }

        /// <summary>
        /// 获取输出命令名称集：通过输出命令获取输出命令名称集（命令与命令名称为1：N关系）
        /// </summary>
        /// <param name="outCmd"></param>
        /// <returns></returns>
        public override string[] GetOutCmdNames(string outCmd) => outCmds.GetCmdNames(outCmd);

        #endregion

        #region 重置

        /// <summary>
        /// 重置
        /// </summary>
        public virtual void Reset() => ResetCmds();

        /// <summary>
        /// 重置命令列表
        /// </summary>
        [ContextMenu("命令列表/重置")]
        public void ResetCmds()
        {
            this.XModifyProperty(() => inCmds.Reset(GetType(), ECmdType.In));
            this.XModifyProperty(() => outCmds.Reset(GetType(), ECmdType.Out));
        }

#if XDREAMER_EDITION_DEVELOPER

        /// <summary>
        /// 重置当前及子对象命令列表
        /// </summary>
        [ContextMenu("命令列表/重置当前及子对象（谨慎使用）")]
        public void ResetChildrenCmds()
        {
            foreach (var obj in GetComponentsInChildren<ExtensionalInteractObject>(true))
            {
                obj.ResetCmds();
            }
        }

        /// <summary>
        /// 重置场景交互对象命令列表
        /// </summary>
        [ContextMenu("命令列表/重置场景交互对象（谨慎使用）")]
        public void ResetCmdsInScene()
        {
            foreach (var obj in FindObjectsOfType<ExtensionalInteractObject>())
            {
                obj.ResetCmds();
            }
        }
#endif

        /// <summary>
        /// 补齐命令列表
        /// </summary>
        [ContextMenu("命令列表/补齐")]
        public void AddLostCmd()
        {
            this.XModifyProperty(() => inCmds.AddLostCmd(GetType(), ECmdType.In));
            this.XModifyProperty(() => outCmds.AddLostCmd(GetType(), ECmdType.Out));
        }


#if XDREAMER_EDITION_DEVELOPER

        /// <summary>
        /// 补齐当前及子对象命令列表
        /// </summary>
        [ContextMenu("命令列表/补齐当前及子对象（谨慎使用）")]
        public void AddLostChildrenCmd()
        {
            foreach (var obj in GetComponentsInChildren<ExtensionalInteractObject>(true))
            {
                obj.AddLostCmd();
            }
        }

        /// <summary>
        /// 补齐场景交互对象命令列表
        /// </summary>
        [ContextMenu("命令列表/补齐场景交互对象（谨慎使用）")]
        public void AddLostSceneCmd()
        {
            foreach (var obj in FindObjectsOfType<ExtensionalInteractObject>())
            {
                obj.AddLostCmd();
            }
        }
#endif

        #endregion

        #endregion

        #region 交互

        /// <summary>
        /// 当交互
        /// </summary>
        /// <param name="interactData"></param>
        protected override EInteractResult OnInteract(InteractData interactData)
        {
            var result = CallInteractCmdFun(interactData);
            if (result == EInteractResult.Success)
            {
                base.OnInteract(interactData);
            }
            OnExtensionalInteract(interactData, result);
            return result;
        }

        /// <summary>
        /// 调用交互命令函数
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        protected virtual EInteractResult CallInteractCmdFun(InteractData interactData)
        {
            if (interactCmdFunDatas.TryGetInteractCmdFunData(GetInCmd(interactData.cmdName), out var data))
            {
                return data.TryInteract(this, interactData);
            }
            return EInteractResult.Fail;
        }

        /// <summary>
        /// 尝试扩展交互
        /// </summary>
        /// <param name="interactData"></param>
        /// <param name="interactResult"></param>
        /// <returns></returns>
        protected virtual EInteractResult OnExtensionalInteract(InteractData interactData, EInteractResult interactResult) => EInteractResult.Fail;

        /// <summary>
        /// 尝试交互：构建交互数据进行操作
        /// </summary>
        /// <param name="cmd"></param>
        /// <param name="interactObjects"></param>
        /// <returns></returns>
        public virtual bool TryInteract(string cmd, params InteractObject[] interactObjects) => TryInteract(cmd, null, interactObjects);

        /// <summary>
        /// 尝试交互：构建交互数据进行操作
        /// </summary>
        /// <param name="cmd"></param>
        /// <param name="parent"></param>
        /// <param name="interactObjects"></param>
        /// <returns></returns>
        public virtual bool TryInteract(string cmd, InteractData parent, params InteractObject[] interactObjects) => TryInteract(cmd, null, parent, interactObjects);

        /// <summary>
        /// 尝试交互：构建交互数据进行操作
        /// </summary>
        /// <param name="cmd"></param>
        /// <param name="cmdParam"></param>
        /// <param name="interactObjects"></param>
        /// <returns></returns>
        public virtual bool TryInteract(string cmd, object cmdParam, params InteractObject[] interactObjects) => TryInteract(cmd, cmdParam, null, interactObjects);

        /// <summary>
        /// 尝试交互：构建交互数据进行操作
        /// </summary>
        /// <param name="cmd"></param>
        /// <param name="cmdParam"></param>
        /// <param name="parent"></param>
        /// <param name="interactObjects"></param>
        /// <returns></returns>
        public virtual bool TryInteract(string cmd, object cmdParam, InteractData parent, params InteractObject[] interactObjects)
        {
            var cmdName = GetInCmdName(cmd);
            return string.IsNullOrEmpty(cmdName) ? false : TryInteract(new InteractData(cmdName, parent, this, cmdParam, interactObjects), out _);
        }

        #endregion
    }

    #region 标签

    #region 标签属性数据

    /// <summary>
    /// 标签属性数据
    /// </summary>
    [Serializable]
    public class TagPropertyData : BaseInteractPropertyData
    {
        /// <summary>
        /// 空构造函数
        /// </summary>
        public TagPropertyData() { }

        /// <summary>
        /// 空构造函数
        /// </summary>
        public TagPropertyData(string key) : base(key) { }

        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        public TagPropertyData(string key, string value) : base(key, value) { }

        /// <summary>
        /// 与输入标签字符串数组中的其中之一匹配
        /// </summary>
        /// <param name="tags"></param>
        /// <returns></returns>
        public bool ExistsTag(params string[] tags)
        {
            var tagValue = value;

            // 输入标签无效且标签表达式值为空时认为匹配
            if (tags == null || tags.Length == 0)
            {
                return string.IsNullOrEmpty(tagValue);
            }

            foreach (var item in tags)
            {
                if (tagValue == item) return true;
            }
            return false;
        }

        /// <summary>
        /// 与输入标签匹配:首先关键字需要相等
        /// </summary>
        /// <param name="tagPropertyData"></param>
        /// <returns></returns>
        public bool ExistsTag(TagPropertyData tagPropertyData)
        {
            if (tagPropertyData == null) return false;

            return key == tagPropertyData.key && ExistsTag(tagPropertyData.value);
        }
    }

    #endregion

    #region 标签属性

    /// <summary>
    /// 标签属性
    /// </summary>
    [Serializable]
    public class TagProperty : ITagProperty
    {
        /// <summary>
        /// 构造函数
        /// </summary>
        public TagProperty() { }

        /// <summary>
        /// 标签属性数据列表
        /// </summary>
        [Name("标签属性数据列表")]
        [OnlyMemberElements(true)]
        public List<TagPropertyData> _tagPropertyDatas = new List<TagPropertyData>();

        /// <summary>
        /// 第一个键
        /// </summary>
        public string firstKey => _tagPropertyDatas.FirstOrDefault()?.key ?? "";

        /// <summary>
        /// 第一个值
        /// </summary>
        public string firstValue => _tagPropertyDatas.FirstOrDefault()?.value ?? "";

        /// <summary>
        /// 是否存在标签：与输入标签字符串数组中的其中之一匹配
        /// </summary>
        /// <param name="tags"></param>
        /// <returns></returns>
        public bool ExistsTagValue(params string[] tags) => _tagPropertyDatas.Exists(d => d.ExistsTag(tags));

        /// <summary>
        /// 是否存在标签：与输入标签字符串数组中的其中之一匹配
        /// </summary>
        /// <param name="key"></param>
        /// <param name="tags"></param>
        /// <returns></returns>
        public bool ExistsTag(string key, params string[] tags) => _tagPropertyDatas.Exists(d => d.key == key && d.ExistsTag(tags));

        /// <summary>
        /// 获取第一个数据
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public TagPropertyData GetFirstData(string key) => _tagPropertyDatas.FirstOrDefault(t => t.key == key);

        /// <summary>
        /// 获取第一个符合键的值
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public string GetFirstValue(string key) => _tagPropertyDatas.Find(d => d.key == key)?.value ?? "";

        /// <summary>
        /// 获取第一个符合键的值
        /// </summary>
        /// <param name="keys"></param>
        /// <returns></returns>
        public string GetFirstValue(List<string> keys) => _tagPropertyDatas.Find(d => keys.Contains(d.key))?.value ?? "";

        /// <summary>
        /// 设置第一个符合键的值
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public bool SetFirstValue(string key, string value)
        {
            var data = _tagPropertyDatas.Find(d => d.key == key);
            if (data != null)
            {
                data.value = value;
                return true;
            }
            return false;
        }

        /// <summary>
        /// 获取所有关键字
        /// </summary>
        /// <returns></returns>
        public string[] GetTagKeys() => _tagPropertyDatas.Cast(d => d.key).ToArray();

        /// <summary>
        /// 获取所有标签：与关键字相同的所有标签
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public string[] GetTagValues(string key) => _tagPropertyDatas.Where(t => t.key == key).Cast(d => d.value).ToArray();

        /// <summary>
        /// 添加
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        public bool AddTagWithDistinct(string key, string value = "")
        {
            if (_tagPropertyDatas.Exists(item => item.key == key && item.value == value)) return false;

            _tagPropertyDatas.Add(new TagPropertyData(key, value));
            return true;
        }

        /// <summary>
        /// 移除
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public int RemoveAllTag(string key) => _tagPropertyDatas.RemoveAll(item => item.key == key);

        /// <summary>
        /// 移除
        /// </summary>
        /// <param name="key"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public int RemoveAllTag(string key, string value) => _tagPropertyDatas.RemoveAll(item => item.key == key && item.value == value);

        /// <summary>
        /// 获取标签集
        /// </summary>
        /// <returns></returns>
        public IEnumerable<ITagKeyValue> GetTags() => _tagPropertyDatas;
    }

    #endregion

    /// <summary>
    /// 标签属性助手
    /// </summary>
    public static class TagPropertyHelper
    {
        /// <summary>
        /// 存在相同标签键值
        /// </summary>
        /// <param name="tagPropertyHost"></param>
        /// <param name="keys"></param>
        /// <param name="otherTagPropertyHost"></param>
        /// <returns></returns>
        public static bool ExistsSameTagKeyValue(this ITagPropertyHost tagPropertyHost, List<string> keys, ITagPropertyHost otherTagPropertyHost)
        {
            if (tagPropertyHost == null || otherTagPropertyHost == null || keys == null || keys.Count == 0) return false;

            return tagPropertyHost.tagProperty.ExistsSameTagKeyValue(keys, otherTagPropertyHost.tagProperty);
        }

        /// <summary>
        /// 存在相同标签键值
        /// </summary>
        /// <param name="tagProperty"></param>
        /// <param name="keys"></param>
        /// <param name="otherTagProperty"></param>
        /// <returns></returns>
        public static bool ExistsSameTagKeyValue(this ITagProperty tagProperty, List<string> keys, ITagProperty otherTagProperty)
        {
            if (tagProperty == null || otherTagProperty == null || keys == null || keys.Count == 0) return false;

            foreach (string key in keys)
            {
                if (string.IsNullOrEmpty(key)) continue;

                foreach (var kv0 in tagProperty.GetTags())
                {
                    if (key == kv0.key)
                    {
                        foreach (var kv1 in otherTagProperty.GetTags())
                        {
                            if (key == kv1.key && kv0.value == kv1.value) return true;
                        }
                    }
                }
            }
            return false;
        }
    }

    #endregion

    #region 用途

    /// <summary>
    /// 用途：
    /// 1、用于记录用途宿主被其它对象以指定用途占用的情况
    /// 2、使用用途作为关键字将占用对象进行分组归类
    /// </summary>
    public class Usage
    {
        /// <summary>
        /// 用途宿主
        /// </summary>
        public IUsageHost usageHost { get; private set; }

        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="usageHost"></param>
        /// <exception cref="ArgumentNullException"></exception>
        public Usage(IUsageHost usageHost)
        {
            this.usageHost = usageHost ?? throw new ArgumentNullException(nameof(usageHost));
        }

        /// <summary>
        /// 用途字典：键=用途名称（分组），值=占用对象集合
        /// </summary>
        public Dictionary<string, UsageData> usageMap { get; } = new Dictionary<string, UsageData>();

        /// <summary>
        /// 能否添加
        /// </summary>
        /// <param name="key"></param>
        /// <param name="canAdd"></param>
        /// <returns></returns>
        public bool CanAdd(string key, Func<UsageData, InteractObject> canAdd) => canAdd != null && GetOrCreate(key) is UsageData usageData ? canAdd(usageData) : false;

        /// <summary>
        /// 添加
        /// </summary>
        /// <param name="key"></param>
        /// <param name="getUser"></param>
        /// <returns></returns>
        public bool Add(string key, Func<UsageData, InteractObject> getUser)
        {
            if (getUser == null) return false;
            var usageData = GetOrCreate(key);
            if (usageData == null) return false;
            var interactObject = getUser(usageData);
            if (interactObject && usageData.users.AddWithDistinct(interactObject))
            {
                if (usageHost.OnAddUsage(usageData, interactObject))
                {
                    return true;
                }
                else
                {
                    usageData.users.Remove(interactObject);
                }
            }
            return false;
        }

        /// <summary>
        /// 添加
        /// </summary>
        /// <param name="key"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        public bool Add(string key, InteractObject user) => Add(key, u => user);

        /// <summary>
        /// 能否移除
        /// </summary>
        /// <param name="key"></param>
        /// <param name="canRemove"></param>
        /// <returns></returns>
        public bool CanRemove(string key, Func<UsageData, InteractObject> canRemove) => canRemove != null && Get(key) is UsageData usageData ? canRemove(usageData) : false;

        /// <summary>
        /// 移除
        /// </summary>
        /// <param name="key"></param>
        /// <param name="matchRemove"></param>
        /// <returns></returns>
        public bool Remove(string key, Func<UsageData, InteractObject> matchRemove)
        {
            if (matchRemove == null) return false;
            var usageData = Get(key);
            if (usageData == null) return false;
            var interactObject = matchRemove(usageData);
            if (interactObject && usageData.users.Remove(interactObject))
            {
                if (usageHost.OnRemoveUsage(usageData, interactObject))
                {
                    return true;
                }
                else
                {
                    usageData.users.Add(interactObject);
                }
                return true;
            }
            return false;
        }

        /// <summary>
        /// 移除
        /// </summary>
        /// <param name="key"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        public bool Remove(string key, InteractObject user) => Remove(key, u => user);

        /// <summary>
        /// 是否包含关键字
        /// </summary>
        /// <param name="key"></param>
        /// <param name="contains"></param>
        /// <returns></returns>
        public bool Contains(string key, Func<UsageData, bool> contains) => contains != null && Get(key) is UsageData usageData ? contains(usageData) : false;

        /// <summary>
        /// 是否包含匹配的关键字和使用者
        /// </summary>
        /// <param name="key"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        public bool Contains(string key, InteractObject user) => Contains(key, usageData => usageData.Contains(user));

        /// <summary>
        /// 获取匹配关键字和条件的数量
        /// </summary>
        /// <param name="key"></param>
        /// <param name="match"></param>
        /// <returns></returns>
        public int GetCount(string key, Func<UsageData, int> match) => match != null && Get(key) is UsageData usageData ? match(usageData) : 0;

        /// <summary>
        /// 获取匹配关键字的数量
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public int GetCount(string key) => Get(key) is UsageData usageData ? usageData.userCount : 0;

        /// <summary>
        /// 获取匹配关键字的用途数据
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public UsageData Get(string key) => !string.IsNullOrEmpty(key) && usageMap.TryGetValue(key, out var usageData) ? usageData : default;

        /// <summary>
        /// 获取或创建匹配关键字的用途数据
        /// </summary>
        /// <param name="key"></param>
        /// <returns></returns>
        public UsageData GetOrCreate(string key) => string.IsNullOrEmpty(key) ? default : (Get(key) ?? (usageMap[key] = new UsageData(key)));
    }

    /// <summary>
    /// 用途数据
    /// </summary>
    public class UsageData
    {
        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="key"></param>
        public UsageData(string key)
        {
            this.key = key;
        }

        /// <summary>
        /// 关键字
        /// </summary>
        public string key { get; private set; }

        /// <summary>
        /// 使用者列表
        /// </summary>
        public List<InteractObject> users { get; private set; } = new List<InteractObject>();

        /// <summary>
        /// 使用者数量
        /// </summary>
        public int userCount => users.Count;

        /// <summary>
        /// 是否包含使用者
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public bool Contains(InteractObject user) => users.Contains(user);
    }

    /// <summary>
    /// 用途宿主接口
    /// </summary>
    public interface IUsageHost
    {
        /// <summary>
        /// 添加用途
        /// </summary>
        /// <param name="usageData"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        bool OnAddUsage(UsageData usageData, InteractObject user);

        /// <summary>
        /// 移除用途
        /// </summary>
        /// <param name="usageData"></param>
        /// <param name="user"></param>
        /// <returns></returns>
        bool OnRemoveUsage(UsageData usageData, InteractObject user);
    }

    #endregion
}
