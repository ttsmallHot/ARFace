using UnityEditor;
using XCSJ.Attributes;
using XCSJ.EditorSMS.Inspectors;

namespace XCSJ.EditorSMS.States.Base
{
    /// <summary>
    /// 日志检查器
    /// </summary>
    [Name("日志检查器")]
    [CustomEditor(typeof(XCSJ.Extension.Logs.States.Log), true)]
    public class LogInspector : StateComponentInspector<XCSJ.Extension.Logs.States.Log>
    {
        
    }
}
