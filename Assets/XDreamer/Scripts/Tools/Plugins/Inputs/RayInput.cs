using System;
using System.Collections.Generic;
using UnityEngine;
using XCSJ.Algorithms;
using XCSJ.Attributes;
using XCSJ.Extension.Interactions.Base;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginTools.Base;

namespace XCSJ.PluginTools.Inputs
{
    #region ���뽻����

    /// <summary>
    /// ��������
    /// </summary>
    public abstract class BaseInput : Interactor { }

    /// <summary>
    /// ��������ģ����
    /// </summary>
    /// <typeparam name="TInputCmd"></typeparam>
    public abstract class BaseInput<TInputCmd> : BaseInput where TInputCmd : InputCmd, new()
    {
        /// <summary>
        /// ��������б�
        /// </summary>
        protected abstract IEnumerable<TInputCmd> inputCmds { get; }
    }

    /// <summary>
    /// ���߹���
    /// </summary>
    public enum ERayRule
    {
        /// <summary>
        /// ��
        /// </summary>
        [Name("��")]
        None = 0,

        /// <summary>
        /// ʹ��������ײ��
        /// </summary>
        [Name("ʹ��������ײ��")]
        UseRay = 1,
    }

    /// <summary>
    /// �������룺�������߲���������Ƿ񴥷�
    /// </summary>
    public abstract class RayInput<TRayCmd> : BaseInput<TRayCmd> where TRayCmd : RayCmd, new()
    {
        /// <summary>
        /// ���߹���
        /// </summary>
        [Name("���߹���")]
        [EnumPopup]
        public ERayRule _rayRule = ERayRule.UseRay;

        /// <summary>
        /// ������ײ��
        /// </summary>
        [Name("������ײ��")]
        [HideInSuperInspector(nameof(_rayRule), EValidityCheckType.NotEqual, ERayRule.UseRay)]
        public RayHitter _rayHitter = new RayHitter();

        /// <summary>
        /// ����
        /// </summary>
        public override void Reset()
        {
            base.Reset();
            _rayHitter.OnReset(transform);
        }

        /// <summary>
        /// ����
        /// </summary>
        protected virtual void Update()
        {
            OnCheckCmds();
        }

        /// <summary>
        /// ��鴥����
        /// </summary>
        protected virtual void OnCheckCmds()
        {
            foreach (var inputCmd in inputCmds)
            {
                OnCheckCmd(inputCmd);
            }
        }

        /// <summary>
        /// ���Դ������߽�������
        /// </summary>
        /// <param name="rayCmd"></param>
        protected virtual void OnCheckCmd(TRayCmd rayCmd)
        {
            if (rayCmd.CanStandardInput())
            {
                if (!rayCmd.needInvokeInteract) return;

                var rayInteractData = CreateRayInteractData(this, rayCmd, rayCmd.cmdName, rayCmd.GetRay());

                if (rayCmd.CanInteract(rayInteractData))
                {
                    TryInteract(rayInteractData, out _);
                }
            }
        }

        /// <summary>
        /// ���н���:Ĭ�ϲ���ʹ�û��ཻ�������������̬<see cref="EInteractResult.Success"/>
        /// </summary>
        /// <param name="interactData"></param>
        protected override EInteractResult OnInteract(InteractData interactData) => EInteractResult.Success;

        /// <summary>
        /// ������������
        /// </summary>
        /// <param name="cmdName"></param>
        /// <param name="interactables"></param>
        /// <returns></returns>
        protected override InteractData CreateInteractData(string cmdName, params InteractObject[] interactables)
        {
            return new RayInteractData(cmdName, this, interactables);
        }

