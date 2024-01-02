﻿using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.Interfaces;
using XCSJ.Maths;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;

namespace XCSJ.PluginSMS.States.MultiMedia
{
    /// <summary>
    /// 音频:音频组件是播放声音的对象。播放完音频之后，组件切换为完成态。
    /// </summary>
    [ComponentMenu(SMSCategory.MultiMediaDirectory + Title, typeof(SMSManager))]
    [Name(Title, nameof(Audio))]
    [Tip("音频组件是播放声音的对象。播放完音频之后，组件切换为完成态。", "The audio component is the object of playing sound. After playing the audio, the component switches to the finished state.")]
    [XCSJ.Attributes.Icon(EIcon.Audio)]
    public class Audio : WorkClip<Audio>
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "音频";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [StateLib(SMSCategory.MultiMedia, typeof(SMSManager))]
        [StateComponentMenu(SMSCategory.MultiMediaDirectory + Title, typeof(SMSManager))]
        [Name(Title, nameof(Audio))]
        [Tip("音频组件是播放声音的对象。播放完音频之后，组件切换为完成态。", "The audio component is the object of playing sound. After playing the audio, the component switches to the finished state.")]
        [XCSJ.Attributes.Icon(EIcon.Audio)]
        public static State CreateAudio(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 音频源
        /// </summary>
        [Group("音频属性")]
        [Name("音频源")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [ComponentPopup(typeof(AudioSource))]
        public AudioSource audioSource;

        /// <summary>
        /// 时间容差
        /// </summary>
        [Name("时间容差")]
        [Tip("当音频当前播放时间与期望时间在时间容差内时，不更新音频的播放时间;", "When the current playing time of the audio is within the time tolerance of the expected time, the playing time of the audio is not updated;")]
        [Range(0.001f, 1)]
        public float timeTolerance = 0.1f;

        /// <summary>
        /// 无效的
        /// </summary>
        public bool invalid => !audioSource || !audioSource.clip || MathX.ApproximatelyZero(timeLength) || MathX.ApproximatelyZero(audioSource.clip.length);

        /// <summary>
        /// 当设置百分比时触发播放：设置百分比时，如果声音没有播放，则设定播放
        /// </summary>
        public bool triggerPlayWhenSetPercent { get; set; } = true;

        /// <summary>
        /// 播放
        /// </summary>
        public void Play()
        {
            if (invalid) return;
            audioSource.Play();
        }

        /// <summary>
        /// 停止
        /// </summary>
        public void Stop()
        {
            if (invalid) return;
            audioSource.time = 0;
            audioSource.Stop();
        }

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnEntry(StateData stateData)
        {
            base.OnEntry(stateData);
            if (stateData == null || stateData.workMode == EWorkMode.Simulate) return;
            Play();
        }

        /// <summary>
        /// 当设置百分比
        /// </summary>
        /// <param name="percent"></param>
        /// <param name="stateData"></param>
        protected override void OnSetPercent(Percent percent, StateData stateData)
        {
            if (stateData == null || stateData.workMode == EWorkMode.Simulate) return;
            if (invalid) return;
            var p = percent.percent01OfWorkCurve;
            if (MathX.Approximately(p, 1) || MathX.Approximately(p, 0))
            {
                Stop();
            }
            else
            {
                if (audioSource.isPlaying)
                {
                    var time = p * audioSource.clip.length;
                    if (!MathX.Approximately(time, audioSource.time, timeTolerance))
                    {
                        //Log.DebugFormat("--->percent:{0}, time:{1}, audioSource.time: {2}", p, time, audioSource.time);
                        audioSource.time = (float)time;
                    }
                }
                else if (triggerPlayWhenSetPercent
                      && stateData != null
                      && stateData.workMode != EWorkMode.Simulate)
                {
                    //Log.Debug(stateData.workMode);
                    //Log.Debug(stateData.workState.GetNamePath());
                    Play();
                }
            }
        }

        /// <summary>
        /// 当退出
        /// </summary>
        /// <param name="stateData"></param>
        public override void OnExit(StateData stateData)
        {
            
            if (stateData == null || stateData.workMode == EWorkMode.Simulate) return;
            Stop();
            base.OnExit(stateData);
        }

        /// <summary>
        /// 重置
        /// </summary>
        /// <param name="stateData"></param>
        public override void Reset(ResetData stateData)
        {
            base.Reset(stateData);
            switch (stateData.dataRule)
            {
                case EDataRule.Init:
                case EDataRule.Entry:
                    {
                        Stop();
                        break;
                    }
            }
        }

        /// <summary>
        /// 数据有效性
        /// </summary>
        /// <returns></returns>
        public override bool DataValidity()
        {
            return base.DataValidity() && !invalid;
        }

        /// <summary>
        /// 转友好字符串
        /// </summary>
        /// <returns></returns>
        public override string ToFriendlyString()
        {
            return audioSource ? audioSource.name : "";
        }

        /// <summary>
        /// 当播放器状态已变更
        /// </summary>
        /// <param name="player"></param>
        /// <param name="lastPlayerState"></param>
        public override void OnPlayerStateChanged(IWorkClipPlayer player, EPlayerState lastPlayerState)
        {
            base.OnPlayerStateChanged(player, lastPlayerState);
            switch(player.playerState)
            {
                case EPlayerState.Play:
                    {
                        if (parent.isActive || parent.busy)
                        {
                            Play();
                        }
                        break;
                    }
                case EPlayerState.Pause:
                    {
                        if (invalid) return;
                        audioSource.Pause();
                        break;
                    }
                case EPlayerState.Resume:
                    {
                        if (invalid) return;
                        audioSource.UnPause();
                        break;
                    }
                case EPlayerState.Stop:
                    {
                        Stop();
                        break;
                    }
            }
        }
    }
}
