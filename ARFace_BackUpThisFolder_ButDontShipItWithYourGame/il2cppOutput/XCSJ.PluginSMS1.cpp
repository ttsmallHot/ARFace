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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_1_t99B0C2AFE0144816A5C1174EA82EB708EED7C213;
// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct Action_1_t74232ECA5CF356E4A1E7C1B3B8AB808D3A7C3C3D;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<XCSJ.PluginSMS.Kernel.State>
struct Action_1_tF10DEAB6A275701191676FD723EE70797AB748CB;
// System.Action`1<XCSJ.PluginSMS.Kernel.StateGroup>
struct Action_1_t1434C06AAFDF0A877F5E77DEA4509A1D9EB1A922;
// System.Action`1<XCSJ.PluginSMS.Kernel.Transition>
struct Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD;
// System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_2_tD2138742CED5D71AA0C7D07762F609469944A86A;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.Boolean>
struct Action_2_t3D0A3483B175614066F5659CC31648305BB60EDD;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,XCSJ.PluginCommonUtils.ComponentModel.Model>
struct Action_2_t55D47583FCFEBFEA3CA6ABA6684A80EBC5F2CCC8;
// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.String>
struct Action_2_t44CA5644C6362426204BAEFC352F3C3B2AE79713;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<XCSJ.PluginSMS.Kernel.State,System.Boolean>
struct Action_2_tD2C06223916271627967C67D0F1337562AD5829D;
// System.Action`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateData>
struct Action_2_t0DE4D57150058BB662FF15B93B9FC250FAFF4D77;
// System.Action`2<XCSJ.PluginSMS.Kernel.StateGroup,System.Boolean>
struct Action_2_t423681A8F61F3267BEFFF580076F4207AF503708;
// System.Action`2<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateData>
struct Action_2_t27A5F7EC5035A632B53AA535D8AAAC3F3400A014;
// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>
struct Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A;
// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>
struct Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497;
// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.StateData>
struct Action_2_t86FC38F51AF9EDE9C879557C941AC99335D53CC2;
// System.Action`3<XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection,System.Int32,XCSJ.PluginCommonUtils.ComponentModel.Component>
struct Action_3_tBE0DADB6C8FED06A34879459BBE41542D08E6568;
// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.State>
struct Action_3_tE2B8FA8EF9CC7883AA4612448770EA150FD9D83E;
// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.Transition>
struct Action_3_t7E8897E186E51A2982ED79CB03B173DA8A7FB167;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<System.Object>
struct ComponentCollection_1_t9B04B16257C93238414D30B33A637C1DA01704ED;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_1_tE4F8493C600E2CB66E9E8014EDE5FA96823C3219;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<System.Object,System.Object>
struct ComponentCollection_2_tCC191463F1912E9B153945B12B8EA85135D8F4B6;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>
struct ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875;
// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3;
// XCSJ.PluginCommonUtils.ComponentModel.Component`1<System.Object>
struct Component_1_tFFB7468B84B6ED1F751042E2FF1E862599ED5541;
// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2;
// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.Transition>
struct Component_1_tE8211D3A92E2FF20BD8E27B6CAD7070610188490;
// XCSJ.PluginSMS.Kernel.Component`1<System.Object>
struct Component_1_t70B0FCB8E2B1AE54C2BD8DE23EE82D4E5F6F5B71;
// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4;
// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.Transition>
struct Component_1_tAA0A8212F535E2C2CB0FB67D3AB34616E49964BD;
// System.Collections.Generic.Dictionary`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State>
struct Dictionary_2_tD82C7FBAAB69258C7CB3D1D28D22DF9FB1A62C47;
// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean>
struct Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<XCSJ.PluginSMS.Kernel.State,System.Boolean>
struct Func_2_t44F40670B3029D19653A8D62DD18FBB384196D33;
// System.Func`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.IState>
struct Func_2_tC8DCB4EFB0BF68170AAF68ED31CB4400EE1C0517;
// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean>
struct Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A;
// System.Func`2<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginCommonUtils.IGraphGroup>
struct Func_2_t68E7FC0737A8E1992831648B6DB962C8DC257E5E;
// System.Func`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>
struct Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>
struct HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct IEnumerable_1_t662E77FFD40CD591AD59C85B177BCBB0E9697C1A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct IEnumerable_1_t787F9C41FCFBC0CDCDC8A2B12275E20DB1B62809;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct IEnumerable_1_tBB4223DC26D07760F073019153148ED86EDA827F;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginSMS.Kernel.Transition>
struct IEnumerable_1_tBF6543856D404EBDE0C91C9BD9FAFD1E0586B533;
// System.Collections.Generic.IEnumerable`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct IEnumerable_1_t856E3E02658A7676FC4097B7D824255DD44F0ADC;
// System.Collections.Generic.IEqualityComparer`1<XCSJ.PluginSMS.Kernel.Transition>
struct IEqualityComparer_1_tCA3F779EF0252C4E32CB7807C6EF37829475C77A;
// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Component>
struct List_1_t333F9332A99503B01A1B470DA4479DB905AF9218;
// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>
struct List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroup>
struct List_1_tB3E3A8C3C2DC6A6F7CF9A2AF66AB9DC1AD9B210C;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>
struct List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51;
// System.Collections.Generic.HashSet`1/Slot<XCSJ.PluginSMS.Kernel.Transition>[]
struct SlotU5BU5D_t692C0D6F2A0514632A54E418A29C804C3E0031DF;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// XCSJ.PluginCommonUtils.ComponentModel.IComponent[]
struct IComponentU5BU5D_tB0731B5EE9BCEB34798498F429165CC5ED838EC6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// XCSJ.PluginCommonUtils.ComponentModel.Model[]
struct ModelU5BU5D_tF47B085B23F60C3E4C0D04EA62E7A4F6DAC470F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// XCSJ.PluginSMS.Kernel.State[]
struct StateU5BU5D_t3ABA3E6BA22A5C1D3BDD930F5C8C1138C1EF19AD;
// XCSJ.PluginSMS.Kernel.StateComponent[]
struct StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390;
// XCSJ.PluginSMS.Kernel.StateGroupComponent[]
struct StateGroupComponentU5BU5D_t972CD35047D5E8505D4C9057653C8906132DF435;
// XCSJ.PluginSMS.Kernel.Transition[]
struct TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471;
// XCSJ.PluginSMS.Kernel.TransitionComponent[]
struct TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// XCSJ.PluginCommonUtils.ComponentModel.Component
struct Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7;
// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection
struct ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// XCSJ.PluginCommonUtils.ComponentModel.IComponent
struct IComponent_tB464B0E16F59A49196E54E4F1EF439CA6CB71461;
// XCSJ.PluginCommonUtils.IGraphGroup
struct IGraphGroup_tBA2400AF7EED0954AED5DBC004A36188AE0425F1;
// XCSJ.PluginSMS.Kernel.IState
struct IState_t2A102A49759DCCD97DEEE52D5D0722B7BE126E66;
// XCSJ.PluginSMS.Kernel.ITransitionComponent
struct ITransitionComponent_t2F356B667E490E9F5237E62007C548837626695C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// XCSJ.PluginCommonUtils.ComponentModel.Model
struct Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// XCSJ.PluginSMS.Kernel.State
struct State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE;
// XCSJ.PluginSMS.Kernel.StateCollection
struct StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84;
// XCSJ.PluginSMS.Kernel.StateComponent
struct StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7;
// XCSJ.PluginSMS.Kernel.StateData
struct StateData_t952197905E4AABB8E0898C7088482385F5B08200;
// XCSJ.PluginSMS.Kernel.StateGroup
struct StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05;
// System.String
struct String_t;
// XCSJ.PluginSMS.Kernel.Transition
struct Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1;
// XCSJ.PluginSMS.Kernel.TransitionComponent
struct TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402;
// System.Type
struct Type_t;
// XCSJ.PluginCommonUtils.UnityObjectEventListener
struct UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// XCSJ.PluginSMS.Kernel.State/OnOutOfBoundsDelegate
struct OnOutOfBoundsDelegate_t3C569E2B7A33A4340D65C3F6A32D8A44C29C1108;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c
struct U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0
struct U3CU3Ec__DisplayClass102_0_tE6356E4130963BB8BAE0D0A4632F659A84411CE3;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0
struct U3CU3Ec__DisplayClass103_0_t48B1DA14EA4771AC93E762CD7C75C013FE48D2DF;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0
struct U3CU3Ec__DisplayClass109_0_tFEE89D85986D624AAE01D686B7D177971CEC916E;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t301BF81A1093529710E61D1475EDEEAADCDEE077;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0
struct U3CU3Ec__DisplayClass111_0_tC93CE655C19CF2D4DA092562EE689DD3DA06DEE1;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0
struct U3CU3Ec__DisplayClass112_0_t4D11D57F7F5F21DD8598B98106EBECAF55942231;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0
struct U3CU3Ec__DisplayClass113_0_tF8CAFEBE3F003178A0FC840D0C0B575CE3677A9C;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0
struct U3CU3Ec__DisplayClass114_0_tC9D4C2837FE894D0A01B06393591CE28091840D1;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0
struct U3CU3Ec__DisplayClass117_0_t0736E77542429CB055B3099244FA6CF626753845;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0
struct U3CU3Ec__DisplayClass125_0_t3D56B2728851D7125FEDD5F0357FA615A8248F2C;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0
struct U3CU3Ec__DisplayClass129_0_tE27CBB76756884A27FB15AD76CB44A61B070CE5A;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0
struct U3CU3Ec__DisplayClass137_0_t964A1F15C71473F8D2659B8D99CC6D467F201A0A;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0
struct U3CU3Ec__DisplayClass140_0_t32364F7C422CCCBF368A17B360BF6B40C953C33E;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0
struct U3CU3Ec__DisplayClass146_0_t4D8B3D3D23D390362512164DC19A0B32FB02FB49;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0
struct U3CU3Ec__DisplayClass147_0_tD9BCA0E3E73339A8A975F4B2CB0CF4332EB469F6;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_t6B8F1ADA32E46B724AFC44D8D9EF74A020A1974A;
// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t85F24C2C2298F6A833B5D38D375D8CC197CFA02B;
// XCSJ.PluginSMS.Kernel.Transition/<>c
struct U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044;
// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1;
// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890;
// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA;
// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGetStateCollection_t314EBE6CC85B7D9A545FA370D80520B4EE7EF6EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateData_t952197905E4AABB8E0898C7088482385F5B08200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A3D43CC535F58916DA998E8C92767524EEA2E69;
IL2CPP_EXTERN_C String_t* _stringLiteral2B57126897C3A4D60E1E30DDEB52762370F0C6C4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9EF4ADCFFCFB3C4D68908D580033781CFA6F92E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_1_get_components_mFFC47C602DD45EF1B5976203F7CA506DA5955A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_2_set_parent_m9D3587D79F40F8CA2582EEBE530B0A849646EE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_CloneFrom_m00D455494242D89BB3065ED4C8F5F1273DEA7CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_SearchComponents_m889DDC77869832CD84B241C1CA3E34E648F7BCD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_SearchComponents_mD6BA762C2E64AE2F0316F48638F3DFB8C4737FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3_SearchComponents_mEC29A7CF022B27B39CF677F5FC8FAAB8D1BCC9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_3__ctor_mC8E4F409011ACE6432C15CC9056721D2176A9908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_GetComponents_TisStateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_mE15D439CCEA2F67100E44AEC423D6FCF1B724601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1__ctor_m072C63C76ADCBEB90E9A567F411C5D2A621234E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1__ctor_m8130F98C16E81429F8D5D4664F9E1D18B0B3178D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m66471CB2F82DEBA163B8D50CC0A17D530B1A93A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_mB15AC81D75CDC7E3DBCF40BC8BEF6F9176AD8AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mDD7A76422E6B98C7C2DB77A50F10368B1D8C60DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m8CA84167A604374CCF6AB391123582AD024331AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m5425237EA59DD74FE6177CB1313F0C8A01FD6A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mA56016A559333DD6BAA15235E242C5D267009530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF1EB7B63D6F470C7F8B1318F82A7C33AB2EF50AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Model_Clone_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m67EF06315B1EC1E6E80F766C0340E938BD0424A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateData_U3CGetInTransitionsU3Eb__34_0_mF0E7BFD5C08B8AC7D2BE425B6E301B98EB94FA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateData_U3CGetOutTransitionsU3Eb__35_0_mC7F09D2E957FB75C804ECB116474D36EB824186C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnTransitionCreatedU3Eb__50_0_m05B433515B5CC27A041DFAFAF1221DF4E5171C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3COnTransitionEntryU3Eb__0_mBF08A376906A9BF2049D9A3ED1F432C6AD536977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3COnTransitionExitU3Eb__0_m9F937D6C6DF8D89ED324849466638ADCF72ECC82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass51_0_U3COnUpdatedInStateU3Eb__0_m2B6962101A46F81DEA9C2544276F6ADC900D78AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3COnUpdatedOutStateU3Eb__0_m141839FDB270DC4AD36CAA2A54BF9644756C527D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IComponentU5BU5D_tB0731B5EE9BCEB34798498F429165CC5ED838EC6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390;
struct TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471;
struct TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>
struct HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t692C0D6F2A0514632A54E418A29C804C3E0031DF* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ModelU5BU5D_tF47B085B23F60C3E4C0D04EA62E7A4F6DAC470F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>
struct List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StateU5BU5D_t3ABA3E6BA22A5C1D3BDD930F5C8C1138C1EF19AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StateGroupComponentU5BU5D_t972CD35047D5E8505D4C9057653C8906132DF435* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>
struct List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// XCSJ.PluginSMS.Kernel.StateCollection/<>c
struct U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA  : public RuntimeObject
{
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0
struct U3CU3Ec__DisplayClass102_0_tE6356E4130963BB8BAE0D0A4632F659A84411CE3  : public RuntimeObject
{
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0::stateComponentType
	Type_t* ___stateComponentType_0;
	// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0::func
	Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A* ___func_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0
struct U3CU3Ec__DisplayClass103_0_t48B1DA14EA4771AC93E762CD7C75C013FE48D2DF  : public RuntimeObject
{
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0::transitionComponentType
	Type_t* ___transitionComponentType_0;
	// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0::func
	Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D* ___func_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0
struct U3CU3Ec__DisplayClass109_0_tFEE89D85986D624AAE01D686B7D177971CEC916E  : public RuntimeObject
{
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0::componentType
	Type_t* ___componentType_0;
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0::includeDisable
	bool ___includeDisable_1;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0::list
	List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* ___list_2;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t301BF81A1093529710E61D1475EDEEAADCDEE077  : public RuntimeObject
{
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0::includeDisable
	bool ___includeDisable_0;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0::list
	List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* ___list_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0
struct U3CU3Ec__DisplayClass111_0_tC93CE655C19CF2D4DA092562EE689DD3DA06DEE1  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0::list
	List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* ___list_1;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0::type
	Type_t* ___type_2;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0
struct U3CU3Ec__DisplayClass112_0_t4D11D57F7F5F21DD8598B98106EBECAF55942231  : public RuntimeObject
{
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0::list
	List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* ___list_0;
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0::includeDisable
	bool ___includeDisable_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0
struct U3CU3Ec__DisplayClass113_0_tF8CAFEBE3F003178A0FC840D0C0B575CE3677A9C  : public RuntimeObject
{
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::list
	List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* ___list_0;
	// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::includeDisable
	bool ___includeDisable_1;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::componentType
	Type_t* ___componentType_2;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0
struct U3CU3Ec__DisplayClass114_0_tC9D4C2837FE894D0A01B06393591CE28091840D1  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0::list
	List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* ___list_1;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0::type
	Type_t* ___type_2;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0
struct U3CU3Ec__DisplayClass117_0_t0736E77542429CB055B3099244FA6CF626753845  : public RuntimeObject
{
	// System.Type[] XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0::transitionComponentTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___transitionComponentTypes_0;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0
struct U3CU3Ec__DisplayClass125_0_t3D56B2728851D7125FEDD5F0357FA615A8248F2C  : public RuntimeObject
{
	// System.String XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0::name
	String_t* ___name_0;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0
struct U3CU3Ec__DisplayClass129_0_tE27CBB76756884A27FB15AD76CB44A61B070CE5A  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0::type
	Type_t* ___type_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0
struct U3CU3Ec__DisplayClass137_0_t964A1F15C71473F8D2659B8D99CC6D467F201A0A  : public RuntimeObject
{
	// System.String XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0::name
	String_t* ___name_0;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0
struct U3CU3Ec__DisplayClass140_0_t32364F7C422CCCBF368A17B360BF6B40C953C33E  : public RuntimeObject
{
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0::state
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___state_0;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0
struct U3CU3Ec__DisplayClass146_0_t4D8B3D3D23D390362512164DC19A0B32FB02FB49  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0::type
	Type_t* ___type_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0
struct U3CU3Ec__DisplayClass147_0_tD9BCA0E3E73339A8A975F4B2CB0CF4332EB469F6  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0::list
	List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7* ___list_1;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0::type
	Type_t* ___type_2;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606  : public RuntimeObject
{
	// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0::list
	List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* ___list_0;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_t6B8F1ADA32E46B724AFC44D8D9EF74A020A1974A  : public RuntimeObject
{
	// XCSJ.PluginCommonUtils.ESearchFlags XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0::searchFlags
	int32_t ___searchFlags_0;
	// System.Type XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0::type
	Type_t* ___type_1;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t85F24C2C2298F6A833B5D38D375D8CC197CFA02B  : public RuntimeObject
{
	// System.String XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0::name
	String_t* ___name_0;
};

// XCSJ.PluginSMS.Kernel.Transition/<>c
struct U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044  : public RuntimeObject
{
};

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1  : public RuntimeObject
{
	// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0::stateData
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___stateData_0;
};

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890  : public RuntimeObject
{
	// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0::stateData
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___stateData_0;
};

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA  : public RuntimeObject
{
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0::oldState
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___oldState_0;
};

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C  : public RuntimeObject
{
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0::oldState
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___oldState_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<XCSJ.PluginSMS.Kernel.Transition>
struct Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD  : public MulticastDelegate_t
{
};

// System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>
struct Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A  : public MulticastDelegate_t
{
};

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>
struct Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497  : public MulticastDelegate_t
{
};

// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean>
struct Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean>
struct Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A  : public MulticastDelegate_t
{
};

// System.Func`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>
struct Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A  : public MulticastDelegate_t
{
};

// XCSJ.PluginCommonUtils.SO
struct SO_tAA999B189863A3A7917E6EC3E5AB500C26DBB853  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// XCSJ.PluginCommonUtils.UnityObjectEventListener XCSJ.PluginCommonUtils.SO::_eventListener
	UnityObjectEventListener_t13C33927DCEAE658488CCB4D3CFF3D99B96E7BD6* ____eventListener_4;
};

// XCSJ.PluginCommonUtils.ComponentModel.Model
struct Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE  : public SO_tAA999B189863A3A7917E6EC3E5AB500C26DBB853
{
	// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::_enable
	bool ____enable_5;
	// XCSJ.PluginCommonUtils.ComponentModel.Model XCSJ.PluginCommonUtils.ComponentModel.Model::_parent
	Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* ____parent_7;
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

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_1_t63E45F2416AD2DCC58ED4569B63E49C7DF73F409  : public ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct ComponentCollection_1_t722A104BB75BC8E1B2588D1109498EEF13774883  : public ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_1_tE4F8493C600E2CB66E9E8014EDE5FA96823C3219  : public ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C
{
};

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>
struct Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2  : public Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7
{
};

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.Transition>
struct Component_1_tE8211D3A92E2FF20BD8E27B6CAD7070610188490  : public Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>
struct ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9  : public ComponentCollection_1_t63E45F2416AD2DCC58ED4569B63E49C7DF73F409
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7  : public ComponentCollection_1_tE4F8493C600E2CB66E9E8014EDE5FA96823C3219
{
};

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct ComponentCollection_2_t2CDF419CE142AB373C01E9118533027178A60AB3  : public ComponentCollection_1_t722A104BB75BC8E1B2588D1109498EEF13774883
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

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.Transition>
struct Component_1_tAA0A8212F535E2C2CB0FB67D3AB34616E49964BD  : public Component_1_tE8211D3A92E2FF20BD8E27B6CAD7070610188490
{
	// System.Boolean XCSJ.PluginSMS.Kernel.Component`1::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_15;
	// System.Double XCSJ.PluginSMS.Kernel.Component`1::<entryTime>k__BackingField
	double ___U3CentryTimeU3Ek__BackingField_16;
	// System.Double XCSJ.PluginSMS.Kernel.Component`1::<exitTime>k__BackingField
	double ___U3CexitTimeU3Ek__BackingField_17;
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

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875  : public ComponentCollection_2_t2CDF419CE142AB373C01E9118533027178A60AB3
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

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3  : public ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7
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

// XCSJ.PluginSMS.Kernel.StateComponent
struct StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7  : public Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4
{
};

// XCSJ.PluginSMS.Kernel.TransitionComponent
struct TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402  : public Component_1_tAA0A8212F535E2C2CB0FB67D3AB34616E49964BD
{
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

// XCSJ.PluginSMS.Kernel.StateGroup
struct StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05  : public ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875
{
	// System.Boolean XCSJ.PluginSMS.Kernel.StateGroup::expand
	bool ___expand_30;
	// UnityEngine.Rect XCSJ.PluginSMS.Kernel.StateGroup::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_31;
	// UnityEngine.Rect XCSJ.PluginSMS.Kernel.StateGroup::parentRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___parentRect_32;
	// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateGroup::_children
	List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* ____children_33;
};

// XCSJ.PluginSMS.Kernel.Transition
struct Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1  : public ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3
{
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::_inState
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ____inState_30;
	// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::_outState
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ____outState_31;
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

// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>

// System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>

// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model>
struct List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ModelU5BU5D_tF47B085B23F60C3E4C0D04EA62E7A4F6DAC470F2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model>

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>
struct List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StateU5BU5D_t3ABA3E6BA22A5C1D3BDD930F5C8C1138C1EF19AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent>
struct List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent>

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StateGroupComponentU5BU5D_t972CD35047D5E8505D4C9057653C8906132DF435* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>
struct List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent>
struct List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginSMS.Kernel.StateData

// XCSJ.PluginSMS.Kernel.StateData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// XCSJ.PluginSMS.Kernel.StateCollection/<>c
struct U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_StaticFields
{
	// XCSJ.PluginSMS.Kernel.StateCollection/<>c XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9
	U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* ___U3CU3E9_0;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.IState> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__20_0
	Func_2_tC8DCB4EFB0BF68170AAF68ED31CB4400EE1C0517* ___U3CU3E9__20_0_1;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.IState> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__25_0
	Func_2_tC8DCB4EFB0BF68170AAF68ED31CB4400EE1C0517* ___U3CU3E9__25_0_2;
	// System.Action`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__46_0
	Action_1_tF10DEAB6A275701191676FD723EE70797AB748CB* ___U3CU3E9__46_0_3;
	// System.Action`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__46_1
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* ___U3CU3E9__46_1_4;
	// System.Action`1<XCSJ.PluginSMS.Kernel.StateGroup> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__46_2
	Action_1_t1434C06AAFDF0A877F5E77DEA4509A1D9EB1A922* ___U3CU3E9__46_2_5;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__53_0
	Func_2_t44F40670B3029D19653A8D62DD18FBB384196D33* ___U3CU3E9__53_0_6;
	// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__102_0
	Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A* ___U3CU3E9__102_0_7;
	// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__103_0
	Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D* ___U3CU3E9__103_0_8;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__105_0
	Func_2_t44F40670B3029D19653A8D62DD18FBB384196D33* ___U3CU3E9__105_0_9;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__106_0
	Func_2_t44F40670B3029D19653A8D62DD18FBB384196D33* ___U3CU3E9__106_0_10;
	// System.Func`2<XCSJ.PluginSMS.Kernel.State,System.Boolean> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__107_0
	Func_2_t44F40670B3029D19653A8D62DD18FBB384196D33* ___U3CU3E9__107_0_11;
	// System.Func`2<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginCommonUtils.IGraphGroup> XCSJ.PluginSMS.Kernel.StateCollection/<>c::<>9__144_0
	Func_2_t68E7FC0737A8E1992831648B6DB962C8DC257E5E* ___U3CU3E9__144_0_12;
};

// XCSJ.PluginSMS.Kernel.StateCollection/<>c

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0

// XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0

// XCSJ.PluginSMS.Kernel.Transition/<>c
struct U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields
{
	// XCSJ.PluginSMS.Kernel.Transition/<>c XCSJ.PluginSMS.Kernel.Transition/<>c::<>9
	U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* ___U3CU3E9_0;
	// System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent> XCSJ.PluginSMS.Kernel.Transition/<>c::<>9__50_0
	Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* ___U3CU3E9__50_0_1;
};

// XCSJ.PluginSMS.Kernel.Transition/<>c

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0

// XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0

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

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.GameObject

// UnityEngine.GameObject

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

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<XCSJ.PluginSMS.Kernel.Transition>

// System.Action`1<XCSJ.PluginSMS.Kernel.Transition>

// System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent>

// System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent>

// System.Action`2<System.Object,System.Boolean>

// System.Action`2<System.Object,System.Boolean>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>

// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>

// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean>

// System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean>

// System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean>

// System.Func`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>

// System.Func`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>

// XCSJ.PluginCommonUtils.ComponentModel.Model
struct Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE_StaticFields
{
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::onEnableChanged
	Action_1_t74232ECA5CF356E4A1E7C1B3B8AB808D3A7C3C3D* ___onEnableChanged_6;
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::onParentChanged
	Action_2_t55D47583FCFEBFEA3CA6ABA6684A80EBC5F2CCC8* ___onParentChanged_8;
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.Boolean> XCSJ.PluginCommonUtils.ComponentModel.Model::onWillDelete
	Action_2_t3D0A3483B175614066F5659CC31648305BB60EDD* ___onWillDelete_9;
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.Boolean> XCSJ.PluginCommonUtils.ComponentModel.Model::onDeleted
	Action_2_t3D0A3483B175614066F5659CC31648305BB60EDD* ___onDeleted_10;
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::onCreated
	Action_1_t74232ECA5CF356E4A1E7C1B3B8AB808D3A7C3C3D* ___onCreated_11;
	// System.Action`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::onStart
	Action_1_t74232ECA5CF356E4A1E7C1B3B8AB808D3A7C3C3D* ___onStart_12;
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.String> XCSJ.PluginCommonUtils.ComponentModel.Model::onNameWillChange
	Action_2_t44CA5644C6362426204BAEFC352F3C3B2AE79713* ___onNameWillChange_13;
	// System.Action`2<XCSJ.PluginCommonUtils.ComponentModel.Model,System.String> XCSJ.PluginCommonUtils.ComponentModel.Model::onNameChanged
	Action_2_t44CA5644C6362426204BAEFC352F3C3B2AE79713* ___onNameChanged_14;
};

// XCSJ.PluginCommonUtils.ComponentModel.Model

// XCSJ.PluginCommonUtils.ComponentModel.Component

// XCSJ.PluginCommonUtils.ComponentModel.Component

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

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.Transition>

// XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.Transition>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.Transition>

// XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.Transition>

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

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>
struct ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875_StaticFields
{
	// System.Action`2<T,System.Boolean> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onActive
	Action_2_t423681A8F61F3267BEFFF580076F4207AF503708* ___onActive_24;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onEntry
	Action_2_t27A5F7EC5035A632B53AA535D8AAAC3F3400A014* ___onEntry_28;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onExit
	Action_2_t27A5F7EC5035A632B53AA535D8AAAC3F3400A014* ___onExit_29;
};

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>
struct ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3_StaticFields
{
	// System.Action`2<T,System.Boolean> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onActive
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* ___onActive_24;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onEntry
	Action_2_t86FC38F51AF9EDE9C879557C941AC99335D53CC2* ___onEntry_28;
	// System.Action`2<T,XCSJ.PluginSMS.Kernel.StateData> XCSJ.PluginSMS.Kernel.ComponentCollection`3::onExit
	Action_2_t86FC38F51AF9EDE9C879557C941AC99335D53CC2* ___onExit_29;
};

// XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>

// XCSJ.PluginSMS.Kernel.StateComponent

// XCSJ.PluginSMS.Kernel.StateComponent

// XCSJ.PluginSMS.Kernel.TransitionComponent

// XCSJ.PluginSMS.Kernel.TransitionComponent

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

// XCSJ.PluginSMS.Kernel.StateGroup

// XCSJ.PluginSMS.Kernel.StateGroup

// XCSJ.PluginSMS.Kernel.Transition
struct Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields
{
	// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean> XCSJ.PluginSMS.Kernel.Transition::onWillDeleteTransition
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* ___onWillDeleteTransition_32;
	// System.Action`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.Transition::onTransitionCreated
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* ___onTransitionCreated_33;
	// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.Transition::onWillUpdateInState
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___onWillUpdateInState_34;
	// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.Transition::onUpdatedInState
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___onUpdatedInState_35;
	// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.Transition::onWillUpdateOutState
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___onWillUpdateOutState_36;
	// System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.Transition::onUpdatedOutState
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___onUpdatedOutState_37;
};

// XCSJ.PluginSMS.Kernel.Transition

// XCSJ.PluginSMS.Kernel.StateCollection
struct StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_StaticFields
{
	// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateCollection::onStateInvalid
	Action_3_tE2B8FA8EF9CC7883AA4612448770EA150FD9D83E* ___onStateInvalid_48;
	// System.Action`3<XCSJ.PluginSMS.Kernel.StateCollection,System.Int32,XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateCollection::onTransitionInvalid
	Action_3_t7E8897E186E51A2982ED79CB03B173DA8A7FB167* ___onTransitionInvalid_49;
};

// XCSJ.PluginSMS.Kernel.StateCollection
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// XCSJ.PluginCommonUtils.ComponentModel.IComponent[]
struct IComponentU5BU5D_tB0731B5EE9BCEB34798498F429165CC5ED838EC6  : public RuntimeArray
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
// XCSJ.PluginSMS.Kernel.StateComponent[]
struct StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390  : public RuntimeArray
{
	ALIGN_FIELD (8) StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* m_Items[1];

	inline StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// XCSJ.PluginSMS.Kernel.TransitionComponent[]
struct TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C  : public RuntimeArray
{
	ALIGN_FIELD (8) TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* m_Items[1];

	inline TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// XCSJ.PluginSMS.Kernel.Transition[]
struct TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471  : public RuntimeArray
{
	ALIGN_FIELD (8) Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* m_Items[1];

	inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
// T[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponents<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ComponentCollection_GetComponents_TisRuntimeObject_mE57DD5F4337C78ACD0E57B01AF25A0827947D4C8_gshared (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_includeDisable, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TComponent> XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>::SearchComponents(XCSJ.PluginCommonUtils.ESearchFlags,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCollection_3_SearchComponents_mD59B3B99A271918A16A17E89CC8EA30CD98ABE82_gshared (ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31* __this, int32_t ___0_searchFlags, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.Component`1<System.Object>::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_1_get_parent_mB5D342FF9D4FC5D97466045CD722051EA7ED267A_gshared (Component_1_tFFB7468B84B6ED1F751042E2FF1E862599ED5541* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Component`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_1__ctor_mF90CD7F3FE5A27B3F071FEC9948BA2F21A830AC0_gshared (Component_1_t70B0FCB8E2B1AE54C2BD8DE23EE82D4E5F6F5B71* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<System.Object,System.Object>::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCollection_2_get_parent_mBCD80C2CC3BB104AFE88562CEE600B74598703A6_gshared (ComponentCollection_2_tCC191463F1912E9B153945B12B8EA85135D8F4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>::CloneFrom(XCSJ.PluginCommonUtils.ComponentModel.Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentCollection_3_CloneFrom_mD550F6A788341D58F708DEFB95CF7BC16618E298_gshared (ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31* __this, Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* ___0_from, const RuntimeMethod* method) ;
// T XCSJ.PluginCommonUtils.ComponentModel.Model::Clone<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Model_Clone_TisRuntimeObject_mA4C46329875792EB4B59FAFE45AC1803BE56E002_gshared (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<System.Object,System.Object>::set_parent(TParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentCollection_2_set_parent_mA85D67C97C12BA7B36E79C88CD2807AF6AF58562_gshared (ComponentCollection_2_tCC191463F1912E9B153945B12B8EA85135D8F4B6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>::ForEachComponents(System.Action`1<TComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentCollection_3_ForEachComponents_m5143E3D2A203086119F107D208342949E67A1E5C_gshared (ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.ComponentCollection`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentCollection_3__ctor_m1F4C69905F1B95C85E7AA441EC58A9E90E7CD73F_gshared (ComponentCollection_3_t160F4DDDC17F6BBD049861E1F523664ED1E4CD31* __this, const RuntimeMethod* method) ;
// TComponent[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<System.Object>::get_components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ComponentCollection_1_get_components_m1820A0AD049B7299045B6CBD7E59915931DFDDA8_gshared (ComponentCollection_1_t9B04B16257C93238414D30B33A637C1DA01704ED* __this, const RuntimeMethod* method) ;

// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC90B1B55FF30CFFAC81716E00F93E90FA675A3A4 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711 (List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::CheckComponent(XCSJ.PluginCommonUtils.ESearchFlags,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentCollection_CheckComponent_m825847440BF1CF7C84E04D867218CC9A72F89240 (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, int32_t ___0_searchFlags, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::get_enable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* __this, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginCommonUtils.SearchFlagsHelper::CheckHierarchyEnable(XCSJ.PluginCommonUtils.ESearchFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SearchFlagsHelper_CheckHierarchyEnable_mA429A975D03568A99EA8AAD2F92C65E19D37167F (int32_t ___0_flags, bool ___1_enable, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// XCSJ.PluginCommonUtils.ComponentModel.IComponent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponent(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentCollection_GetComponent_m851A704AB05B90FF87287909212291555FA51CCA (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, Type_t* ___0_type, bool ___1_includeDisable, const RuntimeMethod* method) ;
// TResult System.Func`2<XCSJ.PluginSMS.Kernel.StateComponent,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2A8A07E54A7EF7F11C879D68A6C984870C1B866C_inline (Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A* __this, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A*, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
// TResult System.Func`2<XCSJ.PluginSMS.Kernel.ITransitionComponent,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mB10817951D4B43851B1580F7490C69CA7CEA2322_inline (Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
// XCSJ.PluginCommonUtils.ComponentModel.IComponent[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponents(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IComponentU5BU5D_tB0731B5EE9BCEB34798498F429165CC5ED838EC6* ComponentCollection_GetComponents_mB8276466E50D48A3F44B544548D3E21D21DCA8DC (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, Type_t* ___0_type, bool ___1_includeDisable, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateComponent>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C (List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// T[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponents<XCSJ.PluginSMS.Kernel.StateComponent>(System.Boolean)
inline StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390* ComponentCollection_GetComponents_TisStateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_mE15D439CCEA2F67100E44AEC423D6FCF1B724601 (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_includeDisable, const RuntimeMethod* method)
{
	return ((  StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390* (*) (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C*, bool, const RuntimeMethod*))ComponentCollection_GetComponents_TisRuntimeObject_mE57DD5F4337C78ACD0E57B01AF25A0827947D4C8_gshared)(__this, ___0_includeDisable, method);
}
// System.Collections.Generic.IEnumerable`1<TComponent> XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>::SearchComponents(XCSJ.PluginCommonUtils.ESearchFlags,System.Type)
inline RuntimeObject* ComponentCollection_3_SearchComponents_mEC29A7CF022B27B39CF677F5FC8FAAB8D1BCC9E7 (ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F* __this, int32_t ___0_searchFlags, Type_t* ___1_type, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ComponentCollection_3_t0A787605FE03BDDB10D1A0E12E7C71794915F34F*, int32_t, Type_t*, const RuntimeMethod*))ComponentCollection_3_SearchComponents_mD59B3B99A271918A16A17E89CC8EA30CD98ABE82_gshared)(__this, ___0_searchFlags, ___1_type, method);
}
// T[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::GetComponents<XCSJ.PluginSMS.Kernel.TransitionComponent>(System.Boolean)
inline TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_includeDisable, const RuntimeMethod* method)
{
	return ((  TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* (*) (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C*, bool, const RuntimeMethod*))ComponentCollection_GetComponents_TisRuntimeObject_mE57DD5F4337C78ACD0E57B01AF25A0827947D4C8_gshared)(__this, ___0_includeDisable, method);
}
// System.Void System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.TransitionComponent>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5 (List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TComponent> XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::SearchComponents(XCSJ.PluginCommonUtils.ESearchFlags,System.Type)
inline RuntimeObject* ComponentCollection_3_SearchComponents_m889DDC77869832CD84B241C1CA3E34E648F7BCD8 (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3* __this, int32_t ___0_searchFlags, Type_t* ___1_type, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3*, int32_t, Type_t*, const RuntimeMethod*))ComponentCollection_3_SearchComponents_mD59B3B99A271918A16A17E89CC8EA30CD98ABE82_gshared)(__this, ___0_searchFlags, ___1_type, method);
}
// XCSJ.PluginCommonUtils.ComponentModel.Component XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7* ComponentCollection_AddComponent_m5C86820BD5D057454CEE40DC5FD998EB1686996D (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State> XCSJ.PluginSMS.Kernel.StateGroup::get_children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* StateGroup_get_children_m69B736D7AE3D7EFD2D6F3B2CF010856B4D41FE9F_inline (StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.State>::Remove(T)
inline bool List_1_Remove_mF1EB7B63D6F470C7F8B1318F82A7C33AB2EF50AB (List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.IEnumerable`1<TComponent> XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.StateGroup,XCSJ.PluginSMS.Kernel.StateCollection,XCSJ.PluginSMS.Kernel.StateGroupComponent>::SearchComponents(XCSJ.PluginCommonUtils.ESearchFlags,System.Type)
inline RuntimeObject* ComponentCollection_3_SearchComponents_mD6BA762C2E64AE2F0316F48638F3DFB8C4737FF7 (ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875* __this, int32_t ___0_searchFlags, Type_t* ___1_type, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ComponentCollection_3_t5C0476D6A74E2DE6C4C7C4C7083A776023323875*, int32_t, Type_t*, const RuntimeMethod*))ComponentCollection_3_SearchComponents_mD59B3B99A271918A16A17E89CC8EA30CD98ABE82_gshared)(__this, ___0_searchFlags, ___1_type, method);
}
// System.Void System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.StateGroupComponent>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mA56016A559333DD6BAA15235E242C5D267009530 (List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// TParent XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.State>::get_parent()
inline State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A (Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2* __this, const RuntimeMethod* method)
{
	return ((  State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* (*) (Component_1_tE335AC75E4FDE7E9E27AFE5CC503A0DAF45A5CB2*, const RuntimeMethod*))Component_1_get_parent_mB5D342FF9D4FC5D97466045CD722051EA7ED267A_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.State>::.ctor()
inline void Component_1__ctor_m072C63C76ADCBEB90E9A567F411C5D2A621234E7 (Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4* __this, const RuntimeMethod* method)
{
	((  void (*) (Component_1_t7D1BCE59F2CE93F27787E573D3E5116DC0B074A4*, const RuntimeMethod*))Component_1__ctor_mF90CD7F3FE5A27B3F071FEC9948BA2F21A830AC0_gshared)(__this, method);
}
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.StateData::get_stateCollection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* StateData_get_stateCollection_mF4D4CF98D0EF259C330EFEE13B96E8384DA22096_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.State::get_rootParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* State_get_rootParent_m3832794995EC78507853E8A1DBCB052B6BBD319D (State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<XCSJ.PluginSMS.Kernel.Transition>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Enumerable_FirstOrDefault_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m66471CB2F82DEBA163B8D50CC0A17D530B1A93A2 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___0_source, method);
}
// TSource[] System.Linq.Enumerable::ToArray<XCSJ.PluginSMS.Kernel.Transition>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* Enumerable_ToArray_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_mB15AC81D75CDC7E3DBCF40BC8BEF6F9176AD8AC6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_gameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_gameObject_m7DCDA7F8C6E9DCF1B9F5624FD5970FEC44F14D52_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_stateCollection(XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_stateCollection_m0073FD76DB7A21B6F121E232BBCE0AAB39873CC6_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_parent(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject XCSJ.PluginSMS.Kernel.StateData::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StateData_get_gameObject_m1E2656260C263CFE1092D12F36DB7F65FD9C27CB_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::Init(UnityEngine.GameObject,XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_Init_m6E130869EFF705EB386A5E16A3266CE8656460F7 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___1_stateCollection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>::Clear()
inline void HashSet_1_Clear_m8CA84167A604374CCF6AB391123582AD024331AF (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>::Add(T)
inline bool HashSet_1_Add_mDD7A76422E6B98C7C2DB77A50F10368B1D8C60DF (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>::.ctor()
inline void List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16 (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Func`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m28C006F5DBAAEC2C25C0251B79A46BF6265348CC (Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<XCSJ.PluginSMS.Kernel.Transition>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B (RuntimeObject* ___0_source, Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<XCSJ.PluginSMS.Kernel.Transition>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// XCSJ.PluginSMS.Kernel.EWorkMode XCSJ.PluginSMS.Kernel.StateData::get_workMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StateData_get_workMode_mFDD6AA7084727AD1C90AB04E1C905054E9DFAD56_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_workMode(XCSJ.PluginSMS.Kernel.EWorkMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData__ctor_mC0F9A31366265108CB99DF1034B9097C4F96AED2 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_get_parent_mA7BF2632BB6D31E022660C00E5296BA24220F871_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Object XCSJ.PluginSMS.Kernel.StateData::get_tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StateData_get_tag_m5448BB27103A19B6ADD2AD0FA43A8EB053C0545D_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_tag(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_tag_m4C652C0661D5FA020E3533FFE7EE5DAA8AE3AEAF_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateData::get_workState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* StateData_get_workState_m1334CD48534AC8562EAAE1AD48C73157827531DF_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_workState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_workState_mAB6478C5AFC85C605ED749E6B4950623D46A9C2B_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Clone_m12C7505E07BB325D12C7E1C99A9CCD38A8CB9D57 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>::.ctor()
inline void HashSet_1__ctor_m5425237EA59DD74FE6177CB1313F0C8A01FD6A56 (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<XCSJ.PluginSMS.Kernel.Transition>::Contains(T)
inline bool HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7 (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
// TParent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::get_parent()
inline State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E (ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7* __this, const RuntimeMethod* method)
{
	return ((  State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* (*) (ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7*, const RuntimeMethod*))ComponentCollection_2_get_parent_mBCD80C2CC3BB104AFE88562CEE600B74598703A6_gshared)(__this, method);
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnUpdatedInState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnUpdatedInState_m2896C603A861D8330D9E3D8AD25EDD39A90DC308 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnUpdatedOutState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnUpdatedOutState_mA1EE77408590E65E8500EA3B84E4546DA3CDBD72 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m1A1393CF2C53884733F05FBE209EE87FF515FC04_inline (Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::get_inState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::get_outState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::Delete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentCollection_Delete_m76A305FE09EE8A44E7DE646E98284B04E94BE9F1 (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, bool ___0_deleteObject, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnTransitionCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnTransitionCreated_mCFF2375997D318633116DBD9D586BFC5B76BCE30 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.ComponentModel.Model::OnCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_OnCreated_mADEE416CECB541EE2F010AC4CEC431E3551C28C1 (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<XCSJ.PluginSMS.Kernel.Transition>::Invoke(T)
inline void Action_1_Invoke_m969897A19DA4D157C7CE8CD3157464410A7F72DB_inline (Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>::Invoke(T1,T2)
inline void Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_arg1, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Boolean XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection::CallbackEvent(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentCollection_CallbackEvent_m27A13531B1B74A6FB1E30233950523C9F28AA258 (ComponentCollection_t8154362BB2434FDE0DAAF8EE669951A15EFE7A9C* __this, String_t* ___0_eventName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::CloneFrom(XCSJ.PluginCommonUtils.ComponentModel.Model)
inline bool ComponentCollection_3_CloneFrom_m00D455494242D89BB3065ED4C8F5F1273DEA7CD7 (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3* __this, Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* ___0_from, const RuntimeMethod* method)
{
	return ((  bool (*) (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3*, Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE*, const RuntimeMethod*))ComponentCollection_3_CloneFrom_mD550F6A788341D58F708DEFB95CF7BC16618E298_gshared)(__this, ___0_from, method);
}
// XCSJ.PluginSMS.Kernel.Transition XCSJ.PluginSMS.Kernel.Transition::CloneAndConnect(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Transition_CloneAndConnect_mD1BE01B83DF79F3BB400300604B4181DB77B2707 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, const RuntimeMethod* method) ;
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.Transition::get_transitionCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* Transition_get_transitionCollection_m30452B833AAE717BD2519DF6B04071B95CA17E69 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// T XCSJ.PluginCommonUtils.ComponentModel.Model::Clone<XCSJ.PluginSMS.Kernel.Transition>()
inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Model_Clone_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m67EF06315B1EC1E6E80F766C0340E938BD0424A3 (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* __this, const RuntimeMethod* method)
{
	return ((  Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* (*) (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE*, const RuntimeMethod*))Model_Clone_TisRuntimeObject_mA4C46329875792EB4B59FAFE45AC1803BE56E002_gshared)(__this, method);
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection::ConnectInternal(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.Transition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateCollection_ConnectInternal_m2A90DFAE26AD4FDB8CDEF3D2B1FACD0D3A991FE5 (StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___2_transition, String_t* ___3_transitionName, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::set_parent(TParent)
inline void ComponentCollection_2_set_parent_m9D3587D79F40F8CA2582EEBE530B0A849646EE98 (ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ComponentCollection_2_t354D34DA93F96B1268C727BB16F0B586E28A52C7*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*, const RuntimeMethod*))ComponentCollection_2_set_parent_mA85D67C97C12BA7B36E79C88CD2807AF6AF58562_gshared)(__this, ___0_value, method);
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::Connect(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_Connect_m93BBC67D60F9485703B18618D5C613A21B24D444 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`2<XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateComponent>::get_parent()
inline State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40 (ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9* __this, const RuntimeMethod* method)
{
	return ((  State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* (*) (ComponentCollection_2_t3FB86A2E65C20C86DA431089882095AF4AE777F9*, const RuntimeMethod*))ComponentCollection_2_get_parent_mBCD80C2CC3BB104AFE88562CEE600B74598703A6_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::ReadyConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_ReadyConnect_m71C4BB59DEAC08C5FAA85C9220C3B822D90510C4 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::TryGetRealInState(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_TryGetRealInState_m23845B697ACC1A03C89F61E8E6E275D42F319CAE (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** ___1_realInState, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::TryGetRealOutState(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_TryGetRealOutState_m162CEB5B52EB0D154E5BFECCEF70FBF37AF93FB1 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_outState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** ___1_realOutState, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::ConnectInternal(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_ConnectInternal_m68A72D6CB995A6C8F8DB160FB374CC30FCE0222C (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___2_transition, const RuntimeMethod* method) ;
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_Connected_m135F3166009E9F815E5C55BF742E1CF9FA74E81F (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition>::Remove(T)
inline bool List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE*, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m492093D2C5762C71F2D824831A932ED8661D7569 (U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<XCSJ.PluginSMS.Kernel.TransitionComponent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052 (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::ForEachComponents(System.Action`1<TComponent>)
inline void ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3* __this, Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* ___0_action, const RuntimeMethod* method)
{
	((  void (*) (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3*, Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*, const RuntimeMethod*))ComponentCollection_3_ForEachComponents_m5143E3D2A203086119F107D208342949E67A1E5C_gshared)(__this, ___0_action, method);
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m60E939260FF29CDA2D859D6734FBBCB8BD942FBF (U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m20D3140DF56B8AC9AB26AF5F0CE487E02B53EBD3 (U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m44C05479C914B388D23C4168B14B63A4BE06E1E7 (U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* __this, const RuntimeMethod* method) ;
// System.Void XCSJ.PluginSMS.Kernel.ComponentCollection`3<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.TransitionComponent>::.ctor()
inline void ComponentCollection_3__ctor_mC8E4F409011ACE6432C15CC9056721D2176A9908 (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3* __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentCollection_3_t6FC8A4B979B71CC87E52215A0D7695832A58B1B3*, const RuntimeMethod*))ComponentCollection_3__ctor_m1F4C69905F1B95C85E7AA441EC58A9E90E7CD73F_gshared)(__this, method);
}
// TComponent[] XCSJ.PluginCommonUtils.ComponentModel.ComponentCollection`1<XCSJ.PluginSMS.Kernel.TransitionComponent>::get_components()
inline TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* ComponentCollection_1_get_components_mFFC47C602DD45EF1B5976203F7CA506DA5955A35 (ComponentCollection_1_tE4F8493C600E2CB66E9E8014EDE5FA96823C3219* __this, const RuntimeMethod* method)
{
	return ((  TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* (*) (ComponentCollection_1_tE4F8493C600E2CB66E9E8014EDE5FA96823C3219*, const RuntimeMethod*))ComponentCollection_1_get_components_m1820A0AD049B7299045B6CBD7E59915931DFDDA8_gshared)(__this, method);
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8475A1E899BDAD02FCD6637E3CE57A2F7D4A6134 (U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* __this, const RuntimeMethod* method) ;
// TParent XCSJ.PluginCommonUtils.ComponentModel.Component`1<XCSJ.PluginSMS.Kernel.Transition>::get_parent()
inline Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E (Component_1_tE8211D3A92E2FF20BD8E27B6CAD7070610188490* __this, const RuntimeMethod* method)
{
	return ((  Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* (*) (Component_1_tE8211D3A92E2FF20BD8E27B6CAD7070610188490*, const RuntimeMethod*))Component_1_get_parent_mB5D342FF9D4FC5D97466045CD722051EA7ED267A_gshared)(__this, method);
}
// System.Void XCSJ.PluginSMS.Kernel.Component`1<XCSJ.PluginSMS.Kernel.Transition>::.ctor()
inline void Component_1__ctor_m8130F98C16E81429F8D5D4664F9E1D18B0B3178D (Component_1_tAA0A8212F535E2C2CB0FB67D3AB34616E49964BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Component_1_tAA0A8212F535E2C2CB0FB67D3AB34616E49964BD*, const RuntimeMethod*))Component_1__ctor_mF90CD7F3FE5A27B3F071FEC9948BA2F21A830AC0_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8721A3571B58420586CEF032790B3656582B30AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* L_0 = (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA*)il2cpp_codegen_object_new(U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC90B1B55FF30CFFAC81716E00F93E90FA675A3A4(L_0, NULL);
		((U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC90B1B55FF30CFFAC81716E00F93E90FA675A3A4 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.IState XCSJ.PluginSMS.Kernel.StateCollection/<>c::<XCSJ.PluginSMS.Kernel.IStateCollection.get_states>b__20_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CXCSJ_PluginSMS_Kernel_IStateCollection_get_statesU3Eb__20_0_m3CD51870057DE07A3D8865CA676C7FB11CB253FD (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_obj, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_obj;
		return L_0;
	}
}
// XCSJ.PluginSMS.Kernel.IState XCSJ.PluginSMS.Kernel.StateCollection/<>c::<XCSJ.PluginSMS.Kernel.IStateCollection.get_activeStates>b__25_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CXCSJ_PluginSMS_Kernel_IStateCollection_get_activeStatesU3Eb__25_0_m73024772F344B8798C668DEC06F1D87EACD27FE2 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_obj, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_obj;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::<OnStart>b__46_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnStartU3Eb__46_0_m1583C7BE0A04742570A22893A9BC096646BA4DBE (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(43 /* System.Void XCSJ.PluginCommonUtils.ComponentModel.Model::OnStart() */, L_0);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::<OnStart>b__46_1(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnStartU3Eb__46_1_m72D8830C6949CD7BB2117E33A1365506B8BDF713 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_0 = ___0_t;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(43 /* System.Void XCSJ.PluginCommonUtils.ComponentModel.Model::OnStart() */, L_0);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c::<OnStart>b__46_2(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnStartU3Eb__46_2_m2FF42AE3407AA20119E3996C52EAD68E41F63EF6 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_g, const RuntimeMethod* method) 
{
	{
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_0 = ___0_g;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(43 /* System.Void XCSJ.PluginCommonUtils.ComponentModel.Model::OnStart() */, L_0);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<DataValidity>b__53_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDataValidityU3Eb__53_0_m38A7F1C83ECF76000458EADB96F5E3A88956F8D0 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::DataValidity() */, L_0);
		return L_1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<GetStates>b__102_0(XCSJ.PluginSMS.Kernel.StateComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStatesU3Eb__102_0_m89571C6BBD40C9CCF41BCCEF9CE3DDDB2FA4E3B3 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* ___0_c, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<GetTransitions>b__103_0(XCSJ.PluginSMS.Kernel.ITransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetTransitionsU3Eb__103_0_mFB24334CFE1BD943D63F66B230B68BFEE09870DB (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, RuntimeObject* ___0_c, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<GetStatesOfAllowIn>b__105_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStatesOfAllowInU3Eb__105_0_m1E78520BE1FA6297968B086C787902500AC1E936 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(170 /* System.Boolean XCSJ.PluginSMS.Kernel.State::get_allowIn() */, L_0);
		return L_1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<GetStatesOfAllowOut>b__106_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStatesOfAllowOutU3Eb__106_0_m2B3E4196BBDC0EA14CFBA6BCE4D794EA7F7C4580 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(171 /* System.Boolean XCSJ.PluginSMS.Kernel.State::get_allowOut() */, L_0);
		return L_1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c::<GetStatesOfAllowInAndOut>b__107_0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetStatesOfAllowInAndOutU3Eb__107_0_m089D991F6B9E5D23A850AFC7FC6FD869A220A686 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(170 /* System.Boolean XCSJ.PluginSMS.Kernel.State::get_allowIn() */, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = ___0_s;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(171 /* System.Boolean XCSJ.PluginSMS.Kernel.State::get_allowOut() */, L_2);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// XCSJ.PluginCommonUtils.IGraphGroup XCSJ.PluginSMS.Kernel.StateCollection/<>c::<XCSJ.PluginCommonUtils.IGraphGroupCollection.get_groups>b__144_0(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CXCSJ_PluginCommonUtils_IGraphGroupCollection_get_groupsU3Eb__144_0_mB394FD9FA09ED6224EA8E1CDD445D4A92EF50409 (U3CU3Ec_t0149A6EF175E12B8E30D983C3C88DBAF990F88CA* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_sg, const RuntimeMethod* method) 
{
	{
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_0 = ___0_sg;
		return L_0;
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m36051F9C7C369AB0AAF36B02E33C4336416822DD (U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0::<GetWillDeleteModels>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CGetWillDeleteModelsU3Eb__0_m99ED4086FEFD1CB8E5B86F1EEDD77025B79D41B9 (U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_0 = __this->___list_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_s;
		NullCheck(L_1);
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* >::Invoke(38 /* System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::GetWillDeleteModels() */, L_1);
		NullCheck(L_0);
		List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711(L_0, L_2, List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0::<GetWillDeleteModels>b__1(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CGetWillDeleteModelsU3Eb__1_m399A7AAC80F018E270535B559AEA2E9365452729 (U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_0 = __this->___list_0;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		NullCheck(L_1);
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* >::Invoke(38 /* System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::GetWillDeleteModels() */, L_1);
		NullCheck(L_0);
		List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711(L_0, L_2, List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass45_0::<GetWillDeleteModels>b__2(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CGetWillDeleteModelsU3Eb__2_m911CE38C4ED12E0863A9730B4DD90752C649EFE3 (U3CU3Ec__DisplayClass45_0_tDDAA54BE2DC4364190145AA9B60FB801DBE45606* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_0 = __this->___list_0;
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_1 = ___0_g;
		NullCheck(L_1);
		List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* L_2;
		L_2 = VirtualFuncInvoker0< List_1_t209A4F4193D83ABEAB48DC61FD639552C4B3B754* >::Invoke(38 /* System.Collections.Generic.List`1<XCSJ.PluginCommonUtils.ComponentModel.Model> XCSJ.PluginCommonUtils.ComponentModel.Model::GetWillDeleteModels() */, L_1);
		NullCheck(L_0);
		List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711(L_0, L_2, List_1_AddRange_mABB97BEF32E13A099AB20F47AE380C02F46A4711_RuntimeMethod_var);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0__ctor_mC48302311E8CFD6EB2397495A5BF8126153AA5A7 (U3CU3Ec__DisplayClass72_0_t6B8F1ADA32E46B724AFC44D8D9EF74A020A1974A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass72_0::<GetStates>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass72_0_U3CGetStatesU3Eb__0_m1EFA2ADDB9DD24AADA8431D6672AB3CBF57EEB77 (U3CU3Ec__DisplayClass72_0_t6B8F1ADA32E46B724AFC44D8D9EF74A020A1974A* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		int32_t L_1 = __this->___searchFlags_0;
		Type_t* L_2 = __this->___type_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = ComponentCollection_CheckComponent_m825847440BF1CF7C84E04D867218CC9A72F89240(L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->___searchFlags_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5 = ___0_s;
		NullCheck(L_5);
		bool L_6;
		L_6 = Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline(L_5, NULL);
		bool L_7;
		L_7 = SearchFlagsHelper_CheckHierarchyEnable_mA429A975D03568A99EA8AAD2F92C65E19D37167F(L_4, L_6, NULL);
		return L_7;
	}

IL_0026:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_m512CE5798091A7D9D3B9FCEDB2B2B4818D9082E6 (U3CU3Ec__DisplayClass99_0_t85F24C2C2298F6A833B5D38D375D8CC197CFA02B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass99_0::<GetState>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass99_0_U3CGetStateU3Eb__0_m3CC1E403FE14D964B317D2301005456C2B0A2F4B (U3CU3Ec__DisplayClass99_0_t85F24C2C2298F6A833B5D38D375D8CC197CFA02B* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_s;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass102_0__ctor_m7BA87AD785624CB2968D96166CE82BE77D61E737 (U3CU3Ec__DisplayClass102_0_tE6356E4130963BB8BAE0D0A4632F659A84411CE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass102_0::<GetStates>b__1(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass102_0_U3CGetStatesU3Eb__1_m00396F13BCFEE0F607FC3DEDA2C64A8E2D2DD305 (U3CU3Ec__DisplayClass102_0_tE6356E4130963BB8BAE0D0A4632F659A84411CE3* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* V_0 = NULL;
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_obj;
		Type_t* L_1 = __this->___stateComponentType_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ComponentCollection_GetComponent_m851A704AB05B90FF87287909212291555FA51CCA(L_0, L_1, (bool)0, NULL);
		V_0 = ((StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7*)IsInstClass((RuntimeObject*)L_2, StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_il2cpp_TypeInfo_var));
		StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Func_2_tC4E62EBAE5A28D8DAF078FB900648D481899A68A* L_4 = __this->___func_1;
		StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Func_2_Invoke_m2A8A07E54A7EF7F11C879D68A6C984870C1B866C_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass103_0__ctor_m135247FCC893D2EFD00D0F35FF0BA1FE8A7BE79B (U3CU3Ec__DisplayClass103_0_t48B1DA14EA4771AC93E762CD7C75C013FE48D2DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass103_0::<GetTransitions>b__1(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass103_0_U3CGetTransitionsU3Eb__1_m23841FA653EE59054626707C98BD18A6EA299A6B (U3CU3Ec__DisplayClass103_0_t48B1DA14EA4771AC93E762CD7C75C013FE48D2DF* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* V_0 = NULL;
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_0 = ___0_obj;
		Type_t* L_1 = __this->___transitionComponentType_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ComponentCollection_GetComponent_m851A704AB05B90FF87287909212291555FA51CCA(L_0, L_1, (bool)0, NULL);
		V_0 = ((TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402*)IsInstClass((RuntimeObject*)L_2, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_il2cpp_TypeInfo_var));
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Func_2_tE005ABF6AB603081EF6FD88B35DF05E46E2AD85D* L_4 = __this->___func_1;
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Func_2_Invoke_mB10817951D4B43851B1580F7490C69CA7CEA2322_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0__ctor_mE9FF6C397C94839B787720F78822D9BA0B37D89A (U3CU3Ec__DisplayClass109_0_tFEE89D85986D624AAE01D686B7D177971CEC916E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass109_0::<GetStateComponents>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0_U3CGetStateComponentsU3Eb__0_m7CD3654080151E06FB168EC3463338F75E663BBB (U3CU3Ec__DisplayClass109_0_tFEE89D85986D624AAE01D686B7D177971CEC916E* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* L_0 = __this->___list_2;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_t;
		Type_t* L_2 = __this->___componentType_0;
		bool L_3 = __this->___includeDisable_1;
		NullCheck(L_1);
		IComponentU5BU5D_tB0731B5EE9BCEB34798498F429165CC5ED838EC6* L_4;
		L_4 = ComponentCollection_GetComponents_mB8276466E50D48A3F44B544548D3E21D21DCA8DC(L_1, L_2, L_3, NULL);
		NullCheck(L_0);
		List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C(L_0, (RuntimeObject*)((StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390*)Castclass((RuntimeObject*)L_4, StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390_il2cpp_TypeInfo_var)), List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0__ctor_mA71FE5A6289191FEEA5966604A1D8CD9778D5973 (U3CU3Ec__DisplayClass110_0_t301BF81A1093529710E61D1475EDEEAADCDEE077* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass110_0::<GetStateComponents>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0_U3CGetStateComponentsU3Eb__0_mB956536937AED2DB25D84F151EE1836543DE5614 (U3CU3Ec__DisplayClass110_0_t301BF81A1093529710E61D1475EDEEAADCDEE077* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_GetComponents_TisStateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_mE15D439CCEA2F67100E44AEC423D6FCF1B724601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* L_0 = __this->___list_1;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_t;
		bool L_2 = __this->___includeDisable_0;
		NullCheck(L_1);
		StateComponentU5BU5D_tA1D2CEE5C77DC420EFF5442FA9DDDB5640A15390* L_3;
		L_3 = ComponentCollection_GetComponents_TisStateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_mE15D439CCEA2F67100E44AEC423D6FCF1B724601(L_1, L_2, ComponentCollection_GetComponents_TisStateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7_mE15D439CCEA2F67100E44AEC423D6FCF1B724601_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C(L_0, (RuntimeObject*)L_3, List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass111_0__ctor_m331FCBAAD684F1FD0F483D381FD52CC558DC8C3C (U3CU3Ec__DisplayClass111_0_tC93CE655C19CF2D4DA092562EE689DD3DA06DEE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass111_0::<GetStateComponents>b__0(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass111_0_U3CGetStateComponentsU3Eb__0_mADF008FEC4024E4634C7232211217AC041D8F300 (U3CU3Ec__DisplayClass111_0_tC93CE655C19CF2D4DA092562EE689DD3DA06DEE1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_SearchComponents_mEC29A7CF022B27B39CF677F5FC8FAAB8D1BCC9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___searchFlags_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_s;
		NullCheck(L_1);
		bool L_2;
		L_2 = Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline(L_1, NULL);
		bool L_3;
		L_3 = SearchFlagsHelper_CheckHierarchyEnable_mA429A975D03568A99EA8AAD2F92C65E19D37167F(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t4C4C880175E1D8013CF7165203B1E2D73132504D* L_4 = __this->___list_1;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5 = ___0_s;
		int32_t L_6 = __this->___searchFlags_0;
		Type_t* L_7 = __this->___type_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = ComponentCollection_3_SearchComponents_mEC29A7CF022B27B39CF677F5FC8FAAB8D1BCC9E7(L_5, L_6, L_7, ComponentCollection_3_SearchComponents_mEC29A7CF022B27B39CF677F5FC8FAAB8D1BCC9E7_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C(L_4, L_8, List_1_AddRange_mFDC281294BB8910682495CB57E0FB8497AA4BD6C_RuntimeMethod_var);
	}

IL_0030:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass112_0__ctor_m9C219B33E05CD6AE6C1ABB2D254E4DA6C29D3F59 (U3CU3Ec__DisplayClass112_0_t4D11D57F7F5F21DD8598B98106EBECAF55942231* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass112_0::<GetTransitionComponents>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass112_0_U3CGetTransitionComponentsU3Eb__0_mB3FD873045D880B45C37AFAD7FE7B43DECB0CA88 (U3CU3Ec__DisplayClass112_0_t4D11D57F7F5F21DD8598B98106EBECAF55942231* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* L_0 = __this->___list_0;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		bool L_2 = __this->___includeDisable_1;
		NullCheck(L_1);
		TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* L_3;
		L_3 = ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C(L_1, L_2, ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5(L_0, (RuntimeObject*)L_3, List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass113_0__ctor_mD1DD8D48A49157785B079A52F922A275B6818108 (U3CU3Ec__DisplayClass113_0_tF8CAFEBE3F003178A0FC840D0C0B575CE3677A9C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::<GetTransitionComponents>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass113_0_U3CGetTransitionComponentsU3Eb__0_m345F27F88FEE59E16000C616D2DBD87AA0A39CFC (U3CU3Ec__DisplayClass113_0_tF8CAFEBE3F003178A0FC840D0C0B575CE3677A9C* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* L_0 = __this->___list_0;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		bool L_2 = __this->___includeDisable_1;
		NullCheck(L_1);
		TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* L_3;
		L_3 = ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C(L_1, L_2, ComponentCollection_GetComponents_TisTransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402_m56E7B6739B2395454FF5D019EA95A376EF2B0C1C_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5(L_0, (RuntimeObject*)L_3, List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass113_0::<GetTransitionComponents>b__1(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass113_0_U3CGetTransitionComponentsU3Eb__1_m8F563823376A04F8CEEA895835DBC2295E15F82A (U3CU3Ec__DisplayClass113_0_tF8CAFEBE3F003178A0FC840D0C0B575CE3677A9C* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___componentType_2;
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_1 = ___0_c;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_2);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass114_0__ctor_mA7B7CC70A4CF298A7424E57868FBBABC400DC4D9 (U3CU3Ec__DisplayClass114_0_tC9D4C2837FE894D0A01B06393591CE28091840D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass114_0::<GetTransitionComponents>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass114_0_U3CGetTransitionComponentsU3Eb__0_m56BD5FB53F1513A8CE5F7BDEF95BA50393CBD878 (U3CU3Ec__DisplayClass114_0_tC9D4C2837FE894D0A01B06393591CE28091840D1* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_SearchComponents_m889DDC77869832CD84B241C1CA3E34E648F7BCD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___searchFlags_0;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		NullCheck(L_1);
		bool L_2;
		L_2 = Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline(L_1, NULL);
		bool L_3;
		L_3 = SearchFlagsHelper_CheckHierarchyEnable_mA429A975D03568A99EA8AAD2F92C65E19D37167F(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t5C65375AAD829DC8B67F3B2123C12CCF4E233F51* L_4 = __this->___list_1;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_5 = ___0_t;
		int32_t L_6 = __this->___searchFlags_0;
		Type_t* L_7 = __this->___type_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = ComponentCollection_3_SearchComponents_m889DDC77869832CD84B241C1CA3E34E648F7BCD8(L_5, L_6, L_7, ComponentCollection_3_SearchComponents_m889DDC77869832CD84B241C1CA3E34E648F7BCD8_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5(L_4, L_8, List_1_AddRange_mB3897FA6821CF7B8670993EA5B07E17B40AA6ED5_RuntimeMethod_var);
	}

IL_0030:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass117_0__ctor_m617330D3DB3A4254AF5574F10BAD99D64C12E599 (U3CU3Ec__DisplayClass117_0_t0736E77542429CB055B3099244FA6CF626753845* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass117_0::<CreateTransitionInternal>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass117_0_U3CCreateTransitionInternalU3Eb__0_mA275C64A46B299B66FFA1BA0DA2D9836783CAF46 (U3CU3Ec__DisplayClass117_0_t0736E77542429CB055B3099244FA6CF626753845* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_transition, const RuntimeMethod* method) 
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___transitionComponentTypes_0;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = __this->___transitionComponentTypes_0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_6 = ___0_transition;
		Type_t* L_7 = V_2;
		NullCheck(L_6);
		Component_t1C9AB28B60AD7F84C7F9320B1A0F4A414F9CFBD7* L_8;
		L_8 = ComponentCollection_AddComponent_m5C86820BD5D057454CEE40DC5FD998EB1686996D(L_6, L_7, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_0029:
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass125_0__ctor_m90B7E0D581819E0BDDB40E98D28843DF5AA3198F (U3CU3Ec__DisplayClass125_0_t3D56B2728851D7125FEDD5F0357FA615A8248F2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass125_0::<GetTransition>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass125_0_U3CGetTransitionU3Eb__0_m4BBEF0CF357B846BBC7A3CE2F93C8DF62A1131B0 (U3CU3Ec__DisplayClass125_0_t3D56B2728851D7125FEDD5F0357FA615A8248F2C* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_0 = ___0_t;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass129_0__ctor_mDE69650A6786B1D1671B373C688DCCECE728FF95 (U3CU3Ec__DisplayClass129_0_tE27CBB76756884A27FB15AD76CB44A61B070CE5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass129_0::<GetTransitions>b__0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass129_0_U3CGetTransitionsU3Eb__0_m43E5A2CB929908C33372E57C162F839DAE548189 (U3CU3Ec__DisplayClass129_0_tE27CBB76756884A27FB15AD76CB44A61B070CE5A* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_0 = ___0_t;
		int32_t L_1 = __this->___searchFlags_0;
		Type_t* L_2 = __this->___type_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = ComponentCollection_CheckComponent_m825847440BF1CF7C84E04D867218CC9A72F89240(L_0, L_1, L_2, NULL);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass137_0__ctor_m448A311474FAE92D3CA3862EC3EACB5187F5DB0F (U3CU3Ec__DisplayClass137_0_t964A1F15C71473F8D2659B8D99CC6D467F201A0A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass137_0::<GetStateGroup>b__0(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass137_0_U3CGetStateGroupU3Eb__0_m05BC549DE2217A2C30D75EBAF4D94DDC6743384E (U3CU3Ec__DisplayClass137_0_t964A1F15C71473F8D2659B8D99CC6D467F201A0A* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_g, const RuntimeMethod* method) 
{
	{
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_0 = ___0_g;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass140_0__ctor_m3B5E19D699E2287358F5BA83D3D0B94E126D2F61 (U3CU3Ec__DisplayClass140_0_t32364F7C422CCCBF368A17B360BF6B40C953C33E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass140_0::<RemoveStateFromGroups>b__0(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass140_0_U3CRemoveStateFromGroupsU3Eb__0_m6F84A30A6B1A26829B19BE4E748948682733C178 (U3CU3Ec__DisplayClass140_0_t32364F7C422CCCBF368A17B360BF6B40C953C33E* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF1EB7B63D6F470C7F8B1318F82A7C33AB2EF50AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_0 = ___0_g;
		NullCheck(L_0);
		List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* L_1;
		L_1 = StateGroup_get_children_m69B736D7AE3D7EFD2D6F3B2CF010856B4D41FE9F_inline(L_0, NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = __this->___state_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_mF1EB7B63D6F470C7F8B1318F82A7C33AB2EF50AB(L_1, L_2, List_1_Remove_mF1EB7B63D6F470C7F8B1318F82A7C33AB2EF50AB_RuntimeMethod_var);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass146_0__ctor_m20CDC88E82E11231A115FF9F63EEABC9139F639C (U3CU3Ec__DisplayClass146_0_t4D8B3D3D23D390362512164DC19A0B32FB02FB49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass146_0::<GetStateGroups>b__0(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass146_0_U3CGetStateGroupsU3Eb__0_m0E37E835B15C394995FA544817D519762752AFAD (U3CU3Ec__DisplayClass146_0_t4D8B3D3D23D390362512164DC19A0B32FB02FB49* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_t, const RuntimeMethod* method) 
{
	{
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_0 = ___0_t;
		int32_t L_1 = __this->___searchFlags_0;
		Type_t* L_2 = __this->___type_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = ComponentCollection_CheckComponent_m825847440BF1CF7C84E04D867218CC9A72F89240(L_0, L_1, L_2, NULL);
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
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass147_0__ctor_m5D711F9C9E381E25ADF858C5624B6A5C3B6C95C8 (U3CU3Ec__DisplayClass147_0_tD9BCA0E3E73339A8A975F4B2CB0CF4332EB469F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateCollection/<>c__DisplayClass147_0::<GetStateGroupComponents>b__0(XCSJ.PluginSMS.Kernel.StateGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass147_0_U3CGetStateGroupComponentsU3Eb__0_m23A9F6131BF0A12B72C1C3736C9324DA57ADF838 (U3CU3Ec__DisplayClass147_0_tD9BCA0E3E73339A8A975F4B2CB0CF4332EB469F6* __this, StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_SearchComponents_mD6BA762C2E64AE2F0316F48638F3DFB8C4737FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mA56016A559333DD6BAA15235E242C5D267009530_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___searchFlags_0;
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_1 = ___0_g;
		NullCheck(L_1);
		bool L_2;
		L_2 = Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline(L_1, NULL);
		bool L_3;
		L_3 = SearchFlagsHelper_CheckHierarchyEnable_mA429A975D03568A99EA8AAD2F92C65E19D37167F(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		List_1_tE810F63D4596EC6B6798BB550012EDEDF6EB28A7* L_4 = __this->___list_1;
		StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* L_5 = ___0_g;
		int32_t L_6 = __this->___searchFlags_0;
		Type_t* L_7 = __this->___type_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = ComponentCollection_3_SearchComponents_mD6BA762C2E64AE2F0316F48638F3DFB8C4737FF7(L_5, L_6, L_7, ComponentCollection_3_SearchComponents_mD6BA762C2E64AE2F0316F48638F3DFB8C4737FF7_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_AddRange_mA56016A559333DD6BAA15235E242C5D267009530(L_4, L_8, List_1_AddRange_mA56016A559333DD6BAA15235E242C5D267009530_RuntimeMethod_var);
	}

IL_0030:
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
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.StateComponent::XCSJ.PluginSMS.Kernel.IGetStateCollection.get_stateCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* StateComponent_XCSJ_PluginSMS_Kernel_IGetStateCollection_get_stateCollection_m88BC870C9FA023DC9766BDD21C9E001DA88DC67A (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGetStateCollection_t314EBE6CC85B7D9A545FA370D80520B4EE7EF6EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* G_B4_0 = NULL;
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* G_B3_0 = NULL;
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)NULL;
	}

IL_000f:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A(__this, Component_1_get_parent_m7F6E9AEC276BDC99AA74914AE3F0F4611DBB462A_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001b;
		}
	}
	{
		return (StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)NULL;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_4;
		L_4 = InterfaceFuncInvoker0< StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* >::Invoke(0 /* XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.IGetStateCollection::get_stateCollection() */, IGetStateCollection_t314EBE6CC85B7D9A545FA370D80520B4EE7EF6EF_il2cpp_TypeInfo_var, G_B4_0);
		return L_4;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::OnStateCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_OnStateCreated_mC88437EF220E4AADDE93B2D039643A9E7B4C9B4F (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::OnStateEntry(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_OnStateEntry_m5599FE9BD7C11DC9B09F4220527CD670D294E64C (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::OnStateExit(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_OnStateExit_mDB8BC9DC9F90D3BED1F3B2E4A11CCD4E85B2BC97 (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::OnUpdatedInTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_OnUpdatedInTransition_mE7524109BA38EAD2ADD00BD1014863EB83AC3793 (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_transition, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_oldState, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::OnUpdatedOutTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent_OnUpdatedOutTransition_mB032EE97C7784C4434127A0028A847E93862D2CE (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_transition, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_oldState, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateComponent__ctor_mEC6118A85A5EC85C77CF7D7FFAF5A6E58A3AA3C7 (StateComponent_tA8CA6CDBFE066367A81B30C69057A727E72001F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1__ctor_m072C63C76ADCBEB90E9A567F411C5D2A621234E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_1__ctor_m072C63C76ADCBEB90E9A567F411C5D2A621234E7(__this, Component_1__ctor_m072C63C76ADCBEB90E9A567F411C5D2A621234E7_RuntimeMethod_var);
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
// UnityEngine.GameObject XCSJ.PluginSMS.Kernel.StateData::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StateData_get_gameObject_m1E2656260C263CFE1092D12F36DB7F65FD9C27CB (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CgameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_gameObject_m7DCDA7F8C6E9DCF1B9F5624FD5970FEC44F14D52 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CgameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.StateData::get_stateCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* StateData_get_stateCollection_mF4D4CF98D0EF259C330EFEE13B96E8384DA22096 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0 = __this->___U3CstateCollectionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_stateCollection(XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_stateCollection_m0073FD76DB7A21B6F121E232BBCE0AAB39873CC6 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___0_value, const RuntimeMethod* method) 
{
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0 = ___0_value;
		__this->___U3CstateCollectionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateCollectionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.StateData::get_rootStateCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* StateData_get_rootStateCollection_m6DD1EE9CD4E34DCD11A10737B4F9A297CE6E1311 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0;
		L_0 = StateData_get_stateCollection_mF4D4CF98D0EF259C330EFEE13B96E8384DA22096_inline(__this, NULL);
		NullCheck(L_0);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1;
		L_1 = State_get_rootParent_m3832794995EC78507853E8A1DBCB052B6BBD319D(L_0, NULL);
		return ((StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)IsInstClass((RuntimeObject*)L_1, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_il2cpp_TypeInfo_var));
	}
}
// XCSJ.PluginSMS.Kernel.Transition XCSJ.PluginSMS.Kernel.StateData::get_transition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* StateData_get_transition_mED173E32C61E8933A72C059BDC638F0BA83804B8 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m66471CB2F82DEBA163B8D50CC0A17D530B1A93A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1;
		L_1 = Enumerable_FirstOrDefault_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m66471CB2F82DEBA163B8D50CC0A17D530B1A93A2(L_0, Enumerable_FirstOrDefault_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m66471CB2F82DEBA163B8D50CC0A17D530B1A93A2_RuntimeMethod_var);
		return L_1;
	}
}
// XCSJ.PluginSMS.Kernel.Transition[] XCSJ.PluginSMS.Kernel.StateData::get_transitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* StateData_get_transitions_m920B48C61AC329BDA864BF56DD8EC7B84874FE0C (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_mB15AC81D75CDC7E3DBCF40BC8BEF6F9176AD8AC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		TransitionU5BU5D_tDFA20CC6E8FF2F9FEF9B63C9840E6B16C3332471* L_1;
		L_1 = Enumerable_ToArray_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_mB15AC81D75CDC7E3DBCF40BC8BEF6F9176AD8AC6(L_0, Enumerable_ToArray_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_mB15AC81D75CDC7E3DBCF40BC8BEF6F9176AD8AC6_RuntimeMethod_var);
		return L_1;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_get_parent_mA7BF2632BB6D31E022660C00E5296BA24220F871 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = __this->___U3CparentU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_parent(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_value, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_value;
		__this->___U3CparentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateData::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* StateData_get_state_m675B2DD346D1418B2A55C793F3E0B5D7E53756EF (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->___U3CstateU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_state(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_state_m153F604D5B567784BC7E830A6ECAE92EE1A2DDFD (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Object XCSJ.PluginSMS.Kernel.StateData::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateData_get_tag_m5448BB27103A19B6ADD2AD0FA43A8EB053C0545D (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CtagU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_tag(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_tag_m4C652C0661D5FA020E3533FFE7EE5DAA8AE3AEAF (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CtagU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtagU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::Init(UnityEngine.GameObject,XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_Init_m6E130869EFF705EB386A5E16A3266CE8656460F7 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___1_stateCollection, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		StateData_set_gameObject_m7DCDA7F8C6E9DCF1B9F5624FD5970FEC44F14D52_inline(__this, L_0, NULL);
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_1 = ___1_stateCollection;
		StateData_set_stateCollection_m0073FD76DB7A21B6F121E232BBCE0AAB39873CC6_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::Init(XCSJ.PluginSMS.Kernel.StateData,XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_Init_m97705F4817911B0C6EAE1F2509E0115F48D0C6ED (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_parent, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___1_stateCollection, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_parent;
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(__this, L_0, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = ___0_parent;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = StateData_get_gameObject_m1E2656260C263CFE1092D12F36DB7F65FD9C27CB_inline(L_1, NULL);
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_3 = ___1_stateCollection;
		StateData_Init_m6E130869EFF705EB386A5E16A3266CE8656460F7(__this, L_2, L_3, NULL);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Release(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Release_mE13ABDBE91085F5166493DAF0B0D52B45D9777B3 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(__this, L_0, NULL);
		return __this;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Entry(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Entry_mB2894B007562C43083ACDBA444950AEDDF433500 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(__this, L_0, NULL);
		return __this;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Update(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Update_mD10C9E08DCD894479CD3715296FD956F5AEFA312 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m8CA84167A604374CCF6AB391123582AD024331AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		NullCheck(L_0);
		HashSet_1_Clear_m8CA84167A604374CCF6AB391123582AD024331AF(L_0, HashSet_1_Clear_m8CA84167A604374CCF6AB391123582AD024331AF_RuntimeMethod_var);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = ___0_stateData;
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(__this, L_1, NULL);
		return __this;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Exit(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Exit_mD5D7E61EC9BC72A4D012790890861794054CE98B (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(__this, L_0, NULL);
		return __this;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::WillTransiton(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_WillTransiton_m717F03EF6251DDDF580EA0B287F5A52CB28856F1 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_transition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mDD7A76422E6B98C7C2DB77A50F10368B1D8C60DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_transition;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mDD7A76422E6B98C7C2DB77A50F10368B1D8C60DF(L_0, L_1, HashSet_1_Add_mDD7A76422E6B98C7C2DB77A50F10368B1D8C60DF_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateData::GetInTransitions(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* StateData_GetInTransitions_mA52DF4E8766CAB96C79FC537AAB3E095A832B9AA (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateData_U3CGetInTransitionsU3Eb__34_0_mF0E7BFD5C08B8AC7D2BE425B6E301B98EB94FA2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_state;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_2 = (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE*)il2cpp_codegen_object_new(List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16(L_2, List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16_RuntimeMethod_var);
		return L_2;
	}

IL_000e:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___0_state;
		NullCheck(L_3);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_4 = L_3->____inTransitions_35;
		Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A* L_5 = (Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A*)il2cpp_codegen_object_new(Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m28C006F5DBAAEC2C25C0251B79A46BF6265348CC(L_5, __this, (intptr_t)((void*)StateData_U3CGetInTransitionsU3Eb__34_0_mF0E7BFD5C08B8AC7D2BE425B6E301B98EB94FA2E_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B(L_4, L_5, Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B_RuntimeMethod_var);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_7;
		L_7 = Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900(L_6, Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900_RuntimeMethod_var);
		return L_7;
	}
}
// System.Collections.Generic.List`1<XCSJ.PluginSMS.Kernel.Transition> XCSJ.PluginSMS.Kernel.StateData::GetOutTransitions(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* StateData_GetOutTransitions_m2249B9D02DF76C8FED43F04516A69A3814D821F7 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateData_U3CGetOutTransitionsU3Eb__35_0_mC7F09D2E957FB75C804ECB116474D36EB824186C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_state;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_2 = (List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE*)il2cpp_codegen_object_new(List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16(L_2, List_1__ctor_m088B95ABB6A2EE77771C5560A9111254D7985E16_RuntimeMethod_var);
		return L_2;
	}

IL_000e:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___0_state;
		NullCheck(L_3);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_4 = L_3->____outTransitions_36;
		Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A* L_5 = (Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A*)il2cpp_codegen_object_new(Func_2_tA2E8FB21C39188FAD9EEF29ED8C482A92FE3F40A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m28C006F5DBAAEC2C25C0251B79A46BF6265348CC(L_5, __this, (intptr_t)((void*)StateData_U3CGetOutTransitionsU3Eb__35_0_mC7F09D2E957FB75C804ECB116474D36EB824186C_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B(L_4, L_5, Enumerable_Where_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m24A4CF3A9AD0BF117F041C207BFF054E19B3C43B_RuntimeMethod_var);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_7;
		L_7 = Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900(L_6, Enumerable_ToList_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m4C1980FEE2E0B1A1048AC3AFD210FF8BB9F3D900_RuntimeMethod_var);
		return L_7;
	}
}
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.StateData::get_workState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* StateData_get_workState_m1334CD48534AC8562EAAE1AD48C73157827531DF (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->___U3CworkStateU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_workState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_workState_mAB6478C5AFC85C605ED749E6B4950623D46A9C2B (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_value;
		__this->___U3CworkStateU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CworkStateU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.EWorkMode XCSJ.PluginSMS.Kernel.StateData::get_workMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateData_get_workMode_mFDD6AA7084727AD1C90AB04E1C905054E9DFAD56 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CworkModeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::set_workMode(XCSJ.PluginSMS.Kernel.EWorkMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CworkModeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// XCSJ.PluginSMS.Kernel.EWorkMode XCSJ.PluginSMS.Kernel.StateData::XCSJ.PluginSMS.Kernel.IWorkMode.get_workMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateData_XCSJ_PluginSMS_Kernel_IWorkMode_get_workMode_m9BC791F61DA6B9A6C12A7260A390B053681EE33B (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = StateData_get_workMode_mFDD6AA7084727AD1C90AB04E1C905054E9DFAD56_inline(__this, NULL);
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::XCSJ.PluginSMS.Kernel.IWorkMode.set_workMode(XCSJ.PluginSMS.Kernel.EWorkMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData_XCSJ_PluginSMS_Kernel_IWorkMode_set_workMode_mCF7A1D8F5228B4D53DFC2CCFCBBE823DC19B4026 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline(__this, L_0, NULL);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Clone_m12C7505E07BB325D12C7E1C99A9CCD38A8CB9D57 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateData_t952197905E4AABB8E0898C7088482385F5B08200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* V_0 = NULL;
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = (StateData_t952197905E4AABB8E0898C7088482385F5B08200*)il2cpp_codegen_object_new(StateData_t952197905E4AABB8E0898C7088482385F5B08200_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StateData__ctor_mC0F9A31366265108CB99DF1034B9097C4F96AED2(L_0, NULL);
		V_0 = L_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = V_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_2;
		L_2 = StateData_get_parent_mA7BF2632BB6D31E022660C00E5296BA24220F871_inline(__this, NULL);
		NullCheck(L_1);
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(L_1, L_2, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = StateData_get_gameObject_m1E2656260C263CFE1092D12F36DB7F65FD9C27CB_inline(__this, NULL);
		NullCheck(L_3);
		StateData_set_gameObject_m7DCDA7F8C6E9DCF1B9F5624FD5970FEC44F14D52_inline(L_3, L_4, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_5 = V_0;
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_6;
		L_6 = StateData_get_stateCollection_mF4D4CF98D0EF259C330EFEE13B96E8384DA22096_inline(__this, NULL);
		NullCheck(L_5);
		StateData_set_stateCollection_m0073FD76DB7A21B6F121E232BBCE0AAB39873CC6_inline(L_5, L_6, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = StateData_get_tag_m5448BB27103A19B6ADD2AD0FA43A8EB053C0545D_inline(__this, NULL);
		NullCheck(L_7);
		StateData_set_tag_m4C652C0661D5FA020E3533FFE7EE5DAA8AE3AEAF_inline(L_7, L_8, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_9 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10;
		L_10 = StateData_get_workState_m1334CD48534AC8562EAAE1AD48C73157827531DF_inline(__this, NULL);
		NullCheck(L_9);
		StateData_set_workState_mAB6478C5AFC85C605ED749E6B4950623D46A9C2B_inline(L_9, L_10, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_11 = V_0;
		int32_t L_12;
		L_12 = StateData_get_workMode_mFDD6AA7084727AD1C90AB04E1C905054E9DFAD56_inline(__this, NULL);
		NullCheck(L_11);
		StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline(L_11, L_12, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_13 = V_0;
		return L_13;
	}
}
// System.Object XCSJ.PluginSMS.Kernel.StateData::XCSJ.Interfaces.IClone.Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateData_XCSJ_Interfaces_IClone_Clone_m3C971CBB74C82D2813ED0598EF9A3B0B104A9DD2 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0;
		L_0 = StateData_Clone_m12C7505E07BB325D12C7E1C99A9CCD38A8CB9D57(__this, NULL);
		return L_0;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Clone(XCSJ.PluginSMS.Kernel.StateData,XCSJ.PluginSMS.Kernel.EWorkMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Clone_mDE7A4FEE9513D3DE1D24C2BE6DE867C0C417E7A9 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, int32_t ___1_workMode, const RuntimeMethod* method) 
{
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* V_0 = NULL;
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (StateData_t952197905E4AABB8E0898C7088482385F5B08200*)NULL;
	}

IL_0005:
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = ___0_stateData;
		NullCheck(L_1);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_2;
		L_2 = StateData_Clone_m12C7505E07BB325D12C7E1C99A9CCD38A8CB9D57(L_1, NULL);
		V_0 = L_2;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_3 = V_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_4 = ___0_stateData;
		NullCheck(L_3);
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(L_3, L_4, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_5 = V_0;
		int32_t L_6 = ___1_workMode;
		NullCheck(L_5);
		StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline(L_5, L_6, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_7 = V_0;
		return L_7;
	}
}
// XCSJ.PluginSMS.Kernel.StateData XCSJ.PluginSMS.Kernel.StateData::Clone(XCSJ.PluginSMS.Kernel.StateData,XCSJ.PluginSMS.Kernel.EWorkMode,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_Clone_mAFA905C08E189EF5D0F360DD5402100AB9A2D1FD (StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, int32_t ___1_workMode, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___2_workState, const RuntimeMethod* method) 
{
	StateData_t952197905E4AABB8E0898C7088482385F5B08200* V_0 = NULL;
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_stateData;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (StateData_t952197905E4AABB8E0898C7088482385F5B08200*)NULL;
	}

IL_0005:
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = ___0_stateData;
		NullCheck(L_1);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_2;
		L_2 = StateData_Clone_m12C7505E07BB325D12C7E1C99A9CCD38A8CB9D57(L_1, NULL);
		V_0 = L_2;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_3 = V_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_4 = ___0_stateData;
		NullCheck(L_3);
		StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline(L_3, L_4, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_5 = V_0;
		int32_t L_6 = ___1_workMode;
		NullCheck(L_5);
		StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline(L_5, L_6, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_7 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8 = ___2_workState;
		NullCheck(L_7);
		StateData_set_workState_mAB6478C5AFC85C605ED749E6B4950623D46A9C2B_inline(L_7, L_8, NULL);
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_9 = V_0;
		return L_9;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.StateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateData__ctor_mC0F9A31366265108CB99DF1034B9097C4F96AED2 (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m5425237EA59DD74FE6177CB1313F0C8A01FD6A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = (HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9*)il2cpp_codegen_object_new(HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m5425237EA59DD74FE6177CB1313F0C8A01FD6A56(L_0, HashSet_1__ctor_m5425237EA59DD74FE6177CB1313F0C8A01FD6A56_RuntimeMethod_var);
		__this->___transitionSet_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transitionSet_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateData::<GetInTransitions>b__34_0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateData_U3CGetInTransitionsU3Eb__34_0_mF0E7BFD5C08B8AC7D2BE425B6E301B98EB94FA2E (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7(L_0, L_1, HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.StateData::<GetOutTransitions>b__35_0(XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateData_U3CGetOutTransitionsU3Eb__35_0_mC7F09D2E957FB75C804ECB116474D36EB824186C (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1195D4D1EB4F40704C90DFCAE1DF82ACF8F340B9* L_0 = __this->___transitionSet_2;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___0_t;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7(L_0, L_1, HashSet_1_Contains_mBD7EBC50866E2410210828E48CBB227E9C7DF2E7_RuntimeMethod_var);
		return L_2;
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
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.Transition::get_transitionCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* Transition_get_transitionCollection_m30452B833AAE717BD2519DF6B04071B95CA17E69 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(__this, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		return ((StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)IsInstClass((RuntimeObject*)L_0, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84_il2cpp_TypeInfo_var));
	}
}
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::get_inState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____inState_30;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::set_inState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_set_inState_mD61D48E480CDC6887A305339B7A551E78D0DC0D2 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) 
{
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____inState_30;
		V_0 = L_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_value;
		__this->____inState_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inState_30), (void*)L_1);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = V_0;
		Transition_OnUpdatedInState_m2896C603A861D8330D9E3D8AD25EDD39A90DC308(__this, L_2, NULL);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.IState XCSJ.PluginSMS.Kernel.Transition::XCSJ.PluginSMS.Kernel.ITransition.get_inState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transition_XCSJ_PluginSMS_Kernel_ITransition_get_inState_mB27C6B3763FCA0C517131945096F15431D46A272 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____inState_30;
		return L_0;
	}
}
// XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.Transition::get_outState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____outState_31;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::set_outState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_set_outState_m30091C72D0FC06BDB105944D8F447D4E4B45890D (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) 
{
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____outState_31;
		V_0 = L_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_value;
		__this->____outState_31 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outState_31), (void*)L_1);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = V_0;
		Transition_OnUpdatedOutState_mA1EE77408590E65E8500EA3B84E4546DA3CDBD72(__this, L_2, NULL);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.IState XCSJ.PluginSMS.Kernel.Transition::XCSJ.PluginSMS.Kernel.ITransition.get_outState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transition_XCSJ_PluginSMS_Kernel_ITransition_get_outState_m7F48484B8F64591D54EA5275AAF62948C7AF2A7F (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____outState_31;
		return L_0;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onWillDeleteTransition(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onWillDeleteTransition_mE0E00A82F25A344D390D0784493937932FD5E11B (Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_0 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_1 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_2 = NULL;
	{
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillDeleteTransition_32;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_1 = V_0;
		V_1 = L_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_2 = V_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)Castclass((RuntimeObject*)L_4, Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A_il2cpp_TypeInfo_var));
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_5 = V_2;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_6 = V_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillDeleteTransition_32), L_5, L_6);
		V_0 = L_7;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_8 = V_0;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)L_8) == ((RuntimeObject*)(Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onWillDeleteTransition(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onWillDeleteTransition_m96ED2FDC507EC8C7817F06EB46356ED83379F524 (Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_0 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_1 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* V_2 = NULL;
	{
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillDeleteTransition_32;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_1 = V_0;
		V_1 = L_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_2 = V_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)Castclass((RuntimeObject*)L_4, Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A_il2cpp_TypeInfo_var));
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_5 = V_2;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_6 = V_1;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillDeleteTransition_32), L_5, L_6);
		V_0 = L_7;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_8 = V_0;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)L_8) == ((RuntimeObject*)(Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::Delete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_Delete_m15EF43CBCC802ACF6F8DAF46F4D11337D50CD381 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, bool ___0_deleteObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* G_B2_0 = NULL;
	Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* G_B1_0 = NULL;
	{
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillDeleteTransition_32;
		Action_2_t95CA432ED296EFD41BB0A094E81CD91F64B8908A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0012;
	}

IL_000b:
	{
		bool L_2 = ___0_deleteObject;
		NullCheck(G_B2_0);
		Action_2_Invoke_m1A1393CF2C53884733F05FBE209EE87FF515FC04_inline(G_B2_0, __this, L_2, NULL);
	}

IL_0012:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3;
		L_3 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5;
		L_5 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		bool L_6 = ___0_deleteObject;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, RuntimeObject*, bool >::Invoke(37 /* System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::OnDelete(XCSJ.PluginCommonUtils.ComponentModel.IModel,System.Boolean) */, L_5, __this, L_6);
	}

IL_002d:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8;
		L_8 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10;
		L_10 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		bool L_11 = ___0_deleteObject;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker2< bool, RuntimeObject*, bool >::Invoke(37 /* System.Boolean XCSJ.PluginCommonUtils.ComponentModel.Model::OnDelete(XCSJ.PluginCommonUtils.ComponentModel.IModel,System.Boolean) */, L_10, __this, L_11);
	}

IL_0048:
	{
		V_0 = (State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)NULL;
		__this->____outState_31 = (State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outState_31), (void*)(State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_13 = V_0;
		__this->____inState_30 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inState_30), (void*)L_13);
		bool L_14 = ___0_deleteObject;
		bool L_15;
		L_15 = ComponentCollection_Delete_m76A305FE09EE8A44E7DE646E98284B04E94BE9F1(__this, L_14, NULL);
		return L_15;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnCreated_mDC62F4A172434C0C8467789CFC0E589A402F42BA (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		Transition_OnTransitionCreated_mCFF2375997D318633116DBD9D586BFC5B76BCE30(__this, NULL);
		Model_OnCreated_mADEE416CECB541EE2F010AC4CEC431E3551C28C1(__this, NULL);
		return;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::CallbackEvent(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_CallbackEvent_m41C0F8701A3772EB32F9C3C98567EB518669841A (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, String_t* ___0_eventName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A3D43CC535F58916DA998E8C92767524EEA2E69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B57126897C3A4D60E1E30DDEB52762370F0C6C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9EF4ADCFFCFB3C4D68908D580033781CFA6F92E);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_1 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* G_B6_0 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* G_B5_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B13_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B12_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B20_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B19_0 = NULL;
	{
		String_t* L_0 = ___0_eventName;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralB9EF4ADCFFCFB3C4D68908D580033781CFA6F92E, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_2 = ___0_eventName;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral2B57126897C3A4D60E1E30DDEB52762370F0C6C4, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___0_eventName;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral0A3D43CC535F58916DA998E8C92767524EEA2E69, NULL);
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0086;
	}

IL_0029:
	{
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_6 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0034;
		}
	}
	{
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B6_0);
		Action_1_Invoke_m969897A19DA4D157C7CE8CD3157464410A7F72DB_inline(G_B6_0, __this, NULL);
	}

IL_003a:
	{
		return (bool)1;
	}

IL_003c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___1_args;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___1_args;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)IsInstClass((RuntimeObject*)L_11, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var));
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_12 = V_0;
		if (L_12)
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_13 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_14 = L_13;
		G_B12_0 = L_14;
		if (L_14)
		{
			G_B13_0 = L_14;
			goto IL_0058;
		}
	}
	{
		goto IL_005f;
	}

IL_0058:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_15 = V_0;
		NullCheck(G_B13_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B13_0, __this, L_15, NULL);
	}

IL_005f:
	{
		return (bool)1;
	}

IL_0061:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___1_args;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___1_args;
		NullCheck(L_17);
		int32_t L_18 = 0;
		RuntimeObject* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = ((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)IsInstClass((RuntimeObject*)L_19, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var));
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_20 = V_1;
		if (L_20)
		{
			goto IL_0072;
		}
	}

IL_0070:
	{
		return (bool)0;
	}

IL_0072:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_21 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_22 = L_21;
		G_B19_0 = L_22;
		if (L_22)
		{
			G_B20_0 = L_22;
			goto IL_007d;
		}
	}
	{
		goto IL_0084;
	}

IL_007d:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_23 = V_1;
		NullCheck(G_B20_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B20_0, __this, L_23, NULL);
	}

IL_0084:
	{
		return (bool)1;
	}

IL_0086:
	{
		String_t* L_24 = ___0_eventName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = ___1_args;
		bool L_26;
		L_26 = ComponentCollection_CallbackEvent_m27A13531B1B74A6FB1E30233950523C9F28AA258(__this, L_24, L_25, NULL);
		return L_26;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::CloneFrom(XCSJ.PluginCommonUtils.ComponentModel.Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_CloneFrom_m7B1F6E7E49B8A1BCE2D918C78FC76386E13AA8FD (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* ___0_from, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_CloneFrom_m00D455494242D89BB3065ED4C8F5F1273DEA7CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* V_0 = NULL;
	{
		Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* L_0 = ___0_from;
		V_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*)IsInstSealed((RuntimeObject*)L_0, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var));
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* L_2 = ___0_from;
		bool L_3;
		L_3 = ComponentCollection_3_CloneFrom_m00D455494242D89BB3065ED4C8F5F1273DEA7CD7(__this, L_2, ComponentCollection_3_CloneFrom_m00D455494242D89BB3065ED4C8F5F1273DEA7CD7_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (bool)0;
	}

IL_0015:
	{
		return (bool)1;
	}
}
// XCSJ.PluginSMS.Kernel.Transition XCSJ.PluginSMS.Kernel.Transition::CloneWithInOutState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Transition_CloneWithInOutState_m9A89CAB74F4D0A7098D2DB64366E08D6A3619C88 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1;
		L_1 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_2;
		L_2 = Transition_CloneAndConnect_mD1BE01B83DF79F3BB400300604B4181DB77B2707(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// XCSJ.PluginSMS.Kernel.Transition XCSJ.PluginSMS.Kernel.Transition::CloneAndConnect(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* Transition_CloneAndConnect_mD1BE01B83DF79F3BB400300604B4181DB77B2707 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_Clone_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m67EF06315B1EC1E6E80F766C0340E938BD0424A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* V_0 = NULL;
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0;
		L_0 = Transition_get_transitionCollection_m30452B833AAE717BD2519DF6B04071B95CA17E69(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*)NULL;
	}

IL_000f:
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_2;
		L_2 = Model_Clone_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m67EF06315B1EC1E6E80F766C0340E938BD0424A3(__this, Model_Clone_TisTransition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_m67EF06315B1EC1E6E80F766C0340E938BD0424A3_RuntimeMethod_var);
		V_0 = L_2;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*)NULL;
	}

IL_0020:
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_5;
		L_5 = Transition_get_transitionCollection_m30452B833AAE717BD2519DF6B04071B95CA17E69(__this, NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_6 = ___0_inState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = ___1_outState;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_8 = V_0;
		NullCheck(L_5);
		bool L_9;
		L_9 = StateCollection_ConnectInternal_m2A90DFAE26AD4FDB8CDEF3D2B1FACD0D3A991FE5(L_5, L_6, L_7, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_10 = V_0;
		return L_10;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::ConnectInternal(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.StateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_ConnectInternal_mE426E20B3D210C532EEEC8EBCBC217011F360520 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___2_transitionCollection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_set_parent_m9D3587D79F40F8CA2582EEBE530B0A849646EE98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B4_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B3_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B7_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B6_0 = NULL;
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0 = ___2_transitionCollection;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0015;
		}
	}
	{
		goto IL_001c;
	}

IL_0015:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4 = ___0_inState;
		NullCheck(G_B4_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B4_0, __this, L_4, NULL);
	}

IL_001c:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = L_5;
		G_B6_0 = L_6;
		if (L_6)
		{
			G_B7_0 = L_6;
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0027:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = ___1_outState;
		NullCheck(G_B7_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B7_0, __this, L_7, NULL);
	}

IL_002e:
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_8 = ___2_transitionCollection;
		ComponentCollection_2_set_parent_m9D3587D79F40F8CA2582EEBE530B0A849646EE98(__this, L_8, ComponentCollection_2_set_parent_m9D3587D79F40F8CA2582EEBE530B0A849646EE98_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9 = ___0_inState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10 = ___1_outState;
		bool L_11;
		L_11 = Transition_Connect_m93BBC67D60F9485703B18618D5C613A21B24D444(__this, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::ConnectInternal(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_ConnectInternal_m68A72D6CB995A6C8F8DB160FB374CC30FCE0222C (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* ___2_transition, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_inState;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_1 = ___2_transition;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* >::Invoke(164 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AddOutTransition(XCSJ.PluginSMS.Kernel.Transition) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___1_outState;
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_4 = ___2_transition;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* >::Invoke(162 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AddInTransition(XCSJ.PluginSMS.Kernel.Transition) */, L_3, L_4);
		return L_5;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::XCSJ.PluginSMS.Kernel.ITransition.Connect(XCSJ.PluginSMS.Kernel.IState,XCSJ.PluginSMS.Kernel.IState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_XCSJ_PluginSMS_Kernel_ITransition_Connect_m03C86C28AEE2B2A6B43D79D6C378345985C8A4B2 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, RuntimeObject* ___0_inState, RuntimeObject* ___1_outState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_inState;
		RuntimeObject* L_1 = ___1_outState;
		bool L_2;
		L_2 = Transition_Connect_m93BBC67D60F9485703B18618D5C613A21B24D444(__this, ((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)IsInstClass((RuntimeObject*)L_0, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var)), ((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE*)IsInstClass((RuntimeObject*)L_1, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::TryGetRealInState(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_TryGetRealInState_m23845B697ACC1A03C89F61E8E6E275D42F319CAE (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** ___1_realInState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_0 = ___1_realInState;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_inState;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___0_inState;
		NullCheck(L_3);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_3, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_6 = ___1_realInState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = ___0_inState;
		NullCheck(L_7);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8;
		L_8 = VirtualFuncInvoker0< State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(168 /* XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.State::GetRealStateWhenAsInState() */, L_7);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_9 = ___1_realInState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_9);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_12 = ___1_realInState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_13 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_12);
		NullCheck(L_13);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14;
		L_14 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_13, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (L_15)
		{
			goto IL_003b;
		}
	}

IL_0039:
	{
		return (bool)0;
	}

IL_003b:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_16 = ___1_realInState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_17 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_16);
		NullCheck(L_17);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_18;
		L_18 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_17, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_19;
		L_19 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(__this, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0051:
	{
		return (bool)1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::TryGetRealOutState(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_TryGetRealOutState_m162CEB5B52EB0D154E5BFECCEF70FBF37AF93FB1 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_outState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** ___1_realOutState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_0 = ___1_realOutState;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_outState;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___0_outState;
		NullCheck(L_3);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_3, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_6 = ___1_realOutState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = ___0_outState;
		NullCheck(L_7);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8;
		L_8 = VirtualFuncInvoker0< State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(169 /* XCSJ.PluginSMS.Kernel.State XCSJ.PluginSMS.Kernel.State::GetRealStateWhenAsOutState() */, L_7);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_9 = ___1_realOutState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_9);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_12 = ___1_realOutState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_13 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_12);
		NullCheck(L_13);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14;
		L_14 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_13, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (L_15)
		{
			goto IL_003b;
		}
	}

IL_0039:
	{
		return (bool)0;
	}

IL_003b:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_16 = ___1_realOutState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_17 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_16);
		NullCheck(L_17);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_18;
		L_18 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_17, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_19;
		L_19 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(__this, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0061;
		}
	}
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_21;
		L_21 = Transition_get_transitionCollection_m30452B833AAE717BD2519DF6B04071B95CA17E69(__this, NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE** L_22 = ___1_realOutState;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_23 = *((State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE**)L_22);
		NullCheck(L_21);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, bool >::Invoke(158 /* System.Boolean XCSJ.PluginSMS.Kernel.State::ContainsInParent(XCSJ.PluginSMS.Kernel.IState,System.Boolean) */, L_21, L_23, (bool)0);
		if (L_24)
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		return (bool)1;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_Connected_m135F3166009E9F815E5C55BF742E1CF9FA74E81F (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(__this, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::ReadyConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_ReadyConnect_m71C4BB59DEAC08C5FAA85C9220C3B822D90510C4 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0;
		L_0 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(__this, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2;
		L_2 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4;
		L_4 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::Connect(XCSJ.PluginSMS.Kernel.State,XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_Connect_m93BBC67D60F9485703B18618D5C613A21B24D444 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___1_outState, const RuntimeMethod* method) 
{
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_1 = NULL;
	{
		bool L_0;
		L_0 = Transition_ReadyConnect_m71C4BB59DEAC08C5FAA85C9220C3B822D90510C4(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_inState;
		bool L_2;
		L_2 = Transition_TryGetRealInState_m23845B697ACC1A03C89F61E8E6E275D42F319CAE(__this, L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3 = ___1_outState;
		bool L_4;
		L_4 = Transition_TryGetRealOutState_m162CEB5B52EB0D154E5BFECCEF70FBF37AF93FB1(__this, L_3, (&V_1), NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_6 = V_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(161 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AllowConnectToInternal(XCSJ.PluginSMS.Kernel.State) */, L_5, L_6);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9 = V_1;
		bool L_10;
		L_10 = Transition_ConnectInternal_m68A72D6CB995A6C8F8DB160FB374CC30FCE0222C(__this, L_8, L_9, __this, NULL);
		return L_10;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::UpdateInState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_UpdateInState_m60879EF592088C2B6235FCF12A5AF3C4F32F2364 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_inState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B11_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B10_0 = NULL;
	{
		bool L_0;
		L_0 = Transition_Connected_m135F3166009E9F815E5C55BF742E1CF9FA74E81F(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_inState;
		bool L_2;
		L_2 = Transition_TryGetRealInState_m23845B697ACC1A03C89F61E8E6E275D42F319CAE(__this, L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3;
		L_3 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5;
		L_5 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		NullCheck(L_5);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_6;
		L_6 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_5, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9;
		L_9 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(161 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AllowConnectToInternal(XCSJ.PluginSMS.Kernel.State) */, L_8, L_9);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_11 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_12 = L_11;
		G_B10_0 = L_12;
		if (L_12)
		{
			G_B11_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_005a;
	}

IL_0053:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_13 = ___0_inState;
		NullCheck(G_B11_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B11_0, __this, L_13, NULL);
	}

IL_005a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14;
		L_14 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		NullCheck(L_14);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_15 = L_14->____outTransitions_36;
		NullCheck(L_15);
		bool L_16;
		L_16 = List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F(L_15, __this, List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* >::Invoke(164 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AddOutTransition(XCSJ.PluginSMS.Kernel.Transition) */, L_17, __this);
		return L_18;
	}
}
// System.Boolean XCSJ.PluginSMS.Kernel.Transition::UpdateOutState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transition_UpdateOutState_mCAB3684CE9422752CB4BCB1850EB0E4B5BD8E581 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_outState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B11_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B10_0 = NULL;
	{
		bool L_0;
		L_0 = Transition_Connected_m135F3166009E9F815E5C55BF742E1CF9FA74E81F(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = ___0_outState;
		bool L_2;
		L_2 = Transition_TryGetRealOutState_m162CEB5B52EB0D154E5BFECCEF70FBF37AF93FB1(__this, L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3;
		L_3 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_5;
		L_5 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		NullCheck(L_5);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_6;
		L_6 = ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40(L_5, ComponentCollection_2_get_parent_mE6219F99AA4C5573730DCE450644F508EF918D40_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_8;
		L_8 = Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline(__this, NULL);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(161 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AllowConnectToInternal(XCSJ.PluginSMS.Kernel.State) */, L_8, L_9);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_11 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_12 = L_11;
		G_B10_0 = L_12;
		if (L_12)
		{
			G_B11_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_005a;
	}

IL_0053:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_13 = ___0_outState;
		NullCheck(G_B11_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B11_0, __this, L_13, NULL);
	}

IL_005a:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14;
		L_14 = Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline(__this, NULL);
		NullCheck(L_14);
		List_1_tDD7A116E1C6F6BB8ED0B361E5D530996901C4DDE* L_15 = L_14->____inTransitions_35;
		NullCheck(L_15);
		bool L_16;
		L_16 = List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F(L_15, __this, List_1_Remove_mA4471339A8F44627E2205CD7E0B7034911DAF94F_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* >::Invoke(162 /* System.Boolean XCSJ.PluginSMS.Kernel.State::AddInTransition(XCSJ.PluginSMS.Kernel.Transition) */, L_17, __this);
		return L_18;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnTransitionEntry(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnTransitionEntry_m3CDE88823202F2DDE687F91C6CFCD6341924D7F0 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3COnTransitionEntryU3Eb__0_mBF08A376906A9BF2049D9A3ED1F432C6AD536977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* L_0 = (U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_m492093D2C5762C71F2D824831A932ED8661D7569(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* L_1 = V_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_2 = ___0_stateData;
		NullCheck(L_1);
		L_1->___stateData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___stateData_0), (void*)L_2);
		U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* L_3 = V_0;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_4 = (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*)il2cpp_codegen_object_new(Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3COnTransitionEntryU3Eb__0_mBF08A376906A9BF2049D9A3ED1F432C6AD536977_RuntimeMethod_var), NULL);
		ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F(__this, L_4, ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnTransitionExit(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnTransitionExit_m2AA463EF5FB0330ED2D7F19CA4E5CBBE8E192F43 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3COnTransitionExitU3Eb__0_m9F937D6C6DF8D89ED324849466638ADCF72ECC82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* L_0 = (U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_m60E939260FF29CDA2D859D6734FBBCB8BD942FBF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* L_1 = V_0;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_2 = ___0_stateData;
		NullCheck(L_1);
		L_1->___stateData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___stateData_0), (void*)L_2);
		U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* L_3 = V_0;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_4 = (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*)il2cpp_codegen_object_new(Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3COnTransitionExitU3Eb__0_m9F937D6C6DF8D89ED324849466638ADCF72ECC82_RuntimeMethod_var), NULL);
		ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F(__this, L_4, ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onTransitionCreated(System.Action`1<XCSJ.PluginSMS.Kernel.Transition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onTransitionCreated_m473A557F9D7C4B832E247ED952CE3EECB102F26F (Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_0 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_1 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_2 = NULL;
	{
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_1 = V_0;
		V_1 = L_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_2 = V_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)Castclass((RuntimeObject*)L_4, Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD_il2cpp_TypeInfo_var));
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_5 = V_2;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_6 = V_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33), L_5, L_6);
		V_0 = L_7;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_8 = V_0;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)L_8) == ((RuntimeObject*)(Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onTransitionCreated(System.Action`1<XCSJ.PluginSMS.Kernel.Transition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onTransitionCreated_mA5B779A83892F5F72C082B6FD9D50A2E231F9965 (Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_0 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_1 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* V_2 = NULL;
	{
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_1 = V_0;
		V_1 = L_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_2 = V_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)Castclass((RuntimeObject*)L_4, Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD_il2cpp_TypeInfo_var));
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_5 = V_2;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_6 = V_1;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33), L_5, L_6);
		V_0 = L_7;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_8 = V_0;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)L_8) == ((RuntimeObject*)(Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onWillUpdateInState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onWillUpdateInState_m6C565D470A12CC40E63DEE5C5AD8719623C2C97E (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onWillUpdateInState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onWillUpdateInState_m3D4BB90AB3D03126999EC80A481DC35B67B5364F (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateInState_34), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onUpdatedInState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onUpdatedInState_m76630D0FDA75B6330FD5D53D31A3C0BA634FB0AA (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onUpdatedInState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onUpdatedInState_m5A04463DCE4367E2FE66B55544FF14190C8D61BF (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onWillUpdateOutState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onWillUpdateOutState_mDD5787800EB2B68AAF4F66F143E976AB99D77392 (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onWillUpdateOutState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onWillUpdateOutState_mBDAB0B8094A8EFCE4663EA090A1C2DBE69EF6668 (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onWillUpdateOutState_36), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::add_onUpdatedOutState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_add_onUpdatedOutState_m43FD6BA6F5C30D8394A6037BD95D5EDB55F71A54 (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::remove_onUpdatedOutState(System.Action`2<XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_remove_onUpdatedOutState_mE89DF59D3990C74972F638CA6139F5B0BCA1E9D3 (Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_1 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* V_2 = NULL;
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_0 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_1 = V_0;
		V_1 = L_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_2 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)Castclass((RuntimeObject*)L_4, Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497_il2cpp_TypeInfo_var));
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_5 = V_2;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_6 = V_1;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*>((&((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37), L_5, L_6);
		V_0 = L_7;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_8 = V_0;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_8) == ((RuntimeObject*)(Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnTransitionCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnTransitionCreated_mCFF2375997D318633116DBD9D586BFC5B76BCE30 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnTransitionCreatedU3Eb__50_0_m05B433515B5CC27A041DFAFAF1221DF4E5171C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* G_B2_0 = NULL;
	Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* G_B2_1 = NULL;
	Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* G_B1_0 = NULL;
	Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* G_B1_1 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* G_B4_0 = NULL;
	Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* G_B3_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var);
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_0 = ((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_1;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var);
		U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* L_2 = ((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_3 = (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*)il2cpp_codegen_object_new(Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3COnTransitionCreatedU3Eb__50_0_m05B433515B5CC27A041DFAFAF1221DF4E5171C21_RuntimeMethod_var), NULL);
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_4 = L_3;
		((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F(G_B2_1, G_B2_0, ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_5 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onTransitionCreated_33;
		Action_1_t8E57F7749F0817CB7B5BF7CE4231E7747E4C20DD* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m969897A19DA4D157C7CE8CD3157464410A7F72DB_inline(G_B4_0, __this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnUpdatedInState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnUpdatedInState_m2896C603A861D8330D9E3D8AD25EDD39A90DC308 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_U3COnUpdatedInStateU3Eb__0_m2B6962101A46F81DEA9C2544276F6ADC900D78AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B6_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_0 = (U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass51_0__ctor_m20D3140DF56B8AC9AB26AF5F0CE487E02B53EBD3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_1 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = ___0_oldState;
		NullCheck(L_1);
		L_1->___oldState_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___oldState_0), (void*)L_2);
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_3 = V_0;
		NullCheck(L_3);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4 = L_3->___oldState_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_6 = V_0;
		NullCheck(L_6);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = L_6->___oldState_0;
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_8 = V_0;
		NullCheck(L_8);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9 = L_8->___oldState_0;
		NullCheck(L_7);
		VirtualActionInvoker2< Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(176 /* System.Void XCSJ.PluginSMS.Kernel.State::OnUpdatedOutTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State) */, L_7, __this, L_9);
	}

IL_002c:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10 = __this->____inState_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_12 = __this->____inState_30;
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_13 = V_0;
		NullCheck(L_13);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14 = L_13->___oldState_0;
		NullCheck(L_12);
		VirtualActionInvoker2< Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(176 /* System.Void XCSJ.PluginSMS.Kernel.State::OnUpdatedOutTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State) */, L_12, __this, L_14);
	}

IL_004b:
	{
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_15 = V_0;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_16 = (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*)il2cpp_codegen_object_new(Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass51_0_U3COnUpdatedInStateU3Eb__0_m2B6962101A46F81DEA9C2544276F6ADC900D78AC_RuntimeMethod_var), NULL);
		ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F(__this, L_16, ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_17 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedInState_35;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_18 = L_17;
		G_B5_0 = L_18;
		if (L_18)
		{
			G_B6_0 = L_18;
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0067:
	{
		U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* L_19 = V_0;
		NullCheck(L_19);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_20 = L_19->___oldState_0;
		NullCheck(G_B6_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B6_0, __this, L_20, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::OnUpdatedOutState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnUpdatedOutState_mA1EE77408590E65E8500EA3B84E4546DA3CDBD72 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass52_0_U3COnUpdatedOutStateU3Eb__0_m141839FDB270DC4AD36CAA2A54BF9644756C527D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* V_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B6_0 = NULL;
	Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_0 = (U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass52_0__ctor_m44C05479C914B388D23C4168B14B63A4BE06E1E7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_1 = V_0;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_2 = ___0_oldState;
		NullCheck(L_1);
		L_1->___oldState_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___oldState_0), (void*)L_2);
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_3 = V_0;
		NullCheck(L_3);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4 = L_3->___oldState_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_6 = V_0;
		NullCheck(L_6);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_7 = L_6->___oldState_0;
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_8 = V_0;
		NullCheck(L_8);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_9 = L_8->___oldState_0;
		NullCheck(L_7);
		VirtualActionInvoker2< Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(175 /* System.Void XCSJ.PluginSMS.Kernel.State::OnUpdatedInTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State) */, L_7, __this, L_9);
	}

IL_002c:
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_10 = __this->____outState_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_12 = __this->____outState_31;
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_13 = V_0;
		NullCheck(L_13);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_14 = L_13->___oldState_0;
		NullCheck(L_12);
		VirtualActionInvoker2< Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1*, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(175 /* System.Void XCSJ.PluginSMS.Kernel.State::OnUpdatedInTransition(XCSJ.PluginSMS.Kernel.Transition,XCSJ.PluginSMS.Kernel.State) */, L_12, __this, L_14);
	}

IL_004b:
	{
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_15 = V_0;
		Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605* L_16 = (Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605*)il2cpp_codegen_object_new(Action_1_t0E3678257BF5E33E6D062DB75B5C3F3E4179A605_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mC290E0C6176DAA31E4DB1B8A15518969291A8052(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass52_0_U3COnUpdatedOutStateU3Eb__0_m141839FDB270DC4AD36CAA2A54BF9644756C527D_RuntimeMethod_var), NULL);
		ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F(__this, L_16, ComponentCollection_3_ForEachComponents_m31E3D6B89A9CFD3701BC977B5CC803E4D5BFB61F_RuntimeMethod_var);
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_17 = ((Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_StaticFields*)il2cpp_codegen_static_fields_for(Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1_il2cpp_TypeInfo_var))->___onUpdatedOutState_37;
		Action_2_t8AD26B9FA2101FFA13F4CA7C247E5356B4FDE497* L_18 = L_17;
		G_B5_0 = L_18;
		if (L_18)
		{
			G_B6_0 = L_18;
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0067:
	{
		U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* L_19 = V_0;
		NullCheck(L_19);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_20 = L_19->___oldState_0;
		NullCheck(G_B6_0);
		Action_2_Invoke_mF97D665412807CBB7EF6F271EDD808608C3C29BA_inline(G_B6_0, __this, L_20, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition__ctor_mBE7457A49F818E17ECAB670889ACC0BDA577E3A6 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_3__ctor_mC8E4F409011ACE6432C15CC9056721D2176A9908_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComponentCollection_3__ctor_mC8E4F409011ACE6432C15CC9056721D2176A9908(__this, ComponentCollection_3__ctor_mC8E4F409011ACE6432C15CC9056721D2176A9908_RuntimeMethod_var);
		return;
	}
}
// XCSJ.PluginSMS.Kernel.TransitionComponent[] XCSJ.PluginSMS.Kernel.Transition::XCSJ.PluginSMS.Kernel.IComponentCollection<XCSJ.PluginSMS.Kernel.TransitionComponent>.get_components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* Transition_XCSJ_PluginSMS_Kernel_IComponentCollectionU3CXCSJ_PluginSMS_Kernel_TransitionComponentU3E_get_components_m383AE713D8C2FCAD2262AEC83DE356F7969D48D6 (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_1_get_components_mFFC47C602DD45EF1B5976203F7CA506DA5955A35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionComponentU5BU5D_t7E75C1942F7AF00949D92C14B5E73AD2E2CD120C* L_0;
		L_0 = ComponentCollection_1_get_components_mFFC47C602DD45EF1B5976203F7CA506DA5955A35(__this, ComponentCollection_1_get_components_mFFC47C602DD45EF1B5976203F7CA506DA5955A35_RuntimeMethod_var);
		return L_0;
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
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m492093D2C5762C71F2D824831A932ED8661D7569 (U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass33_0::<OnTransitionEntry>b__0(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3COnTransitionEntryU3Eb__0_mBF08A376906A9BF2049D9A3ED1F432C6AD536977 (U3CU3Ec__DisplayClass33_0_tB3FAD08C3F85A92A8F7EDB1B0C6D5B034E45F2E1* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_0 = ___0_c;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = __this->___stateData_0;
		NullCheck(L_0);
		VirtualActionInvoker1< StateData_t952197905E4AABB8E0898C7088482385F5B08200* >::Invoke(98 /* System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionEntry(XCSJ.PluginSMS.Kernel.StateData) */, L_0, L_1);
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
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m60E939260FF29CDA2D859D6734FBBCB8BD942FBF (U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass34_0::<OnTransitionExit>b__0(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3COnTransitionExitU3Eb__0_m9F937D6C6DF8D89ED324849466638ADCF72ECC82 (U3CU3Ec__DisplayClass34_0_t3B51AA4ADA30724A8C25AF24613D12B2F7450890* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_0 = ___0_c;
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_1 = __this->___stateData_0;
		NullCheck(L_0);
		VirtualActionInvoker1< StateData_t952197905E4AABB8E0898C7088482385F5B08200* >::Invoke(99 /* System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionExit(XCSJ.PluginSMS.Kernel.StateData) */, L_0, L_1);
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
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2FD543AA757FC776739741F5C8454D46F0113305 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* L_0 = (U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044*)il2cpp_codegen_object_new(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8475A1E899BDAD02FCD6637E3CE57A2F7D4A6134(L_0, NULL);
		((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8475A1E899BDAD02FCD6637E3CE57A2F7D4A6134 (U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c::<OnTransitionCreated>b__50_0(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnTransitionCreatedU3Eb__50_0_m05B433515B5CC27A041DFAFAF1221DF4E5171C21 (U3CU3Ec_t7B4B7DC03EBF5F937979EFAFA99947460A4A4044* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_0 = ___0_c;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(97 /* System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionCreated() */, L_0);
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
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m20D3140DF56B8AC9AB26AF5F0CE487E02B53EBD3 (U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass51_0::<OnUpdatedInState>b__0(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3COnUpdatedInStateU3Eb__0_m2B6962101A46F81DEA9C2544276F6ADC900D78AC (U3CU3Ec__DisplayClass51_0_t3E1BC2853650F157177C3943537E48517805C1BA* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_0 = ___0_c;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = __this->___oldState_0;
		NullCheck(L_0);
		VirtualActionInvoker1< State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(100 /* System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnUpdatedInState(XCSJ.PluginSMS.Kernel.State) */, L_0, L_1);
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
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m44C05479C914B388D23C4168B14B63A4BE06E1E7 (U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.Transition/<>c__DisplayClass52_0::<OnUpdatedOutState>b__0(XCSJ.PluginSMS.Kernel.TransitionComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3COnUpdatedOutStateU3Eb__0_m141839FDB270DC4AD36CAA2A54BF9644756C527D (U3CU3Ec__DisplayClass52_0_t07372A8E08B49488DB98FBFBC0C1DBF92D38491C* __this, TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* ___0_c, const RuntimeMethod* method) 
{
	{
		TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* L_0 = ___0_c;
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_1 = __this->___oldState_0;
		NullCheck(L_0);
		VirtualActionInvoker1< State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* >::Invoke(101 /* System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnUpdatedOutState(XCSJ.PluginSMS.Kernel.State) */, L_0, L_1);
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
// XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.TransitionComponent::XCSJ.PluginSMS.Kernel.IGetStateCollection.get_stateCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* TransitionComponent_XCSJ_PluginSMS_Kernel_IGetStateCollection_get_stateCollection_m0F88779C07050FCAA90451D01E5FAD58DB70F6D3 (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGetStateCollection_t314EBE6CC85B7D9A545FA370D80520B4EE7EF6EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* G_B4_0 = NULL;
	State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* G_B3_0 = NULL;
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_0;
		L_0 = Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E(__this, Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)NULL;
	}

IL_000f:
	{
		Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* L_2;
		L_2 = Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E(__this, Component_1_get_parent_mF154CA21EA664B211E73C5ED6A333BF337E0050E_RuntimeMethod_var);
		NullCheck(L_2);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_3;
		L_3 = ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E(L_2, ComponentCollection_2_get_parent_m23D3C4FB0083AFB18FC1F6408D1301E4647AA00E_RuntimeMethod_var);
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
	}
	{
		return (StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84*)NULL;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_5;
		L_5 = InterfaceFuncInvoker0< StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* >::Invoke(0 /* XCSJ.PluginSMS.Kernel.StateCollection XCSJ.PluginSMS.Kernel.IGetStateCollection::get_stateCollection() */, IGetStateCollection_t314EBE6CC85B7D9A545FA370D80520B4EE7EF6EF_il2cpp_TypeInfo_var, G_B4_0);
		return L_5;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent_OnTransitionCreated_m1FF41FDDB3BDEE201A4291C1751C2EA48DACD6FD (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionEntry(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent_OnTransitionEntry_mEBEF621D0BCF9C0C089FBA48786D7678333428EF (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnTransitionExit(XCSJ.PluginSMS.Kernel.StateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent_OnTransitionExit_mF67464497DA20E24597F13886B54DDAA50DF01F6 (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_stateData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnUpdatedInState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent_OnUpdatedInState_mFE765201D9F762421FC0339FCB66FF24344FFA67 (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::OnUpdatedOutState(XCSJ.PluginSMS.Kernel.State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent_OnUpdatedOutState_m9B9B4BAD0B59E15E44062A7F8460A5622C27DCA8 (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_oldState, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void XCSJ.PluginSMS.Kernel.TransitionComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionComponent__ctor_m03FD01628319D675871310062184E47ED31F86F9 (TransitionComponent_t3ADEBA5E65AF97CCEB8144C30705E97FBAA4B402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_1__ctor_m8130F98C16E81429F8D5D4664F9E1D18B0B3178D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_1__ctor_m8130F98C16E81429F8D5D4664F9E1D18B0B3178D(__this, Component_1__ctor_m8130F98C16E81429F8D5D4664F9E1D18B0B3178D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Model_get_enable_mE777A219B813439C679F7CBB15A56949659F4BC4_inline (Model_t9387C6CA3ECEFD03009BEF3B0AC81C53C75A61CE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____enable_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* StateGroup_get_children_m69B736D7AE3D7EFD2D6F3B2CF010856B4D41FE9F_inline (StateGroup_t2247D8355014E15DD926377CC04365C2ED332A05* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0A09242EF5ABE22825E00FB31D1B953B8204E3B6* L_0 = __this->____children_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* StateData_get_stateCollection_mF4D4CF98D0EF259C330EFEE13B96E8384DA22096_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0 = __this->___U3CstateCollectionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_gameObject_m7DCDA7F8C6E9DCF1B9F5624FD5970FEC44F14D52_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CgameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_stateCollection_m0073FD76DB7A21B6F121E232BBCE0AAB39873CC6_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* ___0_value, const RuntimeMethod* method) 
{
	{
		StateCollection_t79E2173B2F86FBE69D00C7ED260BA19A3BBCFC84* L_0 = ___0_value;
		__this->___U3CstateCollectionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateCollectionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_parent_m35B3A51252B17DBEF3C63001BA72AD02B8272D2C_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, StateData_t952197905E4AABB8E0898C7088482385F5B08200* ___0_value, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = ___0_value;
		__this->___U3CparentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StateData_get_gameObject_m1E2656260C263CFE1092D12F36DB7F65FD9C27CB_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CgameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StateData_get_workMode_mFDD6AA7084727AD1C90AB04E1C905054E9DFAD56_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CworkModeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_workMode_m8A58C32915F23261D76EADC8BEE247AB06DD3363_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CworkModeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateData_t952197905E4AABB8E0898C7088482385F5B08200* StateData_get_parent_mA7BF2632BB6D31E022660C00E5296BA24220F871_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		StateData_t952197905E4AABB8E0898C7088482385F5B08200* L_0 = __this->___U3CparentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StateData_get_tag_m5448BB27103A19B6ADD2AD0FA43A8EB053C0545D_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CtagU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_tag_m4C652C0661D5FA020E3533FFE7EE5DAA8AE3AEAF_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CtagU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtagU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* StateData_get_workState_m1334CD48534AC8562EAAE1AD48C73157827531DF_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->___U3CworkStateU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateData_set_workState_mAB6478C5AFC85C605ED749E6B4950623D46A9C2B_inline (StateData_t952197905E4AABB8E0898C7088482385F5B08200* __this, State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* ___0_value, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = ___0_value;
		__this->___U3CworkStateU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CworkStateU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_inState_m09019F5F5F025466D7E6A722DC58A657B44AC039_inline (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____inState_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* Transition_get_outState_m9661E81C5E03987A8213C11FBA9CF2772ECAF339_inline (Transition_t97A6D7FA9C3B05C2725FA533C1B7B4AC364679E1* __this, const RuntimeMethod* method) 
{
	{
		State_t8D90CC778CB73C3CCC996B02C5583D196F0DDECE* L_0 = __this->____outState_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
