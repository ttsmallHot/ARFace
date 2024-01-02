#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_1_t99B0C2AFE0144816A5C1174EA82EB708EED7C213;
// System.Action`1<XCSJ.PluginCommonUtils.MB>
struct Action_1_tA66D34452DBC9BA35688337ED395724F6B5132F6;
// System.Action`1<XCSJ.PluginCommonUtils.Manager>
struct Action_1_t6509ED7E6EDB3C3133130EAED551D82902A98744;
// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct Action_1_t74232ECA5CF356E4A1E7C1B3B8AB808D3A7C3C3D;
// System.Action`1<XCSJ.PluginSMS.Kernel.State>
struct Action_1_tF10DEAB6A275701191676FD723EE70797AB748CB;
// System.Action`2<XCSJ.PluginRepairman.Machines.ITool[],System.Boolean>
struct Action_2_t32A4A4A144DBDD4E3D2D6EC80EA81316386E7535;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_2_tD2138742CED5D71AA0C7D07762F609469944A86A;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.Boolean>
struct Action_2_t3D0A3483B175614066F5659CC31648305BB60EDD;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,XCSJ.PluginCommonUtils.ComponentModel.Model>
struct Action_2_t55D47583FCFEBFEA3CA6ABA6684A80EBC5F2CCC8;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.String>
struct Action_2_t44CA5644C6362426204BAEFC352F3C3B2AE79713;
// System.Action`2<XCSJ.PluginSMS.Kernel.State,System.Boolean>
struct Action_2_tD2C06223916271627967C67D0F1337562AD5829D;
// System.Action`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateData>
struct Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77;
// System.Action`3<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,System.Int32,XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_3_tBE0DADB6C8FED06A34879459BBE41542D08E6568;
// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.State>
struct Action_3_tE2B8FA8EF9CC7883AA4612448770EA150FD9D83E;
// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.Transition>
struct Action_3_t7E8897E186E51A2982ED79CB03B173DA8A7FB167;
// XCSJ.PluginCommonUtils.BaseManager`1<System.Object>
struct BaseManager_1_t53B6051A45D3B73D7692CE12B4AB0AD40F100FDF;
// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginRepairman.RepairmanManager>
struct BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<System.Object,System.Object>
struct ComponentCollection_2_tCC191463F1912E9B153945B12B8EA85135D8F4B6;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>
struct ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F;
// XCSJ.PluginCommonUtils.ComponentModel.Component`1<System.Object>
struct Component_1_tFFB7468B84B6ED1F751042E2FF1E862599ED5541;
// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2;
// XCSJ.PluginSMS.Kernel.Component`1<System.Object>
struct Component_1_t70B0FCB8E2B1AE54C2BD8DE23EE82D4E5F6F5B71;
// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4;
// System.Collections.Generic.Dictionary`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State>
struct Dictionary_2_tD82C7FBAAB69258C7CB3D1D28D22DF9FB1A62C47;
// System.Func`2<XCSJ.PluginRepairman.Machines.Item,System.Boolean>
struct Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>
struct HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.ITool>
struct IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.Item>
struct IEnumerable_1_t418F6D4A059EF03616C4B8EACE4942FAE642074E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEqualityComparer`1<XCSJ.PluginRepairman.Machines.ITool>
struct IEqualityComparer_1_tA1D3FC072D607A6C7C19E5FC531D094BCCB27DF3;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Component>
struct List_1_t333F9332A99503B01A1B470DA4479DB905AF9218;
// System.Collections.Generic.List`1<XCSJ.PluginRepairman.Machines.ITool>
struct List_1_tEB580EC9F86E68D9457DEEFAAF3289B9AA028E7F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<XCSJ.Scripts.Script>
struct List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>
struct List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroup>
struct List_1_tB3E3A8C3C2DC6A6F7CF9A2AF66AB9DC1AD9B210C;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>
struct List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE;
// XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>
struct Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D;
// XCSJ.Algorithms.Selection`1<System.Object>
struct Selection_1_tE5423FCE3956F18CA09D7AEBADCAF293E9EBDA62;
// XCSJ.PluginSMS.States.StateComponent`1<System.Object>
struct StateComponent_1_tFA4969B3E157F05044CAF4AAB5AA8E08054FB880;
// XCSJ.PluginSMS.States.StateComponent`1<XCSJ.PluginRepairman.Utils.RenderTextureInfo>
struct StateComponent_1_t2A5D78F27A9CCEEEDA39DE82AE6AE428D31723A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// XCSJ.PluginRepairman.Machines.ITool[]
struct IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A;
// XCSJ.PluginCommonUtils.ITreeNode[]
struct ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8;
// XCSJ.PluginCommonUtils.ITreeNodeGraph[]
struct ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// XCSJ.PluginRepairman.Machines.Item[]
struct ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// XCSJ.Scripts.Script[]
struct ScriptU5BU5D_tFB078EEF243FB6E31B2B8B09ADA5D9614612886F;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// XCSJ.PluginSMS.States.AnyState
struct AnyState_t27A98A90CFC8A3076086F1E8866A6AA1418E402C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection
struct ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// XCSJ.PluginSMS.States.EntryState
struct EntryState_tF97001093BE52363E31ECA5BA656C181B3A8B9D3;
// XCSJ.PluginSMS.States.ExitState
struct ExitState_t1DC80DC1208EE12021DE13CA84498CCA31D7537C;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// XCSJ.PluginRepairman.Utils.GameObjectUtils
struct GameObjectUtils_t3936C147C3211744E2834ED273BA5CB0B319FC88;
// XCSJ.PluginRepairman.Kernel.IRepairmanHandler
struct IRepairmanHandler_t1D10F2B22C92BA59ADE99130A26F8DF6CBDD3187;
// XCSJ.PluginRepairman.Machines.ITool
struct ITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D;
// XCSJ.PluginCommonUtils.ITreeNode
struct ITreeNode_tFF794A8749E854760C376D60995B9B37DE2D4135;
// XCSJ.PluginCommonUtils.ITreeNodeGraph
struct ITreeNodeGraph_t2B85932C1C2035953A01965F9C363B5630E85AFA;
// XCSJ.PluginRepairman.Machines.Item
struct Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// XCSJ.Scripts.RTStack
struct RTStack_t7A8ACBA6E16A8AA0E1F2DF27145E2008FD92DB02;
// XCSJ.Scripts.RTState
struct RTState_t553D188CD7B2144F5510CDD8EEF886A99EE39543;
// XCSJ.PluginRepairman.Utils.RenderTextureInfo
struct RenderTextureInfo_tEE9A727BEB59F971A3B563501A78892AE79E90DC;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// XCSJ.PluginRepairman.RepairmanHelper
struct RepairmanHelper_tE230267DFB5B870BB70AF8EDB38AFA48582D5385;
// XCSJ.PluginRepairman.RepairmanManager
struct RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547;
// XCSJ.Algorithms.ReturnValue
struct ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB;
// XCSJ.Scripts.ScriptParamList
struct ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53;
// XCSJ.PluginSMS.Kernel.State
struct State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE;
// XCSJ.PluginSMS.Kernel.StateCollection
struct StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84;
// XCSJ.PluginSMS.Kernel.StateComponent
struct StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7;
// XCSJ.PluginSMS.Kernel.StateData
struct StateData_t952197905E4AABB8E0898C7088482385F5B08200;
// System.String
struct String_t;
// XCSJ.PluginSMS.States.SubStateMachine
struct SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// XCSJ.PluginRepairman.Machines.ToolSelection
struct ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// XCSJ.PluginCommonUtils.UnityObjectEventListener
struct UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B;
// XCSJ.PluginSMS.Kernel.State/OnOutOfBoundsDelegate
struct OnOutOfBoundsDelegate_t3C569E2B7A33A4340D65C3F6A32D8A44C29C1108;