        /// <summary>
        /// �������߽�������
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="rayCmd"></param>
        /// <param name="cmdName"></param>
        /// <param name="ray"></param>
        /// <returns></returns>
        public RayInteractData CreateRayInteractData(UnityEngine.Object sender, TRayCmd rayCmd, string cmdName, Ray? ray = null)
        {
            Ray? hitRay = null;
            RaycastHit? raycastHit = null;
            var interactables = Empty<InteractObject>.Array;

            switch (_rayRule)
            {
                case ERayRule.UseRay:
                    {
                        if (ray.HasValue)
                        {
                            hitRay = ray.Value;
                        }
                        else if (_rayHitter.TryGetRay(out var r))
                        {
                            hitRay = r;
                        }

                        if (hitRay.HasValue && _rayHitter.TryGetHit(hitRay.Value, out var hit))
                        {
                            raycastHit = hit;

                            // ����ʹ����ײ��ȥ��ȡ�����Ϊ׼ȷ����Ϊ��ײ��������Ϸ������û�и��壬�������и���ʱ hit.transform Ϊ��������
                            var entity = hit.collider.GetComponentInParent<InteractableEntity>();
                            if (entity && entity.enabled)
                            {
                                interactables = new InteractObject[] { entity };
                            }
                            else if (hit.transform.parent)
                            {
                                entity = hit.transform.parent.GetComponentInParent<InteractableEntity>();
                                if (entity && entity.enabled)
                                {
                                    interactables = new InteractObject[] { entity };
                                }
                            }

                        }
                        break;
                    }
            }

            return CreateRayInteractData(sender, rayCmd, hitRay, raycastHit, _rayHitter._maxDistance, _rayHitter._layerMask, cmdName, this, interactables);
        }

        /// <summary>
        /// �������߽�������
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="rayCmd"></param>
        /// <param name="ray"></param>
        /// <param name="raycastHit"></param>
        /// <param name="rayMaxDistance"></param>
        /// <param name="layerMask"></param>
        /// <param name="cmdName"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        /// <returns></returns>
        protected virtual RayInteractData CreateRayInteractData(UnityEngine.Object sender, TRayCmd rayCmd, Ray? ray, RaycastHit? raycastHit, float rayMaxDistance, LayerMask layerMask, string cmdName, InteractObject interactor, params InteractObject[] interactables)
        {
            return new RayInteractData(sender, ray, raycastHit, rayMaxDistance, layerMask, cmdName, this, interactables);
        }
    }

    /// <summary>
    /// �������룺��ѹ�����������а��¡����ֺ͵���״̬
    /// </summary>
    /// <typeparam name="TRayCmd"></typeparam>
    /// <typeparam name="TCmds"></typeparam>
    public abstract class RayInput<TRayCmd, TCmds> : RayInput<TRayCmd>
        where TRayCmd : RayCmd, new()
        where TCmds : Cmds<TRayCmd>, new()
    {
        /// <summary>
        /// ��������б�
        /// </summary>
        [Name("��������б�")]
        public TCmds _cmds = new TCmds();

        /// <summary>
        /// ����������
        /// </summary>
        public override Cmds outCmds => _cmds;

        /// <summary>
        /// ��������б�
        /// </summary>
        protected override IEnumerable<TRayCmd> inputCmds => _cmds._cmds;

        /// <summary>
        /// ����������������ģʽ
        /// </summary>
        /// <param name="inputMode"></param>
        public void SetInputMode(RayCmd.EInputMode inputMode)
        {
            foreach (var item in _cmds._cmds)
            {
                item._inputMode = inputMode;
            }
        }

        /// <summary>
        /// ������������UI����
        /// </summary>
        /// <param name="uiRule"></param>
        public void SetUIRule(RayCmd.EUIRule uiRule)
        {
            foreach (var item in _cmds._cmds)
            {
                item._uiRule = uiRule;
            }
        }
    }

    /// <summary>
    /// ģ����������
    /// </summary>
    /// <typeparam name="TComponent"></typeparam>
    /// <typeparam name="TComponentProvider"></typeparam>
    public abstract class AnalogRayInput<TComponent, TComponentProvider> : ComponentInteractor<TComponent, TComponentProvider>
        where TComponent : Component, new()
        where TComponentProvider : ComponentProvider<TComponent>, new()
    {
        /// <summary>
        /// ����������
        /// </summary>
        [Name("����������")]
        public RayGenerater _rayGenerater = new RayGenerater();

        /// <summary>
        /// ����
        /// </summary>
        public override void Reset()
        {
            base.Reset();

            // Ĭ������Ϊ��ͷ�������
            _rayGenerater._referenceRule = PluginTools.Base.EReferenceRule.PointDirectionData;
            _rayGenerater.OnReset(transform);
        }
    }

    #endregion

    #region ���뽻������

