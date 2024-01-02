using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Interfaces;
using XCSJ.PluginCommonUtils;
using XCSJ.Tools;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.Extension.Interactions.Tools;

namespace XCSJ.PluginTools.Controllers
{
    /// <summary>
    /// 跟随目标
    /// </summary>
    [Tool(ToolsCategory.Control)]
    [XCSJ.Attributes.Icon(EIcon.Target)]
    [Name("跟随目标")]
    [DisallowMultipleComponent]
    [RequireManager(typeof(ToolsManager))]
    [Owner(typeof(ToolsManager))]
    public sealed class FollowTarget : InteractProvider, ITarget<Transform>, ITarget<Component>, ITarget<GameObject>
    {
        #region 字段

        /// <summary>
        /// 目标
        /// </summary>
        [Name("目标")]
        [SerializeField]
        [ValidityCheck(EValidityCheckType.NotNull)]
        private Transform _targetTransform;

        /// <summary>
        /// 目标距离
        /// </summary>
        [Name("目标距离")]
        [SerializeField]
        private float _distanceToTarget = 15.0f;

        /// <summary>
        /// 跟随速度
        /// </summary>
        [Name("跟随速度")]
        [SerializeField]
        private float _followSpeed = 3.0f;

        #endregion

        #region PROPERTIES

        /// <summary>
        /// 目标变换
        /// </summary>
        public Transform targetTransform
        {
            get { return _targetTransform; }
            set { _targetTransform = value; }
        }

        /// <summary>
        /// 到目标距离
        /// </summary>
        public float distanceToTarget
        {
            get { return _distanceToTarget; }
            set { _distanceToTarget = Mathf.Max(0.0f, value); }
        }

        /// <summary>
        /// 跟随速度
        /// </summary>
        public float followSpeed
        {
            get { return _followSpeed; }
            set { _followSpeed = Mathf.Max(0.0f, value); }
        }

        private Vector3 cameraRelativePosition
        {
            get { return targetTransform.position - transform.forward * distanceToTarget; }
        }

        #endregion

        #region MONOBEHAVIOUR

        /// <summary>
        /// 验证
        /// </summary>
        public void OnValidate()
        {
            distanceToTarget = _distanceToTarget;
            followSpeed = _followSpeed;
        }

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();
            if (!targetTransform)
            {
                Log.ErrorFormat("组件：{0} 需要目标！", CommonFun.GameObjectComponentToString(this));
                return;
            }
            transform.position = cameraRelativePosition;
        }

        /// <summary>
        /// 延后更新
        /// </summary>
        public void LateUpdate()
        {
            if (!targetTransform) return;
            transform.position = Vector3.Lerp(transform.position, cameraRelativePosition, followSpeed * Time.deltaTime);
        }

        #endregion

        #region ITarget

        object ITarget.target
        {
            get => targetTransform;
            set
            {
                if (value is Component component)
                {
                    targetTransform = component ? component.transform : null;
                }
                else if (value is GameObject go)
                {
                    targetTransform = go ? go.transform : null;
                }
                else
                {
                    targetTransform = null;
                }
            }
        }

        /// <summary>
        /// 目标
        /// </summary>
        public Transform target { get => targetTransform; set => targetTransform = value; }

        Component ITarget<Component>.target
        {
            get => targetTransform;
            set => targetTransform = value ? value.transform : null;
        }

        GameObject ITarget<GameObject>.target
        {
            get => targetTransform ? targetTransform.gameObject : null;
            set => targetTransform = value ? value.transform : null;
        }

        #endregion
    }
}