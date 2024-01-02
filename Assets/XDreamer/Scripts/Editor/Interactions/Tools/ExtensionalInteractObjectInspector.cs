using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils;
using XCSJ.EditorCommonUtils.Interactions;
using XCSJ.EditorExtension.Base.Attributes;
using XCSJ.Extension.Base.Dataflows.Base;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.Languages;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginTools.PropertyDatas;

namespace XCSJ.EditorExtension.Base.Interactions.Tools
{
    /// <summary>
    /// 交互标签对象检查器
    /// </summary>
    [CustomEditor(typeof(ExtensionalInteractObject), true)]
    [CanEditMultipleObjects]
    public class ExtensionalInteractObjectInspector : ExtensionalInteractObjectInspector<ExtensionalInteractObject> { }

    /// <summary>
    /// 交互标签对象检查器模板
    /// </summary>
    public class ExtensionalInteractObjectInspector<T> : InteractObjectInspector<T> where T : ExtensionalInteractObject
    {
        /// <summary>
        /// 显示用途列表
        /// </summary>
        [Name("显示用途列表")]
        [Tip("用于记录用途宿主被其它对象以指定用途占用的情况", "Used to record the situation where the host is occupied by other objects for the specified purpose")]
        public bool _displayUsages = false;

        private bool existRepeatInCmdName = false;
        private bool existRepeatOutCmdName = false;

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();
            if (!targetObject) return;

            CheckRepeatInCmdName();
            CheckRepeatOutCmdName();
        }

        /// <summary>
        /// 绘制成员
        /// </summary>
        /// <param name="serializedProperty"></param>
        /// <param name="propertyData"></param>
        [LanguageTuple("The input command name cannot be duplicate!", "输入命令名称不能重复!")]
        [LanguageTuple("The output command name cannot be duplicate!", "输出命令名称不能重复!")]
        [LanguageTuple("Key Word", "关键字")]
        [LanguageTuple("User", "使用者")]
        protected override void OnDrawMember(SerializedProperty serializedProperty, PropertyData propertyData)
        {
            switch (serializedProperty.name)
            {
                case nameof(ExtensionalInteractObject._inCmds):
                    {
                        EditorGUI.BeginChangeCheck();
                        base.OnDrawMember(serializedProperty, propertyData);
                        if (EditorGUI.EndChangeCheck())
                        {
                            UICommonFun.DelayCall(CheckRepeatInCmdName);
                        }
                        if (existRepeatInCmdName)
                        {
                            UICommonFun.RichHelpBox(Tr("The input command name cannot be duplicate!"), MessageType.Error);
                        }
                        return;
                    }
                case nameof(ExtensionalInteractObject._outCmds):
                    {
                        EditorGUI.BeginChangeCheck();
                        base.OnDrawMember(serializedProperty, propertyData);
                        if (EditorGUI.EndChangeCheck())
                        {
                            UICommonFun.DelayCall(CheckRepeatOutCmdName);
                        }
                        if (existRepeatOutCmdName)
                        {
                            UICommonFun.RichHelpBox(Tr("The output command name cannot be duplicate!"), MessageType.Error);
                        }
                        DrawUsage();
                        return;
                    }
            }
            base.OnDrawMember(serializedProperty, propertyData);
        }

        private void CheckRepeatInCmdName()
        {
            var list = targetObject.inCmdNameList;
            var hashset = new HashSet<string>();
            existRepeatInCmdName = list.Any(cmdName => !hashset.Add(cmdName));
        }

        private void CheckRepeatOutCmdName() 
        {
            var list = targetObject.outCmdNameList;
            var hashset = new HashSet<string>();
            existRepeatOutCmdName = list.Any(cmdName => !hashset.Add(cmdName));
        }