IL2CPP_EXTERN_C RuntimeClass* Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t60E91715540045EF948B162D226A1DE8D2FB0756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManagerHandler_1_t447840F954042FA6DA26386E1B03632F2AD04583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BaseManager_1__ctor_m37A71C1C6CCE98D1561E71020175D86BA0BFBE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_GetComponentsInChildren_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m7E96DAC5C5796D0324575EB66EEC1215E20C6C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_GetComponent_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m9CC80062D149F0363DD6C7C65DBFD630AB3A98CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1_Init_m472BD1AF0CF573A812A318CC99ED547A0E08F499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m3228AA4927B03C9482268E056266AFD2730F0776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mA504433F2834F7F144C3F591A8428B554D24ADE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mDD9A4B882C5A02699D192368B8E9B9222D17298D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_AddWithDistinct_m6E9924B79E6EB3C63E25A73E0DB8841D2D65B446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_Add_mA65DABFBCD9091E94F82DC143801C47CF563E3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_Remove_m876396953DAE9E93ED10EA1DD095F3D8C7B75A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_Remove_mF121A7B2AE19B3A051D4F52F044234D1116E265D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1__ctor_m22D3D79DDB4C89ABC91FDFA7E75127768ABD5DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_get_first_m3A694897C603DAFD0DEEDA3E087D096AD3C12478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Selection_1_get_selections_m9E45DAB83299D1C95998C8C9D9652B911E6407F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateComponent_1__ctor_m1745807142AF4A5D9EAAA1F34E31CFDA86141538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CGetChildrenItemsU3Eb__0_m96CEE65D88DEF99D2A73E5048FD967451108B9F7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A;
struct ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8;
struct ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7;
struct ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB3AE3C69080854385FB66AC3F90694BB7D247C98 
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

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>
struct Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D  : public RuntimeObject
{
};

