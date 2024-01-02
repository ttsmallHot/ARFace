using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.PluginTools;

namespace XCSJ.CommonUtils.PluginCrossSectionShader
{
    /// <summary>
    /// 可剖切接口
    /// </summary>
    public interface ICuttable : IInteractable { }

    /// <summary>
    /// 可剖切对象
    /// </summary>
    [Name("可剖切对象")]
    [DisallowMultipleComponent]
    [Tool(ToolsExtensionCategory.Model, nameof(InteractableVirtual), rootType = typeof(ToolsManager))]
    [RequireManager(typeof(ToolsManager), typeof(ToolsExtensionManager))]
    [Owner(typeof(ToolsManager))]
    public class Cuttable : InteractableVirtual, ICuttable
    {
        /// <summary>
        /// 是否被切割
        /// </summary>
        public bool cutted { get; private set; } = false;

    }
}

