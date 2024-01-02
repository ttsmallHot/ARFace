using UnityEditor;
using XCSJ.Algorithms;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils.Base.CategoryViews;
using XCSJ.EditorExtension.Base.Interactions.Tools;
using XCSJ.PluginTools.AI.NPCs;

namespace XCSJ.EditorTools.AI.NPCs
{
    /// <summary>
    /// NPC�����
    /// </summary>
    [Name("NPC�����")]
    [CustomEditor(typeof(NPC))]
    public class NPCInspector : InteractorInspector<NPC>
    {
        /// <summary>
        /// Ŀ¼�б�
        /// </summary>
        public static XObject<CategoryList> categoryList { get; } = new XObject<CategoryList>(cl => cl != null, x => EditorToolsHelper.GetWithPurposes(nameof(NPCAction)));

        /// <summary>
        /// �����Ƽ����GUI
        /// </summary>
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            CategoryListExtension.DrawVertical(categoryList);
        }
    }
}
