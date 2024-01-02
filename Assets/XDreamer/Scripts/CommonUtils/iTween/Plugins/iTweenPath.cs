//by Bob Berkebile : Pixelplacement : http://www.pixelplacement.com

using UnityEngine;
using System.Collections.Generic;

namespace XCSJ.CommonUtils.ITween
{
    /// <summary>
    /// 补间路径
    /// </summary>
    public class iTweenPath : MonoBehaviour
    {
        /// <summary>
        /// 路径名称
        /// </summary>
        public string pathName = "";

        /// <summary>
        /// 路径颜色
        /// </summary>
        public Color pathColor = Color.cyan;

        /// <summary>
        /// 节点列表
        /// </summary>
        public List<Vector3> nodes = new List<Vector3>() { Vector3.zero, Vector3.zero };

        /// <summary>
        /// 节点数量
        /// </summary>
        public int nodeCount;

        /// <summary>
        /// 路径
        /// </summary>
        public static Dictionary<string, iTweenPath> paths = new Dictionary<string, iTweenPath>();

        /// <summary>
        /// 已初始化
        /// </summary>
        public bool initialized = false;

        /// <summary>
        /// 初始化名称
        /// </summary>
        public string initialName = "";

        void OnEnable()
        {
            paths.Add(pathName.ToLower(), this);
        }

        void OnDrawGizmosSelected()
        {
            if (enabled)
            { // dkoontz
                if (nodes.Count > 0)
                {
                    iTween.DrawPath(nodes.ToArray(), pathColor);
                }
            } // dkoontz
        }

        /// <summary>
        /// 获取路径
        /// </summary>
        /// <param name="requestedName"></param>
        /// <returns></returns>
        public static Vector3[] GetPath(string requestedName)
        {
            requestedName = requestedName.ToLower();
            if (paths.ContainsKey(requestedName))
            {
                return paths[requestedName].nodes.ToArray();
            }
            else {
                Debug.Log("No path with that name exists! Are you sure you wrote it correctly?");
                return null;
            }
        }
    }
}
