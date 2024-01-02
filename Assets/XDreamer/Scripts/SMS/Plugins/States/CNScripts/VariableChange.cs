﻿using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.CNScripts;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;
using XCSJ.Scripts;

namespace XCSJ.PluginSMS.States.CNScripts
{
    /// <summary>
    /// 变量修改:可用于捕获变量修改事件
    /// </summary>
    [Name(Title, nameof(VariableChange))]
    [Tip("可用于捕获变量修改事件", "Can be used to capture variable modification events")]
    [XCSJ.Attributes.Icon(EIcon.Variable)]
    [ComponentMenu(CNScriptCategory.TitleDirectory + Title, typeof(ScriptManager))]
    public class VariableChange : Trigger<VariableChange>, ISerializationCallbackReceiver
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "变量修改";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [Name(Title, nameof(VariableChange))]
        [Tip("可用于捕获变量修改事件", "Can be used to capture variable modification events")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        [StateLib(CNScriptCategory.Title, typeof(ScriptManager))]
        [StateComponentMenu(CNScriptCategory.TitleDirectory + Title, typeof(ScriptManager))]
        public static State Create(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 变量
        /// </summary>
        [Name("变量")]
        [VarString(EVarStringHierarchyKeyMode.None)]
        public string variable;

        #region ISerializationCallbackReceiver

        void ISerializationCallbackReceiver.OnBeforeSerialize() { }

        void ISerializationCallbackReceiver.OnAfterDeserialize()
        {
            CommonFun.VarNameToVarString(ref variable);
        }

        #endregion

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnEntry(StateData stateData)
        {
            base.OnEntry(stateData);

            HierarchyVarEvent.onChanged += OnChanged;
        }

        /// <summary>
        /// 当退出
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnExit(StateData stateData)
        {
            base.OnExit(stateData);

            HierarchyVarEvent.onChanged -= OnChanged;
        }

        private void OnChanged(IHierarchyVar hierarchyVar)
        {
            if (hierarchyVar.varString == this.variable)
            {
                finished = true;
            }
        }

        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString()
        {
            return variable;// base.ToFriendlyString();
        }
    }
}
