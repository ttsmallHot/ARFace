#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { &p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, &p2, &p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// Holoville.HOTween.Core.TweenDelegate/HOAction`1<UnityEngine.Quaternion>
struct HOAction_1_tFB2FBEE2362B9EA5FB3B490AF7DCB29F69FB49DB;
// Holoville.HOTween.Core.TweenDelegate/HOAction`1<UnityEngine.Vector3>
struct HOAction_1_t3C819BD915A5AB9ABC2CFC13278E30C26EC42BF2;
// Holoville.HOTween.Core.TweenDelegate/HOFunc`1<UnityEngine.Quaternion>
struct HOFunc_1_t40C6A6BEC4C5E783BF6FCDC4F38C337734402C44;
// Holoville.HOTween.Core.TweenDelegate/HOFunc`1<UnityEngine.Vector3>
struct HOFunc_1_t41E04A0D95A65CF2022480C7F7AE604DD8E5A32C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C;
// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent>
struct List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC;
// System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>
struct List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Holoville.HOTween.Tweener>
struct List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F;
// System.Collections.Generic.List`1<Holoville.HOTween.Sequence/HOTSeqItem>
struct List_1_t698497CF3874D0FD4985709B1BF189D35D6EA4B0;
// System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>
struct List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8;
// Holoville.HOTween.Core.ABSTweenComponent[]
struct ABSTweenComponentU5BU5D_t3D9AD9A2BA5D428C8F8C8DC1FA45FEDB80E30195;
// Holoville.HOTween.Plugins.Core.ABSTweenPlugin[]
struct ABSTweenPluginU5BU5D_t475F412450955BB856940F6D8BD8088B8CF930C4;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Holoville.HOTween.Tweener[]
struct TweenerU5BU5D_t1772BFD4FB12F62941EC6F73B9B8E495B8B22EC5;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Holoville.HOTween.TweenParms/HOTPropData[]
struct HOTPropDataU5BU5D_t06113F571F1402CE0E0D0D2DD1D465216AFE51BC;
// Holoville.HOTween.Core.ABSTweenComponent
struct ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737;
// Holoville.HOTween.Core.ABSTweenComponentParms
struct ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E;
// Holoville.HOTween.Plugins.Core.ABSTweenPlugin
struct ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Holoville.HOTween.Core.Easing.EaseCurve
struct EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61;
// Holoville.HOTween.Core.EaseInfo
struct EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Holoville.HOTween.HOTween
struct HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Holoville.HOTween.IHOTweenComponent
struct IHOTweenComponent_tB2C342F8B62140FB7E789358740C24FD75CCC90E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Holoville.HOTween.Core.OverwriteManager
struct OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825;
// Holoville.HOTween.Core.Path
struct Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF;
// Holoville.HOTween.Plugins.Core.PlugColor
struct PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF;
// Holoville.HOTween.Plugins.Core.PlugColor32
struct PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19;
// Holoville.HOTween.Plugins.Core.PlugFloat
struct PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B;
// Holoville.HOTween.Plugins.PlugInt
struct PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5;
// Holoville.HOTween.Plugins.PlugQuaternion
struct PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1;
// Holoville.HOTween.Plugins.Core.PlugRect
struct PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888;
// Holoville.HOTween.Plugins.PlugSetFloat
struct PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86;
// Holoville.HOTween.Plugins.PlugString
struct PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580;
// Holoville.HOTween.Plugins.PlugUInt
struct PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE;
// Holoville.HOTween.Plugins.Core.PlugVector2
struct PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8;
// Holoville.HOTween.Plugins.Core.PlugVector3
struct PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E;
// Holoville.HOTween.Plugins.PlugVector3Path
struct PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8;
// Holoville.HOTween.Plugins.Core.PlugVector4
struct PlugVector4_t182247639032B73333E7055ED1105099DEED99DF;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Holoville.HOTween.Sequence
struct Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279;
// Holoville.HOTween.SequenceParms
struct SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Holoville.HOTween.TweenEvent
struct TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18;
// Holoville.HOTween.TweenParms
struct TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D;
// Holoville.HOTween.TweenVar
struct TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C;
// Holoville.HOTween.Tweener
struct Tweener_t99074CD44759EE1C18B018744C9E38243A40871A;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3
struct U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63;
// Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0
struct U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485;
// Holoville.HOTween.Core.TweenDelegate/EaseFunc
struct EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75;
// Holoville.HOTween.Core.TweenDelegate/FilterFunc
struct FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707;
// Holoville.HOTween.Core.TweenDelegate/TweenCallback
struct TweenCallback_t636681A33D249FB51EB356E0746B53250D607704;
// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms
struct TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF;
// Holoville.HOTween.TweenParms/HOTPropData
struct HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79;

IL2CPP_EXTERN_C RuntimeClass* ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0082802CB33D711591EB7173923DE71C91BF6CBE;
IL2CPP_EXTERN_C String_t* _stringLiteral14C4F2807068D9640EE91247145D17939966A293;
IL2CPP_EXTERN_C String_t* _stringLiteral16B1A560D0508AB021624167CB1F87B6D48B02D6;
IL2CPP_EXTERN_C String_t* _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral22019CCE5271D6EB84252727A240AB258D6BE609;
IL2CPP_EXTERN_C String_t* _stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88;
IL2CPP_EXTERN_C String_t* _stringLiteral2F49C847A1A5CEB5577FEA54212488B3D7D0B825;
IL2CPP_EXTERN_C String_t* _stringLiteral3B53C838334DF89B87164B8A5EE26C8FD470850B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED;
IL2CPP_EXTERN_C String_t* _stringLiteral5F43C61FF910780A25E22CD0232290820C30BA1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC2733BAEC60A24A610EE1518219446E759790F;
IL2CPP_EXTERN_C String_t* _stringLiteral82B1FFF171100778CEDD884A0E4A65666906E7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA98C7A22AA6A1C57588D0F7FF2DA7969390ED248;
IL2CPP_EXTERN_C String_t* _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A;
IL2CPP_EXTERN_C String_t* _stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261;
IL2CPP_EXTERN_C String_t* _stringLiteralBED41A93D53C57A40BB6B79662E6D00E6BF4EFB1;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA73882EBCB16AE44454CACF911EC21EF0A579C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355;
IL2CPP_EXTERN_C String_t* _stringLiteralEB60F7CAA481E19A64B444094946BAD0787BCE63;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisType_t_m2923AB55EE8374E8CABFAD02C349A1C742E82B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBB2DBA9ECB2AD6046CB4CFB717FDD7E474A439AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD41ECDF321C38DCCF6A9FFC5CC98C0D1D8E2764C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaseCurve_Evaluate_m147EB11018D649E704C57B17AFF002CB52082F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0C336245737552A850BF98B9B62610882672A341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m18CB12DF523FE98B674A0D93FA002E47704F555E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1CBA8A3D48739CC5AF6BCBBD86D0086BB762DE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mB0AE72F0CAE49940457AFDC332ED7869B9EADA8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39186FF5CA6EEBF0401FCC8D454A147188082B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5D2B3DB01D3330882450D6B77EB81FBDA75042CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m805576DBB9A4E83729241F9A56D3E75202DF9014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE437070E1C414F54A661124CFD73BAE04C1D0CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m68F0E22360E0088E4149CBCBDAE6A1E67C16CD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_Collections_IEnumerator_Reset_m67BD98FBCC5EFE58C75164816655B22EA5007433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeScaleIndependentUpdateU3Ed__0_System_Collections_IEnumerator_Reset_m589A2198D792866E38A77693BBE03563BC1AF49A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent>
struct List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ABSTweenComponentU5BU5D_t3D9AD9A2BA5D428C8F8C8DC1FA45FEDB80E30195* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>
struct List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ABSTweenPluginU5BU5D_t475F412450955BB856940F6D8BD8088B8CF930C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Tweener>
struct List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TweenerU5BU5D_t1772BFD4FB12F62941EC6F73B9B8E495B8B22EC5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>
struct List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HOTPropDataU5BU5D_t06113F571F1402CE0E0D0D2DD1D465216AFE51BC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>{84144E1B-185A-4E27-A8BD-7CDE365EA58E}
struct U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320  : public RuntimeObject
{
};

// Holoville.HOTween.Core.ABSTweenComponent
struct ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737  : public RuntimeObject
{
	// System.String Holoville.HOTween.Core.ABSTweenComponent::_id
	String_t* ____id_0;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponent::_intId
	int32_t ____intId_1;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_autoKillOnComplete
	bool ____autoKillOnComplete_2;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_enabled
	bool ____enabled_3;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_timeScale
	float ____timeScale_4;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponent::_loops
	int32_t ____loops_5;
	// Holoville.HOTween.LoopType Holoville.HOTween.Core.ABSTweenComponent::_loopType
	int32_t ____loopType_6;
	// Holoville.HOTween.UpdateType Holoville.HOTween.Core.ABSTweenComponent::_updateType
	int32_t ____updateType_7;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_isPaused
	bool ____isPaused_8;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::ignoreCallbacks
	bool ___ignoreCallbacks_9;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_steadyIgnoreCallbacks
	bool ____steadyIgnoreCallbacks_10;
	// Holoville.HOTween.Sequence Holoville.HOTween.Core.ABSTweenComponent::contSequence
	Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* ___contSequence_11;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::startupDone
	bool ___startupDone_12;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onStart
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onStart_13;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onStartWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onStartWParms_14;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onStartParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onStartParms_15;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onUpdate
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onUpdate_16;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onUpdateWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onUpdateWParms_17;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onUpdateParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onUpdateParms_18;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onPluginUpdated
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPluginUpdated_19;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onPluginUpdatedWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPluginUpdatedWParms_20;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onPluginUpdatedParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPluginUpdatedParms_21;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onPause
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPause_22;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onPauseWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPauseWParms_23;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onPauseParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPauseParms_24;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onPlay
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPlay_25;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onPlayWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPlayWParms_26;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onPlayParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPlayParms_27;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onRewinded
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onRewinded_28;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onRewindedWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onRewindedWParms_29;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onRewindedParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onRewindedParms_30;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onStepComplete
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onStepComplete_31;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onStepCompleteWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onStepCompleteWParms_32;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onStepCompleteParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onStepCompleteParms_33;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponent::onComplete
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onComplete_34;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponent::onCompleteWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onCompleteWParms_35;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponent::onCompleteParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onCompleteParms_36;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponent::_completedLoops
	int32_t ____completedLoops_37;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_duration
	float ____duration_38;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_originalDuration
	float ____originalDuration_39;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_originalNonSpeedBasedDuration
	float ____originalNonSpeedBasedDuration_40;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_fullDuration
	float ____fullDuration_41;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_elapsed
	float ____elapsed_42;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::_fullElapsed
	float ____fullElapsed_43;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_destroyed
	bool ____destroyed_44;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_isEmpty
	bool ____isEmpty_45;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_isReversed
	bool ____isReversed_46;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_isLoopingBack
	bool ____isLoopingBack_47;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_hasStarted
	bool ____hasStarted_48;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::_isComplete
	bool ____isComplete_49;
	// System.Single Holoville.HOTween.Core.ABSTweenComponent::prevFullElapsed
	float ___prevFullElapsed_50;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponent::prevCompletedLoops
	int32_t ___prevCompletedLoops_51;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::manageBehaviours
	bool ___manageBehaviours_52;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::manageGameObjects
	bool ___manageGameObjects_53;
	// UnityEngine.Behaviour[] Holoville.HOTween.Core.ABSTweenComponent::managedBehavioursOn
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___managedBehavioursOn_54;
	// UnityEngine.Behaviour[] Holoville.HOTween.Core.ABSTweenComponent::managedBehavioursOff
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___managedBehavioursOff_55;
	// UnityEngine.GameObject[] Holoville.HOTween.Core.ABSTweenComponent::managedGameObjectsOn
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___managedGameObjectsOn_56;
	// UnityEngine.GameObject[] Holoville.HOTween.Core.ABSTweenComponent::managedGameObjectsOff
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___managedGameObjectsOff_57;
	// System.Boolean[] Holoville.HOTween.Core.ABSTweenComponent::managedBehavioursOriginalState
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___managedBehavioursOriginalState_58;
	// System.Boolean[] Holoville.HOTween.Core.ABSTweenComponent::managedGameObjectsOriginalState
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___managedGameObjectsOriginalState_59;
};

// Holoville.HOTween.Core.ABSTweenComponentParms
struct ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E  : public RuntimeObject
{
	// System.String Holoville.HOTween.Core.ABSTweenComponentParms::id
	String_t* ___id_0;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponentParms::intId
	int32_t ___intId_1;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponentParms::autoKillOnComplete
	bool ___autoKillOnComplete_2;
	// Holoville.HOTween.UpdateType Holoville.HOTween.Core.ABSTweenComponentParms::updateType
	int32_t ___updateType_3;
	// System.Single Holoville.HOTween.Core.ABSTweenComponentParms::timeScale
	float ___timeScale_4;
	// System.Int32 Holoville.HOTween.Core.ABSTweenComponentParms::loops
	int32_t ___loops_5;
	// Holoville.HOTween.LoopType Holoville.HOTween.Core.ABSTweenComponentParms::loopType
	int32_t ___loopType_6;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponentParms::isPaused
	bool ___isPaused_7;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onStart
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onStart_8;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onStartWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onStartWParms_9;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onStartParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onStartParms_10;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onUpdate
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onUpdate_11;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onUpdateWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onUpdateWParms_12;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onUpdateParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onUpdateParms_13;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onPluginUpdated
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPluginUpdated_14;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onPluginUpdatedWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPluginUpdatedWParms_15;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onPluginUpdatedParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPluginUpdatedParms_16;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onPause
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPause_17;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onPauseWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPauseWParms_18;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onPauseParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPauseParms_19;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onPlay
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPlay_20;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onPlayWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPlayWParms_21;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onPlayParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPlayParms_22;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onRewinded
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onRewinded_23;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onRewindedWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onRewindedWParms_24;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onRewindedParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onRewindedParms_25;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onStepComplete
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onStepComplete_26;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onStepCompleteWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onStepCompleteWParms_27;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onStepCompleteParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onStepCompleteParms_28;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Core.ABSTweenComponentParms::onComplete
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onComplete_29;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Core.ABSTweenComponentParms::onCompleteWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onCompleteWParms_30;
	// System.Object[] Holoville.HOTween.Core.ABSTweenComponentParms::onCompleteParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onCompleteParms_31;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponentParms::manageBehaviours
	bool ___manageBehaviours_32;
	// System.Boolean Holoville.HOTween.Core.ABSTweenComponentParms::manageGameObjects
	bool ___manageGameObjects_33;
	// UnityEngine.Behaviour[] Holoville.HOTween.Core.ABSTweenComponentParms::managedBehavioursOn
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___managedBehavioursOn_34;
	// UnityEngine.Behaviour[] Holoville.HOTween.Core.ABSTweenComponentParms::managedBehavioursOff
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___managedBehavioursOff_35;
	// UnityEngine.GameObject[] Holoville.HOTween.Core.ABSTweenComponentParms::managedGameObjectsOn
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___managedGameObjectsOn_36;
	// UnityEngine.GameObject[] Holoville.HOTween.Core.ABSTweenComponentParms::managedGameObjectsOff
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___managedGameObjectsOff_37;
};

// Holoville.HOTween.Plugins.Core.ABSTweenPlugin
struct ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A  : public RuntimeObject
{
	// System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_startVal
	RuntimeObject* ____startVal_0;
	// System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_endVal
	RuntimeObject* ____endVal_1;
	// System.Single Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_duration
	float ____duration_2;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_initialized
	bool ____initialized_3;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_easeReversed
	bool ____easeReversed_4;
	// System.String Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_propName
	String_t* ____propName_5;
	// System.Type Holoville.HOTween.Plugins.Core.ABSTweenPlugin::targetType
	Type_t* ___targetType_6;
	// Holoville.HOTween.Core.TweenDelegate/EaseFunc Holoville.HOTween.Plugins.Core.ABSTweenPlugin::ease
	EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* ___ease_7;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::isRelative
	bool ___isRelative_8;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::ignoreAccessor
	bool ___ignoreAccessor_9;
	// Holoville.HOTween.EaseType Holoville.HOTween.Plugins.Core.ABSTweenPlugin::easeType
	int32_t ___easeType_10;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Plugins.Core.ABSTweenPlugin::easeInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInfo_11;
	// Holoville.HOTween.Core.Easing.EaseCurve Holoville.HOTween.Plugins.Core.ABSTweenPlugin::easeCurve
	EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61* ___easeCurve_12;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::wasStarted
	bool ___wasStarted_13;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::speedBasedDurationWasSet
	bool ___speedBasedDurationWasSet_14;
	// System.Int32 Holoville.HOTween.Plugins.Core.ABSTweenPlugin::prevCompletedLoops
	int32_t ___prevCompletedLoops_15;
	// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_useSpeedTransformAccessors
	bool ____useSpeedTransformAccessors_16;
	// UnityEngine.Transform Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_transformTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transformTarget_17;
	// Holoville.HOTween.Core.TweenDelegate/HOAction`1<UnityEngine.Vector3> Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_setTransformVector3
	HOAction_1_t3C819BD915A5AB9ABC2CFC13278E30C26EC42BF2* ____setTransformVector3_18;
	// Holoville.HOTween.Core.TweenDelegate/HOFunc`1<UnityEngine.Vector3> Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_getTransformVector3
	HOFunc_1_t41E04A0D95A65CF2022480C7F7AE604DD8E5A32C* ____getTransformVector3_19;
	// Holoville.HOTween.Core.TweenDelegate/HOAction`1<UnityEngine.Quaternion> Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_setTransformQuaternion
	HOAction_1_tFB2FBEE2362B9EA5FB3B490AF7DCB29F69FB49DB* ____setTransformQuaternion_20;
	// Holoville.HOTween.Core.TweenDelegate/HOFunc`1<UnityEngine.Quaternion> Holoville.HOTween.Plugins.Core.ABSTweenPlugin::_getTransformQuaternion
	HOFunc_1_t40C6A6BEC4C5E783BF6FCDC4F38C337734402C44* ____getTransformQuaternion_21;
	// System.Reflection.PropertyInfo Holoville.HOTween.Plugins.Core.ABSTweenPlugin::propInfo
	PropertyInfo_t* ___propInfo_22;
	// System.Reflection.FieldInfo Holoville.HOTween.Plugins.Core.ABSTweenPlugin::fieldInfo
	FieldInfo_t* ___fieldInfo_23;
	// Holoville.HOTween.Tweener Holoville.HOTween.Plugins.Core.ABSTweenPlugin::tweenObj
	Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___tweenObj_24;
};

// Holoville.HOTween.Core.Easing.Back
struct Back_tBA8EAC4AE5202EC66D4FC40A61AB29FD17383958  : public RuntimeObject
{
};

// Holoville.HOTween.Core.Easing.Circ
struct Circ_t694775B5C70C5FD9DF560442ABD9E8AD34F4DFCF  : public RuntimeObject
{
};

// Holoville.HOTween.Core.Easing.Cubic
struct Cubic_t4D410E9A23C187E4D8B2CC8E177739E1E1D92267  : public RuntimeObject
{
};

// Holoville.HOTween.Core.Easing.EaseCurve
struct EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61  : public RuntimeObject
{
	// UnityEngine.AnimationCurve Holoville.HOTween.Core.Easing.EaseCurve::animCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve_0;
};

// Holoville.HOTween.Core.EaseInfo
struct EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F  : public RuntimeObject
{
	// Holoville.HOTween.Core.TweenDelegate/EaseFunc Holoville.HOTween.Core.EaseInfo::ease
	EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* ___ease_0;
	// Holoville.HOTween.Core.TweenDelegate/EaseFunc Holoville.HOTween.Core.EaseInfo::inverseEase
	EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* ___inverseEase_1;
};

// Holoville.HOTween.Core.Easing.Linear
struct Linear_tC81E866CE0FA572EBC122C1AFD6A2CBA5DA6E581  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Holoville.HOTween.Core.OverwriteManager
struct OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825  : public RuntimeObject
{
	// System.Boolean Holoville.HOTween.Core.OverwriteManager::enabled
	bool ___enabled_0;
	// System.Boolean Holoville.HOTween.Core.OverwriteManager::logWarnings
	bool ___logWarnings_1;
	// System.Collections.Generic.List`1<Holoville.HOTween.Tweener> Holoville.HOTween.Core.OverwriteManager::runningTweens
	List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* ___runningTweens_2;
};

// Holoville.HOTween.Core.Path
struct Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF  : public RuntimeObject
{
	// System.Single Holoville.HOTween.Core.Path::pathLength
	float ___pathLength_0;
	// System.Single[] Holoville.HOTween.Core.Path::waypointsLength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___waypointsLength_1;
	// System.Single[] Holoville.HOTween.Core.Path::timesTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timesTable_2;
	// System.Single[] Holoville.HOTween.Core.Path::lengthsTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthsTable_3;
	// UnityEngine.Vector3[] Holoville.HOTween.Core.Path::path
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___path_4;
	// System.Boolean Holoville.HOTween.Core.Path::changed
	bool ___changed_5;
	// UnityEngine.Vector3[] Holoville.HOTween.Core.Path::drawPs
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___drawPs_6;
	// Holoville.HOTween.PathType Holoville.HOTween.Core.Path::pathType
	int32_t ___pathType_7;
};

// Holoville.HOTween.Core.Easing.Quad
struct Quad_t5D0771C410BB91E831BC2AD7D5AF19776990428C  : public RuntimeObject
{
};

// Holoville.HOTween.Core.Easing.Quint
struct Quint_t16F6181AFE80B97B23EF114F693ED70B510DF3F7  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Holoville.HOTween.Core.TweenDelegate
struct TweenDelegate_t98C51F719714F2564925A5022DF8E270D12CA7EE  : public RuntimeObject
{
};

// Holoville.HOTween.TweenEvent
struct TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18  : public RuntimeObject
{
	// Holoville.HOTween.IHOTweenComponent Holoville.HOTween.TweenEvent::_tween
	RuntimeObject* ____tween_0;
	// System.Object[] Holoville.HOTween.TweenEvent::_parms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____parms_1;
	// Holoville.HOTween.Plugins.Core.ABSTweenPlugin Holoville.HOTween.TweenEvent::_plugin
	ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* ____plugin_2;
};

// Holoville.HOTween.TweenVar
struct TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C  : public RuntimeObject
{
	// System.Single Holoville.HOTween.TweenVar::duration
	float ___duration_0;
	// System.Single Holoville.HOTween.TweenVar::_value
	float ____value_1;
	// System.Single Holoville.HOTween.TweenVar::_startVal
	float ____startVal_2;
	// System.Single Holoville.HOTween.TweenVar::_endVal
	float ____endVal_3;
	// Holoville.HOTween.EaseType Holoville.HOTween.TweenVar::_easeType
	int32_t ____easeType_4;
	// Holoville.HOTween.Core.Easing.EaseCurve Holoville.HOTween.TweenVar::_easeCurve
	EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61* ____easeCurve_5;
	// UnityEngine.AnimationCurve Holoville.HOTween.TweenVar::_easeAnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____easeAnimationCurve_6;
	// System.Single Holoville.HOTween.TweenVar::_elapsed
	float ____elapsed_7;
	// System.Single Holoville.HOTween.TweenVar::changeVal
	float ___changeVal_8;
	// Holoville.HOTween.Core.TweenDelegate/EaseFunc Holoville.HOTween.TweenVar::ease
	EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* ___ease_9;
};

// Holoville.HOTween.Core.TweenWarning
struct TweenWarning_t0E96CCE0A2DBB37BEAA7A2908FB618C43C8E0986  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3
struct U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63  : public RuntimeObject
{
	// System.Object Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_0;
	// System.Int32 Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::<>1__state
	int32_t ___U3CU3E1__state_1;
	// Holoville.HOTween.HOTween Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::<>4__this
	HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC* ___U3CU3E4__this_2;
};

// Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0
struct U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485  : public RuntimeObject
{
	// System.Object Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_0;
	// System.Int32 Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::<>1__state
	int32_t ___U3CU3E1__state_1;
	// System.Single Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::<elapsed>5__1
	float ___U3CelapsedU3E5__1_2;
};

// Holoville.HOTween.TweenParms/HOTPropData
struct HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79  : public RuntimeObject
{
	// System.String Holoville.HOTween.TweenParms/HOTPropData::propName
	String_t* ___propName_0;
	// System.Object Holoville.HOTween.TweenParms/HOTPropData::endValOrPlugin
	RuntimeObject* ___endValOrPlugin_1;
	// System.Boolean Holoville.HOTween.TweenParms/HOTPropData::isRelative
	bool ___isRelative_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Holoville.HOTween.Plugins.Core.PlugFloat
struct PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// System.Single Holoville.HOTween.Plugins.Core.PlugFloat::typedStartVal
	float ___typedStartVal_27;
	// System.Single Holoville.HOTween.Plugins.Core.PlugFloat::typedEndVal
	float ___typedEndVal_28;
	// System.Single Holoville.HOTween.Plugins.Core.PlugFloat::changeVal
	float ___changeVal_29;
};

// Holoville.HOTween.Plugins.PlugInt
struct PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// System.Single Holoville.HOTween.Plugins.PlugInt::typedStartVal
	float ___typedStartVal_27;
	// System.Single Holoville.HOTween.Plugins.PlugInt::typedEndVal
	float ___typedEndVal_28;
	// System.Single Holoville.HOTween.Plugins.PlugInt::changeVal
	float ___changeVal_29;
};

// Holoville.HOTween.Plugins.PlugSetFloat
struct PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// System.Single Holoville.HOTween.Plugins.PlugSetFloat::typedStartVal
	float ___typedStartVal_28;
	// System.Single Holoville.HOTween.Plugins.PlugSetFloat::typedEndVal
	float ___typedEndVal_29;
	// System.Single Holoville.HOTween.Plugins.PlugSetFloat::changeVal
	float ___changeVal_30;
	// System.String Holoville.HOTween.Plugins.PlugSetFloat::floatName
	String_t* ___floatName_31;
};

// Holoville.HOTween.Plugins.PlugString
struct PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// System.String Holoville.HOTween.Plugins.PlugString::typedStartVal
	String_t* ___typedStartVal_27;
	// System.String Holoville.HOTween.Plugins.PlugString::typedEndVal
	String_t* ___typedEndVal_28;
	// System.Single Holoville.HOTween.Plugins.PlugString::changeVal
	float ___changeVal_29;
};

// Holoville.HOTween.Plugins.PlugUInt
struct PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// System.UInt32 Holoville.HOTween.Plugins.PlugUInt::typedStartVal
	uint32_t ___typedStartVal_27;
	// System.UInt32 Holoville.HOTween.Plugins.PlugUInt::typedEndVal
	uint32_t ___typedEndVal_28;
	// System.UInt32 Holoville.HOTween.Plugins.PlugUInt::changeVal
	uint32_t ___changeVal_29;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Holoville.HOTween.Sequence
struct Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279  : public ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737
{
	// System.Boolean Holoville.HOTween.Sequence::hasCallbacks
	bool ___hasCallbacks_60;
	// System.Int32 Holoville.HOTween.Sequence::prevIncrementalCompletedLoops
	int32_t ___prevIncrementalCompletedLoops_61;
	// System.Single Holoville.HOTween.Sequence::prevElapsed
	float ___prevElapsed_62;
	// System.Collections.Generic.List`1<Holoville.HOTween.Sequence/HOTSeqItem> Holoville.HOTween.Sequence::items
	List_1_t698497CF3874D0FD4985709B1BF189D35D6EA4B0* ___items_63;
};

// Holoville.HOTween.SequenceParms
struct SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA  : public ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Holoville.HOTween.TweenParms
struct TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D  : public ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E
{
	// System.Boolean Holoville.HOTween.TweenParms::pixelPerfect
	bool ___pixelPerfect_39;
	// System.Boolean Holoville.HOTween.TweenParms::speedBased
	bool ___speedBased_40;
	// System.Boolean Holoville.HOTween.TweenParms::easeSet
	bool ___easeSet_41;
	// Holoville.HOTween.EaseType Holoville.HOTween.TweenParms::easeType
	int32_t ___easeType_42;
	// UnityEngine.AnimationCurve Holoville.HOTween.TweenParms::easeAnimCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___easeAnimCurve_43;
	// System.Single Holoville.HOTween.TweenParms::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_44;
	// System.Single Holoville.HOTween.TweenParms::easePeriod
	float ___easePeriod_45;
	// System.Single Holoville.HOTween.TweenParms::delay
	float ___delay_46;
	// System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData> Holoville.HOTween.TweenParms::propDatas
	List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* ___propDatas_47;
	// System.Boolean Holoville.HOTween.TweenParms::isFrom
	bool ___isFrom_48;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.TweenParms::onPluginOverwritten
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPluginOverwritten_49;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.TweenParms::onPluginOverwrittenWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPluginOverwrittenWParms_50;
	// System.Object[] Holoville.HOTween.TweenParms::onPluginOverwrittenParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPluginOverwrittenParms_51;
};

// Holoville.HOTween.Tweener
struct Tweener_t99074CD44759EE1C18B018744C9E38243A40871A  : public ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737
{
	// System.Single Holoville.HOTween.Tweener::_elapsedDelay
	float ____elapsedDelay_60;
	// Holoville.HOTween.EaseType Holoville.HOTween.Tweener::_easeType
	int32_t ____easeType_61;
	// UnityEngine.AnimationCurve Holoville.HOTween.Tweener::_easeAnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____easeAnimationCurve_62;
	// System.Single Holoville.HOTween.Tweener::_easeOvershootOrAmplitude
	float ____easeOvershootOrAmplitude_63;
	// System.Single Holoville.HOTween.Tweener::_easePeriod
	float ____easePeriod_64;
	// System.Boolean Holoville.HOTween.Tweener::_pixelPerfect
	bool ____pixelPerfect_65;
	// System.Boolean Holoville.HOTween.Tweener::_speedBased
	bool ____speedBased_66;
	// System.Single Holoville.HOTween.Tweener::_delay
	float ____delay_67;
	// System.Single Holoville.HOTween.Tweener::delayCount
	float ___delayCount_68;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallback Holoville.HOTween.Tweener::onPluginOverwritten
	TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___onPluginOverwritten_69;
	// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms Holoville.HOTween.Tweener::onPluginOverwrittenWParms
	TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___onPluginOverwrittenWParms_70;
	// System.Object[] Holoville.HOTween.Tweener::onPluginOverwrittenParms
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___onPluginOverwrittenParms_71;
	// System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin> Holoville.HOTween.Tweener::plugins
	List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* ___plugins_72;
	// System.Object Holoville.HOTween.Tweener::_target
	RuntimeObject* ____target_73;
	// System.Boolean Holoville.HOTween.Tweener::isPartialled
	bool ___isPartialled_74;
	// Holoville.HOTween.EaseType Holoville.HOTween.Tweener::_originalEaseType
	int32_t ____originalEaseType_75;
	// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Tweener::pv3Path
	PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* ___pv3Path_76;
	// System.Boolean Holoville.HOTween.Tweener::<isFrom>k__BackingField
	bool ___U3CisFromU3Ek__BackingField_77;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Holoville.HOTween.Plugins.Core.PlugColor
struct PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor::typedStartVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___typedStartVal_27;
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor::typedEndVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___typedEndVal_28;
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor::diffChangeVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___diffChangeVal_29;
};

// Holoville.HOTween.Plugins.Core.PlugColor32
struct PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor32::typedStartVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___typedStartVal_27;
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor32::typedEndVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___typedEndVal_28;
	// UnityEngine.Color Holoville.HOTween.Plugins.Core.PlugColor32::diffChangeVal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___diffChangeVal_29;
};

// Holoville.HOTween.Plugins.PlugQuaternion
struct PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugQuaternion::typedStartVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___typedStartVal_27;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugQuaternion::typedEndVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___typedEndVal_28;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugQuaternion::changeVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeVal_29;
	// System.Boolean Holoville.HOTween.Plugins.PlugQuaternion::beyond360
	bool ___beyond360_30;
};

