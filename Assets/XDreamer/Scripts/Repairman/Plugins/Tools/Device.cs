using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;

namespace XCSJ.PluginRepairman.Tools
{
    /// <summary>
    /// 设备：
    /// 1、比模块更大的集合，但不允许嵌套（树层级顶层）
    /// 2、管理其子级零件和模块的分组信息
    /// 3、监控拖拽事件，对比零件与插槽位置，然后修正零件的拆装状态
    /// </summary>
    [Name("设备")]
    [DisallowMultipleComponent]
    public sealed class Device : Module
    {
        /// <summary>
        /// 拆卸零件父级
        /// </summary>
        [Name("拆卸零件父级")]
        public Transform _disassemblyParent;

        /// <summary>
        /// 拆卸零件父级
        /// </summary>
        public Transform disassemblyParent => _disassemblyParent ? _disassemblyParent : RepairmanManager.instance.transform;

        /// <summary>
        /// 已拆卸零件
        /// </summary>
        public List<Part> disassembledParts => _disassembledParts;

        private List<Part> _disassembledParts = new List<Part>();

        /// <summary>
        /// 添加已拆卸零件
        /// </summary>
        /// <param name="part"></param>
        /// <returns></returns>
        public bool AddDisassembledPart(Part part)
        {
            if (disassembledParts.AddWithDistinct(part))
            {
                part.transform.SetParent(disassemblyParent);
                return true;
            }
            return false;
        }

        /// <summary>
        /// 移除已拆卸零件
        /// </summary>
        /// <param name="part"></param>
        /// <returns></returns>
        public bool RemoveDisassembledPart(Part part)
        {
            return disassembledParts.Remove(part);
        }

        /// <summary>
        /// 启用
        /// </summary>
        protected override void OnEnable()
        {
            base.OnEnable();

            UpdatePartAssemblyState();

            _disassembledParts.AddRangeWithDistinct(disassemblyParent.GetComponentsInChildren<Part>());
        }

        /// <summary>
        /// 禁用
        /// </summary>
        protected override void OnDisable()
        {
            base.OnDisable();
        }

        /// <summary>
        /// 更新所有零件在设备下的装配状态
        /// </summary>
        public void UpdatePartAssemblyState()
        {
            foreach (var part in childParts)
            {
                if (childModules.Contains(part)) continue;

                UpdatePartAssemblyState(part);
            }

            // 检查拆卸父级下的所有零件状态
            for (int i = _disassembledParts.Count-1; i >=0; --i)
            {
                UpdatePartAssemblyState(_disassembledParts[i]);
            }
        }

        /// <summary>
        /// 更新零件装配状态
        /// </summary>
        /// <param name="part"></param>
        public void UpdatePartAssemblyState(Part part)
        {
            if (!part) return;

            switch (part.assembleState)
            {
                case EAssembleState.Assembled:
                    {
                        this.XModifyProperty(() => part.partAssemblyNode.UpdatePartState());
                        break;
                    }
                case EAssembleState.Disassembled:
                    {
                        var node = GetNearestEmptyPartAssemblyNode(part);
                        if (node != null)
                        {
                            this.XModifyProperty(() => node.TrySnap(part));
                        }
                        break;
                    }
                case EAssembleState.AssemblyInProgress:
                    break;
                case EAssembleState.DisassemblyInProgress:
                    break;
            }
        }
    }
}
