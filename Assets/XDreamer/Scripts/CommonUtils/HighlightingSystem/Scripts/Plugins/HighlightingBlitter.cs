using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using XCSJ.CommonUtils.PluginHighlightingSystem.Internal;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginTools;
using XCSJ.Attributes;
using XCSJ.Extension.Interactions.Tools;

namespace XCSJ.CommonUtils.PluginHighlightingSystem
{
	/// <summary>
	/// ����λͼ������
	/// </summary>
	[RequireComponent(typeof(Camera))]
	[AddComponentMenu("XDreamer/Highlighting System/Highlighting Blitter", 3)]
	[Name("����λͼ������")]
	public class HighlightingBlitter : BaseHighlighterMB
	{
		/// <summary>
		/// ��Ⱦ��
		/// </summary>
		protected List<HighlightingBase> renderers = new List<HighlightingBase>();

		#region MonoBehaviour
		/// <summary>
		/// ����Ⱦͼ��
		/// </summary>
		/// <param name="src"></param>
		/// <param name="dst"></param>
		protected virtual void OnRenderImage(RenderTexture src, RenderTexture dst)
		{
			bool oddEven = true;
			for (int i = 0; i < renderers.Count; i++)
			{
				HighlightingBase renderer = renderers[i];
				if (oddEven)
				{
					renderer.Blit(src, dst);
				}
				else
				{
					renderer.Blit(dst, src);
				}

				oddEven = !oddEven;
			}

			// Additional blit because final result should be in dst RenderTexture
			if (oddEven)
			{
				Graphics.Blit(src, dst);
			}
		}
		#endregion

		#region Public Methods
		/// <summary>
		/// ע��
		/// </summary>
		/// <param name="renderer"></param>
		[UnityEngine.Internal.ExcludeFromDocs]
		public virtual void Register(HighlightingBase renderer)
		{
			if (!renderers.Contains(renderer))
			{
				renderers.Add(renderer);
			}

			enabled = renderers.Count > 0;
		}

		/// <summary>
		/// ȡ��ע��
		/// </summary>
		/// <param name="renderer"></param>
		[UnityEngine.Internal.ExcludeFromDocs]
		public virtual void Unregister(HighlightingBase renderer)
		{
			int index = renderers.IndexOf(renderer);
			if (index != -1)
			{
				renderers.RemoveAt(index);
			}

			enabled = renderers.Count > 0;
		}
		#endregion
	}

	/// <summary>
	/// �����������
	/// </summary>
	[RequireManager(typeof(ToolsManager))]
	[Owner(typeof(ToolsManager))]
	public abstract class BaseHighlighterMB : InteractProvider { }
}