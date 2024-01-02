using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using XCSJ.Attributes;
using XCSJ.Caches;
using XCSJ.Extension.Base.Attributes;
using XCSJ.Extension.Interactions.Tools;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Runtime;

namespace XCSJ.PluginTools.SelectionUtils
{
    /// <summary>
    /// ��Χ���ṩ��
    /// </summary>
    [Name("��Χ���ṩ��")]
    [RequireManager(typeof(ToolsManager))]
    public class BoundsProvider : InteractProvider
    {
        /// <summary>
        /// ��ȡ��Χ��
        /// </summary>
        /// <param name="bounds"></param>
        /// <returns></returns>
        public bool TryGetBounds(out Bounds bounds)
        {
            switch (_boundsRule)
            {
                case EBoundsRule.CustomBounds:
                    {
                        bounds = _bounds;
                        return true;
                    }
                case EBoundsRule.CustomBoundsSize:
                    {
                        bounds = new Bounds(transform.position, _boundsSize);
                        return true;
                    }
                case EBoundsRule.ChildrenRenderer:
                    {
                        if (_includeChildren)
                        {
                            if (CommonFun.GetBounds(out bounds, GetValidGameObjects(CommonFun.GetAllChildrenGameObject(gameObject)), false, _includeInactiveGO, _includeDisableRenderer))
                            {
                                return true;
                            }
                        }
                        else
                        {
                            if (!IsIgnore(gameObject))
                            {
                                if (CommonFun.GetBounds(out bounds, gameObject, false, _includeInactiveGO, _includeDisableRenderer))
                                {
                                    return true;
                                }
                            }
                        }
                        break;
                    }
                case EBoundsRule.OnlyInclude:
                    {
                        if (CommonFun.GetBounds(out bounds, GetValidGameObjects(_includeGameObjects), false, _includeInactiveGO, _includeDisableRenderer))
                        {
                            return true;
                        }
                        break;
                    }

            }
            bounds = default;
            return false;
        }

        /// <summary>
        /// ��ȡ���Ե���Ϸ����
        /// </summary>
        /// <returns></returns>
        public List<GameObject> GetIgnoreGameObjects()
        {
            var gameObjects = new List<GameObject>();
            switch (_boundsRule)
            {

                case EBoundsRule.ChildrenRenderer:
                    {
                        if (_includeChildren)
                        {
                            gameObjects.AddRange(GetIgnoreGameObjects(CommonFun.GetAllChildrenGameObject(gameObject)));
                        }
                        else
                        {
                            if (IsIgnore(gameObject))
                            {
                                gameObjects.Add(gameObject);
                            }
                        }
                        break;
                    }
                case EBoundsRule.OnlyInclude:
                    {
                        gameObjects.AddRange(GetIgnoreGameObjects(_includeGameObjects));
                        break;
                    }

            }
            return gameObjects;
        }

        /// <summary>
        /// ��Χ�й���
        /// </summary>
        [Name("��Χ�й���")]
        [EnumPopup]
        public EBoundsRule _boundsRule = EBoundsRule.ChildrenRenderer;

        /// <summary>
        /// ��Χ�й���
        /// </summary>
        [Name("��Χ�й���")]
        public enum EBoundsRule
        {
            /// <summary>
            /// ��
            /// </summary>
            [Name("��")]
            None,

            /// <summary>
            /// ��Χ��
            /// </summary>
            [Name("��Χ��")]
            CustomBounds,

            /// <summary>
            /// ��Χ�гߴ�
            /// </summary>
            [Name("��Χ�гߴ�")]
            CustomBoundsSize,

            /// <summary>
            /// ����Ϸ������Ⱦ��
            /// </summary>
            [Name("����Ϸ������Ⱦ��")]
            ChildrenRenderer,

            /// <summary>
            /// ��ʹ�ð�����Ϸ�����б�
            /// </summary>
            [Name("��ʹ�ð�����Ϸ�����б�")]
            OnlyInclude,
        }

        /// <summary>
        /// ��Χ��
        /// </summary>
        [Name("��Χ��")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.CustomBounds)]
        public Bounds _bounds;

