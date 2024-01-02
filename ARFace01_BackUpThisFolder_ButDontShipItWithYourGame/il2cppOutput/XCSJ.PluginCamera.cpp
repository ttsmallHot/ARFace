#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<XCSJ.PluginCommonUtils.MB>
struct Action_1_tA66D34452DBC9BA35688337ED395724F6B5132F6;
// System.Action`1<XCSJ.PluginCommonUtils.Manager>
struct Action_1_t6509ED7E6EDB3C3133130EAED551D82902A98744;
// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginCamera.CameraManager>
struct BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5;
// XCSJ.PluginCommonUtils.BaseManager`1<System.Object>
struct BaseManager_1_t53B6051A45D3B73D7692CE12B4AB0AD40F100FDF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.List`1<XCSJ.Scripts.Script>
struct List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// XCSJ.Scripts.Script[]
struct ScriptU5BU5D_tFB078EEF243FB6E31B2B8B09ADA5D9614612886F;
// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider
struct BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9;
// XCSJ.PluginCamera.Base.BaseCameraProvider
struct BaseCameraProvider_t8428F8C9EBCF1CCCBF455FFB8F98169956C0A845;
// XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider
struct BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11;
// XCSJ.PluginCamera.CameraManager
struct CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// XCSJ.PluginCamera.Kernel.ICameraHandler
struct ICameraHandler_tAF2D51A331B38EA3A11F725D771B4CCFCC9E7170;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// XCSJ.Scripts.RTStack
struct RTStack_t7A8ACBA6E16A8AA0E1F2DF27145E2008FD92DB02;
// XCSJ.Scripts.RTState
struct RTState_t553D188CD7B2144F5510CDD8EEF886A99EE39543;
// XCSJ.Algorithms.ReturnValue
struct ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB;
// XCSJ.Scripts.ScriptParamList
struct ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53;
// System.String
struct String_t;
// XCSJ.PluginCommonUtils.UnityObjectEventListener
struct UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICameraHandler_tAF2D51A331B38EA3A11F725D771B4CCFCC9E7170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManagerHandler_1_t09FCBDE407F15F3A5E654BF7DFC4E5B7ACA80728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseManager_1__ctor_mF84027DE4899F1BC7FC3E3C8BE8AB971D425AA26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisBaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9_mE4B98672C41448C7AF3C6E3FB657FB67833C26DA_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t520354D9946CE9563EE007E2C1AE604297FDB2AC 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
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
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<XCSJ.Scripts.Script>
struct List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScriptU5BU5D_tFB078EEF243FB6E31B2B8B09ADA5D9614612886F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// XCSJ.Algorithms.Any
struct Any_t2CF9DEAEAABAD5D726173CC9ED146F7A68D33839  : public RuntimeObject
{
	// System.Object XCSJ.Algorithms.Any::<objectValue>k__BackingField
	RuntimeObject* ___U3CobjectValueU3Ek__BackingField_0;
};

// XCSJ.PluginCamera.Kernel.CameraHandler
struct CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013  : public RuntimeObject
{
};

// XCSJ.PluginCamera.CameraHelper
struct CameraHelper_tBD53875A634D9AA78FEE600982B2654609CB4B14  : public RuntimeObject
{
};

// XCSJ.PluginCamera.IDRange
struct IDRange_t50B37859BDD7AFEDA8BA3F63EE63D42FDF680104  : public RuntimeObject
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// XCSJ.Algorithms.ReturnValue
struct ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB  : public Any_t2CF9DEAEAABAD5D726173CC9ED146F7A68D33839
{
	// System.Boolean XCSJ.Algorithms.ReturnValue::valid
	bool ___valid_1;
	// System.Object XCSJ.Algorithms.ReturnValue::tag
	RuntimeObject* ___tag_2;
};

// XCSJ.Scripts.ScriptParamList
struct ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53  : public Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907
{
	// XCSJ.Scripts.RTState XCSJ.Scripts.ScriptParamList::<state>k__BackingField
	RTState_t553D188CD7B2144F5510CDD8EEF886A99EE39543* ___U3CstateU3Ek__BackingField_14;
	// XCSJ.Scripts.RTStack XCSJ.Scripts.ScriptParamList::<stack>k__BackingField
	RTStack_t7A8ACBA6E16A8AA0E1F2DF27145E2008FD92DB02* ___U3CstackU3Ek__BackingField_15;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// XCSJ.PluginCommonUtils.MB
struct MB_tA90A39A26661566DA5435F05D767979BC519C965  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// XCSJ.PluginCommonUtils.UnityObjectEventListener XCSJ.PluginCommonUtils.MB::_eventListener
	UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6* ____eventListener_6;
};

// XCSJ.PluginCommonUtils.Interactions.AbstractInteract
struct AbstractInteract_t9086F4C5433F084257A887F59E833EAFFC0D5DAA  : public MB_tA90A39A26661566DA5435F05D767979BC519C965
{
};

// XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider
struct BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11  : public AbstractInteract_t9086F4C5433F084257A887F59E833EAFFC0D5DAA
{
};

// XCSJ.PluginCamera.Base.BaseCameraProvider
struct BaseCameraProvider_t8428F8C9EBCF1CCCBF455FFB8F98169956C0A845  : public BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11
{
};

// XCSJ.PluginCommonUtils.Manager
struct Manager_t668637993BEF378606AED0F99F4F3D0D2B4A446E  : public BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11
{
};

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginCamera.CameraManager>
struct BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5  : public Manager_t668637993BEF378606AED0F99F4F3D0D2B4A446E
{
};

// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider
struct BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9  : public BaseCameraProvider_t8428F8C9EBCF1CCCBF455FFB8F98169956C0A845
{
};

// XCSJ.PluginCamera.CameraManager
struct CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875  : public BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5
{
	static const Il2CppGuid CLSID;

	// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.CameraManager::_cameraManagerProvider
	BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* ____cameraManagerProvider_13;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<XCSJ.Scripts.Script>
struct List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScriptU5BU5D_tFB078EEF243FB6E31B2B8B09ADA5D9614612886F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.Scripts.Script>

// XCSJ.PluginCamera.Kernel.CameraHandler
struct CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_StaticFields
{
	// XCSJ.PluginCamera.Kernel.ICameraHandler XCSJ.PluginCamera.Kernel.CameraHandler::<handler>k__BackingField
	RuntimeObject* ___U3ChandlerU3Ek__BackingField_0;
};

// XCSJ.PluginCamera.Kernel.CameraHandler

// XCSJ.PluginCamera.CameraHelper

// XCSJ.PluginCamera.CameraHelper

// XCSJ.PluginCamera.IDRange

// XCSJ.PluginCamera.IDRange

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// XCSJ.Algorithms.ReturnValue
struct ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB_StaticFields
{
	// XCSJ.Algorithms.ReturnValue XCSJ.Algorithms.ReturnValue::Empty
	ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* ___Empty_3;
	// XCSJ.Algorithms.ReturnValue XCSJ.Algorithms.ReturnValue::Yes
	ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* ___Yes_4;
	// XCSJ.Algorithms.ReturnValue XCSJ.Algorithms.ReturnValue::No
	ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* ___No_5;
	// System.String XCSJ.Algorithms.ReturnValue::YesString
	String_t* ___YesString_6;
	// System.String XCSJ.Algorithms.ReturnValue::NoString
	String_t* ___NoString_7;
	// System.String XCSJ.Algorithms.ReturnValue::TrueString
	String_t* ___TrueString_8;
	// System.String XCSJ.Algorithms.ReturnValue::FalseString
	String_t* ___FalseString_9;
};

// XCSJ.Algorithms.ReturnValue

// XCSJ.Scripts.ScriptParamList

// XCSJ.Scripts.ScriptParamList

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider

// XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider

// XCSJ.PluginCamera.Base.BaseCameraProvider

// XCSJ.PluginCamera.Base.BaseCameraProvider

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginCamera.CameraManager>
struct BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5_StaticFields
{
	// TManager XCSJ.PluginCommonUtils.BaseManager`1::_instance
	CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ____instance_12;
};

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginCamera.CameraManager>

// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider

// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider

// XCSJ.PluginCamera.CameraManager

// XCSJ.PluginCamera.CameraManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.BaseManager`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseManager_1__ctor_m84A16AA13E69241ABA8C2D86C6D67BFC1ACF6E4E_gshared (BaseManager_1_t53B6051A45D3B73D7692CE12B4AB0AD40F100FDF* __this, const RuntimeMethod* method) ;

// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCamera.Kernel.CameraHandler::GetScripts(XCSJ.PluginCamera.CameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* CameraHandler_GetScripts_mCB929CE5B7251BA57B1EAFAFA71630819D8E0955 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, const RuntimeMethod* method) ;
// XCSJ.Algorithms.ReturnValue XCSJ.PluginCamera.Kernel.CameraHandler::RunScript(XCSJ.PluginCamera.CameraManager,System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* CameraHandler_RunScript_mD6C071F3D925BE7D436FCAD5F9CA0A748A1EE529 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, int32_t ___1_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___2_param, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider>()
inline BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* Component_GetComponentInChildren_TisBaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9_mE4B98672C41448C7AF3C6E3FB657FB67833C26DA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.Kernel.CameraHandler::GetCameraManagerProvider(XCSJ.PluginCamera.CameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* CameraHandler_GetCameraManagerProvider_m4EEEB9BF25BBF796EB1410F2665E9C2BD120073A (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginCamera.CameraManager>::.ctor()
inline void BaseManager_1__ctor_mF84027DE4899F1BC7FC3E3C8BE8AB971D425AA26 (BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseManager_1_t416F06C2AABEB1CD2AA473309606DC73B779D5D5*, const RuntimeMethod*))BaseManager_1__ctor_m84A16AA13E69241ABA8C2D86C6D67BFC1ACF6E4E_gshared)(__this, method);
}
// XCSJ.PluginCamera.Kernel.ICameraHandler XCSJ.PluginCamera.Kernel.CameraHandler::get_handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998_inline (const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCamera.Base.BaseCameraProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraProvider__ctor_mB7AE1717937EE26F3F4AF09DAAA8B34F3464F263 (BaseCameraProvider_t8428F8C9EBCF1CCCBF455FFB8F98169956C0A845* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInteractProvider__ctor_m066ABD02FCFCF352ECDF2872D48B6936D19E072D (BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11* __this, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCamera.CameraManager::GetScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* CameraManager_GetScripts_mDD17072ACE08F34BF45F5A645566D2D32C6EFF16 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* L_0;
		L_0 = CameraHandler_GetScripts_mCB929CE5B7251BA57B1EAFAFA71630819D8E0955(__this, NULL);
		return L_0;
	}
}
// XCSJ.Algorithms.ReturnValue XCSJ.PluginCamera.CameraManager::ExecuteScript(System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* CameraManager_ExecuteScript_m053A94AF9CAC6D1D422549C4A1058D0E197D3345 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* __this, int32_t ___0_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___1_param, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* L_1 = ___1_param;
		ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* L_2;
		L_2 = CameraHandler_RunScript_mD6C071F3D925BE7D436FCAD5F9CA0A748A1EE529(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.CameraManager::get_cameraManagerProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* CameraManager_get_cameraManagerProvider_m237B8307AC74EFFD5B44130306197F9C407328E7 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisBaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9_mE4B98672C41448C7AF3C6E3FB657FB67833C26DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_0 = __this->____cameraManagerProvider_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_2;
		L_2 = Component_GetComponentInChildren_TisBaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9_mE4B98672C41448C7AF3C6E3FB657FB67833C26DA(__this, Component_GetComponentInChildren_TisBaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9_mE4B98672C41448C7AF3C6E3FB657FB67833C26DA_RuntimeMethod_var);
		__this->____cameraManagerProvider_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraManagerProvider_13), (void*)L_2);
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_3 = __this->____cameraManagerProvider_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_5;
		L_5 = CameraHandler_GetCameraManagerProvider_m4EEEB9BF25BBF796EB1410F2665E9C2BD120073A(__this, NULL);
		__this->____cameraManagerProvider_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraManagerProvider_13), (void*)L_5);
	}

