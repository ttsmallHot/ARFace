﻿using UnityEditor;
using UnityEngine;
using XCSJ.EditorExtension.Base;
using XCSJ.EditorExtension.Base.Attributes;
using static XCSJ.PluginTools.Inputs.KeyCodeInput;

namespace XCSJ.EditorTools.Inputs
{
    /// <summary>
    /// 交互器输入绘制器
    /// </summary>
    [CustomPropertyDrawer(typeof(KeyCodeCmd))]
    public class KeyCodeCmdDrawer : PropertyDrawerAsArrayElement<KeyCodeCmdDrawer.KeyCodeCmdData>
    {
        /// <summary>
        /// 数据项
        /// </summary>
        public class KeyCodeCmdData : PressCmdTriggerData
        {
            private SerializedProperty keyCodeSP;

            /// <summary>
            /// 初始化
            /// </summary>
            /// <param name="property"></param>
            public override void Init(SerializedProperty property)
            {
                base.Init(property);

                keyCodeSP = property.FindPropertyRelative(nameof(KeyCodeCmd._keyCode));
            }

            /// <summary>
            /// 行数量
            /// </summary>
            /// <returns></returns>
            public override int GetRowCount()
            {
                var rowCount = base.GetRowCount();
                if (display) ++rowCount;
                return rowCount;
            }

            /// <summary>
            /// 绘制UI
            /// </summary>
            /// <param name="rect"></param>
            /// <param name="label"></param>
            /// <returns></returns>
            public override Rect OnGUI(Rect rect, GUIContent label)
            {
                rect = base.OnGUI(rect, label);
                if (display)
                {
                    EditorGUI.BeginDisabledGroup(useRuleSP.intValue == 0);
                    rect = PropertyDrawerHelper.DrawProperty(rect, keyCodeSP);
                    EditorGUI.EndDisabledGroup();
                }
                return rect;
            }
        }

        /// <summary>
        /// 获取对象绘制高度
        /// </summary>
        /// <param name="property"></param>
        /// <param name="label"></param>
        /// <returns></returns>
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            var rowCount = cache.GetData(property).GetRowCount();
            return rowCount * (base.GetPropertyHeight(property, label) + 2);
        }

        /// <summary>
        /// 绘制
        /// </summary>
        /// <param name="rect"></param>
        /// <param name="property"></param>
        /// <param name="label"></param>
        public override void OnGUI(Rect rect, SerializedProperty property, GUIContent label)
        {
            cache.GetData(property).OnGUI(rect, label);
        }
    }
}
