using System.Collections.Generic;
using UnityEngine;
using XCSJ.Algorithms;
using XCSJ.PluginCommonUtils;
using XCSJ.PluginMMO.Base;
using XCSJ.PluginMMO.Chats;
using XCSJ.PluginMMO.CNScripts;
using XCSJ.PluginMMO.NetSyncs;
using XCSJ.PluginMMO.Tools;
using XCSJ.Scripts;

namespace XCSJ.PluginMMO.Kernel
{
    /// <summary>
    /// 默认MMO处理器
    /// </summary>
    public class DefaultMMOHandler : InstanceClass<DefaultMMOHandler>, IMMOHandler
    {
        /// <summary>
        /// 初始化
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        public static void Init()
        {
            MMOHandler.handler = instance;
        }

        /// <summary>
        /// 创建客户端
        /// </summary>
        /// <returns></returns>
        public IMMOClient CreateClient() => new MMOClient();

        /// <summary>
        /// 获取脚本
        /// </summary>
        /// <param name="manager"></param>
        /// <returns></returns>
        public List<Script> GetScripts(MMOManager manager) => Script.GetScriptsOfEnum<EMMOScriptID>(manager);

        /// <summary>
        /// 运行脚本
        /// </summary>
        /// <param name="manager"></param>
        /// <param name="id"></param>
        /// <param name="param"></param>
        /// <returns></returns>
        public ReturnValue ExecuteScript(MMOManager manager, int id, ScriptParamList param) => ExecuteScript(manager, (EMMOScriptID)id, param);

        /// <summary>
        /// 运行脚本
        /// </summary>
        /// <param name="manager"></param>
        /// <param name="id"></param>
        /// <param name="param"></param>
        /// <returns></returns>
        private ReturnValue ExecuteScript(MMOManager manager, EMMOScriptID id, ScriptParamList param)
        {
            switch (id)
            {
                case EMMOScriptID.MMOGameObjectClone:
                    {
                        var go = param[1] as GameObject;
                        if (!go) break;
                        var netIdentity = go.GetComponent<NetIdentity>();
                        if (!netIdentity) break;
                        var newNetIdentity = MMOHelper.Clone(netIdentity, CommonFun.BoolChange(netIdentity.hasAccess, (EBool)param[2]));
                        if (!newNetIdentity) break;
                        return ReturnValue.True(CommonFun.GameObjectToString(newNetIdentity.gameObject));
                    }
                case EMMOScriptID.MMOGameObjectDestory:
                    {
                        return ReturnValue.Create(MMOHelper.Destroy(param[1] as GameObject));
                    }
                case EMMOScriptID.MMOGetNetProperty:
                    {
                        var go = param[1] as GameObject;
                        if (!go) break;
                        var mb = go.GetComponent<NetProperty>();
                        if (!mb) break;
                        if (mb.GetProperty(param[2] as string) is Property property)
                        {
                            return ReturnValue.True(property._value);
                        }
                        break;
                    }
                case EMMOScriptID.MMOSetNetProperty:
                    {
                        var go = param[1] as GameObject;
                        if (!go) break;
                        var mb = go.GetComponent<NetProperty>();
                        if (!mb) break;
                        return ReturnValue.Create(mb.SetProperty(param[2] as string, param[3] as string, EBool2.Yes == (EBool2)param[4]) != null);
                    }
                case EMMOScriptID.MMOGetNetState:
                    {
                        return ReturnValue.True(MMOHelper.netState.ToString());
                    }
                case EMMOScriptID.MMOGetPing:
                    {
                        return ReturnValue.True(MMOHelper.ping.ToString());
                    }
                case EMMOScriptID.MMOControl:
                    {
                        switch(param[1] as string)
                        {
                            case "启动": manager.StartMMO(); break;
                            case "停止": manager.StopMMO(); break;
                            case "进入房间": manager.EnterRoom(); break;
                            case "退出房间": manager.ExitRoom(); break;
                        }
                        break;
                    }
                case EMMOScriptID.MMOGetCurrentRoomInfo:
                    {
                        switch (param[1] as string)
                        {
                            case "应用名": return ReturnValue.True(MMOHelper.roomInfo.appName);
                            case "应用编号": return ReturnValue.True(MMOHelper.roomInfo.appGuid);
                            case "应用版本": return ReturnValue.True(MMOHelper.roomInfo.appVersion);
                            case "房间编号": return ReturnValue.True(MMOHelper.roomInfo.roomGuid);
                            case "房间名": return ReturnValue.True(MMOHelper.roomInfo.name);
                            case "是否需要密码": return ReturnValue.True(MMOHelper.roomInfo.pwd);
                            case "在线人数": return ReturnValue.True(MMOHelper.roomInfo.userCount);
                            case "总人数": return ReturnValue.True(MMOHelper.roomInfo.limitCount);
                        }
                        break;
                    }
                case EMMOScriptID.MMOCreatePlayer:
                    {
                        var creater = MMOProvider.instance;
                        if (creater)
                        {
                            creater.CreatePlayer(param[2] as string);
                            return ReturnValue.Yes;
                        }
                        break;
                    }
                case EMMOScriptID.MMOSendMsg:
                    {
                        var netChat = param[1] as NetChat;
                        if (netChat)
                        {
                            switch (param[2] as string)
                            {
                                case "文本":
                                    {
                                        var str = param[3] as string;
                                        if (!string.IsNullOrEmpty(str))
                                        {
                                            netChat.Send(str); 
                                            return ReturnValue.Yes;
                                        }
                                        break;
                                    }
                                case "音频":
                                    {
                                        var audioClip = param[4] as AudioClip;
                                        if (audioClip)
                                        {
                                            netChat.Send(audioClip);
                                            return ReturnValue.Yes;
                                        }
                                        break;
                                    }
                                default: break;
                            }
                            
                        }
                        break;
                    }
            }
            return ReturnValue.No;
        }       
    }
}
