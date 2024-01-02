﻿using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.Extension.Base.Extensions;
using XCSJ.Extension.Interactions.Base;
using XCSJ.Interfaces;
using XCSJ.Maths;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginTimelines;
using XCSJ.PluginTimelines.Tools;

namespace XCSJ.PluginSMS.States.TimeLine
{
    /// <summary>
    /// 时间轴播放器:时间轴播放器组件是用于播放状态工作剪辑集合的对象。在设定的时间上播放工作片段剪辑，播放完成后，组件切换为完成态。
    /// </summary>
    [Name(Title, nameof(TimeLinePlayer))]
    [Tip("时间轴播放器组件是用于播放状态工作剪辑集合的对象。在设定的时间上播放工作片段剪辑，播放完成后，组件切换为完成态。", "The timeline player component is an object used to play a collection of state working clips. Play the working clip at the set time. After playing, the component switches to the finished state.")]
    [XCSJ.Attributes.Icon(EIcon.Play)]
    [DisallowMultipleComponent]
    [ComponentMenu("时间轴/" + Title, typeof(TimelineManager))]
    public sealed class TimeLinePlayer : StateComponent<TimeLinePlayer>, ITimeClip, IContentPlayer, IPlayableContentHost
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "时间轴播放器";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [Name(Title, nameof(TimeLinePlayer))]
        [Tip("时间轴播放器组件是用于播放状态工作剪辑集合的对象。在设定的时间上播放工作片段剪辑，播放完成后，组件切换为完成态。", "The timeline player component is an object used to play a collection of state working clips. Play the working clip at the set time. After playing, the component switches to the finished state.")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
#if UNITY_EDITOR && XDREAMER_EDITION_DEVELOPER
        [StateLib("时间轴", typeof(TimelineManager))]
        [StateComponentMenu("时间轴/"+ Title, typeof(TimelineManager))]
#endif
        public static State Create(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 播放内容
        /// </summary>
        [Name("播放内容")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [StateComponentPopup(typeof(TimeLinePlayContent), stateCollectionType = EStateCollectionType.Root, searchFlags = ESearchFlags.Default | ESearchFlags.FirstComponent | ESearchFlags.OptimizeComponent)]
        public TimeLinePlayContent playContent;

        /// <summary>
        /// 进入播放
        /// </summary>
        [Name("进入播放")]
        [Tip("当时间轴播放器所在状态进入的时候，就启动播放", "When the state of the timeline player enters, it starts playing")]
        public bool playOnEntry = true;

        /// <summary>
        /// 播放时长
        /// </summary>
        [Name("播放时长")]
        [Tip("单位为秒", "In seconds")]
        [Range(0, (float)TimeRange.DefaultMaxTimeLength)]
        public double duration = TimeRange.DefaultTimeLength;

        /// <summary>
        /// 同步时长
        /// </summary>
        [Name("同步时长")]
        [Tip("将播放时长与播放内容的时长保持同步", "Keep the playback duration in sync with the playback content")]
        public bool useContentTimeLength = true;

        /// <summary>
        /// 播放速度
        /// </summary>
        [Name("播放速度")]
        [Range(0, 100)]
        [SerializeField]
        [FormerlySerializedAs(nameof(speed))]
        private double _speed = 1;

        /// <summary>
        /// 速度
        /// </summary>
        public double speed
        {
            get => _speed * parent.speed;
            set
            {
                if (value <= 0)
                {
                    _speed = 0;
                    return;
                }
                _speed = MathX.Scale(value, parent.speed, value);
            }
        }

        /// <summary>
        /// 循环
        /// </summary>
        [Name("循环")]
        public bool isLoop = false;

        /// <summary>
        /// 播放完成回调函数
        /// </summary>
        [Name("播放完成回调函数")]
        [UserDefineFun()]
        public string finishUserScriptCallback;

        /// <summary>
        /// 退出时设置百分比
        /// </summary>
        [Name("退出时设置百分比")]
        [Tip("勾选,在当前状态组件退出时设置百分比进度为1;不勾选,不做处理;", "Check to set the percentage progress to 1 when the component in the current status exits; Uncheck and do not process;")]
        public bool setPercentOnExit = true;

        /// <summary>
        /// 退出时百分比
        /// </summary>
        [Name("退出时百分比")]
        [Tip("当状态组件退出后,将当前状态组件逻辑数据保持在本百分比进度;值为0,可将数据尽量还原到初始化/进入的状态;", "When the status component exits, keep the logic data of the current status component at this percentage progress; If the value is 0, the data can be restored to the initialization / entry state as much as possible;")]
        [HideInSuperInspector(nameof(setPercentOnExit), EValidityCheckType.False)]
        [Range(0,1)]
        public double percentOnExit = 1;

        /// <summary>
        /// 是播放中
        /// </summary>
        public bool isPlaying => _playerState == EPlayerState.Playing;

        /// <summary>
        /// 是暂停
        /// </summary>
        public bool isPause => _playerState == EPlayerState.Pause;

        private EPlayerState _playerState = EPlayerState.None;

        /// <summary>
        /// 播放状态
        /// </summary>
        public EPlayerState playerState
        {
            get => _playerState;
            set
            {
                if (_playerState != value)
                {
                    var lastPlayerState = _playerState;
                    _playerState = value;

                    if (playContent) playContent.OnPlayerStateChanged(this, lastPlayerState);

                    onPlayerStateChanged?.Invoke(this, lastPlayerState, _playerState);
                }
            }
        }

        /// <summary>
        /// 任意一个播放器的播放状态发生变化时均回调
        /// </summary>
        public static event Action<TimeLinePlayer, EPlayerState, EPlayerState> onPlayerStateChanged;

        /// <summary>
        /// 当播放器百分比已变更
        /// </summary>
        public static event Action<TimeLinePlayer, double> onPlayerPercentChanged;

        /// <summary>
        /// 时间
        /// </summary>
        public double time
        {
            get => duration * percent;
            set
            {
                timeCounter = value;
                percent = value / duration;
            }
        }

        private double timeCounter = 0;

        /// <summary>
        /// 百分比
        /// </summary>
        public double percent { get => _percent; set => SetPercent(value); }

        private double _percent;


        private EPlayerState _beforeFinishState = EPlayerState.None;

        #region 生命周期函数

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="stateData"></param>
        /// <returns></returns>
        public override bool Init(StateData stateData)
        {
            try
            {
                playerState = EPlayerState.Init;
                //BindPlayContent();
                return base.Init(stateData);
            }
            finally
            {
                playerState = EPlayerState.Free;
            }
        }

        /// <summary>
        /// 释放
        /// </summary>
        /// <param name="stateData"></param>
        public override void Release(StateData stateData)
        {
            base.Release(stateData);
            playerState = EPlayerState.Release;
        }

        /// <summary>
        /// 当进入之前
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnBeforeEntry(StateData stateData)
        {
            base.OnBeforeEntry(stateData);

            Load(playContent);
        }

        private PlayerController playerControllerOnEntry;

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnEntry(StateData stateData)
        {
            base.OnEntry(stateData);

            timeCounter = 0;
            percent = 0;

            InitPlayContent();

            // 控制外部的播放器控制器
            playerControllerOnEntry = playerController;
            if (playerControllerOnEntry)
            {
                playerControllerOnEntry.BeginControlled(this);
            }

            // 进入就播放
            if (playOnEntry)
            {
                Replay();
            }
        }

        /// <summary>
        /// 当更新
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnUpdate(StateData stateData)
        {
            base.OnUpdate(stateData);

            switch (playerState)
            {
                case EPlayerState.Playing:
                    {
                        UpdatePercent(stateData);
                        break;
                    }
                case EPlayerState.Play:
                    {
                        if (playContent) playContent.OnPlay();
                        playerState = EPlayerState.Playing;
                        UpdatePercent(stateData);
                        break;
                    }
                case EPlayerState.Resume:
                    {
                        playerState = EPlayerState.Playing;
                        UpdatePercent(stateData);
                        break;
                    }
                case EPlayerState.Finished:
                    {
                        if (isLoop)
                        {
                            // 循环并且结束时处于播放状态，则再播放
                            if (_beforeFinishState == EPlayerState.Playing)
                            {
                                Replay();
                            }
                        }
                        else
                        {
                            playerState = EPlayerState.Free;
                        }
                        finished = true;
                        break;
                    }
            }
        }

        private void UpdatePercent(StateData stateData)
        {
            //计算进度
            timeCounter += Time.deltaTime * speed;

            //设置进度            
            InternalSetPercent(MathX.Scale(timeCounter, duration, 1), stateData);
        }

        /// <summary>
        /// 当退出
        /// </summary>
        /// <param name="data"></param>
        public override void OnExit(StateData data)
        {
            base.OnExit(data);

            Stop();

            if (setPercentOnExit)
            {
                InternalSetPercent(percentOnExit, data);
            }

            if (playerControllerOnEntry)
            {
                playerControllerOnEntry.EndControlled(this);
            }
        }

        /// <summary>
        /// 当退出之后
        /// </summary>
        /// <param name="data"></param>
        public override void OnAfterExit(StateData data)
        {
            Unload(playContent);

            base.OnAfterExit(data);
        }

        /// <summary>
        /// 数据有效性
        /// </summary>
        /// <returns></returns>
        public override bool DataValidity() => base.DataValidity() && playContent;

        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString() => duration + "秒";

        #endregion

        #region 播放内容

        /// <summary>
        /// 设置时间
        /// </summary>
        /// <param name="time"></param>
        /// <param name="stateData"></param>
        public void SetTime(double time, StateData stateData = null)
        {
            //所在状态必须正在工作中.
            if (!parent.active) return;

            // 通过当前运行时间
            timeCounter = MathX.Clamp(time, 0, duration);

            InternalSetPercent(MathX.ApproximatelyZero(duration) ? 0 : timeCounter / duration, stateData);
        }

        /// <summary>
        /// 设置百分比
        /// </summary>
        /// <param name="percent"></param>
        /// <param name="stateData"></param>
        public void SetPercent(double percent, StateData stateData = null)
        {
            //所在状态必须正在工作中.
            if (!parent.active) return;

            // 通过百分比修改运行时间
            timeCounter = percent * duration;

            InternalSetPercent(percent, stateData);
        }

        private void InternalSetPercent(double percent, StateData stateData)
        {
            _percent = MathX.Clamp01(percent);

            if (playContent) playContent.PlayContent(_percent, StateData.Clone(stateData, EWorkMode.Play, parent));

            //回调进度变化的事件
            onPlayerPercentChanged?.Invoke(this, _percent);
            onPlayerPercentChanged?.Invoke(this, _percent);

            //检查是否播放完毕
            if (percent >= 1)
            {
                _beforeFinishState = playerState;

                Stop();

                ScriptManager.CallUDF(finishUserScriptCallback);
                playerState = EPlayerState.Finished;
            }

            if (playerControllerOnEntry)
            {
                playerControllerOnEntry.percent = _percent;
            }
        }

        private void OnNewPlayContentElement(TimeLinePlayContent timeLinePlayContent, List<State> lastElements, State newElement, double percent)
        {
            SetPercent(percent);
        }

        private void InitPlayContent()
        {
            if (playContent)
            {
                // 时长与播放内容时长同步
                if (useContentTimeLength)
                {
                    duration = playContent.GetTimeLength();
                }
                // 使用当前时间长度设置播放内容长度
                else
                {
                    playContent.ResetTimeLength(duration);
                }
            }
        }

        /// <summary>
        /// 设置播放内容
        /// </summary>
        /// <param name="playContent"></param>
        public void SetPlayContent(TimeLinePlayContent playContent)
        {
            if (playContent)
            {
                // 停止当前播放内容
                Stop();

                Unload(this.playContent);

                this.playContent = playContent;

                Load(this.playContent);

                InitPlayContent();
            }
        }

        #endregion

        #region IPlayer

        /// <summary>
        /// 是播放中
        /// </summary>
        /// <returns></returns>
        public bool IsPlaying() => isPlaying;

        /// <summary>
        /// 重放
        /// </summary>
        public void Replay()
        {
            SetPercent(0);
            PlayOrResume();
        }

        /// <summary>
        /// 播放或继续
        /// </summary>
        /// <returns></returns>
        public bool PlayOrResume() => isPause ? Resume() : Play();

        /// <summary>
        /// 播放
        /// </summary>
        /// <returns></returns>
        public bool Play()
        {
            playerState = EPlayerState.Play;

            if (playContent) playContent.OnPlay();

            _beforeFinishState = EPlayerState.None;

            return true;
        }

        /// <summary>
        /// 停止
        /// </summary>
        /// <returns></returns>
        public bool Stop()
        {
            timeCounter = 0;
            playerState = EPlayerState.Stop;

            if (playContent) playContent.OnStop();

            return true;
        }

        /// <summary>
        /// 暂停
        /// </summary>
        /// <returns></returns>
        public bool Pause()
        {
            if (playerState == EPlayerState.Playing)
            {
                playerState = EPlayerState.Pause;
                return true;
            }
            return false;
        }

        /// <summary>
        /// 继续
        /// </summary>
        /// <returns></returns>
        public bool Resume()
        {
            if (playerState == EPlayerState.Pause || (isLoop && playerState == EPlayerState.Finished))
            {
                playerState = EPlayerState.Resume;
                return true;
            }
            return false;
        }

        /// <summary>
        /// 循环
        /// </summary>
        public bool loop { get => isLoop; set => isLoop = value; }

        #endregion

        #region ITimeClip

        /// <summary>
        /// 开始时间
        /// </summary>
        public double beginTime { get => 0; set { } }

        /// <summary>
        /// 结束时间
        /// </summary>
        public double endTime { get => duration; set => duration = value; }

        /// <summary>
        /// 时长
        /// </summary>
        public double timeLength { get => duration; set => duration = value; }

        #endregion

        #region IPlayableContentHost

        /// <summary>
        /// 播放器控制器查找规则
        /// </summary>
        public enum EPlayerControllerFindRule
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None,

            /// <summary>
            /// 指定对象
            /// </summary>
            [Name("指定对象")]
            Fixed,

            /// <summary>
            /// 当前场景中第一个激活对象
            /// </summary>
            [Name("当前场景中第一个激活对象")]
            FirstActiveObjectInScene,

            /// <summary>
            /// 当前场景中第一个对象
            /// </summary>
            [Name("当前场景中第一个对象")]
            FirstObjectInScene,

            /// <summary>
            /// 当前场景中第一个激活对象或对象
            /// </summary>
            [Name("当前场景中第一个激活对象或对象")]
            FirstActiveObjectOrInactiveObjectInScene,
        }

        /// <summary>
        /// 播放器控制器查找规则
        /// </summary>
        [Name("播放器控制器查找规则")]
        [EnumPopup]
        public EPlayerControllerFindRule _playerControllerFindRule = EPlayerControllerFindRule.FirstActiveObjectOrInactiveObjectInScene;

        /// <summary>
        /// 播放器控制器
        /// </summary>
        [Name("播放器控制器")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [HideInSuperInspector(nameof(_playerControllerFindRule), EValidityCheckType.NotEqual, EPlayerControllerFindRule.Fixed)]
        public PlayerController _playerController;

        private PlayerController playerController
        {
            get
            {
                switch (_playerControllerFindRule)
                {
                    case EPlayerControllerFindRule.Fixed:
                        {
                            return _playerController;
                        }
                    case EPlayerControllerFindRule.FirstActiveObjectInScene:
                        {
                            return UnityObjectExtension.XGetComponentInGlobal<PlayerController>(false);
                        }
                    case EPlayerControllerFindRule.FirstObjectInScene:
                        {
                            return UnityObjectExtension.XGetComponentInGlobal<PlayerController>(true);
                        }
                    case EPlayerControllerFindRule.FirstActiveObjectOrInactiveObjectInScene:
                        {
                            var pc = UnityObjectExtension.XGetComponentInGlobal<PlayerController>(false);
                            if (pc) return pc;

                            return UnityObjectExtension.XGetComponentInGlobal<PlayerController>(true);
                        }
                }
                return null;
            }
        }

        /// <summary>
        /// 播放内容
        /// </summary>
        public IPlayableContent contentControlled { get; private set; }

        /// <summary>
        /// 播放器
        /// </summary>
        public IContentPlayer player => this;

        /// <summary>
        /// 宿主播放器
        /// </summary>
        public IContentPlayer hostPlayer => this;

        /// <summary>
        /// 加载播放内容
        /// </summary>
        /// <param name="playableContent"></param>
        /// <param name="onLoad"></param>
        /// <returns></returns>
        public void Load(IPlayableContent playableContent, Action<bool> onLoad = null)
        {
            bool isLoad = false;

            // 有效性检查：不允许自己作为外部控制器去加载自己
            if (playableContent != null && contentControlled != playableContent)
            {
                contentControlled = playableContent;

                playerState = EPlayerState.LoadContent;

                if (contentControlled is TimeLinePlayContent timeLinePlayContent)
                {
                    timeLinePlayContent.onNewPlayContentElement += OnNewPlayContentElement;
                }

                playerState = EPlayerState.LoadedContent;
                isLoad = true;
            }

            onLoad?.Invoke(isLoad);
        }

        /// <summary>
        /// 卸载播放内容
        /// </summary>
        /// <param name="playableContent"></param>
        /// <param name="onLoad"></param>
        /// <returns></returns>
        public void Unload(IPlayableContent playableContent, Action<bool> onLoad = null)
        {
            bool isLoad = false;
            if (contentControlled != null && contentControlled == playableContent)
            {
                playerState = EPlayerState.UnloadContent;

                if (playableContent is TimeLinePlayContent timeLinePlayContent)
                {
                    timeLinePlayContent.onNewPlayContentElement -= OnNewPlayContentElement;
                }

                playerState = EPlayerState.UnloadedContent;

                contentControlled = null;
                isLoad = true;
            }

            onLoad?.Invoke(isLoad);
        }

        /// <summary>
        /// 获取受控播放内容
        /// </summary>
        /// <returns></returns>
        public IPlayableContent[] GetControlledContents() => playContent ? new IPlayableContent[] { playContent } : new IPlayableContent[0];

        #endregion
    }
}
