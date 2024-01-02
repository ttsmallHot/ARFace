using System;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.PluginCommonUtils;
using XCSJ.Scripts;

namespace XCSJ.Extension.OSInteracts
{
    /// <summary>
    /// 变量名脚本参数
    /// </summary>
    [ScriptParamType(ScriptParamType)]
    public class VariableName_ScriptParam : EnumScriptParam<EVariableName>
    {
        /// <summary>
        /// 脚本参数类型
        /// </summary>
        public const int ScriptParamType = SceneHandleRuleWhenFail_ScriptParam.ScriptParamType + 3;
    }

    /// <summary>
    /// 变量名称枚举，与各运行时平台（OS）做数据通信时的变量名，为兼容以前版本，部分部分枚举变量名以小写字母开头；
    /// </summary>
    [Name("变量名")]
    public enum EVariableName
    {
        /// <summary>
        /// 消息命令：OS与Unity通信数据时使用，作为JSON字符串的Key使用
        /// </summary>
        MsgCmd,

        /// <summary>
        /// 消息
        /// </summary>
        Msg,

        /// <summary>
        /// 场景路径： OS到Unity,为符合部分平台的变量命名规范将变量首字母小写；当前场景可能生效的全局变量；
        /// </summary>
        scenePath,

        /// <summary>
        /// 场景名
        /// </summary>
        sceneName,

        /// <summary>
        /// 场景索引：场景索引由1开始递增
        /// </summary>
        sceneIndex,

        /// <summary>
        /// 用户定义
        /// </summary>
        userDefine,

        /// <summary>
        /// 用户定义函数名
        /// </summary>
        userDefineFunName,

        /// <summary>
        /// 参数
        /// </summary>
        param,

        /// <summary>
        /// XCSJ脚本
        /// </summary>
        xcsjScript,

        /// <summary>
        /// 图片信息
        /// </summary>
        imagePath,

        /// <summary>
        /// 其他信息
        /// </summary>
        otherInfo,

        /// <summary>
        /// 当前激活场景名称: Unity到OS，符合部分平台的变量命名规范将变量首字母小写；不同消息命令时各参数代表不同意思；
        /// </summary>
        activeSceneName,//当前激活场景名称

        /// <summary>
        /// 参数数量：用于标识当前返回的有效参数的数目
        /// </summary>
        paramCount,

        /// <summary>
        /// 下个场景路径:静态变量 -- 使用首字母大写，用于切换场景
        /// </summary>
        NextScenePath,

        /// <summary>
        /// 下个场景名
        /// </summary>
        NextSceneName,

        /// <summary>
        /// 下个场景规则当失败
        /// </summary>
        NextSceneRuleWhenFail,

        /// <summary>
        /// 之前场景路径
        /// </summary>
        PreviousScenePath,

        /// <summary>
        /// 之前场景名
        /// </summary>
        PreviousSceneName,
    }
}
