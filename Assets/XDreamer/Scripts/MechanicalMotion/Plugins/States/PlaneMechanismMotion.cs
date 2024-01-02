using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginMechanicalMotion.Tools;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States;
using XCSJ.PluginSMS.States.Base;

namespace XCSJ.PluginMechanicalMotion.States
{
    /// <summary>
    /// ƽ������˶�����
    /// </summary>
    [ComponentMenu(MechanicalMotionCategory.TitleDirectory + Title, typeof(MechanicalMotionManager))]
    [Name(Title, nameof(PlaneMechanismMotion))]
    [XCSJ.Attributes.Icon(nameof(XCSJ.PluginMechanicalMotion.Tools.RotationMechanism))]
    [Owner(typeof(MechanicalMotionManager))]
    public class PlaneMechanismMotion : WorkClip<PlaneMechanismMotion>
    {
        /// <summary>
        /// ����
        /// </summary>
        public const string Title = "ƽ������˶�����";

        /// <summary>
        /// ����
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [StateLib(MechanicalMotionCategory.Title, typeof(MechanicalMotionManager))]
        [StateComponentMenu(MechanicalMotionCategory.TitleDirectory + Title, typeof(MechanicalMotionManager))]
        [Name(Title, nameof(PlaneMechanismMotion))]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        public static State Create(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// ƽ�����
        /// </summary>
        [Name("ƽ�����")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        public PlaneMechanism _planeMechanism;

        /// <summary>
        /// �˶���Χ
        /// </summary>
        [Name("�˶���Χ")]
        [Tip("��ǰ��ΧҪ��ƽ��������޶��ķ�ΧҪС", "The current range is smaller than that limited by the planar mechanism")]
        [LimitRange(-10000, 10000)]
        public Vector2 _range = new Vector2(-1,1);

        /// <summary>
        /// ���ðٷֱ�
        /// </summary>
        /// <param name="percent"></param>
        /// <param name="stateData"></param>
        protected override void OnSetPercent(Percent percent, StateData stateData)
        {
            if (_planeMechanism) _planeMechanism.SetValue(percent.percent01OfWorkCurve * (_range.y - _range.x) + _range.x);
        }

        /// <summary>
        /// �Ѻ��ַ���
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString()
        {
            return _planeMechanism? _planeMechanism.mechanismName:"";
        }
    }
}

