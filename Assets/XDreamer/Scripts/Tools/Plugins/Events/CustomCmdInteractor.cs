using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.Events;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Extension.Interactions.Base;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginCommonUtils.Tools;

namespace XCSJ.PluginTools.Events
{
    /// <summary>
    /// 自定义命令交互器
    /// </summary>
    [Name("自定义命令交互器")]
    [XCSJ.Attributes.Icon(EIcon.Event)]
    [Tool(ToolsCategory.InteractCommon, rootType = typeof(ToolsManager))]
    public sealed class CustomCmdInteractor : Interactor
    {
        /// <summary>
        /// 输入命令名称列表
        /// </summary>
        public override List<string> inCmdNameList => _eventDatas.Cast(d => d._cmdName).Distinct().ToList();

        /// <summary>
        /// 事件数据列表
        /// </summary>
        [Name("事件数据列表")]
        public List<InteractorUnityEventData> _eventDatas = new List<InteractorUnityEventData>();

        /// <summary>
        /// 交互回调
        /// </summary>
        /// <param name="interactData"></param>
        /// <param name="interactable"></param>
        /// <returns></returns>
        protected override bool OnInteractSingle(InteractData interactData, InteractObject interactable) => Invoke(interactData);

        /// <summary>
        /// 调用
        /// </summary>
        /// <param name="interactData"></param>
        private bool Invoke(InteractData interactData)
        {
            var result = false;
            foreach (var data in _eventDatas)
            {
                if (data._cmdName == interactData.cmdName)
                {
                    data._interactorUnityEvent.Invoke(interactData);
                    result = true;
                }
            }
            return result;
        }
    }

    /// <summary>
    /// 模式交互器Unity事件数据
    /// </summary>
    [Serializable]
    public class InteractorUnityEventData
    {
        /// <summary>
        /// 命令名称
        /// </summary>
        [Name("命令名称")]
        public string _cmdName = "";

        /// <summary>
        /// 交互器事件
        /// </summary>
        [Name("交互器事件")]
        public InteractUnityEvent _interactorUnityEvent = new InteractUnityEvent();
    }
}