        /// <summary>
        /// ��Χ�гߴ�
        /// </summary>
        [Name("��Χ�гߴ�")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.CustomBoundsSize)]
        public Vector3 _boundsSize = Vector3.one;

        /// <summary>
        /// �����Ӽ���Ϸ����
        /// </summary>
        [Name("�����Ӽ���Ϸ����")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.ChildrenRenderer)]
        public bool _includeChildren = true;

        /// <summary>
        /// �����Ǽ�����Ϸ����
        /// </summary>
        [Name("�����Ǽ�����Ϸ����")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.ChildrenRenderer)]
        public bool _includeInactiveGO = true;

        /// <summary>
        /// ����������Ⱦ��
        /// </summary>
        [Name("����������Ⱦ��")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.ChildrenRenderer)]
        public bool _includeDisableRenderer = true;

        /// <summary>
        /// ������Ϸ�����б�
        /// </summary>
        [Name("������Ϸ�����б�")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.OnlyInclude)]
        public List<GameObject> _includeGameObjects = new List<GameObject>();

        /// <summary>
        /// ���Թ���
        /// </summary>
        [Group("��������", textEN = "Ignore Settings")]
        [Name("���Թ���")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual | EValidityCheckType.And, EBoundsRule.ChildrenRenderer, nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.OnlyInclude)]
        public EIgnoreRule _ignoreRule = EIgnoreRule.InIgnoreGameObjectList;

        /// <summary>
        /// ������Ϸ�����б�
        /// </summary>
        [Name("������Ϸ�����б�")]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual | EValidityCheckType.And, EBoundsRule.ChildrenRenderer, nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.OnlyInclude)]
        public List<GameObject> _ignoreGameObjects = new List<GameObject>();

        /// <summary>
        /// �����������
        /// </summary>
        [Name("�����������")]
        [ComponentTypePopup]
        [HideInSuperInspector(nameof(_boundsRule), EValidityCheckType.NotEqual | EValidityCheckType.And, EBoundsRule.ChildrenRenderer, nameof(_boundsRule), EValidityCheckType.NotEqual, EBoundsRule.OnlyInclude)]
        public List<string> _ignoreComponentTypes = new List<string>();

        /// <summary>
        /// ���Թ���
        /// </summary>
        [Name("���Թ���")]
        [Flags]
        public enum EIgnoreRule
        {
            /// <summary>
            /// ʹ�ú�����Ϸ�����б�
            /// </summary>
            [EnumFieldName("ʹ�ú�����Ϸ�����б�")]
            InIgnoreGameObjectList = 1<< 0,

            /// <summary>
            /// �������
            /// </summary>
            [EnumFieldName("�������")]
            ComponentType = 1 << 1,
        }

        /// <summary>
        /// ����
        /// </summary>
        public void Reset()
        {
            CommonFun.GetBounds(out _bounds, gameObject);
            _boundsSize = _bounds.size;
        }

        private bool IsIgnore(GameObject inGameObject)
        {
            if ((_ignoreRule & EIgnoreRule.InIgnoreGameObjectList) == EIgnoreRule.InIgnoreGameObjectList)
            {
                if (_ignoreGameObjects.Contains(inGameObject))
                {
                    return true;
                }
            }

            if ((_ignoreRule & EIgnoreRule.ComponentType) == EIgnoreRule.ComponentType)
            {
                if (_ignoreComponentTypes.Exists(strType =>
                {
                    return inGameObject.GetComponent(TypeCache.Get(strType));
                }))
                {
                    return true;
                }
            }

            return false;
        }

        private List<GameObject> GetValidGameObjects(IEnumerable<GameObject> gameObjects)
        {
            var gameObjectList = new List<GameObject>();

            foreach (var go in gameObjects)
            {
                if (!IsIgnore(go))
                {
                    gameObjectList.Add(go);
                }
            }

            return gameObjectList;
        }

        private List<GameObject> GetIgnoreGameObjects(IEnumerable<GameObject> gameObjects)
        {
            var gameObjectList = new List<GameObject>();

            foreach (var go in gameObjects)
            {
                if (IsIgnore(go))
                {
                    gameObjectList.Add(go);
                }
            }

            return gameObjectList;
        }
    }
}