    /// <summary>
    /// ���뽻������
    /// </summary>
    public class InputInteractData : InteractData<InputInteractData>
    {
        /// <summary>
        /// ���캯��
        /// </summary>
        public InputInteractData() { }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="cmdName"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public InputInteractData(string cmdName, InteractObject interactor, params InteractObject[] interactables) : base(cmdName, interactor, interactables) { }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="cmdName"></param>
        /// <param name="parent"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public InputInteractData(string cmdName, InteractData parent, InteractObject interactor, params InteractObject[] interactables) : base(cmdName, parent, interactor, interactables) { }

        /// <summary>
        /// ���Ƶ�
        /// </summary>
        /// <param name="interactData"></param>
        protected override void CopyTo(InputInteractData interactData) { }
    }

    /// <summary>
    /// �������뽻������
    /// </summary>
    public class RayInteractData : InputInteractData
    {
        /// <summary>
        /// �����ߣ���ʱ����ģ������
        /// </summary>
        public UnityEngine.Object sender { get; private set; }

        /// <summary>
        /// ����
        /// </summary>
        public Ray? ray { get; internal set; } = null;

        /// <summary>
        /// ����������ײ���
        /// </summary>
        public RaycastHit? raycastHit { get; internal set; } = null;

        /// <summary>
        /// ����������
        /// </summary>
        public float rayMaxDistance { get; private set; } = Mathf.Infinity;

        /// <summary>
        /// ���߲�
        /// </summary>
        public LayerMask layerMask { get; private set; } = Physics.DefaultRaycastLayers;

        /// <summary>
        /// Ĭ�Ϲ��캯��
        /// </summary>
        protected RayInteractData() { }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="cmdName"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public RayInteractData(string cmdName, InteractObject interactor, params InteractObject[] interactables) : base(cmdName, interactor, interactables) { }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="cmdName"></param>
        /// <param name="parent"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public RayInteractData(string cmdName, InteractData parent, InteractObject interactor, params InteractObject[] interactables) : base(cmdName, parent, interactor, interactables) { }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="ray"></param>
        /// <param name="raycastHit"></param>
        /// <param name="rayMaxDistance"></param>
        /// <param name="layerMask"></param>
        /// <param name="cmdName"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public RayInteractData(UnityEngine.Object sender, Ray? ray, RaycastHit? raycastHit, float rayMaxDistance, LayerMask layerMask, string cmdName, InteractObject interactor, params InteractObject[] interactables) : this(sender, ray, raycastHit, rayMaxDistance, layerMask, cmdName, null, interactor, interactables)
        {
        }

        /// <summary>
        /// ���캯��
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="ray"></param>
        /// <param name="raycastHit"></param>
        /// <param name="rayMaxDistance"></param>
        /// <param name="layerMask"></param>
        /// <param name="cmdName"></param>
        /// <param name="parent"></param>
        /// <param name="interactor"></param>
        /// <param name="interactables"></param>
        public RayInteractData(UnityEngine.Object sender, Ray? ray, RaycastHit? raycastHit, float rayMaxDistance, LayerMask layerMask, string cmdName, InteractData parent, InteractObject interactor, params InteractObject[] interactables) : base(cmdName, parent, interactor, interactables)
        {
            this.sender = sender ? sender : interactor as UnityEngine.Object;// Ϊ��ʱʹ�ô��뽻����
            this.ray = ray;
            this.raycastHit = raycastHit;
            this.rayMaxDistance = rayMaxDistance;
            this.layerMask = layerMask;
        }

        /// <summary>
        /// ����ʵ��
        /// </summary>
        /// <returns></returns>
        protected override InteractData CreateInstance() => new RayInteractData();

        /// <summary>
        /// ����
        /// </summary>
        /// <param name="interactData"></param>
        public override void CopyTo(InteractData interactData)
        {
            base.CopyTo(interactData);

            if (interactData is RayInteractData rayInteractData)
            {
                rayInteractData.sender = sender;
                rayInteractData.ray = ray;
                rayInteractData.raycastHit = raycastHit;
                rayInteractData.rayMaxDistance = rayMaxDistance;
                rayInteractData.layerMask = layerMask;
            }
        }

        /// <summary>
        /// ����ʰȡ�ı任
        /// </summary>
        public Transform rayHitTransform
        {
            get
            {
                return raycastHit.HasValue ? raycastHit.Value.transform : null;
            }
        }