        private void DrawUsage()
        {
            // 折叠
            _displayUsages = UICommonFun.Foldout(_displayUsages, CommonFun.NameTip(GetType(), nameof(_displayUsages)));
            if (!_displayUsages) return;

            CommonFun.BeginLayout();
            {
                // 标题
                EditorGUILayout.BeginHorizontal(GUI.skin.box);
                {
                    GUILayout.Label(Tr("Key Word"), UICommonOption.Width200);
                    GUILayout.Label(Tr("User"));
                }
                EditorGUILayout.EndHorizontal();

                // 列表
                EditorGUILayout.BeginVertical(GUI.skin.box, GUILayout.ExpandWidth(true));
                {
                    foreach (var item in targetObject.usage.usageMap)
                    {
                        EditorGUILayout.BeginHorizontal();

                        // 关键字
                        EditorGUILayout.LabelField(item.Key, UICommonOption.Width200);

                        // 对象列表
                        if (item.Value.userCount == 0)
                        {
                            EditorGUILayout.LabelField("");
                        }
                        else
                        {
                            EditorGUILayout.BeginVertical();
                            {
                                foreach (var user in item.Value.users)
                                {
                                    EditorGUILayout.ObjectField(user, user ? user.GetType() : typeof(ExtensionalInteractObject), true);
                                }
                            }
                            EditorGUILayout.EndVertical();
                        }
                        EditorGUILayout.EndHorizontal();
                    }
                }
                EditorGUILayout.EndVertical();
            }
            CommonFun.EndLayout();
        }
    }

    /// <summary>
    /// 基础交互属性数据绘制器
    /// </summary>
    [CustomPropertyDrawer(typeof(BaseInteractPropertyData), true)]
    public class BaseInteractPropertyDataDrawer : PropertyDrawerAsArrayElement<BaseInteractPropertyDataDrawer.Data>
    {
        /// <summary>
        /// 数据项
        /// </summary>
        public class Data : ArrayElementData
        {
            #region 序列化属性

            /// <summary>
            /// 关键字序列化属性
            /// </summary>
            public SerializedProperty keySP;

            /// <summary>
            /// 关键字值类型序列化属性
            /// </summary>
            public SerializedProperty keyValueTypeSP;

            /// <summary>
            /// 关键字值值序列化属性
            /// </summary>
            public SerializedProperty keyValueValueSP;

            /// <summary>
            /// 值序列化属性
            /// </summary>
            public SerializedProperty valueSP;

            #endregion

            /// <summary>
            /// 显示
            /// </summary>
            public bool display = true;

            /// <summary>
            /// 初始化
            /// </summary>
            /// <param name="property"></param>
            public override void Init(SerializedProperty property)
            {
                base.Init(property);

                keySP = property.FindPropertyRelative(nameof(InteractPropertyData._key));
                valueSP = property.FindPropertyRelative(nameof(InteractPropertyData._value));

                keyValueTypeSP = keySP.FindPropertyRelative(nameof(StringPropertyValue._propertyValueType));
                keyValueValueSP = keySP.FindPropertyRelative(nameof(StringPropertyValue._value));
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
            return (base.GetPropertyHeight(property, label) + 2) * (cache.GetData(property).display ? 3 : 1);
        }

        /// <summary>
        /// 绘制
        /// </summary>
        /// <param name="position"></param>
        /// <param name="property"></param>
        /// <param name="label"></param>
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            var data = cache.GetData(property);
            label = data.isArrayElement ? data.indexContent : label;

            // 标题
            var rect = new Rect(position.x, position.y, position.width, 18);
            GUI.Label(rect, "", XGUIStyleLib.Get(EGUIStyle.Box));
            data.display = GUI.Toggle(rect, data.display, label, EditorStyles.foldout);
            if (!data.display) return;

            // 匹配规则
            rect.xMin += 18;

            if (data.keyValueTypeSP.intValue == 0)// 值类型
            {
                var tmp = rect;
                tmp.width -= 100;
                tmp = PropertyDrawerHelper.DrawProperty(tmp, data.keySP);

                tmp.x += tmp.width;
                tmp.width = 100;
                data.keyValueValueSP.stringValue = UICommonFun.Popup(tmp, data.keyValueValueSP.stringValue, PropertyKeyCache.instance.GetKeys());

                rect.y += PropertyDrawerHelper.singleLineHeight;
            }
            else
            {
                rect = PropertyDrawerHelper.DrawProperty(rect, data.keySP, "");
            }
            rect = PropertyDrawerHelper.DrawProperty(rect, data.valueSP, "");

        }
    }
}