// XCSJ.Algorithms.Any
struct Any_t2CF9DEAEAABAD5D726173CC9ED146F7A68D33839  : public RuntimeObject
{
	// System.Object XCSJ.Algorithms.Any::<objectValue>k__BackingField
	RuntimeObject* ___U3CobjectValueU3Ek__BackingField_0;
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// XCSJ.PluginRepairman.Utils.GameObjectUtils
struct GameObjectUtils_t3936C147C3211744E2834ED273BA5CB0B319FC88  : public RuntimeObject
{
};

// XCSJ.PluginRepairman.IDRange
struct IDRange_tF6B547A6B861A5D92C9FA0AC7322802EC6C7E5AD  : public RuntimeObject
{
};

// XCSJ.PluginRepairman.Kernel.RepairmanHandler
struct RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5  : public RuntimeObject
{
};

// XCSJ.PluginRepairman.RepairmanHelper
struct RepairmanHelper_tE230267DFB5B870BB70AF8EDB38AFA48582D5385  : public RuntimeObject
{
};

// XCSJ.PluginSMS.Kernel.StateData
struct StateData_t952197905E4AABB8E0898C7088482385F5B08200  : public RuntimeObject
{
	// UnityEngine.GameObject XCSJ.PluginSMS.Kernel.StateData::<gameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CgameObjectU3Ek__BackingField_0;
	// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.StateData::<stateCollection>k__BackingField
	StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___U3CstateCollectionU3Ek__BackingField_1;
	// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateData::transitionSet
	HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* ___transitionSet_2;
	// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::<parent>k__BackingField
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___U3CparentU3Ek__BackingField_3;
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateData::<state>k__BackingField
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___U3CstateU3Ek__BackingField_4;
	// System.Object XCSJ.PluginSMS.Kernel.StateData::<tag>k__BackingField
	RuntimeObject* ___U3CtagU3Ek__BackingField_5;
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateData::<workState>k__BackingField
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___U3CworkStateU3Ek__BackingField_6;
	// XCSJ.PluginSMS.Kernel.EWorkMode XCSJ.PluginSMS.Kernel.StateData::<workMode>k__BackingField
	int32_t ___U3CworkModeU3Ek__BackingField_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B  : public RuntimeObject
{
	// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0::<>4__this
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___U3CU3E4__this_0;
	// XCSJ.PluginSMS.States.SubStateMachine XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0::subSM
	SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6* ___subSM_1;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// XCSJ.PluginRepairman.Machines.ToolSelection
struct ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6  : public Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D
{
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Func`2<XCSJ.PluginRepairman.Machines.Item,System.Boolean>
struct Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// XCSJ.PluginCommonUtils.SO
struct SO_tAA999B189863A3A7917E6EC3E5AB500C26DBB853  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// XCSJ.PluginCommonUtils.UnityObjectEventListener XCSJ.PluginCommonUtils.SO::_eventListener
	UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6* ____eventListener_4;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// XCSJ.PluginCommonUtils.ComponentModel.Model
struct Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE  : public SO_tAA999B189863A3A7917E6EC3E5AB500C26DBB853
{
	// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::_enable
	bool ____enable_5;
	// XCSJ.PluginCommonUtils.ComponentModel.Model XCSJ.PluginCommonUtils.ComponentModel.Model::_parent
	Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* ____parent_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// XCSJ.PluginCommonUtils.ComponentModel.Component
struct Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7  : public Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection
struct ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C  : public Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE
{
	// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::_components
	List_1_t333F9332A99503B01A1B470DA4479DB905AF9218* ____components_15;
};

// XCSJ.PluginCommonUtils.MB
struct MB_tA90A39A26661566DA5435F05D767979BC519C965  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// XCSJ.PluginCommonUtils.UnityObjectEventListener XCSJ.PluginCommonUtils.MB::_eventListener
	UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6* ____eventListener_6;
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_1_t63E45F2416AD2DCC58ED4569B63E49C7DF73F409  : public ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C
{
};

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2  : public Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7
{
};

// XCSJ.PluginCommonUtils.Interactions.AbstractInteract
struct AbstractInteract_t9086F4C5433F084257A887F59E833EAFFC0D5DAA  : public MB_tA90A39A26661566DA5435F05D767979BC519C965
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9  : public ComponentCollection_1_t63E45F2416AD2DCC58ED4569B63E49C7DF73F409
{
};

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4  : public Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2
{
	// System.Boolean XCSJ.PluginSMS.Kernel.Component`1::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_15;
	// System.Double XCSJ.PluginSMS.Kernel.Component`1::<entryTime>k__BackingField
	double ___U3CentryTimeU3Ek__BackingField_16;
	// System.Double XCSJ.PluginSMS.Kernel.Component`1::<exitTime>k__BackingField
	double ___U3CexitTimeU3Ek__BackingField_17;
};

// XCSJ.PluginCommonUtils.Interactions.BaseInteractProvider
struct BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11  : public AbstractInteract_t9086F4C5433F084257A887F59E833EAFFC0D5DAA
{
};

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F  : public ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9
{
	// System.Boolean XCSJ.PluginSMS.Kernel.ComponentCollection`3::_skip
	bool ____skip_21;
	// System.Boolean XCSJ.PluginSMS.Kernel.ComponentCollection`3::_skipOnce
	bool ____skipOnce_22;
	// System.Boolean XCSJ.PluginSMS.Kernel.ComponentCollection`3::_isActive
	bool ____isActive_23;
	// System.Double XCSJ.PluginSMS.Kernel.ComponentCollection`3::<entryTime>k__BackingField
	double ___U3CentryTimeU3Ek__BackingField_25;
	// System.Double XCSJ.PluginSMS.Kernel.ComponentCollection`3::<exitTime>k__BackingField
	double ___U3CexitTimeU3Ek__BackingField_26;
	// System.Double XCSJ.PluginSMS.Kernel.ComponentCollection`3::<updateTime>k__BackingField
	double ___U3CupdateTimeU3Ek__BackingField_27;
};

// XCSJ.PluginCommonUtils.Manager
struct Manager_t668637993BEF378606AED0F99F4F3D0D2B4A446E  : public BaseInteractProvider_t8B981FD1619C280E4BF6DF4CE8AAD97738E72F11
{
};

// XCSJ.PluginSMS.Kernel.StateComponent
struct StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7  : public Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4
{
};

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginRepairman.RepairmanManager>
struct BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE  : public Manager_t668637993BEF378606AED0F99F4F3D0D2B4A446E
{
};

// XCSJ.PluginSMS.States.StateComponent`1<XCSJ.PluginRepairman.Utils.RenderTextureInfo>
struct StateComponent_1_t2A5D78F27A9CCEEEDA39DE82AE6AE428D31723A3  : public StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7
{
};

// XCSJ.PluginRepairman.Machines.Item
struct Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A  : public StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7
{
	// System.String XCSJ.PluginRepairman.Machines.Item::_description
	String_t* ____description_18;
	// UnityEngine.GameObject XCSJ.PluginRepairman.Machines.Item::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_19;
	// System.Collections.Generic.List`1<UnityEngine.Transform> XCSJ.PluginRepairman.Machines.Item::childrenTransform
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___childrenTransform_20;
	// UnityEngine.Texture2D XCSJ.PluginRepairman.Machines.Item::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_21;
	// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item::<parentItem>k__BackingField
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___U3CparentItemU3Ek__BackingField_22;
	// System.Boolean XCSJ.PluginRepairman.Machines.Item::<visible>k__BackingField
	bool ___U3CvisibleU3Ek__BackingField_23;
	// System.Boolean XCSJ.PluginRepairman.Machines.Item::<expanded>k__BackingField
	bool ___U3CexpandedU3Ek__BackingField_24;
};

// XCSJ.PluginSMS.Kernel.State
struct State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE  : public ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F
{
	// System.Boolean XCSJ.PluginSMS.Kernel.State::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_30;
	// XCSJ.PluginSMS.Kernel.EWorkMode XCSJ.PluginSMS.Kernel.State::<workMode>k__BackingField
	int32_t ___U3CworkModeU3Ek__BackingField_31;
	// System.Double XCSJ.PluginSMS.Kernel.State::_speed
	double ____speed_32;
	// System.Boolean XCSJ.PluginSMS.Kernel.State::hierarchySpeed
	bool ___hierarchySpeed_33;
	// System.Boolean XCSJ.PluginSMS.Kernel.State::waitOTL
	bool ___waitOTL_34;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.State::_inTransitions
	List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* ____inTransitions_35;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.State::_outTransitions
	List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* ____outTransitions_36;
	// UnityEngine.Rect XCSJ.PluginSMS.Kernel.State::_rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____rect_37;
	// System.Double XCSJ.PluginSMS.Kernel.State::<timeLengthWithSpeedSinceEntry>k__BackingField
	double ___U3CtimeLengthWithSpeedSinceEntryU3Ek__BackingField_38;
};

// XCSJ.PluginRepairman.Utils.RenderTextureInfo
struct RenderTextureInfo_tEE9A727BEB59F971A3B563501A78892AE79E90DC  : public StateComponent_1_t2A5D78F27A9CCEEEDA39DE82AE6AE428D31723A3
{
	// UnityEngine.Vector3 XCSJ.PluginRepairman.Utils.RenderTextureInfo::angle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angle_18;
	// System.Single XCSJ.PluginRepairman.Utils.RenderTextureInfo::distanceScaleValue
	float ___distanceScaleValue_19;
};

// XCSJ.PluginRepairman.RepairmanManager
struct RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547  : public BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE
{
	static const Il2CppGuid CLSID;

};

// XCSJ.PluginSMS.Kernel.StateCollection
struct StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84  : public State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE
{
	// UnityEngine.Rect XCSJ.PluginSMS.Kernel.StateCollection::_parentRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____parentRect_43;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::_states
	List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* ____states_44;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::_activeStates
	List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* ____activeStates_45;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateCollection::_transitions
	List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* ____transitions_46;
	// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateCollection::_stateData
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* ____stateData_47;
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection::activeEntryState
	bool ___activeEntryState_50;
	// System.Collections.Generic.Dictionary`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::stateCloneMap
	Dictionary_2_tD82C7FBAAB69258C7CB3D1D28D22DF9FB1A62C47* ___stateCloneMap_51;
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection::withInOutTransition
	bool ___withInOutTransition_52;
	// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateCollection::willActiveOfParentTransition
	HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* ___willActiveOfParentTransition_53;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::willActive
	List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* ___willActive_54;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::willInactive
	List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* ___willInactive_55;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroup> XCSJ.PluginSMS.Kernel.StateCollection::_groups
	List_1_tB3E3A8C3C2DC6A6F7CF9A2AF66AB9DC1AD9B210C* ____groups_56;
};

// XCSJ.PluginSMS.States.SubStateMachine
struct SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6  : public StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84
{
	// XCSJ.PluginSMS.States.EntryState XCSJ.PluginSMS.States.SubStateMachine::_entryState
	EntryState_tF97001093BE52363E31ECA5BA656C181B3A8B9D3* ____entryState_57;
	// XCSJ.PluginSMS.States.AnyState XCSJ.PluginSMS.States.SubStateMachine::_anyState
	AnyState_t27A98A90CFC8A3076086F1E8866A6AA1418E402C* ____anyState_58;
	// XCSJ.PluginSMS.States.ExitState XCSJ.PluginSMS.States.SubStateMachine::_exitState
	ExitState_t1DC80DC1208EE12021DE13CA84498CCA31D7537C* ____exitState_59;
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

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>
struct Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_StaticFields
{
	// System.Action`2<T[],System.Boolean> XCSJ.Algorithms.Selection`1::selectionChanged
	Action_2_t32A4A4A144DBDD4E3D2D6EC80EA81316386E7535* ___selectionChanged_0;
	// System.Collections.Generic.IEqualityComparer`1<T> XCSJ.Algorithms.Selection`1::<comparer>k__BackingField
	RuntimeObject* ___U3CcomparerU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<T> XCSJ.Algorithms.Selection`1::_selections
	List_1_tEB580EC9F86E68D9457DEEFAAF3289B9AA028E7F* ____selections_2;
};

// XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};

// UnityEngine.GUIContent

// XCSJ.PluginRepairman.Utils.GameObjectUtils

// XCSJ.PluginRepairman.Utils.GameObjectUtils

// XCSJ.PluginRepairman.IDRange

// XCSJ.PluginRepairman.IDRange

// XCSJ.PluginRepairman.Kernel.RepairmanHandler
struct RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_StaticFields
{
	// XCSJ.PluginRepairman.Kernel.IRepairmanHandler XCSJ.PluginRepairman.Kernel.RepairmanHandler::<handler>k__BackingField
	RuntimeObject* ___U3ChandlerU3Ek__BackingField_0;
};

// XCSJ.PluginRepairman.Kernel.RepairmanHandler

// XCSJ.PluginRepairman.RepairmanHelper

// XCSJ.PluginRepairman.RepairmanHelper

// XCSJ.PluginSMS.Kernel.StateData

// XCSJ.PluginSMS.Kernel.StateData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0

// XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0

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

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

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

// System.Single

// System.Single

// XCSJ.PluginRepairman.Machines.ToolSelection
struct ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_StaticFields
{
	// System.Int32 XCSJ.PluginRepairman.Machines.ToolSelection::_selectionMaxCount
	int32_t ____selectionMaxCount_3;
};

// XCSJ.PluginRepairman.Machines.ToolSelection

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

// System.Void

// System.Void

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Func`2<XCSJ.PluginRepairman.Machines.Item,System.Boolean>

// System.Func`2<XCSJ.PluginRepairman.Machines.Item,System.Boolean>

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection
struct ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C_StaticFields
{
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::onWillAddComponent
	Action_2_tD2138742CED5D71AA0C7D07762F609469944A86A* ___onWillAddComponent_16;
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::onAddComponent
	Action_1_t99B0C2AFE0144816A5C1174EA82EB708EED7C213* ___onAddComponent_17;
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::onWillRemoveComponent
	Action_1_t99B0C2AFE0144816A5C1174EA82EB708EED7C213* ___onWillRemoveComponent_18;
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::onRemoveComponent
	Action_1_t99B0C2AFE0144816A5C1174EA82EB708EED7C213* ___onRemoveComponent_19;
	// System.Action`3<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,System.Int32,XCSJ.PluginCommonUtils.ComponentModel.Component> XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::onComponentInvalid
	Action_3_tBE0DADB6C8FED06A34879459BBE41542D08E6568* ___onComponentInvalid_20;
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F_StaticFields
{
	// System.Action`2<T,System.Boolean> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onActive
	Action_2_tD2C06223916271627967C67D0F1337562AD5829D* ___onActive_24;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onEntry
	Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77* ___onEntry_28;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onExit
	Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77* ___onExit_29;
};

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>

// XCSJ.PluginSMS.Kernel.StateComponent

// XCSJ.PluginSMS.Kernel.StateComponent

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginRepairman.RepairmanManager>
struct BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE_StaticFields
{
	// TManager XCSJ.PluginCommonUtils.BaseManager`1::_instance
	RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* ____instance_12;
};

// XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginRepairman.RepairmanManager>

// XCSJ.PluginSMS.States.StateComponent`1<XCSJ.PluginRepairman.Utils.RenderTextureInfo>

// XCSJ.PluginSMS.States.StateComponent`1<XCSJ.PluginRepairman.Utils.RenderTextureInfo>

// XCSJ.PluginRepairman.Machines.Item

// XCSJ.PluginRepairman.Machines.Item

// XCSJ.PluginSMS.Kernel.State
struct State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_StaticFields
{
	// System.Action`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.State::onStateEntry
	Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77* ___onStateEntry_39;
	// System.Action`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.State::onStateExit
	Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77* ___onStateExit_40;
	// System.Action`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.State::onStateCreated
	Action_1_tF10DEAB6A275701191676FD723EE70797AB748CB* ___onStateCreated_41;
	// XCSJ.PluginSMS.Kernel.State/OnOutOfBoundsDelegate XCSJ.PluginSMS.Kernel.State::onOutOfBounds
	OnOutOfBoundsDelegate_t3C569E2B7A33A4340D65C3F6A32D8A44C29C1108* ___onOutOfBounds_42;
};

// XCSJ.PluginSMS.Kernel.State

// XCSJ.PluginRepairman.Utils.RenderTextureInfo

// XCSJ.PluginRepairman.Utils.RenderTextureInfo

// XCSJ.PluginRepairman.RepairmanManager

// XCSJ.PluginRepairman.RepairmanManager

// XCSJ.PluginSMS.States.SubStateMachine

// XCSJ.PluginSMS.States.SubStateMachine
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// XCSJ.PluginRepairman.Machines.Item[]
struct ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* m_Items[1];

	inline Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// XCSJ.PluginCommonUtils.ITreeNode[]
struct ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8  : public RuntimeArray
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
// XCSJ.PluginCommonUtils.ITreeNodeGraph[]
struct ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7  : public RuntimeArray
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
// XCSJ.PluginRepairman.Machines.ITool[]
struct IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A  : public RuntimeArray
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


// System.Void XCSJ.PluginCommonUtils.BaseManager`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseManager_1__ctor_m84A16AA13E69241ABA8C2D86C6D67BFC1ACF6E4E_gshared (BaseManager_1_t53B6051A45D3B73D7692CE12B4AB0AD40F100FDF* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.States.StateComponent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_1__ctor_m41F504DB62C0E208480007A5845C089E25FBF6D8_gshared (StateComponent_1_tFA4969B3E157F05044CAF4AAB5AA8E08054FB880* __this, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.Component`1<System.Object>::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_1_get_parent_mB5D342FF9D4FC5D97466045CD722051EA7ED267A_gshared (Component_1_tFFB7468B84B6ED1F751042E2FF1E862599ED5541* __this, const RuntimeMethod* method) ;
// T[] XCSJ.Algorithms.Selection`1<System.Object>::get_selections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Selection_1_get_selections_m88D12421D372A770EF408C436F42A58A023448EE_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void XCSJ.Algorithms.Selection`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_1_Add_mBB766751FA78A5D074D529EA3CF16A97F0654F98_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.Algorithms.Selection`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_1_Remove_m2D1E98C8C151FBA4E397A6CFF01279EFD0DF8B83_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Component`1<System.Object>::Init(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_1_Init_m90D87E8D0F20712EC0B34C1C1B3D33D0C2D7DB35_gshared (Component_1_t70B0FCB8E2B1AE54C2BD8DE23EE82D4E5F6F5B71* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<System.Object,System.Object>::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCollection_2_get_parent_mBCD80C2CC3BB104AFE88562CEE600B74598703A6_gshared (ComponentCollection_2_tCC191463F1912E9B153945B12B8EA85135D8F4B6* __this, const RuntimeMethod* method) ;
// T XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCollection_GetComponent_TisRuntimeObject_mBAEE1140B96F44C3CA5B981A4B5184CDD29A0ACD_gshared (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_includeDisable, const RuntimeMethod* method) ;
// TC[] XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ComponentCollection_3_GetComponentsInChildren_TisRuntimeObject_m70AADBFFA3EB35B9B88A1AE8DCCEC5B32E879A0F_gshared (ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31* __this, bool ___0_includeDisable, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T XCSJ.Algorithms.Selection`1<System.Object>::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Selection_1_get_first_m5421BE27E19A2C9AFE42D2ADBAA0E15692EC6279_gshared (const RuntimeMethod* method) ;
// System.Void XCSJ.Algorithms.Selection`1<System.Object>::AddWithDistinct(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_1_AddWithDistinct_mE5665150DF3B3F1751268E92E0590FC881E4FB83_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.Algorithms.Selection`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selection_1__ctor_mB2D448ADE6259500B826FD4B4A730AC9FC5AE211_gshared (Selection_1_tE5423FCE3956F18CA09D7AEBADCAF293E9EBDA62* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginRepairman.Kernel.RepairmanHandler::GetScripts(XCSJ.PluginRepairman.RepairmanManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* RepairmanHandler_GetScripts_mBA6634B80AEF58EEF3CC355BB7B3B724AFA3200D (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* ___0_manager, const RuntimeMethod* method) ;
// XCSJ.Algorithms.ReturnValue XCSJ.PluginRepairman.Kernel.RepairmanHandler::RunScript(XCSJ.PluginRepairman.RepairmanManager,System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* RepairmanHandler_RunScript_mB672BD89D0A325409164F0D86CF42502B9DCD8D3 (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* ___0_manager, int32_t ___1_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___2_param, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.BaseManager`1<XCSJ.PluginRepairman.RepairmanManager>::.ctor()
inline void BaseManager_1__ctor_m37A71C1C6CCE98D1561E71020175D86BA0BFBE56 (BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseManager_1_tBBA461E5480D1111618C0B16EE8FE90AA9B89FDE*, const RuntimeMethod*))BaseManager_1__ctor_m84A16AA13E69241ABA8C2D86C6D67BFC1ACF6E4E_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.States.StateComponent`1<XCSJ.PluginRepairman.Utils.RenderTextureInfo>::.ctor()
inline void StateComponent_1__ctor_m1745807142AF4A5D9EAAA1F34E31CFDA86141538 (StateComponent_1_t2A5D78F27A9CCEEEDA39DE82AE6AE428D31723A3* __this, const RuntimeMethod* method)
{
	((  void (*) (StateComponent_1_t2A5D78F27A9CCEEEDA39DE82AE6AE428D31723A3*, const RuntimeMethod*))StateComponent_1__ctor_m41F504DB62C0E208480007A5845C089E25FBF6D8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>::get_parent()
inline State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A (Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2* __this, const RuntimeMethod* method)
{
	return ((  State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* (*) (Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2*, const RuntimeMethod*))Component_1_get_parent_mB5D342FF9D4FC5D97466045CD722051EA7ED267A_gshared)(__this, method);
}
// T[] XCSJ.Algorithms.Selection`1<UnityEngine.GameObject>::get_selections()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Selection_1_get_selections_m9E45DAB83299D1C95998C8C9D9652B911E6407F4 (const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (const RuntimeMethod*))Selection_1_get_selections_m88D12421D372A770EF408C436F42A58A023448EE_gshared)(method);
}
// System.Boolean System.Linq.Enumerable::Contains<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m3228AA4927B03C9482268E056266AFD2730F0776 (RuntimeObject* ___0_source, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void XCSJ.Algorithms.Selection`1<UnityEngine.GameObject>::Add(T)
inline void Selection_1_Add_mA65DABFBCD9091E94F82DC143801C47CF563E3B5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Selection_1_Add_mBB766751FA78A5D074D529EA3CF16A97F0654F98_gshared)(___0_value, method);
}
// System.Void XCSJ.Algorithms.Selection`1<UnityEngine.GameObject>::Remove(T)
inline void Selection_1_Remove_mF121A7B2AE19B3A051D4F52F044234D1116E265D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Selection_1_Remove_m2D1E98C8C151FBA4E397A6CFF01279EFD0DF8B83_gshared)(___0_value, method);
}
// System.Boolean XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>::Init(XCSJ.PluginSMS.Kernel.StateData)
inline bool Component_1_Init_m472BD1AF0CF573A812A318CC99ED547A0E08F499 (Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4*, StateData_t952197905E4AABB8E0898C7088482385F5B08200*, const RuntimeMethod*))Component_1_Init_m90D87E8D0F20712EC0B34C1C1B3D33D0C2D7DB35_gshared)(__this, ___0_stateData, method);
}
// System.Void XCSJ.PluginRepairman.Machines.Item::FindGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_FindGameObject_mBFFE7E1D943759615D74C939419D62175090C390 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item::get_parentItem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>::get_parent()
inline State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40 (ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9* __this, const RuntimeMethod* method)
{
	return ((  State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* (*) (ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9*, const RuntimeMethod*))ComponentCollection_2_get_parent_mBCD80C2CC3BB104AFE88562CEE600B74598703A6_gshared)(__this, method);
}
// T XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponent<XCSJ.PluginRepairman.Machines.Item>(System.Boolean)
inline Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ComponentCollection_GetComponent_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m9CC80062D149F0363DD6C7C65DBFD630AB3A98CF (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_includeDisable, const RuntimeMethod* method)
{
	return ((  Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* (*) (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C*, bool, const RuntimeMethod*))ComponentCollection_GetComponent_TisRuntimeObject_mBAEE1140B96F44C3CA5B981A4B5184CDD29A0ACD_gshared)(__this, ___0_includeDisable, method);
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_parentItem(XCSJ.PluginRepairman.Machines.Item)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Item_set_parentItem_m17F96DCEBE1A23BCCA60FE1F1FB88C8354C822AC_inline (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mE215721794FDBD24205E4245739D869D9E1C91B1 (U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* __this, const RuntimeMethod* method) ;
// TC[] XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>::GetComponentsInChildren<XCSJ.PluginRepairman.Machines.Item>(System.Boolean)
inline ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* ComponentCollection_3_GetComponentsInChildren_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m7E96DAC5C5796D0324575EB66EEC1215E20C6C1A (ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F* __this, bool ___0_includeDisable, const RuntimeMethod* method)
{
	return ((  ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* (*) (ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F*, bool, const RuntimeMethod*))ComponentCollection_3_GetComponentsInChildren_TisRuntimeObject_m70AADBFFA3EB35B9B88A1AE8DCCEC5B32E879A0F_gshared)(__this, ___0_includeDisable, method);
}
// System.Void System.Func`2<XCSJ.PluginRepairman.Machines.Item,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m16861A59CD3C6AA8C7351F1E88E0ECE1BE7026C9 (Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<XCSJ.PluginRepairman.Machines.Item>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mDD9A4B882C5A02699D192368B8E9B9222D17298D (RuntimeObject* ___0_source, Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// TSource[] System.Linq.Enumerable::ToArray<XCSJ.PluginRepairman.Machines.Item>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* Enumerable_ToArray_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mA504433F2834F7F144C3F591A8428B554D24ADE5 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String XCSJ.PluginRepairman.Machines.Item::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_displayName_m3CA5E2C1D6906A2647910EAD1672614C5B189C6F (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Int32 XCSJ.PluginRepairman.Machines.Item::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Item_get_depth_mE2F3FAAB537873273F10A980F05F2B3E76C2676C (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item::GetParentItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* Item_GetParentItem_mCE905496E02D928973A8EB9FB68D4CBAD3738818 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// XCSJ.PluginRepairman.Machines.Item[] XCSJ.PluginRepairman.Machines.Item::GetChildrenItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* Item_GetChildrenItems_m820FAFF6535F6B4761E7995A5B776B3F7EA2A54B (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent__ctor_mEC6118A85A5EC85C77CF7D7FFAF5A6E58A3AA3C7 (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T[] XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>::get_selections()
inline IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B (const RuntimeMethod* method)
{
	return ((  IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* (*) (const RuntimeMethod*))Selection_1_get_selections_m88D12421D372A770EF408C436F42A58A023448EE_gshared)(method);
}
// System.Boolean System.Linq.Enumerable::Contains<XCSJ.PluginRepairman.Machines.ITool>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0 (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection_RemoveFirst_mC54ABE0BFAFF46421DF0F39722DF5A8AB4BAE0AF (const RuntimeMethod* method) ;
// T XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>::get_first()
inline RuntimeObject* Selection_1_get_first_m3A694897C603DAFD0DEEDA3E087D096AD3C12478 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Selection_1_get_first_m5421BE27E19A2C9AFE42D2ADBAA0E15692EC6279_gshared)(method);
}
// System.Void XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>::Remove(T)
inline void Selection_1_Remove_m876396953DAE9E93ED10EA1DD095F3D8C7B75A92 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Selection_1_Remove_m2D1E98C8C151FBA4E397A6CFF01279EFD0DF8B83_gshared)(___0_value, method);
}
// System.Void XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>::AddWithDistinct(T)
inline void Selection_1_AddWithDistinct_m6E9924B79E6EB3C63E25A73E0DB8841D2D65B446 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Selection_1_AddWithDistinct_mE5665150DF3B3F1751268E92E0590FC881E4FB83_gshared)(___0_value, method);
}
// System.Int32 XCSJ.PluginRepairman.Machines.ToolSelection::get_selectionMaxCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToolSelection_get_selectionMaxCount_m09E1E2FB682DAC52165D0C30CAE206558DE23057_inline (const RuntimeMethod* method) ;
// System.Void XCSJ.Algorithms.Selection`1<XCSJ.PluginRepairman.Machines.ITool>::.ctor()
inline void Selection_1__ctor_m22D3D79DDB4C89ABC91FDFA7E75127768ABD5DB5 (Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D* __this, const RuntimeMethod* method)
{
	((  void (*) (Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D*, const RuntimeMethod*))Selection_1__ctor_mB2D448ADE6259500B826FD4B4A730AC9FC5AE211_gshared)(__this, method);
}
// XCSJ.PluginRepairman.Kernel.IRepairmanHandler XCSJ.PluginRepairman.Kernel.RepairmanHandler::get_handler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RepairmanHandler_get_handler_m6C2E5A61A56F4FAC5717027AE5052B566C776819_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void XCSJ.PluginRepairman.RepairmanHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepairmanHelper__ctor_m4959F095FFC75DB7B991FB0A52E2EEDF9C0E4203 (RepairmanHelper_tE230267DFB5B870BB70AF8EDB38AFA48582D5385* __this, const RuntimeMethod* method) 
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginRepairman.RepairmanManager::GetScripts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* RepairmanManager_GetScripts_m8553BF58C63D413F04B66CDF34AD8F86B52D66AD (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* L_0;
		L_0 = RepairmanHandler_GetScripts_mBA6634B80AEF58EEF3CC355BB7B3B724AFA3200D(__this, NULL);
		return L_0;
	}
}
// XCSJ.Algorithms.ReturnValue XCSJ.PluginRepairman.RepairmanManager::ExecuteScript(System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* RepairmanManager_ExecuteScript_m19B5B9CDF876742B0C2E51FDD7951A28610F5A30 (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* __this, int32_t ___0_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___1_param, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* L_1 = ___1_param;
		ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* L_2;
		L_2 = RepairmanHandler_RunScript_mB672BD89D0A325409164F0D86CF42502B9DCD8D3(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void XCSJ.PluginRepairman.RepairmanManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepairmanManager__ctor_m098952AB2BF047B56225B6E7323B3C9BC4EDEB0A (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseManager_1__ctor_m37A71C1C6CCE98D1561E71020175D86BA0BFBE56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseManager_1__ctor_m37A71C1C6CCE98D1561E71020175D86BA0BFBE56(__this, BaseManager_1__ctor_m37A71C1C6CCE98D1561E71020175D86BA0BFBE56_RuntimeMethod_var);
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
// UnityEngine.Bounds XCSJ.PluginRepairman.Utils.GameObjectUtils::GetBounds(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GameObjectUtils_GetBounds_m8AAAA38B1C79DB93F03AAFB7B1679498D0DE6D76 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_1 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_3 = NULL;
	int32_t V_4 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_7 = NULL;
	int32_t V_8 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_9 = NULL;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_go;
		NullCheck(L_1);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_1, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_1 = L_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_3 = V_1;
		V_3 = L_3;
		V_4 = 0;
		goto IL_0037;
	}

IL_0014:
	{
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_5 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = V_5;
		NullCheck(L_9);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10;
		L_10 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_9, NULL);
		V_6 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		V_0 = L_12;
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0037:
	{
		int32_t L_14 = V_4;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_17 = V_1;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_16, ((float)((int32_t)(((RuntimeArray*)L_17)->max_length))), NULL);
		V_0 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_2), L_19, L_20, NULL);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_21 = V_1;
		V_7 = L_21;
		V_8 = 0;
		goto IL_0079;
	}