        /// <summary>
        /// ���Ի�ȡ��ײ��ľ���
        /// </summary>
        /// <param name="to"></param>
        /// <param name="distance"></param>
        /// <returns></returns>
        public bool TryGetSameHitEntityDistance(RayInteractData to, out float distance)
        {
            distance = default;
            if (to == null) return false;

            var hit = rayHitTransform;
            var toHit = to.rayHitTransform;

            if (!hit || !toHit) return false;
            if (hit != toHit) return false;

            distance = Vector3.Distance(raycastHit.Value.point, to.raycastHit.Value.point);
            return true;
        }
    }

    #endregion

    #region ��������

    /// <summary>
    /// ��������ӿ�
    /// </summary>
    public interface IInputCmd
    {
        /// <summary>
        /// ������
        /// </summary>
        UnityEngine.Object sender { get; }

        /// <summary>
        /// ����
        /// </summary>
        bool enabled { get; }

        /// <summary>
        /// �Ƿ���Ҫִ�н���
        /// </summary>
        bool needInvokeInteract { get; }

        /// <summary>
        /// �ܷ񽻻�
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        bool CanInteract(InteractData interactData);

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <returns></returns>
        Ray? GetRay();
    }

    /// <summary>
    /// ��������
    /// </summary>
    public abstract class InputCmd : Cmd, IInputCmd
    {
        /// <summary>
        /// ������
        /// </summary>
        public UnityEngine.Object sender { get; protected set; }

        /// <summary>
        /// ����
        /// </summary>
        public abstract bool enabled { get; }

        /// <summary>
        /// ����ý���
        /// </summary>
        public abstract bool needInvokeInteract { get; }

        /// <summary>
        /// �ܷ񽻻�
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public abstract bool CanInteract(InteractData interactData);

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <returns></returns>
        public virtual Ray? GetRay() => default;
    }

    /// <summary>
    /// ����״̬
    /// </summary>
    public enum EPressState
    {
        /// <summary>
        /// ���ǳ���
        /// </summary>
        [Name("���ǳ���")]
        Always = -1,

        /// <summary>
        /// ��
        /// </summary>
        [Name("��")]
        None,

        /// <summary>
        /// ����
        /// </summary>
        [Name("����")]
        Pressed,

        /// <summary>
        /// ����
        /// </summary>
        [Name("����")]
        Keeping,

        /// <summary>
        /// ����
        /// </summary>
        [Name("����")]
        Released,

        /// <summary>
        /// ���²�����
        /// </summary>
        [Name("���²�����")]
        [Tip("���º͵���ʱ����ʰȡ���Ķ���Ϊͬһ�����󣬲������ε����ƫ�����С���޶�ֵ�������", "If the object picked up by ray is the same when pressed and popped, and the deviation distance between two clicks is less than the limit value, then it is true")]
        PressedAndReleased,

        /// <summary>
        /// �Ǳ���
        /// </summary>
        [Name("�Ǳ���")]
        NoKeeping,

        /// <summary>
        /// ������ʱ�Ҵ��ڿɽ�������
        /// </summary>
        [Name("������ʱ�Ҵ��ڿɽ�������")]
        [Tip("����̬����ʱ�̶�ʱ���Ҵ��ڿɽ���������д���", "In the hold state, the delay is fixed and there are interactive objects for triggering")]
        KeepingAndDelayTimeAndHasInteractable,

        /// <summary>
        /// �Ǳ�����ʱ�Ҵ��ڿɽ�������
        /// </summary>
        [Name("�Ǳ�����ʱ�Ҵ��ڿɽ�������")]
        [Tip("�Ǳ���̬����ʱ�̶�ʱ���Ҵ��ڿɽ���������д���", "In the non hold state, the delay is fixed and there are interactive objects for triggering")]
        NoKeepingAndDelayTimeAndHasInteractable,
    }

    /// <summary>
    /// ��ѹ�������
    /// </summary>
    public abstract class RayCmd : InputCmd
    {
        /// <summary>
        /// ����ģʽ
        /// </summary>
        [Flags]
        public enum EInputMode
        {
            /// <summary>
            /// ��׼
            /// </summary>
            [Name("��׼")]
            [Tip("ֱ�Ӷ�ȡ����Ӳ������", "Read local hardware input directly")]
            Standard = 1 << 0,

