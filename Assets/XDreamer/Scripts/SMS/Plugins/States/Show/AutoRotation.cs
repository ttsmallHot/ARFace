﻿using System.Collections.Generic;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Inputs;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;
using XCSJ.PluginSMS.States.GameObjects;

namespace XCSJ.PluginSMS.States.Show
{
    /// <summary>
    /// 自动旋转:自动旋转组件是游戏对象绕着某个轴旋转的动画。当状态没有退出时，旋转会一直持续进行，当有用户输入时，旋转会停止，当无输入时，等待一段时间，旋转又重新开始，组件激活随即切换为完成态。
    /// </summary>
    [ComponentMenu(SMSCategory.ShowDirectory+ Title, typeof(SMSManager))]
    [Name(Title, nameof(AutoRotation))]
    [Tip("自动旋转组件是游戏对象绕着某个轴旋转的动画。当状态没有退出时，旋转会一直持续进行，当有用户输入时，旋转会停止，当无输入时，等待一段时间，旋转又重新开始，组件激活随即切换为完成态。", "The auto rotation component is an animation of the game object rotating around an axis. When the state does not exit, the rotation will continue. When there is user input, the rotation will stop. When there is no input, wait for a period of time, the rotation will restart, and the component activation will be switched to the completed state.")]
    [XCSJ.Attributes.Icon(index = 33643)]
    [RequireComponent(typeof(GameObjectSet))]
    public class AutoRotation : StateComponent<AutoRotation>
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "自动旋转";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [StateLib(SMSCategory.Show, typeof(SMSManager))]
        [StateComponentMenu(SMSCategory.ShowDirectory + Title, typeof(SMSManager))]
        [Name(Title, nameof(AutoRotation))]
        [Tip("自动旋转组件是游戏对象绕着某个轴旋转的动画。当状态没有退出时，旋转会一直持续进行，当有用户输入时，旋转会停止，当无输入时，等待一段时间，旋转又重新开始，组件激活随即切换为完成态。", "The auto rotation component is an animation of the game object rotating around an axis. When the state does not exit, the rotation will continue. When there is user input, the rotation will stop. When there is no input, wait for a period of time, the rotation will restart, and the component activation will be switched to the completed state.")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        public static State CreateAutoRotation(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 旋转一圈时间
        /// </summary>
        [Name("旋转一圈时间")]
        [Range(0.1f, 100)]
        public float rotate360Time = 20;

        /// <summary>
        /// 无输入启动旋转时间
        /// </summary>
        [Name("无输入启动旋转时间")]
        [Range(1f, 100)]
        public float noInputRotationTime = 10;

        /// <summary>
        /// 旋转类型
        /// </summary>
        [Name("旋转类型")]
        public enum ERotateType
        {
            /// <summary>
            /// 包围盒中心
            /// </summary>
            [Name("包围盒中心")]
            BoundsCenter,

            /// <summary>
            /// 各自包围盒中心
            /// </summary>
            [Name("各自包围盒中心")]
            SelfBoundsCenter,

            /// <summary>
            /// 各自变换中心
            /// </summary>
            [Name("各自变换中心")]
            SelfTransformCenter,
        }

        /// <summary>
        /// 旋转类型
        /// </summary>
        [Name("旋转类型")]
        [EnumPopup]
        public ERotateType rotateType = ERotateType.BoundsCenter;

        /// <summary>
        /// 旋转轴
        /// </summary>
        [Name("旋转轴")]
        public Vector3 rotateAxis = Vector3.up;

        /// <summary>
        /// 旋转空间
        /// </summary>
        [Name("旋转空间")]
        [HideInSuperInspector(nameof(rotateType), EValidityCheckType.NotEqual, ERotateType.SelfTransformCenter)]
        public Space rotateSpace = Space.World;

        /// <summary>
        /// 保持退出状态
        /// </summary>
        [Name("保持退出状态")]
        public bool keepExitState = false;

        /// <summary>
        /// 进入时旋转
        /// </summary>
        [Name("进入时旋转")]
        public bool rotateWhenEntry = true;

        private float timeCounter = 0;

        /// <summary>
        /// 游戏对象集
        /// </summary>
        public GameObjectSet gameObjectSet => GetComponent<GameObjectSet>();

        private GameObjectSet _gameObjectSet = null;

        private Bounds totalBounds = new Bounds(Vector3.zero, Vector3.zero);

        private Dictionary<GameObject,Bounds> boundsDic = new Dictionary<GameObject, Bounds>();

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="data"></param>
        /// <returns></returns>
        public override bool Init(StateData data)
        {
            _gameObjectSet = GetComponent<GameObjectSet>();
            if (_gameObjectSet)
            {
                for(int i=0; i< _gameObjectSet.objects.Count; ++i)
                {
                    GameObject go = _gameObjectSet.objects[i];
                    Bounds bounds;
                    if (CommonFun.GetBounds(out bounds, go))
                    {
                        boundsDic[go] = bounds;
                        if (i == 0)
                        {
                            totalBounds = bounds;
                        }
                        else
                        {
                            totalBounds.Encapsulate(bounds);
                        }
                    }
                }                                             
            }
            return base.Init(data);
        }

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="data"></param>
        public override void OnEntry(StateData data)
        {
            base.OnEntry(data);

            if (boundsDic.Count == 0) return;

            timeCounter = rotateWhenEntry ? noInputRotationTime : 0;

            RecordRotation();
        }

        /// <summary>
        /// 当更新
        /// </summary>
        /// <param name="data"></param>
        public override void OnUpdate(StateData data)
        {
            base.OnUpdate(data);

            if (boundsDic.Count == 0) return;

            if (XInput.anyKeyDown)
            {
                timeCounter = 0;
                return;
            }

            float deltaTime = Time.deltaTime;
            timeCounter += deltaTime;
            float rotateAngle = -360 * deltaTime / rotate360Time;

            if (timeCounter > noInputRotationTime)
            {
                switch (rotateType)
                {
                    case ERotateType.BoundsCenter:
                        {
                            _gameObjectSet.objects.ForEach(go => go.transform.RotateAround(totalBounds.center, rotateAxis, rotateAngle));
                            break;
                        }
                    case ERotateType.SelfBoundsCenter:
                        {
                            _gameObjectSet.objects.ForEach(go => go.transform.RotateAround(boundsDic[go].center, rotateAxis, rotateAngle));
                            break;
                        }
                    case ERotateType.SelfTransformCenter:
                        {
                            _gameObjectSet.objects.ForEach(go => go.transform.Rotate(rotateAxis, rotateAngle, rotateSpace));
                            break;
                        }
                }
            }
        }

        /// <summary>
        /// 当退出
        /// </summary>
        /// <param name="data"></param>
        public override void OnExit(StateData data)
        {
            if (boundsDic.Count> 0 && !keepExitState)
            {
                RecoverRotation();
            }

            base.OnExit(data);
        }

        /// <summary>
        /// 完成
        /// </summary>
        /// <returns></returns>
        public override bool Finished()
        {
            return true;
        }

        /// <summary>
        /// 进度
        /// </summary>
        public override double progress
        {
            get
            {
                return base.progress = (timeCounter% rotate360Time) / rotate360Time;
            }

            set
            {
                base.progress = value;
            }
        }

        private Dictionary<GameObject, Quaternion> rotationRecorder = new Dictionary<GameObject, Quaternion>();

        private void RecordRotation()
        {
            rotationRecorder.Clear();
            _gameObjectSet.objects.ForEach(go =>
            {
                if (go)
                {
                    rotationRecorder[go] = go.transform.rotation;
                }
             });
        }

        private void RecoverRotation()
        {
            foreach (var item in rotationRecorder)
            {
                if (item.Key)
                {
                    item.Key.transform.rotation = item.Value;
                }
            }
        }
    }
}