IL_005e:
	{
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_22 = V_7;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = V_9;
		NullCheck(L_26);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27;
		L_27 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_26, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_2), L_27, NULL);
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0079:
	{
		int32_t L_29 = V_8;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_30 = V_7;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = V_2;
		return L_31;
	}
}
// UnityEngine.GameObject XCSJ.PluginRepairman.Utils.GameObjectUtils::CloneGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectUtils_CloneGameObject_mCA43E0C3D5B32EC76E4816D0D13DBE9191313AB8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_src;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_000b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_src;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_src;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_src;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_5, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___0_src;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___0_src;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		NullCheck(L_17);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_17, L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___0_src;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ___0_src;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_26, NULL);
		V_1 = L_27;
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_29;
		L_29 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_21);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_21, L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_0;
		return L_30;
	}
}
// System.Void XCSJ.PluginRepairman.Utils.GameObjectUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectUtils__ctor_m05109F5DE01645F9155C84893797D49B99869934 (GameObjectUtils_t3936C147C3211744E2834ED273BA5CB0B319FC88* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void XCSJ.PluginRepairman.Utils.RenderTextureInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureInfo__ctor_m26C1707046AEEEB36D90D531D2B7CCC3C51E7329 (RenderTextureInfo_tEE9A727BEB59F971A3B563501A78892AE79E90DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateComponent_1__ctor_m1745807142AF4A5D9EAAA1F34E31CFDA86141538_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___distanceScaleValue_19 = (1.10000002f);
		StateComponent_1__ctor_m1745807142AF4A5D9EAAA1F34E31CFDA86141538(__this, StateComponent_1__ctor_m1745807142AF4A5D9EAAA1F34E31CFDA86141538_RuntimeMethod_var);
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
// UnityEngine.Transform XCSJ.PluginRepairman.Machines.Item::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Item_get_transform_m487CF74D680CFA7C5165A1667012E3CB090A3DCB (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_000f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___go_19;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		return L_3;
	}
}
// System.String XCSJ.PluginRepairman.Machines.Item::get_showName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_showName_m2633E63778D03D931F86CD94BC9D11AE835BC1CA (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_showName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_showName_mD1B4688ECBC5E2E3F3CABCA0B025031EF7034998 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_1, NULL);
		return;
	}
}
// System.String XCSJ.PluginRepairman.Machines.Item::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_description_mC73686E0E9DE419030FFF1F06847D092819DF89D (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____description_18;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_description_m99D3DDC820098492D246E928002208CBCC148071 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____description_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____description_18), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject XCSJ.PluginRepairman.Machines.Item::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Item_get_gameObject_m18C3B02BF6692E74BB08C6C65548E8F03A54B0CE (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_19;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_gameObject_m144D1B27A2D9E90159A2B97BB0153B27FD3BA690 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___go_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___go_19), (void*)L_0);
		return;
	}
}
// UnityEngine.Texture2D XCSJ.PluginRepairman.Machines.Item::get_texture2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Item_get_texture2D_mFF9DD43F40C6ADE7154950FF6B272E6E73125416 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___icon_21;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_texture2D(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_texture2D_m40B8C9332B10066843B1687DE876E468D7AFDEE4 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_value, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_value;
		__this->___icon_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___icon_21), (void*)L_0);
		return;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item::get_selected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Item_get_selected_m1CBF5F334EC0ACAE96B8962C4EEAB4E51B095BA2 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m3228AA4927B03C9482268E056266AFD2730F0776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_selections_m9E45DAB83299D1C95998C8C9D9652B911E6407F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2;
		L_2 = Selection_1_get_selections_m9E45DAB83299D1C95998C8C9D9652B911E6407F4(Selection_1_get_selections_m9E45DAB83299D1C95998C8C9D9652B911E6407F4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___go_19;
		bool L_4;
		L_4 = Enumerable_Contains_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m3228AA4927B03C9482268E056266AFD2730F0776((RuntimeObject*)L_2, L_3, Enumerable_Contains_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m3228AA4927B03C9482268E056266AFD2730F0776_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_selected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_selected_mDE0E8BD5BDF36EB994D428958864C658F65B314A (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_Add_mA65DABFBCD9091E94F82DC143801C47CF563E3B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_Remove_mF121A7B2AE19B3A051D4F52F044234D1116E265D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var);
		Selection_1_Add_mA65DABFBCD9091E94F82DC143801C47CF563E3B5(L_3, Selection_1_Add_mA65DABFBCD9091E94F82DC143801C47CF563E3B5_RuntimeMethod_var);
		return;
	}

IL_001c:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Selection_1_t8B700CD3178DC7CBE633BF4AAFD3A19D4C2DA19A_il2cpp_TypeInfo_var);
		Selection_1_Remove_mF121A7B2AE19B3A051D4F52F044234D1116E265D(L_6, Selection_1_Remove_mF121A7B2AE19B3A051D4F52F044234D1116E265D_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item::Init(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Item_Init_m79A4043003334AA2FB9DA980DB7F6C2FACB1E37E (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_Init_m472BD1AF0CF573A812A318CC99ED547A0E08F499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		bool L_1;
		L_1 = Component_1_Init_m472BD1AF0CF573A812A318CC99ED547A0E08F499(__this, L_0, Component_1_Init_m472BD1AF0CF573A812A318CC99ED547A0E08F499_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		Item_FindGameObject_mBFFE7E1D943759615D74C939419D62175090C390(__this, NULL);
	}

IL_001b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___go_19;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_8;
		L_8 = Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28(L_7, Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9;
		L_9 = Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8((RuntimeObject*)L_8, Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		__this->___childrenTransform_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childrenTransform_20), (void*)L_9);
	}

IL_0043:
	{
		return (bool)1;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::FindGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_FindGameObject_mBFFE7E1D943759615D74C939419D62175090C390 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_1, NULL);
		__this->___go_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___go_19), (void*)L_2);
		return;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item::DataValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Item_DataValidity_m5BC38E6589ADCB084F47062997509626E6C692C0 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		return L_1;
	}
}
// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item::get_parentItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0 = __this->___U3CparentItemU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_parentItem(XCSJ.PluginRepairman.Machines.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_parentItem_m17F96DCEBE1A23BCCA60FE1F1FB88C8354C822AC (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___0_value, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0 = ___0_value;
		__this->___U3CparentItemU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentItemU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
