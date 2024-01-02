﻿using System;
using System.Collections.Generic;
using UnityEngine.UI;
using XCSJ.Attributes;
using XCSJ.Extension.Base.Algorithms;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States.Base;

namespace XCSJ.PluginSMS.States.MultiMedia
{
    /// <summary>
    /// 字幕：字幕组件是用于控制UGUI文本在某个时间段上的显示的动画。可设定多个字幕以及字幕出现的时间，播放完成后，组件切换为完成态。
    /// </summary>
    [ComponentMenu(SMSCategory.MultiMediaDirectory + Title, typeof(SMSManager))]
    [Name(Title, nameof(Subtitle))]
    [Tip("字幕组件是用于控制UGUI文本在某个时间段上的显示的动画。可设定多个字幕以及字幕出现的时间，播放完成后，组件切换为完成态。", "Subtitle component is an animation used to control the display of ugui text in a certain time period. You can set multiple subtitles and the time when subtitles appear. After playing, the component switches to the finished state.")]
    [Attributes.Icon]
    public class Subtitle : WorkClip<Subtitle>
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "字幕";

        /// <summary>
        /// 创建
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        [StateLib(SMSCategory.MultiMedia, typeof(SMSManager))]
        [StateComponentMenu(SMSCategory.MultiMediaDirectory + Title, typeof(SMSManager))]
        [Name(Title, nameof(Subtitle))]
        [Tip("字幕组件是用于控制UGUI文本在某个时间段上的显示的动画。可设定多个字幕以及字幕出现的时间，播放完成后，组件切换为完成态。", "Subtitle component is an animation used to control the display of ugui text in a certain time period. You can set multiple subtitles and the time when subtitles appear. After playing, the component switches to the finished state.")]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        public static State Create(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 字幕列表
        /// </summary>
        [Name("字幕列表")]
        public List<SubtitleClip> subtitleClips = new List<SubtitleClip>();

        /// <summary>
        /// 显示模式
        /// </summary>
        [Name("显示模式")]
        [EnumPopup]
        public EShowMode showMode = EShowMode.SingleRow;

        /// <summary>
        /// 显示字幕的Text
        /// </summary>
        [ComponentPopup]
        [ValidityCheck(EValidityCheckType.NotNull)]
        [Name("显示字幕的Text")]
        public Text subtitleText;

        //[ComponentPopup]
        //[Name("遮罩字幕的Text")]
        //public Text shadeText;

        private int indexArray = -1;

        private string showText = "";

        /// <summary>
        /// 当设置百分比
        /// </summary>
        /// <param name="percent"></param>
        /// <param name="stateData"></param>
        protected override void OnSetPercent(Percent percent, StateData stateData)
        {
            double localPercent;
            int index = GetCurrentIndex(sections, percent.percent01OfWorkCurve, out localPercent);
            if (index == -1) return;

            switch (showMode)
            {
                case EShowMode.SingleRow:
                    {
                        if (indexArray == index) return;
                        else
                        {
                            indexArray = index;
                            //Debug.Log(subtitleClips[indexArray].ToString());
                            SetText(subtitleText, subtitleClips[indexArray].text);
                        }
                        break;
                    }
                case EShowMode.TypeWriter:
                    {
                        if (indexArray == index)
                        {
                            int subTextLength = (int)(localPercent * showText.Length + 1);
                            if (subTextLength <= showText.Length)
                            {
                                SetText(subtitleText, showText.Substring(0, subTextLength));
                            }
                            return;
                        }
                        else
                        {
                            indexArray = index;
                            //Debug.Log(subtitleClips[indexArray].ToString());
                            SetText(subtitleText, "");
                            showText = subtitleClips[indexArray].text;
                        }
                        break;
                    }
            }
        }

        void SetText(Text text, string content)
        {
            if (text) text.text = content;
        }

        /// <summary>
        /// 数据有效性
        /// </summary>
        /// <returns></returns>
        public override bool DataValidity()
        {
            return base.DataValidity() && subtitleText;
        }

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="data"></param>
        /// <returns></returns>
        public override bool Init(StateData data)
        {
            subtitleClips.Sort((x, y) => x.CompareTo(y));
            SplitInArray(subtitleClips);
            indexArray = -1;
            if (subtitleText) subtitleText.text = "";
            return base.Init(data);
        }

        double[] sections;

        /// <summary>
        /// 拆分到数组
        /// </summary>
        /// <param name="clips"></param>
        public void SplitInArray(List<SubtitleClip> clips)
        {
            int count = clips.Count;
            sections = new double[count];
            for (int i = 0; i < count; ++i)
            {
                sections[i] = clips[i].time / timeLength;
            }
        }

        /// <summary>
        /// 获取当前索引
        /// </summary>
        /// <param name="clips"></param>
        /// <param name="p"></param>
        /// <param name="localPercent"></param>
        /// <returns></returns>
        public int GetCurrentIndex(double[] clips, double p, out double localPercent)
        {
            if (clips == null || clips.Length == 0)
            {
                localPercent = 0;
                return -1;
            }
            for (int i = 0; i < sections.Length; i++)
            {
                double begin = sections[i];
                if (p > begin)
                {
                    double end = i < sections.Length - 1 ? (sections[i + 1] < 1 ? sections[i + 1] : 1) : 1;
                    if (p <= end)
                    {
                        localPercent = (p - begin) / (end - begin);
                        return i;
                    }
                }
            }
            localPercent = 0;
            return -1;
        }

        /// <summary>
        /// 获取本地百分比
        /// </summary>
        /// <param name="clips"></param>
        /// <param name="p"></param>
        /// <returns></returns>
        public double GetLocalPercent(double[] clips, double p)
        {
            if (clips == null || clips.Length == 0) return 1;
            int count = clips.Length;

            double begin = clips[0];
            if (p < begin) return 0;

            for (int i = 1; i < count; ++i)
            {
                double end = clips[i];
                if (p >= begin && p <= end)
                {
                    return (p - begin) / (end - begin);
                }
                begin = end;
            }
            return (p - begin) / (1 - begin);
        }
    }

    /// <summary>
    /// 字幕剪辑
    /// </summary>
    [Serializable]
    [Name("字幕剪辑")]
    public class SubtitleClip : IComparable<SubtitleClip>
    {
        /// <summary>
        /// 时间标签，形式如mm:ss.ff
        /// </summary>
        [Name("时间")]
        public double time;

        /// <summary>
        /// 语句标签，不含换行符
        /// </summary>
        [Name("字幕")]
        public string text = "";

        /// <summary>
        /// 与其他比较
        /// </summary>
        /// <param name="other"></param>
        /// <returns></returns>
        public int CompareTo(SubtitleClip other)
        {
            if (null == other)
            {
                return 1;//空值比较大，返回1
            }
            return this.time.CompareTo(other.time);//升序
        }

        /// <summary>
        /// 转字符串
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return "[" + CommonFun.ConvertIntToMS((int)time) + "]" + text;
        }
    }

    /// <summary>
    /// 显示模式
    /// </summary>
    [Name("显示模式")]
    public enum EShowMode
    {
        /// <summary>
        /// 单行显示
        /// </summary>
        [Name("单行显示")]
        SingleRow,

        /// <summary>
        /// 打字效果
        /// </summary>
        [Name("打字效果")]
        TypeWriter,
    }
}