// Holoville.HOTween.Plugins.Core.PlugRect
struct PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Rect Holoville.HOTween.Plugins.Core.PlugRect::typedStartVal
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___typedStartVal_27;
	// UnityEngine.Rect Holoville.HOTween.Plugins.Core.PlugRect::typedEndVal
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___typedEndVal_28;
	// UnityEngine.Rect Holoville.HOTween.Plugins.Core.PlugRect::diffChangeVal
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___diffChangeVal_29;
};

// Holoville.HOTween.Plugins.Core.PlugVector2
struct PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Vector2 Holoville.HOTween.Plugins.Core.PlugVector2::typedStartVal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___typedStartVal_27;
	// UnityEngine.Vector2 Holoville.HOTween.Plugins.Core.PlugVector2::typedEndVal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___typedEndVal_28;
	// UnityEngine.Vector2 Holoville.HOTween.Plugins.Core.PlugVector2::changeVal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeVal_29;
};

// Holoville.HOTween.Plugins.Core.PlugVector3
struct PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.Core.PlugVector3::typedStartVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___typedStartVal_27;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.Core.PlugVector3::typedEndVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___typedEndVal_28;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.Core.PlugVector3::changeVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeVal_29;
};

// Holoville.HOTween.Plugins.PlugVector3Path
struct PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// Holoville.HOTween.Core.Path Holoville.HOTween.Plugins.PlugVector3Path::path
	Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* ___path_31;
	// System.Single Holoville.HOTween.Plugins.PlugVector3Path::pathPerc
	float ___pathPerc_32;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::hasAdditionalStartingP
	bool ___hasAdditionalStartingP_33;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::typedStartVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___typedStartVal_34;
	// UnityEngine.Vector3[] Holoville.HOTween.Plugins.PlugVector3Path::points
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___points_35;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::diffChangeVal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diffChangeVal_36;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::isClosedPath
	bool ___isClosedPath_37;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::is2D
	bool ___is2D_38;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::is2DsideScroller
	bool ___is2DsideScroller_39;
	// Holoville.HOTween.Plugins.PlugVector3Path/OrientType Holoville.HOTween.Plugins.PlugVector3Path::orientType
	int32_t ___orientType_40;
	// System.Single Holoville.HOTween.Plugins.PlugVector3Path::lookAheadVal
	float ___lookAheadVal_41;
	// Holoville.HOTween.Axis Holoville.HOTween.Plugins.PlugVector3Path::lockPositionAxis
	int32_t ___lockPositionAxis_42;
	// Holoville.HOTween.Axis Holoville.HOTween.Plugins.PlugVector3Path::lockRotationAxis
	int32_t ___lockRotationAxis_43;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::isPartialPath
	bool ___isPartialPath_44;
	// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::usesLocalPosition
	bool ___usesLocalPosition_45;
	// System.Single Holoville.HOTween.Plugins.PlugVector3Path::startPerc
	float ___startPerc_46;
	// System.Single Holoville.HOTween.Plugins.PlugVector3Path::changePerc
	float ___changePerc_47;
	// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::lookPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookPos_48;
	// UnityEngine.Transform Holoville.HOTween.Plugins.PlugVector3Path::lookTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookTrans_49;
	// UnityEngine.Transform Holoville.HOTween.Plugins.PlugVector3Path::orientTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___orientTrans_50;
	// System.Single Holoville.HOTween.Plugins.PlugVector3Path::orZ
	float ___orZ_51;
	// Holoville.HOTween.PathType Holoville.HOTween.Plugins.PlugVector3Path::<pathType>k__BackingField
	int32_t ___U3CpathTypeU3Ek__BackingField_52;
};

// Holoville.HOTween.Plugins.Core.PlugVector4
struct PlugVector4_t182247639032B73333E7055ED1105099DEED99DF  : public ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A
{
	// UnityEngine.Vector4 Holoville.HOTween.Plugins.Core.PlugVector4::typedStartVal
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___typedStartVal_27;
	// UnityEngine.Vector4 Holoville.HOTween.Plugins.Core.PlugVector4::typedEndVal
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___typedEndVal_28;
	// UnityEngine.Vector4 Holoville.HOTween.Plugins.Core.PlugVector4::changeVal
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___changeVal_29;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Holoville.HOTween.Core.TweenDelegate/EaseFunc
struct EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75  : public MulticastDelegate_t
{
};

// Holoville.HOTween.Core.TweenDelegate/FilterFunc
struct FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707  : public MulticastDelegate_t
{
};

// Holoville.HOTween.Core.TweenDelegate/TweenCallback
struct TweenCallback_t636681A33D249FB51EB356E0746B53250D607704  : public MulticastDelegate_t
{
};

// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms
struct TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Holoville.HOTween.HOTween
struct HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Type,System.String>

// System.Collections.Generic.Dictionary`2<System.Type,System.String>

// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent>
struct List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ABSTweenComponentU5BU5D_t3D9AD9A2BA5D428C8F8C8DC1FA45FEDB80E30195* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent>

// System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>
struct List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ABSTweenPluginU5BU5D_t475F412450955BB856940F6D8BD8088B8CF930C4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Holoville.HOTween.Tweener>
struct List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TweenerU5BU5D_t1772BFD4FB12F62941EC6F73B9B8E495B8B22EC5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Holoville.HOTween.Tweener>

// System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>
struct List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HOTPropDataU5BU5D_t06113F571F1402CE0E0D0D2DD1D465216AFE51BC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>

// <PrivateImplementationDetails>{84144E1B-185A-4E27-A8BD-7CDE365EA58E}
struct U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> <PrivateImplementationDetails>{84144E1B-185A-4E27-A8BD-7CDE365EA58E}::$$method0x60002c2-1
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___U24U24method0x60002c2U2D1_0;
};

// <PrivateImplementationDetails>{84144E1B-185A-4E27-A8BD-7CDE365EA58E}

// Holoville.HOTween.Core.ABSTweenComponent

// Holoville.HOTween.Core.ABSTweenComponent

// Holoville.HOTween.Core.ABSTweenComponentParms

// Holoville.HOTween.Core.ABSTweenComponentParms

// Holoville.HOTween.Plugins.Core.ABSTweenPlugin

// Holoville.HOTween.Plugins.Core.ABSTweenPlugin

// Holoville.HOTween.Core.Easing.Back

// Holoville.HOTween.Core.Easing.Back

// Holoville.HOTween.Core.Easing.Circ

// Holoville.HOTween.Core.Easing.Circ

// Holoville.HOTween.Core.Easing.Cubic

// Holoville.HOTween.Core.Easing.Cubic

// Holoville.HOTween.Core.Easing.EaseCurve

// Holoville.HOTween.Core.Easing.EaseCurve

// Holoville.HOTween.Core.EaseInfo
struct EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F_StaticFields
{
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInSineInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInSineInfo_2;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutSineInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutSineInfo_3;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutSineInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutSineInfo_4;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInQuadInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInQuadInfo_5;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutQuadInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutQuadInfo_6;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutQuadInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutQuadInfo_7;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInCubicInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInCubicInfo_8;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutCubicInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutCubicInfo_9;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutCubicInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutCubicInfo_10;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInQuartInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInQuartInfo_11;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutQuartInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutQuartInfo_12;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutQuartInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutQuartInfo_13;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInQuintInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInQuintInfo_14;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutQuintInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutQuintInfo_15;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutQuintInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutQuintInfo_16;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInExpoInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInExpoInfo_17;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutExpoInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutExpoInfo_18;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutExpoInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutExpoInfo_19;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInCircInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInCircInfo_20;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutCircInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutCircInfo_21;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutCircInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutCircInfo_22;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInElasticInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInElasticInfo_23;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutElasticInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutElasticInfo_24;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutElasticInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutElasticInfo_25;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInBackInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInBackInfo_26;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutBackInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutBackInfo_27;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutBackInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutBackInfo_28;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInBounceInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInBounceInfo_29;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutBounceInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutBounceInfo_30;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutBounceInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutBounceInfo_31;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInStrongInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInStrongInfo_32;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeOutStrongInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeOutStrongInfo_33;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::easeInOutStrongInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___easeInOutStrongInfo_34;
	// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::defaultEaseInfo
	EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* ___defaultEaseInfo_35;
};

// Holoville.HOTween.Core.EaseInfo

// Holoville.HOTween.Core.Easing.Linear

// Holoville.HOTween.Core.Easing.Linear

// Holoville.HOTween.Core.OverwriteManager

// Holoville.HOTween.Core.OverwriteManager

// Holoville.HOTween.Core.Path

// Holoville.HOTween.Core.Path

// Holoville.HOTween.Core.Easing.Quad

// Holoville.HOTween.Core.Easing.Quad

// Holoville.HOTween.Core.Easing.Quint

// Holoville.HOTween.Core.Easing.Quint

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Holoville.HOTween.Core.TweenDelegate

// Holoville.HOTween.Core.TweenDelegate

// Holoville.HOTween.TweenEvent

// Holoville.HOTween.TweenEvent

// Holoville.HOTween.TweenVar

// Holoville.HOTween.TweenVar

// Holoville.HOTween.Core.TweenWarning

// Holoville.HOTween.Core.TweenWarning

// Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3

// Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3

// Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0

// Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0

// Holoville.HOTween.TweenParms/HOTPropData

// Holoville.HOTween.TweenParms/HOTPropData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Holoville.HOTween.Plugins.Core.PlugFloat
struct PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugFloat::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugFloat::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugFloat

// Holoville.HOTween.Plugins.PlugInt
struct PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugInt::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.PlugInt::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.PlugInt

// Holoville.HOTween.Plugins.PlugSetFloat
struct PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugSetFloat::validTargetTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validTargetTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.PlugSetFloat::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_26;
	// System.Type[] Holoville.HOTween.Plugins.PlugSetFloat::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_27;
};

// Holoville.HOTween.Plugins.PlugSetFloat

// Holoville.HOTween.Plugins.PlugString
struct PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugString::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.PlugString::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.PlugString

// Holoville.HOTween.Plugins.PlugUInt
struct PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugUInt::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.PlugUInt::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.PlugUInt

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// Holoville.HOTween.Sequence

// Holoville.HOTween.Sequence

// Holoville.HOTween.SequenceParms

// Holoville.HOTween.SequenceParms

// System.Single

// System.Single

// Holoville.HOTween.TweenParms
struct TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Holoville.HOTween.TweenParms::_TypeToShortString
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ____TypeToShortString_38;
};

// Holoville.HOTween.TweenParms

// Holoville.HOTween.Tweener

// Holoville.HOTween.Tweener

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Holoville.HOTween.Plugins.Core.PlugColor
struct PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugColor::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugColor::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugColor

// Holoville.HOTween.Plugins.Core.PlugColor32
struct PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugColor32::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugColor32::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugColor32

// Holoville.HOTween.Plugins.PlugQuaternion
struct PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugQuaternion::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.PlugQuaternion::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.PlugQuaternion

// Holoville.HOTween.Plugins.Core.PlugRect
struct PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugRect::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugRect::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugRect

// Holoville.HOTween.Plugins.Core.PlugVector2
struct PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector2::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector2::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugVector2

// Holoville.HOTween.Plugins.Core.PlugVector3
struct PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector3::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector3::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugVector3

// Holoville.HOTween.Plugins.PlugVector3Path
struct PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.PlugVector3Path::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_29;
	// System.Type[] Holoville.HOTween.Plugins.PlugVector3Path::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_30;
};

// Holoville.HOTween.Plugins.PlugVector3Path

// Holoville.HOTween.Plugins.Core.PlugVector4
struct PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_StaticFields
{
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector4::validPropTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validPropTypes_25;
	// System.Type[] Holoville.HOTween.Plugins.Core.PlugVector4::validValueTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validValueTypes_26;
};

// Holoville.HOTween.Plugins.Core.PlugVector4

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// Holoville.HOTween.Core.TweenDelegate/EaseFunc

// Holoville.HOTween.Core.TweenDelegate/EaseFunc

// Holoville.HOTween.Core.TweenDelegate/FilterFunc

// Holoville.HOTween.Core.TweenDelegate/FilterFunc

// Holoville.HOTween.Core.TweenDelegate/TweenCallback

// Holoville.HOTween.Core.TweenDelegate/TweenCallback

// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms

// Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Holoville.HOTween.HOTween
struct HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields
{
	// System.String Holoville.HOTween.HOTween::VERSION
	String_t* ___VERSION_6;
	// System.Boolean Holoville.HOTween.HOTween::IS_MICRO
	bool ___IS_MICRO_7;
	// Holoville.HOTween.UpdateType Holoville.HOTween.HOTween::defUpdateType
	int32_t ___defUpdateType_8;
	// System.Single Holoville.HOTween.HOTween::defTimeScale
	float ___defTimeScale_9;
	// Holoville.HOTween.EaseType Holoville.HOTween.HOTween::defEaseType
	int32_t ___defEaseType_10;
	// System.Single Holoville.HOTween.HOTween::defEaseOvershootOrAmplitude
	float ___defEaseOvershootOrAmplitude_11;
	// System.Single Holoville.HOTween.HOTween::defEasePeriod
	float ___defEasePeriod_12;
	// Holoville.HOTween.LoopType Holoville.HOTween.HOTween::defLoopType
	int32_t ___defLoopType_13;
	// System.Boolean Holoville.HOTween.HOTween::showPathGizmos
	bool ___showPathGizmos_14;
	// Holoville.HOTween.WarningLevel Holoville.HOTween.HOTween::warningLevel
	int32_t ___warningLevel_15;
	// System.Boolean Holoville.HOTween.HOTween::isIOS
	bool ___isIOS_16;
	// System.Boolean Holoville.HOTween.HOTween::isEditor
	bool ___isEditor_17;
	// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent> Holoville.HOTween.HOTween::onCompletes
	List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC* ___onCompletes_18;
	// System.Boolean Holoville.HOTween.HOTween::initialized
	bool ___initialized_19;
	// System.Boolean Holoville.HOTween.HOTween::isPermanent
	bool ___isPermanent_20;
	// System.Boolean Holoville.HOTween.HOTween::renameInstToCountTw
	bool ___renameInstToCountTw_21;
	// System.Single Holoville.HOTween.HOTween::time
	float ___time_22;
	// System.Boolean Holoville.HOTween.HOTween::isQuitting
	bool ___isQuitting_23;
	// System.Collections.Generic.List`1<System.Int32> Holoville.HOTween.HOTween::tweensToRemoveIndexes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___tweensToRemoveIndexes_24;
	// Holoville.HOTween.Core.OverwriteManager Holoville.HOTween.HOTween::overwriteManager
	OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825* ___overwriteManager_25;
	// System.Collections.Generic.List`1<Holoville.HOTween.Core.ABSTweenComponent> Holoville.HOTween.HOTween::tweens
	List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC* ___tweens_26;
	// UnityEngine.GameObject Holoville.HOTween.HOTween::tweenGOInstance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tweenGOInstance_27;
	// Holoville.HOTween.HOTween Holoville.HOTween.HOTween::it
	HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC* ___it_28;
	// System.Boolean Holoville.HOTween.HOTween::<isUpdateLoop>k__BackingField
	bool ___U3CisUpdateLoopU3Ek__BackingField_29;
};

// Holoville.HOTween.HOTween
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA  : public RuntimeArray
{
	ALIGN_FIELD (8) Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* m_Items[1];

	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m129B1E1EDDABF00B402C93841CCA7169B8963D83_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.HOTween::DoUpdate(Holoville.HOTween.UpdateType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HOTween_DoUpdate_mE9209BD9CD358C3BEDCB5E9AE2D19C9FCD5BCE93 (int32_t ___0_p_updateType, float ___1_p_elapsed, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.HOTween::CheckClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HOTween_CheckClear_m1096EC36B2E75C5C1069B3E636615C4BD1F69898 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Holoville.HOTween.HOTween::TimeScaleIndependentUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HOTween_TimeScaleIndependentUpdate_m7E58A37202376936025EC8EC6B66946A60ED4AF0 (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.Tweener::get_isFrom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482 (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, RuntimeObject* ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::set_pathType(Holoville.HOTween.PathType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::.ctor(System.Object,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042 (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, RuntimeObject* ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::.ctor(System.Object,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, RuntimeObject* ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// System.Object Holoville.HOTween.Tweener::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.TweenWarning::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B (String_t* ___0_p_message, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::Init(Holoville.HOTween.Tweener,System.String,Holoville.HOTween.EaseType,System.Type,System.Reflection.PropertyInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin_Init_mA17A13339EA1B9D8A939B5E8144C57FE9342CC29 (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_p_tweenObj, String_t* ___1_p_propertyName, int32_t ___2_p_easeType, Type_t* ___3_p_targetType, PropertyInfo_t* ___4_p_propertyInfo, FieldInfo_t* ___5_p_fieldInfo, const RuntimeMethod* method) ;
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::ClosePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_ClosePath_mFF30CD58A7ADBE3860716938AE1D0B590EECE6D2 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_close, const RuntimeMethod* method) ;
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_mDD2FD17CAE023690D586637E863EAB2F75BEDCAA (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_orient, const RuntimeMethod* method) ;
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Boolean,System.Single,Holoville.HOTween.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_orient, float ___1_p_lookAhead, int32_t ___2_p_lockRotationAxis, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// Holoville.HOTween.PathType Holoville.HOTween.Plugins.PlugVector3Path::get_pathType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186_inline (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.Path::.ctor(Holoville.HOTween.PathType,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_mB08F108F59563B544D546B8A9EB2105FD46D4588 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_type, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_p_path, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.Path::StoreTimeToLenTables(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_StoreTimeToLenTables_mF3AFBB4D067AB81A9B6EE85D91D340361D198EC9 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_subdivisions, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.Tweener::get_easeOvershootOrAmplitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.Tweener::get_easePeriod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.Core.TweenDelegate/EaseFunc::Invoke(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::GetConstPointOnPath(System.Single,System.Boolean,Holoville.HOTween.Core.Path,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlugVector3Path_GetConstPointOnPath_m00566EF01E12762EB32F6317A830E61461A670E4 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_t, bool ___1_p_updatePathPerc, Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* ___2_p_path, int32_t* ___3_out_waypointIndex, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldUp, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.Core.Utils::GetAngle2D(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_GetAngle2D_mF80CAB3D76CBF1BAFCCCA8864040A2439BB8D04D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p_to, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin_Rewind_m738D072B63A84CA9B808B389B7DF22F35A3E4FBC (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin_Complete_m25B5AD6CE114E6224C2BC80D575E5148753855DB (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetConstPoint(System.Single,System.Single&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetConstPoint_mC350B3F2078D6AB8F49B9C5B063BDD6C79B0654C (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, float* ___1_out_pathPerc, int32_t* ___2_out_waypointIndex, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetConstPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetConstPoint_m1DADD874A6EC9E06D13C398963002B81F9017653 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.Path::StoreWaypointsLengths(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_StoreWaypointsLengths_mEB80B748EAE6EFC9BF2FB10BB6B7053B4CE279A4 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_subdivisions, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetEase(Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenPlugin_SetEase_m4AAE182A2A27955FBF83F423E4767EBF6A6C6088 (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, int32_t ___0_p_easeType, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Tweener>::.ctor()
inline void List_1__ctor_m39186FF5CA6EEBF0401FCC8D454A147188082B45 (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Holoville.HOTween.Tweener>::get_Count()
inline int32_t List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_inline (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>::get_Count()
inline int32_t List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_inline (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Holoville.HOTween.Tweener>::get_Item(System.Int32)
inline Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411 (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* (*) (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>::get_Item(System.Int32)
inline ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* (*) (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_propName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ABSTweenPlugin_get_propName_m66440F63ADB38E6AEB81E90E0E7C0D44B2450AFB_inline (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::get_isSequenced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ABSTweenComponent_get_isSequenced_mE341F3D7751CC291E9E5A64FB576CDBE2AC4BA5F (ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* __this, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::get_isComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenComponent_get_isComplete_m709E527B954A24C4FC9BFA6AAEAF82332441991F_inline (ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mB0AE72F0CAE49940457AFDC332ED7869B9EADA8E (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Sequence::Remove(Holoville.HOTween.Core.ABSTweenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_Remove_mC0A8D195AF01D4D8514D7515286352256C677E31 (Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* __this, ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* ___0_p_tween, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Tweener>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44 (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_inline (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenEvent::.ctor(Holoville.HOTween.IHOTweenComponent,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenEvent__ctor_m20EB08AE4E804741D72FBED05DE8925CC9C132EF (TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* __this, RuntimeObject* ___0_p_tween, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_parms, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::Invoke(Holoville.HOTween.TweenEvent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_inline (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.Core.ABSTweenComponent::get_destroyed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenComponent_get_destroyed_m4FE7ACE9A38BE5BED05C117B3F147838083CFC01_inline (ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Tweener>::Add(T)
inline void List_1_Add_m18CB12DF523FE98B674A0D93FA002E47704F555E_inline (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.TweenWarning::Log(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenWarning_Log_mDD27E543707A5EFEDCBE8A709413D3156D9A938F (String_t* ___0_p_message, bool ___1_p_verbose, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetPoint(System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetPoint_m931F8C934DA00412C36CCE7D011F45F2F4F80555 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, int32_t* ___1_out_waypointIndex, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.Path::GizmoDraw(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_GizmoDraw_mC7CF7E5C1B7567B315E5F7BAAF2EEEC671E9A7B7 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, bool ___1_p_drawTrig, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.Core.Path::GetConstPathPercFromTimePerc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_GetConstPathPercFromTimePerc_m05DF6CE5DEE89C0D965748560E2D3E701C9D01B5 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.ABSTweenComponentParms::InitializeOwner(Holoville.HOTween.Core.ABSTweenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenComponentParms_InitializeOwner_mF88937400BEA35A760F2DC698CA459C44FE82327 (ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E* __this, ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* ___0_p_owner, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Tweener::set_isFrom(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tweener_set_isFrom_m3E5ABBC9B076D66C6006F2E422A6B15C0899CD24_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>::.ctor()
inline void List_1__ctor_m805576DBB9A4E83729241F9A56D3E75202DF9014 (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>::get_Count()
inline int32_t List_1_get_Count_mE437070E1C414F54A661124CFD73BAE04C1D0CC8_inline (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>::get_Item(System.Int32)
inline HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* List_1_get_Item_m68F0E22360E0088E4149CBCBDAE6A1E67C16CD6C (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* (*) (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenPlugin_get_initialized_mBDDF3D1051BAFBF04CAAF5600D799AE51D452397_inline (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) ;
// Holoville.HOTween.Plugins.Core.ABSTweenPlugin Holoville.HOTween.Plugins.Core.ABSTweenPlugin::CloneBasic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* ABSTweenPlugin_CloneBasic_mCA9249440372C5ECD0B8A07D357C7D005CBDF22E (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) ;
// System.String Holoville.HOTween.Core.Utils::SimpleClassName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_SimpleClassName_m04D18EADDE8255C2C1DDB00067B4F55C8EB8F5FA (Type_t* ___0_p_class, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mBB2DBA9ECB2AD6046CB4CFB717FDD7E474A439AB (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m129B1E1EDDABF00B402C93841CCA7169B8963D83_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean Holoville.HOTween.TweenParms::ValidateValue(System.Object,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B (RuntimeObject* ___0_p_val, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_p_validVals, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugVector2::.ctor(UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector2__ctor_mD38E3F80476EF22E23B0D6902C1EBFBE597E50DD (PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugVector3::.ctor(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3__ctor_mFAEE32D17D68FA03776ED57F2C2A351D19A2621B (PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugVector4::.ctor(UnityEngine.Vector4,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector4__ctor_m348E95DFFA753B9E5A4DF1A5AB25DEA5DBD84E81 (PlugVector4_t182247639032B73333E7055ED1105099DEED99DF* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m653333B63186F7A0F1430587FAF26EE4A67302D8 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m46BD79B83263F7486AA657F2BDB40E50A2198049 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugColor::.ctor(UnityEngine.Color,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor__ctor_m9587F07E6E13DF59F6DBB8795BC7408688ABF745 (PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_mA746143BEC963C76BB01E625BE07D6E7B6D83E4E (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugRect::.ctor(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugRect__ctor_m1CCAC707C847323D566B4B359BD492E0368C1750 (PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugString::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugString__ctor_mBC5CF13283AEDED7546061AFDDCD1BC3049D9D12 (PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580* __this, String_t* ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m36BBA904D1AA75C2195D945C7D808BB4404D404D (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m43E1714EE10A586A708C133F3302844B7FF2E350 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugUInt::.ctor(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugUInt__ctor_mEC3B2A37A1FD0C3E529350590B520348BB035B22 (PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE* __this, uint32_t ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.Core.PlugFloat::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugFloat__ctor_m7F3FBD710426F3E263968ABEA94E1083679AB401 (PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B* __this, float ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.Plugins.Core.ABSTweenPlugin>::Add(T)
inline void List_1_Add_m0C336245737552A850BF98B9B62610882672A341_inline (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* __this, ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*, ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::SpeedBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_SpeedBased_m7CB84221AF4EB6D777885A8023C636104A20ECCD (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, bool ___0_p_speedBased, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Ease(Holoville.HOTween.EaseType,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Ease_mB302FD168B34BF99116AA23AC925761871053D9B (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_easeType, float ___1_p_amplitude, float ___2_p_period, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Pause_mA62F1F2E657D0A048F6EB4A437ECC48EE58FA18C (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, bool ___0_p_pause, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::NewProp(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_NewProp_mA81C6C9DD2846A606A89ACAEF7281F35770DCCD0 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Prop(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Prop_m52667C136BA3A423786787A2E8B27D3BB1E25BA0 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>::.ctor()
inline void List_1__ctor_m5D2B3DB01D3330882450D6B77EB81FBDA75042CA (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Holoville.HOTween.TweenParms/HOTPropData::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HOTPropData__ctor_mEB72EC44DC80528C9615FBB1580D2208C1C27DEA (HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endValOrPlugin, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Holoville.HOTween.TweenParms/HOTPropData>::Add(T)
inline void List_1_Add_m1CBA8A3D48739CC5AF6BCBBD86D0086BB762DE1A_inline (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* __this, HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*, HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Loops(System.Int32,Holoville.HOTween.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Loops_mFD3B261B9B6C37DD20528F6E622E0145F0B23974 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_loops, int32_t ___1_p_loopType, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520 (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) ;
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Type>(T[],T)
inline int32_t Array_IndexOf_TisType_t_m2923AB55EE8374E8CABFAD02C349A1C742E82B8A (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_array, Type_t* ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*, Type_t*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared)(___0_array, ___1_value, method);
}
// System.Void Holoville.HOTween.Core.ABSTweenComponentParms::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenComponentParms__ctor_m689C96ED2202D6F626DB88BBF1F031D265508270 (ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD41ECDF321C38DCCF6A9FFC5CC98C0D1D8E2764C (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m59448E511A74D79A0BF79D683202BE9482A74801 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m17AEEBCDFBD40D0E6651BFCC18CED74FD3C3B8EF (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// Holoville.HOTween.Plugins.PlugQuaternion Holoville.HOTween.Plugins.PlugQuaternion::Beyond360(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* PlugQuaternion_Beyond360_m6130714D6E69D9FB0D5F7B24158EC0D84F42EF22 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, bool ___0_p_beyond360, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_SetChangeVal_m26AD192EF032781E0BEA82308B9784D31BE2C1D2 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) ;
// Holoville.HOTween.Core.EaseInfo Holoville.HOTween.Core.EaseInfo::GetEaseInfo(Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* EaseInfo_GetEaseInfo_m10B4224CB3CF864CE6542B884D237591EA5600D9 (int32_t ___0_p_easeType, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.Easing.EaseCurve::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseCurve__ctor_mA7CCE59E7AF1173FE998BD193C38541E3737996F (EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_p_animCurve, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.Core.TweenDelegate/EaseFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseFunc__ctor_m258028586FD5AF6078A75793226DE7D379A13EA3 (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::.ctor(System.Single,System.Single,System.Single,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar__ctor_m02C105B7A0E0EB3DB215C9C5DFE0608F13FFCD9B (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_startVal, float ___1_p_endVal, float ___2_p_duration, int32_t ___3_p_easeType, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::set_startVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_startVal_mC18F62B9C6695CA9E6912DB05EAF0220E2E13DCA (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::set_endVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_endVal_m15174EDC173B9088707D14A281564D016BB4597F (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::set_easeType(Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_easeType_m3BF13A81ECD0A5C3D2191DD8FCDB932E348F1CD0 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Holoville.HOTween.TweenVar::set_easeCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_easeCurve_m749CDEA0851FFB8FC4097A0B54F1C0E5BA43572A (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.TweenVar::Update(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_Update_mD934142543A84C65E77D050AA69EFFEA497DF7BC (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_elapsed, bool ___1_p_relative, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.TweenVar::get_endVal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenVar_get_endVal_m08BE32781CFD3603D4050A80E7FE2069A2C54E14_inline (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) ;
// System.Single Holoville.HOTween.TweenVar::get_startVal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenVar_get_startVal_m134B06EA02294D7DEEFA16725A41778E9DF269B3_inline (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) ;
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::Loops(System.Int32,Holoville.HOTween.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_Loops_mB8A56A26FF1C3FE24291B3E3FC89829191978C0F (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, int32_t ___0_p_loops, int32_t ___1_p_loopType, const RuntimeMethod* method) ;
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) ;
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeScaleIndependentUpdateU3Ed__0_MoveNext_m642A675FD815288A5F820C1C356417FA6FD070F8 (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_007b;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		float L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___time_22;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0036;
		}
	}
	{
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___time_22 = L_4;
	}

IL_0036:
	{
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		float L_6 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___time_22;
		__this->___U3CelapsedU3E5__1_2 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___time_22 = L_7;
		float L_8 = __this->___U3CelapsedU3E5__1_2;
		HOTween_DoUpdate_mE9209BD9CD358C3BEDCB5E9AE2D19C9FCD5BCE93(3, L_8, NULL);
		bool L_9;
		L_9 = HOTween_CheckClear_m1096EC36B2E75C5C1069B3E636615C4BD1F69898(NULL);
		if (L_9)
		{
			goto IL_0082;
		}
	}
	{
		__this->___U3CU3E2__current_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_0), (void*)NULL);
		__this->___U3CU3E1__state_1 = 1;
		return (bool)1;
	}

IL_0074:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_007b:
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		List_1_t49F91546A5E6849CD21CAF9281555E44FBD71FFC* L_10 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___tweens_26;
		if (L_10)
		{
			goto IL_0020;
		}
	}

IL_0082:
	{
		return (bool)0;
	}
}
// System.Object Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeScaleIndependentUpdateU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1AAC5219BED738C305C2716F9DB8FEF02AC9F3EF (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeScaleIndependentUpdateU3Ed__0_System_Collections_IEnumerator_Reset_m589A2198D792866E38A77693BBE03563BC1AF49A (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeScaleIndependentUpdateU3Ed__0_System_Collections_IEnumerator_Reset_m589A2198D792866E38A77693BBE03563BC1AF49A_RuntimeMethod_var)));
	}
}
// System.Void Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeScaleIndependentUpdateU3Ed__0_System_IDisposable_Dispose_m48394E1E7045AF4D24C37B768D0459BA251CF0EC (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeScaleIndependentUpdateU3Ed__0_System_Collections_IEnumerator_get_Current_mE0D0116FC360C92B577A621BCE57B555FB71F842 (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.HOTween/<TimeScaleIndependentUpdate>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeScaleIndependentUpdateU3Ed__0__ctor_m79AC21166CD82771DF6D78B30DB6CC41C7DED140 (U3CTimeScaleIndependentUpdateU3Ed__0_tBE835BAD8B055F7C3264FFAEA1B366EC37A7A485* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_MoveNext_m9B759D99EEDDDF2721862797B94C5234740E5390 (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CU3E2__current_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_0), (void*)NULL);
		__this->___U3CU3E1__state_1 = 1;
		return (bool)1;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_1 = (-1);
		HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC* L_2 = __this->___U3CU3E4__this_2;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = HOTween_TimeScaleIndependentUpdate_m7E58A37202376936025EC8EC6B66946A60ED4AF0(NULL);
		NullCheck(L_2);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_2, L_3, NULL);
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Object Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF22FC076C7FF17D4D58DF98408746C797A1D05A5 (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_Collections_IEnumerator_Reset_m67BD98FBCC5EFE58C75164816655B22EA5007433 (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_Collections_IEnumerator_Reset_m67BD98FBCC5EFE58C75164816655B22EA5007433_RuntimeMethod_var)));
	}
}
// System.Void Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_IDisposable_Dispose_m7CECDA3CBCDB3DDA7160FFE159B031B7FAC486B6 (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_System_Collections_IEnumerator_get_Current_mE62126A6F33F60C9E4751B9524B6300205A1AB7C (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.HOTween/<StartCoroutines_StartTimeScaleIndependentUpdate>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3__ctor_m7F59C9019DAD54A7DE99633F2C57747C4F8830AC (U3CStartCoroutines_StartTimeScaleIndependentUpdateU3Ed__3_tD674191A8A12C16AA666261C88FEF929B171DE63* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Quad::EaseIn(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quad_EaseIn_m1F12867C09D0F87BC57FDFC7504AA13CF7ED9993 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_3)), L_4)), L_5));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Quad::EaseOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quad_EaseOut_m613527EA22BFD03098F51DC43E1FECB82487B426 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_0)), L_3)), ((float)il2cpp_codegen_subtract(L_4, (2.0f))))), L_5));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Quad::EaseInOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quad_EaseInOut_mFDB4FB26541415C9EC683B2CFB3A88CFCD050570 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_time;
		float L_1 = ___3_duration;
		float L_2 = ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		___0_time = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		float L_3 = ___2_changeValue;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, (0.5f))), L_4)), L_5)), L_6));
	}

IL_0021:
	{
		float L_7 = ___2_changeValue;
		float L_8 = ___0_time;
		float L_9 = ((float)il2cpp_codegen_subtract(L_8, (1.0f)));
		___0_time = L_9;
		float L_10 = ___0_time;
		float L_11 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_7)), (0.5f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract(L_10, (2.0f))))), (1.0f))))), L_11));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Linear::EaseNone(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Linear_EaseNone_mF4515939B52D57647BEA8C86BC2B1B73B770CB7A (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_0, L_1))/L_2)), L_3));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.Core.ABSTweenComponentParms::InitializeOwner(Holoville.HOTween.Core.ABSTweenComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenComponentParms_InitializeOwner_mF88937400BEA35A760F2DC698CA459C44FE82327 (ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E* __this, ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* ___0_p_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	{
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_0 = ___0_p_owner;
		String_t* L_1 = __this->___id_0;
		NullCheck(L_0);
		L_0->____id_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____id_0), (void*)L_1);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_2 = ___0_p_owner;
		int32_t L_3 = __this->___intId_1;
		NullCheck(L_2);
		L_2->____intId_1 = L_3;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_4 = ___0_p_owner;
		bool L_5 = __this->___autoKillOnComplete_2;
		NullCheck(L_4);
		L_4->____autoKillOnComplete_2 = L_5;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_6 = ___0_p_owner;
		int32_t L_7 = __this->___updateType_3;
		NullCheck(L_6);
		L_6->____updateType_7 = L_7;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_8 = ___0_p_owner;
		float L_9 = __this->___timeScale_4;
		NullCheck(L_8);
		L_8->____timeScale_4 = L_9;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_10 = ___0_p_owner;
		int32_t L_11 = __this->___loops_5;
		NullCheck(L_10);
		L_10->____loops_5 = L_11;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_12 = ___0_p_owner;
		int32_t L_13 = __this->___loopType_6;
		NullCheck(L_12);
		L_12->____loopType_6 = L_13;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_14 = ___0_p_owner;
		bool L_15 = __this->___isPaused_7;
		NullCheck(L_14);
		L_14->____isPaused_8 = L_15;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_16 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_17 = __this->___onStart_8;
		NullCheck(L_16);
		L_16->___onStart_13 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___onStart_13), (void*)L_17);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_18 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_19 = __this->___onStartWParms_9;
		NullCheck(L_18);
		L_18->___onStartWParms_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___onStartWParms_14), (void*)L_19);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_20 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->___onStartParms_10;
		NullCheck(L_20);
		L_20->___onStartParms_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___onStartParms_15), (void*)L_21);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_22 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_23 = __this->___onUpdate_11;
		NullCheck(L_22);
		L_22->___onUpdate_16 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___onUpdate_16), (void*)L_23);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_24 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_25 = __this->___onUpdateWParms_12;
		NullCheck(L_24);
		L_24->___onUpdateWParms_17 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___onUpdateWParms_17), (void*)L_25);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_26 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->___onUpdateParms_13;
		NullCheck(L_26);
		L_26->___onUpdateParms_18 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___onUpdateParms_18), (void*)L_27);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_28 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_29 = __this->___onPluginUpdated_14;
		NullCheck(L_28);
		L_28->___onPluginUpdated_19 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___onPluginUpdated_19), (void*)L_29);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_30 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_31 = __this->___onPluginUpdatedWParms_15;
		NullCheck(L_30);
		L_30->___onPluginUpdatedWParms_20 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___onPluginUpdatedWParms_20), (void*)L_31);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_32 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = __this->___onPluginUpdatedParms_16;
		NullCheck(L_32);
		L_32->___onPluginUpdatedParms_21 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___onPluginUpdatedParms_21), (void*)L_33);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_34 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_35 = __this->___onPause_17;
		NullCheck(L_34);
		L_34->___onPause_22 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___onPause_22), (void*)L_35);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_36 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_37 = __this->___onPauseWParms_18;
		NullCheck(L_36);
		L_36->___onPauseWParms_23 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___onPauseWParms_23), (void*)L_37);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_38 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = __this->___onPauseParms_19;
		NullCheck(L_38);
		L_38->___onPauseParms_24 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___onPauseParms_24), (void*)L_39);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_40 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_41 = __this->___onPlay_20;
		NullCheck(L_40);
		L_40->___onPlay_25 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___onPlay_25), (void*)L_41);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_42 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_43 = __this->___onPlayWParms_21;
		NullCheck(L_42);
		L_42->___onPlayWParms_26 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___onPlayWParms_26), (void*)L_43);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_44 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = __this->___onPlayParms_22;
		NullCheck(L_44);
		L_44->___onPlayParms_27 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___onPlayParms_27), (void*)L_45);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_46 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_47 = __this->___onRewinded_23;
		NullCheck(L_46);
		L_46->___onRewinded_28 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___onRewinded_28), (void*)L_47);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_48 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_49 = __this->___onRewindedWParms_24;
		NullCheck(L_48);
		L_48->___onRewindedWParms_29 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___onRewindedWParms_29), (void*)L_49);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_50 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = __this->___onRewindedParms_25;
		NullCheck(L_50);
		L_50->___onRewindedParms_30 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_50->___onRewindedParms_30), (void*)L_51);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_52 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_53 = __this->___onStepComplete_26;
		NullCheck(L_52);
		L_52->___onStepComplete_31 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___onStepComplete_31), (void*)L_53);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_54 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_55 = __this->___onStepCompleteWParms_27;
		NullCheck(L_54);
		L_54->___onStepCompleteWParms_32 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___onStepCompleteWParms_32), (void*)L_55);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_56 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = __this->___onStepCompleteParms_28;
		NullCheck(L_56);
		L_56->___onStepCompleteParms_33 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&L_56->___onStepCompleteParms_33), (void*)L_57);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_58 = ___0_p_owner;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_59 = __this->___onComplete_29;
		NullCheck(L_58);
		L_58->___onComplete_34 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___onComplete_34), (void*)L_59);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_60 = ___0_p_owner;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_61 = __this->___onCompleteWParms_30;
		NullCheck(L_60);
		L_60->___onCompleteWParms_35 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_60->___onCompleteWParms_35), (void*)L_61);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_62 = ___0_p_owner;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = __this->___onCompleteParms_31;
		NullCheck(L_62);
		L_62->___onCompleteParms_36 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___onCompleteParms_36), (void*)L_63);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_64 = ___0_p_owner;
		bool L_65 = __this->___manageBehaviours_32;
		NullCheck(L_64);
		L_64->___manageBehaviours_52 = L_65;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_66 = ___0_p_owner;
		bool L_67 = __this->___manageGameObjects_33;
		NullCheck(L_66);
		L_66->___manageGameObjects_53 = L_67;
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_68 = ___0_p_owner;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_69 = __this->___managedBehavioursOn_34;
		NullCheck(L_68);
		L_68->___managedBehavioursOn_54 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&L_68->___managedBehavioursOn_54), (void*)L_69);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_70 = ___0_p_owner;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_71 = __this->___managedBehavioursOff_35;
		NullCheck(L_70);
		L_70->___managedBehavioursOff_55 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___managedBehavioursOff_55), (void*)L_71);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_72 = ___0_p_owner;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_73 = __this->___managedGameObjectsOn_36;
		NullCheck(L_72);
		L_72->___managedGameObjectsOn_56 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&L_72->___managedGameObjectsOn_56), (void*)L_73);
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_74 = ___0_p_owner;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = __this->___managedGameObjectsOff_37;
		NullCheck(L_74);
		L_74->___managedGameObjectsOff_57 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&L_74->___managedGameObjectsOff_57), (void*)L_75);
		bool L_76 = __this->___manageBehaviours_32;
		if (!L_76)
		{
			goto IL_0204;
		}
	}
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_77 = __this->___managedBehavioursOn_34;
		if (L_77)
		{
			goto IL_01db;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_01e3;
	}

