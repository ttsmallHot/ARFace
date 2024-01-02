using UnityEditor;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils;
using XCSJ.EditorCommonUtils.Interactions;
using XCSJ.EditorExtension.Base.Interactions.Tools;
using XCSJ.EditorTools.PropertyDatas;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginRepairman.Tools;

namespace XCSJ.EditorRepairman.Tools
{
    /// <summary>
    /// 零件检查器
    /// </summary>
    [Name("零件检查器")]
    [CustomEditor(typeof(Part), true)]
    public class PartInspector : PartInspector<Part>
    {
        /// <summary>
        /// 绘制零件分类检查器界面
        /// </summary>
        /// <param name="part"></param>
        public static void DrawPartTag(Part part)
        {
            if (!part) return;

            var so = new SerializedObject(part);
            var sp = so.FindProperty(nameof(Part._tagProperty));
            EditorGUILayout.PropertyField(sp, PropertyData.GetPropertyData(sp).trLabel);
        }
    }

    /// <summary>
    /// 零件检查器模板
    /// </summary>
    public class PartInspector<T> : InteractorInspector<T> where T : Part
    {

    }
}