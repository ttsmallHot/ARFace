﻿using System;
using System.Collections.Generic;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Kernel;
using XCSJ.Helper;
using XCSJ.LitJson;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginMMO.NetSyncs;
using XCSJ.PluginSMS.Base;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.CNScripts;
using XCSJ.PluginSMS.States;
using XCSJ.PluginSMS.States.Base;
using XCSJ.PluginSMS.Transitions.Base;
using XCSJ.Scripts;
using XCSJ.Tools;
using UnityEngine.Serialization;
using XCSJ.Extension.Base.Dataflows.Base;
using XCSJ.PluginMMO.Base;

namespace XCSJ.PluginMMO.Transitions
{
    /// <summary>
    /// 网络状态比较:将网络状态的值与待比较值进行比较判断；
    /// </summary>
    [XCSJ.Attributes.Icon(EIcon.Property)]
    [ComponentMenu(MMOHelperExtension.TitleDirectory + Title, typeof(MMOManager))]
    [Name(Title, nameof(NetStateCompare))]
    [Tip("将网络状态的值与待比较值进行比较判断", "Compare and judge the value of network state with the value to be compared")]
    [RequireManager(typeof(MMOManager))]
    public class NetStateCompare : TransitionComponent
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "网络状态比较";

        /// <summary>
        /// 比较运算符
        /// </summary>
        [Name("比较运算符")]
        [FormerlySerializedAs("compareType")]
        [EnumPopup]
        public ECompareOperator _compareOperator = ECompareOperator.Equal;

        /// <summary>
        /// 待比较网络状态
        /// </summary>
        [Name("待比较网络状态")]
        public ENetStatePropertyValue _compareNetState = new ENetStatePropertyValue();

        /// <summary>
        /// 比较规则
        /// </summary>
        [Name("比较规则")]
        [EnumPopup]
        public ECompareRule _compareRule = ECompareRule.String;

        private bool Check()
        {
            if (!_compareNetState.TryGetValue(out var compareValue)) return false;

            return VariableCompareHelper.ValueCompareValue(MMOHelper.netState.ToString(), _compareOperator, compareValue.ToString(), _compareRule);
        }

        /// <summary>
        /// 完成
        /// </summary>
        /// <returns></returns>
        public override bool Finished()
        {
            return base.Finished() || Check();
        }

        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString()
        {
            return "网络状态" + VariableCompareHelper.ToAbbreviations(_compareOperator) + _compareNetState.ToFriendlyString();
        }
    }
}
