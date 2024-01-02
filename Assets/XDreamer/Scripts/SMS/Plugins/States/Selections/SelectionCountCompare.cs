﻿using System.Linq;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginCommonUtils.Runtime;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginSMS.States.Selections
{
    /// <summary>
    /// 选择集数量比较:选择集数量比较组件是用于判断选择集数量的触发器。如果条件成立，则切换为完成态。
    /// </summary>
    [ComponentMenu(SMSCategory.SelectionSetDirectory+ Title, typeof(SMSManager))]
    [Name(Title, nameof(SelectionCountCompare))]
    [Tip("选择集数量比较组件是用于判断选择集数量的触发器。如果条件成立，则切换为完成态。", "The selection set quantity comparison component is a trigger used to determine the number of selection sets. If the condition holds, it will be switched to the completed state.")]
    [XCSJ.Attributes.Icon(EIcon.Select)]
    public class SelectionCountCompare : Trigger<SelectionCountCompare>
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "选择集数量比较";

        /// <summary>
        /// 标题
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [StateLib(SMSCategory.SelectionSet, typeof(SMSManager))]
        [StateComponentMenu(SMSCategory.SelectionSetDirectory+ Title, typeof(SMSManager))]
        [Name(Title, nameof(SelectionCountCompare))]
        [Tip("选择集数量比较组件是用于判断选择集数量的触发器。如果条件成立，则切换为完成态。", "The selection set quantity comparison component is a trigger used to determine the number of selection sets. If the condition holds, it will be switched to the completed state.")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        public static State CreateSelectionCountCompare(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 比较规则
        /// </summary>
        [Name("比较规则")]
        [EnumPopup]
        public ENumberValueCompareRule compareRule = ENumberValueCompareRule.Equal;

        /// <summary>
        /// 比较值
        /// </summary>
        [Name("比较值")]
        [Range(0, 1000)]
        public int value = 1;

        /// <summary>
        /// 选择集变化时检测
        /// </summary>
        [Name("选择集变化时检测")]
        public bool checkOnChanged = false;

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="data"></param>
        public override void OnEntry(StateData data)
        {
            base.OnEntry(data);

            Selection.selectionChanged += OnSelectionChanged;
        }

        /// <summary>
        /// 当更新
        /// </summary>
        /// <param name="data"></param>
        public override void OnUpdate(StateData data)
        {
            base.OnUpdate(data);

            if (!checkOnChanged)
            {
                Check();
            }
        }

        /// <summary>
        /// 当退出
        /// </summary>
        /// <param name="data"></param>
        public override void OnExit(StateData data)
        {
            Selection.selectionChanged -= OnSelectionChanged;

            base.OnExit(data);
        }

        /// <summary>
        /// 当选择集变更时回调
        /// </summary>
        /// <param name="oldSelections"></param>
        /// <param name="flag"></param>
        protected void OnSelectionChanged(GameObject[] oldSelections, bool flag) => Check(true);

        private void Check(bool onChanged=false)
        {
            var selectCount = Selection.selections.Length;
            switch (compareRule)
            {
                case ENumberValueCompareRule.Equal: finished = selectCount == value; break;
                case ENumberValueCompareRule.NotEqual: finished = selectCount != value; break;
                case ENumberValueCompareRule.Less: finished = selectCount < value; break;
                case ENumberValueCompareRule.LessEqual: finished = selectCount <= value; break;
                case ENumberValueCompareRule.Greater: finished = selectCount > value; break;
                case ENumberValueCompareRule.GreaterEqual: finished = selectCount >= value; break;
                case ENumberValueCompareRule.Changed: finished = onChanged; break;
                default: finished = true; break;
            }
        }
    }
}
