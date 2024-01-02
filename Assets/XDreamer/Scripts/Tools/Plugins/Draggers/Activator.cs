using XCSJ.Attributes;
using XCSJ.Extension.Interactions.Base;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginCommonUtils.Tools;

namespace XCSJ.PluginTools.Draggers
{
    /// <summary>
    /// 激活器
    /// </summary>
    [Name("激活器")]
    [Tool(ToolsCategory.InteractCommon, rootType = typeof(ToolsManager))]
    public class Activator : Interactor
    {
        /// <summary>
        /// 激活
        /// </summary>
        [InteractCmd]
        [Name("激活")]
        public void Active() => TryInteract(nameof(Active));

        /// <summary>
        /// 非激活
        /// </summary>
        [InteractCmd]
        [Name("非激活")]
        public void Unactive() => TryInteract(nameof(Unactive));
    }
}
