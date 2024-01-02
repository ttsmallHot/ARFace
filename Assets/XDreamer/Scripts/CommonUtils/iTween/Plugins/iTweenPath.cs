//by Bob Berkebile : Pixelplacement : http://www.pixelplacement.com

using UnityEngine;
using System.Collections.Generic;

namespace XCSJ.CommonUtils.ITween
{
    /// <summary>
    /// ����·��
    /// </summary>
    public class iTweenPath : MonoBehaviour
    {
        /// <summary>
        /// ·������
        /// </summary>
        public string pathName = "";

        /// <summary>
        /// ·����ɫ
        /// </summary>
        public Color pathColor = Color.cyan;

        /// <summary>
        /// �ڵ��б�
        /// </summary>
        public List<Vector3> nodes = new List<Vector3>() { Vector3.zero, Vector3.zero };

        /// <summary>
        /// �ڵ�����
        /// </summary>
        public int nodeCount;

        /// <summary>
        /// ·��
        /// </summary>
        public static Dictionary<string, iTweenPath> paths = new Dictionary<string, iTweenPath>();

        /// <summary>
        /// �ѳ�ʼ��
        /// </summary>
        public bool initialized = false;

        /// <summary>
        /// ��ʼ������
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
        /// ��ȡ·��
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
