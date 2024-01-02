﻿using System;
using System.Collections.Generic;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.ComponentModel;
using XCSJ.PluginSMS.Kernel;
using XCSJ.PluginSMS.States;
using XCSJ.PluginSMS.States.Base;
using XCSJ.PluginSMS.States.GameObjects;
using XCSJ.Scripts;

namespace XCSJ.PluginHoloLens
{
    /// <summary>
    /// HoloLens拖拽启用
    /// </summary>
    [Serializable]
    [ComponentMenu("HoloLens/HoloLens拖拽启用", typeof(HoloLensManager))]
    [Name("HoloLens拖拽启用", nameof(Drag))]
    [XCSJ.Attributes.Icon(index = 34993)]
    [RequireComponent(typeof(GameObjectSet))]
    [Tip("HoloLens拖拽启用组件是用于设置是否启用某个游戏对象的拖拽操作的执行体。游戏对象拖拽启用后，用户可用捏的手势进行拖拽。命令执行完毕后组件切换为完成态。", "The hololens drag enable component is used to set whether to enable the drag operation of a game object. After the game object drag is enabled, the user can use the pinch gesture to drag. After the command is executed, the component switches to the completed state.")]
    public class Drag : HoloLensStateComponent<Drag>
    {
        /// <summary>
        /// 创建拖拽
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
#if UNITY_EDITOR && XDREAMER_EDITION_DEVELOPER
        [StateLib("HoloLens", typeof(HoloLensManager))]
        [StateComponentMenu("HoloLens/HoloLens拖拽启用", typeof(HoloLensManager))]
#endif
        [Name("HoloLens拖拽启用", nameof(Drag))]
        [XCSJ.Attributes.Icon(EMemberRule.ReflectedType)]
        [Tip("HoloLens拖拽启用组件是用于设置是否启用某个游戏对象的拖拽操作的执行体。游戏对象拖拽启用后，用户可用捏的手势进行拖拽。命令执行完毕后组件切换为完成态。", "The hololens drag enable component is used to set whether to enable the drag operation of a game object. After the game object drag is enabled, the user can use the pinch gesture to drag. After the command is executed, the component switches to the completed state.")]
        public static State CreateDrag(IGetStateCollection obj) => CreateNormalState(obj);

        /// <summary>
        /// 初始化启用
        /// </summary>
        [Name("初始化启用")]
        [EnumPopup]
        public EBool initEnable = EBool.None;

        /// <summary>
        /// 进入启用
        /// </summary>
        [Name("进入启用")]
        [EnumPopup]
        public EBool entryEnable = EBool.Yes;

        /// <summary>
        /// 退出启用
        /// </summary>
        [Name("退出启用")]
        [EnumPopup]
        public EBool exitEnable = EBool.No;

        private List<InputListener> dragListeners = new List<InputListener>();

        private GameObjectSet _gameObjectSet;

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
                _gameObjectSet.objects.ForEach(go =>
                {
                    var drager = CommonFun.GetOrAddComponent<InputListener>(go);
                    if(drager) dragListeners.Add(drager);
                });
            }
            SetEnable(initEnable);

            return base.Init(data);
        }

        /// <summary>
        /// 当进入
        /// </summary>
        /// <param name="data"></param>
        public override void OnEntry(StateData data)
        {
            base.OnEntry(data);

            SetEnable(entryEnable);
        }

        /// <summary>
        /// 当退出之后
        /// </summary>
        /// <param name="data"></param>
        public override void OnAfterExit(StateData data)
        {
            base.OnAfterExit(data);
            
            SetEnable(exitEnable);
        }

        /// <summary>
        /// 设置启用
        /// </summary>
        /// <param name="enable"></param>
        protected void SetEnable(EBool enable)
        {
            foreach (var dl in dragListeners)
            {
                dl.dragEnable = CommonFun.BoolChange(dl.dragEnable, enable);
            }
        }

        /// <summary>
        /// 完成
        /// </summary>
        /// <returns></returns>
        public override bool Finished() => true;
    }
}