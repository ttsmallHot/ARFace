﻿using UnityEditor;
using UnityEngine;
using XCSJ.EditorCommonUtils;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.Maths;

namespace XCSJ.EditorExtension.Base.Algorithms
{
    /// <summary>
    /// 百分比区间绘制器
    /// </summary>
    [CustomPropertyDrawer(typeof(PercentRange))]
    public class PercentRangeDrawer : PropertyDrawer
    {
        /// <summary>
        /// 获取属性高度
        /// </summary>
        /// <param name="property"></param>
        /// <param name="label"></param>
        /// <returns></returns>
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label) => 0;

        /// <summary>
        /// 绘制GUI
        /// </summary>
        /// <param name="position"></param>
        /// <param name="property"></param>
        /// <param name="label"></param>
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var v2SP = property.FindPropertyRelative(nameof(PercentRange.percentRange));
            var xSP = v2SP.FindPropertyRelative(nameof(V2D.x));
            var ySP = v2SP.FindPropertyRelative(nameof(V2D.y));

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(label, UICommonOption.Width120);

            var x = xSP.doubleValue;
            var y = ySP.doubleValue;
            EditorGUI.BeginChangeCheck();
            UICommonFun.MinMaxSliderLayout(null, ref x, ref y, 0, 1, UICommonOption.Width128);
            if (EditorGUI.EndChangeCheck())
            {
                xSP.doubleValue = x;
                ySP.doubleValue = y;
            }
            EditorGUILayout.EndHorizontal();
        }
    }
}