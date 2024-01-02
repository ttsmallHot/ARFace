using UnityEditor;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils;
using XCSJ.EditorExtension.Base.Interactions.Tools;
using XCSJ.PluginTools.Inputs;

namespace XCSJ.EditorTools.Inputs
{
    /// <summary>
    /// 键码输入检查器
    /// </summary>
    [Name("键码输入检查器")]
    [CustomEditor(typeof(KeyCodeInput))]
    public class KeyCodeInputInspector : InteractorInspector<KeyCodeInput>
    {
        /// <summary>
        /// 当绘制成员
        /// </summary>
        /// <param name="serializedProperty"></param>
        /// <param name="propertyData"></param>
        protected override void OnDrawMember(SerializedProperty serializedProperty, PropertyData propertyData)
        {
            switch (serializedProperty.name)
            {
                case nameof(MouseInput._inCmds):
                case nameof(MouseInput._outCmds): return;
            }
            base.OnDrawMember(serializedProperty, propertyData);
        }
    }
}