IL_0032:
	{
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_6 = __this->____cameraManagerProvider_13;
		return L_6;
	}
}
// System.Void XCSJ.PluginCamera.CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m1C07A270E47DE4F5DCA9393559AA1C15E88329C1 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseManager_1__ctor_mF84027DE4899F1BC7FC3E3C8BE8AB971D425AA26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseManager_1__ctor_mF84027DE4899F1BC7FC3E3C8BE8AB971D425AA26(__this, BaseManager_1__ctor_mF84027DE4899F1BC7FC3E3C8BE8AB971D425AA26_RuntimeMethod_var);
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
// XCSJ.PluginCamera.Kernel.ICameraHandler XCSJ.PluginCamera.Kernel.CameraHandler::get_handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_StaticFields*)il2cpp_codegen_static_fields_for(CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void XCSJ.PluginCamera.Kernel.CameraHandler::set_handler(XCSJ.PluginCamera.Kernel.ICameraHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHandler_set_handler_m454BCFE3C84E58611DEE0EE274D865BD5549A0E4 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		((CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_StaticFields*)il2cpp_codegen_static_fields_for(CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_StaticFields*)il2cpp_codegen_static_fields_for(CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCamera.Kernel.CameraHandler::GetScripts(XCSJ.PluginCamera.CameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* CameraHandler_GetScripts_mCB929CE5B7251BA57B1EAFAFA71630819D8E0955 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManagerHandler_1_t09FCBDE407F15F3A5E654BF7DFC4E5B7ACA80728_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998_inline(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258*)NULL;
	}