IL_01db:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_78 = __this->___managedBehavioursOn_34;
		NullCheck(L_78);
		G_B4_0 = ((int32_t)(((RuntimeArray*)L_78)->max_length));
	}

IL_01e3:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_79 = __this->___managedBehavioursOff_35;
		G_B5_0 = G_B4_0;
		if (L_79)
		{
			G_B6_0 = G_B4_0;
			goto IL_01ee;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_01f6;
	}

IL_01ee:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_80 = __this->___managedBehavioursOff_35;
		NullCheck(L_80);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_80)->max_length));
		G_B7_1 = G_B6_0;
	}

IL_01f6:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B7_1, G_B7_0));
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_81 = ___0_p_owner;
		int32_t L_82 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_83 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_82);
		NullCheck(L_81);
		L_81->___managedBehavioursOriginalState_58 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&L_81->___managedBehavioursOriginalState_58), (void*)L_83);
	}

IL_0204:
	{
		bool L_84 = __this->___manageGameObjects_33;
		if (!L_84)
		{
			goto IL_0240;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_85 = __this->___managedGameObjectsOn_36;
		if (L_85)
		{
			goto IL_0217;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_021f;
	}

IL_0217:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_86 = __this->___managedGameObjectsOn_36;
		NullCheck(L_86);
		G_B12_0 = ((int32_t)(((RuntimeArray*)L_86)->max_length));
	}

IL_021f:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_87 = __this->___managedGameObjectsOff_37;
		G_B13_0 = G_B12_0;
		if (L_87)
		{
			G_B14_0 = G_B12_0;
			goto IL_022a;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0232;
	}

IL_022a:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_88 = __this->___managedGameObjectsOff_37;
		NullCheck(L_88);
		G_B15_0 = ((int32_t)(((RuntimeArray*)L_88)->max_length));
		G_B15_1 = G_B14_0;
	}

IL_0232:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B15_1, G_B15_0));
		ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* L_89 = ___0_p_owner;
		int32_t L_90 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_91 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_90);
		NullCheck(L_89);
		L_89->___managedGameObjectsOriginalState_59 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&L_89->___managedGameObjectsOriginalState_59), (void*)L_91);
	}

IL_0240:
	{
		return;
	}
}
// System.Void Holoville.HOTween.Core.ABSTweenComponentParms::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSTweenComponentParms__ctor_m689C96ED2202D6F626DB88BBF1F031D265508270 (ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___id_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___intId_1 = (-1);
		__this->___autoKillOnComplete_2 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defUpdateType_8;
		__this->___updateType_3 = L_0;
		float L_1 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defTimeScale_9;
		__this->___timeScale_4 = L_1;
		__this->___loops_5 = 1;
		int32_t L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defLoopType_13;
		__this->___loopType_6 = L_2;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Holoville.HOTween.PathType Holoville.HOTween.Plugins.PlugVector3Path::get_pathType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpathTypeU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::set_pathType(Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpathTypeU3Ek__BackingField_52 = L_0;
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugVector3Path::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugVector3Path_get_startVal_m4B0C3A1FD61836CB35759B84E5C97CE5CEDA4DED (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::set_startVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_set_startVal_m8D9E885781CE7F85A304FB17058D4B60A5A48B60 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_2);
		RuntimeObject* L_3 = ___0_value;
		V_0 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_3, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		__this->___points_35 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_35), (void*)L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___points_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		NullCheck(L_8);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_6, (RuntimeArray*)L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___points_35;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_9, NULL);
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		V_1 = L_11;
		__this->___typedStartVal_34 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_14);
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugVector3Path::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugVector3Path_get_endVal_m5DA3B922AF77D4F016370F19F60CBDBD063245D4 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::set_endVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_set_endVal_m105459D2CDA35CD6650A04F2CFB690BE1188200E (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		V_1 = L_3;
		__this->___typedStartVal_34 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_5);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_6);
		return;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_value;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_7);
		RuntimeObject* L_8 = ___0_value;
		V_0 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)Castclass((RuntimeObject*)L_8, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_0;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
		__this->___points_35 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_35), (void*)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___points_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_11, (RuntimeArray*)L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.ctor(UnityEngine.Vector3[],Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__ctor_m37819BD10BCA79516AEE172D22B2F527ADD3FA9B (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_p_path, int32_t ___1_p_type, const RuntimeMethod* method) 
{
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		__this->___changePerc_47 = (1.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_p_path;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, (RuntimeObject*)L_0, (bool)0, NULL);
		int32_t L_1 = ___1_p_type;
		PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.ctor(UnityEngine.Vector3[],Holoville.HOTween.EaseType,Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__ctor_mA8B4A7B324A253AEAF01022898A621847E19AA5F (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_p_path, int32_t ___1_p_easeType, int32_t ___2_p_type, const RuntimeMethod* method) 
{
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		__this->___changePerc_47 = (1.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_p_path;
		int32_t L_1 = ___1_p_easeType;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, (RuntimeObject*)L_0, L_1, (bool)0, NULL);
		int32_t L_2 = ___2_p_type;
		PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.ctor(UnityEngine.Vector3[],System.Boolean,Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__ctor_m3263C04904CBAF1C7F7B41FCA8433F2DAF755798 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_p_path, bool ___1_p_isRelative, int32_t ___2_p_type, const RuntimeMethod* method) 
{
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		__this->___changePerc_47 = (1.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_p_path;
		bool L_1 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, (RuntimeObject*)L_0, L_1, NULL);
		int32_t L_2 = ___2_p_type;
		PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.ctor(UnityEngine.Vector3[],Holoville.HOTween.EaseType,System.Boolean,Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__ctor_m00963E291FC0A467FB3FD3F790BBF13B6315AA06 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_p_path, int32_t ___1_p_easeType, bool ___2_p_isRelative, int32_t ___3_p_type, const RuntimeMethod* method) 
{
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		__this->___changePerc_47 = (1.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_p_path;
		int32_t L_1 = ___1_p_easeType;
		bool L_2 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, (RuntimeObject*)L_0, L_1, L_2, NULL);
		int32_t L_3 = ___3_p_type;
		PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.ctor(UnityEngine.Vector3[],UnityEngine.AnimationCurve,System.Boolean,Holoville.HOTween.PathType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__ctor_m551A1C03E52BCF15D5A18E666D433B912B22FCD4 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_p_path, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, int32_t ___3_p_type, const RuntimeMethod* method) 
{
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		__this->___changePerc_47 = (1.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_p_path;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_p_easeAnimCurve;
		bool L_2 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, (RuntimeObject*)L_0, L_1, L_2, NULL);
		int32_t L_3 = ___3_p_type;
		PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::Init(Holoville.HOTween.Tweener,System.String,Holoville.HOTween.EaseType,System.Type,System.Reflection.PropertyInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_Init_m85E520A75C4F71095E071D4B01BAE0008A06A651 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_p_tweenObj, String_t* ___1_p_propertyName, int32_t ___2_p_easeType, Type_t* ___3_p_targetType, PropertyInfo_t* ___4_p_propertyInfo, FieldInfo_t* ___5_p_fieldInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22019CCE5271D6EB84252727A240AB258D6BE609);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		bool L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ___0_p_tweenObj;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8 = (bool)0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_6 = ___0_p_tweenObj;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		String_t* L_10 = ___1_p_propertyName;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral22019CCE5271D6EB84252727A240AB258D6BE609);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral22019CCE5271D6EB84252727A240AB258D6BE609);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_12, NULL);
		TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_13, NULL);
	}

IL_004e:
	{
		String_t* L_14 = ___1_p_propertyName;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
		__this->___usesLocalPosition_45 = L_15;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_16 = ___0_p_tweenObj;
		String_t* L_17 = ___1_p_propertyName;
		int32_t L_18 = ___2_p_easeType;
		Type_t* L_19 = ___3_p_targetType;
		PropertyInfo_t* L_20 = ___4_p_propertyInfo;
		FieldInfo_t* L_21 = ___5_p_fieldInfo;
		ABSTweenPlugin_Init_mA17A13339EA1B9D8A939B5E8144C57FE9342CC29(__this, L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::ClosePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_ClosePath_m0832EA5BB568B5780C96EFA67DD46D636CAEED70 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_0;
		L_0 = PlugVector3Path_ClosePath_mFF30CD58A7ADBE3860716938AE1D0B590EECE6D2(__this, (bool)1, NULL);
		return L_0;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::ClosePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_ClosePath_mFF30CD58A7ADBE3860716938AE1D0B590EECE6D2 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_close, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_close;
		__this->___isClosedPath_37 = L_0;
		return __this;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_mD014C263C462386E51EB32BFE838C361BF2F6358 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_0;
		L_0 = PlugVector3Path_OrientToPath_mDD2FD17CAE023690D586637E863EAB2F75BEDCAA(__this, (bool)1, NULL);
		return L_0;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_mDD2FD17CAE023690D586637E863EAB2F75BEDCAA (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_orient, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_orient;
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_1;
		L_1 = PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A(__this, L_0, (9.99999975E-05f), 0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_m072038B95C72907ED1493F851B6B99ACA381D037 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_lookAhead, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_lookAhead;
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_1;
		L_1 = PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A(__this, (bool)1, L_0, 0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(Holoville.HOTween.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_m77DCBF04B8A1404ED30A5EAE4FF6F0C0A5A5F1C7 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_p_lockRotationAxis, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_lockRotationAxis;
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_1;
		L_1 = PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A(__this, (bool)1, (9.99999975E-05f), L_0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Single,Holoville.HOTween.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_m0EEE59314C9A3E74AE29212F82A2AC7511885A3A (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_lookAhead, int32_t ___1_p_lockRotationAxis, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_lookAhead;
		int32_t L_1 = ___1_p_lockRotationAxis;
		PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* L_2;
		L_2 = PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A(__this, (bool)1, L_0, L_1, NULL);
		return L_2;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::OrientToPath(System.Boolean,System.Single,Holoville.HOTween.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_OrientToPath_mD952BB4DB29845EC1FBA4A84CFAC615054204F0A (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_orient, float ___1_p_lookAhead, int32_t ___2_p_lockRotationAxis, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_orient;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->___orientType_40 = 1;
	}

IL_000a:
	{
		float L_1 = ___1_p_lookAhead;
		__this->___lookAheadVal_41 = L_1;
		float L_2 = __this->___lookAheadVal_41;
		if ((!(((float)L_2) < ((float)(9.99999975E-05f)))))
		{
			goto IL_002b;
		}
	}
	{
		__this->___lookAheadVal_41 = (9.99999975E-05f);
		goto IL_0043;
	}

IL_002b:
	{
		float L_3 = __this->___lookAheadVal_41;
		if ((!(((float)L_3) > ((float)(0.999899983f)))))
		{
			goto IL_0043;
		}
	}
	{
		__this->___lookAheadVal_41 = (0.999899983f);
	}

IL_0043:
	{
		int32_t L_4 = ___2_p_lockRotationAxis;
		__this->___lockRotationAxis_43 = L_4;
		return __this;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_LookAt_m8CD09CFD1B2D84C5C90CCFF0D966B42182E36789 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_p_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		__this->___orientType_40 = 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_p_transform;
		__this->___lookTrans_49 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookTrans_49), (void*)L_2);
	}

IL_0017:
	{
		return __this;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_LookAt_m17921680077E3EC977D80737B9D641B8F85D3A48 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_position, const RuntimeMethod* method) 
{
	{
		__this->___orientType_40 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_position;
		__this->___lookPos_48 = L_0;
		__this->___lookTrans_49 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookTrans_49), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		return __this;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::LockPosition(Holoville.HOTween.Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_LockPosition_m1B4781FE2B6D9F60826A1BBC1A1E5D4A6112D2B5 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_p_lockAxis, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_lockAxis;
		__this->___lockPositionAxis_42 = L_0;
		return __this;
	}
}
// Holoville.HOTween.Plugins.PlugVector3Path Holoville.HOTween.Plugins.PlugVector3Path::Is2D(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* PlugVector3Path_Is2D_mBC9A8CB4F8AE3A9C476F84F9F3A5278C4DEFEF74 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, bool ___0_p_isSideScroller, const RuntimeMethod* method) 
{
	{
		__this->___is2D_38 = (bool)1;
		bool L_0 = ___0_p_isSideScroller;
		__this->___is2DsideScroller_39 = L_0;
		return __this;
	}
}
// System.Single Holoville.HOTween.Plugins.PlugVector3Path::GetSpeedBasedDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugVector3Path_GetSpeedBasedDuration_mF385E24D04D41BCA0487141CC86AAC2DF468594E (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_speed, const RuntimeMethod* method) 
{
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_0 = __this->___path_31;
		NullCheck(L_0);
		float L_1 = L_0->___pathLength_0;
		float L_2 = ___0_p_speed;
		return ((float)(L_1/L_2));
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_SetChangeVal_mED72B4F145B086DCAA6008DDA4F396A507EC444D (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t G_B6_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B36_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B35_0 = NULL;
	float G_B37_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B37_1 = NULL;
	float G_B39_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B39_1 = NULL;
	float G_B38_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B38_1 = NULL;
	float G_B40_0 = 0.0f;
	float G_B40_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B40_2 = NULL;
	float G_B42_0 = 0.0f;
	float G_B42_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B42_2 = NULL;
	float G_B41_0 = 0.0f;
	float G_B41_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B41_2 = NULL;
	float G_B43_0 = 0.0f;
	float G_B43_1 = 0.0f;
	float G_B43_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B43_3 = NULL;
	{
		int32_t L_0 = __this->___orientType_40;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___orientTrans_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_3 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_3, NULL);
		__this->___orientTrans_50 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)IsInstClass((RuntimeObject*)L_4, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orientTrans_50), (void*)((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)IsInstClass((RuntimeObject*)L_4, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___orientTrans_50;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		float L_7 = L_6.___z_4;
		__this->___orZ_51 = L_7;
	}

IL_0042:
	{
		V_1 = 1;
		bool L_8 = __this->___isClosedPath_37;
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 1;
	}

IL_0050:
	{
		V_2 = G_B6_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___points_35;
		NullCheck(L_9);
		V_3 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		bool L_10 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_10)
		{
			goto IL_00cf;
		}
	}
	{
		__this->___hasAdditionalStartingP_33 = (bool)0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___points_35;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___typedStartVal_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_4 = L_14;
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_15, 2)), L_16)));
		V_0 = L_17;
		V_5 = 0;
		goto IL_00c5;
	}

IL_0097:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		int32_t L_19 = V_5;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->___points_35;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))))) = L_25;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c5:
	{
		int32_t L_27 = V_5;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_01ff;
	}

IL_00cf:
	{
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		V_6 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_29, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = __this->___points_35;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_30, L_32, NULL);
		V_7 = L_33;
		float L_34 = (&V_7)->___x_2;
		if ((!(((float)L_34) < ((float)(0.0f)))))
		{
			goto IL_0113;
		}
	}
	{
		float L_35 = (&V_7)->___x_2;
		(&V_7)->___x_2 = ((-L_35));
	}

IL_0113:
	{
		float L_36 = (&V_7)->___y_3;
		if ((!(((float)L_36) < ((float)(0.0f)))))
		{
			goto IL_0130;
		}
	}
	{
		float L_37 = (&V_7)->___y_3;
		(&V_7)->___y_3 = ((-L_37));
	}

IL_0130:
	{
		float L_38 = (&V_7)->___z_4;
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_014d;
		}
	}
	{
		float L_39 = (&V_7)->___z_4;
		(&V_7)->___z_4 = ((-L_39));
	}

IL_014d:
	{
		float L_40 = (&V_7)->___x_2;
		if ((!(((float)L_40) < ((float)(0.00100000005f)))))
		{
			goto IL_018b;
		}
	}
	{
		float L_41 = (&V_7)->___y_3;
		if ((!(((float)L_41) < ((float)(0.00100000005f)))))
		{
			goto IL_018b;
		}
	}
	{
		float L_42 = (&V_7)->___z_4;
		if ((!(((float)L_42) < ((float)(0.00100000005f)))))
		{
			goto IL_018b;
		}
	}
	{
		__this->___hasAdditionalStartingP_33 = (bool)0;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_43, 2)), L_44)));
		V_0 = L_45;
		goto IL_01ce;
	}

IL_018b:
	{
		__this->___hasAdditionalStartingP_33 = (bool)1;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_46, 3)), L_47)));
		V_0 = L_48;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_49 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_49);
		bool L_50;
		L_50 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_49, NULL);
		if (!L_50)
		{
			goto IL_01be;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = V_0;
		NullCheck(L_52);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_6;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_52)->max_length)), 2))))) = L_53;
		goto IL_01ce;
	}

IL_01be:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = V_0;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_6;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_55;
		V_1 = 2;
	}

IL_01ce:
	{
		V_8 = 0;
		goto IL_01fa;
	}

IL_01d3:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = V_0;
		int32_t L_57 = V_8;
		int32_t L_58 = V_1;
		NullCheck(L_56);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = __this->___points_35;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_57, L_58))))) = L_61;
		int32_t L_62 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01fa:
	{
		int32_t L_63 = V_8;
		int32_t L_64 = V_3;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_01d3;
		}
	}

IL_01ff:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = V_0;
		NullCheck(L_65);
		V_3 = ((int32_t)(((RuntimeArray*)L_65)->max_length));
		bool L_66 = __this->___isClosedPath_37;
		if (!L_66)
		{
			goto IL_0225;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = V_0;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_69 = V_0;
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_68, 2))))) = L_70;
	}

IL_0225:
	{
		bool L_71 = __this->___isClosedPath_37;
		if (!L_71)
		{
			goto IL_0263;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = V_0;
		NullCheck(L_72);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_74, 3))))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_75;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = V_0;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = V_0;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_77, 1))))) = L_79;
		goto IL_02b9;
	}

IL_0263:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = V_0;
		NullCheck(L_80);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = V_0;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_82;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_0;
		int32_t L_84 = V_3;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_84, 2))))));
		V_9 = L_85;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = V_0;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_88, 3))))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_86, L_89, NULL);
		V_10 = L_90;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_91 = V_0;
		int32_t L_92 = V_3;
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_94, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_92, 1))))) = L_95;
	}

IL_02b9:
	{
		int32_t L_96 = __this->___lockPositionAxis_42;
		if (!L_96)
		{
			goto IL_0360;
		}
	}
	{
		int32_t L_97 = __this->___lockPositionAxis_42;
		V_11 = (bool)((((int32_t)((int32_t)((int32_t)L_97&2))) == ((int32_t)2))? 1 : 0);
		int32_t L_98 = __this->___lockPositionAxis_42;
		V_12 = (bool)((((int32_t)((int32_t)((int32_t)L_98&4))) == ((int32_t)4))? 1 : 0);
		int32_t L_99 = __this->___lockPositionAxis_42;
		V_13 = (bool)((((int32_t)((int32_t)((int32_t)L_99&8))) == ((int32_t)8))? 1 : 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = __this->___typedStartVal_34;
		V_14 = L_100;
		V_15 = 0;
		goto IL_035b;
	}

IL_02f8:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_101 = V_0;
		int32_t L_102 = V_15;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102))));
		V_16 = L_103;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = V_0;
		int32_t L_105 = V_15;
		NullCheck(L_104);
		bool L_106 = V_11;
		G_B35_0 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
		if (L_106)
		{
			G_B36_0 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
			goto IL_031c;
		}
	}
	{
		float L_107 = (&V_16)->___x_2;
		G_B37_0 = L_107;
		G_B37_1 = G_B35_0;
		goto IL_0323;
	}

IL_031c:
	{
		float L_108 = (&V_14)->___x_2;
		G_B37_0 = L_108;
		G_B37_1 = G_B36_0;
	}

IL_0323:
	{
		bool L_109 = V_12;
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		if (L_109)
		{
			G_B39_0 = G_B37_0;
			G_B39_1 = G_B37_1;
			goto IL_0330;
		}
	}
	{
		float L_110 = (&V_16)->___y_3;
		G_B40_0 = L_110;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		goto IL_0337;
	}

IL_0330:
	{
		float L_111 = (&V_14)->___y_3;
		G_B40_0 = L_111;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
	}

IL_0337:
	{
		bool L_112 = V_13;
		G_B41_0 = G_B40_0;
		G_B41_1 = G_B40_1;
		G_B41_2 = G_B40_2;
		if (L_112)
		{
			G_B42_0 = G_B40_0;
			G_B42_1 = G_B40_1;
			G_B42_2 = G_B40_2;
			goto IL_0344;
		}
	}
	{
		float L_113 = (&V_16)->___z_4;
		G_B43_0 = L_113;
		G_B43_1 = G_B41_0;
		G_B43_2 = G_B41_1;
		G_B43_3 = G_B41_2;
		goto IL_034b;
	}

IL_0344:
	{
		float L_114 = (&V_14)->___z_4;
		G_B43_0 = L_114;
		G_B43_1 = G_B42_0;
		G_B43_2 = G_B42_1;
		G_B43_3 = G_B42_2;
	}

IL_034b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_115), G_B43_2, G_B43_1, G_B43_0, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)G_B43_3 = L_115;
		int32_t L_116 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_035b:
	{
		int32_t L_117 = V_15;
		int32_t L_118 = V_3;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_02f8;
		}
	}

IL_0360:
	{
		int32_t L_119;
		L_119 = PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_120 = V_0;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_121 = (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF*)il2cpp_codegen_object_new(Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF_il2cpp_TypeInfo_var);
		NullCheck(L_121);
		Path__ctor_mB08F108F59563B544D546B8A9EB2105FD46D4588(L_121, L_119, L_120, NULL);
		__this->___path_31 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_31), (void*)L_121);
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_122 = __this->___path_31;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_123 = __this->___path_31;
		NullCheck(L_123);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = L_123->___path_4;
		NullCheck(L_124);
		NullCheck(L_122);
		Path_StoreTimeToLenTables_mF3AFBB4D067AB81A9B6EE85D91D340361D198EC9(L_122, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_124)->max_length)), ((int32_t)16))), NULL);
		bool L_125 = __this->___isClosedPath_37;
		if (L_125)
		{
			goto IL_03ba;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_126 = V_0;
		int32_t L_127 = V_3;
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_127, 2))))));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_129 = V_0;
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_128, L_130, NULL);
		__this->___diffChangeVal_36 = L_131;
	}

