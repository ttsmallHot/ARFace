﻿using System.Collections.Generic;
using UnityEngine;
using XCSJ.Maths;
using XCSJ.PluginSMS.Kernel;

namespace XCSJ.PluginSMS.States.TimeLine
{
    /// <summary>
    /// 工作剪辑组手
    /// </summary>
    public class WorkClipHelper
    {
        /// <summary>
        /// 创建状态工作剪辑
        /// </summary>
        /// <param name="entry"></param>
        /// <returns></returns>
        public static List<StateWorkClip> CreateStateWorkClips(State entry)
        {
            // 1、遍历生成序列
            //Debug.Log("---begin-------------");
            List<StateWorkClipHolder> infos = SearchWorkClips(entry);
            //Debug.Log("---end-------------");

            // 2、根据后项，关联前项          
            infos.ForEach(curInfo =>
            {
                foreach (var nextClip in curInfo.nextStates)
                {
                    StateWorkClipHolder info = infos.Find(item => item.data.state == nextClip);
                    if (info != null)
                    {
                        info.AddPreWorkClip(curInfo);
                    }
                }
            });

            // 3、设置深度
            infos.ForEach(info =>
            {
                info.ResetDeepIndex();
            });

            infos.Sort((a, b) => a.deepIndex.CompareTo(b.deepIndex));

            // 4、重置时间
            infos.ForEach(info =>
            {
                info.ResetTime();
            });

            // 5、设置百分比
            double maxTime = 0;
            infos.ForEach(i =>
            {
                if (i.data.endTime > maxTime)
                {
                    maxTime = i.data.endTime;
                }
            });
            infos.ForEach(info =>
            {
                info.ResetPercent(maxTime);
            });

            List<StateWorkClip> clips = new List<StateWorkClip>();
            infos.ForEach(item => clips.Add(item.data));
            return clips;
        }

        /// <summary>
        /// 广度遍历，查找工作剪辑
        /// </summary>
        private static List<StateWorkClipHolder> SearchWorkClips(State entry)
        {
            StateCollection stateCollection = entry.parent as StateCollection;
            Queue<State> queue = new Queue<State>();
            queue.Enqueue(entry);

            HashSet<State> visitedStates = new HashSet<State>();
            StateWorkClipHolder curClip = null;
            List<StateWorkClipHolder> clipList = new List<StateWorkClipHolder>();

            while (queue.Count > 0)
            {
                State curState = queue.Dequeue();
                //Debug.Log("curState:"+ curState.name);
                // 已访问过状态
                if (visitedStates.Contains(curState))
                {
                    continue;
                }
                visitedStates.Add(curState);

                if (curState.GetComponent<IWorkClip>() != null)
                {
                    var newClip = new StateWorkClipHolder(curState);
                    newClip.deepIndex = (curClip == null) ? 0 : (curClip.deepIndex + 1);
                    clipList.Add(newClip);
                    curClip = newClip;
                }

                State outState = (curState is StateCollection) ? (((StateCollection)curState).exitState as State) : curState;
                foreach (var t in outState.outTransitions)
                {
                    // 只遍历本层的状态
                    if (stateCollection.Contains(t.outState))
                    {
                        if (curClip != null && t.outState.GetComponent<IWorkClip>() != null)
                        {
                            // 如果当前状态与当前工作剪辑没有直接关联，就用深度最深的片段
                            if (curClip.data.state != curState && curClip.nextStates.Contains(t.outState) == false && clipList.Count > 0)
                            {
                                curClip = clipList[clipList.Count - 1];
                            }
                            //Debug.Log("1:" + curClip.name + ",2:" + t.outState.name);
                            curClip.AddNextState(t.outState);
                            UpdateDeep(curClip, clipList);
                        }
                        queue.Enqueue(t.outState);
                    }
                }
            }

            return clipList;
        }

        private static void UpdateDeep(StateWorkClipHolder curClip, List<StateWorkClipHolder> stateWorkClips)
        {
            foreach (var clip in stateWorkClips)
            {
                if (clip != curClip && curClip.nextStates.Contains(clip.data.state))
                {
                    clip.deepIndex = curClip.deepIndex + 1;
                }
            }
            stateWorkClips.Sort((a, b) => a.deepIndex.CompareTo(b.deepIndex));
        }
    }

    /// <summary>
    /// 状态工作剪辑保持器
    /// </summary>
    public class StateWorkClipHolder
    {
        /// <summary>
        /// 数据
        /// </summary>
        public StateWorkClip data;

        /// <summary>
        /// 构造
        /// </summary>
        /// <param name="state"></param>
        public StateWorkClipHolder(State state)
        {
            data = new StateWorkClip(state);
        }

        /// <summary>
        /// 后续状态
        /// </summary>
        public List<State> nextStates = new List<State>();

        /// <summary>
        /// 预工作剪辑
        /// </summary>
        public HashSet<StateWorkClipHolder> preWorkClips = new HashSet<StateWorkClipHolder>();

        /// <summary>
        /// 深度索引
        /// </summary>
        public int deepIndex = 0;

        /// <summary>
        /// 添加预工作剪辑
        /// </summary>
        /// <param name="node"></param>
        public void AddPreWorkClip(StateWorkClipHolder node)
        {
            preWorkClips.Add(node);
        }

        /// <summary>
        /// 添加下一个状态
        /// </summary>
        /// <param name="nextWorkClipState"></param>
        public void AddNextState(State nextWorkClipState)
        {
            nextStates.Add(nextWorkClipState);
        }

        /// <summary>
        /// 重置深度索引
        /// </summary>
        public void ResetDeepIndex()
        {
            foreach (var info in preWorkClips)
            {
                if (deepIndex <= info.deepIndex)
                {
                    deepIndex = info.deepIndex + 1;
                }
            }
        }

        private double GetPreClipMaxTime()
        {
            double time = 0;
            foreach (var info in preWorkClips)
            {
                if (time < info.data.workRange.timeRange.timeRange.y) time = info.data.workRange.timeRange.timeRange.y;
            }
            return time;
        }

        /// <summary>
        /// 重置时长
        /// </summary>
        public void ResetTime()
        {
            double beginTime = GetPreClipMaxTime();
            double timeLength = 0;
            if (data.stateWorkClipSet)
            {
                data.stateWorkClipSet.UpdateData();
                timeLength = data.stateWorkClipSet.timeLength;
            }
            else
            {
                timeLength = data.state.onceTimeLength;
            }

            double endTime = beginTime + timeLength;
            data.workRange.timeRange.timeRange = new V2D(beginTime, endTime);
        }

        /// <summary>
        /// 重置百分比
        /// </summary>
        /// <param name="totalTimeLength"></param>
        public void ResetPercent(double totalTimeLength)
        {
            data.workRange.percentRange.percentRange = data.workRange.timeRange.timeRange / totalTimeLength;
        }
    }
}
