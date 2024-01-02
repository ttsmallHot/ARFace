using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.CommonUtils.PluginHighlightingSystem.Internal;
using XCSJ.PluginCamera;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginCommonUtils.Tools;
using XCSJ.PluginsCameras;

namespace XCSJ.CommonUtils.PluginHighlightingSystem
{
	/// <summary>
	/// ������Ⱦ��
	/// </summary>
	[Tool(CameraCategory.Component)]
    [Name("������Ⱦ��")]
    [Tip("�������Ҫ��ʾ����Ч���������ߣ������������������", "In order to display the outline of the highlight effect in the camera picture, the camera highlight component must be added")]
    [XCSJ.Attributes.Icon(EIcon.Camera)]
    [RequireManager(typeof(CameraManager))]
	[RequireComponent(typeof(Camera))]
    public class HighlightingRenderer : HighlightingBase
	{
		#region Static Fields

		/// <summary>
		/// Ĭ��Ԥ��
		/// </summary>
		static public readonly List<HighlightingPreset> defaultPresets = new List<HighlightingPreset>()
		{
            new HighlightingPreset() { name = "2pix",  fillAlpha = 0f,     downsampleFactor = 1,   iterations = 2, blurMinSpread = 1f,     blurSpread = 0f,    blurIntensity = 1f,     blurDirections = BlurDirections.All },
            new HighlightingPreset() { name = "1pix",  fillAlpha = 0f,     downsampleFactor = 1,   iterations = 1, blurMinSpread = 1f,     blurSpread = 0f,    blurIntensity = 1f,     blurDirections = BlurDirections.All },
            new HighlightingPreset() { name = "default",	fillAlpha = 0f,		downsampleFactor = 4,	iterations = 2,	blurMinSpread = 0.65f,	blurSpread = 0.25f, blurIntensity = 0.3f,	blurDirections = BlurDirections.Diagonal }, 
			new HighlightingPreset() { name = "width",		fillAlpha = 0f,		downsampleFactor = 4,	iterations = 4,	blurMinSpread = 0.65f,	blurSpread = 0.25f, blurIntensity = 0.3f,	blurDirections = BlurDirections.Diagonal }, 
			new HighlightingPreset() { name = "strong",		fillAlpha = 0f,		downsampleFactor = 4,	iterations = 2,	blurMinSpread = 0.5f,	blurSpread = 0.15f,	blurIntensity = 0.325f,	blurDirections = BlurDirections.Diagonal }, 
			new HighlightingPreset() { name = "speed",		fillAlpha = 0f,		downsampleFactor = 4,	iterations = 1,	blurMinSpread = 0.75f,	blurSpread = 0f,	blurIntensity = 0.35f,	blurDirections = BlurDirections.Diagonal }, 
			new HighlightingPreset() { name = "quality",	fillAlpha = 0f,		downsampleFactor = 2,	iterations = 3,	blurMinSpread = 0.5f,	blurSpread = 0.5f,	blurIntensity = 0.28f,	blurDirections = BlurDirections.Diagonal }
		};
		#endregion

		#region Public Fields

		/// <summary>
		/// Ԥ��
		/// </summary>
		public ReadOnlyCollection<HighlightingPreset> presets
		{
			get
			{
				if (_presetsReadonly == null)
				{
					_presetsReadonly = _presets.AsReadOnly();
				}
				return _presetsReadonly;
			}
		}
		#endregion

		#region Private Fields
		[SerializeField]
		private List<HighlightingPreset> _presets = new List<HighlightingPreset>(defaultPresets);

		private ReadOnlyCollection<HighlightingPreset> _presetsReadonly;
		#endregion

		#region Public Methods

		/// <summary>
		/// ��ȡԤ��
		/// </summary>
		/// <param name="name"></param>
		/// <param name="preset"></param>
		/// <returns></returns>
		public bool GetPreset(string name, out HighlightingPreset preset)
		{
			for (int i = 0; i < _presets.Count; i++)
			{
				HighlightingPreset p = _presets[i];
				if (p.name == name)
				{
					preset = p;
					return true;
				}
			}
			preset = new HighlightingPreset();
			return false;
		}

		/// <summary>
		/// ���Ԥ��
		/// </summary>
		/// <param name="preset"></param>
		/// <param name="overwrite"></param>
		/// <returns></returns>
		public bool AddPreset(HighlightingPreset preset, bool overwrite)
		{
			for (int i = 0; i < _presets.Count; i++)
			{
				HighlightingPreset p = _presets[i];
				if (p.name == preset.name)
				{
					if (overwrite)
					{
						_presets[i] = preset;
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			_presets.Add(preset);
			return true;
		}

		/// <summary>
		/// �Ƴ�Ԥ��
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		public bool RemovePreset(string name)
		{
			for (int i = 0; i < _presets.Count; i++)
			{
				HighlightingPreset p = _presets[i];
				if (p.name == name)
				{
					_presets.RemoveAt(i);
					return true;
				}
			}
			return false;
		}

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		public bool LoadPreset(string name)
		{
			HighlightingPreset preset;
			if (GetPreset(name, out preset))
			{
				ApplyPreset(preset);
			}
			return false;
		}

		/// <summary>
		/// Ӧ��Ԥ��
		/// </summary>
		/// <param name="preset"></param>
		public void ApplyPreset(HighlightingPreset preset)
		{
			downsampleFactor = preset.downsampleFactor;
			iterations = preset.iterations;
			blurMinSpread = preset.blurMinSpread;
			blurSpread = preset.blurSpread;
			blurIntensity = preset.blurIntensity;
			blurDirections = preset.blurDirections;
		}

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		public void ClearPresets()
		{
			_presets.Clear();
		}
		#endregion
	}
}