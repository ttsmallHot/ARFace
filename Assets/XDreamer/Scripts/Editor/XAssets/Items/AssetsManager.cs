using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;
using XCSJ.Attributes;
using XCSJ.Collections;
using XCSJ.Helper;
using XCSJ.PluginCommonUtils;
using XCSJ.Products;

namespace XCSJ.EditorExtension.XAssets.Items
{
    /// <summary>
    /// 资产管理器
    /// </summary>
    public class AssetsManager
    {
        static AssetsManager()
        {
            AssetItem.onItemChanged += OnItemChanged;
        }

        private static void OnItemChanged(AssetItem assetItem)
        {
            if (assetItem.itemState == EItemState.DownloadDone)
            {
                Save();
            }
        }

        /// <summary>
        /// 当资产已加载
        /// </summary>
        public static event Action onAssetsLoaded;

        /// <summary>
        /// 资产项列表
        /// </summary>
        private static List<AssetItem> _assetItems;

        /// <summary>
        /// 资产项列表
        /// </summary>
        public static List<AssetItem> assetItems
        {
            get
            {
                if (_assetItems == null)
                {
                    LoadConfigFile(true);
                    onAssetsLoaded?.Invoke();
                }
                else
                {
                    var path = configFileFullPath;
                    if (FileHelper.Exists(path))
                    {
                        var newLastWriteTime = File.GetLastWriteTime(path);
                        if (newLastWriteTime != lastWriteTime)
                        {
                            lastWriteTime = newLastWriteTime;
                            LoadConfigFile(false);
                        }
                    }
                }
                return _assetItems;
            }
        }

        private static void LoadConfigFile(bool updateLastWriteTime)
        {
            _assetItems?.Clear();
            var path = configFileFullPath;
            if (FileHelper.Exists(path))
            {
                if (updateLastWriteTime) lastWriteTime = File.GetLastWriteTime(path);
                var jsonText = FileHelper.InputFile(path);
                if (!string.IsNullOrEmpty(jsonText))
                {
                    _assetItems = JsonHelper.ToObject<List<AssetItem>>(jsonText);
                }
            }
            if (_assetItems == null) _assetItems = new List<AssetItem>();
        }

        private static DateTime lastWriteTime = default;

        private static void UpdateLastWriteTime()
        {
            var path = configFileFullPath;
            if (FileHelper.Exists(path))
            {
                lastWriteTime = File.GetLastWriteTime(path);
            }
        }

        /// <summary>
        /// 重置：重新从磁盘文件加载信息
        /// </summary>
        public static void Reset()
        {
            LoadConfigFile(true);
            onAssetsLoaded?.Invoke();
        }

        /// <summary>
        /// 扩展名列表
        /// </summary>
        public static string[] Extensions = new string[] { ".unitypackage" };

        /// <summary>
        /// 配置文件名
        /// </summary>
        public static string configFileName = "assets.json";

        /// <summary>
        /// 配置文件全路径
        /// </summary>
        public static string configFileFullPath => assetsFolderPath + "/" + configFileName;

        /// <summary>
        /// 保存
        /// </summary>
        private static void Save()
        {
            FileHelper.OutputFile(configFileFullPath, JsonHelper.ToJson(assetItems, true));
            UpdateLastWriteTime();
        }

        /// <summary>
        /// 有效资产URL
        /// </summary>
        /// <param name="assetUrl"></param>
        /// <returns></returns>
        public static bool ValidAssetUrl(string assetUrl)
        {
            if (string.IsNullOrEmpty(assetUrl)) return false;

            try
            {
                Uri uri = new Uri(assetUrl);
                if (!uri.IsAbsoluteUri) return false;

                if (uri.Scheme != Uri.UriSchemeHttps && uri.Scheme != Uri.UriSchemeHttp) return false;

                var ext = Path.GetExtension(assetUrl);
                if (Extensions.Any(e => string.Compare(e, ext, true) == 0)) return true;

                return false;
            }
            catch
            {
                return false;
            }
        }

        /// <summary>
        /// 尝试获取资产项
        /// </summary>
        /// <param name="assetUrl"></param>
        /// <param name="assetItem"></param>
        /// <returns></returns>
        public static bool TryGetAssetItem(string assetUrl, out AssetItem assetItem)
        {
            assetItem = assetItems.FirstOrDefault(item => item.assetUrl == assetUrl);
            return assetItem != null;
        }

        /// <summary>
        /// 当添加下载
        /// </summary>
        public static event Action<AssetItem> onAddDownload;

