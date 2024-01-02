﻿using System.Reflection;
using UnityEditor;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.EditorCommonUtils;
using XCSJ.LitJson;
using XCSJ.PluginCommonUtils;
using XCSJ.Tools;

namespace XCSJ.EditorSMS
{
    /// <summary>
    /// 状态机-扩展选项
    /// </summary>
    [XDreamerPreferences]
    [Name("状态机-扩展")]
    [Import]
    public class SMSExtensionOption : XDreamerOption<SMSExtensionOption>
    {
        /// <summary>
        /// 工作剪辑编辑器选项
        /// </summary>
        [Name("工作剪辑编辑器选项")]
        public WorkClipEditorOption workClipEditorOption = new WorkClipEditorOption();
    }

    /// <summary>
    /// 工作剪辑编辑器选项
    /// </summary>
    [Name("工作剪辑编辑器选项")]
    [Import]
    public class WorkClipEditorOption : Option
    {
        /// <summary>
        /// 名称标题宽度
        /// </summary>
        [Name("名称标题宽度")]
        public float nameTitleWidth = 150;

        /// <summary>
        /// 标题宽度
        /// </summary>
        [Name("标题宽度")]
        public float titleWidth = 60;

        /// <summary>
        /// 开始时间
        /// </summary>
        [Name("开始时间")]
        public bool beginTime = true;

        /// <summary>
        /// 开始%
        /// </summary>
        [Name("开始%")]
        public bool beginPercent = true;

        /// <summary>
        /// 滑杆
        /// </summary>
        [Name("滑杆")]
        public bool slider = true;

        /// <summary>
        /// 结束%
        /// </summary>
        [Name("结束%")]
        public bool endPercent = true;

        /// <summary>
        /// 结束时间
        /// </summary>
        [Name("结束时间")]
        public bool endTime = true;

        /// <summary>
        /// 时长
        /// </summary>
        [Name("时长")]
        public bool timeLength = true;

        /// <summary>
        /// 单次时长
        /// </summary>
        [Name("单次时长")]
        public bool OTL = true;

        /// <summary>
        /// 速度
        /// </summary>
        [Name("速度")]
        public bool speed = true;

        /// <summary>
        /// 次数
        /// </summary>
        [Name("次数")]
        public bool loopCount = true;
    }

    /// <summary>
    /// 状态机扩展选项编辑器
    /// </summary>
    [CommonEditor(typeof(SMSExtensionOption))]
    public class SMSExtensionOptionEditor : XDreamerOptionEditor<SMSExtensionOption>
    {
        /// <summary>
        /// 当绘制GUI
        /// </summary>
        /// <param name="obj"></param>
        /// <param name="fieldInfo"></param>
        /// <returns></returns>
        public override bool OnGUI(object obj, FieldInfo fieldInfo)
        {
            switch (fieldInfo.Name)
            {
                case nameof(SMSExtensionOption.workClipEditorOption):
                    {
                        var option = preference.workClipEditorOption;

                        if (!(option.expand = UICommonFun.Foldout(option.expand, CommonFun.NameTip(typeof(SMSExtensionOption), nameof(SMSExtensionOption.workClipEditorOption))))) return true;

                        CommonFun.BeginLayout();

                        option.nameTitleWidth = EditorGUILayout.Slider(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.nameTitleWidth)), option.nameTitleWidth, 50, 300);
                        option.titleWidth = EditorGUILayout.Slider(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.titleWidth)), option.titleWidth, 50, 150);

                        EditorGUILayout.BeginHorizontal();
                        EditorGUILayout.PrefixLabel("标题显示/隐藏");

                        option.beginTime = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.beginTime)), option.beginTime, EditorStyles.miniButtonLeft, GUILayout.Width(option.titleWidth));
                        option.beginPercent = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.beginPercent)), option.beginPercent, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.slider = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.slider)), option.slider, EditorStyles.miniButtonMid, GUILayout.ExpandWidth(true));
                        option.endPercent = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.endPercent)), option.endPercent, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.endTime = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.endTime)), option.endTime, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.timeLength = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.timeLength)), option.timeLength, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.OTL = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.OTL)), option.OTL, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.speed = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.speed)), option.speed, EditorStyles.miniButtonMid, GUILayout.Width(option.titleWidth));
                        option.loopCount = UICommonFun.ButtonToggle(CommonFun.NameTip(typeof(WorkClipEditorOption), nameof(option.loopCount)), option.loopCount, EditorStyles.miniButtonRight, GUILayout.Width(option.titleWidth));
                        EditorGUILayout.EndHorizontal();

                        EditorGUILayout.BeginHorizontal();
                        EditorGUILayout.PrefixLabel("标题显隐操作");
                        if (GUILayout.Button("全部显示", EditorStyles.miniButtonLeft))
                        {
                            option.beginTime = true;
                            option.beginPercent = true;
                            option.slider = true;
                            option.endPercent = true;
                            option.endTime = true;
                            option.timeLength = true;
                            option.OTL = true;
                            option.speed = true;
                            option.loopCount = true;
                        }
                        if (GUILayout.Button("全部隐藏", EditorStyles.miniButtonMid))
                        {
                            option.beginTime = false;
                            option.beginPercent = false;
                            option.slider = false;
                            option.endPercent = false;
                            option.endTime = false;
                            option.timeLength = false;
                            option.OTL = false;
                            option.speed = false;
                            option.loopCount = false;
                        }
                        if (GUILayout.Button("显隐切换", EditorStyles.miniButtonRight))
                        {
                            option.beginTime = !option.beginTime;
                            option.beginPercent = !option.beginPercent;
                            option.slider = !option.slider;
                            option.endPercent = !option.endPercent;
                            option.endTime = !option.endTime;
                            option.timeLength = !option.timeLength;
                            option.OTL = !option.OTL;
                            option.speed = !option.speed;
                            option.loopCount = !option.loopCount;
                        }
                        EditorGUILayout.EndHorizontal();

                        CommonFun.EndLayout();
                        return true;
                    }
            }
            return base.OnGUI(obj, fieldInfo);
        }
    }
}
