using System.Collections.Generic;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;

namespace XCSJ.PluginTools.Libraries.Tools
{
    /// <summary>
    /// 基础库
    /// </summary>
    public abstract class BaseLibrary : InteractProvider
    {

    }

    /// <summary>
    /// 基础库
    /// </summary>
    /// <typeparam name="TObject"></typeparam>
    public abstract class BaseLibrary<TObject>: BaseLibrary
    {
        /// <summary>
        /// 对象
        /// </summary>
        public List<TObject> _objects = new List<TObject>();
    }
}