        /// <summary>
        /// 下载
        /// </summary>
        /// <param name="assetUrl"></param>
        /// <returns></returns>
        public static AssetItem Download(string assetUrl)
        {
            if (!ValidAssetUrl(assetUrl)) return default;

            if (!TryGetAssetItem(assetUrl, out var item))
            {
                item = new AssetItem();
                item.assetUrl = assetUrl;
                assetItems.Add(item);

                onAddDownload?.Invoke(item);
            }
            item.Download();
            return item;
        }

        /// <summary>
        /// 当移除下载
        /// </summary>
        public static event Action<AssetItem> onRemoveDownload;

        /// <summary>
        /// 移除：只能移除下载失败的或是未知的，对于正在现在或下载完成的无法处理；
        /// </summary>
        /// <param name="assetUrl"></param>
        public static void Remove(string assetUrl)
        {
            if (TryGetAssetItem(assetUrl, out var item))
            {
                switch (item.itemState)
                {
                    case EItemState.Unknow:
                    case EItemState.DownloadFail:
                        {
                            _assetItems.Remove(item);

                            try
                            {
                                var dirPath = assetsFolderPath + "/" + item.dirFolderName;
                                if (Directory.Exists(dirPath)
                                    && Directory.GetFiles(dirPath).Length == 0)
                                {
                                    Directory.Delete(dirPath);
                                }
                            }
                            catch { }
                            Save();
                            onRemoveDownload?.Invoke(item);
                            break;
                        }
                }
            }
        }

        /// <summary>
        /// 获取资产文件夹路径
        /// </summary>
        private static string _assetsFolderPath = null;

        /// <summary>
        /// 获取资产文件夹路径
        /// </summary>
        /// <returns></returns>
        public static string assetsFolderPath
        {
            get
            {
                if (!string.IsNullOrEmpty(_assetsFolderPath)) return _assetsFolderPath;

                //在Unity编辑器内时，从软件官方的公司产品配置中获取
                var companyName = PlayerSettings.companyName;
                var productName = PlayerSettings.productName;
                try
                {
                    PlayerSettings.companyName = nameof(XCSJ);
                    PlayerSettings.productName = ProductServer.Name;

                    _assetsFolderPath = Application.persistentDataPath + "/assets";
                    return _assetsFolderPath;
                }
                finally
                {
                    PlayerSettings.companyName = companyName;
                    PlayerSettings.productName = productName;
                }
            }
        }

        /// <summary>
        /// 主分类
        /// </summary>
        public const string MainCategory = "app";

        /// <summary>
        /// 下载并导入
        /// </summary>
        /// <param name="fileName"></param>
        /// <param name="category"></param>
        /// <param name="subCategory"></param>
        /// <returns></returns>
        public static AssetItem DownloadAndImport(string fileName, string category, string subCategory) => DownloadAndImport(CreateAssetUrl(fileName, category, subCategory));

        /// <summary>
        /// 下载并导入
        /// </summary>
        /// <param name="assetUrl"></param>
        /// <returns></returns>
        public static AssetItem DownloadAndImport(string assetUrl)
        {
            var assetItem = Download(assetUrl);
            assetItem?.DownloadAndImport();
            return assetItem;
        }


        /// <summary>
        /// 创建资产URL
        /// </summary>
        /// <param name="fileName"></param>
        /// <param name="category"></param>
        /// <param name="subCategory"></param>
        /// <returns></returns>
        public static string CreateAssetUrl(string fileName, string category, string subCategory)
        {
            return string.Format("https://{0}/{1}/{2}/{3}/{4}/{5}"
                , Product.WebSite
                , MainCategory
                , Product.PubliclyLastedVersion
                , category
                , subCategory
                , fileName
                );
        }

        /// <summary>
        /// 尝试分析资产URL
        /// </summary>
        /// <param name="assetUrl"></param>
        /// <param name="version"></param>
        /// <param name="category"></param>
        /// <param name="subCategory"></param>
        /// <param name="fileName"></param>
        /// <returns></returns>
        public static bool TryParseAssetUrl(string assetUrl, out string version, out string category, out string subCategory, out string fileName)
        {
            try
            {
                var uri = new Uri(assetUrl);
                if (uri.Scheme == Uri.UriSchemeHttps && Product.WebSite == uri.Host)
                {
                    fileName = Path.GetFileName(assetUrl);

                    var p0 = Path.GetDirectoryName(assetUrl);
                    subCategory = Path.GetFileName(p0);

                    var p1 = Path.GetDirectoryName(p0);
                    category = Path.GetFileName(p1);

                    var p2 = Path.GetDirectoryName(p1);
                    version = Path.GetFileName(p2);

                    var p3 = Path.GetDirectoryName(p2);
                    if (Path.GetFileName(p3) == MainCategory) return true;
                }
            }
            catch { }
            version = "";
            category = "";
            subCategory = "";
            fileName = "";
            return false;
        }
    }
}