IL_03ba:
	{
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::SetIncremental(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_SetIncremental_m4BDBAA71BDBA0EE9727AB9D0AADB8CCD2E85A828 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_p_diffIncr, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->___isClosedPath_37;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_1 = __this->___path_31;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = L_1->___path_4;
		V_0 = L_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		V_2 = 0;
		goto IL_0045;
	}

IL_001d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___diffChangeVal_36;
		int32_t L_9 = ___0_p_diffIncr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, ((float)L_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_10, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001d;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_15 = __this->___path_31;
		NullCheck(L_15);
		L_15->___changed_5 = (bool)1;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::SetIncrementalRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_SetIncrementalRestart_m75DEE726EF7609EAFCF7892B0C22D78F46D59EF3 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___typedStartVal_34;
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_startVal(System.Object) */, __this, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___typedStartVal_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_1 = L_4;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_5 = __this->___path_31;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5->___path_4;
		V_2 = L_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_2;
		NullCheck(L_7);
		V_3 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		V_4 = 0;
		goto IL_0054;
	}

IL_0035:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_10 = L_13;
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_4;
		int32_t L_16 = V_3;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0035;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_17 = __this->___path_31;
		NullCheck(L_17);
		L_17->___changed_5 = (bool)1;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::DoUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_DoUpdate_m48865BA96D2EEC21A396216C47D336A71EBD7AC4 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_totElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	float G_B19_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	int32_t G_B49_0 = 0;
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ease_7;
		float L_1 = ___0_p_totElapsed;
		float L_2 = __this->___startPerc_46;
		float L_3 = __this->___changePerc_47;
		float L_4 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_5);
		float L_6;
		L_6 = Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline(L_5, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_7 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_7);
		float L_8;
		L_8 = Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline(L_7, NULL);
		NullCheck(L_0);
		float L_9;
		L_9 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_0, L_1, L_2, L_3, L_4, L_6, L_8, NULL);
		__this->___pathPerc_32 = L_9;
		float L_10 = __this->___pathPerc_32;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_11 = __this->___path_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = PlugVector3Path_GetConstPointOnPath_m00566EF01E12762EB32F6317A830E61461A670E4(__this, L_10, (bool)1, L_11, (&V_0), NULL);
		V_1 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(18 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetValue(UnityEngine.Vector3) */, __this, L_13);
		int32_t L_14 = __this->___orientType_40;
		if (!L_14)
		{
			goto IL_0375;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___orientTrans_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0375;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___orientTrans_50;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_17, NULL);
		if (L_18)
		{
			goto IL_0375;
		}
	}
	{
		bool L_19 = __this->___usesLocalPosition_45;
		if (L_19)
		{
			goto IL_008f;
		}
	}
	{
		G_B6_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		goto IL_009a;
	}

IL_008f:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___orientTrans_50;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		G_B6_0 = L_21;
	}

IL_009a:
	{
		V_2 = G_B6_0;
		int32_t L_22 = __this->___orientType_40;
		V_10 = L_22;
		int32_t L_23 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, 1)))
		{
			case 0:
			{
				goto IL_010e;
			}
			case 1:
			{
				goto IL_00d0;
			}
			case 2:
			{
				goto IL_00b9;
			}
		}
	}
	{
		return;
	}

IL_00b9:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___lookPos_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_24);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_24, L_25, L_26, NULL);
		return;
	}

IL_00d0:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___orientTrans_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0375;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___orientTrans_50;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_29, NULL);
		if (L_30)
		{
			goto IL_0375;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___orientTrans_50;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___lookTrans_49;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_31);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_31, L_33, L_34, NULL);
		return;
	}

IL_010e:
	{
		int32_t L_35;
		L_35 = PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186_inline(__this, NULL);
		if (L_35)
		{
			goto IL_015f;
		}
	}
	{
		float L_36 = __this->___lookAheadVal_41;
		if ((!(((float)L_36) <= ((float)(9.99999975E-05f)))))
		{
			goto IL_015f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_38 = __this->___path_31;
		NullCheck(L_38);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = L_38->___path_4;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_41, NULL);
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_43 = __this->___path_31;
		NullCheck(L_43);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = L_43->___path_4;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_45, 1))))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_46, NULL);
		V_3 = L_47;
		goto IL_019e;
	}

IL_015f:
	{
		float L_48 = __this->___pathPerc_32;
		float L_49 = __this->___lookAheadVal_41;
		V_4 = ((float)il2cpp_codegen_add(L_48, L_49));
		float L_50 = V_4;
		if ((!(((float)L_50) > ((float)(1.0f)))))
		{
			goto IL_0190;
		}
	}
	{
		bool L_51 = __this->___isClosedPath_37;
		if (L_51)
		{
			goto IL_0186;
		}
	}
	{
		G_B19_0 = (1.00000095f);
		goto IL_018e;
	}

IL_0186:
	{
		float L_52 = V_4;
		G_B19_0 = ((float)il2cpp_codegen_subtract(L_52, (1.0f)));
	}

IL_018e:
	{
		V_4 = G_B19_0;
	}

IL_0190:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_53 = __this->___path_31;
		float L_54 = V_4;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(L_53, L_54, NULL);
		V_3 = L_55;
	}

IL_019e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = __this->___orientTrans_50;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_56, NULL);
		V_5 = L_57;
		bool L_58 = __this->___usesLocalPosition_45;
		if (!L_58)
		{
			goto IL_01c4;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_01c4;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_3;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_61, L_62, NULL);
		V_3 = L_63;
	}

IL_01c4:
	{
		int32_t L_64 = __this->___lockRotationAxis_43;
		if (!L_64)
		{
			goto IL_02cd;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = __this->___orientTrans_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_66)
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_67 = __this->___lockRotationAxis_43;
		if ((!(((uint32_t)((int32_t)((int32_t)L_67&2))) == ((uint32_t)2))))
		{
			goto IL_0233;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_3;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_68, L_69, NULL);
		V_6 = L_70;
		(&V_6)->___y_3 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_6;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_71, L_72, NULL);
		V_3 = L_73;
		bool L_74 = __this->___usesLocalPosition_45;
		if (!L_74)
		{
			goto IL_0224;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_75, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_76)
		{
			goto IL_022b;
		}
	}

IL_0224:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B31_0 = L_77;
		goto IL_0231;
	}

IL_022b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = V_2;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_78, NULL);
		G_B31_0 = L_79;
	}

IL_0231:
	{
		V_5 = G_B31_0;
	}

IL_0233:
	{
		int32_t L_80 = __this->___lockRotationAxis_43;
		if ((!(((uint32_t)((int32_t)((int32_t)L_80&4))) == ((uint32_t)4))))
		{
			goto IL_0283;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_3;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_81, L_82, NULL);
		V_7 = L_83;
		float L_84 = (&V_7)->___z_4;
		if ((!(((float)L_84) < ((float)(0.0f)))))
		{
			goto IL_0269;
		}
	}
	{
		float L_85 = (&V_7)->___z_4;
		(&V_7)->___z_4 = ((-L_85));
	}

IL_0269:
	{
		(&V_7)->___x_2 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_7;
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_86, L_87, NULL);
		V_3 = L_88;
	}

IL_0283:
	{
		int32_t L_89 = __this->___lockRotationAxis_43;
		if ((!(((uint32_t)((int32_t)((int32_t)L_89&8))) == ((uint32_t)8))))
		{
			goto IL_02cd;
		}
	}
	{
		bool L_90 = __this->___usesLocalPosition_45;
		if (!L_90)
		{
			goto IL_02ae;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_91, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_92)
		{
			goto IL_02ae;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_93, L_94, NULL);
		V_5 = L_95;
		goto IL_02c0;
	}

IL_02ae:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_96, L_97, NULL);
		V_5 = L_98;
	}

IL_02c0:
	{
		float L_99 = __this->___orZ_51;
		(&V_5)->___z_4 = L_99;
	}

IL_02cd:
	{
		bool L_100 = __this->___is2D_38;
		if (!L_100)
		{
			goto IL_0367;
		}
	}
	{
		V_8 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->___orientTrans_50;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_3;
		float L_104;
		L_104 = Utils_GetAngle2D_mF80CAB3D76CBF1BAFCCCA8864040A2439BB8D04D(L_102, L_103, NULL);
		V_9 = L_104;
		float L_105 = V_9;
		if ((!(((float)L_105) < ((float)(0.0f)))))
		{
			goto IL_0305;
		}
	}
	{
		float L_106 = V_9;
		V_9 = ((float)il2cpp_codegen_add((360.0f), L_106));
	}

IL_0305:
	{
		bool L_107 = __this->___is2DsideScroller_39;
		if (!L_107)
		{
			goto IL_034d;
		}
	}
	{
		float L_108 = (&V_3)->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = __this->___orientTrans_50;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_109, NULL);
		float L_111 = L_110.___x_2;
		if ((((float)L_108) < ((float)L_111)))
		{
			goto IL_0329;
		}
	}
	{
		G_B49_0 = 0;
		goto IL_032e;
	}

IL_0329:
	{
		G_B49_0 = ((int32_t)180);
	}

IL_032e:
	{
		V_8 = ((float)G_B49_0);
		float L_112 = V_9;
		if ((!(((float)L_112) > ((float)(90.0f)))))
		{
			goto IL_034d;
		}
	}
	{
		float L_113 = V_9;
		if ((!(((float)L_113) < ((float)(270.0f)))))
		{
			goto IL_034d;
		}
	}
	{
		float L_114 = V_9;
		V_9 = ((float)il2cpp_codegen_subtract((180.0f), L_114));
	}

IL_034d:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115 = __this->___orientTrans_50;
		float L_116 = V_8;
		float L_117 = V_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118;
		L_118 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_116, L_117, NULL);
		NullCheck(L_115);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_115, L_118, NULL);
		return;
	}

IL_0367:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119 = __this->___orientTrans_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_5;
		NullCheck(L_119);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_119, L_120, L_121, NULL);
	}

IL_0375:
	{
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_Rewind_m1F677A68251CCFA24A43639E764E1BBC763B003C (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isPartialPath_44;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		VirtualActionInvoker1< float >::Invoke(11 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::DoUpdate(System.Single) */, __this, (0.0f));
		return;
	}

IL_0014:
	{
		ABSTweenPlugin_Rewind_m738D072B63A84CA9B808B389B7DF22F35A3E4FBC(__this, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_Complete_m23E64294CE7F24812B449861F669C82231288B4C (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isPartialPath_44;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		VirtualActionInvoker1< float >::Invoke(11 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::DoUpdate(System.Single) */, __this, L_1);
		return;
	}

IL_0015:
	{
		ABSTweenPlugin_Complete_m25B5AD6CE114E6224C2BC80D575E5148753855DB(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::GetConstPointOnPath(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlugVector3Path_GetConstPointOnPath_m3DB8D1AEEE73E3F743F4A988051AA2D3CB0F39F5 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float L_0 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = PlugVector3Path_GetConstPointOnPath_m00566EF01E12762EB32F6317A830E61461A670E4(__this, L_0, (bool)0, (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF*)NULL, (&V_0), NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Plugins.PlugVector3Path::GetConstPointOnPath(System.Single,System.Boolean,Holoville.HOTween.Core.Path,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlugVector3Path_GetConstPointOnPath_m00566EF01E12762EB32F6317A830E61461A670E4 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_t, bool ___1_p_updatePathPerc, Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* ___2_p_path, int32_t* ___3_out_waypointIndex, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_p_updatePathPerc;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_1 = ___2_p_path;
		float L_2 = ___0_t;
		float* L_3 = (&__this->___pathPerc_32);
		int32_t* L_4 = ___3_out_waypointIndex;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Path_GetConstPoint_mC350B3F2078D6AB8F49B9C5B063BDD6C79B0654C(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		int32_t* L_6 = ___3_out_waypointIndex;
		*((int32_t*)L_6) = (int32_t)(-1);
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_7 = __this->___path_31;
		float L_8 = ___0_t;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Path_GetConstPoint_m1DADD874A6EC9E06D13C398963002B81F9017653(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Single Holoville.HOTween.Plugins.PlugVector3Path::GetWaypointsLengthPercentage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugVector3Path_GetWaypointsLengthPercentage_mDF05291672005705866E5DF32E22126BA69D73E7 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_p_pathWaypointId0, int32_t ___1_p_pathWaypointId1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186_inline(__this, NULL);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)0))))
		{
			goto IL_0041;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_2 = __this->___path_31;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2->___waypointsLength_1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_4 = __this->___path_31;
		NullCheck(L_4);
		Path_StoreWaypointsLengths_mEB80B748EAE6EFC9BF2FB10BB6B7053B4CE279A4(L_4, ((int32_t)16), NULL);
	}

IL_0025:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_5 = __this->___path_31;
		NullCheck(L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = L_5->___timesTable_2;
		int32_t L_7 = ___1_p_pathWaypointId1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_10 = __this->___path_31;
		NullCheck(L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_10->___timesTable_2;
		int32_t L_12 = ___0_p_pathWaypointId0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return ((float)il2cpp_codegen_subtract(L_9, L_14));
	}

IL_0041:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_15 = __this->___path_31;
		NullCheck(L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_15->___waypointsLength_1;
		if (L_16)
		{
			goto IL_005b;
		}
	}
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_17 = __this->___path_31;
		NullCheck(L_17);
		Path_StoreWaypointsLengths_mEB80B748EAE6EFC9BF2FB10BB6B7053B4CE279A4(L_17, ((int32_t)16), NULL);
	}

IL_005b:
	{
		V_0 = (0.0f);
		int32_t L_18 = ___0_p_pathWaypointId0;
		V_1 = L_18;
		goto IL_0079;
	}

IL_0065:
	{
		float L_19 = V_0;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_20 = __this->___path_31;
		NullCheck(L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = L_20->___waypointsLength_1;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((float)il2cpp_codegen_add(L_19, L_24));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0079:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = ___1_p_pathWaypointId1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		float L_28 = V_0;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_29 = __this->___path_31;
		NullCheck(L_29);
		float L_30 = L_29->___pathLength_0;
		V_2 = ((float)(L_28/L_30));
		float L_31 = V_2;
		if ((!(((float)L_31) > ((float)(1.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		V_2 = (1.0f);
	}

IL_0099:
	{
		float L_32 = V_2;
		return L_32;
	}
}
// System.Boolean Holoville.HOTween.Plugins.PlugVector3Path::IsWaypoint(UnityEngine.Vector3,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlugVector3Path_IsWaypoint_m472AD3A3941053F4205F5D99BFF3FE0797FC294D (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, int32_t* ___1_waypointIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_0 = __this->___path_31;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = L_0->___path_4;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_1 = 0;
		goto IL_00c1;
	}

IL_0015:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_2 = __this->___path_31;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2->___path_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		float L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___x_2;
		float L_6 = (&___0_position)->___x_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_7 = __this->___path_31;
		NullCheck(L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = L_7->___path_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___y_3;
		float L_11 = (&___0_position)->___y_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_12 = __this->___path_31;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_12->___path_4;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		float L_16 = (&___0_position)->___z_4;
		V_4 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		float L_17 = V_2;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0081:
	{
		float L_18 = V_3;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		V_3 = (0.0f);
	}

IL_008f:
	{
		float L_19 = V_4;
		if ((!(((float)L_19) < ((float)(0.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		V_4 = (0.0f);
	}

IL_009f:
	{
		float L_20 = V_2;
		if ((!(((float)L_20) < ((float)(0.00100000005f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_21 = V_3;
		if ((!(((float)L_21) < ((float)(0.00100000005f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_22 = V_4;
		if ((!(((float)L_22) < ((float)(0.00100000005f)))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t* L_23 = ___1_waypointIndex;
		int32_t L_24 = V_1;
		*((int32_t*)L_23) = (int32_t)L_24;
		return (bool)1;
	}

IL_00bd:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00c1:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_28 = ___1_waypointIndex;
		*((int32_t*)L_28) = (int32_t)(-1);
		return (bool)0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::SwitchToPartialPath(System.Single,Holoville.HOTween.EaseType,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_SwitchToPartialPath_m034A0037CCCB934C96CD364C7E3A2944D610D00A (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_duration, int32_t ___1_p_easeType, float ___2_p_partialStartPerc, float ___3_p_partialChangePerc, const RuntimeMethod* method) 
{
	{
		__this->___isPartialPath_44 = (bool)1;
		float L_0 = ___0_p_duration;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2 = L_0;
		int32_t L_1 = ___1_p_easeType;
		ABSTweenPlugin_SetEase_m4AAE182A2A27955FBF83F423E4767EBF6A6C6088(__this, L_1, NULL);
		float L_2 = ___2_p_partialStartPerc;
		__this->___startPerc_46 = L_2;
		float L_3 = ___3_p_partialChangePerc;
		__this->___changePerc_47 = L_3;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::ResetToFullPath(System.Single,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path_ResetToFullPath_m1BB50A9DDBC70CB7C209661361B8B6CC302CBA58 (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, float ___0_p_duration, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	{
		__this->___isPartialPath_44 = (bool)0;
		float L_0 = ___0_p_duration;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2 = L_0;
		int32_t L_1 = ___1_p_easeType;
		ABSTweenPlugin_SetEase_m4AAE182A2A27955FBF83F423E4767EBF6A6C6088(__this, L_1, NULL);
		__this->___startPerc_46 = (0.0f);
		__this->___changePerc_47 = (1.0f);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugVector3Path::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugVector3Path__cctor_m40152CCEDE327C8DD3FD458F8A06426653DA0C35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		((PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var))->___validPropTypes_29 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var))->___validPropTypes_29), (void*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_1;
		((PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var))->___validValueTypes_30 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8_il2cpp_TypeInfo_var))->___validValueTypes_30), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.Core.OverwriteManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverwriteManager__ctor_mEFBC7A321BD74D1CD40B2F02991D1C41DF99FE2C (OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39186FF5CA6EEBF0401FCC8D454A147188082B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_0 = (List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F*)il2cpp_codegen_object_new(List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m39186FF5CA6EEBF0401FCC8D454A147188082B45(L_0, List_1__ctor_m39186FF5CA6EEBF0401FCC8D454A147188082B45_RuntimeMethod_var);
		__this->___runningTweens_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runningTweens_2), (void*)L_0);
		return;
	}
}
// System.Void Holoville.HOTween.Core.OverwriteManager::AddTween(Holoville.HOTween.Tweener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverwriteManager_AddTween_mB998E62A5D1E0C495C718F07B805E4E5B51D01E3 (OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_p_tween, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m18CB12DF523FE98B674A0D93FA002E47704F555E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mB0AE72F0CAE49940457AFDC332ED7869B9EADA8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC2733BAEC60A24A610EE1518219446E759790F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* V_4 = NULL;
	List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* V_8 = NULL;
	int32_t V_9 = 0;
	ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_13 = NULL;
	{
		bool L_0 = __this->___enabled_0;
		if (!L_0)
		{
			goto IL_026b;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ___0_p_tween;
		NullCheck(L_1);
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_2 = L_1->___plugins_72;
		V_0 = L_2;
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_3 = __this->___runningTweens_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_inline(L_3, List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_inline(L_5, List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_RuntimeMethod_var);
		V_2 = L_6;
		int32_t L_7 = V_1;
		V_3 = L_7;
		goto IL_0264;
	}

IL_002e:
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_8 = __this->___runningTweens_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_10;
		L_10 = List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411(L_8, L_9, List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411_RuntimeMethod_var);
		V_4 = L_10;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_11 = V_4;
		NullCheck(L_11);
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_12 = L_11->___plugins_72;
		V_5 = L_12;
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_inline(L_13, List_1_get_Count_mCDD99745CD3A2987A64B2EA65B81818761B6AD32_RuntimeMethod_var);
		V_6 = L_14;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_15 = V_4;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_15, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_17 = ___0_p_tween;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_17, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_16) == ((RuntimeObject*)(RuntimeObject*)L_18))))
		{
			goto IL_0260;
		}
	}
	{
		V_7 = 0;
		goto IL_0258;
	}

IL_0068:
	{
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_19 = V_0;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_21;
		L_21 = List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F(L_19, L_20, List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F_RuntimeMethod_var);
		V_8 = L_21;
		int32_t L_22 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_024a;
	}

IL_007d:
	{
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_23 = V_5;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_25;
		L_25 = List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F(L_23, L_24, List_1_get_Item_mA2060A9D0EB3616B4076B851CCFFE8874BD1708F_RuntimeMethod_var);
		V_10 = L_25;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_26 = V_10;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = ABSTweenPlugin_get_propName_m66440F63ADB38E6AEB81E90E0E7C0D44B2450AFB_inline(L_26, NULL);
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_28 = V_8;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = ABSTweenPlugin_get_propName_m66440F63ADB38E6AEB81E90E0E7C0D44B2450AFB_inline(L_28, NULL);
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_0244;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_31 = V_8;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_pluginId() */, L_31);
		if ((((int32_t)L_32) == ((int32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_33 = V_10;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_pluginId() */, L_33);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00c7;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_pluginId() */, L_35);
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_37 = V_8;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Holoville.HOTween.Plugins.Core.ABSTweenPlugin::get_pluginId() */, L_37);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_0244;
		}
	}

IL_00c7:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_39 = V_4;
		NullCheck(L_39);
		bool L_40;
		L_40 = ABSTweenComponent_get_isSequenced_mE341F3D7751CC291E9E5A64FB576CDBE2AC4BA5F(L_39, NULL);
		if (!L_40)
		{
			goto IL_00ea;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_41 = ___0_p_tween;
		NullCheck(L_41);
		bool L_42;
		L_42 = ABSTweenComponent_get_isSequenced_mE341F3D7751CC291E9E5A64FB576CDBE2AC4BA5F(L_41, NULL);
		if (!L_42)
		{
			goto IL_00ea;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_43 = V_4;
		NullCheck(L_43);
		Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* L_44 = ((ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737*)L_43)->___contSequence_11;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_45 = ___0_p_tween;
		NullCheck(L_45);
		Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* L_46 = ((ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737*)L_45)->___contSequence_11;
		if ((((RuntimeObject*)(Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279*)L_44) == ((RuntimeObject*)(Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279*)L_46)))
		{
			goto IL_0260;
		}
	}

IL_00ea:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_47 = V_4;
		NullCheck(L_47);
		bool L_48 = ((ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737*)L_47)->____isPaused_8;
		if (L_48)
		{
			goto IL_0244;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_49 = V_4;
		NullCheck(L_49);
		bool L_50;
		L_50 = ABSTweenComponent_get_isSequenced_mE341F3D7751CC291E9E5A64FB576CDBE2AC4BA5F(L_49, NULL);
		if (!L_50)
		{
			goto IL_010b;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_51 = V_4;
		NullCheck(L_51);
		bool L_52;
		L_52 = ABSTweenComponent_get_isComplete_m709E527B954A24C4FC9BFA6AAEAF82332441991F_inline(L_51, NULL);
		if (L_52)
		{
			goto IL_0244;
		}
	}

IL_010b:
	{
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_53 = V_5;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		List_1_RemoveAt_mB0AE72F0CAE49940457AFDC332ED7869B9EADA8E(L_53, L_54, List_1_RemoveAt_mB0AE72F0CAE49940457AFDC332ED7869B9EADA8E_RuntimeMethod_var);
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		bool L_56 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___isEditor_17;
		if (!L_56)
		{
			goto IL_01d2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_57 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___warningLevel_15;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_01d2;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_58 = V_8;
		NullCheck(L_58);
		Type_t* L_59;
		L_59 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_58, NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_59);
		V_11 = L_60;
		String_t* L_61 = V_11;
		String_t* L_62 = V_11;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_62, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_61);
		String_t* L_64;
		L_64 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_61, ((int32_t)il2cpp_codegen_add(L_63, 1)), NULL);
		V_11 = L_64;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_65 = V_10;
		NullCheck(L_65);
		Type_t* L_66;
		L_66 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_65, NULL);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_66);
		V_12 = L_67;
		String_t* L_68 = V_12;
		String_t* L_69 = V_12;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_69, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_68);
		String_t* L_71;
		L_71 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_68, ((int32_t)il2cpp_codegen_add(L_70, 1)), NULL);
		V_12 = L_71;
		bool L_72 = __this->___logWarnings_1;
		if (!L_72)
		{
			goto IL_01d2;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_13 = L_73;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = V_13;
		String_t* L_75 = V_11;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_75);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_75);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = V_13;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral7BC2733BAEC60A24A610EE1518219446E759790F);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral7BC2733BAEC60A24A610EE1518219446E759790F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = V_13;
		String_t* L_78 = V_12;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_78);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = V_13;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = V_13;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_81 = V_4;
		NullCheck(L_81);
		RuntimeObject* L_82;
		L_82 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_81, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_82);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = V_13;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84 = V_13;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_85 = V_10;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = ABSTweenPlugin_get_propName_m66440F63ADB38E6AEB81E90E0E7C0D44B2450AFB_inline(L_85, NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_86);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = V_13;
		String_t* L_88;
		L_88 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_87, NULL);
		TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_88, NULL);
	}

IL_01d2:
	{
		int32_t L_89 = V_6;
		if (L_89)
		{
			goto IL_0201;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_90 = V_4;
		NullCheck(L_90);
		bool L_91;
		L_91 = ABSTweenComponent_get_isSequenced_mE341F3D7751CC291E9E5A64FB576CDBE2AC4BA5F(L_90, NULL);
		if (!L_91)
		{
			goto IL_01ed;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_92 = V_4;
		NullCheck(L_92);
		Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* L_93 = ((ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737*)L_92)->___contSequence_11;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_94 = V_4;
		NullCheck(L_93);
		Sequence_Remove_mC0A8D195AF01D4D8514D7515286352256C677E31(L_93, L_94, NULL);
	}

IL_01ed:
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_95 = __this->___runningTweens_2;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44(L_95, L_96, List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44_RuntimeMethod_var);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_97 = V_4;
		NullCheck(L_97);
		VirtualActionInvoker1< bool >::Invoke(52 /* System.Void Holoville.HOTween.Core.ABSTweenComponent::Kill(System.Boolean) */, L_97, (bool)0);
	}

IL_0201:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_98 = V_4;
		NullCheck(L_98);
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_99 = L_98->___onPluginOverwritten_69;
		if (!L_99)
		{
			goto IL_0218;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_100 = V_4;
		NullCheck(L_100);
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_101 = L_100->___onPluginOverwritten_69;
		NullCheck(L_101);
		TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_inline(L_101, NULL);
		goto IL_023b;
	}

IL_0218:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_102 = V_4;
		NullCheck(L_102);
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_103 = L_102->___onPluginOverwrittenWParms_70;
		if (!L_103)
		{
			goto IL_023b;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_104 = V_4;
		NullCheck(L_104);
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_105 = L_104->___onPluginOverwrittenWParms_70;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_106 = V_4;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_107 = V_4;
		NullCheck(L_107);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = L_107->___onPluginOverwrittenParms_71;
		TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* L_109 = (TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*)il2cpp_codegen_object_new(TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		TweenEvent__ctor_m20EB08AE4E804741D72FBED05DE8925CC9C132EF(L_109, L_106, L_108, NULL);
		NullCheck(L_105);
		TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_inline(L_105, L_109, NULL);
	}

IL_023b:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_110 = V_4;
		NullCheck(L_110);
		bool L_111;
		L_111 = ABSTweenComponent_get_destroyed_m4FE7ACE9A38BE5BED05C117B3F147838083CFC01_inline(L_110, NULL);
		if (L_111)
		{
			goto IL_0260;
		}
	}

IL_0244:
	{
		int32_t L_112 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
	}

IL_024a:
	{
		int32_t L_113 = V_9;
		if ((((int32_t)L_113) > ((int32_t)(-1))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_114 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_0258:
	{
		int32_t L_115 = V_7;
		int32_t L_116 = V_2;
		if ((((int32_t)L_115) < ((int32_t)L_116)))
		{
			goto IL_0068;
		}
	}

IL_0260:
	{
		int32_t L_117 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_117, 1));
	}

IL_0264:
	{
		int32_t L_118 = V_3;
		if ((((int32_t)L_118) > ((int32_t)(-1))))
		{
			goto IL_002e;
		}
	}

IL_026b:
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_119 = __this->___runningTweens_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_120 = ___0_p_tween;
		NullCheck(L_119);
		List_1_Add_m18CB12DF523FE98B674A0D93FA002E47704F555E_inline(L_119, L_120, List_1_Add_m18CB12DF523FE98B674A0D93FA002E47704F555E_RuntimeMethod_var);
		return;
	}
}
// System.Void Holoville.HOTween.Core.OverwriteManager::RemoveTween(Holoville.HOTween.Tweener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverwriteManager_RemoveTween_m45DEDD84C3EDC7D2EF90E5DF5772201EB4C22F0F (OverwriteManager_t25D8819D33516851D7144DBEE90D7FF232BAE825* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_p_tween, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_0 = __this->___runningTweens_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_inline(L_0, List_1_get_Count_m03D809BA2D51AA36B88B17993142D1EE099C9BD2_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0030;
	}

IL_0010:
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_2 = __this->___runningTweens_2;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_4;
		L_4 = List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411(L_2, L_3, List_1_get_Item_m69F009D7AFF7671AD5FE03A47E16A8C822270411_RuntimeMethod_var);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ___0_p_tween;
		if ((!(((RuntimeObject*)(Tweener_t99074CD44759EE1C18B018744C9E38243A40871A*)L_4) == ((RuntimeObject*)(Tweener_t99074CD44759EE1C18B018744C9E38243A40871A*)L_5))))
		{
			goto IL_002c;
		}
	}
	{
		List_1_tEC58583E33FFBCCB6A81DD554C40BC69808A701F* L_6 = __this->___runningTweens_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44(L_6, L_7, List_1_RemoveAt_mF1540910232343DD1D8FE562E02D93DC14C94B44_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Quint::EaseIn(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_EaseIn_m6C3211561F2D84CDC0E99DB5F74C961EE3EFCF4E (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___0_time;
		float L_7 = ___0_time;
		float L_8 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_3)), L_4)), L_5)), L_6)), L_7)), L_8));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Quint::EaseOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_EaseOut_m89CBF1324AC66BB28842633E0AA7751E98DE3DEB (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)il2cpp_codegen_subtract(((float)(L_1/L_2)), (1.0f)));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___0_time;
		float L_7 = ___0_time;
		float L_8 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6)), L_7)), (1.0f))))), L_8));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Quint::EaseInOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_EaseInOut_m279B4513D0474EC373DA9C86641607FFD6950507 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_time;
		float L_1 = ___3_duration;
		float L_2 = ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		___0_time = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		float L_3 = ___2_changeValue;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___0_time;
		float L_7 = ___0_time;
		float L_8 = ___0_time;
		float L_9 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, (0.5f))), L_4)), L_5)), L_6)), L_7)), L_8)), L_9));
	}

IL_0027:
	{
		float L_10 = ___2_changeValue;
		float L_11 = ___0_time;
		float L_12 = ((float)il2cpp_codegen_subtract(L_11, (2.0f)));
		___0_time = L_12;
		float L_13 = ___0_time;
		float L_14 = ___0_time;
		float L_15 = ___0_time;
		float L_16 = ___0_time;
		float L_17 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, (0.5f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14)), L_15)), L_16)), (2.0f))))), L_17));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Holoville.HOTween.Plugins.Core.PlugColor32::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugColor32_get_startVal_mD9C0E957F190B58BF9AF2F3874F7464E0E7261AB (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::set_startVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_set_startVal_m3D8B40246FD173C803497DC4A94C6C5490FD5EEE (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		bool L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___typedEndVal_28;
		RuntimeObject* L_4 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_3, ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_4, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5;
		V_0 = L_6;
		__this->___typedStartVal_27 = L_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7;
		RuntimeObject* L_9 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_8);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_9);
		return;
	}

