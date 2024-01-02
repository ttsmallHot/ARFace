﻿using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Dataflows.Base;
using XCSJ.Extension.Base.Dataflows.Binders;
using XCSJ.Extension.CNScripts;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;
using XCSJ.Scripts;

namespace XCSJ.PluginSMS.States.CNScripts
{
    /// <summary>
    /// 变量比较:变量比较组件是比较变量与某个值相等的触发器；当比较条件成立后，状态组件切换为完成态；
    /// </summary>
    [Name(Title, nameof(VariableCompare))]
    [Tip("变量比较组件是比较变量与某个值相等的触发器；当比较条件成立后，状态组件切换为完成态；", "The variable comparison component is a trigger that compares a variable equal to a certain value; When the comparison condition is established, the state component switches to the completed state;")]
    [XCSJ.Attributes.Icon(EIcon.Variable)]
    [ComponentMenu(CNScriptCategory.TitleDirectory + Title, typeof(ScriptManager))]
    public class VariableCompare : BasePropertyCompare<VariableCompare>, ISerializationCallbackReceiver, ITypeBinderGetter
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "变量比较";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [Name(Title, nameof(VariableCompare))]
        [Tip("变量比较组件是比较变量与某个值相等的触发器；当比较条件成立后，状态组件切换为完成态；", "The variable comparison component is a trigger that compares a variable equal to a certain value; When the comparison condition is established, the state component switches to the completed state;")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        [StateLib(CNScriptCategory.Title, typeof(ScriptManager))]
        [StateComponentMenu(CNScriptCategory.TitleDirectory + Title, typeof(ScriptManager))]
        public static State Create(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 变量
        /// </summary>
        [Name("变量")]
        [VarString(EVarStringHierarchyKeyMode.Get)]
        public string variable;

        #region ISerializationCallbackReceiver

        void ISerializationCallbackReceiver.OnBeforeSerialize() { }

        void ISerializationCallbackReceiver.OnAfterDeserialize()
        {
            CommonFun.VarNameToVarString(ref variable);
        }

        #endregion

        /// <summary>
        /// 比较运算符
        /// </summary>
        [Name("比较运算符")]
        [EnumPopup]
        [FormerlySerializedAs("compareType")]
        public ECompareOperator _compareOperator = ECompareOperator.Equal;

        /// <summary>
        /// 待比较值
        /// </summary>
        [Name("待比较值")]
        public Argument _compareValue = new Argument();

        /// <summary>
        /// 比较规则
        /// </summary>
        [Name("比较规则")]
        [EnumPopup]
        public ECompareRule compareRule = ECompareRule.String;

        /// <summary>
        /// 完成
        /// </summary>
        /// <returns></returns>
        public override bool Finished()
        {
            if (variable.TryGetHierarchyVarValue(out var variableValue) && _compareValue.GetValueToString() is string tmpCompareValue)
            {
                return VariableCompareHelper.ValueCompareValue(variableValue, _compareOperator, tmpCompareValue, compareRule);
            }
            return false;
        }

        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString()
        {
            return variable + VariableCompareHelper.ToAbbreviations(_compareOperator) + _compareValue.ToFriendlyString();
        }


        #region ITypeBinderGetter

        /// <summary>
        /// 获取器所有者
        /// </summary>
        public UnityEngine.Object owner => this;

        /// <summary>
        /// 类型绑定器获取器
        /// </summary>
        /// <returns></returns>
        public IEnumerable<ITypeBinder> GetTypeBinders() => new ITypeBinder[] { _compareValue._fieldPropertyMethodBinderValue };

        #endregion
    }
}
