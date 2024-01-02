﻿using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Extension.Base.Recorders;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginXGUI.Base;

namespace XCSJ.PluginXGUI.Views.Graphics
{
    /// <summary>
    /// 图形拖拽颜色
    /// </summary>
    [Name("图形拖拽颜色")]
    public class GraphicDragColor : ClickableView
    {
        /// <summary>
        /// 图形
        /// </summary>
        [Group("图形设置", textEN = "Graphic Settings", defaultIsExpanded = false)]
        [Name("图形")]
        [ValidityCheck(EValidityCheckType.NotNull)]
        public Graphic _graphic;

        /// <summary>
        /// 批量图形
        /// </summary>
        [Name("批量图形")]
        public List<Graphic> _graphices = new List<Graphic>();

        /// <summary>
        /// 拖拽颜色
        /// </summary>
        [Name("颜色")]
        public Color _downColor = Color.green;

        private Dictionary<Graphic, GraphicRecorder> _graphicRecorders = new Dictionary<Graphic, GraphicRecorder>();

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();
            if (!_graphic)
            {
                _graphic = GetComponent<Graphic>();
            }

            AddGraphic(_graphic);
            foreach (var g in _graphices)
            {
                AddGraphic(g);
            }
        }

        private void AddGraphic(Graphic graphic)
        {
            if (graphic && !_graphicRecorders.ContainsKey(graphic))
            {
                _graphicRecorders.Add(graphic, new GraphicRecorder(graphic));
            }
        }

        /// <summary>
        /// 禁用
        /// </summary>
        protected override void OnDisable()
        {
            base.OnDisable();
            Recover();
        }

        /// <summary>
        /// 指针按下
        /// </summary>
        /// <param name="eventData"></param>
        public override void OnPointerDown(PointerEventData eventData)
        {
            base.OnPointerDown(eventData);
            ChangeColor();
        }

        /// <summary>
        /// 指针弹起
        /// </summary>
        /// <param name="eventData"></param>
        public override void OnPointerUp(PointerEventData eventData)
        {
            base.OnPointerUp(eventData);
            Recover();
        }

        private void ChangeColor()
        {            
            _graphicRecorders.Foreach(item => item.Key.color = _downColor);
        }

        private void Recover()
        {
            _graphicRecorders.Foreach(item => item.Value.Recover());
        }
    }
}
