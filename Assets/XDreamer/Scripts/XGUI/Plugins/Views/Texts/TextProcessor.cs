using UnityEngine;
using UnityEngine.UI;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Dataflows.Binders.XUnityEngine.XUI.XInputField;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.PluginTools;
using XCSJ.PluginXGUI.Base;
using XCSJ.Scripts;

namespace XCSJ.PluginXGUI.Views.Texts
{
    /// <summary>
    /// 文本处理器:可用文本显示变量值和替换文本内容
    /// </summary>
    [Name("文本处理器")]
    [DisallowMultipleComponent]
    [XCSJ.Attributes.Icon(EIcon.Text)]
    [Tip("可显示变量值或替换文本内容", "Can display variable values or replace text content")]
    [Tool(XGUICategory.Component, nameof(XGUIManager))]
    [RequireManager(typeof(XGUIManager), typeof(ToolsManager))]
    public class TextProcessor : BaseText, ISerializationCallbackReceiver
    {
        /// <summary>
        /// 处理规则
        /// </summary>
        public enum EHandleRule
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None = 0,

            /// <summary>
            /// 显示变量
            /// </summary>
            [Name("显示变量")]
            ShowVar,

            /// <summary>
            /// 文本替换
            /// </summary>
            [Name("文本替换")]
            ReplaceText,
        }

        /// <summary>
        /// 处理规则
        /// </summary>
        [Name("处理规则")]
        [EnumPopup]
        [Readonly(EEditorMode.Runtime)]
        public EHandleRule _handleRule = EHandleRule.ShowVar;

        /// <summary>
        /// 变量
        /// </summary>
        [Name("变量")]
        [VarString(EVarStringHierarchyKeyMode.Get)]
        [ValidityCheck(EValidityCheckType.NotNullOrEmpty)]
        [HideInSuperInspector(nameof(_handleRule), EValidityCheckType.NotEqual, EHandleRule.ShowVar)]
        public string variable;

        /// <summary>
        /// 旧文本值：默认值为空格
        /// </summary>
        [Name("旧文本值")]
        [Tip("默认值为空格", "Default value is blank")]
        [HideInSuperInspector(nameof(_handleRule), EValidityCheckType.NotEqual, EHandleRule.ReplaceText)]
        public string _oldTextValue = " ";

        /// <summary>
        /// 新文本值：默认值为【不换行空格】("\u00A0"), 英文中为了保证整个单词不被分开，通常采用整单词换行模式。使用【不换行空格】后保证不会自动换行
        /// </summary>
        [Name("新文本值")]
        [Tip("默认值为【不换行空格】(\"\\u00A0\"), 英文中为了保证整个单词不被分开，通常采用整单词换行模式。使用【不换行空格】后保证不会自动换行", "The default value is [Non-breaking space] (\" u00A0\"). In English, to ensure that the whole word is not separated, the whole word newline mode is usually used. Use [Non-breaking space] to ensure that there is no Line wrap and word wrap")]
        [HideInSuperInspector(nameof(_handleRule), EValidityCheckType.NotEqual, EHandleRule.ReplaceText)]
        public string _newTextValue = "\u00A0";

        void ISerializationCallbackReceiver.OnBeforeSerialize() { }

        void ISerializationCallbackReceiver.OnAfterDeserialize()
        {
            CommonFun.VarNameToVarString(ref variable);
        }

        private EHandleRule handleRuleOnEnable = EHandleRule.None;

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();

            if (!_text) return;
            handleRuleOnEnable = _handleRule;
            switch (handleRuleOnEnable)
            {
                case EHandleRule.ShowVar:
                    {
                        HierarchyVarEvent.onChanged += OnChanged;
                        break;
                    }
                case EHandleRule.ReplaceText:
                    {
                        _text.RegisterDirtyVerticesCallback(OnTextChanged);
                        break;
                    }
            }
        }

        /// <summary>
        /// 禁用
        /// </summary>
        protected override void OnDisable()
        {
            base.OnDisable();

            switch (handleRuleOnEnable)
            {
                case EHandleRule.ShowVar:
                    {
                        HierarchyVarEvent.onChanged -= OnChanged;
                        break;
                    }
                case EHandleRule.ReplaceText:
                    {
                        _text.UnregisterDirtyVerticesCallback(OnTextChanged);
                        break;
                    }
            }
        }

        private void OnChanged(IHierarchyVar hierarchyVar)
        {
            if (hierarchyVar.varString == variable)
            {
                if (_text) _text.text = hierarchyVar.stringValue;
            }
        }

        private void OnTextChanged()
        {
            if (_text) _text.text = _text.text.Replace(_oldTextValue, _newTextValue);
        }
    }
}