// XCSJ.PluginRepairman.Machines.Item XCSJ.PluginRepairman.Machines.Item::GetParentItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* Item_GetParentItem_mCE905496E02D928973A8EB9FB68D4CBAD3738818 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_GetComponent_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m9CC80062D149F0363DD6C7C65DBFD630AB3A98CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* G_B4_0 = NULL;
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* G_B3_0 = NULL;
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* G_B5_0 = NULL;
	Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* G_B5_1 = NULL;
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0;
		L_0 = Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_4);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5;
		L_5 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_4, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		G_B3_0 = __this;
		if (L_6)
		{
			G_B4_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = ((Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0041;
	}

IL_0030:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7;
		L_7 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_7);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8;
		L_8 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_7, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		NullCheck(L_8);
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_9;
		L_9 = ComponentCollection_GetComponent_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m9CC80062D149F0363DD6C7C65DBFD630AB3A98CF(L_8, (bool)0, ComponentCollection_GetComponent_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m9CC80062D149F0363DD6C7C65DBFD630AB3A98CF_RuntimeMethod_var);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0041:
	{
		NullCheck(G_B5_1);
		Item_set_parentItem_m17F96DCEBE1A23BCCA60FE1F1FB88C8354C822AC_inline(G_B5_1, G_B5_0, NULL);
	}

IL_0046:
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_10;
		L_10 = Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline(__this, NULL);
		return L_10;
	}
}
// XCSJ.PluginRepairman.Machines.Item[] XCSJ.PluginRepairman.Machines.Item::GetChildrenItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* Item_GetChildrenItems_m820FAFF6535F6B4761E7995A5B776B3F7EA2A54B (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_GetComponentsInChildren_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m7E96DAC5C5796D0324575EB66EEC1215E20C6C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mA504433F2834F7F144C3F591A8428B554D24ADE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mDD9A4B882C5A02699D192368B8E9B9222D17298D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CGetChildrenItemsU3Eb__0_m96CEE65D88DEF99D2A73E5048FD967451108B9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* V_0 = NULL;
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_0 = (U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass29_0__ctor_mE215721794FDBD24205E4245739D869D9E1C91B1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		V_1 = L_2;
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_3 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4 = V_1;
		NullCheck(L_3);
		L_3->___subSM_1 = ((SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6*)IsInstClass((RuntimeObject*)L_4, SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___subSM_1), (void*)((SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6*)IsInstClass((RuntimeObject*)L_4, SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_5 = V_0;
		NullCheck(L_5);
		SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6* L_6 = L_5->___subSM_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_7 = V_0;
		NullCheck(L_7);
		SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6* L_8 = L_7->___subSM_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_10 = V_0;
		NullCheck(L_10);
		SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6* L_11 = L_10->___subSM_1;
		NullCheck(L_11);
		ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* L_12;
		L_12 = ComponentCollection_3_GetComponentsInChildren_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m7E96DAC5C5796D0324575EB66EEC1215E20C6C1A(L_11, (bool)1, ComponentCollection_3_GetComponentsInChildren_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_m7E96DAC5C5796D0324575EB66EEC1215E20C6C1A_RuntimeMethod_var);
		U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* L_13 = V_0;
		Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42* L_14 = (Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42*)il2cpp_codegen_object_new(Func_2_tDFBE0BC7FB1AB00E0C6745855437F4C3B5E65F42_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_m16861A59CD3C6AA8C7351F1E88E0ECE1BE7026C9(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CGetChildrenItemsU3Eb__0_m96CEE65D88DEF99D2A73E5048FD967451108B9F7_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = Enumerable_Where_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mDD9A4B882C5A02699D192368B8E9B9222D17298D((RuntimeObject*)L_12, L_14, Enumerable_Where_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mDD9A4B882C5A02699D192368B8E9B9222D17298D_RuntimeMethod_var);
		ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* L_16;
		L_16 = Enumerable_ToArray_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mA504433F2834F7F144C3F591A8428B554D24ADE5(L_15, Enumerable_ToArray_TisItem_t80D6A6249E4F171D72F829B7517FBFADAA44C41A_mA504433F2834F7F144C3F591A8428B554D24ADE5_RuntimeMethod_var);
		return L_16;
	}

IL_0058:
	{
		return (ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2*)NULL;
	}
}
// UnityEngine.GUIContent XCSJ.PluginRepairman.Machines.Item::get_display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* Item_get_display_m224577C147892E68590CBCF425B07823288B00D5 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Item_get_displayName_m3CA5E2C1D6906A2647910EAD1672614C5B189C6F(__this, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Item_get_visible_mD821CA5C8484973A698ED76149930563A8F0344E (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CvisibleU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_visible_mCEF58B02DD21AD98DE2B1A67BFE9FAFF3EA91528 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CvisibleU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Int32 XCSJ.PluginRepairman.Machines.Item::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Item_get_depth_mE2F3FAAB537873273F10A980F05F2B3E76C2676C (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0;
		L_0 = Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_2;
		L_2 = Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Item_get_depth_mE2F3FAAB537873273F10A980F05F2B3E76C2676C(L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(L_3, 1));
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item::get_expanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Item_get_expanded_mB54BFA0808072BC6F4FCAE80CC2B1790FCB53077 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CexpandedU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::set_expanded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_expanded_mAA4D44F31D548EB39A54F0FDBCB6B96315047B0D (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CexpandedU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.String XCSJ.PluginRepairman.Machines.Item::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_displayName_m3CA5E2C1D6906A2647910EAD1672614C5B189C6F (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		return L_3;
	}
}
// XCSJ.PluginCommonUtils.ITreeNode XCSJ.PluginRepairman.Machines.Item::XCSJ.PluginCommonUtils.ITreeNode.get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_XCSJ_PluginCommonUtils_ITreeNode_get_parent_m1ECEC5D1CC87D02631F74E711A78923D8379F48B (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0;
		L_0 = Item_GetParentItem_mCE905496E02D928973A8EB9FB68D4CBAD3738818(__this, NULL);
		return L_0;
	}
}
// XCSJ.PluginCommonUtils.ITreeNode[] XCSJ.PluginRepairman.Machines.Item::XCSJ.PluginCommonUtils.ITreeNode.get_children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8* Item_XCSJ_PluginCommonUtils_ITreeNode_get_children_m6464F7C58F8FDAA666042FF3CC249749008AEF09 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8* V_0 = NULL;
	{
		ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* L_0;
		L_0 = Item_GetChildrenItems_m820FAFF6535F6B4761E7995A5B776B3F7EA2A54B(__this, NULL);
		V_0 = (ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8*)L_0;
		ITreeNodeU5BU5D_t6EB118B7F3C1A3DD457C898A32A61273490DC0B8* L_1 = V_0;
		return L_1;
	}
}
// XCSJ.PluginCommonUtils.ITreeNodeGraph XCSJ.PluginRepairman.Machines.Item::XCSJ.PluginCommonUtils.ITreeNodeGraph.get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_XCSJ_PluginCommonUtils_ITreeNodeGraph_get_parent_mE16969CDB616DD94E09C17448F30E9E58758CEEB (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0;
		L_0 = Item_GetParentItem_mCE905496E02D928973A8EB9FB68D4CBAD3738818(__this, NULL);
		return L_0;
	}
}
// XCSJ.PluginCommonUtils.ITreeNodeGraph[] XCSJ.PluginRepairman.Machines.Item::get_children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7* Item_get_children_m2E8BF6D4CCA1487548367D7BFDB808CB8FD618F8 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7* V_0 = NULL;
	{
		ItemU5BU5D_t29FD0F5EC89521A00186A7D8F23BDDA37F27D6D2* L_0;
		L_0 = Item_GetChildrenItems_m820FAFF6535F6B4761E7995A5B776B3F7EA2A54B(__this, NULL);
		V_0 = (ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7*)L_0;
		ITreeNodeGraphU5BU5D_tD38B54CBE6F60DA1E98A82EB84BD02774AF6E6C7* L_1 = V_0;
		return L_1;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnClick_mE8E345D0F5E468C387F9691BD7115E049A0745BE (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// XCSJ.PluginCommonUtils.ETreeNodeType XCSJ.PluginRepairman.Machines.Item::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Item_get_nodeType_mA50FEB58F1181A76B91ECF476E72F6CF55FB7D35 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// System.Void XCSJ.PluginRepairman.Machines.Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m4AC3F0E68DEB555A92FF9211907A132EFF410CF8 (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___childrenTransform_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childrenTransform_20), (void*)L_0);
		__this->___U3CvisibleU3Ek__BackingField_23 = (bool)1;
		__this->___U3CexpandedU3Ek__BackingField_24 = (bool)1;
		StateComponent__ctor_mEC6118A85A5EC85C77CF7D7FFAF5A6E58A3AA3C7(__this, NULL);
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
// System.Void XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mE215721794FDBD24205E4245739D869D9E1C91B1 (U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.Item/<>c__DisplayClass29_0::<GetChildrenItems>b__0(XCSJ.PluginRepairman.Machines.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CGetChildrenItemsU3Eb__0_m96CEE65D88DEF99D2A73E5048FD967451108B9F7 (U3CU3Ec__DisplayClass29_0_tCDE091AFB4D6980CEA079A331DFCDC61180E568B* __this, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0 = ___0_i;
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_1 = __this->___U3CU3E4__this_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_3 = ___0_i;
		NullCheck(L_3);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(L_3, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		NullCheck(L_4);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5;
		L_5 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_4, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		SubStateMachine_t03B83C49C9B16FFFBDC888E10176DDA1F18C3DE6* L_6 = __this->___subSM_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
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
// System.Boolean XCSJ.PluginRepairman.Machines.ToolSelection::ContainAll(System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.ITool>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToolSelection_ContainAll_m915A3D0C7763D70262D7A09BD73CAC1DC5567977 (RuntimeObject* ___0_tools, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t60E91715540045EF948B162D226A1DE8D2FB0756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_tools;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.ITool>::GetEnumerator() */, IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<XCSJ.PluginRepairman.Machines.ITool>::get_Current() */, IEnumerator_1_t60E91715540045EF948B162D226A1DE8D2FB0756_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
				IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* L_6;
				L_6 = Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B(Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
				RuntimeObject* L_7 = V_1;
				bool L_8;
				L_8 = Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0021_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0037;
			}

IL_0021_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return (bool)1;
	}

IL_0037:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean XCSJ.PluginRepairman.Machines.ToolSelection::ContainAny(System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.ITool>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToolSelection_ContainAny_m8A0CF2A701711BE967396053C80A109042DF8D4A (RuntimeObject* ___0_tools, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t60E91715540045EF948B162D226A1DE8D2FB0756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_tools;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<XCSJ.PluginRepairman.Machines.ITool>::GetEnumerator() */, IEnumerable_1_tBA2291C23717297A968AD1BE3570437DD7318CF5_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<XCSJ.PluginRepairman.Machines.ITool>::get_Current() */, IEnumerator_1_t60E91715540045EF948B162D226A1DE8D2FB0756_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
				IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* L_6;
				L_6 = Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B(Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
				RuntimeObject* L_7 = V_1;
				bool L_8;
				L_8 = Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisITool_t58F104B80DA7FB43C0620BFDA03C21B058956E7D_mC8D9EF3E0769BE23FF0E778177ACEF77DCD018B0_RuntimeMethod_var);
				if (!L_8)
				{
					goto IL_0021_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0037;
			}

IL_0021_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return (bool)0;
	}

IL_0037:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Int32 XCSJ.PluginRepairman.Machines.ToolSelection::get_selectionMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToolSelection_get_selectionMaxCount_m09E1E2FB682DAC52165D0C30CAE206558DE23057 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_StaticFields*)il2cpp_codegen_static_fields_for(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var))->____selectionMaxCount_3;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::set_selectionMaxCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection_set_selectionMaxCount_m8879BB71A25B93670B7540ECFA392610A974EB5E (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_000b;
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		ToolSelection_RemoveFirst_mC54ABE0BFAFF46421DF0F39722DF5A8AB4BAE0AF(NULL);
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* L_1;
		L_1 = Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B(Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = ___0_value;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) > ((int32_t)L_2)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		((ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_StaticFields*)il2cpp_codegen_static_fields_for(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var))->____selectionMaxCount_3 = L_3;
	}

IL_001b:
	{
		return;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::RemoveFirst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection_RemoveFirst_mC54ABE0BFAFF46421DF0F39722DF5A8AB4BAE0AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_Remove_m876396953DAE9E93ED10EA1DD095F3D8C7B75A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_first_m3A694897C603DAFD0DEEDA3E087D096AD3C12478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Selection_1_get_first_m3A694897C603DAFD0DEEDA3E087D096AD3C12478(Selection_1_get_first_m3A694897C603DAFD0DEEDA3E087D096AD3C12478_RuntimeMethod_var);
		Selection_1_Remove_m876396953DAE9E93ED10EA1DD095F3D8C7B75A92(L_0, Selection_1_Remove_m876396953DAE9E93ED10EA1DD095F3D8C7B75A92_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::AddTool(XCSJ.PluginRepairman.Machines.ITool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection_AddTool_m59EB401BB5997D41CE6DFF73061813117C36D744 (RuntimeObject* ___0_tool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_AddWithDistinct_m6E9924B79E6EB3C63E25A73E0DB8841D2D65B446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_tool;
		il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		Selection_1_AddWithDistinct_m6E9924B79E6EB3C63E25A73E0DB8841D2D65B446(L_0, Selection_1_AddWithDistinct_m6E9924B79E6EB3C63E25A73E0DB8841D2D65B446_RuntimeMethod_var);
		IToolU5BU5D_t26D840E2BEE90863B9978670587E827AAC63531A* L_1;
		L_1 = Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B(Selection_1_get_selections_m6FF9BFF8797C231C5D9E9289B7188B881B27003B_RuntimeMethod_var);
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = ToolSelection_get_selectionMaxCount_m09E1E2FB682DAC52165D0C30CAE206558DE23057_inline(NULL);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		ToolSelection_RemoveFirst_mC54ABE0BFAFF46421DF0F39722DF5A8AB4BAE0AF(NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection__ctor_m549F2A4E7668D6F7FEBF9D096434F43BA276B8D3 (ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1__ctor_m22D3D79DDB4C89ABC91FDFA7E75127768ABD5DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Selection_1_tED689D3FCB5425FCDAAE587110395AC510A30C0D_il2cpp_TypeInfo_var);
		Selection_1__ctor_m22D3D79DDB4C89ABC91FDFA7E75127768ABD5DB5(__this, Selection_1__ctor_m22D3D79DDB4C89ABC91FDFA7E75127768ABD5DB5_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginRepairman.Machines.ToolSelection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelection__cctor_m6B9752163DCE844FBA789BC104CEB539AC6BFDA7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_StaticFields*)il2cpp_codegen_static_fields_for(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var))->____selectionMaxCount_3 = 1;
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
// XCSJ.PluginRepairman.Kernel.IRepairmanHandler XCSJ.PluginRepairman.Kernel.RepairmanHandler::get_handler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RepairmanHandler_get_handler_m6C2E5A61A56F4FAC5717027AE5052B566C776819 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_StaticFields*)il2cpp_codegen_static_fields_for(RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void XCSJ.PluginRepairman.Kernel.RepairmanHandler::set_handler(XCSJ.PluginRepairman.Kernel.IRepairmanHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepairmanHandler_set_handler_m148A59CA66FF533D4B1953899D6A101CE64BF8DC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		((RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_StaticFields*)il2cpp_codegen_static_fields_for(RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_StaticFields*)il2cpp_codegen_static_fields_for(RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginRepairman.Kernel.RepairmanHandler::GetScripts(XCSJ.PluginRepairman.RepairmanManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* RepairmanHandler_GetScripts_mBA6634B80AEF58EEF3CC355BB7B3B724AFA3200D (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* ___0_manager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManagerHandler_1_t447840F954042FA6DA26386E1B03632F2AD04583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = RepairmanHandler_get_handler_m6C2E5A61A56F4FAC5717027AE5052B566C776819_inline(NULL);
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
		RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* L_2 = ___0_manager;
		NullCheck(G_B2_0);
		List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258* L_3;
		L_3 = InterfaceFuncInvoker1< List_1_tD0DE934941D6FEA9B0FC77FA25975A37F76E8258*, RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* >::Invoke(0 /* System.Collections.Generic.List`1<XCSJ.Scripts.Script> XCSJ.PluginCommonUtils.Base.Kernel.IManagerHandler`1<XCSJ.PluginRepairman.RepairmanManager>::GetScripts(T) */, IManagerHandler_1_t447840F954042FA6DA26386E1B03632F2AD04583_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return L_3;
	}
}
// XCSJ.Algorithms.ReturnValue XCSJ.PluginRepairman.Kernel.RepairmanHandler::RunScript(XCSJ.PluginRepairman.RepairmanManager,System.Int32,XCSJ.Scripts.ScriptParamList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* RepairmanHandler_RunScript_mB672BD89D0A325409164F0D86CF42502B9DCD8D3 (RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* ___0_manager, int32_t ___1_id, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* ___2_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManagerHandler_1_t447840F954042FA6DA26386E1B03632F2AD04583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = RepairmanHandler_get_handler_m6C2E5A61A56F4FAC5717027AE5052B566C776819_inline(NULL);
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
		RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547* L_2 = ___0_manager;
		int32_t L_3 = ___1_id;
		ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* L_4 = ___2_param;
		NullCheck(G_B2_0);
		ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB* L_5;
		L_5 = InterfaceFuncInvoker3< ReturnValue_t5B8190EF9EEEE604BB2B198D64B2A6601168FACB*, RepairmanManager_t3FBB7777BEEC6A3B48CA1E26FEEBDC1327D7D547*, int32_t, ScriptParamList_t241BFA4478FE4C746293CAA63E08C4B5D3B18A53* >::Invoke(1 /* XCSJ.Algorithms.ReturnValue XCSJ.PluginCommonUtils.Base.Kernel.IManagerHandler`1<XCSJ.PluginRepairman.RepairmanManager>::ExecuteScript(T,System.Int32,XCSJ.Scripts.ScriptParamList) */, IManagerHandler_1_t447840F954042FA6DA26386E1B03632F2AD04583_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* Item_get_parentItem_mA514A325E7296757B3F4AABE59D72076BC8EA49F_inline (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0 = __this->___U3CparentItemU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Item_set_parentItem_m17F96DCEBE1A23BCCA60FE1F1FB88C8354C822AC_inline (Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* __this, Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* ___0_value, const RuntimeMethod* method) 
{
	{
		Item_t80D6A6249E4F171D72F829B7517FBFADAA44C41A* L_0 = ___0_value;
		__this->___U3CparentItemU3Ek__BackingField_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentItemU3Ek__BackingField_22), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ToolSelection_get_selectionMaxCount_m09E1E2FB682DAC52165D0C30CAE206558DE23057_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_StaticFields*)il2cpp_codegen_static_fields_for(ToolSelection_t87B9ABD7FC9310A2C626BF8881A82B802EF253E6_il2cpp_TypeInfo_var))->____selectionMaxCount_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RepairmanHandler_get_handler_m6C2E5A61A56F4FAC5717027AE5052B566C776819_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_StaticFields*)il2cpp_codegen_static_fields_for(RepairmanHandler_t1E88CAE8ABA0990EB42F4BC83B7B47936F984BC5_il2cpp_TypeInfo_var))->___U3ChandlerU3Ek__BackingField_0;
		return L_0;
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