IL_003b:
	{
		RuntimeObject* L_10 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_10, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var)))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11;
		V_1 = L_12;
		__this->___typedStartVal_27 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13;
		RuntimeObject* L_15 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_14);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_15);
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.Core.PlugColor32::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugColor32_get_endVal_mEDB45C0EB5CC2FAE0C749ED77F192141EFC9C1D9 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::set_endVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_set_endVal_mEFFB93CBFEC846BF6102A9A4C377146950333311 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var)))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = L_1;
		V_0 = L_2;
		__this->___typedEndVal_28 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3;
		RuntimeObject* L_5 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_4);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_5);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_m949343E7A8683E3476F6DE515DEF39FC7BF07F16 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_p_endVal;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = L_0;
		RuntimeObject* L_2 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_1);
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_m5E59062E2F324007E3672EB50AA9F30715D94136 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_p_endVal;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = L_0;
		RuntimeObject* L_2 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_mA746143BEC963C76BB01E625BE07D6E7B6D83E4E (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_p_endVal;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = L_0;
		RuntimeObject* L_2 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_m5310A39773B04530C6565A2DDBB4EC39294D8E1B (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_p_endVal;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = L_0;
		RuntimeObject* L_2 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.ctor(UnityEngine.Color32,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__ctor_m4EF13ADEEA22189EAF3A5899A22CD1F715E990EC (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_p_endVal;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = L_0;
		RuntimeObject* L_2 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_p_easeAnimCurve;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Single Holoville.HOTween.Plugins.Core.PlugColor32::GetSpeedBasedDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugColor32_GetSpeedBasedDuration_m1845E1E00E9BBD94FA4AF9A02E4774C3FDD8FCC1 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, float ___0_p_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_p_speed;
		V_0 = ((float)((1.0f)/L_0));
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = V_0;
		V_0 = ((-L_2));
	}

IL_0013:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_SetChangeVal_m0F2E1D66423E4F3CF74DA63D0D8002E5CD7831C0 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___typedStartVal_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___typedEndVal_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_3, L_4, NULL);
		__this->___typedEndVal_28 = L_5;
	}

IL_002c:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___typedEndVal_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___typedStartVal_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_6, L_7, NULL);
		__this->___diffChangeVal_29 = L_8;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::SetIncremental(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_SetIncremental_m0D105D6FD4A79E01E0E94F9A2E3A060189AE3371 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, int32_t ___0_p_diffIncr, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___typedStartVal_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___diffChangeVal_29;
		int32_t L_2 = ___0_p_diffIncr;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_1, ((float)L_2), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_0, L_3, NULL);
		__this->___typedStartVal_27 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___typedEndVal_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___diffChangeVal_29;
		int32_t L_7 = ___0_p_diffIncr;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_6, ((float)L_7), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_5, L_8, NULL);
		__this->___typedEndVal_28 = L_9;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::SetIncrementalRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_SetIncrementalRestart_m2321C6C30EA75769CB873B1AC465DA13B4DB7015 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___typedStartVal_27;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var))));
		RuntimeObject* L_4 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_startVal(System.Object) */, __this, L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___typedStartVal_27;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_5, L_7, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_8, NULL);
		V_1 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___typedStartVal_27;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_10, L_12, NULL);
		__this->___typedEndVal_28 = L_13;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::DoUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32_DoUpdate_mA43CD82817D34A333A0E49381E01BCC37AFB0C63 (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* __this, float ___0_p_totElapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ease_7;
		float L_1 = ___0_p_totElapsed;
		float L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_3 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_3);
		float L_4;
		L_4 = Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline(L_3, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_5);
		float L_6;
		L_6 = Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline(L_5, NULL);
		NullCheck(L_0);
		float L_7;
		L_7 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_0, L_1, (0.0f), (1.0f), L_2, L_4, L_6, NULL);
		V_0 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->___typedStartVal_27);
		float L_9 = L_8->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = (&__this->___diffChangeVal_29);
		float L_11 = L_10->___r_0;
		float L_12 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___typedStartVal_27);
		float L_14 = L_13->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = (&__this->___diffChangeVal_29);
		float L_16 = L_15->___g_1;
		float L_17 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = (&__this->___typedStartVal_27);
		float L_19 = L_18->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = (&__this->___diffChangeVal_29);
		float L_21 = L_20->___b_2;
		float L_22 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = (&__this->___typedStartVal_27);
		float L_24 = L_23->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = (&__this->___diffChangeVal_29);
		float L_26 = L_25->___a_3;
		float L_27 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12)))), ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_multiply(L_16, L_17)))), ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_21, L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(L_26, L_27)))), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29;
		L_29 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_28, NULL);
		VirtualActionInvoker1< Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B >::Invoke(24 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetValue(UnityEngine.Color32) */, __this, L_29);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.Core.PlugColor32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugColor32__cctor_mA54543A3A75DEBA7711695153EE0560717E5FB15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		((PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var))->___validPropTypes_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var))->___validPropTypes_25), (void*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_1;
		((PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var))->___validValueTypes_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var))->___validValueTypes_26), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.Core.TweenWarning::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B (String_t* ___0_p_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_message;
		TweenWarning_Log_mDD27E543707A5EFEDCBE8A709413D3156D9A938F(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Core.TweenWarning::Log(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenWarning_Log_mDD27E543707A5EFEDCBE8A709413D3156D9A938F (String_t* ___0_p_message, bool ___1_p_verbose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0082802CB33D711591EB7173923DE71C91BF6CBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___warningLevel_15;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		bool L_1 = ___1_p_verbose;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___warningLevel_15;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}

IL_0013:
	{
		String_t* L_3 = ___0_p_message;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0082802CB33D711591EB7173923DE71C91BF6CBE, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
	}

IL_0023:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.Core.Path::.ctor(Holoville.HOTween.PathType,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_mB08F108F59563B544D546B8A9EB2105FD46D4588 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_type, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_p_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_p_type;
		__this->___pathType_7 = L_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___1_p_path;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___path_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_4), (void*)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___1_p_path;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___path_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___path_4;
		NullCheck(L_5);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_3, (RuntimeArray*)L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		return;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float L_0 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Path_GetPoint_m931F8C934DA00412C36CCE7D011F45F2F4F80555(__this, L_0, (&V_0), NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetPoint(System.Single,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetPoint_m931F8C934DA00412C36CCE7D011F45F2F4F80555 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, int32_t* ___1_out_waypointIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	{
		int32_t L_0 = __this->___pathType_7;
		V_17 = L_0;
		int32_t L_1 = V_17;
		if ((!(((uint32_t)L_1) == ((uint32_t)0))))
		{
			goto IL_00c8;
		}
	}
	{
		float L_2 = ___0_t;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t* L_3 = ___1_out_waypointIndex;
		*((int32_t*)L_3) = (int32_t)1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = __this->___path_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		return L_5;
	}

IL_002d:
	{
		V_0 = 0;
		V_1 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___timesTable_2;
		NullCheck(L_6);
		V_2 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		V_3 = 1;
		goto IL_0055;
	}

IL_003e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___timesTable_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = ___0_t;
		if ((!(((float)L_10) >= ((float)L_11))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_3;
		V_1 = L_13;
		goto IL_0059;
	}

IL_0051:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0055:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003e;
		}
	}

IL_0059:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___timesTable_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___timesTable_2;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = __this->___timesTable_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = ((float)il2cpp_codegen_subtract(L_24, L_28));
		float L_29 = ___0_t;
		float L_30 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract(L_29, L_30));
		float L_31 = __this->___pathLength_0;
		float L_32 = V_5;
		V_6 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = __this->___path_4;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))));
		V_7 = L_35;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = __this->___path_4;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))));
		V_8 = L_38;
		int32_t* L_39 = ___1_out_waypointIndex;
		int32_t L_40 = V_1;
		*((int32_t*)L_39) = (int32_t)L_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_43, NULL);
		float L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_46, NULL);
		return L_47;
	}

IL_00c8:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = __this->___path_4;
		NullCheck(L_48);
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_48)->max_length)), 3));
		float L_49 = ___0_t;
		int32_t L_50 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_51;
		L_51 = floor(((double)((float)il2cpp_codegen_multiply(L_49, ((float)L_50)))));
		V_10 = il2cpp_codegen_cast_double_to_int<int32_t>(L_51);
		int32_t L_52 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		int32_t L_53 = V_11;
		int32_t L_54 = V_10;
		if ((((int32_t)L_53) <= ((int32_t)L_54)))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_55 = V_10;
		V_11 = L_55;
	}

IL_00f2:
	{
		float L_56 = ___0_t;
		int32_t L_57 = V_9;
		int32_t L_58 = V_11;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_56, ((float)L_57))), ((float)L_58)));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = __this->___path_4;
		int32_t L_60 = V_11;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60))));
		V_13 = L_61;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->___path_4;
		int32_t L_63 = V_11;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 1))))));
		V_14 = L_64;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = __this->___path_4;
		int32_t L_66 = V_11;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, 2))))));
		V_15 = L_67;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = __this->___path_4;
		int32_t L_69 = V_11;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 3))))));
		V_16 = L_70;
		int32_t* L_71 = ___1_out_waypointIndex;
		*((int32_t*)L_71) = (int32_t)(-1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_73, L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_79, L_80, NULL);
		float L_82 = V_12;
		float L_83 = V_12;
		float L_84 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_81, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_82, L_83)), L_84)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_87, L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_91, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_90, L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_93, L_94, NULL);
		float L_96 = V_12;
		float L_97 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_95, ((float)il2cpp_codegen_multiply(L_96, L_97)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_101, L_102, NULL);
		float L_104 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_103, L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_99, L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_106, L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_109, NULL);
		return L_110;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::Velocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_Velocity_m56BCEE96585E3F21F506F05D02D336D402D8C423 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___path_4;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3));
		float L_1 = ___0_t;
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = floor(((double)((float)il2cpp_codegen_multiply(L_1, ((float)L_2)))));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		int32_t L_4 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_1;
		V_2 = L_7;
	}

IL_0021:
	{
		float L_8 = ___0_t;
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, ((float)L_9))), ((float)L_10)));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___path_4;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))));
		V_4 = L_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->___path_4;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, 1))))));
		V_5 = L_16;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___path_4;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, 2))))));
		V_6 = L_19;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___path_4;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, 3))))));
		V_7 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((1.5f), L_32, NULL);
		float L_34 = V_3;
		float L_35 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, ((float)il2cpp_codegen_multiply(L_34, L_35)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_44, L_45, NULL);
		float L_47 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_52, L_54, NULL);
		return L_55;
	}
}
// System.Void Holoville.HOTween.Core.Path::GizmoDraw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_GizmoDraw_mAA3596E73D65B542F531B1CFEA38F35F99DFC8AF (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, const RuntimeMethod* method) 
{
	{
		Path_GizmoDraw_mC7CF7E5C1B7567B315E5F7BAAF2EEEC671E9A7B7(__this, (-1.0f), (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Core.Path::GizmoDraw(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_GizmoDraw_mC7CF7E5C1B7567B315E5F7BAAF2EEEC671E9A7B7 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, bool ___1_p_drawTrig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.600000024f), (0.600000024f), (0.600000024f), (0.600000024f), /*hidden argument*/NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		bool L_1 = __this->___changed_5;
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_2 = __this->___pathType_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___drawPs_6;
		if (L_3)
		{
			goto IL_008d;
		}
	}

IL_0037:
	{
		__this->___changed_5 = (bool)0;
		int32_t L_4 = __this->___pathType_7;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_008d;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___path_4;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_5)->max_length)), ((int32_t)10)));
		int32_t L_6 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1)));
		__this->___drawPs_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___drawPs_6), (void*)L_7);
		V_2 = 0;
		goto IL_0089;
	}

IL_0065:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		V_3 = ((float)(((float)L_8)/((float)L_9)));
		float L_10 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_10, NULL);
		V_0 = L_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___drawPs_6;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))) = L_14;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0089:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0065;
		}
	}

IL_008d:
	{
		int32_t L_18 = __this->___pathType_7;
		V_21 = L_18;
		int32_t L_19 = V_21;
		if ((!(((uint32_t)L_19) == ((uint32_t)0))))
		{
			goto IL_00ea;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___path_4;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		V_4 = L_21;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___path_4;
		NullCheck(L_22);
		V_5 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		V_6 = 1;
		goto IL_00e0;
	}

IL_00bc:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___path_4;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))));
		V_0 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		V_4 = L_28;
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00e0:
	{
		int32_t L_30 = V_6;
		int32_t L_31 = V_5;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_31, 1)))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_0136;
	}

IL_00ea:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = __this->___drawPs_6;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		V_4 = L_33;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = __this->___drawPs_6;
		NullCheck(L_34);
		V_7 = ((int32_t)(((RuntimeArray*)L_34)->max_length));
		V_8 = 1;
		goto IL_0130;
	}

IL_010c:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = __this->___drawPs_6;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))));
		V_0 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		V_4 = L_40;
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0130:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_7;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_010c;
		}
	}

IL_0136:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_44, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = __this->___path_4;
		NullCheck(L_45);
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), 1));
		V_10 = 1;
		goto IL_0173;
	}

IL_0151:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = __this->___path_4;
		int32_t L_47 = V_10;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))));
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_48, (0.100000001f), NULL);
		int32_t L_49 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0173:
	{
		int32_t L_50 = V_10;
		int32_t L_51 = V_9;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0151;
		}
	}
	{
		bool L_52 = ___1_p_drawTrig;
		if (!L_52)
		{
			goto IL_02ad;
		}
	}
	{
		float L_53 = ___0_t;
		if ((((float)L_53) == ((float)(-1.0f))))
		{
			goto IL_02ad;
		}
	}
	{
		float L_54 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_54, NULL);
		V_11 = L_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_11;
		V_13 = L_56;
		float L_57 = ___0_t;
		V_15 = ((float)il2cpp_codegen_add(L_57, (9.99999975E-05f)));
		float L_58 = V_15;
		if ((!(((float)L_58) > ((float)(1.0f)))))
		{
			goto IL_01cd;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_11;
		V_14 = L_59;
		float L_60 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, ((float)il2cpp_codegen_subtract(L_60, (9.99999975E-05f))), NULL);
		V_13 = L_61;
		float L_62 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, ((float)il2cpp_codegen_subtract(L_62, (0.000199999995f))), NULL);
		V_12 = L_63;
		goto IL_0217;
	}

IL_01cd:
	{
		float L_64 = ___0_t;
		V_16 = ((float)il2cpp_codegen_subtract(L_64, (9.99999975E-05f)));
		float L_65 = V_16;
		if ((!(((float)L_65) < ((float)(0.0f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_11;
		V_12 = L_66;
		float L_67 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, ((float)il2cpp_codegen_add(L_67, (9.99999975E-05f))), NULL);
		V_13 = L_68;
		float L_69 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, ((float)il2cpp_codegen_add(L_69, (0.000199999995f))), NULL);
		V_14 = L_70;
		goto IL_0217;
	}

IL_0203:
	{
		float L_71 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_71, NULL);
		V_12 = L_72;
		float L_73 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_73, NULL);
		V_14 = L_74;
	}

IL_0217:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_75, L_76, NULL);
		V_17 = L_77;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_17), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_79, NULL);
		V_18 = L_80;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_18), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_81, L_82, NULL);
		V_19 = L_83;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_19), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_84, L_85, NULL);
		V_20 = L_86;
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_20), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
		L_87 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_89, L_90, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_88, L_91, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92;
		L_92 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_94, L_95, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_93, L_96, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97;
		L_97 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_99, L_100, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_98, L_101, NULL);
	}

IL_02ad:
	{
		return;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetConstPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetConstPoint_m1DADD874A6EC9E06D13C398963002B81F9017653 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___pathType_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)0))))
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_2, NULL);
		return L_3;
	}

IL_0013:
	{
		float L_4 = ___0_t;
		float L_5;
		L_5 = Path_GetConstPathPercFromTimePerc_m05DF6CE5DEE89C0D965748560E2D3E701C9D01B5(__this, L_4, NULL);
		V_0 = L_5;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 Holoville.HOTween.Core.Path::GetConstPoint(System.Single,System.Single&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Path_GetConstPoint_mC350B3F2078D6AB8F49B9C5B063BDD6C79B0654C (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, float* ___1_out_pathPerc, int32_t* ___2_out_waypointIndex, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___pathType_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)0))))
		{
			goto IL_0017;
		}
	}
	{
		float* L_2 = ___1_out_pathPerc;
		float L_3 = ___0_t;
		*((float*)L_2) = (float)L_3;
		float L_4 = ___0_t;
		int32_t* L_5 = ___2_out_waypointIndex;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Path_GetPoint_m931F8C934DA00412C36CCE7D011F45F2F4F80555(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0017:
	{
		float L_7 = ___0_t;
		float L_8;
		L_8 = Path_GetConstPathPercFromTimePerc_m05DF6CE5DEE89C0D965748560E2D3E701C9D01B5(__this, L_7, NULL);
		V_0 = L_8;
		float* L_9 = ___1_out_pathPerc;
		float L_10 = V_0;
		*((float*)L_9) = (float)L_10;
		int32_t* L_11 = ___2_out_waypointIndex;
		*((int32_t*)L_11) = (int32_t)(-1);
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_12, NULL);
		return L_13;
	}
}
// System.Void Holoville.HOTween.Core.Path::StoreTimeToLenTables(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_StoreTimeToLenTables_mF3AFBB4D067AB81A9B6EE85D91D340361D198EC9 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_subdivisions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	{
		int32_t L_0 = __this->___pathType_7;
		V_10 = L_0;
		int32_t L_1 = V_10;
		if ((!(((uint32_t)L_1) == ((uint32_t)0))))
		{
			goto IL_00d5;
		}
	}
	{
		__this->___pathLength_0 = (0.0f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___path_4;
		NullCheck(L_2);
		V_3 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___waypointsLength_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypointsLength_1), (void*)L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___path_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))));
		V_0 = L_6;
		V_4 = 1;
		goto IL_008c;
	}

IL_0047:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = __this->___path_4;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_11, NULL);
		V_5 = L_12;
		int32_t L_13 = V_4;
		int32_t L_14 = V_3;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1)))))
		{
			goto IL_0079;
		}
	}
	{
		float L_15 = __this->___pathLength_0;
		float L_16 = V_5;
		__this->___pathLength_0 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_0079:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		V_0 = L_17;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___waypointsLength_1;
		int32_t L_19 = V_4;
		float L_20 = V_5;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)L_20);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008c:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_24 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->___timesTable_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timesTable_2), (void*)L_25);
		V_6 = (0.0f);
		V_7 = 2;
		goto IL_00cf;
	}

IL_00a9:
	{
		float L_26 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___waypointsLength_1;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		float L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_6 = ((float)il2cpp_codegen_add(L_26, L_30));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->___timesTable_2;
		int32_t L_32 = V_7;
		float L_33 = V_6;
		float L_34 = __this->___pathLength_0;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (float)((float)(L_33/L_34)));
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00cf:
	{
		int32_t L_36 = V_7;
		int32_t L_37 = V_3;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00a9;
		}
	}
	{
		return;
	}

IL_00d5:
	{
		__this->___pathLength_0 = (0.0f);
		int32_t L_38 = ___0_p_subdivisions;
		V_2 = ((float)((1.0f)/((float)L_38)));
		int32_t L_39 = ___0_p_subdivisions;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->___timesTable_2 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timesTable_2), (void*)L_40);
		int32_t L_41 = ___0_p_subdivisions;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___lengthsTable_3 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lengthsTable_3), (void*)L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, (0.0f), NULL);
		V_0 = L_43;
		V_8 = 1;
		goto IL_015c;
	}

IL_0112:
	{
		float L_44 = V_2;
		int32_t L_45 = V_8;
		V_9 = ((float)il2cpp_codegen_multiply(L_44, ((float)L_45)));
		float L_46 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(__this, L_46, NULL);
		V_1 = L_47;
		float L_48 = __this->___pathLength_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_0;
		float L_51;
		L_51 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_49, L_50, NULL);
		__this->___pathLength_0 = ((float)il2cpp_codegen_add(L_48, L_51));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
		V_0 = L_52;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = __this->___timesTable_2;
		int32_t L_54 = V_8;
		float L_55 = V_9;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_54, 1))), (float)L_55);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = __this->___lengthsTable_3;
		int32_t L_57 = V_8;
		float L_58 = __this->___pathLength_0;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_57, 1))), (float)L_58);
		int32_t L_59 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_015c:
	{
		int32_t L_60 = V_8;
		int32_t L_61 = ___0_p_subdivisions;
		if ((((int32_t)L_60) < ((int32_t)((int32_t)il2cpp_codegen_add(L_61, 1)))))
		{
			goto IL_0112;
		}
	}
	{
		return;
	}
}
// System.Void Holoville.HOTween.Core.Path::StoreWaypointsLengths(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path_StoreWaypointsLengths_mEB80B748EAE6EFC9BF2FB10BB6B7053B4CE279A4 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, int32_t ___0_p_subdivisions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___path_4;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2));
		int32_t L_1 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___waypointsLength_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypointsLength_1), (void*)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___waypointsLength_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		V_1 = (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF*)NULL;
		V_2 = 2;
		goto IL_012c;
	}

IL_002d:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = V_3;
		NullCheck(L_5);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___path_4;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_7, 2))))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = V_3;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___path_4;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_11, 1))))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_3;
		NullCheck(L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->___path_4;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_16;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_3;
		NullCheck(L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = __this->___path_4;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))))));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_20;
		int32_t L_21 = V_2;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_22 = __this->___pathType_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = V_3;
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_24 = (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF*)il2cpp_codegen_object_new(Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Path__ctor_mB08F108F59563B544D546B8A9EB2105FD46D4588(L_24, L_22, L_23, NULL);
		V_1 = L_24;
		goto IL_00c8;
	}

IL_00c1:
	{
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_25 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_3;
		NullCheck(L_25);
		L_25->___path_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___path_4), (void*)L_26);
	}

IL_00c8:
	{
		V_4 = (0.0f);
		int32_t L_27 = ___0_p_subdivisions;
		V_5 = ((float)((1.0f)/((float)L_27)));
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_28 = V_1;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(L_28, (0.0f), NULL);
		V_6 = L_29;
		V_7 = 1;
		goto IL_0115;
	}

IL_00eb:
	{
		float L_30 = V_5;
		int32_t L_31 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply(L_30, ((float)L_31)));
		Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* L_32 = V_1;
		float L_33 = V_8;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Path_GetPoint_m39ECC109111994C94F070D36A0DC1B52B7061E74(L_32, L_33, NULL);
		V_9 = L_34;
		float L_35 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_6;
		float L_38;
		L_38 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_36, L_37, NULL);
		V_4 = ((float)il2cpp_codegen_add(L_35, L_38));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_9;
		V_6 = L_39;
		int32_t L_40 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0115:
	{
		int32_t L_41 = V_7;
		int32_t L_42 = ___0_p_subdivisions;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)il2cpp_codegen_add(L_42, 1)))))
		{
			goto IL_00eb;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = __this->___waypointsLength_1;
		int32_t L_44 = V_2;
		float L_45 = V_4;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_44, 1))), (float)L_45);
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_012c:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_add(L_48, 1)))))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Single Holoville.HOTween.Core.Path::GetConstPathPercFromTimePerc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Path_GetConstPathPercFromTimePerc_m05DF6CE5DEE89C0D965748560E2D3E701C9D01B5 (Path_tF32AD8DAA5F5FA3E86ABFAC091C92B61A0385DCF* __this, float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		float L_0 = ___0_t;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		float L_1 = ___0_t;
		if ((!(((float)L_1) < ((float)(1.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		float L_2 = __this->___pathLength_0;
		float L_3 = ___0_t;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_3));
		V_1 = (0.0f);
		V_2 = (0.0f);
		V_3 = (0.0f);
		V_4 = (0.0f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___lengthsTable_3;
		NullCheck(L_4);
		V_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		V_6 = 0;
		goto IL_008b;
	}

IL_0047:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___lengthsTable_3;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = V_0;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_007b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___timesTable_2;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___lengthsTable_3;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___lengthsTable_3;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		float L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		goto IL_0091;
	}

IL_007b:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___timesTable_2;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_1 = L_26;
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_008b:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0047;
		}
	}

IL_0091:
	{
		float L_30 = V_1;
		float L_31 = V_0;
		float L_32 = V_2;
		float L_33 = V_4;
		float L_34 = V_2;
		float L_35 = V_3;
		float L_36 = V_1;
		___0_t = ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_31, L_32))/((float)il2cpp_codegen_subtract(L_33, L_34)))), ((float)il2cpp_codegen_subtract(L_35, L_36))))));
	}

IL_00a1:
	{
		float L_37 = ___0_t;
		if ((!(((float)L_37) > ((float)(1.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		___0_t = (1.0f);
		goto IL_00c1;
	}

IL_00b2:
	{
		float L_38 = ___0_t;
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_00c1;
		}
	}
	{
		___0_t = (0.0f);
	}

IL_00c1:
	{
		float L_39 = ___0_t;
		return L_39;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Holoville.HOTween.TweenParms::get_hasProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenParms_get_hasProps_mD3C0CFB119ABC3898AC73225309DF329FDBF0952 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_0 = __this->___propDatas_47;
		return (bool)((((int32_t)((((RuntimeObject*)(List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Holoville.HOTween.TweenParms::InitializeObject(Holoville.HOTween.Tweener,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParms_InitializeObject_m0B9ABD1E886C5141D7B5742E4D5A9240E15ABAA8 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* ___0_p_tweenObj, RuntimeObject* ___1_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBB2DBA9ECB2AD6046CB4CFB717FDD7E474A439AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0C336245737552A850BF98B9B62610882672A341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m805576DBB9A4E83729241F9A56D3E75202DF9014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE437070E1C414F54A661124CFD73BAE04C1D0CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68F0E22360E0088E4149CBCBDAE6A1E67C16CD6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14C4F2807068D9640EE91247145D17939966A293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16B1A560D0508AB021624167CB1F87B6D48B02D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B53C838334DF89B87164B8A5EE26C8FD470850B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F43C61FF910780A25E22CD0232290820C30BA1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B1FFF171100778CEDD884A0E4A65666906E7EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBED41A93D53C57A40BB6B79662E6D00E6BF4EFB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA73882EBCB16AE44454CACF911EC21EF0A579C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB60F7CAA481E19A64B444094946BAD0787BCE63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* V_4 = NULL;
	PropertyInfo_t* V_5 = NULL;
	ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* V_6 = NULL;
	ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* V_7 = NULL;
	String_t* V_8 = NULL;
	float V_9 = 0.0f;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_10 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_14 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B19_0 = NULL;
	int32_t G_B51_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B51_1 = NULL;
	int32_t G_B50_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B50_1 = NULL;
	Type_t* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B52_2 = NULL;
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ___0_p_tweenObj;
		ABSTweenComponentParms_InitializeOwner_mF88937400BEA35A760F2DC698CA459C44FE82327(__this, L_0, NULL);
		bool L_1 = __this->___speedBased_40;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = __this->___easeSet_41;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		__this->___easeType_42 = 0;
	}

IL_001e:
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_3 = ___0_p_tweenObj;
		bool L_4 = __this->___pixelPerfect_39;
		NullCheck(L_3);
		L_3->____pixelPerfect_65 = L_4;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ___0_p_tweenObj;
		bool L_6 = __this->___speedBased_40;
		NullCheck(L_5);
		L_5->____speedBased_66 = L_6;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_7 = ___0_p_tweenObj;
		int32_t L_8 = __this->___easeType_42;
		NullCheck(L_7);
		L_7->____easeType_61 = L_8;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_9 = ___0_p_tweenObj;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = __this->___easeAnimCurve_43;
		NullCheck(L_9);
		L_9->____easeAnimationCurve_62 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____easeAnimationCurve_62), (void*)L_10);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_11 = ___0_p_tweenObj;
		float L_12 = __this->___easeOvershootOrAmplitude_44;
		NullCheck(L_11);
		L_11->____easeOvershootOrAmplitude_63 = L_12;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_13 = ___0_p_tweenObj;
		float L_14 = __this->___easePeriod_45;
		NullCheck(L_13);
		L_13->____easePeriod_64 = L_14;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_15 = ___0_p_tweenObj;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_16 = ___0_p_tweenObj;
		float L_17 = __this->___delay_46;
		float L_18 = L_17;
		V_9 = L_18;
		NullCheck(L_16);
		L_16->___delayCount_68 = L_18;
		float L_19 = V_9;
		NullCheck(L_15);
		L_15->____delay_67 = L_19;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_20 = ___0_p_tweenObj;
		bool L_21 = __this->___isFrom_48;
		NullCheck(L_20);
		Tweener_set_isFrom_m3E5ABBC9B076D66C6006F2E422A6B15C0899CD24_inline(L_20, L_21, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_22 = ___0_p_tweenObj;
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_23 = __this->___onPluginOverwritten_49;
		NullCheck(L_22);
		L_22->___onPluginOverwritten_69 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___onPluginOverwritten_69), (void*)L_23);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_24 = ___0_p_tweenObj;
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_25 = __this->___onPluginOverwrittenWParms_50;
		NullCheck(L_24);
		L_24->___onPluginOverwrittenWParms_70 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___onPluginOverwrittenWParms_70), (void*)L_25);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_26 = ___0_p_tweenObj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->___onPluginOverwrittenParms_51;
		NullCheck(L_26);
		L_26->___onPluginOverwrittenParms_71 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___onPluginOverwrittenParms_71), (void*)L_27);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_28 = ___0_p_tweenObj;
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_29 = (List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A*)il2cpp_codegen_object_new(List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		List_1__ctor_m805576DBB9A4E83729241F9A56D3E75202DF9014(L_29, List_1__ctor_m805576DBB9A4E83729241F9A56D3E75202DF9014_RuntimeMethod_var);
		NullCheck(L_28);
		L_28->___plugins_72 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___plugins_72), (void*)L_29);
		RuntimeObject* L_30 = ___1_p_target;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_30, NULL);
		V_0 = L_31;
		V_1 = (FieldInfo_t*)NULL;
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_32 = __this->___propDatas_47;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mE437070E1C414F54A661124CFD73BAE04C1D0CC8_inline(L_32, List_1_get_Count_mE437070E1C414F54A661124CFD73BAE04C1D0CC8_RuntimeMethod_var);
		V_2 = L_33;
		V_3 = 0;
		goto IL_064e;
	}

IL_00d4:
	{
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_34 = __this->___propDatas_47;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_36;
		L_36 = List_1_get_Item_m68F0E22360E0088E4149CBCBDAE6A1E67C16CD6C(L_34, L_35, List_1_get_Item_m68F0E22360E0088E4149CBCBDAE6A1E67C16CD6C_RuntimeMethod_var);
		V_4 = L_36;
		Type_t* L_37 = V_0;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_38 = V_4;
		NullCheck(L_38);
		String_t* L_39 = L_38->___propName_0;
		NullCheck(L_37);
		PropertyInfo_t* L_40;
		L_40 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_37, L_39, NULL);
		V_5 = L_40;
		PropertyInfo_t* L_41 = V_5;
		if (L_41)
		{
			goto IL_014a;
		}
	}
	{
		Type_t* L_42 = V_0;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = L_43->___propName_0;
		NullCheck(L_42);
		FieldInfo_t* L_45;
		L_45 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_42, L_44, NULL);
		V_1 = L_45;
		FieldInfo_t* L_46 = V_1;
		if (L_46)
		{
			goto IL_014a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_10 = L_47;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_10;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = V_10;
		RuntimeObject* L_50 = ___1_p_target;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = V_10;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = V_10;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_53 = V_4;
		NullCheck(L_53);
		String_t* L_54 = L_53->___propName_0;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_10;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralBED41A93D53C57A40BB6B79662E6D00E6BF4EFB1);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralBED41A93D53C57A40BB6B79662E6D00E6BF4EFB1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = V_10;
		String_t* L_57;
		L_57 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_56, NULL);
		TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_57, NULL);
		goto IL_064a;
	}

IL_014a:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_58 = V_4;
		NullCheck(L_58);
		RuntimeObject* L_59 = L_58->___endValOrPlugin_1;
		V_7 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)IsInstClass((RuntimeObject*)L_59, ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A_il2cpp_TypeInfo_var));
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_60 = V_7;
		if (!L_60)
		{
			goto IL_01c4;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_61 = V_7;
		V_6 = L_61;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_62 = V_6;
		RuntimeObject* L_63 = ___1_p_target;
		NullCheck(L_62);
		bool L_64;
		L_64 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean Holoville.HOTween.Plugins.Core.ABSTweenPlugin::ValidateTarget(System.Object) */, L_62, L_63);
		if (!L_64)
		{
			goto IL_0184;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_65 = V_6;
		NullCheck(L_65);
		bool L_66;
		L_66 = ABSTweenPlugin_get_initialized_mBDDF3D1051BAFBF04CAAF5600D799AE51D452397_inline(L_65, NULL);
		if (!L_66)
		{
			goto IL_0624;
		}
	}
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_67 = V_6;
		NullCheck(L_67);
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_68;
		L_68 = ABSTweenPlugin_CloneBasic_mCA9249440372C5ECD0B8A07D357C7D005CBDF22E(L_67, NULL);
		V_6 = L_68;
		goto IL_0624;
	}

