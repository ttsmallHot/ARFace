using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;
using XCSJ.Algorithms;
using XCSJ.Collections;
using XCSJ.EditorCommonUtils;
using XCSJ.EditorCommonUtils.CNScripts;

namespace XCSJ.EditorExtension.GenericStandards.CNScripts
{
    /// <summary>
    /// �������ó�������
    /// </summary>
    [CustomScriptParamValueDrawer(nameof(BuildSettingsSceneNames))]
    public class BuildSettingsSceneNames : ScriptParamValueDrawer
    {
        string[] sceneNames = Empty<string>.Array;

        /// <summary>
        /// ����
        /// </summary>
        public BuildSettingsSceneNames()
        {
            EditorBuildSettings.sceneListChanged += OnSceneListChanged;
            OnSceneListChanged();
        }

        /// <summary>
        /// ����
        /// </summary>
        ~BuildSettingsSceneNames()
        {
            EditorBuildSettings.sceneListChanged -= OnSceneListChanged;
        }

        /// <summary>
        /// �������б���
        /// </summary>
        void OnSceneListChanged()
        {
            sceneNames = EditorBuildSettings.scenes.Cast(s => Path.GetFileNameWithoutExtension(s.path)).ToArray() ?? Empty<string>.Array;
        }

        /// <summary>
        /// ������ֵ
        /// </summary>
        public override void OnDrawValue()
        {
            EditorGUI.indentLevel = 2;
            scriptParamDrawer.paramObject = UICommonFun.Popup(scriptParamDrawer.paramObject as string, sceneNames, true);
        }
    }
}