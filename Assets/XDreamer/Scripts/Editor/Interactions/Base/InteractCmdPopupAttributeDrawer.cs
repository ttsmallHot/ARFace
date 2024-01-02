using UnityEditor;
using UnityEngine;
using XCSJ.EditorCommonUtils;
using XCSJ.Extension.Base.Dataflows.Binders;
using XCSJ.Extension.Interactions.Base;
using XCSJ.Extension.Interactions.Tools;

namespace XCSJ.EditorExtension.Base.Interactions.Base
{
    /// <summary>
    /// 交互命令弹出特性绘制器
    /// </summary>
    [CustomPropertyDrawer(typeof(InteractCmdPopupAttribute))]
    public class InteractCmdPopupAttributeDrawer : PropertyDrawer<InteractCmdPopupAttribute>
    {
        /// <summary>
        /// 绘制GUI
        /// </summary>
        /// <param name="rect"></param>
        /// <param name="property"></param>
        /// <param name="label"></param>
        public override void OnGUI(Rect rect, SerializedProperty property, GUIContent label)
        {
            label = EditorGUI.BeginProperty(rect, label, property);
            {
                var tagObject = property.serializedObject.targetObject as ExtensionalInteractObject;
                var interactCmdDatas = tagObject.interactCmdDatas;
                interactCmdDatas.TryGetFriendlyCmd(property.stringValue, out var friendlyCmd);
                EditorGUI.BeginChangeCheck();
                {
                    // 下拉友好命令列表
                    friendlyCmd = UICommonFun.Popup(rect, label, friendlyCmd, interactCmdDatas.friendlyCmdArray);
                }
                if (EditorGUI.EndChangeCheck())
                {
                    if (interactCmdDatas.TryGetCmd(friendlyCmd, out var cmd))
                    {
                        property.stringValue = cmd;
                    }
                }
            }
            EditorGUI.EndProperty();
        }

    }
}