IL_0184:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_11 = L_69;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = V_11;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_71 = V_6;
		NullCheck(L_71);
		Type_t* L_72;
		L_72 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_71, NULL);
		String_t* L_73;
		L_73 = Utils_SimpleClassName_m04D18EADDE8255C2C1DDB00067B4F55C8EB8F5FA(L_72, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_73);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = V_11;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral3B53C838334DF89B87164B8A5EE26C8FD470850B);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral3B53C838334DF89B87164B8A5EE26C8FD470850B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = V_11;
		RuntimeObject* L_76 = ___1_p_target;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_76);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_76);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = V_11;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = V_11;
		String_t* L_79;
		L_79 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_78, NULL);
		TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_79, NULL);
		goto IL_064a;
	}

IL_01c4:
	{
		V_6 = (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)NULL;
		PropertyInfo_t* L_80 = V_5;
		if (L_80)
		{
			goto IL_01f6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_81 = ((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38;
		FieldInfo_t* L_82 = V_1;
		NullCheck(L_82);
		Type_t* L_83;
		L_83 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_82);
		NullCheck(L_81);
		bool L_84;
		L_84 = Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F(L_81, L_83, Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		if (L_84)
		{
			goto IL_01e4;
		}
	}
	{
		G_B19_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0221;
	}

IL_01e4:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_85 = ((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38;
		FieldInfo_t* L_86 = V_1;
		NullCheck(L_86);
		Type_t* L_87;
		L_87 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_86);
		NullCheck(L_85);
		String_t* L_88;
		L_88 = Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008(L_85, L_87, Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var);
		G_B19_0 = L_88;
		goto IL_0221;
	}

IL_01f6:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_89 = ((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38;
		PropertyInfo_t* L_90 = V_5;
		NullCheck(L_90);
		Type_t* L_91;
		L_91 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_90);
		NullCheck(L_89);
		bool L_92;
		L_92 = Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F(L_89, L_91, Dictionary_2_ContainsKey_m5AF1FF54C84FB97FFB85E559036AB80013342C4F_RuntimeMethod_var);
		if (L_92)
		{
			goto IL_0210;
		}
	}
	{
		G_B19_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0221;
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_93 = ((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38;
		PropertyInfo_t* L_94 = V_5;
		NullCheck(L_94);
		Type_t* L_95;
		L_95 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_94);
		NullCheck(L_93);
		String_t* L_96;
		L_96 = Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008(L_93, L_95, Dictionary_2_get_Item_m3359894DA1EF277B87D6220E9C380C4C01AE6008_RuntimeMethod_var);
		G_B19_0 = L_96;
	}

IL_0221:
	{
		V_8 = G_B19_0;
		String_t* L_97 = V_8;
		String_t* L_98 = L_97;
		V_12 = L_98;
		if (!L_98)
		{
			goto IL_0549;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_99 = ((U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_StaticFields*)il2cpp_codegen_static_fields_for(U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var))->___U24U24method0x60002c2U2D1_0;
		il2cpp_codegen_memory_barrier();
		if (L_99)
		{
			goto IL_02c0;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_100 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		Dictionary_2__ctor_mBB2DBA9ECB2AD6046CB4CFB717FDD7E474A439AB(L_100, ((int32_t)10), Dictionary_2__ctor_mBB2DBA9ECB2AD6046CB4CFB717FDD7E474A439AB_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_101 = L_100;
		NullCheck(L_101);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_101, _stringLiteralCFA73882EBCB16AE44454CACF911EC21EF0A579C, 0, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_102 = L_101;
		NullCheck(L_102);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_102, _stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C, 1, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_103 = L_102;
		NullCheck(L_103);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_103, _stringLiteral82B1FFF171100778CEDD884A0E4A65666906E7EE, 2, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_104 = L_103;
		NullCheck(L_104);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_104, _stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88, 3, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_105 = L_104;
		NullCheck(L_105);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_105, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, 4, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_106 = L_105;
		NullCheck(L_106);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_106, _stringLiteral16B1A560D0508AB021624167CB1F87B6D48B02D6, 5, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_107 = L_106;
		NullCheck(L_107);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_107, _stringLiteral5F43C61FF910780A25E22CD0232290820C30BA1D, 6, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_108 = L_107;
		NullCheck(L_108);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_108, _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261, 7, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_109 = L_108;
		NullCheck(L_109);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_109, _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355, 8, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_110 = L_109;
		NullCheck(L_110);
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_110, _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A, ((int32_t)9), Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_memory_barrier();
		((U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_StaticFields*)il2cpp_codegen_static_fields_for(U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var))->___U24U24method0x60002c2U2D1_0 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_StaticFields*)il2cpp_codegen_static_fields_for(U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var))->___U24U24method0x60002c2U2D1_0), (void*)L_110);
	}

IL_02c0:
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_111 = ((U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_StaticFields*)il2cpp_codegen_static_fields_for(U3CPrivateImplementationDetailsU3EU7B84144E1BU2D185AU2D4E27U2DA8BDU2D7CDE365EA58EU7D_t1068F24B9687FFA1D4DBE086090028C6895FA320_il2cpp_TypeInfo_var))->___U24U24method0x60002c2U2D1_0;
		il2cpp_codegen_memory_barrier();
		String_t* L_112 = V_12;
		NullCheck(L_111);
		bool L_113;
		L_113 = Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A(L_111, L_112, (&V_13), Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		if (!L_113)
		{
			goto IL_0549;
		}
	}
	{
		int32_t L_114 = V_13;
		switch (L_114)
		{
			case 0:
			{
				goto IL_0309;
			}
			case 1:
			{
				goto IL_033e;
			}
			case 2:
			{
				goto IL_0373;
			}
			case 3:
			{
				goto IL_03a8;
			}
			case 4:
			{
				goto IL_040a;
			}
			case 5:
			{
				goto IL_043f;
			}
			case 6:
			{
				goto IL_0474;
			}
			case 7:
			{
				goto IL_04a9;
			}
			case 8:
			{
				goto IL_04de;
			}
			case 9:
			{
				goto IL_0514;
			}
		}
	}
	{
		goto IL_0549;
	}

IL_0309:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_115 = V_4;
		NullCheck(L_115);
		RuntimeObject* L_116 = L_115->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_117 = ((PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_118;
		L_118 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_116, L_117, NULL);
		if (!L_118)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_119 = V_4;
		NullCheck(L_119);
		RuntimeObject* L_120 = L_119->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_121 = V_4;
		NullCheck(L_121);
		bool L_122 = L_121->___isRelative_2;
		PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8* L_123 = (PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8*)il2cpp_codegen_object_new(PlugVector2_t1833992ECF7D55CA00358CF7512F9E89FB0C48C8_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		PlugVector2__ctor_mD38E3F80476EF22E23B0D6902C1EBFBE597E50DD(L_123, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_120, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), L_122, NULL);
		V_6 = L_123;
		goto IL_05df;
	}

IL_033e:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_124 = V_4;
		NullCheck(L_124);
		RuntimeObject* L_125 = L_124->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_126 = ((PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_127;
		L_127 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_125, L_126, NULL);
		if (!L_127)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_128 = V_4;
		NullCheck(L_128);
		RuntimeObject* L_129 = L_128->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_130 = V_4;
		NullCheck(L_130);
		bool L_131 = L_130->___isRelative_2;
		PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E* L_132 = (PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E*)il2cpp_codegen_object_new(PlugVector3_tC11284528716A47F8BDB7B404DE18F28FC53E82E_il2cpp_TypeInfo_var);
		NullCheck(L_132);
		PlugVector3__ctor_mFAEE32D17D68FA03776ED57F2C2A351D19A2621B(L_132, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_129, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), L_131, NULL);
		V_6 = L_132;
		goto IL_05df;
	}

IL_0373:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_133 = V_4;
		NullCheck(L_133);
		RuntimeObject* L_134 = L_133->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_135 = ((PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_StaticFields*)il2cpp_codegen_static_fields_for(PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_136;
		L_136 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_134, L_135, NULL);
		if (!L_136)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_137 = V_4;
		NullCheck(L_137);
		RuntimeObject* L_138 = L_137->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_139 = V_4;
		NullCheck(L_139);
		bool L_140 = L_139->___isRelative_2;
		PlugVector4_t182247639032B73333E7055ED1105099DEED99DF* L_141 = (PlugVector4_t182247639032B73333E7055ED1105099DEED99DF*)il2cpp_codegen_object_new(PlugVector4_t182247639032B73333E7055ED1105099DEED99DF_il2cpp_TypeInfo_var);
		NullCheck(L_141);
		PlugVector4__ctor_m348E95DFFA753B9E5A4DF1A5AB25DEA5DBD84E81(L_141, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_138, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), L_140, NULL);
		V_6 = L_141;
		goto IL_05df;
	}

IL_03a8:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_142 = V_4;
		NullCheck(L_142);
		RuntimeObject* L_143 = L_142->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_144 = ((PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields*)il2cpp_codegen_static_fields_for(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_143, L_144, NULL);
		if (!L_145)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_146 = V_4;
		NullCheck(L_146);
		RuntimeObject* L_147 = L_146->___endValOrPlugin_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_147, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_03eb;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_148 = V_4;
		NullCheck(L_148);
		RuntimeObject* L_149 = L_148->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_150 = V_4;
		NullCheck(L_150);
		bool L_151 = L_150->___isRelative_2;
		PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* L_152 = (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1*)il2cpp_codegen_object_new(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var);
		NullCheck(L_152);
		PlugQuaternion__ctor_m653333B63186F7A0F1430587FAF26EE4A67302D8(L_152, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_149, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), L_151, NULL);
		V_6 = L_152;
		goto IL_05df;
	}

IL_03eb:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_153 = V_4;
		NullCheck(L_153);
		RuntimeObject* L_154 = L_153->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_155 = V_4;
		NullCheck(L_155);
		bool L_156 = L_155->___isRelative_2;
		PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* L_157 = (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1*)il2cpp_codegen_object_new(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var);
		NullCheck(L_157);
		PlugQuaternion__ctor_m46BD79B83263F7486AA657F2BDB40E50A2198049(L_157, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_154, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), L_156, NULL);
		V_6 = L_157;
		goto IL_05df;
	}

IL_040a:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_158 = V_4;
		NullCheck(L_158);
		RuntimeObject* L_159 = L_158->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_160 = ((PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_161;
		L_161 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_159, L_160, NULL);
		if (!L_161)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_162 = V_4;
		NullCheck(L_162);
		RuntimeObject* L_163 = L_162->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_164 = V_4;
		NullCheck(L_164);
		bool L_165 = L_164->___isRelative_2;
		PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF* L_166 = (PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF*)il2cpp_codegen_object_new(PlugColor_t6AB8BACA97784733D72CD239B3E2BD5AC3B2B8BF_il2cpp_TypeInfo_var);
		NullCheck(L_166);
		PlugColor__ctor_m9587F07E6E13DF59F6DBB8795BC7408688ABF745(L_166, ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_163, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var)))), L_165, NULL);
		V_6 = L_166;
		goto IL_05df;
	}

IL_043f:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_167 = V_4;
		NullCheck(L_167);
		RuntimeObject* L_168 = L_167->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_169 = ((PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_StaticFields*)il2cpp_codegen_static_fields_for(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_168, L_169, NULL);
		if (!L_170)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_171 = V_4;
		NullCheck(L_171);
		RuntimeObject* L_172 = L_171->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_173 = V_4;
		NullCheck(L_173);
		bool L_174 = L_173->___isRelative_2;
		PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19* L_175 = (PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19*)il2cpp_codegen_object_new(PlugColor32_tE4C23DC55F6C37D2646186A4367A3324A714BD19_il2cpp_TypeInfo_var);
		NullCheck(L_175);
		PlugColor32__ctor_mA746143BEC963C76BB01E625BE07D6E7B6D83E4E(L_175, ((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_172, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var)))), L_174, NULL);
		V_6 = L_175;
		goto IL_05df;
	}

IL_0474:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_176 = V_4;
		NullCheck(L_176);
		RuntimeObject* L_177 = L_176->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_178 = ((PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_StaticFields*)il2cpp_codegen_static_fields_for(PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_179;
		L_179 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_177, L_178, NULL);
		if (!L_179)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_180 = V_4;
		NullCheck(L_180);
		RuntimeObject* L_181 = L_180->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_182 = V_4;
		NullCheck(L_182);
		bool L_183 = L_182->___isRelative_2;
		PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888* L_184 = (PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888*)il2cpp_codegen_object_new(PlugRect_tF76294752A03DC508D606336D3CC6B766CDF0888_il2cpp_TypeInfo_var);
		NullCheck(L_184);
		PlugRect__ctor_m1CCAC707C847323D566B4B359BD492E0368C1750(L_184, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_181, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var)))), L_183, NULL);
		V_6 = L_184;
		goto IL_05df;
	}

IL_04a9:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_185 = V_4;
		NullCheck(L_185);
		RuntimeObject* L_186 = L_185->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_187 = ((PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_StaticFields*)il2cpp_codegen_static_fields_for(PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_188;
		L_188 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_186, L_187, NULL);
		if (!L_188)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_189 = V_4;
		NullCheck(L_189);
		RuntimeObject* L_190 = L_189->___endValOrPlugin_1;
		NullCheck(L_190);
		String_t* L_191;
		L_191 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_190);
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_192 = V_4;
		NullCheck(L_192);
		bool L_193 = L_192->___isRelative_2;
		PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580* L_194 = (PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580*)il2cpp_codegen_object_new(PlugString_t93DF9CFF9BB85A95AB002DCB3FEB3B4ACC55A580_il2cpp_TypeInfo_var);
		NullCheck(L_194);
		PlugString__ctor_mBC5CF13283AEDED7546061AFDDCD1BC3049D9D12(L_194, L_191, L_193, NULL);
		V_6 = L_194;
		goto IL_05df;
	}

IL_04de:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_195 = V_4;
		NullCheck(L_195);
		RuntimeObject* L_196 = L_195->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_197 = ((PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields*)il2cpp_codegen_static_fields_for(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_198;
		L_198 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_196, L_197, NULL);
		if (!L_198)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_199 = V_4;
		NullCheck(L_199);
		RuntimeObject* L_200 = L_199->___endValOrPlugin_1;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_201 = V_4;
		NullCheck(L_201);
		bool L_202 = L_201->___isRelative_2;
		PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* L_203 = (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5*)il2cpp_codegen_object_new(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var);
		NullCheck(L_203);
		PlugInt__ctor_m36BBA904D1AA75C2195D945C7D808BB4404D404D(L_203, ((float)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_200, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))), L_202, NULL);
		V_6 = L_203;
		goto IL_05df;
	}

IL_0514:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_204 = V_4;
		NullCheck(L_204);
		RuntimeObject* L_205 = L_204->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_206 = ((PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_StaticFields*)il2cpp_codegen_static_fields_for(PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_il2cpp_TypeInfo_var))->___validValueTypes_26;
		il2cpp_codegen_runtime_class_init_inline(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		bool L_207;
		L_207 = TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B(L_205, L_206, NULL);
		if (!L_207)
		{
			goto IL_05df;
		}
	}
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_208 = V_4;
		NullCheck(L_208);
		RuntimeObject* L_209 = L_208->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_210;
		L_210 = Convert_ToUInt32_m43E1714EE10A586A708C133F3302844B7FF2E350(L_209, NULL);
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_211 = V_4;
		NullCheck(L_211);
		bool L_212 = L_211->___isRelative_2;
		PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE* L_213 = (PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE*)il2cpp_codegen_object_new(PlugUInt_tC3E357613DC4539C4A70A0E23C5CEE83E02616DE_il2cpp_TypeInfo_var);
		NullCheck(L_213);
		PlugUInt__ctor_mEC3B2A37A1FD0C3E529350590B520348BB035B22(L_213, L_210, L_212, NULL);
		V_6 = L_213;
		goto IL_05df;
	}

IL_0549:
	{
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_214 = V_4;
		NullCheck(L_214);
		RuntimeObject* L_215 = L_214->___endValOrPlugin_1;
		NullCheck(L_215);
		Type_t* L_216;
		L_216 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_215, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_218;
		L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
		if ((((RuntimeObject*)(Type_t*)L_216) == ((RuntimeObject*)(Type_t*)L_218)))
		{
			goto IL_05df;
		}
	}
	try
	{// begin try (depth: 1)
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_219 = V_4;
		NullCheck(L_219);
		RuntimeObject* L_220 = L_219->___endValOrPlugin_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_221;
		L_221 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_220, NULL);
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_222 = V_4;
		NullCheck(L_222);
		bool L_223 = L_222->___isRelative_2;
		PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B* L_224 = (PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B*)il2cpp_codegen_object_new(PlugFloat_t93A397BF2C4A2CF36C2B5CCB774BBB0EA2FA9F3B_il2cpp_TypeInfo_var);
		NullCheck(L_224);
		PlugFloat__ctor_m7F3FBD710426F3E263968ABEA94E1083679AB401(L_224, L_221, L_223, NULL);
		V_6 = L_224;
		goto IL_05df;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_057d;
		}
		throw e;
	}

CATCH_057d:
	{// begin catch(System.Exception)
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_225 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)7);
			V_14 = L_225;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_226 = V_14;
			NullCheck(L_226);
			ArrayElementTypeCheck (L_226, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA98C7A22AA6A1C57588D0F7FF2DA7969390ED248)));
			(L_226)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA98C7A22AA6A1C57588D0F7FF2DA7969390ED248)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_227 = V_14;
			RuntimeObject* L_228 = ___1_p_target;
			NullCheck(L_227);
			ArrayElementTypeCheck (L_227, L_228);
			(L_227)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_228);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_229 = V_14;
			NullCheck(L_229);
			ArrayElementTypeCheck (L_229, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
			(L_229)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_230 = V_14;
			HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_231 = V_4;
			NullCheck(L_231);
			String_t* L_232 = L_231->___propName_0;
			NullCheck(L_230);
			ArrayElementTypeCheck (L_230, L_232);
			(L_230)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_232);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_233 = V_14;
			NullCheck(L_233);
			ArrayElementTypeCheck (L_233, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F49C847A1A5CEB5577FEA54212488B3D7D0B825)));
			(L_233)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F49C847A1A5CEB5577FEA54212488B3D7D0B825)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_234 = V_14;
			PropertyInfo_t* L_235 = V_5;
			G_B50_0 = 5;
			G_B50_1 = L_234;
			if (L_235)
			{
				G_B51_0 = 5;
				G_B51_1 = L_234;
				goto IL_05c0;
			}
		}
		{
			FieldInfo_t* L_236 = V_1;
			NullCheck(L_236);
			Type_t* L_237;
			L_237 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_236);
			G_B52_0 = L_237;
			G_B52_1 = G_B50_0;
			G_B52_2 = G_B50_1;
			goto IL_05c7;
		}

IL_05c0:
		{
			PropertyInfo_t* L_238 = V_5;
			NullCheck(L_238);
			Type_t* L_239;
			L_239 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_238);
			G_B52_0 = L_239;
			G_B52_1 = G_B51_0;
			G_B52_2 = G_B51_1;
		}

IL_05c7:
		{
			NullCheck(G_B52_2);
			ArrayElementTypeCheck (G_B52_2, G_B52_0);
			(G_B52_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_1), (RuntimeObject*)G_B52_0);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_240 = V_14;
			NullCheck(L_240);
			ArrayElementTypeCheck (L_240, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED)));
			(L_240)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B64ECB86CB3E3562CA21F15EDF2E19D670A51ED)));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_241 = V_14;
			String_t* L_242;
			L_242 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_241, NULL);
			TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_242, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_064a;
		}
	}// end catch (depth: 1)

IL_05df:
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_243 = V_6;
		if (L_243)
		{
			goto IL_0624;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_244 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_15 = L_244;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_245 = V_15;
		NullCheck(L_245);
		ArrayElementTypeCheck (L_245, _stringLiteralEB60F7CAA481E19A64B444094946BAD0787BCE63);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralEB60F7CAA481E19A64B444094946BAD0787BCE63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_246 = V_15;
		RuntimeObject* L_247 = ___1_p_target;
		NullCheck(L_246);
		ArrayElementTypeCheck (L_246, L_247);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_247);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_248 = V_15;
		NullCheck(L_248);
		ArrayElementTypeCheck (L_248, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_248)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_249 = V_15;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_250 = V_4;
		NullCheck(L_250);
		String_t* L_251 = L_250->___propName_0;
		NullCheck(L_249);
		ArrayElementTypeCheck (L_249, L_251);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_251);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_252 = V_15;
		NullCheck(L_252);
		ArrayElementTypeCheck (L_252, _stringLiteral14C4F2807068D9640EE91247145D17939966A293);
		(L_252)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral14C4F2807068D9640EE91247145D17939966A293);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_253 = V_15;
		String_t* L_254;
		L_254 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_253, NULL);
		TweenWarning_Log_mD858AE1285DA74AD38B19D90625472F7C087356B(L_254, NULL);
		goto IL_064a;
	}

IL_0624:
	{
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_255 = V_6;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_256 = ___0_p_tweenObj;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_257 = V_4;
		NullCheck(L_257);
		String_t* L_258 = L_257->___propName_0;
		int32_t L_259 = __this->___easeType_42;
		Type_t* L_260 = V_0;
		PropertyInfo_t* L_261 = V_5;
		FieldInfo_t* L_262 = V_1;
		NullCheck(L_255);
		VirtualActionInvoker6< Tweener_t99074CD44759EE1C18B018744C9E38243A40871A*, String_t*, int32_t, Type_t*, PropertyInfo_t*, FieldInfo_t* >::Invoke(9 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::Init(Holoville.HOTween.Tweener,System.String,Holoville.HOTween.EaseType,System.Type,System.Reflection.PropertyInfo,System.Reflection.FieldInfo) */, L_255, L_256, L_258, L_259, L_260, L_261, L_262);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_263 = ___0_p_tweenObj;
		NullCheck(L_263);
		List_1_t696500FAD911AE9CC1F61D3C277AF6093BF4B16A* L_264 = L_263->___plugins_72;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_265 = V_6;
		NullCheck(L_264);
		List_1_Add_m0C336245737552A850BF98B9B62610882672A341_inline(L_264, L_265, List_1_Add_m0C336245737552A850BF98B9B62610882672A341_RuntimeMethod_var);
	}

IL_064a:
	{
		int32_t L_266 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_266, 1));
	}

IL_064e:
	{
		int32_t L_267 = V_3;
		int32_t L_268 = V_2;
		if ((((int32_t)L_267) < ((int32_t)L_268)))
		{
			goto IL_00d4;
		}
	}
	{
		return;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::PixelPerfect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_PixelPerfect_m3923AD11DAB9968644C70157C083368F763AA194 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	{
		__this->___pixelPerfect_39 = (bool)1;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::SpeedBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_SpeedBased_m0FD8E2F19541F34A68A24D2EC11AE269CC547ED4 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	{
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_0;
		L_0 = TweenParms_SpeedBased_m7CB84221AF4EB6D777885A8023C636104A20ECCD(__this, (bool)1, NULL);
		return L_0;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::SpeedBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_SpeedBased_m7CB84221AF4EB6D777885A8023C636104A20ECCD (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, bool ___0_p_speedBased, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_speedBased;
		__this->___speedBased_40 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Ease(Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Ease_m2239F2056CC81A905ED58A77D51E87293B229BAC (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_easeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_p_easeType;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		float L_1 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEaseOvershootOrAmplitude_11;
		float L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEasePeriod_12;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_3;
		L_3 = TweenParms_Ease_mB302FD168B34BF99116AA23AC925761871053D9B(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Ease(Holoville.HOTween.EaseType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Ease_m82C5E7F5B5934DCEAAF36375BFB004DC4B9CD010 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_easeType, float ___1_p_overshoot, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_p_easeType;
		float L_1 = ___1_p_overshoot;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		float L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEasePeriod_12;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_3;
		L_3 = TweenParms_Ease_mB302FD168B34BF99116AA23AC925761871053D9B(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Ease(Holoville.HOTween.EaseType,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Ease_mB302FD168B34BF99116AA23AC925761871053D9B (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_easeType, float ___1_p_amplitude, float ___2_p_period, const RuntimeMethod* method) 
{
	{
		__this->___easeSet_41 = (bool)1;
		int32_t L_0 = ___0_p_easeType;
		__this->___easeType_42 = L_0;
		float L_1 = ___1_p_amplitude;
		__this->___easeOvershootOrAmplitude_44 = L_1;
		float L_2 = ___2_p_period;
		__this->___easePeriod_45 = L_2;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Ease(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Ease_m72F10CB93D8FC98D43D9FA9672DACE62F687F81D (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_p_easeAnimationCurve, const RuntimeMethod* method) 
{
	{
		__this->___easeSet_41 = (bool)1;
		__this->___easeType_42 = ((int32_t)31);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_p_easeAnimationCurve;
		__this->___easeAnimCurve_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easeAnimCurve_43), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Delay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Delay_mBAFB272EC1B21EAF7FBA48BC96E636977A6D6643 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, float ___0_p_delay, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_delay;
		__this->___delay_46 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Pause_mDBE7E52CBCA97780ECBCC7F034BB2F5BEA90167D (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	{
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_0;
		L_0 = TweenParms_Pause_mA62F1F2E657D0A048F6EB4A437ECC48EE58FA18C(__this, (bool)1, NULL);
		return L_0;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Pause_mA62F1F2E657D0A048F6EB4A437ECC48EE58FA18C (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, bool ___0_p_pause, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_pause;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___isPaused_7 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::NewProp(System.String,Holoville.HOTween.Plugins.Core.ABSTweenPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_NewProp_mE1F53087BFF5D553B112A4AE2A0A69DC62C24767 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* ___1_p_plugin, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_propName;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_1 = ___1_p_plugin;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_2;
		L_2 = TweenParms_NewProp_mA81C6C9DD2846A606A89ACAEF7281F35770DCCD0(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::NewProp(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_NewProp_mDAB2B1D6E1C93DBFE3F461A9F68B005F1C96967C (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_propName;
		RuntimeObject* L_1 = ___1_p_endVal;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_2;
		L_2 = TweenParms_NewProp_mA81C6C9DD2846A606A89ACAEF7281F35770DCCD0(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::NewProp(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_NewProp_mA81C6C9DD2846A606A89ACAEF7281F35770DCCD0 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	{
		__this->___propDatas_47 = (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propDatas_47), (void*)(List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*)NULL);
		String_t* L_0 = ___0_p_propName;
		RuntimeObject* L_1 = ___1_p_endVal;
		bool L_2 = ___2_p_isRelative;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_3;
		L_3 = TweenParms_Prop_m52667C136BA3A423786787A2E8B27D3BB1E25BA0(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Prop(System.String,Holoville.HOTween.Plugins.Core.ABSTweenPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Prop_m1E6374BA7365EFA50DBA6654C21A3E2D89FD8C81 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* ___1_p_plugin, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_propName;
		ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* L_1 = ___1_p_plugin;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_2;
		L_2 = TweenParms_Prop_m52667C136BA3A423786787A2E8B27D3BB1E25BA0(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Prop(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Prop_mADE8C79AEFF46387BD66FD1281A5F4871A977D89 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_propName;
		RuntimeObject* L_1 = ___1_p_endVal;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_2;
		L_2 = TweenParms_Prop_m52667C136BA3A423786787A2E8B27D3BB1E25BA0(__this, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Prop(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Prop_m52667C136BA3A423786787A2E8B27D3BB1E25BA0 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endVal, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1CBA8A3D48739CC5AF6BCBBD86D0086BB762DE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5D2B3DB01D3330882450D6B77EB81FBDA75042CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_0 = __this->___propDatas_47;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_1 = (List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD*)il2cpp_codegen_object_new(List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5D2B3DB01D3330882450D6B77EB81FBDA75042CA(L_1, List_1__ctor_m5D2B3DB01D3330882450D6B77EB81FBDA75042CA_RuntimeMethod_var);
		__this->___propDatas_47 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propDatas_47), (void*)L_1);
	}

IL_0013:
	{
		List_1_t046A226EC5EE4BD84CD4514A2655CC859E3AADDD* L_2 = __this->___propDatas_47;
		String_t* L_3 = ___0_p_propName;
		RuntimeObject* L_4 = ___1_p_endVal;
		bool L_5 = ___2_p_isRelative;
		HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* L_6 = (HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79*)il2cpp_codegen_object_new(HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		HOTPropData__ctor_mEB72EC44DC80528C9615FBB1580D2208C1C27DEA(L_6, L_3, L_4, L_5, NULL);
		NullCheck(L_2);
		List_1_Add_m1CBA8A3D48739CC5AF6BCBBD86D0086BB762DE1A_inline(L_2, L_6, List_1_Add_m1CBA8A3D48739CC5AF6BCBBD86D0086BB762DE1A_RuntimeMethod_var);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Id_m3F778CAACB05B79BF6D06E875CB4186154FEDEB4 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, String_t* ___0_p_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_id;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___id_0), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::IntId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_IntId_mDD84E8C4B10AC0B17EC46C9448CB44161B6A7E17 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_intId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_intId;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___intId_1 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::AutoKill(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_AutoKill_m336EF4095BD04F73271FC6BC18172531EF63AB58 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, bool ___0_p_active, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_active;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___autoKillOnComplete_2 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::UpdateType(Holoville.HOTween.UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_UpdateType_m94959C570D78097687980C2EB04908F0145076D4 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_updateType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_updateType;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___updateType_3 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::TimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_TimeScale_m3B26C008E3C0F957F044A4FC0AB97ED8ABBA9FB8 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, float ___0_p_timeScale, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_timeScale;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___timeScale_4 = L_0;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Loops(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Loops_mE2C2F106984F8D49D02CFA2B2EC9A09AF3BBB632 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_loops, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_p_loops;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_1 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defLoopType_13;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_2;
		L_2 = TweenParms_Loops_mFD3B261B9B6C37DD20528F6E622E0145F0B23974(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::Loops(System.Int32,Holoville.HOTween.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_Loops_mFD3B261B9B6C37DD20528F6E622E0145F0B23974 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, int32_t ___0_p_loops, int32_t ___1_p_loopType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_loops;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___loops_5 = L_0;
		int32_t L_1 = ___1_p_loopType;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___loopType_6 = L_1;
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnStart(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnStart_m9044C94DE290F1657821BF07ACF465D6A704BCEA (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStart_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStart_8), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnStart(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnStart_mCCE9DBB00AF0A79C58536DFDF2EB5A24E56941EF (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartWParms_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartWParms_9), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartParms_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartParms_10), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnUpdate(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnUpdate_m4566C3406E8B8C86B639F2160A0E576F7E1941FF (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdate_11), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnUpdate(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnUpdate_m46C7F3F5051D680202E67EF983C90766D58BC468 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateWParms_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateWParms_12), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateParms_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateParms_13), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPluginUpdated(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPluginUpdated_m402502BCF0E48D05CF0098EAFACF021028AAEF0E (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPluginUpdatedWParms_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPluginUpdatedWParms_15), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPluginUpdatedParms_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPluginUpdatedParms_16), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPause(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPause_mE9F805C204B3EF41D5452B68D5E75EF7D16D8B83 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPause_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPause_17), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPause(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPause_m50E258A6E548C12047E1331B1FA363B2FB819B40 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseWParms_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseWParms_18), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseParms_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseParms_19), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPlay(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPlay_m963D2982C4484AE05578A25FB5E0894ADFC47EF3 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlay_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlay_20), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPlay(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPlay_m74068535352A4A2269C9BE7F71380C20F8BA08A2 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayWParms_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayWParms_21), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayParms_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayParms_22), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnRewinded(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnRewinded_m2B01B4F28EBAFFEDFF4069D57EC02E4155A22E4E (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewinded_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewinded_23), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnRewinded(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnRewinded_m2FF679B83D3BCFF1AC1C74E0C92B372FF55095E2 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedWParms_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedWParms_24), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedParms_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedParms_25), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnStepComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnStepComplete_m1561B57D3EFDA3B2EF0D9A8D39716DBD838909CE (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepComplete_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepComplete_26), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnStepComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnStepComplete_mD207D3E72661F76E8984402C90697832B11F8744 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnStepComplete(UnityEngine.GameObject,System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnStepComplete_m2A44B0B835DE35CB73983E242B61F0EB47F19829 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_sendMessageTarget, String_t* ___1_p_methodName, RuntimeObject* ___2_p_value, int32_t ___3_p_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF*)il2cpp_codegen_object_new(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520(L_0, NULL, (intptr_t)((void*)HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var), NULL);
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_p_sendMessageTarget;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5 = ___1_p_methodName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		RuntimeObject* L_7 = ___2_p_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = ___3_p_options;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28), (void*)L_12);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnComplete_mDFB601AC949292EA7FE01D75074307CC233B3559 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onComplete_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onComplete_29), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnComplete_mA83BB01D06EEF4265FB12F96424D41775F814EFC (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnComplete(UnityEngine.GameObject,System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnComplete_m96A7E52367591089EB46EF61EC3C19ED84EFDBA4 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_sendMessageTarget, String_t* ___1_p_methodName, RuntimeObject* ___2_p_value, int32_t ___3_p_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF*)il2cpp_codegen_object_new(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520(L_0, NULL, (intptr_t)((void*)HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var), NULL);
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_p_sendMessageTarget;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5 = ___1_p_methodName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		RuntimeObject* L_7 = ___2_p_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = ___3_p_options;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31), (void*)L_12);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPluginOverwritten(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPluginOverwritten_m9DB4587957D84F7EE20CC8D1B4247454A8BF0F34 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		__this->___onPluginOverwritten_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPluginOverwritten_49), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::OnPluginOverwritten(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_OnPluginOverwritten_mB9F03BA5F7DFC343716C36A3303ECA61EF6B4744 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		__this->___onPluginOverwrittenWParms_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPluginOverwrittenWParms_50), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		__this->___onPluginOverwrittenParms_51 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPluginOverwrittenParms_51), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_m9AAED112B8894EE288FE0683A73407181F2854A4 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)0;
		return __this;
	}

IL_0012:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = (BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)SZArrayNew(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_3 = V_0;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_4);
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_5 = V_0;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_6;
		L_6 = TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F(__this, L_5, (bool)1, NULL);
		return L_6;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_mEBEBB6B052637A39945F90056C75504EC6A113CE (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)0;
		return __this;
	}

IL_0012:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_6;
		L_6 = TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556(__this, L_5, (bool)1, NULL);
		return L_6;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.Behaviour[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_m0868C0C5D4A5A8B6E9F2CBA839B7B49C7296E73D (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = ___0_p_targets;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_1;
		L_1 = TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_mB8499FC2C3AC7B37591A9DC634D07356EBAEEC27 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_p_targets;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_1;
		L_1 = TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepDisabled(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepDisabled_mC0320C577D0552B7F3A10416F467A295F80D43C5 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)0;
		return __this;
	}

IL_0012:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = (BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)SZArrayNew(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_3 = V_0;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_4);
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_5 = V_0;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_6;
		L_6 = TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F(__this, L_5, (bool)0, NULL);
		return L_6;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepDisabled(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepDisabled_m1D5512B40C41827DB2C636075E6580E40D1D178B (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)0;
		return __this;
	}

IL_0012:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_6;
		L_6 = TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556(__this, L_5, (bool)0, NULL);
		return L_6;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepDisabled(UnityEngine.Behaviour[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepDisabled_m2A34BAB97B6003984282F8B6EC7EAA7229061735 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = ___0_p_targets;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_1;
		L_1 = TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepDisabled(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepDisabled_m0D9B917BF4D510EEEC0DEB3C6FDACC77406E99D0 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_p_targets;
		TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* L_1;
		L_1 = TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_m6DBF89A5EF4F1BE0A4D6CDD7433DDE111477A57F (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) 
{
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)1;
		bool L_0 = ___1_p_enabled;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_1 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOn_34 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOn_34), (void*)L_1);
		goto IL_001a;
	}

IL_0013:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOff_35 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOff_35), (void*)L_2);
	}

IL_001a:
	{
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::KeepEnabled(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_KeepEnabled_mC0852AB687561ED8C90B1A202661E4ACEE270556 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) 
{
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)1;
		bool L_0 = ___1_p_enabled;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOn_36 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOn_36), (void*)L_1);
		goto IL_001a;
	}

IL_0013:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOff_37 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOff_37), (void*)L_2);
	}

IL_001a:
	{
		return __this;
	}
}
// Holoville.HOTween.TweenParms Holoville.HOTween.TweenParms::IsFrom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* TweenParms_IsFrom_m03B51C6DE24F9912B052954DDDACD644E13BAC39 (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	{
		__this->___isFrom_48 = (bool)1;
		return __this;
	}
}
// System.Boolean Holoville.HOTween.TweenParms::ValidateValue(System.Object,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenParms_ValidateValue_mBBCB88F963881CE49CA2DCB64FEF14C26F147A9B (RuntimeObject* ___0_p_val, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_p_validVals, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisType_t_m2923AB55EE8374E8CABFAD02C349A1C742E82B8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___1_p_validVals;
		RuntimeObject* L_1 = ___0_p_val;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		int32_t L_3;
		L_3 = Array_IndexOf_TisType_t_m2923AB55EE8374E8CABFAD02C349A1C742E82B8A(L_0, L_2, Array_IndexOf_TisType_t_m2923AB55EE8374E8CABFAD02C349A1C742E82B8A_RuntimeMethod_var);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Holoville.HOTween.TweenParms::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParms__ctor_mBBE01A0AC0D7F5D39B15749CAD6F18A84A9A013E (TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEaseType_10;
		__this->___easeType_42 = L_0;
		float L_1 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEaseOvershootOrAmplitude_11;
		__this->___easeOvershootOrAmplitude_44 = L_1;
		float L_2 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEasePeriod_12;
		__this->___easePeriod_45 = L_2;
		ABSTweenComponentParms__ctor_m689C96ED2202D6F626DB88BBF1F031D265508270(__this, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.TweenParms::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParms__cctor_m18FB70B742F40C9BFBF1AA63DEE2863FE67F3686 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD41ECDF321C38DCCF6A9FFC5CC98C0D1D8E2764C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16B1A560D0508AB021624167CB1F87B6D48B02D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F43C61FF910780A25E22CD0232290820C30BA1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B1FFF171100778CEDD884A0E4A65666906E7EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA73882EBCB16AE44454CACF911EC21EF0A579C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* V_0 = NULL;
	{
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_0 = (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*)il2cpp_codegen_object_new(Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD41ECDF321C38DCCF6A9FFC5CC98C0D1D8E2764C(L_0, 8, Dictionary_2__ctor_mD41ECDF321C38DCCF6A9FFC5CC98C0D1D8E2764C_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_1, L_3, _stringLiteralCFA73882EBCB16AE44454CACF911EC21EF0A579C, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_4, L_6, _stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_7, L_9, _stringLiteral82B1FFF171100778CEDD884A0E4A65666906E7EE, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_10 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_10, L_12, _stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_13, L_15, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_16, L_18, _stringLiteral16B1A560D0508AB021624167CB1F87B6D48B02D6, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_19, L_21, _stringLiteral5F43C61FF910780A25E22CD0232290820C30BA1D, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_22, L_24, _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_25 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_25, L_27, _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_28, L_30, _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_31 = V_0;
		((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_StaticFields*)il2cpp_codegen_static_fields_for(TweenParms_tC2C9DD2644457A03D75AF9C15B4CF78ACBF68D3D_il2cpp_TypeInfo_var))->____TypeToShortString_38), (void*)L_31);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.TweenParms/HOTPropData::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HOTPropData__ctor_mEB72EC44DC80528C9615FBB1580D2208C1C27DEA (HOTPropData_t20C0DB5CD048AE843BD2A4BCEB3BB35A53CAFC79* __this, String_t* ___0_p_propName, RuntimeObject* ___1_p_endValOrPlugin, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_p_propName;
		__this->___propName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propName_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_p_endValOrPlugin;
		__this->___endValOrPlugin_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endValOrPlugin_1), (void*)L_1);
		bool L_2 = ___2_p_isRelative;
		__this->___isRelative_2 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Cubic::EaseIn(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cubic_EaseIn_mF68A8ADE66D4E5173A9738D5590AB972781CE169 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_3)), L_4)), L_5)), L_6));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Cubic::EaseOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cubic_EaseOut_m76FCBA54077D20DB2AADF0670AFCC518C33922C9 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)il2cpp_codegen_subtract(((float)(L_1/L_2)), (1.0f)));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), (1.0f))))), L_6));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Cubic::EaseInOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cubic_EaseInOut_m9D8AEF7EDC6B0F59FFB2E03FB46440E491D41112 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_time;
		float L_1 = ___3_duration;
		float L_2 = ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		___0_time = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		float L_3 = ___2_changeValue;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___0_time;
		float L_7 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, (0.5f))), L_4)), L_5)), L_6)), L_7));
	}

