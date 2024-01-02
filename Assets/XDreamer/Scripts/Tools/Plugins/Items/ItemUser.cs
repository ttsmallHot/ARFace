﻿using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Interactions;
using XCSJ.PluginXGUI;

namespace XCSJ.PluginTools.Items
{
    /// <summary>
    /// 物品收集器：用于从角色对象上获取物品
    /// </summary>
    [Name("物品收集器")]
    [RequireComponent(typeof(ItemCollection))]
    public class ItemUser : InteractableVirtual
    {
        /// <summary>
        /// 物品收集模式
        /// </summary>
        public enum EItemCollectMode
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None,

            /// <summary>
            /// 存在
            /// </summary>
            [Name("存在")] 
            Has,

            /// <summary>
            /// 获取
            /// </summary>
            [Name("获取")] 
            Get,

            /// <summary>
            /// 获取并消耗
            /// </summary>
            [Name("获取并消耗")] 
            GetAndConsume
        }

        /// <summary>
        /// 物品收集器方式
        /// </summary>
        [Name("物品收集器方式")]
        [EnumPopup]
        public EItemCollectMode _itemNeedMode = EItemCollectMode.Get;

        /// <summary>
        /// 物品清单
        /// </summary>
        [Name("物品清单")]
        [ValidityCheck(EValidityCheckType.ElementCountGreater, 0)]
        public List<ItemInfo> _requestItems = new List<ItemInfo>();

        /// <summary>
        /// 完成物品处理规则
        /// </summary>
        public enum EFinishItemHandleRule
        {
            /// <summary>
            /// 无
            /// </summary>
            [Name("无")]
            None,

            /// <summary>
            /// 不可交互
            /// </summary>
            [Name("不可交互")]
            CannotInteractable,

            /// <summary>
            /// 消失
            /// </summary>
            [Name("消失")]
            Disappear,

            /// <summary>
            /// 销毁
            /// </summary>
            [Name("销毁")]
            Destroy,
        }

        /// <summary>
        /// 完成后物品处理规则
        /// </summary>
        [Name("完成后物品处理规则")]
        [HideInSuperInspector(nameof(_itemNeedMode), EValidityCheckType.Equal, EItemCollectMode.GetAndConsume)]
        public EFinishItemHandleRule _finishItemHandleRule = EFinishItemHandleRule.CannotInteractable;

        /// <summary>
        /// 物品收集状态
        /// </summary>
        public enum EItemCollectState
        {
            /// <summary>
            /// 未完成
            /// </summary>
            [Name("未完成")]
            Unfinish,

            /// <summary>
            /// 完成
            /// </summary>
            [Name("完成")]
            Finish,

            /// <summary>
            /// 开始消耗
            /// </summary>
            [Name("开始消耗")]
            BeginConsume,

            /// <summary>
            /// 消耗中
            /// </summary>
            [Name("消耗中")]
            Consuming,

            /// <summary>
            /// 结束消耗
            /// </summary>
            [Name("结束消耗")]
            EndConsume,
        }

        /// <summary>
        /// 物品收集器状态发生改变：参数1=物品收集器，参数2=旧状态
        /// </summary>
        public static event Action<ItemUser, EItemCollectState> onCollectorStateChange;

        /// <summary>
        /// 物品收集状态
        /// </summary>
        [Name("物品收集状态")]
        [Readonly()]
        [EnumPopup]
        public EItemCollectState _itemCollectState = EItemCollectState.Unfinish;

        /// <summary>
        /// 物品收集状态
        /// </summary>
        public EItemCollectState itemCollectState
        {
            get => _itemCollectState;
            set
            {
                if (_itemCollectState != value)
                {
                    var oldState = _itemCollectState;
                    _itemCollectState = value;
                    onCollectorStateChange?.Invoke(this, oldState);

                    if (_itemCollectState == EItemCollectState.Finish)
                    {
                        OnFinishState();
                    }
                    Debug.Log("收集器状态：" + _itemCollectState);
                }
            }
        }

        #region 消耗物品

        /// <summary>
        /// 消耗时间
        /// </summary>
        [Name("消耗时间")]
        public float _consumeTime = 3;

        private float consumeCounter = 0;

        /// <summary>
        /// 进度标题
        /// </summary>
        public string progressTitle { get; private set; }

        /// <summary>
        /// 进度值
        /// </summary>
        public float progressValue { get; private set; }

        #endregion

        private ItemCollection itemCollection;

        /// <summary>
        /// 唤醒
        /// </summary>
        protected override void Awake()
        {
            base.Awake();

            itemCollection = GetComponent<ItemCollection>();
        }

