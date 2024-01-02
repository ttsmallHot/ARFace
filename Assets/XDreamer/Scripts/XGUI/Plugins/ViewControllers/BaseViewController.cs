using XCSJ.Extension.Base.Components;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginXGUI.ViewControllers
{
    /// <summary>
    /// 视图控制器基类
    /// </summary>
    [RequireManager(typeof(XGUIManager))]
    public abstract class BaseViewController : View, IController
    {
    }
}
