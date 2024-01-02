using UnityEngine;
using System.Collections;

namespace XCSJ.CommonUtils.PluginHighlightingSystem.Internal
{
	/// <summary>
	/// ��ɫ������ID
	/// </summary>
	// Shader property ID cached constants
	[UnityEngine.Internal.ExcludeFromDocs]
	public class ShaderPropertyID
	{
		/// <summary>
		/// ������
		/// </summary>
		static public readonly int _MainTex = Shader.PropertyToID("_MainTex");

		/// <summary>
		/// ��ֹ
		/// </summary>
		static public readonly int _Cutoff = Shader.PropertyToID("_Cutoff");

		/// <summary>
		/// ������ʾǿ��
		/// </summary>
		static public readonly int _HighlightingIntensity = Shader.PropertyToID("_HighlightingIntensity");

		/// <summary>
		/// ������ʾ�޳�
		/// </summary>
		static public readonly int _HighlightingCull = Shader.PropertyToID("_HighlightingCull");

		/// <summary>
		/// ������ʾ��ɫ
		/// </summary>
		static public readonly int _HighlightingColor = Shader.PropertyToID("_HighlightingColor");

		/// <summary>
		/// ������ʾģ��ƫ��
		/// </summary>
		static public readonly int _HighlightingBlurOffset = Shader.PropertyToID("_HighlightingBlurOffset");

		/// <summary>
		/// ������ʾ���͸����
		/// </summary>
		static public readonly int _HighlightingFillAlpha = Shader.PropertyToID("_HighlightingFillAlpha");

		/// <summary>
		/// ������ʾ����
		/// </summary>
		static public readonly int _HighlightingBuffer = Shader.PropertyToID("_HighlightingBuffer");

		/// <summary>
		/// ������ʾģ��1
		/// </summary>
		static public readonly int _HighlightingBlur1 = Shader.PropertyToID("_HighlightingBlur1");

		/// <summary>
		/// ������ʾģ��2
		/// </summary>
		static public readonly int _HighlightingBlur2 = Shader.PropertyToID("_HighlightingBlur2");
	}
}