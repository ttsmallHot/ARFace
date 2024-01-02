using System;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils;
using XCSJ.Extension.CNScripts;
using XCSJ.Extension.CNScripts.UGUI;
using XCSJ.PluginCommonUtils;

namespace XCSJ.EditorExtension.CNScripts.UGUI
{
    /// <summary>
    /// UGUI下拉选择框脚本事件检查器
    /// </summary>
    [Name("UGUI下拉选择框脚本事件检查器")]
    [CanEditMultipleObjects, CustomEditor(typeof(UGUIDropdownScriptEvent))]
    public class UGUIDropdownScriptEventInspector : BaseScriptEventInspector<UGUIDropdownScriptEvent, EUGUIDropdownScriptEventType, UGUIDropdownScriptEventFunction, UGUIDropdownScriptEventFunctionCollection>
    {
        /// <summary>
        /// 创建脚本事件
        /// </summary>
        [MenuItem(EditorCNScriptHelper.UGUIMenu + UGUIDropdownScriptEvent.Title, false)]
        public static void CreateScriptEvent()
        {
            CreateComponentInternal();
        }

        /// <summary>
        /// 验证创建脚本事件
        /// </summary>
        /// <returns></returns>
        [MenuItem(EditorCNScriptHelper.UGUIMenu + UGUIDropdownScriptEvent.Title, true)]
        public static bool ValidateCreateScriptEvent()
        {
            return ValidateCreateComponentWithRequireInternal<Dropdown>();
        }
    }
}