IL_0023:
	{
		float L_8 = ___2_changeValue;
		float L_9 = ___0_time;
		float L_10 = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		___0_time = L_10;
		float L_11 = ___0_time;
		float L_12 = ___0_time;
		float L_13 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), L_12)), (2.0f))))), L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Circ::EaseIn(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Circ_EaseIn_mCA6A087D56618ADEC9B3CEFB23DFBE2050B3D5C2 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = sqrt(((double)((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, L_4))))));
		float L_6 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((-L_0)), ((float)il2cpp_codegen_subtract(((float)L_5), (1.0f))))), L_6));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Circ::EaseOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Circ_EaseOut_mFF24BECA2B1B493A21CD525869E6A9C854DB51EB (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)il2cpp_codegen_subtract(((float)(L_1/L_2)), (1.0f)));
		___0_time = L_3;
		float L_4 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = sqrt(((double)((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, L_4))))));
		float L_6 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)L_5))), L_6));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Circ::EaseInOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Circ_EaseInOut_m93524D3A4D7315DAD226CF7CBA838B0FEEBB88D4 (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_unusedOvershootOrAmplitude, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_time;
		float L_1 = ___3_duration;
		float L_2 = ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		___0_time = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_3 = ___2_changeValue;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		float L_7 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_3)), (0.5f))), ((float)il2cpp_codegen_subtract(((float)L_6), (1.0f))))), L_7));
	}

IL_0035:
	{
		float L_8 = ___2_changeValue;
		float L_9 = ___0_time;
		float L_10 = ((float)il2cpp_codegen_subtract(L_9, (2.0f)));
		___0_time = L_10;
		float L_11 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		float L_13 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_add(((float)L_12), (1.0f))))), L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.Core.Easing.Back::EaseIn(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Back_EaseIn_m6BFA78FC66458D32BFAB1D2FD39602A6D28D001A (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshoot, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)(L_1/L_2));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___4_overshoot;
		float L_6 = ___0_time;
		float L_7 = ___4_overshoot;
		float L_8 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_3)), L_4)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_5, (1.0f))), L_6)), L_7)))), L_8));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Back::EaseOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Back_EaseOut_m7D6F1FE29C491DBF471231363C3D4781548509DE (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshoot, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_changeValue;
		float L_1 = ___0_time;
		float L_2 = ___3_duration;
		float L_3 = ((float)il2cpp_codegen_subtract(((float)(L_1/L_2)), (1.0f)));
		___0_time = L_3;
		float L_4 = ___0_time;
		float L_5 = ___4_overshoot;
		float L_6 = ___0_time;
		float L_7 = ___4_overshoot;
		float L_8 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_5, (1.0f))), L_6)), L_7)))), (1.0f))))), L_8));
	}
}
// System.Single Holoville.HOTween.Core.Easing.Back::EaseInOut(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Back_EaseInOut_m6714F2F1366BA14CF68B317C646B8AC04015835D (float ___0_time, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshoot, float ___5_unusedPeriod, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_time;
		float L_1 = ___3_duration;
		float L_2 = ((float)(L_0/((float)il2cpp_codegen_multiply(L_1, (0.5f)))));
		___0_time = L_2;
		if ((!(((float)L_2) < ((float)(1.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		float L_3 = ___2_changeValue;
		float L_4 = ___0_time;
		float L_5 = ___0_time;
		float L_6 = ___4_overshoot;
		float L_7 = ((float)il2cpp_codegen_multiply(L_6, (1.52499998f)));
		___4_overshoot = L_7;
		float L_8 = ___0_time;
		float L_9 = ___4_overshoot;
		float L_10 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, (0.5f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_7, (1.0f))), L_8)), L_9)))))), L_10));
	}

IL_0038:
	{
		float L_11 = ___2_changeValue;
		float L_12 = ___0_time;
		float L_13 = ((float)il2cpp_codegen_subtract(L_12, (2.0f)));
		___0_time = L_13;
		float L_14 = ___0_time;
		float L_15 = ___4_overshoot;
		float L_16 = ((float)il2cpp_codegen_multiply(L_15, (1.52499998f)));
		___4_overshoot = L_16;
		float L_17 = ___0_time;
		float L_18 = ___4_overshoot;
		float L_19 = ___1_startValue;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_11/(2.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_16, (1.0f))), L_17)), L_18)))), (2.0f))))), L_19));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Holoville.HOTween.Plugins.PlugSetFloat::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugSetFloat_get_startVal_mDD317C68F9923615091E22F8E541CD8A440ACAE9 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::set_startVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_set_startVal_m71042A7C8FBE25DAE5F9C765C89987415B77203B (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		bool L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		float L_3 = __this->___typedEndVal_29;
		RuntimeObject* L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_4, NULL);
		float L_6 = ((float)il2cpp_codegen_add(L_3, L_5));
		V_0 = L_6;
		__this->___typedStartVal_28 = L_6;
		float L_7 = V_0;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_9);
		return;
	}

IL_0037:
	{
		RuntimeObject* L_10 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_10, NULL);
		float L_12 = L_11;
		V_1 = L_12;
		__this->___typedStartVal_28 = L_12;
		float L_13 = V_1;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_15);
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugSetFloat::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugSetFloat_get_endVal_mDB029F3FF75FD286BBB69F9E9038FDD0DDAAEB26 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::set_endVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_set_endVal_m421072B28C3DAE7423FED983835125F227E676FE (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_0, NULL);
		float L_2 = L_1;
		V_0 = L_2;
		__this->___typedEndVal_29 = L_2;
		float L_3 = V_0;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_5);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_mF6519BD411418E3267855281D5870512E006A014 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_endVal;
		PlugSetFloat__ctor_m59448E511A74D79A0BF79D683202BE9482A74801(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m5350C3B5C53FA867D98EAE9E2D2188DEFFF0AD39 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_endVal;
		int32_t L_1 = ___1_p_easeType;
		PlugSetFloat__ctor_m17AEEBCDFBD40D0E6651BFCC18CED74FD3C3B8EF(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m59448E511A74D79A0BF79D683202BE9482A74801 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, L_3, NULL);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ignoreAccessor_9 = (bool)1;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m17AEEBCDFBD40D0E6651BFCC18CED74FD3C3B8EF (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, L_4, NULL);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ignoreAccessor_9 = (bool)1;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.ctor(System.Single,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__ctor_m42ABD0A13B5460ABE1C3F38C4DC844FCC8AED07A (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_p_easeAnimCurve;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, L_2, L_3, L_4, NULL);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ignoreAccessor_9 = (bool)1;
		return;
	}
}
// Holoville.HOTween.Plugins.PlugSetFloat Holoville.HOTween.Plugins.PlugSetFloat::Property(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* PlugSetFloat_Property_mC1CD2C0ECB4C05F28EC2BA754AA91F56248B5543 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, String_t* ___0_p_propertyName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_propertyName;
		__this->___floatName_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatName_31), (void*)L_0);
		return __this;
	}
}
// System.Boolean Holoville.HOTween.Plugins.PlugSetFloat::ValidateTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlugSetFloat_ValidateTarget_mD8F563FF6F5CFA84092C72A0EC62F923991DA4A5 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, RuntimeObject* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_p_target;
		return (bool)((!(((RuntimeObject*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::DoUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_DoUpdate_mC78E3A7C7E6F32D7FB81F6CA223C8C4E67912CE8 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_totElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ease_7;
		float L_1 = ___0_p_totElapsed;
		float L_2 = __this->___typedStartVal_28;
		float L_3 = __this->___changeVal_30;
		float L_4 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_5);
		float L_6;
		L_6 = Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline(L_5, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_7 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_7);
		float L_8;
		L_8 = Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline(L_7, NULL);
		NullCheck(L_0);
		float L_9;
		L_9 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_0, L_1, L_2, L_3, L_4, L_6, L_8, NULL);
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(20 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetValue(System.Object) */, __this, L_11);
		return;
	}
}
// System.Single Holoville.HOTween.Plugins.PlugSetFloat::GetSpeedBasedDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugSetFloat_GetSpeedBasedDuration_m94205B8C0D270157A0807BA00496858E674FE10E (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, float ___0_p_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___changeVal_30;
		float L_1 = ___0_p_speed;
		V_0 = ((float)(L_0/L_1));
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		float L_3 = V_0;
		V_0 = ((-L_3));
	}

IL_0014:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_SetChangeVal_m6CA0C9B8BC3E6950661AD607031AA5FF27BB326B (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = __this->___typedEndVal_29;
		__this->___changeVal_30 = L_3;
		float L_4 = __this->___typedStartVal_28;
		float L_5 = __this->___typedEndVal_29;
		float L_6 = ((float)il2cpp_codegen_add(L_4, L_5));
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_endVal(System.Object) */, __this, L_7);
		return;
	}

IL_003a:
	{
		float L_8 = __this->___typedEndVal_29;
		float L_9 = __this->___typedStartVal_28;
		__this->___changeVal_30 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::SetIncremental(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_SetIncremental_m3E2A2BC25E153E2CB854BC2BD65D81C0D0E3F5BD (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, int32_t ___0_p_diffIncr, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___typedStartVal_28;
		float L_1 = __this->___changeVal_30;
		int32_t L_2 = ___0_p_diffIncr;
		__this->___typedStartVal_28 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, ((float)L_2)))));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::SetIncrementalRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_SetIncrementalRestart_mCDC281A05FA398E00BAE578D17444CD7FC76DC4D (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = __this->___typedStartVal_28;
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_startVal(System.Object) */, __this, L_1);
		float L_2 = __this->___typedStartVal_28;
		float L_3 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		float L_4 = __this->___typedStartVal_28;
		float L_5 = V_1;
		__this->___typedEndVal_29 = ((float)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat_SetValue_mD8D8B4C46D2D2761B2BA8140DB53CA68CB401AB9 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, RuntimeObject* ___0_p_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_0, NULL);
		String_t* L_2 = __this->___floatName_31;
		RuntimeObject* L_3 = ___0_p_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_3, NULL);
		NullCheck(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), L_2, L_4, NULL);
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugSetFloat::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugSetFloat_GetValue_m7191EB0C7BD99ED3AFB1C2637B4B26C2F1EA0712 (PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline(L_0, NULL);
		String_t* L_2 = __this->___floatName_31;
		NullCheck(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		float L_3;
		L_3 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), L_2, NULL);
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugSetFloat::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugSetFloat__cctor_m37761A11F71E9328DE13A980EC103EC922889A08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validTargetTypes_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validTargetTypes_25), (void*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_1;
		((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validPropTypes_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validPropTypes_26), (void*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_10;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = V_2;
		((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validValueTypes_27 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_StaticFields*)il2cpp_codegen_static_fields_for(PlugSetFloat_tB310CF964772DDB241C7AF17B6BE7ACBB456AB86_il2cpp_TypeInfo_var))->___validValueTypes_27), (void*)L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Holoville.HOTween.Plugins.PlugQuaternion::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugQuaternion_get_startVal_mC0E8AA76C47F7E0766D894BEAD22B7C3BFE910F0 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::set_startVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_set_startVal_m50A46CF17B0B042F15212C2A6DEEFEE04A161C00 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* G_B4_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* G_B5_2 = NULL;
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		bool L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___typedEndVal_28;
		RuntimeObject* L_4 = ___0_value;
		G_B3_0 = L_3;
		G_B3_1 = __this;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))
		{
			G_B4_0 = L_3;
			G_B4_1 = __this;
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_5 = ___0_value;
		G_B5_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_5, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003a;
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___0_value;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B5_1, G_B5_0, NULL);
		NullCheck(G_B5_2);
		G_B5_2->___typedStartVal_27 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___typedStartVal_27;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10;
		RuntimeObject* L_12 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_11);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_12);
		return;
	}

IL_005b:
	{
		RuntimeObject* L_13 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_14 = ___0_value;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_14);
		RuntimeObject* L_15 = ___0_value;
		V_1 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_15, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		__this->___typedStartVal_27 = L_16;
		return;
	}

IL_007f:
	{
		RuntimeObject* L_17 = ___0_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_17, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18;
		RuntimeObject* L_20 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_19);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_20);
		RuntimeObject* L_21 = ___0_value;
		__this->___typedStartVal_27 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugQuaternion::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugQuaternion_get_endVal_mBADB7634FA778AA65282435DB07D6A72A1F42089 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::set_endVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_set_endVal_m1BD6F0B44D962C4932367EC99B2E822AA904A0BB (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_1);
		RuntimeObject* L_2 = ___0_value;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___typedEndVal_28 = L_3;
		return;
	}

IL_0024:
	{
		RuntimeObject* L_4 = ___0_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_6);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_7);
		RuntimeObject* L_8 = ___0_value;
		__this->___typedEndVal_28 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_8, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m4753560E9436440CA1903BD7CEF2C4505547B4F5 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_p_endVal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0;
		RuntimeObject* L_2 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_1);
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m9F39DF22BDB1077AFA579888B9A7825C453F0D69 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_p_endVal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0;
		RuntimeObject* L_2 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m46BD79B83263F7486AA657F2BDB40E50A2198049 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_p_endVal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0;
		RuntimeObject* L_2 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m24530831954A74E7AB9E0292A54AA499A9C84E41 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_p_endVal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0;
		RuntimeObject* L_2 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_mE3BC50FE78C20B2554A668FCC648878459D4A608 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_endVal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m48AA7DFCD334AB666604A7B9FFCCE1F30554784B (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_endVal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m653333B63186F7A0F1430587FAF26EE4A67302D8 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_endVal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m255C6518B3A80634893B0538E91B709C50466D19 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_endVal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Vector3,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m5E2AA802798738B4C9DA942C286D52AF305CB6DE (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p_endVal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_p_easeAnimCurve;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.ctor(UnityEngine.Quaternion,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__ctor_m75770F992D62625D624249048578540F30B164D7 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_p_endVal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0;
		RuntimeObject* L_2 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_p_easeAnimCurve;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// Holoville.HOTween.Plugins.PlugQuaternion Holoville.HOTween.Plugins.PlugQuaternion::Beyond360()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* PlugQuaternion_Beyond360_m838D6AEE6C292DA3959C8375E581A9A319F5CD0E (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, const RuntimeMethod* method) 
{
	{
		PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* L_0;
		L_0 = PlugQuaternion_Beyond360_m6130714D6E69D9FB0D5F7B24158EC0D84F42EF22(__this, (bool)1, NULL);
		return L_0;
	}
}
// Holoville.HOTween.Plugins.PlugQuaternion Holoville.HOTween.Plugins.PlugQuaternion::Beyond360(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* PlugQuaternion_Beyond360_m6130714D6E69D9FB0D5F7B24158EC0D84F42EF22 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, bool ___0_p_beyond360, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_beyond360;
		__this->___beyond360_30 = L_0;
		return __this;
	}
}
// System.Single Holoville.HOTween.Plugins.PlugQuaternion::GetSpeedBasedDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugQuaternion_GetSpeedBasedDuration_m118AC301EE4847507E6A5623AFEB9BC793750601 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, float ___0_p_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___changeVal_29);
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_0, NULL);
		float L_2 = ___0_p_speed;
		V_0 = ((float)(L_1/((float)il2cpp_codegen_multiply(L_2, (360.0f)))));
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		float L_4 = V_0;
		V_0 = ((-L_4));
	}

IL_001f:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_SetChangeVal_m365CBC37FAECB8923EFF1499567CB1C8A320660F (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B14_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B17_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B16_0 = NULL;
	float G_B18_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B18_1 = NULL;
	float G_B22_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B25_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B24_0 = NULL;
	float G_B26_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B26_1 = NULL;
	float G_B30_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B33_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B32_0 = NULL;
	float G_B34_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B34_1 = NULL;
	{
		bool L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___typedEndVal_28;
		__this->___changeVal_29 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___typedEndVal_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6;
		RuntimeObject* L_8 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_7);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_endVal(System.Object) */, __this, L_8);
		return;
	}

IL_003e:
	{
		bool L_9 = __this->___beyond360_30;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___typedEndVal_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_11, NULL);
		__this->___changeVal_29 = L_12;
		return;
	}

IL_005e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___typedEndVal_28;
		V_0 = L_13;
		float L_14 = (&V_0)->___x_2;
		if ((!(((float)L_14) > ((float)(360.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		float L_15 = (&V_0)->___x_2;
		(&V_0)->___x_2 = (fmodf(L_15, (360.0f)));
	}

IL_0087:
	{
		float L_16 = (&V_0)->___y_3;
		if ((!(((float)L_16) > ((float)(360.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		float L_17 = (&V_0)->___y_3;
		(&V_0)->___y_3 = (fmodf(L_17, (360.0f)));
	}

IL_00a9:
	{
		float L_18 = (&V_0)->___z_4;
		if ((!(((float)L_18) > ((float)(360.0f)))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_19 = (&V_0)->___z_4;
		(&V_0)->___z_4 = (fmodf(L_19, (360.0f)));
	}

IL_00cb:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		__this->___changeVal_29 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___changeVal_29);
		float L_24 = L_23->___x_2;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_00fd;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___changeVal_29);
		float L_26 = L_25->___x_2;
		G_B14_0 = ((-L_26));
		goto IL_0108;
	}

IL_00fd:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___changeVal_29);
		float L_28 = L_27->___x_2;
		G_B14_0 = L_28;
	}

IL_0108:
	{
		V_1 = G_B14_0;
		float L_29 = V_1;
		if ((!(((float)L_29) > ((float)(180.0f)))))
		{
			goto IL_013f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___changeVal_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___changeVal_29);
		float L_32 = L_31->___x_2;
		G_B16_0 = L_30;
		if ((((float)L_32) > ((float)(0.0f))))
		{
			G_B17_0 = L_30;
			goto IL_0132;
		}
	}
	{
		float L_33 = V_1;
		G_B18_0 = ((float)il2cpp_codegen_subtract((360.0f), L_33));
		G_B18_1 = G_B16_0;
		goto IL_013a;
	}

IL_0132:
	{
		float L_34 = V_1;
		G_B18_0 = ((-((float)il2cpp_codegen_subtract((360.0f), L_34))));
		G_B18_1 = G_B17_0;
	}

IL_013a:
	{
		G_B18_1->___x_2 = G_B18_0;
	}

IL_013f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&__this->___changeVal_29);
		float L_36 = L_35->___y_3;
		if ((((float)L_36) > ((float)(0.0f))))
		{
			goto IL_015f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___changeVal_29);
		float L_38 = L_37->___y_3;
		G_B22_0 = ((-L_38));
		goto IL_016a;
	}

IL_015f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___changeVal_29);
		float L_40 = L_39->___y_3;
		G_B22_0 = L_40;
	}

IL_016a:
	{
		V_1 = G_B22_0;
		float L_41 = V_1;
		if ((!(((float)L_41) > ((float)(180.0f)))))
		{
			goto IL_01a1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___changeVal_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (&__this->___changeVal_29);
		float L_44 = L_43->___y_3;
		G_B24_0 = L_42;
		if ((((float)L_44) > ((float)(0.0f))))
		{
			G_B25_0 = L_42;
			goto IL_0194;
		}
	}
	{
		float L_45 = V_1;
		G_B26_0 = ((float)il2cpp_codegen_subtract((360.0f), L_45));
		G_B26_1 = G_B24_0;
		goto IL_019c;
	}

IL_0194:
	{
		float L_46 = V_1;
		G_B26_0 = ((-((float)il2cpp_codegen_subtract((360.0f), L_46))));
		G_B26_1 = G_B25_0;
	}

IL_019c:
	{
		G_B26_1->___y_3 = G_B26_0;
	}

IL_01a1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = (&__this->___changeVal_29);
		float L_48 = L_47->___z_4;
		if ((((float)L_48) > ((float)(0.0f))))
		{
			goto IL_01c1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___changeVal_29);
		float L_50 = L_49->___z_4;
		G_B30_0 = ((-L_50));
		goto IL_01cc;
	}

IL_01c1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___changeVal_29);
		float L_52 = L_51->___z_4;
		G_B30_0 = L_52;
	}