            /// <summary>
            /// ģ��
            /// </summary>
            [Name("ģ��")]
            [Tip("�ⲿ���͵�ģ������", "Analog inputs sent externally")]
            Analog = 1 << 1,
        }

        /// <summary>
        /// ����ģʽ
        /// </summary>
        [Name("����ģʽ")]
        [EnumPopup]
        public EInputMode _inputMode = EInputMode.Standard | EInputMode.Analog;

        /// <summary>
        /// UI�������
        /// </summary>
        public enum EUIRule
        {
            /// <summary>
            /// ��
            /// </summary>
            [Name("��")]
            None = 0,

            /// <summary>
            /// ������UI����Ч
            /// </summary>
            [Name("������UI����Ч")]
            InvalidOnAnyUI,

            /// <summary>
            /// ����׼ʱ������UI����Ч
            /// </summary>
            [Name("����׼ʱ������UI����Ч")]
            InvalidOnAnyUIOnlyStandard,

            /// <summary>
            /// ��ģ��ʱ������UI����Ч
            /// </summary>
            [Name("��ģ��ʱ������UI����Ч")]
            InvalidOnAnyUIOnlyOnAnalog,

            /// <summary>
            /// ������UI����Ч
            /// </summary>
            [Name("������UI����Ч")]
            ValidOnAnyUI,

            /// <summary>
            /// ����׼������UI����Ч
            /// </summary>
            [Name("����׼������UI����Ч")]
            ValidOnAnyUIOnlyStandard,

            /// <summary>
            /// ��ģ��������UI����Ч
            /// </summary>
            [Name("��ģ��������UI����Ч")]
            ValidOnAnyUIOnlyOnAnalog,
        }

        /// <summary>
        /// UI����
        /// </summary>
        [Name("UI����")]
        [EnumPopup]
        public EUIRule _uiRule = EUIRule.InvalidOnAnyUI;

        /// <summary>
        /// ��ʹ�ñ�׼����
        /// </summary>
        public bool CanStandardInput() => (_inputMode & EInputMode.Standard) == EInputMode.Standard && CanUIRule(true);

        /// <summary>
        /// ��ʹ��ģ������
        /// </summary>
        public bool CanAnalogInput() => (_inputMode & EInputMode.Analog) == EInputMode.Analog && CanUIRule(false);

        private bool CanUIRule(bool standardMode)
        {
            switch (_uiRule)
            {
                case EUIRule.None: return true;// ������UI
                case EUIRule.InvalidOnAnyUI: return !CommonFun.IsOnUINow();
                case EUIRule.InvalidOnAnyUIOnlyStandard: return standardMode ? !CommonFun.IsOnUINow() : true;
                case EUIRule.InvalidOnAnyUIOnlyOnAnalog: return !standardMode ? !CommonFun.IsOnUINow() : true;
                case EUIRule.ValidOnAnyUI: return CommonFun.IsOnUINow();
                case EUIRule.ValidOnAnyUIOnlyStandard: return standardMode ? CommonFun.IsOnUINow() : true;
                case EUIRule.ValidOnAnyUIOnlyOnAnalog: return !standardMode ? CommonFun.IsOnUINow() : true;
                default: return false;
            }
        }

        /// <summary>
        /// ����
        /// </summary>
        public override bool enabled => _inputMode != 0;

        /// <summary>
        /// ����״̬
        /// </summary>
        [Name("����״̬")]
        [EnumPopup]
        public EPressState _triggerState = EPressState.Released;

        /// <summary>
        /// ʶ��ʰȡ���ƫ�ƾ���
        /// </summary>
        [Name("ʶ��ʰȡ���ƫ�ƾ���")]
        [Tip("��ʼ�ͽ���ʰȡ��λ�þ���С�ڵ�ǰֵΪ��Чʰȡ��������Ϊ����Чʰȡ", "If the distance between the start and end pickup positions is less than the current value, it is considered as valid pickup, otherwise it is considered as invalid pickup")]
        [Min(0)]
        [HideInSuperInspector(nameof(_triggerState), EValidityCheckType.NotEqual, EPressState.PressedAndReleased)]
        [Readonly(EEditorMode.Runtime)]
        public float _pressMaxDistance = 10;

        /// <summary>
        /// �̶�ʱ��
        /// </summary>
        [Name("�̶�ʱ��")]
        [Min(0)]
        public float _fixedTime = 3;

