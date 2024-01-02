using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Extension.Base.Dataflows.Base;
using XCSJ.Extension.Interactions.Base;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using static XCSJ.PluginTools.Motions.InputWaitPlayer;

namespace XCSJ.Extension.Interactions.Tools
{
    /// <summary>
    /// 比较对象类型
    /// </summary>
    public enum ECompareObjectType
    {
        /// <summary>
        /// 交互器
        /// </summary>
        [Name("交互器")]
        Interactor,

        /// <summary>
        /// 命令名称
        /// </summary>
        [Name("命令名称")]
        CmdName,

        /// <summary>
        /// 可交互对象
        /// </summary>
        [Name("可交互对象")]
        Interactable,

        /// <summary>
        /// 标签值
        /// </summary>
        [Name("标签值")]
        TagValue,
    }

    /// <summary>
    /// 比较条件
    /// </summary>
    public enum ECompereCondition
    {
        /// <summary>
        /// 相等
        /// </summary>
        [Name("相等")]
        Equal,

        /// <summary>
        /// 不等
        /// </summary>
        [Name("不等")]
        NotEqual,
    }

    /// <summary>
    /// 基础比较数据
    /// </summary>
    public abstract class BaseCompareData
    {
        /// <summary>
        /// 比较对象类型
        /// </summary>
        [Name("比较对象类型")]
#if UNITY_2021_3_OR_NEWER
        [DynamicLabel]
#endif
        [EnumPopup]
        public ECompareObjectType _compareObjectType = ECompareObjectType.Interactor;

        /// <summary>
        /// 比较条件
        /// </summary>
        [Name("比较条件")]
#if UNITY_2021_3_OR_NEWER
        [DynamicLabel]
#endif
        [EnumPopup]
        public ECompereCondition _compereCondition = ECompereCondition.Equal;

        /// <summary>
        /// 输出命令名称
        /// </summary>
        [Name("输出命令名称")]
        [HideInSuperInspector(nameof(_compareObjectType), EValidityCheckType.NotEqual, ECompareObjectType.CmdName)]
        public StringPropertyValue _outCmdName = new StringPropertyValue();

        /// <summary>
        /// 标签值
        /// </summary>
        [Name("标签值")]
        [HideInSuperInspector(nameof(_compareObjectType), EValidityCheckType.NotEqual, ECompareObjectType.TagValue)]
        public StringPropertyValue _tagvalue = new StringPropertyValue();

        /// <summary>
        /// 交互器
        /// </summary>
        public abstract InteractObject interactor { get; }

        /// <summary>
        /// 可交互对象
        /// </summary>
        public abstract InteractObject interactable { get; }

        /// <summary>
        /// 比较
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public bool Compere(InteractData interactData)
        {
            switch (_compereCondition)
            {
                case ECompereCondition.Equal: return IsEquals(interactData);
                case ECompereCondition.NotEqual: return !IsEquals(interactData);
            }
            return false;
        }

        private bool IsEquals(InteractData interactData)
        {
            switch (_compareObjectType)
            {
                case ECompareObjectType.Interactor: return InteractorEquals(interactData.interactor);
                case ECompareObjectType.CmdName: return CmdNameEquals(interactData.cmdName);
                case ECompareObjectType.Interactable: return InteractableEquals(interactData.interactable);
                case ECompareObjectType.TagValue: return TagValueEquals(interactData.interactor.tag);
            }
            return false;
        }

        private bool InteractorEquals(InteractObject interactor) => interactor != null && interactor == this.interactor;

        private bool CmdNameEquals(string cmdName) => !string.IsNullOrEmpty(cmdName) && cmdName == _outCmdName.GetValue();

        private bool InteractableEquals(InteractObject interactable) => interactable && interactable == this.interactable;

        private bool TagValueEquals(string tagValue) => !string.IsNullOrEmpty(tagValue) && tagValue == _tagvalue.GetValue();

        /// <summary>
        /// 数据有效性
        /// </summary>
        /// <returns></returns>
        public bool DataValidity()
        {
            switch (_compareObjectType)
            {
                case ECompareObjectType.Interactor: return interactor;
                case ECompareObjectType.CmdName: return !string.IsNullOrEmpty(_outCmdName.GetValue());
                case ECompareObjectType.Interactable: return interactable;
                case ECompareObjectType.TagValue: return !string.IsNullOrEmpty(_tagvalue.GetValue());
            }
            return false;
        }
    }