IL_01cc:
	{
		V_1 = G_B30_0;
		float L_53 = V_1;
		if ((!(((float)L_53) > ((float)(180.0f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___changeVal_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = (&__this->___changeVal_29);
		float L_56 = L_55->___z_4;
		G_B32_0 = L_54;
		if ((((float)L_56) > ((float)(0.0f))))
		{
			G_B33_0 = L_54;
			goto IL_01f6;
		}
	}
	{
		float L_57 = V_1;
		G_B34_0 = ((float)il2cpp_codegen_subtract((360.0f), L_57));
		G_B34_1 = G_B32_0;
		goto IL_01fe;
	}

IL_01f6:
	{
		float L_58 = V_1;
		G_B34_0 = ((-((float)il2cpp_codegen_subtract((360.0f), L_58))));
		G_B34_1 = G_B33_0;
	}

IL_01fe:
	{
		G_B34_1->___z_4 = G_B34_0;
	}

IL_0203:
	{
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::SetIncremental(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_SetIncremental_m8E6A96935BE3ABB1E13BEB7A3709C58125A9E0E2 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, int32_t ___0_p_diffIncr, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___changeVal_29;
		int32_t L_2 = ___0_p_diffIncr;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, ((float)L_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		__this->___typedStartVal_27 = L_4;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::SetIncrementalRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_SetIncrementalRestart_mE991E77D17646646BBD14951CCB36F0AE6982094 (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___typedStartVal_27;
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_startVal(System.Object) */, __this, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___typedStartVal_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		__this->___typedEndVal_28 = L_7;
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::DoUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion_DoUpdate_m32C0D2E921B842C4D4D4DB98754D8845D7736B8E (PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1* __this, float ___0_p_totElapsed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ease_7;
		float L_1 = ___0_p_totElapsed;
		float L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_3 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_3);
		float L_4;
		L_4 = Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline(L_3, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_5);
		float L_6;
		L_6 = Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline(L_5, NULL);
		NullCheck(L_0);
		float L_7;
		L_7 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_0, L_1, (0.0f), (1.0f), L_2, L_4, L_6, NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___typedStartVal_27);
		float L_9 = L_8->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___changeVal_29);
		float L_11 = L_10->___x_2;
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___typedStartVal_27);
		float L_14 = L_13->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___changeVal_29);
		float L_16 = L_15->___y_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___typedStartVal_27);
		float L_19 = L_18->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___changeVal_29);
		float L_21 = L_20->___z_4;
		float L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12)))), ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_multiply(L_16, L_17)))), ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_21, L_22)))), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_23, NULL);
		VirtualActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(19 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetValue(UnityEngine.Quaternion) */, __this, L_24);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugQuaternion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugQuaternion__cctor_m890A83C1A49BDDFA299C50F6D10781E623E1ED31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		((PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields*)il2cpp_codegen_static_fields_for(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var))->___validPropTypes_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields*)il2cpp_codegen_static_fields_for(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var))->___validPropTypes_25), (void*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_1;
		((PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields*)il2cpp_codegen_static_fields_for(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var))->___validValueTypes_26 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_StaticFields*)il2cpp_codegen_static_fields_for(PlugQuaternion_t2C70BF395E8D422D9227D5C02A7B44D4ED6710C1_il2cpp_TypeInfo_var))->___validValueTypes_26), (void*)L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_Multicast(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* currentDelegate = reinterpret_cast<TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_p_callbackData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenInst(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	NullCheck(___0_p_callbackData);
	typedef void (*FunctionPointerType) (TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p_callbackData, method);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenStatic(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p_callbackData, method);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenStaticInvoker(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	InvokerActionInvoker1< TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_p_callbackData);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_ClosedStaticInvoker(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_p_callbackData);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenVirtual(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	NullCheck(___0_p_callbackData);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_p_callbackData);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenInterface(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	NullCheck(___0_p_callbackData);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_p_callbackData);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenGenericVirtual(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	NullCheck(___0_p_callbackData);
	GenericVirtualActionInvoker0::Invoke(method, ___0_p_callbackData);
}
void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenGenericInterface(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method)
{
	NullCheck(___0_p_callbackData);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_p_callbackData);
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520 (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_Multicast;
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::Invoke(Holoville.HOTween.TweenEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_p_callbackData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::BeginInvoke(Holoville.HOTween.TweenEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenCallbackWParms_BeginInvoke_m951CAF8122CE25CA4F3E610581BCE17AA3573545 (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_p_callbackData;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallbackWParms_EndInvoke_mC1F988EBE01DAEC520106F38D2DFDA168834112B (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_Multicast(TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* currentDelegate = reinterpret_cast<TweenCallback_t636681A33D249FB51EB356E0746B53250D607704*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_OpenInst(TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_OpenStatic(TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_OpenStaticInvoker(TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_ClosedStaticInvoker(TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TweenCallback_t636681A33D249FB51EB356E0746B53250D607704 (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_mBD3FF0903457762300B12CB3AEA092B04F2BFD94 (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_Multicast;
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2 (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Holoville.HOTween.Core.TweenDelegate/TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenCallback_BeginInvoke_mF42AAADEFE0B2BEC302EAEDA561CA643485FAA54 (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Holoville.HOTween.Core.TweenDelegate/TweenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_EndInvoke_mAAA40666D6051B3E4517D0FFFDE04F6BE3E20EB9 (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_Multicast(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* currentDelegate = reinterpret_cast<EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_OpenInst(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period, method);
}
float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_OpenStatic(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period, method);
}
float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_OpenStaticInvoker(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< float, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period);
}
float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_ClosedStaticInvoker(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< float, RuntimeObject*, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75 (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float, float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period);

	return returnValue;
}
// System.Void Holoville.HOTween.Core.TweenDelegate/EaseFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseFunc__ctor_m258028586FD5AF6078A75793226DE7D379A13EA3 (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_Multicast;
}
// System.Single Holoville.HOTween.Core.TweenDelegate/EaseFunc::Invoke(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Holoville.HOTween.Core.TweenDelegate/EaseFunc::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EaseFunc_BeginInvoke_m0FBF54D2A24827A075D8C6C9E11EDA2EEBC0C12F (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_elapsed);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_startValue);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_changeValue);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___3_duration);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___4_overshootOrAmplitude);
	__d_args[5] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___5_period);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// System.Single Holoville.HOTween.Core.TweenDelegate/EaseFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseFunc_EndInvoke_m510A0C1D0E86D90FA0B6089C2077698540672827 (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_Multicast(FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* currentDelegate = reinterpret_cast<FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_p_index, ___1_p_optionalBool, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_OpenInst(FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p_index, ___1_p_optionalBool, method);
}
void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_OpenStatic(FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_p_index, ___1_p_optionalBool, method);
}
void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_OpenStaticInvoker(FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_p_index, ___1_p_optionalBool);
}
void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_ClosedStaticInvoker(FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_p_index, ___1_p_optionalBool);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707 (FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_p_index, static_cast<int32_t>(___1_p_optionalBool));

}
// System.Void Holoville.HOTween.Core.TweenDelegate/FilterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterFunc__ctor_m09E23A301B8AAC21FA70732CB97E2E6EB0086B04 (FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC_Multicast;
}
// System.Void Holoville.HOTween.Core.TweenDelegate/FilterFunc::Invoke(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterFunc_Invoke_m5AD6C6A70C725C13D2B53EF98639AE1EFF3412FC (FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_p_index, ___1_p_optionalBool, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Holoville.HOTween.Core.TweenDelegate/FilterFunc::BeginInvoke(System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterFunc_BeginInvoke_m14255D7D92C27B9051625A10BE8641843F8333F5 (FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, int32_t ___0_p_index, bool ___1_p_optionalBool, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_p_index);
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_p_optionalBool);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Holoville.HOTween.Core.TweenDelegate/FilterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterFunc_EndInvoke_m8C028CAD620F6B6BD5E7E8790CC0971FD7FD72DD (FilterFunc_t3341966A27D968EF1148A7F47EBDA5C83D7CE707* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Holoville.HOTween.TweenVar::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_get_startVal_m134B06EA02294D7DEEFA16725A41778E9DF269B3 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____startVal_2;
		return L_0;
	}
}
// System.Void Holoville.HOTween.TweenVar::set_startVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_startVal_mC18F62B9C6695CA9E6912DB05EAF0220E2E13DCA (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____startVal_2 = L_0;
		TweenVar_SetChangeVal_m26AD192EF032781E0BEA82308B9784D31BE2C1D2(__this, NULL);
		return;
	}
}
// System.Single Holoville.HOTween.TweenVar::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_get_endVal_m08BE32781CFD3603D4050A80E7FE2069A2C54E14 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____endVal_3;
		return L_0;
	}
}
// System.Void Holoville.HOTween.TweenVar::set_endVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_endVal_m15174EDC173B9088707D14A281564D016BB4597F (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->____endVal_3 = L_0;
		TweenVar_SetChangeVal_m26AD192EF032781E0BEA82308B9784D31BE2C1D2(__this, NULL);
		return;
	}
}
// Holoville.HOTween.EaseType Holoville.HOTween.TweenVar::get_easeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenVar_get_easeType_m1A39BE0CDE2913F758F03B6EC292EAFDB1ADFB68 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____easeType_4;
		return L_0;
	}
}
// System.Void Holoville.HOTween.TweenVar::set_easeType(Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_easeType_m3BF13A81ECD0A5C3D2191DD8FCDB932E348F1CD0 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		__this->____easeType_4 = L_0;
		int32_t L_1 = __this->____easeType_4;
		il2cpp_codegen_runtime_class_init_inline(EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F_il2cpp_TypeInfo_var);
		EaseInfo_tCF78178CA81F33CDDB727DB6FBFDF917CD3BA51F* L_2;
		L_2 = EaseInfo_GetEaseInfo_m10B4224CB3CF864CE6542B884D237591EA5600D9(L_1, NULL);
		NullCheck(L_2);
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_3 = L_2->___ease_0;
		__this->___ease_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ease_9), (void*)L_3);
		return;
	}
}
// UnityEngine.AnimationCurve Holoville.HOTween.TweenVar::get_easeCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenVar_get_easeCurve_mD4428F375D50A42CC3E8F39871E06699EF269CE6 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->____easeAnimationCurve_6;
		return L_0;
	}
}
// System.Void Holoville.HOTween.TweenVar::set_easeCurve(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_set_easeCurve_m749CDEA0851FFB8FC4097A0B54F1C0E5BA43572A (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseCurve_Evaluate_m147EB11018D649E704C57B17AFF002CB52082F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->____easeAnimationCurve_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____easeAnimationCurve_6), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->____easeAnimationCurve_6;
		EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61* L_2 = (EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61*)il2cpp_codegen_object_new(EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EaseCurve__ctor_mA7CCE59E7AF1173FE998BD193C38541E3737996F(L_2, L_1, NULL);
		__this->____easeCurve_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____easeCurve_5), (void*)L_2);
		EaseCurve_tF0DFACE7D4AAA5781F27DE34E72E81660958CE61* L_3 = __this->____easeCurve_5;
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_4 = (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75*)il2cpp_codegen_object_new(EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EaseFunc__ctor_m258028586FD5AF6078A75793226DE7D379A13EA3(L_4, L_3, (intptr_t)((void*)EaseCurve_Evaluate_m147EB11018D649E704C57B17AFF002CB52082F96_RuntimeMethod_var), NULL);
		__this->___ease_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ease_9), (void*)L_4);
		return;
	}
}
// System.Single Holoville.HOTween.TweenVar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_get_value_m386AA4586CB99F3C66A35B42E58E0E35DB649D7F (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____value_1;
		return L_0;
	}
}
// System.Single Holoville.HOTween.TweenVar::get_elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_get_elapsed_m43A1B2B5E075B5D9CC61B6311A7AC5C458F5982C (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____elapsed_7;
		return L_0;
	}
}
// System.Void Holoville.HOTween.TweenVar::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar__ctor_m8E793D0BF0EAED11759BBD38D0544B66FE16CE34 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_startVal, float ___1_p_endVal, float ___2_p_duration, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_startVal;
		float L_1 = ___1_p_endVal;
		float L_2 = ___2_p_duration;
		TweenVar__ctor_m02C105B7A0E0EB3DB215C9C5DFE0608F13FFCD9B(__this, L_0, L_1, L_2, 0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.TweenVar::.ctor(System.Single,System.Single,System.Single,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar__ctor_m02C105B7A0E0EB3DB215C9C5DFE0608F13FFCD9B (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_startVal, float ___1_p_endVal, float ___2_p_duration, int32_t ___3_p_easeType, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_0 = ___0_p_startVal;
		float L_1 = L_0;
		V_0 = L_1;
		__this->____value_1 = L_1;
		float L_2 = V_0;
		TweenVar_set_startVal_mC18F62B9C6695CA9E6912DB05EAF0220E2E13DCA(__this, L_2, NULL);
		float L_3 = ___1_p_endVal;
		TweenVar_set_endVal_m15174EDC173B9088707D14A281564D016BB4597F(__this, L_3, NULL);
		float L_4 = ___2_p_duration;
		__this->___duration_0 = L_4;
		int32_t L_5 = ___3_p_easeType;
		TweenVar_set_easeType_m3BF13A81ECD0A5C3D2191DD8FCDB932E348F1CD0(__this, L_5, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.TweenVar::.ctor(System.Single,System.Single,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar__ctor_m70F2018BBC21ECC4FA69A10E192452DF41E6E280 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_startVal, float ___1_p_endVal, float ___2_p_duration, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___3_p_easeCurve, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_0 = ___0_p_startVal;
		float L_1 = L_0;
		V_0 = L_1;
		__this->____value_1 = L_1;
		float L_2 = V_0;
		TweenVar_set_startVal_mC18F62B9C6695CA9E6912DB05EAF0220E2E13DCA(__this, L_2, NULL);
		float L_3 = ___1_p_endVal;
		TweenVar_set_endVal_m15174EDC173B9088707D14A281564D016BB4597F(__this, L_3, NULL);
		float L_4 = ___2_p_duration;
		__this->___duration_0 = L_4;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = ___3_p_easeCurve;
		TweenVar_set_easeCurve_m749CDEA0851FFB8FC4097A0B54F1C0E5BA43572A(__this, L_5, NULL);
		return;
	}
}
// System.Single Holoville.HOTween.TweenVar::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_Update_m428DF29C22EA4744B00F5843B309ABC1EA36C446 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_elapsed, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_elapsed;
		float L_1;
		L_1 = TweenVar_Update_mD934142543A84C65E77D050AA69EFFEA497DF7BC(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Single Holoville.HOTween.TweenVar::Update(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenVar_Update_mD934142543A84C65E77D050AA69EFFEA497DF7BC (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, float ___0_p_elapsed, bool ___1_p_relative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* G_B2_0 = NULL;
	TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* G_B3_1 = NULL;
	{
		bool L_0 = ___1_p_relative;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		float L_1 = ___0_p_elapsed;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_0007:
	{
		float L_2 = __this->____elapsed_7;
		float L_3 = ___0_p_elapsed;
		G_B3_0 = ((float)il2cpp_codegen_add(L_2, L_3));
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->____elapsed_7 = G_B3_0;
		float L_4 = __this->____elapsed_7;
		float L_5 = __this->___duration_0;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = __this->___duration_0;
		__this->____elapsed_7 = L_6;
		goto IL_0048;
	}

IL_0030:
	{
		float L_7 = __this->____elapsed_7;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		__this->____elapsed_7 = (0.0f);
	}

IL_0048:
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_8 = __this->___ease_9;
		float L_9 = __this->____elapsed_7;
		float L_10 = __this->____startVal_2;
		float L_11 = __this->___changeVal_8;
		float L_12 = __this->___duration_0;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		float L_13 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEaseOvershootOrAmplitude_11;
		float L_14 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defEasePeriod_12;
		NullCheck(L_8);
		float L_15;
		L_15 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_8, L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		__this->____value_1 = L_15;
		float L_16 = __this->____value_1;
		return L_16;
	}
}
// System.Void Holoville.HOTween.TweenVar::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenVar_SetChangeVal_m26AD192EF032781E0BEA82308B9784D31BE2C1D2 (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = TweenVar_get_endVal_m08BE32781CFD3603D4050A80E7FE2069A2C54E14_inline(__this, NULL);
		float L_1;
		L_1 = TweenVar_get_startVal_m134B06EA02294D7DEEFA16725A41778E9DF269B3_inline(__this, NULL);
		__this->___changeVal_8 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Holoville.HOTween.SequenceParms::InitializeSequence(Holoville.HOTween.Sequence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceParms_InitializeSequence_m8210CDA3A53CC6BD8A0035A2831BE4848C26B287 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* ___0_p_sequence, const RuntimeMethod* method) 
{
	{
		Sequence_t8FD9C6B20DA9C35125E186FE2A70F2B918CB3279* L_0 = ___0_p_sequence;
		ABSTweenComponentParms_InitializeOwner_mF88937400BEA35A760F2DC698CA459C44FE82327(__this, L_0, NULL);
		return;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_Id_mD12A9F7430E0AA3A442D933E730A099FB8C87497 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, String_t* ___0_p_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_p_id;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___id_0), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::IntId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_IntId_m23C52D3C154584A623955ADCEE746F34A476E5A5 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, int32_t ___0_p_intId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_intId;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___intId_1 = L_0;
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::AutoKill(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_AutoKill_m914A0D4CDEB2BE011F17C3AB249742677C2348DF (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, bool ___0_p_active, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_p_active;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___autoKillOnComplete_2 = L_0;
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::UpdateType(Holoville.HOTween.UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_UpdateType_m568A476254CC313CC111B753681C60439E4C2B9E (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, int32_t ___0_p_updateType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_updateType;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___updateType_3 = L_0;
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::TimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_TimeScale_m3B131618D0AAD36BF0EFC46598B77CD15553BEC8 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, float ___0_p_timeScale, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_p_timeScale;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___timeScale_4 = L_0;
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::Loops(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_Loops_m45541F14787F8F5B7138A754398E5523C26952BB (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, int32_t ___0_p_loops, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_p_loops;
		il2cpp_codegen_runtime_class_init_inline(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var);
		int32_t L_1 = ((HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_StaticFields*)il2cpp_codegen_static_fields_for(HOTween_t015F57AB854A98B5723BC4B1F1F16DA374F256DC_il2cpp_TypeInfo_var))->___defLoopType_13;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_2;
		L_2 = SequenceParms_Loops_mB8A56A26FF1C3FE24291B3E3FC89829191978C0F(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::Loops(System.Int32,Holoville.HOTween.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_Loops_mB8A56A26FF1C3FE24291B3E3FC89829191978C0F (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, int32_t ___0_p_loops, int32_t ___1_p_loopType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_p_loops;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___loops_5 = L_0;
		int32_t L_1 = ___1_p_loopType;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___loopType_6 = L_1;
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnStart(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnStart_m73030EC6407C692E3106EC6BE8EF06F9B2AA28AD (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStart_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStart_8), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnStart(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnStart_mABDAB398AC3052D783AB9C8148D3566B9ADB4832 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartWParms_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartWParms_9), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartParms_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStartParms_10), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnUpdate(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnUpdate_mC309129B4A714497EA4263E42D96CD319FD70660 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdate_11), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnUpdate(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnUpdate_mD9677FF1167AA8F5F1A728573550D6447183FD5F (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateWParms_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateWParms_12), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateParms_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onUpdateParms_13), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnPause(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnPause_mB1F47730CA5A9AF988DC8D956A7750AACF6E136B (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPause_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPause_17), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnPause(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnPause_m37ADA90A0578584119E9CD605F2954542ACC7D14 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseWParms_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseWParms_18), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseParms_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPauseParms_19), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnPlay(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnPlay_mAD7AF1FADA88ABAB57FF8CA55A26AAE8CEA3CF7E (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlay_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlay_20), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnPlay(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnPlay_m7645AD34735A5E4E85F76B74AE0EDFB0CBA7D9A6 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayWParms_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayWParms_21), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayParms_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onPlayParms_22), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnRewinded(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnRewinded_mC03F77B615C652D04FCC7248B917FB6FDBFFDE76 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewinded_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewinded_23), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnRewinded(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnRewinded_m1D23066DAD81C369D4CA0316CC62DBBC831C20FF (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedWParms_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedWParms_24), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedParms_25 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onRewindedParms_25), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnStepComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnStepComplete_mDF0458BD6754C42C2720F250657901158EE0B213 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepComplete_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepComplete_26), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnStepComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnStepComplete_mEDCE742A059A7971B601E490E7303378E8BB3937 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnStepComplete(UnityEngine.GameObject,System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnStepComplete_m7B34B55CEB26DB1965B09F73501C6CA569132C9F (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_sendMessageTarget, String_t* ___1_p_methodName, RuntimeObject* ___2_p_value, int32_t ___3_p_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF*)il2cpp_codegen_object_new(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520(L_0, NULL, (intptr_t)((void*)HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var), NULL);
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteWParms_27), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_p_sendMessageTarget;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5 = ___1_p_methodName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		RuntimeObject* L_7 = ___2_p_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = ___3_p_options;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onStepCompleteParms_28), (void*)L_12);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnComplete_mD046B01C9C44C8A7DD4DB3F8E41B962148831AF8 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* ___0_p_function, const RuntimeMethod* method) 
{
	{
		TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onComplete_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onComplete_29), (void*)L_0);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnComplete(Holoville.HOTween.Core.TweenDelegate/TweenCallbackWParms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnComplete_m3F514262034C89EDF4B859CF723CD33A56151A08 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* ___0_p_function, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_p_funcParms, const RuntimeMethod* method) 
{
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = ___0_p_function;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_p_funcParms;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31), (void*)L_1);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::OnComplete(UnityEngine.GameObject,System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_OnComplete_m6A0C8CB07AC5CE4973426C8B177A3E240CAD3EB0 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_sendMessageTarget, String_t* ___1_p_methodName, RuntimeObject* ___2_p_value, int32_t ___3_p_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* L_0 = (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF*)il2cpp_codegen_object_new(TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TweenCallbackWParms__ctor_mB37CAD56CA9F34BDAC55ED611104A2DBBE80B520(L_0, NULL, (intptr_t)((void*)HOTween_DoSendMessage_m88B006E16146E8559219FE3BF4553AF0A5B91BB8_RuntimeMethod_var), NULL);
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteWParms_30), (void*)L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_p_sendMessageTarget;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5 = ___1_p_methodName;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		RuntimeObject* L_7 = ___2_p_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = ___3_p_options;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(SendMessageOptions_t8C6881C01B06BF874EE578D27D8CF237EC2BFD54_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___onCompleteParms_31), (void*)L_12);
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_m6BF0D68656376A2A2CE363A2DABA6A8B4C99C0AA (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)0;
		return __this;
	}

IL_0012:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = (BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)SZArrayNew(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_3 = V_0;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_4);
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_5 = V_0;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_6;
		L_6 = SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC(__this, L_5, (bool)1, NULL);
		return L_6;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_mA9DF1750A7280B80DDF1FCAD27D159B443594E48 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)0;
		return __this;
	}

IL_0012:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_6;
		L_6 = SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43(__this, L_5, (bool)1, NULL);
		return L_6;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.Behaviour[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_m2633DDE598614DD4EA216FA8A8BF7623C74026AE (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = ___0_p_targets;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_1;
		L_1 = SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_m2EE5AFD822498B91C951DA4D2E68126FD34B67ED (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_p_targets;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_1;
		L_1 = SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepDisabled(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepDisabled_m49B4A2BF51DF4E5032DCF167340394F417E48142 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)0;
		return __this;
	}

IL_0012:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = (BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA*)SZArrayNew(BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_3 = V_0;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_4);
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_5 = V_0;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_6;
		L_6 = SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC(__this, L_5, (bool)0, NULL);
		return L_6;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepDisabled(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepDisabled_mA35418EEE70F7C86DE750FDE0C0BC9C08B58A9D6 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_p_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_p_target;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)0;
		return __this;
	}

IL_0012:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_p_target;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_6;
		L_6 = SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43(__this, L_5, (bool)0, NULL);
		return L_6;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepDisabled(UnityEngine.Behaviour[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepDisabled_mBA0C381235B058762B7E03DD93D4EE664C4A6DD8 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = ___0_p_targets;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_1;
		L_1 = SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepDisabled(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepDisabled_mE92AF1830301A3A0C89A7492E73AEFAB5AC6EECF (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, const RuntimeMethod* method) 
{
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_p_targets;
		SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* L_1;
		L_1 = SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_mAB51F94BB7846EB1A0371FCF32D7FDD6CA6B23EC (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) 
{
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageBehaviours_32 = (bool)1;
		bool L_0 = ___1_p_enabled;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_1 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOn_34 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOn_34), (void*)L_1);
		goto IL_001a;
	}

IL_0013:
	{
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_2 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOff_35 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedBehavioursOff_35), (void*)L_2);
	}

IL_001a:
	{
		return __this;
	}
}
// Holoville.HOTween.SequenceParms Holoville.HOTween.SequenceParms::KeepEnabled(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* SequenceParms_KeepEnabled_mF5B02A543784AFAFBBE9EF874F040BAB3169AA43 (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_p_targets, bool ___1_p_enabled, const RuntimeMethod* method) 
{
	{
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___manageGameObjects_33 = (bool)1;
		bool L_0 = ___1_p_enabled;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOn_36 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOn_36), (void*)L_1);
		goto IL_001a;
	}

IL_0013:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = ___0_p_targets;
		((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOff_37 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenComponentParms_tCD06661093639AB136C0C8BB7E786EC82F83075E*)__this)->___managedGameObjectsOff_37), (void*)L_2);
	}

IL_001a:
	{
		return __this;
	}
}
// System.Void Holoville.HOTween.SequenceParms::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceParms__ctor_mEA6154BD45B02D2D0E5FF50B0EFA93ACC4BB6CDD (SequenceParms_t8B5C03F571245C19D25158D966984C2ED23620FA* __this, const RuntimeMethod* method) 
{
	{
		ABSTweenComponentParms__ctor_m689C96ED2202D6F626DB88BBF1F031D265508270(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Holoville.HOTween.Plugins.PlugInt::get_startVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugInt_get_startVal_mEC395E74FAAAFE265631ABEEBDEFA84C82F1006D (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::set_startVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_set_startVal_m7CFC9E6A628F0BD6AB817471F2F73510359C91E8 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		bool L_2 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		float L_3 = __this->___typedEndVal_28;
		RuntimeObject* L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_4, NULL);
		float L_6 = ((float)il2cpp_codegen_add(L_3, L_5));
		V_0 = L_6;
		__this->___typedStartVal_27 = L_6;
		float L_7 = V_0;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_9);
		return;
	}

IL_0037:
	{
		RuntimeObject* L_10 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_10, NULL);
		float L_12 = L_11;
		V_1 = L_12;
		__this->___typedStartVal_27 = L_12;
		float L_13 = V_1;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____startVal_0), (void*)L_15);
		return;
	}
}
// System.Object Holoville.HOTween.Plugins.PlugInt::get_endVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlugInt_get_endVal_m5E2CDDEA2E0EC2BBDAA26836372A4D5D6E6C8135 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1;
		return L_0;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::set_endVal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_set_endVal_mE7D91C5706E4D4FF356FFBEF59AE62BE2852AA41 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m6B47C78A7DFD7825B4361BCA8AB6748FC82165E9(L_0, NULL);
		float L_2 = L_1;
		V_0 = L_2;
		__this->___typedEndVal_28 = L_2;
		float L_3 = V_0;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____endVal_1), (void*)L_5);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m0B762560EF7B34D669DB4301B82ABD4D6C360F7F (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single,Holoville.HOTween.EaseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m81237E1B7DCD4D1A4D4031ED92682B5BEB8153BC (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, int32_t ___1_p_easeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m36BBA904D1AA75C2195D945C7D808BB4404D404D (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, bool ___1_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___1_p_isRelative;
		ABSTweenPlugin__ctor_m21D90130D40C028B8D49294F1664B217A8FB3482(__this, L_2, L_3, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single,Holoville.HOTween.EaseType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m2345145E880B1F9E56C1B7F329B5C3C765D4A655 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, int32_t ___1_p_easeType, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_p_easeType;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m6B8E762F6AB19C0715CD6E9B58B49489058CA042(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.ctor(System.Single,UnityEngine.AnimationCurve,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__ctor_m8CF307A8135A2AB987B1CDF5A1956235656BFBC3 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_endVal, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_p_easeAnimCurve, bool ___2_p_isRelative, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_p_endVal;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3 = ___1_p_easeAnimCurve;
		bool L_4 = ___2_p_isRelative;
		ABSTweenPlugin__ctor_m9B84F7BC2BF4F5B1FF220C3F4E42B5FEA4A5FBCC(__this, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Single Holoville.HOTween.Plugins.PlugInt::GetSpeedBasedDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlugInt_GetSpeedBasedDuration_m6C3D8EAE856E47198C2C95EE5ADBD2C439BA4FC5 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_speed, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___changeVal_29;
		float L_1 = ___0_p_speed;
		V_0 = ((float)(L_0/L_1));
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		float L_3 = V_0;
		V_0 = ((-L_3));
	}

IL_0014:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::SetChangeVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_SetChangeVal_m1F3BA173BD58844E40013DBEF1CED2F0059AAEBC (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___isRelative_8;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_1 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = __this->___typedEndVal_28;
		__this->___changeVal_29 = L_3;
		float L_4 = __this->___typedStartVal_27;
		float L_5 = __this->___typedEndVal_28;
		float L_6 = ((float)il2cpp_codegen_add(L_4, L_5));
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_endVal(System.Object) */, __this, L_7);
		return;
	}

IL_003a:
	{
		float L_8 = __this->___typedEndVal_28;
		float L_9 = __this->___typedStartVal_27;
		__this->___changeVal_29 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::SetIncremental(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_SetIncremental_m8E4454E97CD02F65FC741ECEB005B9F83722C434 (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, int32_t ___0_p_diffIncr, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___typedStartVal_27;
		float L_1 = __this->___changeVal_29;
		int32_t L_2 = ___0_p_diffIncr;
		__this->___typedStartVal_27 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, ((float)L_2)))));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::SetIncrementalRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_SetIncrementalRestart_m7689B9C9F94FCA125046446EDACC87B3AC9902AE (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = __this->___typedStartVal_27;
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object Holoville.HOTween.Plugins.Core.ABSTweenPlugin::GetValue() */, __this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::set_startVal(System.Object) */, __this, L_1);
		float L_2 = __this->___typedStartVal_27;
		float L_3 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		float L_4 = __this->___typedStartVal_27;
		float L_5 = V_1;
		__this->___typedEndVal_28 = ((float)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::DoUpdate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt_DoUpdate_m6B8283DFE8E57B477FAF53BC743D4D05D69717DA (PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5* __this, float ___0_p_totElapsed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* L_0 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___ease_7;
		float L_1 = ___0_p_totElapsed;
		float L_2 = __this->___typedStartVal_27;
		float L_3 = __this->___changeVal_29;
		float L_4 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->____duration_2;
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_5 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_5);
		float L_6;
		L_6 = Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline(L_5, NULL);
		Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* L_7 = ((ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A*)__this)->___tweenObj_24;
		NullCheck(L_7);
		float L_8;
		L_8 = Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline(L_7, NULL);
		NullCheck(L_0);
		float L_9;
		L_9 = EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline(L_0, L_1, L_2, L_3, L_4, L_6, L_8, NULL);
		V_0 = L_9;
		float L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = bankers_round(((double)L_10));
		float L_12 = ((float)L_11);
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(20 /* System.Void Holoville.HOTween.Plugins.Core.ABSTweenPlugin::SetValue(System.Object) */, __this, L_13);
		return;
	}
}
// System.Void Holoville.HOTween.Plugins.PlugInt::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlugInt__cctor_m4F1377CB8036E178D51448051BDE98A26504B115 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = V_0;
		((PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields*)il2cpp_codegen_static_fields_for(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var))->___validPropTypes_25 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields*)il2cpp_codegen_static_fields_for(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var))->___validPropTypes_25), (void*)L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_8;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_1;
		((PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields*)il2cpp_codegen_static_fields_for(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var))->___validValueTypes_26 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_StaticFields*)il2cpp_codegen_static_fields_for(PlugInt_t120301D625B2A3367D33ACB9E84FEDF6FCD6F7C5_il2cpp_TypeInfo_var))->___validValueTypes_26), (void*)L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tweener_get_isFrom_m97B6EDB4673323EF33565DF80650EDA4B6BB7A39_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisFromU3Ek__BackingField_77;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlugVector3Path_set_pathType_mB72EF8EB3956A20D2D45AA4DCEBB3727603CFABE_inline (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpathTypeU3Ek__BackingField_52 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tweener_get_target_m7B0C8C1210C5EF4CDCB888B22F58499C1AE55A6E_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____target_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlugVector3Path_get_pathType_mD3B75D3F8F5ED3957F00115EC8CDBA3394DB0186_inline (PlugVector3Path_t4D72C9A0B3A8580FB67EBFD73ED77C5F47637DA8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpathTypeU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tweener_get_easeOvershootOrAmplitude_mBB1487C1793BCBA8C3AA28A0A5B033B98BDC4612_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____easeOvershootOrAmplitude_63;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tweener_get_easePeriod_m8DE25C17D661AD05FA04DE6037D5BBA9C8E0A1BA_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____easePeriod_64;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EaseFunc_Invoke_m37BA904CBA2A9E8A86D8E00ADBF27F042526192A_inline (EaseFunc_t653EE39FFDCC3665B1FE38FB38C98350DBDFAF75* __this, float ___0_elapsed, float ___1_startValue, float ___2_changeValue, float ___3_duration, float ___4_overshootOrAmplitude, float ___5_period, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_elapsed, ___1_startValue, ___2_changeValue, ___3_duration, ___4_overshootOrAmplitude, ___5_period, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ABSTweenPlugin_get_propName_m66440F63ADB38E6AEB81E90E0E7C0D44B2450AFB_inline (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____propName_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenComponent_get_isComplete_m709E527B954A24C4FC9BFA6AAEAF82332441991F_inline (ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isComplete_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenCallback_Invoke_m9089E9ED78C555CB94BFBB7E31A1A9A786E4A0E2_inline (TweenCallback_t636681A33D249FB51EB356E0746B53250D607704* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenCallbackWParms_Invoke_m0CC0B213A8B2100D174C8BF254573DFD31B4FCDB_inline (TweenCallbackWParms_t70B215F2CBEE4D12A79EC740C4FC503253147FAF* __this, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18* ___0_p_callbackData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TweenEvent_t95DA77C03B3C6F6DFAF3BCBF6186C5B89B6A7D18*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_p_callbackData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenComponent_get_destroyed_m4FE7ACE9A38BE5BED05C117B3F147838083CFC01_inline (ABSTweenComponent_t32CCEC48173667C95B9B27178AEA570EEC8FC737* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____destroyed_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tweener_set_isFrom_m3E5ABBC9B076D66C6006F2E422A6B15C0899CD24_inline (Tweener_t99074CD44759EE1C18B018744C9E38243A40871A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CisFromU3Ek__BackingField_77 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ABSTweenPlugin_get_initialized_mBDDF3D1051BAFBF04CAAF5600D799AE51D452397_inline (ABSTweenPlugin_t569D8CBBE01E5375128235DBEDDC873429FB7C2A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____initialized_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenVar_get_endVal_m08BE32781CFD3603D4050A80E7FE2069A2C54E14_inline (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____endVal_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenVar_get_startVal_m134B06EA02294D7DEEFA16725A41778E9DF269B3_inline (TweenVar_t4EA5063F968741F18ECD22E78167D2416129E51C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____startVal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
