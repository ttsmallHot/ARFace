using System.Linq;
using UnityEngine.UI;
using XCSJ.Attributes;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginRepairman.States.Exam;
using XCSJ.PluginSMS;
using XCSJ.PluginSMS.States;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginRepairman.UI.Exam
{
    /// <summary>
    /// 考试结果界面
    /// </summary>
    [Name("考试结果界面")]
    [RequireManager(typeof(RepairmanManager))]
    public class UIExamResult : View
    {
        /// <summary>
        /// 拆装修理考试
        /// </summary>
        [Name("拆装修理考试")]
        [StateComponentPopup(typeof(RepairExam), stateCollectionType = EStateCollectionType.Root)]
        [ValidityCheck(EValidityCheckType.NotNull)]
        public RepairExam exam;

        /// <summary>
        /// 得分
        /// </summary>
        [Name("得分")]
        public Text getScore;

        /// <summary>
        /// 总分
        /// </summary>
        [Name("总分")]
        public Text totalScore;

        /// <summary>
        /// 考试结果
        /// </summary>
        [Name("考试结果")]
        public Text result;

        /// <summary>
        /// 错误详细记录
        /// </summary>
        [Name("错误详细记录")]
        public Text errorsDetailDescription;

        private string orgGetScoreText;

        private string orgTotalScoreText;

        private string orgResultText;

        /// <summary>
        /// 唤醒初始化
        /// </summary>
        protected void Awake()
        {
            if (!exam)
            {
                exam = SMSHelper.GetStateComponents<RepairExam>().FirstOrDefault();
            }

            if (getScore) orgGetScoreText = getScore.text;
            if (totalScore) orgTotalScoreText = totalScore.text;
            if (result) orgResultText = result.text;
        }

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();
            if (exam)
            {
                SetExamResult(exam.GetExamResult());
            }
        }

        /// <summary>
        /// 设置考试结果
        /// </summary>
        /// <param name="examResult"></param>
        public void SetExamResult(ExamResult examResult)
        {
            if (getScore)
            {
                getScore.text = orgGetScoreText + ((int)examResult.getScore).ToString();
            }

            if (totalScore)
            {
                totalScore.text = orgTotalScoreText + ((int)examResult.totalScore).ToString();
            }

            if (result)
            {
                result.text = orgResultText + (((bool)examResult.result) ? "通过" : "未通过");
            }

            if (errorsDetailDescription)
            {
                errorsDetailDescription.text = examResult.detailInfos;
            }
        }
    }
}
