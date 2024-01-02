using System.Collections.Generic;
using XCSJ.Extension;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginRepairman.Tools;
using XCSJ.PluginSMS;
using XCSJ.PluginSMS.Kernel;

namespace XCSJ.PluginRepairman
{
    /// <summary>
    /// 拆装助手扩展
    /// </summary>
    public static class RepairmanHelperExtension
    {
        /// <summary>
        /// 移除空对象
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="objects"></param>
        public static void RemoveNullObject<T>(List<T> objects) where T : UnityEngine.Object
        {
            for (int i = objects.Count - 1; i >= 0; --i)
            {
                if (!objects[i]) objects.RemoveAt(i);
            }
        }

        /// <summary>
        /// 创建零件装配节点
        /// </summary>
        public static void CreatePartAssemblyNodes(this Module module)
        {
            module.XModifyProperty(() =>
            {
                foreach (var part in module.GetComponentsInChildren<Part>(true))
                {
                    if (part != module && part.parentModule == module)
                    {
                        var node = new SerializablePartAssemblyNode(part);
                        node._module = module;
                        module._partAssemblyNodes.Add(node);

                        if (part is Module m)
                        {
                            CreatePartAssemblyNodes(m);
                        }
                    }
                }
            });
        }

        /// <summary>
        /// 清除零件装配节点
        /// </summary>
        /// <param name="module"></param>
        public static void ClearPartAssemblyNodes(this Module module)
        {
            module.XModifyProperty(() =>
            {
                module._partAssemblyNodes.Clear();

                foreach (var part in module.GetComponentsInChildren<Part>(true))
                {
                    if (part != module && part.parentModule == module)
                    {
                        if (part is Module m)
                        {
                            ClearPartAssemblyNodes(m);
                        }
                    }
                }
            });
        }

        /// <summary>
        /// 尝试装配零件：尝试使用零件装配节点中的原型进行装配零件
        /// </summary>
        /// <param name="module"></param>
        public static void TryAssemblyPart(this Module module)
        {
            module.XModifyProperty(() =>
            {
                // 检测插槽中的原型，是否在模块父级下
                foreach (var node in module._partAssemblyNodes)
                {
                    if (!node._partPrototype) continue;

                    if (node._partPrototype.parentModule == module)
                    {
                        node.TrySnap(node._partPrototype);
                    }

                    if (node._partPrototype is Module m)
                    {
                        TryAssemblyPart(m);
                    }
                }
            });
        }
    }

    /// <summary>
    /// 拆装分类
    /// </summary>
    public static class RepairmanCategory
    {
        /// <summary>
        /// 标题
        /// </summary>
        public const string Title = "拆装";

        /// <summary>
        /// 步骤名称
        /// </summary>
        public const string StepName = "步骤";

        /// <summary>
        /// 工具库前缀
        /// </summary>
        public const string RepairmanPrefix = Title + CommonCategory.HorizontalLine;

        /// <summary>
        /// 模型状态库名称
        /// </summary>
        public const string Model = RepairmanPrefix + CommonCategory.Model;

        /// <summary>
        /// 模型状态库名称
        /// </summary>
        public const string ModelDirectory = Model + CommonCategory.PathSplitLine;

        /// <summary>
        /// 模型路径
        /// </summary>
        public const string ModelPath = Title + CommonCategory.PathSplitLine + CommonCategory.Model;

        /// <summary>
        /// 步骤
        /// </summary>
        public const string Step = Title + CommonCategory.HorizontalLine + StepName;

        /// <summary>
        /// 步骤目录
        /// </summary>
        public const string StepDirectory = Step + CommonCategory.PathSplitLine;

    }
}
