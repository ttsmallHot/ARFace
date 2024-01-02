using UnityEngine;

namespace XCSJ.PluginTools.Libraries.Tools
{
    /// <summary>
    /// 基础纹理库
    /// </summary>
    /// <typeparam name="TTexture"></typeparam>
    public abstract class BaseTextureLibrary <TTexture>: BaseLibrary<TTexture>
        where TTexture:Texture
    {
    }
}
