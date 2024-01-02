// Copyright (c) 2009 David Koontz
// Please direct any bugs/comments/suggestions to david@koontzfamily.org
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

using UnityEngine;

namespace XCSJ.CommonUtils.ITween
{
    /// <summary>
    /// 三维向量或变换数组
    /// </summary>
    public class Vector3OrTransformArray
    {
        /// <summary>
        /// 选择
        /// </summary>
        public static readonly string[] choices = { "Vector3", "Transform", "Path" };

        /// <summary>
        /// 三维向量已选择
        /// </summary>
        public static readonly int vector3Selected = 0;

        /// <summary>
        /// 变换已选择
        /// </summary>
        public static readonly int transformSelected = 1;

        /// <summary>
        /// 补间路径已选择
        /// </summary>
        public static readonly int iTweenPathSelected = 2;

        /// <summary>
        /// 已选择
        /// </summary>
        public int selected = 0;

        /// <summary>
        /// 向量数组
        /// </summary>
        public Vector3[] vectorArray;

        /// <summary>
        /// 变换数组
        /// </summary>
        public Transform[] transformArray;

        /// <summary>
        /// 路径名称
        /// </summary>
        public string pathName;
    }
}