        /// <summary>
        /// ����
        /// </summary>
        protected abstract bool Pressed();

        /// <summary>
        /// ����
        /// </summary>
        protected abstract bool Keep();

        /// <summary>
        /// ����
        /// </summary>
        protected abstract bool Release();

        private bool triggerPressed { get; set; } = false;

        /// <summary>
        /// �ܷ���ý���
        /// </summary>
        public override bool needInvokeInteract
        {
            get
            {
                switch (_triggerState)
                {
                    case EPressState.None: return false;
                    case EPressState.Always: return true;
                    case EPressState.Pressed: return Pressed();
                    case EPressState.Keeping: return Keep();
                    case EPressState.Released: return Release();
                    case EPressState.PressedAndReleased:
                        {
                            if (Pressed())
                            {
                                triggerPressed = true;
                                return true;
                            }

                            if (Release())
                            {
                                triggerPressed = false;
                                return true;
                            }
                            return false;
                        }
                    case EPressState.NoKeeping: return !Keep();
                    case EPressState.KeepingAndDelayTimeAndHasInteractable: return Keep();
                    case EPressState.NoKeepingAndDelayTimeAndHasInteractable: return !Keep();
                    default: return false;
                }
            }
        }

        private RayInteractData lastInteractData = null;
        private float timeCounter;

        /// <summary>
        /// �ܽ���
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public override bool CanInteract(InteractData interactData)
        {
            switch (_triggerState)
            {
                case EPressState.None: return false;
                case EPressState.Always:
                case EPressState.Pressed:
                case EPressState.Keeping:
                case EPressState.Released: return true;
                case EPressState.PressedAndReleased:
                    {
                        if (triggerPressed)
                        {
                            lastInteractData = interactData as RayInteractData;
                            return false;
                        }

                        if (lastInteractData != null)
                        {
                            var beginData = lastInteractData;
                            lastInteractData = null;

                            var endData = interactData as RayInteractData;

                            if (endData == null) return false;

                            return (beginData.interactable == null && endData.interactable == null) ||
                                beginData.TryGetSameHitEntityDistance(endData, out var dis) && dis <= Mathf.Max(0.01f, _pressMaxDistance);
                        }
                        return false;
                    }
                case EPressState.NoKeeping: return true;
                case EPressState.KeepingAndDelayTimeAndHasInteractable:
                case EPressState.NoKeepingAndDelayTimeAndHasInteractable:
                    {
                        if (interactData.interactable)
                        {
                            // ������ͬʱ���¿�ʼ��ʱ
                            if (lastInteractData == null || lastInteractData.interactable != interactData.interactable)
                            {
                                lastInteractData = interactData as RayInteractData;
                                timeCounter = 0;
                            }
                            // �����˶�
                            if (lastInteractData != null)
                            {
                                timeCounter += Time.deltaTime;
                            }
                        }
                        else// ���ɽ�������Ϊ��ʱ���¼�ʱ
                        {
                            timeCounter = 0;
                        }
                        return timeCounter > _fixedTime;
                    }
                default: return false;
            }
        }
    }

    /// <summary>
    /// ģ����������ⲿģ������
    /// </summary>
    public class AnalogCmd
    {
        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <returns></returns>
        public Ray? GetRay()
        {
            return (_currentRay != null && _currentRay.HasValue) ? _currentRay : _defaultRay;
        }

        private bool lastPressedValue = false;

        /// <summary>
        /// ���ð�ѹ״̬
        /// </summary>
        /// <param name="inPressed"></param>
        /// <param name="ray"></param>
        public void SetPressState(bool inPressed, Ray? ray)
        {
            // �ϴ�ֵΪ��
            if (lastPressedValue)
            {
                // pressed���Ϊ��;keepΪ���ֵ releasedΪ���ֵȡ��
                SetState(false, inPressed, !inPressed, ray);
            }
            else// �ϴ�ֵΪ��
            {
                SetState(inPressed, false, false, ray);
            }

            lastPressedValue = inPressed;// �����ϴ�ֵ
        }

        /// <summary>
        /// �ⲿģ����������İ�ѹ������״̬
        /// </summary>
        /// <param name="pressed"></param>
        /// <param name="keep"></param>
        /// <param name="released"></param>
        /// <param name="ray"></param>
        private void SetState(bool pressed, bool keep, bool released, Ray? ray)
        {
            if (pressed)
            {
                _pressed = pressed;
                _pressedRay = ray;
                return;
            }
            else if (released)
            {
                _released = released;
                _releasedRay = ray;
                return;
            }
            else if (keep)
            {
                _keep = keep;
            }
            _defaultRay = ray;
        }

