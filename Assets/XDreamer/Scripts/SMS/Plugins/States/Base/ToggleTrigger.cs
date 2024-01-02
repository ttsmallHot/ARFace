﻿using XCSJ.Attributes;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginSMS.Kernel;

namespace XCSJ.PluginSMS.States.Base
{
    /// <summary>
    /// 切换触发器
    /// </summary>
    /// <typeparam name="T"></typeparam>
    [Name("切换触发器")]
    [XCSJ.Attributes.Icon(EIcon.Trigger)]
    public abstract class ToggleTrigger<T> : Trigger<T> where T : ToggleTrigger<T>
    {
        /// <summary>
        /// 初始化规则
        /// </summary>
        [Name("初始化规则")]
        [EnumPopup]
        public EToggleEntryRule initRule = EToggleEntryRule.None;

        /// <summary>
        /// 进入时规则
        /// </summary>
        [Name("进入时规则")]
        [EnumPopup]
        public EToggleEntryRule entryRule = EToggleEntryRule.None;

        /// <summary>
        /// 退出时规则
        /// </summary>
        [Name("退出时规则")]
        [EnumPopup]
        public EToggleEntryRule exitRule = EToggleEntryRule.None;

        /// <summary>
        /// 触发类型
        /// </summary>
        [Name("触发类型")]
        [EnumPopup]
        public EToggleTriggerType triggerType = EToggleTriggerType.Switch;

        /// <summary>
        /// 切换状态
        /// </summary>
        protected virtual bool toggleState { get; set; }

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="stateData"></param>
        /// <returns></returns>
        public override bool Init(StateData stateData)
        {
            HandleRule(initRule);

            return base.Init(stateData);
        }

        /// <summary>
        /// 进入
        /// </summary>
        /// <param name="data"></param>
        public override void OnEntry(StateData data)
        {
            base.OnEntry(data);

            HandleRule(entryRule);
        }

        /// <summary>
        /// 退出
        /// </summary>
        /// <param name="data"></param>
        public override void OnExit(StateData data)
        {
            HandleRule(exitRule);

            base.OnExit(data);
        }

        /// <summary>
        /// 完成
        /// </summary>
        /// <returns></returns>
        public override bool Finished()
        {
            if (!DataValidity()) return false;

            switch (triggerType)
            {
                case EToggleTriggerType.None: return true;
                case EToggleTriggerType.On: return toggleState;
                case EToggleTriggerType.Off: return !toggleState;
                case EToggleTriggerType.Switch:
                case EToggleTriggerType.SwitchOn:
                case EToggleTriggerType.SwitchOff: return finished;
                default: return false;
            }
        }

        /// <summary>
        /// 处理
        /// </summary>
        /// <param name="rule"></param>
        protected virtual void HandleRule(EToggleEntryRule rule)
        {
            switch (rule)
            {
                case EToggleEntryRule.On:
                    {
                        toggleState = true;
                        break;
                    }
                case EToggleEntryRule.Off:
                    {
                        toggleState = false;
                        break;
                    }
                case EToggleEntryRule.Switch:
                    {
                        toggleState = !toggleState;
                        break;
                    }
            }
        }
    }

    /// <summary>
    /// 切换规则
    /// </summary>
    [Name("切换规则")]
    public enum EToggleEntryRule
    {
        /// <summary>
        /// 无
        /// </summary>
        [Name("无")]
        None,

        /// <summary>
        /// 开
        /// </summary>
        [Name("开")]
        On,

        /// <summary>
        /// 关
        /// </summary>
        [Name("关")]
        Off,

        /// <summary>
        /// 切换
        /// </summary>
        [Name("切换")]
        Switch
    }

    /// <summary>
    /// 切换触发类型
    /// </summary>
    [Name("切换触发类型")]
    public enum EToggleTriggerType
    {
        /// <summary>
        /// 无
        /// </summary>
        [Name("无")]
        None = -1,

        /// <summary>
        /// 开
        /// </summary>
        [Name("开")]
        On,

        /// <summary>
        /// 关
        /// </summary>
        [Name("关")]
        Off,

        /// <summary>
        /// 切换
        /// </summary>
        [Name("切换")]
        Switch,

        /// <summary>
        /// 切换开
        /// </summary>
        [Name("切换开")]
        SwitchOn,

        /// <summary>
        /// 切换关
        /// </summary>
        [Name("切换关")]
        SwitchOff,
    }
}
