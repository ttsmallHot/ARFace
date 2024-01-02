using System.Collections.Generic;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginRepairman.States.Exam;
using XCSJ.PluginRepairman.Utils;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginRepairman.UI.Exam
{
    /// <summary>
    /// 答题表格
    /// </summary>
    [Name("答题表格")]
    [RequireManager(typeof(RepairmanManager))]
    public class UIQuestionTable : View
    {
        /// <summary>
        /// 数据
        /// </summary>
        public IExam data = null;

        /// <summary>
        /// 答题单元格模板
        /// </summary>
        [Name("答题单元格模板")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        public UIQuestionCell questionCellTemplate;

        /// <summary>
        /// 正确颜色
        /// </summary>
        [Name("正确颜色")]
        public Color rightColor = Color.green;

        /// <summary>
        /// 错误颜色
        /// </summary>
        [Name("错误颜色")]
        public Color wrongColor = Color.red;

        /// <summary>
        /// 当前颜色
        /// </summary>
        [Name("当前颜色")]
        public Color currentColor = Color.blue;

        /// <summary>
        /// 未完成颜色
        /// </summary>
        [Name("未完成颜色")]
        public Color unfinishColor = Color.white;

        /// <summary>
        /// 可重用问题对象GUI池
        /// </summary>
        private WorkObjectPool<UIQuestionCell> guiQuestionPool = new WorkObjectPool<UIQuestionCell>();

        /// <summary>
        /// 唤醒
        /// </summary>
        protected void Awake()
        {
            if (questionCellTemplate)
            {
                questionCellTemplate.gameObject.SetActive(false);
            }

            guiQuestionPool.Init(
                () => GameObjectUtils.CloneGameObject<UIQuestionCell>(questionCellTemplate.gameObject),
                questionBox => questionBox.gameObject.SetActive(true),
                questionBox => questionBox.ResetState(),
                questionBox => questionBox);
        }
        

        /// <summary>
        /// 开始
        /// </summary>
        protected void Start()
        {
            if (data != null)
            {
                data.onStarted += OnCreateQuestionTable;
            }
        }

        /// <summary>
        /// 当创建问题表
        /// </summary>
        /// <param name="questions"></param>
        public void OnCreateQuestionTable(List<IQuestion> questions)
        {
            //Debug.Log("OnCreateQuestionTable!!");
            if (!enabled) return;
            if (!questionCellTemplate)
            {
                Debug.LogError("没有[答题单元格模板]资源，无法创建答题表格。");
                return;
            }

            OnClearQuestionTable();

            for (int i = 0; i < questions.Count; ++i)
            {
                UIQuestionCell guiQuestion = guiQuestionPool.Alloc();
                if (guiQuestion) guiQuestion.SetData(questions[i] as IQuestion, i, this);
            }
        }

        /// <summary>
        /// 当清理问题表
        /// </summary>
        public void OnClearQuestionTable()
        {
            if (!enabled) return;
            guiQuestionPool.Clear();
        }

    }
}
