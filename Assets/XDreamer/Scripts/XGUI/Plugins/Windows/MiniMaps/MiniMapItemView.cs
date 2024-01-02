using UnityEngine;
using XCSJ.Attributes;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.PluginTools;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginXGUI.Windows.MiniMaps
{
    /// <summary>
    /// ����ͼ����ͼ
    /// </summary>
    [Name("����ͼ����ͼ")]
    [XCSJ.Attributes.Icon(EIcon.MiniMap)]
    [Tool(ToolsCategory.MiniMap, nameof(MiniMap), rootType = typeof(XGUIManager))]
    [RequireManager(typeof(XGUIManager))]
    [Owner(typeof(XGUIManager))]
    [RequireComponent(typeof(RectTransform))]
    public class MiniMapItemView : View
    {
        
    }
}