        private bool _pressed = false;
        private bool _keep = false;
        private bool _released = false;

        private Ray? _currentRay;
        private Ray? _pressedRay;
        private Ray? _defaultRay;
        private Ray? _releasedRay;

        /// <summary>
        /// ����
        /// </summary>
        public bool pressed
        {
            get
            {
                var rs = _pressed;
                _pressed = false;// ʹ��������Ϊfalse
                _currentRay = _pressedRay;
                return rs;
            }
        }

        /// <summary>
        /// ����
        /// </summary>
        public bool keep
        {
            get
            {
                var rs = _keep;
                _keep = false;// ʹ��������Ϊfalse
                _currentRay = _defaultRay;
                return rs;
            }
        }

        /// <summary>
        /// �ͷ�
        /// </summary>
        public bool released
        {
            get
            {
                var rs = _released;
                _released = false;// ʹ��������Ϊfalse
                _currentRay = _releasedRay;
                return rs;
            }
        }

        private bool triggerPressed { get; set; } = false;

        /// <summary>
        /// ��Ҫ���ý���
        /// </summary>
        /// <param name="rayCmd"></param>
        /// <returns></returns>
        public bool NeedInvokeInteract(RayCmd rayCmd)
        {
            switch (rayCmd._triggerState)
            {
                case EPressState.None: return false;
                case EPressState.Always: return true;
                case EPressState.Pressed: return pressed;
                case EPressState.Keeping: return keep;
                case EPressState.Released: return released;
                case EPressState.PressedAndReleased:
                    {
                        if (pressed)
                        {
                            triggerPressed = true;
                            return true;
                        }

                        if (released)
                        {
                            triggerPressed = false;
                            return true;
                        }
                        return false;
                    }
                case EPressState.NoKeeping: return !keep;
                case EPressState.KeepingAndDelayTimeAndHasInteractable: return keep;
                case EPressState.NoKeepingAndDelayTimeAndHasInteractable: return !keep;
                default: return false;
            }
        }

        private RayInteractData lastInteractData = null;
        private float timeCounter;

        /// <summary>
        /// �ܽ���
        /// </summary>
        /// <param name="interactData"></param>
        /// <param name="rayCmd"></param>
        /// <returns></returns>
        public bool CanInteract(InteractData interactData, RayCmd rayCmd)
        {
            switch (rayCmd._triggerState)
            {
                case EPressState.None: return false;
                case EPressState.Always:
                case EPressState.Pressed:
                case EPressState.Keeping:
                case EPressState.Released: return true;
                case EPressState.PressedAndReleased:
                    {
                        if (triggerPressed)
                        {
                            lastInteractData = interactData as RayInteractData;
                            return false;
                        }

                        if (lastInteractData != null)
                        {
                            var beginData = lastInteractData;
                            lastInteractData = null;

                            var endData = interactData as RayInteractData;

                            if (endData == null) return false;

                            return (beginData.interactable == null && endData.interactable == null) || beginData.TryGetSameHitEntityDistance(endData, out var dis) && dis <= Mathf.Max(0.01f, rayCmd._pressMaxDistance);
                        }
                        return false;
                    }
                case EPressState.NoKeeping: return true;
                case EPressState.KeepingAndDelayTimeAndHasInteractable:
                case EPressState.NoKeepingAndDelayTimeAndHasInteractable:
                    {
                        if (interactData.interactable)
                        {
                            // ������ͬʱ���¿�ʼ��ʱ
                            if (lastInteractData == null || lastInteractData.interactable != interactData.interactable)
                            {
                                lastInteractData = interactData as RayInteractData;
                                timeCounter = 0;
                            }
                            // �����˶�
                            if (lastInteractData != null)
                            {
                                timeCounter += Time.deltaTime;
                            }
                        }
                        else// ���ɽ�������Ϊ��ʱ���¼�ʱ
                        {
                            timeCounter = 0;
                        }
                        return timeCounter > rayCmd._fixedTime;
                    }
                default: return false;
            }
        }
    } 

    #endregion
}