    /// <summary>
    /// 交互数据模版
    /// </summary>
    /// <typeparam name="TInteractor"></typeparam>
    /// <typeparam name="TInteractable"></typeparam>
    public class BaseCompareData<TInteractor, TInteractable> : BaseCompareData
        where TInteractor : InteractObject
        where TInteractable : InteractObject
    {
        /// <summary>
        /// 交互器
        /// </summary>
        [Name("交互器")]
        [HideInSuperInspector(nameof(_compareObjectType), EValidityCheckType.NotEqual, ECompareObjectType.Interactor)]
        [ComponentPopup]
        public TInteractor _interactor;

        /// <summary>
        /// 可交互对象
        /// </summary>
        [Name("可交互对象")]
        [HideInSuperInspector(nameof(_compareObjectType), EValidityCheckType.NotEqual, ECompareObjectType.Interactable)]
        [ComponentPopup]
        public TInteractable _interactable;

        /// <summary>
        /// 交互器
        /// </summary>
        public override InteractObject interactor => _interactor;

        /// <summary>
        /// 可交互对象
        /// </summary>
        public override InteractObject interactable => _interactable;
    }

    /// <summary>
    /// 比较数据列表规则
    /// </summary>
    public enum ECompareDataListRule
    {
        /// <summary>
        /// 所有
        /// </summary>
        [Name("所有")]
        [Tip("所有比较条件都匹配", "All comparison criteria match")]
        All,

        /// <summary>
        /// 任意
        /// </summary>
        [Name("任意")]
        [Tip("比较条件任意一个匹配", "Compare any matching condition")]
        Any,
    }

    /// <summary>
    /// 基础交互比较器
    /// </summary>
    public abstract class BaseInteractComparer<T> where T : BaseCompareData
    {
        /// <summary>
        /// 交互状态
        /// </summary>
        [Name("交互状态")]
        [EnumPopup]
        public EInteractState _interactState = EInteractState.Finished;

        /// <summary>
        /// 比较数据列表规则
        /// </summary>
        [Name("比较数据列表规则")]
        [EnumPopup]
        public ECompareDataListRule _compareDataListRule = ECompareDataListRule.All;

        /// <summary>
        /// 比较数据列表
        /// </summary>
        [Name("比较数据列表")]
        [Tip("列表数量为0时比较结果为False", "The comparison result is false when the number of lists is 0")]
        public List<T> _compereDatas = new List<T>();

        /// <summary>
        /// 比较数据列表
        /// </summary>
        protected virtual List<T> compereDatas => _compereDatas;

        /// <summary>
        /// 输入交互器列表
        /// </summary>
        public List<InteractObject> inputInteractors => compereDatas.Where(d => d._compareObjectType == ECompareObjectType.Interactor).Cast(c => c.interactor).ToList();

        /// <summary>
        /// 比较
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public bool Compare(InteractData interactData) => Compare(interactData.interactor, interactData);

        /// <summary>
        /// 比较
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public bool Compare(InteractObject sender, InteractData interactData)
        {
            if (interactData == null || _interactState != interactData.interactState || compereDatas.Count == 0) return false;

            switch (_compareDataListRule)
            {
                case ECompareDataListRule.All: return compereDatas.All(d => d.Compere(interactData));
                case ECompareDataListRule.Any: return compereDatas.Any(d => d.Compere(interactData));
            }
            return false;
        }

        /// <summary>
        /// 数据有效性
        /// </summary>
        /// <returns></returns>
        public bool DataValidity() => compereDatas.All(d => d.DataValidity());
    }

    /// <summary>
    /// 比较数据
    /// </summary>
    [Serializable]
    public class CompareData : BaseCompareData<InteractObject, InteractObject> { }

    /// <summary>
    /// 交互比较器：比较命令字符串、交互器和可交互对象是否匹配
    /// </summary>
    [Serializable]
    public class InteractComparer : BaseInteractComparer<CompareData>
    {
        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public string ToFriendlyString()
        {
            if (_compereDatas.Count > 0)
            {
                return _compereDatas.Find(d => d._compareObjectType == ECompareObjectType.CmdName)?._outCmdName.GetValue() ?? "";
            }
            return "";
        }
    }

    /// <summary>
    /// 执行交互信息
    /// </summary>
    [Serializable]
    public class ExecuteInteractInfo : ExecuteInteractInfo<InteractObject>
    {
        /// <summary>
        /// 构造函数
        /// </summary>
        public ExecuteInteractInfo() { }
    }

    /// <summary>
    /// 执行交互信息
    /// </summary>
    public class ExecuteInteractInfo<T> where T : InteractObject
    {
        /// <summary>
        /// 交互器
        /// </summary>
        [Name("交互器")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [ComponentPopup]
        public T _interactor;

        /// <summary>
        /// 命令名称
        /// </summary>
        [Name("输入命令名称")]
        public StringPropertyValue _inCmdName = new StringPropertyValue();

        /// <summary>
        /// 可交互对象
        /// </summary>
        [Name("可交互对象")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [ComponentPopup]
        public InteractableEntity _interactableEntity = null;

        /// <summary>
        /// 执行交互
        /// </summary>
        /// <returns></returns>
        public virtual bool TryInteract()
        {
            if (_interactor && _inCmdName.TryGetValue(out var cmdName))
            {
                return _interactor.TryInteract(cmdName, out _, _interactableEntity);
            }
            return false;
        }
    }
}