        /// <summary>
        /// 更新
        /// </summary>
        protected void Update()
        {
            switch (_itemCollectState)
            {
                case EItemCollectState.BeginConsume:
                    {
                        progressTitle = ItemInfoListToString(_requestItems);
                        itemCollectState = EItemCollectState.Consuming;
                        //XGUIHelper.ShowProgressBar(this);
                        break;
                    }
                case EItemCollectState.Consuming:
                    {
                        consumeCounter += Time.deltaTime;
                        progressValue = consumeCounter / _consumeTime;
                        if (consumeCounter> _consumeTime)
                        {
                            consumeCounter = 0;
                            itemCollectState = EItemCollectState.EndConsume;
                        }
                        break;
                    }
                case EItemCollectState.EndConsume:
                    {
                        itemCollectState = EItemCollectState.Unfinish;
                        break;
                    }
            }
        }

        /// <summary>
        /// 可交互
        /// </summary>
        /// <param name="interactorAction"></param>
        /// <returns></returns>
        public bool CanInteractable(InteractData interactorAction)
        {
            return itemCollectState == EItemCollectState.Unfinish;
        }

        /// <summary>
        /// 尝试处理交互
        /// </summary>
        /// <param name="interactData"></param>
        /// <returns></returns>
        public bool TryHandleInteractable(InteractData interactData)
        {
            if (itemCollectState== EItemCollectState.Unfinish)
            {
                ItemCollection provider = null;// interactData.interactable..GetComponentInChildren<ItemCollection>();

                if (provider)
                {
                    if (provider.HasItems(_requestItems, out var lostList))
                    {
                        Handle(provider);
                        return true;
                    }
                    else
                    {
                        Debug.Log(ItemInfoListToString(lostList, "缺少物品："));
                    }
                }
            }
            else
            {
                Debug.Log("收集器已完成收集！");
            }
            return false;
        }

        private void Handle(ItemCollection provider)
        {
            this.provider = provider;
            switch (_itemNeedMode)
            {
                case EItemCollectMode.Has:
                    {
                        itemCollectState = EItemCollectState.Finish;
                        break;
                    }
                case EItemCollectMode.Get:
                    {
                        //XGUIHelper.ShowDialogBox("确定提供物品?", ItemInfoListToString(_requestItems, "将从背包中拿出："), OnGetItem, GetItemIcon());
                        break;
                    }
                case EItemCollectMode.GetAndConsume:
                    {
                        var items = itemCollection.GetItems(_requestItems[0]);
                        //XGUIHelper.ShowDialogBox("确定提供物品?", ItemInfoListToString(_requestItems, "将从背包中拿出："), OnGetAndConsumeItem, GetItemIcon());
                        break;
                    }
            }
        }

        private ItemCollection provider;

        private void OnGetItem(bool yes)
        {
            if (yes)
            {
                provider.Provide(_requestItems, itemCollection);
                itemCollectState = EItemCollectState.Finish;
            }
        }

        private void OnGetAndConsumeItem(bool yes)
        {
            OnGetItem(yes);
            if (yes)
            {
                itemCollectState = EItemCollectState.BeginConsume;
            }
        }

        private Sprite GetItemIcon()
        {
            var item = provider.GetItems(_requestItems[0]).FirstOrDefault();
            if (item)
            {
                return item._icon;
            }
            return null;
        }

        private void OnFinishState()
        {
            if (_itemNeedMode == EItemCollectMode.GetAndConsume) return;

            switch (_finishItemHandleRule)
            {
                case EFinishItemHandleRule.CannotInteractable:
                    {
                        foreach (var item in itemCollection.items)
                        {
                            item.enabled = false;
                        }
                        break;
                    }
                case EFinishItemHandleRule.Disappear:
                    {
                        foreach (var item in itemCollection.items)
                        {
                            item.gameObject.SetActive(false);
                        }
                        break;
                    }
                case EFinishItemHandleRule.Destroy:
                    {
                        foreach (var item in itemCollection.items)
                        {
                            Destroy(item.gameObject);
                        }
                        break;
                    }
            }
        }

        /// <summary>
        /// 物品信息列表转字符串
        /// </summary>
        /// <param name="itemInfos"></param>
        /// <param name="prefix"></param>
        /// <param name="postfix"></param>
        /// <returns></returns>
        public static string ItemInfoListToString(List<ItemInfo> itemInfos, string prefix = "", string postfix = "")
        {
            string result = prefix;
            foreach (var info in itemInfos)
            {
                result += "[" + info._amount + "个" + info._name + "]";
            }
            result += postfix;
            return result;
        }
    }
}