IL_000b:
	{
		CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* L_2 = ___0_manager;
		NullCheck(G_B2_0);
		List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* L_3;
		L_3 = InterfaceFuncInvoker1< List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258*, CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* >::Invoke(0 /* System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCommonUtils.Base.Kernel.IManagerHandler`1<XCSJ.PluginCamera.CameraManager>::GetScripts(T) */, IManagerHandler_1_t09FCBDE407F15F3A5E654BF7DFC4E5B7ACA80728_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return L_3;
	}
}
// XCSJ.Algorithms.ReturnValue XCSJ.PluginCamera.Kernel.CameraHandler::RunScript(XCSJ.PluginCamera.CameraManager,System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* CameraHandler_RunScript_mD6C071F3D925BE7D436FCAD5F9CA0A748A1EE529 (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, int32_t ___1_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___2_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManagerHandler_1_t09FCBDE407F15F3A5E654BF7DFC4E5B7ACA80728_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998_inline(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB*)NULL;
	}

IL_000b:
	{
		CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* L_2 = ___0_manager;
		int32_t L_3 = ___1_id;
		ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* L_4 = ___2_param;
		NullCheck(G_B2_0);
		ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* L_5;
		L_5 = InterfaceFuncInvoker3< ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB*, CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875*, int32_t, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* >::Invoke(1 /* XCSJ.Algorithms.ReturnValue XCSJ.PluginCommonUtils.Base.Kernel.IManagerHandler`1<XCSJ.PluginCamera.CameraManager>::ExecuteScript(T,System.Int32,XCSJ.Scripts.ScriptParamList) */, IManagerHandler_1_t09FCBDE407F15F3A5E654BF7DFC4E5B7ACA80728_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
		return L_5;
	}
}
// XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.Kernel.CameraHandler::GetCameraManagerProvider(XCSJ.PluginCamera.CameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* CameraHandler_GetCameraManagerProvider_m4EEEB9BF25BBF796EB1410F2665E9C2BD120073A (CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* ___0_manager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraHandler_tAF2D51A331B38EA3A11F725D771B4CCFCC9E7170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998_inline(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9*)NULL;
	}

IL_000b:
	{
		CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* L_2 = ___0_manager;
		NullCheck(G_B2_0);
		BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* L_3;
		L_3 = InterfaceFuncInvoker1< BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9*, CameraManager_t779C190E68E60513C7E9C2D2FFCF6ABDA40EB875* >::Invoke(0 /* XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider XCSJ.PluginCamera.Kernel.ICameraHandler::GetCameraManagerProvider(XCSJ.PluginCamera.CameraManager) */, ICameraHandler_tAF2D51A331B38EA3A11F725D771B4CCFCC9E7170_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return L_3;
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
// System.Void XCSJ.PluginCamera.Cameras.BaseCameraManagerProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraManagerProvider__ctor_m02D9BD7EE7AAB253DBB5DDFA5A3A18DD683D4563 (BaseCameraManagerProvider_t5F16EB165305AA123E1B0749468002952C758EC9* __this, const RuntimeMethod* method) 
{
	{
		BaseCameraProvider__ctor_mB7AE1717937EE26F3F4AF09DAAA8B34F3464F263(__this, NULL);
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
// System.Void XCSJ.PluginCamera.Base.BaseCameraProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraProvider__ctor_mB7AE1717937EE26F3F4AF09DAAA8B34F3464F263 (BaseCameraProvider_t8428F8C9EBCF1CCCBF455FFB8F98169956C0A845* __this, const RuntimeMethod* method) 
{
	{
		BaseInteractProvider__ctor_m066ABD02FCFCF352ECDF2872D48B6936D19E072D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CameraHandler_get_handler_m05393EAF7E208951C038EEE591C269C59FC0D998_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_StaticFields*)il2cpp_codegen_static_fields_for(CameraHandler_tCC2A56D745CC02708257F3E0A3C3AEEFA58E9013_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0;
		return L_0;
	}
}
