﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B;
// System.Comparison`1<Cinemachine.CinemachineComponentBase>
struct Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073;
// System.Comparison`1<Cinemachine.CinemachineVirtualCameraBase>
struct Comparison_1_tFDCC716CBCDCFAFCFC8603334492DF55E9E767E9;
// System.Comparison`1<Cinemachine.CinemachineClearShot/Pair>
struct Comparison_1_t86619A9282704C17F06E1775BFB565310C364F4D;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tEC0D7891F01585BC992E380FEDE139A2FEEB1C1D;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_t404D2AF2D38681274B3783CCFE8103CC2AD8A790;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>
struct List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_tD11960D31B37E3E1E7900CD412637FCD8221ABA5;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t13875FE3163CFA961C09134FFAA2E0903229691A;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_tB774BAB8B129533A7AD9D22465C5D383A0A03AB5;
// System.Collections.Generic.List`1<ClipperLib.DoublePoint>
struct List_1_t40DAE9F94CC73F739E50DACB402F159DBA0AF7CD;
// System.Collections.Generic.List`1<ClipperLib.IntPoint>
struct List_1_tC143170EE25943366B2DA9D8910EC3E385E53814;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_t7047292520C88A40E765EA61E967062F583F6C2A;
// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>
struct List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2;
// System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution>
struct List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7;
// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>
struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5;
// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>
struct List_1_tAED568015081230FCEC357C56CB10520C53903F7;
// UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>
struct UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`2<Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera>
struct UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// System.Collections.Generic.List`1<ClipperLib.IntPoint>[]
struct List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932;
// System.Collections.Generic.List`1<UnityEngine.Vector2>[]
struct List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
// Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4;
// Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// ClipperLib.IntPoint[]
struct IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949;
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7;
// Cinemachine.ConfinerOven/PolygonSolution[]
struct PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F;
// Cinemachine.TargetPositionCache/CacheCurve/Item[]
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8;
// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem[]
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Cinemachine.BlendSourceVirtualCamera
struct BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83;
// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D;
// Cinemachine.CinemachineCore
struct CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534;
// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F;
// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9;
// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E;
// Cinemachine.CinemachineOrbitalTransposer
struct CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5;
// ClipperLib.ClipperOffset
struct ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35;
// Cinemachine.ConfinerOven
struct ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t6F02F958011535010196E7CDD88578BEDB9AE685;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t1A8D13688535CFE851EE667877C439AC8D1D38CC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Cinemachine.ISignalSource6D
struct ISignalSource6D_t26BFD432B5044E626555FD66AE4B954746624159;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38;
// ClipperLib.PolyNode
struct PolyNode_t0F17C43F7853AF74B566B04F6B129343E20E8646;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Cinemachine.SignalSourceAsset
struct SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// Cinemachine.AxisState/IInputAxisProvider
struct IInputAxisProvider_t60E3751C2B79760C58FA84BC376D8A3DC1E7AE70;
// Cinemachine.CinemachineBrain/<AfterPhysics>d__33
struct U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E;
// Cinemachine.CinemachineBrain/BrainFrame
struct BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296;
// Cinemachine.CinemachineClearShot/<>c
struct U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601;
// Cinemachine.CinemachineCollider/VcamExtraState
struct VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC;
// Cinemachine.CinemachineConfiner/VcamExtraState
struct VcamExtraState_tE9845AA267093B1D1A0E7E2AB306676F3A3D80BA;
// Cinemachine.CinemachineConfiner2D/VcamExtraState
struct VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051;
// Cinemachine.CinemachineCore/<>c
struct U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864;
// Cinemachine.CinemachineCore/UpdateStatus
struct UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4;
// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530;
// Cinemachine.CinemachineFollowZoom/VcamExtraState
struct VcamExtraState_t6B11C5350C2EC7FFC9AC49DE846AAF5F894F53D0;
// Cinemachine.CinemachineFreeLook/CreateRigDelegate
struct CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270;
// Cinemachine.CinemachineFreeLook/DestroyRigDelegate
struct DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49;
// Cinemachine.CinemachineImpulseDefinition/SignalSource
struct SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA;
// Cinemachine.CinemachineImpulseManager/ImpulseEvent
struct ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4;
// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8;
// Cinemachine.CinemachineOrbitalTransposer/<>c
struct U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742;
// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
struct UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D;
// Cinemachine.CinemachinePathBase/Appearance
struct Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8;
// Cinemachine.CinemachineStoryboard/CanvasInfo
struct CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728;
// Cinemachine.CinemachineVirtualCamera/<>c
struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28;
// Cinemachine.ConfinerOven/BakedSolution
struct BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C;
// Cinemachine.ConfinerOven/PolygonSolution
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA;
// Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74;
// Cinemachine.TargetPositionCache/CacheCurve
struct CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10;
// Cinemachine.TargetPositionCache/CacheEntry
struct CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6;
// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B;
// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignalSource6D_t26BFD432B5044E626555FD66AE4B954746624159_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateTracker_t65DAFAB0BA9482C7B23F5B1B01DE209C617434E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE52774661C80C9168642350DFA54D299E6A19584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m70ECC7DD5B3052A7FD8D32B7494DD6AC940D53CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m35D9C8D74929ECDAC5BA5CC7BC877B76A7B43978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8077ECD98AF0C32599B6EFD30BF28B38C0A69088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAfterPhysicsU3Ed__33_System_Collections_IEnumerator_Reset_mAA45376E2089E38B00E97B3A6B9F00F2A495B435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7FAB70A1CC10FC2B1F244136B510D1B8F5A4FF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mB5F14A2841CFD4FFEA2B3FDB766A68789CA4C500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_0_0_0_var;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com;;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74;;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com;;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke;
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke;;
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA;;
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com;
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com;;
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke;
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke;;

struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8;
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>
struct List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4, ____items_1)); }
	inline List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t2A66D25A542EB2F9ED8DCEDC46A0A2ACAA204932* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____items_1)); }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t2E9FD3289B4ED7245643A82BEAE1333FC0DB3DE9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ClipperLib.IntPoint>
struct List_1_tC143170EE25943366B2DA9D8910EC3E385E53814  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814, ____items_1)); }
	inline IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* get__items_1() const { return ____items_1; }
	inline IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC143170EE25943366B2DA9D8910EC3E385E53814_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814_StaticFields, ____emptyArray_5)); }
	inline IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution>
struct List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7, ____items_1)); }
	inline PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* get__items_1() const { return ____items_1; }
	inline PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7_StaticFields, ____emptyArray_5)); }
	inline PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>
struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____items_1)); }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC1537C8DF457B7721EAA10465942441865A779E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC1537C8DF457B7721EAA10465942441865A779E5_StaticFields, ____emptyArray_5)); }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>
struct List_1_tAED568015081230FCEC357C56CB10520C53903F7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____items_1)); }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* get__items_1() const { return ____items_1; }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAED568015081230FCEC357C56CB10520C53903F7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAED568015081230FCEC357C56CB10520C53903F7_StaticFields, ____emptyArray_5)); }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Cinemachine.CinemachineBlend
struct CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C  : public RuntimeObject
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBlend::<CamA>k__BackingField
	RuntimeObject* ___U3CCamAU3Ek__BackingField_0;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBlend::<CamB>k__BackingField
	RuntimeObject* ___U3CCamBU3Ek__BackingField_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlend::<BlendCurve>k__BackingField
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3CBlendCurveU3Ek__BackingField_2;
	// System.Single Cinemachine.CinemachineBlend::<TimeInBlend>k__BackingField
	float ___U3CTimeInBlendU3Ek__BackingField_3;
	// System.Single Cinemachine.CinemachineBlend::<Duration>k__BackingField
	float ___U3CDurationU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCamAU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C, ___U3CCamAU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CCamAU3Ek__BackingField_0() const { return ___U3CCamAU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CCamAU3Ek__BackingField_0() { return &___U3CCamAU3Ek__BackingField_0; }
	inline void set_U3CCamAU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CCamAU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCamAU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCamBU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C, ___U3CCamBU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CCamBU3Ek__BackingField_1() const { return ___U3CCamBU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CCamBU3Ek__BackingField_1() { return &___U3CCamBU3Ek__BackingField_1; }
	inline void set_U3CCamBU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CCamBU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCamBU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlendCurveU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C, ___U3CBlendCurveU3Ek__BackingField_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3CBlendCurveU3Ek__BackingField_2() const { return ___U3CBlendCurveU3Ek__BackingField_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3CBlendCurveU3Ek__BackingField_2() { return &___U3CBlendCurveU3Ek__BackingField_2; }
	inline void set_U3CBlendCurveU3Ek__BackingField_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3CBlendCurveU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlendCurveU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeInBlendU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C, ___U3CTimeInBlendU3Ek__BackingField_3)); }
	inline float get_U3CTimeInBlendU3Ek__BackingField_3() const { return ___U3CTimeInBlendU3Ek__BackingField_3; }
	inline float* get_address_of_U3CTimeInBlendU3Ek__BackingField_3() { return &___U3CTimeInBlendU3Ek__BackingField_3; }
	inline void set_U3CTimeInBlendU3Ek__BackingField_3(float value)
	{
		___U3CTimeInBlendU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDurationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C, ___U3CDurationU3Ek__BackingField_4)); }
	inline float get_U3CDurationU3Ek__BackingField_4() const { return ___U3CDurationU3Ek__BackingField_4; }
	inline float* get_address_of_U3CDurationU3Ek__BackingField_4() { return &___U3CDurationU3Ek__BackingField_4; }
	inline void set_U3CDurationU3Ek__BackingField_4(float value)
	{
		___U3CDurationU3Ek__BackingField_4 = value;
	}
};


// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ExpiredEvents
	List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * ___m_ExpiredEvents_2;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ActiveEvents
	List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * ___m_ActiveEvents_3;
	// System.Boolean Cinemachine.CinemachineImpulseManager::<IgnoreTimeScale>k__BackingField
	bool ___U3CIgnoreTimeScaleU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_ExpiredEvents_2() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___m_ExpiredEvents_2)); }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * get_m_ExpiredEvents_2() const { return ___m_ExpiredEvents_2; }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 ** get_address_of_m_ExpiredEvents_2() { return &___m_ExpiredEvents_2; }
	inline void set_m_ExpiredEvents_2(List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * value)
	{
		___m_ExpiredEvents_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpiredEvents_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveEvents_3() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___m_ActiveEvents_3)); }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * get_m_ActiveEvents_3() const { return ___m_ActiveEvents_3; }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 ** get_address_of_m_ActiveEvents_3() { return &___m_ActiveEvents_3; }
	inline void set_m_ActiveEvents_3(List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * value)
	{
		___m_ActiveEvents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveEvents_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoreTimeScaleU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___U3CIgnoreTimeScaleU3Ek__BackingField_4)); }
	inline bool get_U3CIgnoreTimeScaleU3Ek__BackingField_4() const { return ___U3CIgnoreTimeScaleU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIgnoreTimeScaleU3Ek__BackingField_4() { return &___U3CIgnoreTimeScaleU3Ek__BackingField_4; }
	inline void set_U3CIgnoreTimeScaleU3Ek__BackingField_4(bool value)
	{
		___U3CIgnoreTimeScaleU3Ek__BackingField_4 = value;
	}
};

struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_StaticFields
{
public:
	// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::sInstance
	CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_StaticFields, ___sInstance_0)); }
	inline CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * get_sInstance_0() const { return ___sInstance_0; }
	inline CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Cinemachine.CinemachineBrain/<AfterPhysics>d__33
struct U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/<AfterPhysics>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Cinemachine.CinemachineBrain/<AfterPhysics>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Cinemachine.CinemachineBrain Cinemachine.CinemachineBrain/<AfterPhysics>d__33::<>4__this
	CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47, ___U3CU3E4__this_2)); }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Cinemachine.CinemachineBrain/BrainFrame
struct BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/BrainFrame::id
	int32_t ___id_0;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain/BrainFrame::blend
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___blend_1;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain/BrainFrame::workingBlend
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___workingBlend_2;
	// Cinemachine.BlendSourceVirtualCamera Cinemachine.CinemachineBrain/BrainFrame::workingBlendSource
	BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC * ___workingBlendSource_3;
	// System.Single Cinemachine.CinemachineBrain/BrainFrame::deltaTimeOverride
	float ___deltaTimeOverride_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_blend_1() { return static_cast<int32_t>(offsetof(BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3, ___blend_1)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_blend_1() const { return ___blend_1; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_blend_1() { return &___blend_1; }
	inline void set_blend_1(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___blend_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blend_1), (void*)value);
	}

	inline static int32_t get_offset_of_workingBlend_2() { return static_cast<int32_t>(offsetof(BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3, ___workingBlend_2)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_workingBlend_2() const { return ___workingBlend_2; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_workingBlend_2() { return &___workingBlend_2; }
	inline void set_workingBlend_2(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___workingBlend_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workingBlend_2), (void*)value);
	}

	inline static int32_t get_offset_of_workingBlendSource_3() { return static_cast<int32_t>(offsetof(BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3, ___workingBlendSource_3)); }
	inline BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC * get_workingBlendSource_3() const { return ___workingBlendSource_3; }
	inline BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC ** get_address_of_workingBlendSource_3() { return &___workingBlendSource_3; }
	inline void set_workingBlendSource_3(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC * value)
	{
		___workingBlendSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workingBlendSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_deltaTimeOverride_4() { return static_cast<int32_t>(offsetof(BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3, ___deltaTimeOverride_4)); }
	inline float get_deltaTimeOverride_4() const { return ___deltaTimeOverride_4; }
	inline float* get_address_of_deltaTimeOverride_4() { return &___deltaTimeOverride_4; }
	inline void set_deltaTimeOverride_4(float value)
	{
		___deltaTimeOverride_4 = value;
	}
};


// Cinemachine.CinemachineClearShot/<>c
struct U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_StaticFields
{
public:
	// Cinemachine.CinemachineClearShot/<>c Cinemachine.CinemachineClearShot/<>c::<>9
	U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * ___U3CU3E9_0;
	// System.Comparison`1<Cinemachine.CinemachineClearShot/Pair> Cinemachine.CinemachineClearShot/<>c::<>9__47_0
	Comparison_1_t86619A9282704C17F06E1775BFB565310C364F4D * ___U3CU3E9__47_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_StaticFields, ___U3CU3E9__47_0_1)); }
	inline Comparison_1_t86619A9282704C17F06E1775BFB565310C364F4D * get_U3CU3E9__47_0_1() const { return ___U3CU3E9__47_0_1; }
	inline Comparison_1_t86619A9282704C17F06E1775BFB565310C364F4D ** get_address_of_U3CU3E9__47_0_1() { return &___U3CU3E9__47_0_1; }
	inline void set_U3CU3E9__47_0_1(Comparison_1_t86619A9282704C17F06E1775BFB565310C364F4D * value)
	{
		___U3CU3E9__47_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_1), (void*)value);
	}
};


// Cinemachine.CinemachineCore/<>c
struct U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_StaticFields
{
public:
	// Cinemachine.CinemachineCore/<>c Cinemachine.CinemachineCore/<>c::<>9
	U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * ___U3CU3E9_0;
	// System.Comparison`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore/<>c::<>9__30_0
	Comparison_1_tFDCC716CBCDCFAFCFC8603334492DF55E9E767E9 * ___U3CU3E9__30_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_StaticFields, ___U3CU3E9__30_0_1)); }
	inline Comparison_1_tFDCC716CBCDCFAFCFC8603334492DF55E9E767E9 * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline Comparison_1_tFDCC716CBCDCFAFCFC8603334492DF55E9E767E9 ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(Comparison_1_tFDCC716CBCDCFAFCFC8603334492DF55E9E767E9 * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}
};


// Cinemachine.CinemachineFollowZoom/VcamExtraState
struct VcamExtraState_t6B11C5350C2EC7FFC9AC49DE846AAF5F894F53D0  : public RuntimeObject
{
public:
	// System.Single Cinemachine.CinemachineFollowZoom/VcamExtraState::m_previousFrameZoom
	float ___m_previousFrameZoom_0;

public:
	inline static int32_t get_offset_of_m_previousFrameZoom_0() { return static_cast<int32_t>(offsetof(VcamExtraState_t6B11C5350C2EC7FFC9AC49DE846AAF5F894F53D0, ___m_previousFrameZoom_0)); }
	inline float get_m_previousFrameZoom_0() const { return ___m_previousFrameZoom_0; }
	inline float* get_address_of_m_previousFrameZoom_0() { return &___m_previousFrameZoom_0; }
	inline void set_m_previousFrameZoom_0(float value)
	{
		___m_previousFrameZoom_0 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/<>c
struct U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_StaticFields
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/<>c Cinemachine.CinemachineOrbitalTransposer/<>c::<>9
	U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * ___U3CU3E9_0;
	// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate Cinemachine.CinemachineOrbitalTransposer/<>c::<>9__34_0
	UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_StaticFields, ___U3CU3E9__34_0_1)); }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// Cinemachine.CinemachineStoryboard/CanvasInfo
struct CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Cinemachine.CinemachineStoryboard/CanvasInfo::mCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mCanvas_0;
	// Cinemachine.CinemachineBrain Cinemachine.CinemachineStoryboard/CanvasInfo::mCanvasParent
	CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * ___mCanvasParent_1;
	// UnityEngine.RectTransform Cinemachine.CinemachineStoryboard/CanvasInfo::mViewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___mViewport_2;
	// UnityEngine.UI.RawImage Cinemachine.CinemachineStoryboard/CanvasInfo::mRawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___mRawImage_3;

public:
	inline static int32_t get_offset_of_mCanvas_0() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mCanvas_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mCanvas_0() const { return ___mCanvas_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mCanvas_0() { return &___mCanvas_0; }
	inline void set_mCanvas_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mCanvas_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCanvas_0), (void*)value);
	}

	inline static int32_t get_offset_of_mCanvasParent_1() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mCanvasParent_1)); }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * get_mCanvasParent_1() const { return ___mCanvasParent_1; }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** get_address_of_mCanvasParent_1() { return &___mCanvasParent_1; }
	inline void set_mCanvasParent_1(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		___mCanvasParent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCanvasParent_1), (void*)value);
	}

	inline static int32_t get_offset_of_mViewport_2() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mViewport_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_mViewport_2() const { return ___mViewport_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_mViewport_2() { return &___mViewport_2; }
	inline void set_mViewport_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___mViewport_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mViewport_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRawImage_3() { return static_cast<int32_t>(offsetof(CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728, ___mRawImage_3)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_mRawImage_3() const { return ___mRawImage_3; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_mRawImage_3() { return &___mRawImage_3; }
	inline void set_mRawImage_3(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___mRawImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRawImage_3), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera/<>c
struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/<>c Cinemachine.CinemachineVirtualCamera/<>c::<>9
	U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * ___U3CU3E9_0;
	// System.Comparison`1<Cinemachine.CinemachineComponentBase> Cinemachine.CinemachineVirtualCamera/<>c::<>9__41_0
	Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * ___U3CU3E9__41_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields, ___U3CU3E9__41_0_1)); }
	inline Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * get_U3CU3E9__41_0_1() const { return ___U3CU3E9__41_0_1; }
	inline Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 ** get_address_of_U3CU3E9__41_0_1() { return &___U3CU3E9__41_0_1; }
	inline void set_U3CU3E9__41_0_1(Comparison_1_t8DC08F98CD3C24E12C6401F69228710B0EF5C073 * value)
	{
		___U3CU3E9__41_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_1), (void*)value);
	}
};


// Cinemachine.TargetPositionCache/CacheCurve
struct CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10  : public RuntimeObject
{
public:
	// System.Single Cinemachine.TargetPositionCache/CacheCurve::StartTime
	float ___StartTime_0;
	// System.Single Cinemachine.TargetPositionCache/CacheCurve::StepSize
	float ___StepSize_1;
	// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item> Cinemachine.TargetPositionCache/CacheCurve::m_Cache
	List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * ___m_Cache_2;

public:
	inline static int32_t get_offset_of_StartTime_0() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___StartTime_0)); }
	inline float get_StartTime_0() const { return ___StartTime_0; }
	inline float* get_address_of_StartTime_0() { return &___StartTime_0; }
	inline void set_StartTime_0(float value)
	{
		___StartTime_0 = value;
	}

	inline static int32_t get_offset_of_StepSize_1() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___StepSize_1)); }
	inline float get_StepSize_1() const { return ___StepSize_1; }
	inline float* get_address_of_StepSize_1() { return &___StepSize_1; }
	inline void set_StepSize_1(float value)
	{
		___StepSize_1 = value;
	}

	inline static int32_t get_offset_of_m_Cache_2() { return static_cast<int32_t>(offsetof(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10, ___m_Cache_2)); }
	inline List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * get_m_Cache_2() const { return ___m_Cache_2; }
	inline List_1_tC1537C8DF457B7721EAA10465942441865A779E5 ** get_address_of_m_Cache_2() { return &___m_Cache_2; }
	inline void set_m_Cache_2(List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * value)
	{
		___m_Cache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_2), (void*)value);
	}
};


// Cinemachine.TargetPositionCache/CacheEntry
struct CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6  : public RuntimeObject
{
public:
	// Cinemachine.TargetPositionCache/CacheCurve Cinemachine.TargetPositionCache/CacheEntry::Curve
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * ___Curve_0;
	// System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem> Cinemachine.TargetPositionCache/CacheEntry::RawItems
	List_1_tAED568015081230FCEC357C56CB10520C53903F7 * ___RawItems_1;

public:
	inline static int32_t get_offset_of_Curve_0() { return static_cast<int32_t>(offsetof(CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6, ___Curve_0)); }
	inline CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * get_Curve_0() const { return ___Curve_0; }
	inline CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 ** get_address_of_Curve_0() { return &___Curve_0; }
	inline void set_Curve_0(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * value)
	{
		___Curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Curve_0), (void*)value);
	}

	inline static int32_t get_offset_of_RawItems_1() { return static_cast<int32_t>(offsetof(CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6, ___RawItems_1)); }
	inline List_1_tAED568015081230FCEC357C56CB10520C53903F7 * get_RawItems_1() const { return ___RawItems_1; }
	inline List_1_tAED568015081230FCEC357C56CB10520C53903F7 ** get_address_of_RawItems_1() { return &___RawItems_1; }
	inline void set_RawItems_1(List_1_tAED568015081230FCEC357C56CB10520C53903F7 * value)
	{
		___RawItems_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RawItems_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<ClipperLib.IntPoint>>
struct Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F, ___list_0)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_list_0() const { return ___list_0; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F, ___current_3)); }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * get_current_3() const { return ___current_3; }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>
struct UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera>
struct UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// ClipperLib.IntPoint
struct IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 
{
public:
	// System.Int64 ClipperLib.IntPoint::X
	int64_t ___X_0;
	// System.Int64 ClipperLib.IntPoint::Y
	int64_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06, ___Y_1)); }
	inline int64_t get_Y_1() const { return ___Y_1; }
	inline int64_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int64_t value)
	{
		___Y_1 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 
{
public:
	// System.Boolean Cinemachine.AxisState/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.AxisState/Recentering::m_WaitTime
	float ___m_WaitTime_1;
	// System.Single Cinemachine.AxisState/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Single Cinemachine.AxisState/Recentering::mLastAxisInputTime
	float ___mLastAxisInputTime_3;
	// System.Single Cinemachine.AxisState/Recentering::mRecenteringVelocity
	float ___mRecenteringVelocity_4;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_5;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_6;

public:
	inline static int32_t get_offset_of_m_enabled_0() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_enabled_0)); }
	inline bool get_m_enabled_0() const { return ___m_enabled_0; }
	inline bool* get_address_of_m_enabled_0() { return &___m_enabled_0; }
	inline void set_m_enabled_0(bool value)
	{
		___m_enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitTime_1() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_WaitTime_1)); }
	inline float get_m_WaitTime_1() const { return ___m_WaitTime_1; }
	inline float* get_address_of_m_WaitTime_1() { return &___m_WaitTime_1; }
	inline void set_m_WaitTime_1(float value)
	{
		___m_WaitTime_1 = value;
	}

	inline static int32_t get_offset_of_m_RecenteringTime_2() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_RecenteringTime_2)); }
	inline float get_m_RecenteringTime_2() const { return ___m_RecenteringTime_2; }
	inline float* get_address_of_m_RecenteringTime_2() { return &___m_RecenteringTime_2; }
	inline void set_m_RecenteringTime_2(float value)
	{
		___m_RecenteringTime_2 = value;
	}

	inline static int32_t get_offset_of_mLastAxisInputTime_3() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mLastAxisInputTime_3)); }
	inline float get_mLastAxisInputTime_3() const { return ___mLastAxisInputTime_3; }
	inline float* get_address_of_mLastAxisInputTime_3() { return &___mLastAxisInputTime_3; }
	inline void set_mLastAxisInputTime_3(float value)
	{
		___mLastAxisInputTime_3 = value;
	}

	inline static int32_t get_offset_of_mRecenteringVelocity_4() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mRecenteringVelocity_4)); }
	inline float get_mRecenteringVelocity_4() const { return ___mRecenteringVelocity_4; }
	inline float* get_address_of_mRecenteringVelocity_4() { return &___mRecenteringVelocity_4; }
	inline void set_mRecenteringVelocity_4(float value)
	{
		___mRecenteringVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingDefinition_5() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyHeadingDefinition_5)); }
	inline int32_t get_m_LegacyHeadingDefinition_5() const { return ___m_LegacyHeadingDefinition_5; }
	inline int32_t* get_address_of_m_LegacyHeadingDefinition_5() { return &___m_LegacyHeadingDefinition_5; }
	inline void set_m_LegacyHeadingDefinition_5(int32_t value)
	{
		___m_LegacyHeadingDefinition_5 = value;
	}

	inline static int32_t get_offset_of_m_LegacyVelocityFilterStrength_6() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyVelocityFilterStrength_6)); }
	inline int32_t get_m_LegacyVelocityFilterStrength_6() const { return ___m_LegacyVelocityFilterStrength_6; }
	inline int32_t* get_address_of_m_LegacyVelocityFilterStrength_6() { return &___m_LegacyVelocityFilterStrength_6; }
	inline void set_m_LegacyVelocityFilterStrength_6(int32_t value)
	{
		___m_LegacyVelocityFilterStrength_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for COM marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.CinemachineClearShot/Pair
struct Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB 
{
public:
	// System.Int32 Cinemachine.CinemachineClearShot/Pair::a
	int32_t ___a_0;
	// System.Single Cinemachine.CinemachineClearShot/Pair::b
	float ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB, ___b_1)); }
	inline float get_b_1() const { return ___b_1; }
	inline float* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(float value)
	{
		___b_1 = value;
	}
};


// Cinemachine.CinemachineFreeLook/Orbit
struct Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 
{
public:
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Height
	float ___m_Height_0;
	// System.Single Cinemachine.CinemachineFreeLook/Orbit::m_Radius
	float ___m_Radius_1;

public:
	inline static int32_t get_offset_of_m_Height_0() { return static_cast<int32_t>(offsetof(Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5, ___m_Height_0)); }
	inline float get_m_Height_0() const { return ___m_Height_0; }
	inline float* get_address_of_m_Height_0() { return &___m_Height_0; }
	inline void set_m_Height_0(float value)
	{
		___m_Height_0 = value;
	}

	inline static int32_t get_offset_of_m_Radius_1() { return static_cast<int32_t>(offsetof(Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5, ___m_Radius_1)); }
	inline float get_m_Radius_1() const { return ___m_Radius_1; }
	inline float* get_address_of_m_Radius_1() { return &___m_Radius_1; }
	inline void set_m_Radius_1(float value)
	{
		___m_Radius_1 = value;
	}
};


// Cinemachine.CinemachineStateDrivenCamera/HashPair
struct HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/HashPair::parentHash
	int32_t ___parentHash_0;
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/HashPair::hash
	int32_t ___hash_1;

public:
	inline static int32_t get_offset_of_parentHash_0() { return static_cast<int32_t>(offsetof(HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790, ___parentHash_0)); }
	inline int32_t get_parentHash_0() const { return ___parentHash_0; }
	inline int32_t* get_address_of_parentHash_0() { return &___parentHash_0; }
	inline void set_parentHash_0(int32_t value)
	{
		___parentHash_0 = value;
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(HashPair_t09807509C741E786E249DC2F717CDA8E6BD80790, ___hash_1)); }
	inline int32_t get_hash_1() const { return ___hash_1; }
	inline int32_t* get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(int32_t value)
	{
		___hash_1 = value;
	}
};


// Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/Instruction::m_FullHash
	int32_t ___m_FullHash_0;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineStateDrivenCamera/Instruction::m_VirtualCamera
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_ActivateAfter
	float ___m_ActivateAfter_2;
	// System.Single Cinemachine.CinemachineStateDrivenCamera/Instruction::m_MinDuration
	float ___m_MinDuration_3;

public:
	inline static int32_t get_offset_of_m_FullHash_0() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_FullHash_0)); }
	inline int32_t get_m_FullHash_0() const { return ___m_FullHash_0; }
	inline int32_t* get_address_of_m_FullHash_0() { return &___m_FullHash_0; }
	inline void set_m_FullHash_0(int32_t value)
	{
		___m_FullHash_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualCamera_1() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_VirtualCamera_1)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_VirtualCamera_1() const { return ___m_VirtualCamera_1; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_VirtualCamera_1() { return &___m_VirtualCamera_1; }
	inline void set_m_VirtualCamera_1(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_VirtualCamera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualCamera_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActivateAfter_2() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_ActivateAfter_2)); }
	inline float get_m_ActivateAfter_2() const { return ___m_ActivateAfter_2; }
	inline float* get_address_of_m_ActivateAfter_2() { return &___m_ActivateAfter_2; }
	inline void set_m_ActivateAfter_2(float value)
	{
		___m_ActivateAfter_2 = value;
	}

	inline static int32_t get_offset_of_m_MinDuration_3() { return static_cast<int32_t>(offsetof(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF, ___m_MinDuration_3)); }
	inline float get_m_MinDuration_3() const { return ___m_MinDuration_3; }
	inline float* get_address_of_m_MinDuration_3() { return &___m_MinDuration_3; }
	inline void set_m_MinDuration_3(float value)
	{
		___m_MinDuration_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineStateDrivenCamera/Instruction
struct Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};

// Cinemachine.CinemachineStateDrivenCamera/ParentHash
struct ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 
{
public:
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_Hash
	int32_t ___m_Hash_0;
	// System.Int32 Cinemachine.CinemachineStateDrivenCamera/ParentHash::m_ParentHash
	int32_t ___m_ParentHash_1;

public:
	inline static int32_t get_offset_of_m_Hash_0() { return static_cast<int32_t>(offsetof(ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036, ___m_Hash_0)); }
	inline int32_t get_m_Hash_0() const { return ___m_Hash_0; }
	inline int32_t* get_address_of_m_Hash_0() { return &___m_Hash_0; }
	inline void set_m_Hash_0(int32_t value)
	{
		___m_Hash_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentHash_1() { return static_cast<int32_t>(offsetof(ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036, ___m_ParentHash_1)); }
	inline int32_t get_m_ParentHash_1() const { return ___m_ParentHash_1; }
	inline int32_t* get_address_of_m_ParentHash_1() { return &___m_ParentHash_1; }
	inline void set_m_ParentHash_1(int32_t value)
	{
		___m_ParentHash_1 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B 
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineTargetGroup/Target::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::weight
	float ___weight_1;
	// System.Single Cinemachine.CinemachineTargetGroup/Target::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_0() const { return ___target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTargetGroup/Target
struct Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;
	float ___weight_1;
	float ___radius_2;
};

// Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D 
{
public:
	// System.Boolean Cinemachine.CinemachineTrackedDolly/AutoDolly::m_Enabled
	bool ___m_Enabled_0;
	// System.Single Cinemachine.CinemachineTrackedDolly/AutoDolly::m_PositionOffset
	float ___m_PositionOffset_1;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchRadius
	int32_t ___m_SearchRadius_2;
	// System.Int32 Cinemachine.CinemachineTrackedDolly/AutoDolly::m_SearchResolution
	int32_t ___m_SearchResolution_3;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_Enabled_0)); }
	inline bool get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline bool* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(bool value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionOffset_1() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_PositionOffset_1)); }
	inline float get_m_PositionOffset_1() const { return ___m_PositionOffset_1; }
	inline float* get_address_of_m_PositionOffset_1() { return &___m_PositionOffset_1; }
	inline void set_m_PositionOffset_1(float value)
	{
		___m_PositionOffset_1 = value;
	}

	inline static int32_t get_offset_of_m_SearchRadius_2() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_SearchRadius_2)); }
	inline int32_t get_m_SearchRadius_2() const { return ___m_SearchRadius_2; }
	inline int32_t* get_address_of_m_SearchRadius_2() { return &___m_SearchRadius_2; }
	inline void set_m_SearchRadius_2(int32_t value)
	{
		___m_SearchRadius_2 = value;
	}

	inline static int32_t get_offset_of_m_SearchResolution_3() { return static_cast<int32_t>(offsetof(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D, ___m_SearchResolution_3)); }
	inline int32_t get_m_SearchResolution_3() const { return ___m_SearchResolution_3; }
	inline int32_t* get_address_of_m_SearchResolution_3() { return &___m_SearchResolution_3; }
	inline void set_m_SearchResolution_3(int32_t value)
	{
		___m_SearchResolution_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTrackedDolly/AutoDolly
struct AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com
{
	int32_t ___m_Enabled_0;
	float ___m_PositionOffset_1;
	int32_t ___m_SearchRadius_2;
	int32_t ___m_SearchResolution_3;
};

// Cinemachine.ConfinerOven/AspectStretcher
struct AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C 
{
public:
	// System.Single Cinemachine.ConfinerOven/AspectStretcher::<Aspect>k__BackingField
	float ___U3CAspectU3Ek__BackingField_0;
	// System.Single Cinemachine.ConfinerOven/AspectStretcher::m_InverseAspect
	float ___m_InverseAspect_1;
	// System.Single Cinemachine.ConfinerOven/AspectStretcher::m_CenterX
	float ___m_CenterX_2;

public:
	inline static int32_t get_offset_of_U3CAspectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C, ___U3CAspectU3Ek__BackingField_0)); }
	inline float get_U3CAspectU3Ek__BackingField_0() const { return ___U3CAspectU3Ek__BackingField_0; }
	inline float* get_address_of_U3CAspectU3Ek__BackingField_0() { return &___U3CAspectU3Ek__BackingField_0; }
	inline void set_U3CAspectU3Ek__BackingField_0(float value)
	{
		___U3CAspectU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_InverseAspect_1() { return static_cast<int32_t>(offsetof(AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C, ___m_InverseAspect_1)); }
	inline float get_m_InverseAspect_1() const { return ___m_InverseAspect_1; }
	inline float* get_address_of_m_InverseAspect_1() { return &___m_InverseAspect_1; }
	inline void set_m_InverseAspect_1(float value)
	{
		___m_InverseAspect_1 = value;
	}

	inline static int32_t get_offset_of_m_CenterX_2() { return static_cast<int32_t>(offsetof(AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C, ___m_CenterX_2)); }
	inline float get_m_CenterX_2() const { return ___m_CenterX_2; }
	inline float* get_address_of_m_CenterX_2() { return &___m_CenterX_2; }
	inline void set_m_CenterX_2(float value)
	{
		___m_CenterX_2 = value;
	}
};


// Cinemachine.ConfinerOven/PolygonSolution
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA 
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven/PolygonSolution::m_Polygons
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_Polygons_0;
	// System.Single Cinemachine.ConfinerOven/PolygonSolution::m_FrustumHeight
	float ___m_FrustumHeight_1;

public:
	inline static int32_t get_offset_of_m_Polygons_0() { return static_cast<int32_t>(offsetof(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA, ___m_Polygons_0)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_Polygons_0() const { return ___m_Polygons_0; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_Polygons_0() { return &___m_Polygons_0; }
	inline void set_m_Polygons_0(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_Polygons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Polygons_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FrustumHeight_1() { return static_cast<int32_t>(offsetof(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA, ___m_FrustumHeight_1)); }
	inline float get_m_FrustumHeight_1() const { return ___m_FrustumHeight_1; }
	inline float* get_address_of_m_FrustumHeight_1() { return &___m_FrustumHeight_1; }
	inline void set_m_FrustumHeight_1(float value)
	{
		___m_FrustumHeight_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.ConfinerOven/PolygonSolution
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke
{
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_Polygons_0;
	float ___m_FrustumHeight_1;
};
// Native definition for COM marshalling of Cinemachine.ConfinerOven/PolygonSolution
struct PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com
{
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_Polygons_0;
	float ___m_FrustumHeight_1;
};

// Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 
{
public:
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Frequency
	float ___Frequency_0;
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Amplitude
	float ___Amplitude_1;
	// System.Boolean Cinemachine.NoiseSettings/NoiseParams::Constant
	bool ___Constant_2;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Frequency_0)); }
	inline float get_Frequency_0() const { return ___Frequency_0; }
	inline float* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(float value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_Amplitude_1() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Amplitude_1)); }
	inline float get_Amplitude_1() const { return ___Amplitude_1; }
	inline float* get_address_of_Amplitude_1() { return &___Amplitude_1; }
	inline void set_Amplitude_1(float value)
	{
		___Amplitude_1 = value;
	}

	inline static int32_t get_offset_of_Constant_2() { return static_cast<int32_t>(offsetof(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74, ___Constant_2)); }
	inline bool get_Constant_2() const { return ___Constant_2; }
	inline bool* get_address_of_Constant_2() { return &___Constant_2; }
	inline void set_Constant_2(bool value)
	{
		___Constant_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};

// Cinemachine.TargetPositionCache/TimeRange
struct TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C 
{
public:
	// System.Single Cinemachine.TargetPositionCache/TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache/TimeRange::End
	float ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___Start_0)); }
	inline float get_Start_0() const { return ___Start_0; }
	inline float* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(float value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C, ___End_1)); }
	inline float get_End_1() const { return ___End_1; }
	inline float* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(float value)
	{
		___End_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ClipperLib.ClipperOffset
struct ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> ClipperLib.ClipperOffset::m_destPolys
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_destPolys_0;
	// System.Collections.Generic.List`1<ClipperLib.IntPoint> ClipperLib.ClipperOffset::m_srcPoly
	List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * ___m_srcPoly_1;
	// System.Collections.Generic.List`1<ClipperLib.IntPoint> ClipperLib.ClipperOffset::m_destPoly
	List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * ___m_destPoly_2;
	// System.Collections.Generic.List`1<ClipperLib.DoublePoint> ClipperLib.ClipperOffset::m_normals
	List_1_t40DAE9F94CC73F739E50DACB402F159DBA0AF7CD * ___m_normals_3;
	// System.Double ClipperLib.ClipperOffset::m_delta
	double ___m_delta_4;
	// System.Double ClipperLib.ClipperOffset::m_sinA
	double ___m_sinA_5;
	// System.Double ClipperLib.ClipperOffset::m_sin
	double ___m_sin_6;
	// System.Double ClipperLib.ClipperOffset::m_cos
	double ___m_cos_7;
	// System.Double ClipperLib.ClipperOffset::m_miterLim
	double ___m_miterLim_8;
	// System.Double ClipperLib.ClipperOffset::m_StepsPerRad
	double ___m_StepsPerRad_9;
	// ClipperLib.IntPoint ClipperLib.ClipperOffset::m_lowest
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___m_lowest_10;
	// ClipperLib.PolyNode ClipperLib.ClipperOffset::m_polyNodes
	PolyNode_t0F17C43F7853AF74B566B04F6B129343E20E8646 * ___m_polyNodes_11;
	// System.Double ClipperLib.ClipperOffset::<ArcTolerance>k__BackingField
	double ___U3CArcToleranceU3Ek__BackingField_12;
	// System.Double ClipperLib.ClipperOffset::<MiterLimit>k__BackingField
	double ___U3CMiterLimitU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_destPolys_0() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_destPolys_0)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_destPolys_0() const { return ___m_destPolys_0; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_destPolys_0() { return &___m_destPolys_0; }
	inline void set_m_destPolys_0(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_destPolys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_destPolys_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_srcPoly_1() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_srcPoly_1)); }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * get_m_srcPoly_1() const { return ___m_srcPoly_1; }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 ** get_address_of_m_srcPoly_1() { return &___m_srcPoly_1; }
	inline void set_m_srcPoly_1(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * value)
	{
		___m_srcPoly_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_srcPoly_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_destPoly_2() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_destPoly_2)); }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * get_m_destPoly_2() const { return ___m_destPoly_2; }
	inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 ** get_address_of_m_destPoly_2() { return &___m_destPoly_2; }
	inline void set_m_destPoly_2(List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * value)
	{
		___m_destPoly_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_destPoly_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_normals_3() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_normals_3)); }
	inline List_1_t40DAE9F94CC73F739E50DACB402F159DBA0AF7CD * get_m_normals_3() const { return ___m_normals_3; }
	inline List_1_t40DAE9F94CC73F739E50DACB402F159DBA0AF7CD ** get_address_of_m_normals_3() { return &___m_normals_3; }
	inline void set_m_normals_3(List_1_t40DAE9F94CC73F739E50DACB402F159DBA0AF7CD * value)
	{
		___m_normals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_normals_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_delta_4() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_delta_4)); }
	inline double get_m_delta_4() const { return ___m_delta_4; }
	inline double* get_address_of_m_delta_4() { return &___m_delta_4; }
	inline void set_m_delta_4(double value)
	{
		___m_delta_4 = value;
	}

	inline static int32_t get_offset_of_m_sinA_5() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_sinA_5)); }
	inline double get_m_sinA_5() const { return ___m_sinA_5; }
	inline double* get_address_of_m_sinA_5() { return &___m_sinA_5; }
	inline void set_m_sinA_5(double value)
	{
		___m_sinA_5 = value;
	}

	inline static int32_t get_offset_of_m_sin_6() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_sin_6)); }
	inline double get_m_sin_6() const { return ___m_sin_6; }
	inline double* get_address_of_m_sin_6() { return &___m_sin_6; }
	inline void set_m_sin_6(double value)
	{
		___m_sin_6 = value;
	}

	inline static int32_t get_offset_of_m_cos_7() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_cos_7)); }
	inline double get_m_cos_7() const { return ___m_cos_7; }
	inline double* get_address_of_m_cos_7() { return &___m_cos_7; }
	inline void set_m_cos_7(double value)
	{
		___m_cos_7 = value;
	}

	inline static int32_t get_offset_of_m_miterLim_8() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_miterLim_8)); }
	inline double get_m_miterLim_8() const { return ___m_miterLim_8; }
	inline double* get_address_of_m_miterLim_8() { return &___m_miterLim_8; }
	inline void set_m_miterLim_8(double value)
	{
		___m_miterLim_8 = value;
	}

	inline static int32_t get_offset_of_m_StepsPerRad_9() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_StepsPerRad_9)); }
	inline double get_m_StepsPerRad_9() const { return ___m_StepsPerRad_9; }
	inline double* get_address_of_m_StepsPerRad_9() { return &___m_StepsPerRad_9; }
	inline void set_m_StepsPerRad_9(double value)
	{
		___m_StepsPerRad_9 = value;
	}

	inline static int32_t get_offset_of_m_lowest_10() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_lowest_10)); }
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  get_m_lowest_10() const { return ___m_lowest_10; }
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * get_address_of_m_lowest_10() { return &___m_lowest_10; }
	inline void set_m_lowest_10(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  value)
	{
		___m_lowest_10 = value;
	}

	inline static int32_t get_offset_of_m_polyNodes_11() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___m_polyNodes_11)); }
	inline PolyNode_t0F17C43F7853AF74B566B04F6B129343E20E8646 * get_m_polyNodes_11() const { return ___m_polyNodes_11; }
	inline PolyNode_t0F17C43F7853AF74B566B04F6B129343E20E8646 ** get_address_of_m_polyNodes_11() { return &___m_polyNodes_11; }
	inline void set_m_polyNodes_11(PolyNode_t0F17C43F7853AF74B566B04F6B129343E20E8646 * value)
	{
		___m_polyNodes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_polyNodes_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CArcToleranceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___U3CArcToleranceU3Ek__BackingField_12)); }
	inline double get_U3CArcToleranceU3Ek__BackingField_12() const { return ___U3CArcToleranceU3Ek__BackingField_12; }
	inline double* get_address_of_U3CArcToleranceU3Ek__BackingField_12() { return &___U3CArcToleranceU3Ek__BackingField_12; }
	inline void set_U3CArcToleranceU3Ek__BackingField_12(double value)
	{
		___U3CArcToleranceU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMiterLimitU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC, ___U3CMiterLimitU3Ek__BackingField_13)); }
	inline double get_U3CMiterLimitU3Ek__BackingField_13() const { return ___U3CMiterLimitU3Ek__BackingField_13; }
	inline double* get_address_of_U3CMiterLimitU3Ek__BackingField_13() { return &___U3CMiterLimitU3Ek__BackingField_13; }
	inline void set_U3CMiterLimitU3Ek__BackingField_13(double value)
	{
		___U3CMiterLimitU3Ek__BackingField_13 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Cinemachine.AxisState/SpeedMode
struct SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB 
{
public:
	// System.Int32 Cinemachine.AxisState/SpeedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/GateFitMode
struct GateFitMode_tDBD4389C530FAD67ED78789C02808A1D2DB4A525 
{
public:
	// System.Int32 UnityEngine.Camera/GateFitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GateFitMode_tDBD4389C530FAD67ED78789C02808A1D2DB4A525, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition/Style
struct Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition/Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E  : public UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049
{
public:

public:
};


// Cinemachine.CinemachineBrain/BrainUpdateMethod
struct BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/BrainUpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/UpdateMethod
struct UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296  : public UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02
{
public:

public:
};


// Cinemachine.CinemachineCollider/ResolutionStrategy
struct ResolutionStrategy_tA1463AF7E38308D4C10A49231DFF1F754A81E055 
{
public:
	// System.Int32 Cinemachine.CinemachineCollider/ResolutionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResolutionStrategy_tA1463AF7E38308D4C10A49231DFF1F754A81E055, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCollider/VcamExtraState
struct VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineCollider/VcamExtraState::m_previousDisplacement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_previousDisplacement_0;
	// UnityEngine.Vector3 Cinemachine.CinemachineCollider/VcamExtraState::m_previousDisplacementCorrection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_previousDisplacementCorrection_1;
	// System.Single Cinemachine.CinemachineCollider/VcamExtraState::colliderDisplacement
	float ___colliderDisplacement_2;
	// System.Boolean Cinemachine.CinemachineCollider/VcamExtraState::targetObscured
	bool ___targetObscured_3;
	// System.Single Cinemachine.CinemachineCollider/VcamExtraState::occlusionStartTime
	float ___occlusionStartTime_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Cinemachine.CinemachineCollider/VcamExtraState::debugResolutionPath
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___debugResolutionPath_5;
	// System.Single Cinemachine.CinemachineCollider/VcamExtraState::m_SmoothedDistance
	float ___m_SmoothedDistance_6;
	// System.Single Cinemachine.CinemachineCollider/VcamExtraState::m_SmoothedTime
	float ___m_SmoothedTime_7;

public:
	inline static int32_t get_offset_of_m_previousDisplacement_0() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___m_previousDisplacement_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_previousDisplacement_0() const { return ___m_previousDisplacement_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_previousDisplacement_0() { return &___m_previousDisplacement_0; }
	inline void set_m_previousDisplacement_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_previousDisplacement_0 = value;
	}

	inline static int32_t get_offset_of_m_previousDisplacementCorrection_1() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___m_previousDisplacementCorrection_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_previousDisplacementCorrection_1() const { return ___m_previousDisplacementCorrection_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_previousDisplacementCorrection_1() { return &___m_previousDisplacementCorrection_1; }
	inline void set_m_previousDisplacementCorrection_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_previousDisplacementCorrection_1 = value;
	}

	inline static int32_t get_offset_of_colliderDisplacement_2() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___colliderDisplacement_2)); }
	inline float get_colliderDisplacement_2() const { return ___colliderDisplacement_2; }
	inline float* get_address_of_colliderDisplacement_2() { return &___colliderDisplacement_2; }
	inline void set_colliderDisplacement_2(float value)
	{
		___colliderDisplacement_2 = value;
	}

	inline static int32_t get_offset_of_targetObscured_3() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___targetObscured_3)); }
	inline bool get_targetObscured_3() const { return ___targetObscured_3; }
	inline bool* get_address_of_targetObscured_3() { return &___targetObscured_3; }
	inline void set_targetObscured_3(bool value)
	{
		___targetObscured_3 = value;
	}

	inline static int32_t get_offset_of_occlusionStartTime_4() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___occlusionStartTime_4)); }
	inline float get_occlusionStartTime_4() const { return ___occlusionStartTime_4; }
	inline float* get_address_of_occlusionStartTime_4() { return &___occlusionStartTime_4; }
	inline void set_occlusionStartTime_4(float value)
	{
		___occlusionStartTime_4 = value;
	}

	inline static int32_t get_offset_of_debugResolutionPath_5() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___debugResolutionPath_5)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_debugResolutionPath_5() const { return ___debugResolutionPath_5; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_debugResolutionPath_5() { return &___debugResolutionPath_5; }
	inline void set_debugResolutionPath_5(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___debugResolutionPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugResolutionPath_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmoothedDistance_6() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___m_SmoothedDistance_6)); }
	inline float get_m_SmoothedDistance_6() const { return ___m_SmoothedDistance_6; }
	inline float* get_address_of_m_SmoothedDistance_6() { return &___m_SmoothedDistance_6; }
	inline void set_m_SmoothedDistance_6(float value)
	{
		___m_SmoothedDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_SmoothedTime_7() { return static_cast<int32_t>(offsetof(VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC, ___m_SmoothedTime_7)); }
	inline float get_m_SmoothedTime_7() const { return ___m_SmoothedTime_7; }
	inline float* get_address_of_m_SmoothedTime_7() { return &___m_SmoothedTime_7; }
	inline void set_m_SmoothedTime_7(float value)
	{
		___m_SmoothedTime_7 = value;
	}
};


// Cinemachine.CinemachineComposer/FovCache
struct FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 
{
public:
	// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::mFovSoftGuideRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mFovSoftGuideRect_0;
	// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::mFovHardGuideRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mFovHardGuideRect_1;
	// System.Single Cinemachine.CinemachineComposer/FovCache::mFovH
	float ___mFovH_2;
	// System.Single Cinemachine.CinemachineComposer/FovCache::mFov
	float ___mFov_3;
	// System.Single Cinemachine.CinemachineComposer/FovCache::mOrthoSizeOverDistance
	float ___mOrthoSizeOverDistance_4;
	// System.Single Cinemachine.CinemachineComposer/FovCache::mAspect
	float ___mAspect_5;
	// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::mSoftGuideRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mSoftGuideRect_6;
	// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::mHardGuideRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mHardGuideRect_7;

public:
	inline static int32_t get_offset_of_mFovSoftGuideRect_0() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mFovSoftGuideRect_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mFovSoftGuideRect_0() const { return ___mFovSoftGuideRect_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mFovSoftGuideRect_0() { return &___mFovSoftGuideRect_0; }
	inline void set_mFovSoftGuideRect_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mFovSoftGuideRect_0 = value;
	}

	inline static int32_t get_offset_of_mFovHardGuideRect_1() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mFovHardGuideRect_1)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mFovHardGuideRect_1() const { return ___mFovHardGuideRect_1; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mFovHardGuideRect_1() { return &___mFovHardGuideRect_1; }
	inline void set_mFovHardGuideRect_1(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mFovHardGuideRect_1 = value;
	}

	inline static int32_t get_offset_of_mFovH_2() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mFovH_2)); }
	inline float get_mFovH_2() const { return ___mFovH_2; }
	inline float* get_address_of_mFovH_2() { return &___mFovH_2; }
	inline void set_mFovH_2(float value)
	{
		___mFovH_2 = value;
	}

	inline static int32_t get_offset_of_mFov_3() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mFov_3)); }
	inline float get_mFov_3() const { return ___mFov_3; }
	inline float* get_address_of_mFov_3() { return &___mFov_3; }
	inline void set_mFov_3(float value)
	{
		___mFov_3 = value;
	}

	inline static int32_t get_offset_of_mOrthoSizeOverDistance_4() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mOrthoSizeOverDistance_4)); }
	inline float get_mOrthoSizeOverDistance_4() const { return ___mOrthoSizeOverDistance_4; }
	inline float* get_address_of_mOrthoSizeOverDistance_4() { return &___mOrthoSizeOverDistance_4; }
	inline void set_mOrthoSizeOverDistance_4(float value)
	{
		___mOrthoSizeOverDistance_4 = value;
	}

	inline static int32_t get_offset_of_mAspect_5() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mAspect_5)); }
	inline float get_mAspect_5() const { return ___mAspect_5; }
	inline float* get_address_of_mAspect_5() { return &___mAspect_5; }
	inline void set_mAspect_5(float value)
	{
		___mAspect_5 = value;
	}

	inline static int32_t get_offset_of_mSoftGuideRect_6() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mSoftGuideRect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mSoftGuideRect_6() const { return ___mSoftGuideRect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mSoftGuideRect_6() { return &___mSoftGuideRect_6; }
	inline void set_mSoftGuideRect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mSoftGuideRect_6 = value;
	}

	inline static int32_t get_offset_of_mHardGuideRect_7() { return static_cast<int32_t>(offsetof(FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0, ___mHardGuideRect_7)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mHardGuideRect_7() const { return ___mHardGuideRect_7; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mHardGuideRect_7() { return &___mHardGuideRect_7; }
	inline void set_mHardGuideRect_7(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mHardGuideRect_7 = value;
	}
};


// Cinemachine.CinemachineConfiner/Mode
struct Mode_t5CB3A7C5755C6E61B62817791C7354B07ABAF3F7 
{
public:
	// System.Int32 Cinemachine.CinemachineConfiner/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t5CB3A7C5755C6E61B62817791C7354B07ABAF3F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineConfiner/VcamExtraState
struct VcamExtraState_tE9845AA267093B1D1A0E7E2AB306676F3A3D80BA  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineConfiner/VcamExtraState::m_previousDisplacement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_previousDisplacement_0;
	// System.Single Cinemachine.CinemachineConfiner/VcamExtraState::confinerDisplacement
	float ___confinerDisplacement_1;

public:
	inline static int32_t get_offset_of_m_previousDisplacement_0() { return static_cast<int32_t>(offsetof(VcamExtraState_tE9845AA267093B1D1A0E7E2AB306676F3A3D80BA, ___m_previousDisplacement_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_previousDisplacement_0() const { return ___m_previousDisplacement_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_previousDisplacement_0() { return &___m_previousDisplacement_0; }
	inline void set_m_previousDisplacement_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_previousDisplacement_0 = value;
	}

	inline static int32_t get_offset_of_confinerDisplacement_1() { return static_cast<int32_t>(offsetof(VcamExtraState_tE9845AA267093B1D1A0E7E2AB306676F3A3D80BA, ___confinerDisplacement_1)); }
	inline float get_confinerDisplacement_1() const { return ___confinerDisplacement_1; }
	inline float* get_address_of_confinerDisplacement_1() { return &___confinerDisplacement_1; }
	inline void set_confinerDisplacement_1(float value)
	{
		___confinerDisplacement_1 = value;
	}
};


// Cinemachine.CinemachineConfiner2D/ShapeCache
struct ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 
{
public:
	// Cinemachine.ConfinerOven Cinemachine.CinemachineConfiner2D/ShapeCache::m_confinerOven
	ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * ___m_confinerOven_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> Cinemachine.CinemachineConfiner2D/ShapeCache::m_OriginalPath
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * ___m_OriginalPath_1;
	// UnityEngine.Matrix4x4 Cinemachine.CinemachineConfiner2D/ShapeCache::m_DeltaWorldToBaked
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaWorldToBaked_2;
	// UnityEngine.Matrix4x4 Cinemachine.CinemachineConfiner2D/ShapeCache::m_DeltaBakedToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaBakedToWorld_3;
	// System.Single Cinemachine.CinemachineConfiner2D/ShapeCache::m_aspectRatio
	float ___m_aspectRatio_4;
	// System.Single Cinemachine.CinemachineConfiner2D/ShapeCache::m_maxWindowSize
	float ___m_maxWindowSize_5;
	// System.Single Cinemachine.CinemachineConfiner2D/ShapeCache::m_maxComputationTimePerFrameInSeconds
	float ___m_maxComputationTimePerFrameInSeconds_6;
	// UnityEngine.Matrix4x4 Cinemachine.CinemachineConfiner2D/ShapeCache::m_bakedToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_bakedToWorld_7;
	// UnityEngine.Collider2D Cinemachine.CinemachineConfiner2D/ShapeCache::m_boundingShape2D
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___m_boundingShape2D_8;

public:
	inline static int32_t get_offset_of_m_confinerOven_0() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_confinerOven_0)); }
	inline ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * get_m_confinerOven_0() const { return ___m_confinerOven_0; }
	inline ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF ** get_address_of_m_confinerOven_0() { return &___m_confinerOven_0; }
	inline void set_m_confinerOven_0(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * value)
	{
		___m_confinerOven_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_confinerOven_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalPath_1() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_OriginalPath_1)); }
	inline List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * get_m_OriginalPath_1() const { return ___m_OriginalPath_1; }
	inline List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 ** get_address_of_m_OriginalPath_1() { return &___m_OriginalPath_1; }
	inline void set_m_OriginalPath_1(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * value)
	{
		___m_OriginalPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeltaWorldToBaked_2() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_DeltaWorldToBaked_2)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_DeltaWorldToBaked_2() const { return ___m_DeltaWorldToBaked_2; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_DeltaWorldToBaked_2() { return &___m_DeltaWorldToBaked_2; }
	inline void set_m_DeltaWorldToBaked_2(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_DeltaWorldToBaked_2 = value;
	}

	inline static int32_t get_offset_of_m_DeltaBakedToWorld_3() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_DeltaBakedToWorld_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_DeltaBakedToWorld_3() const { return ___m_DeltaBakedToWorld_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_DeltaBakedToWorld_3() { return &___m_DeltaBakedToWorld_3; }
	inline void set_m_DeltaBakedToWorld_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_DeltaBakedToWorld_3 = value;
	}

	inline static int32_t get_offset_of_m_aspectRatio_4() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_aspectRatio_4)); }
	inline float get_m_aspectRatio_4() const { return ___m_aspectRatio_4; }
	inline float* get_address_of_m_aspectRatio_4() { return &___m_aspectRatio_4; }
	inline void set_m_aspectRatio_4(float value)
	{
		___m_aspectRatio_4 = value;
	}

	inline static int32_t get_offset_of_m_maxWindowSize_5() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_maxWindowSize_5)); }
	inline float get_m_maxWindowSize_5() const { return ___m_maxWindowSize_5; }
	inline float* get_address_of_m_maxWindowSize_5() { return &___m_maxWindowSize_5; }
	inline void set_m_maxWindowSize_5(float value)
	{
		___m_maxWindowSize_5 = value;
	}

	inline static int32_t get_offset_of_m_maxComputationTimePerFrameInSeconds_6() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_maxComputationTimePerFrameInSeconds_6)); }
	inline float get_m_maxComputationTimePerFrameInSeconds_6() const { return ___m_maxComputationTimePerFrameInSeconds_6; }
	inline float* get_address_of_m_maxComputationTimePerFrameInSeconds_6() { return &___m_maxComputationTimePerFrameInSeconds_6; }
	inline void set_m_maxComputationTimePerFrameInSeconds_6(float value)
	{
		___m_maxComputationTimePerFrameInSeconds_6 = value;
	}

	inline static int32_t get_offset_of_m_bakedToWorld_7() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_bakedToWorld_7)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_bakedToWorld_7() const { return ___m_bakedToWorld_7; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_bakedToWorld_7() { return &___m_bakedToWorld_7; }
	inline void set_m_bakedToWorld_7(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_bakedToWorld_7 = value;
	}

	inline static int32_t get_offset_of_m_boundingShape2D_8() { return static_cast<int32_t>(offsetof(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3, ___m_boundingShape2D_8)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_m_boundingShape2D_8() const { return ___m_boundingShape2D_8; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_m_boundingShape2D_8() { return &___m_boundingShape2D_8; }
	inline void set_m_boundingShape2D_8(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___m_boundingShape2D_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boundingShape2D_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineConfiner2D/ShapeCache
struct ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_pinvoke
{
	ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * ___m_confinerOven_0;
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * ___m_OriginalPath_1;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaWorldToBaked_2;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaBakedToWorld_3;
	float ___m_aspectRatio_4;
	float ___m_maxWindowSize_5;
	float ___m_maxComputationTimePerFrameInSeconds_6;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_bakedToWorld_7;
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___m_boundingShape2D_8;
};
// Native definition for COM marshalling of Cinemachine.CinemachineConfiner2D/ShapeCache
struct ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_com
{
	ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * ___m_confinerOven_0;
	List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * ___m_OriginalPath_1;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaWorldToBaked_2;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_DeltaBakedToWorld_3;
	float ___m_aspectRatio_4;
	float ___m_maxWindowSize_5;
	float ___m_maxComputationTimePerFrameInSeconds_6;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_bakedToWorld_7;
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___m_boundingShape2D_8;
};

// Cinemachine.CinemachineConfiner2D/VcamExtraState
struct VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineConfiner2D/VcamExtraState::m_PreviousDisplacement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousDisplacement_0;
	// UnityEngine.Vector3 Cinemachine.CinemachineConfiner2D/VcamExtraState::m_DampedDisplacement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_DampedDisplacement_1;
	// Cinemachine.ConfinerOven/BakedSolution Cinemachine.CinemachineConfiner2D/VcamExtraState::m_BakedSolution
	BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * ___m_BakedSolution_2;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineConfiner2D/VcamExtraState::m_vcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcam_3;

public:
	inline static int32_t get_offset_of_m_PreviousDisplacement_0() { return static_cast<int32_t>(offsetof(VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051, ___m_PreviousDisplacement_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousDisplacement_0() const { return ___m_PreviousDisplacement_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousDisplacement_0() { return &___m_PreviousDisplacement_0; }
	inline void set_m_PreviousDisplacement_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousDisplacement_0 = value;
	}

	inline static int32_t get_offset_of_m_DampedDisplacement_1() { return static_cast<int32_t>(offsetof(VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051, ___m_DampedDisplacement_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_DampedDisplacement_1() const { return ___m_DampedDisplacement_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_DampedDisplacement_1() { return &___m_DampedDisplacement_1; }
	inline void set_m_DampedDisplacement_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_DampedDisplacement_1 = value;
	}

	inline static int32_t get_offset_of_m_BakedSolution_2() { return static_cast<int32_t>(offsetof(VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051, ___m_BakedSolution_2)); }
	inline BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * get_m_BakedSolution_2() const { return ___m_BakedSolution_2; }
	inline BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C ** get_address_of_m_BakedSolution_2() { return &___m_BakedSolution_2; }
	inline void set_m_BakedSolution_2(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * value)
	{
		___m_BakedSolution_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BakedSolution_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_vcam_3() { return static_cast<int32_t>(offsetof(VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051, ___m_vcam_3)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcam_3() const { return ___m_vcam_3; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcam_3() { return &___m_vcam_3; }
	inline void set_m_vcam_3(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcam_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcam_3), (void*)value);
	}
};


// Cinemachine.CinemachineCore/Stage
struct Stage_t9554C4B330D6E1FC747961284AC5B84778D8FC0D 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t9554C4B330D6E1FC747961284AC5B84778D8FC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore/UpdateFilter
struct UpdateFilter_t2C5466EF51B990B5103BE478BE3F326523407D3F 
{
public:
	// System.Int32 Cinemachine.CinemachineCore/UpdateFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateFilter_t2C5466EF51B990B5103BE478BE3F326523407D3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineDollyCart/UpdateMethod
struct UpdateMethod_t2B84E1F9FABB7F59F88A635BC8ECEE40D4E6A9C0 
{
public:
	// System.Int32 Cinemachine.CinemachineDollyCart/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t2B84E1F9FABB7F59F88A635BC8ECEE40D4E6A9C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineFramingTransposer/AdjustmentMode
struct AdjustmentMode_t77C399D5B0175861AB36EC4669E6840209240BDD 
{
public:
	// System.Int32 Cinemachine.CinemachineFramingTransposer/AdjustmentMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdjustmentMode_t77C399D5B0175861AB36EC4669E6840209240BDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineFramingTransposer/FramingMode
struct FramingMode_tD3B894A01E8B950B2112655A4488344ABC45D48F 
{
public:
	// System.Int32 Cinemachine.CinemachineFramingTransposer/FramingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramingMode_tD3B894A01E8B950B2112655A4488344ABC45D48F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineGroupComposer/AdjustmentMode
struct AdjustmentMode_t4B7B68D056759B9D04165EE17406E2D9F99A4F83 
{
public:
	// System.Int32 Cinemachine.CinemachineGroupComposer/AdjustmentMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdjustmentMode_t4B7B68D056759B9D04165EE17406E2D9F99A4F83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineGroupComposer/FramingMode
struct FramingMode_t3CC8ED65FD17BCC526D6FDC56272ACCF95DF73ED 
{
public:
	// System.Int32 Cinemachine.CinemachineGroupComposer/FramingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramingMode_t3CC8ED65FD17BCC526D6FDC56272ACCF95DF73ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseDefinition/RepeatMode
struct RepeatMode_t91F45490E5F0A6E07F658AE317B7016E34D7BDE0 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseDefinition/RepeatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RepeatMode_t91F45490E5F0A6E07F658AE317B7016E34D7BDE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseDefinition/SignalSource
struct SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA  : public RuntimeObject
{
public:
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseDefinition/SignalSource::m_Def
	CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * ___m_Def_0;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseDefinition/SignalSource::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_1;
	// System.Single Cinemachine.CinemachineImpulseDefinition/SignalSource::m_StartTimeOffset
	float ___m_StartTimeOffset_2;

public:
	inline static int32_t get_offset_of_m_Def_0() { return static_cast<int32_t>(offsetof(SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA, ___m_Def_0)); }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * get_m_Def_0() const { return ___m_Def_0; }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 ** get_address_of_m_Def_0() { return &___m_Def_0; }
	inline void set_m_Def_0(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * value)
	{
		___m_Def_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Def_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA, ___m_Velocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeOffset_2() { return static_cast<int32_t>(offsetof(SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA, ___m_StartTimeOffset_2)); }
	inline float get_m_StartTimeOffset_2() const { return ___m_StartTimeOffset_2; }
	inline float* get_address_of_m_StartTimeOffset_2() { return &___m_StartTimeOffset_2; }
	inline void set_m_StartTimeOffset_2(float value)
	{
		___m_StartTimeOffset_2 = value;
	}
};


// Cinemachine.CinemachinePOV/RecenterTargetMode
struct RecenterTargetMode_tE921F1DB86277D5F8E5D385AF7B242B20FD55444 
{
public:
	// System.Int32 Cinemachine.CinemachinePOV/RecenterTargetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecenterTargetMode_tE921F1DB86277D5F8E5D385AF7B242B20FD55444, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachinePath/Waypoint
struct Waypoint_t02202325CC5CDB3DD7A6299E58C8C93A38E514D5 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachinePath/Waypoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 Cinemachine.CinemachinePath/Waypoint::tangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___tangent_1;
	// System.Single Cinemachine.CinemachinePath/Waypoint::roll
	float ___roll_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Waypoint_t02202325CC5CDB3DD7A6299E58C8C93A38E514D5, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_tangent_1() { return static_cast<int32_t>(offsetof(Waypoint_t02202325CC5CDB3DD7A6299E58C8C93A38E514D5, ___tangent_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_tangent_1() const { return ___tangent_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_tangent_1() { return &___tangent_1; }
	inline void set_tangent_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___tangent_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(Waypoint_t02202325CC5CDB3DD7A6299E58C8C93A38E514D5, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}
};


// Cinemachine.CinemachinePathBase/Appearance
struct Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8  : public RuntimeObject
{
public:
	// UnityEngine.Color Cinemachine.CinemachinePathBase/Appearance::pathColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pathColor_0;
	// UnityEngine.Color Cinemachine.CinemachinePathBase/Appearance::inactivePathColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___inactivePathColor_1;
	// System.Single Cinemachine.CinemachinePathBase/Appearance::width
	float ___width_2;

public:
	inline static int32_t get_offset_of_pathColor_0() { return static_cast<int32_t>(offsetof(Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8, ___pathColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pathColor_0() const { return ___pathColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pathColor_0() { return &___pathColor_0; }
	inline void set_pathColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pathColor_0 = value;
	}

	inline static int32_t get_offset_of_inactivePathColor_1() { return static_cast<int32_t>(offsetof(Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8, ___inactivePathColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_inactivePathColor_1() const { return ___inactivePathColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_inactivePathColor_1() { return &___inactivePathColor_1; }
	inline void set_inactivePathColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___inactivePathColor_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}
};


// Cinemachine.CinemachinePathBase/PositionUnits
struct PositionUnits_tACEF8F12129BC22E9629CCF24E0142ABE8514EAA 
{
public:
	// System.Int32 Cinemachine.CinemachinePathBase/PositionUnits::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionUnits_tACEF8F12129BC22E9629CCF24E0142ABE8514EAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineSmoothPath/Waypoint
struct Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 
{
public:
	// UnityEngine.Vector3 Cinemachine.CinemachineSmoothPath/Waypoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single Cinemachine.CinemachineSmoothPath/Waypoint::roll
	float ___roll_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_roll_1() { return static_cast<int32_t>(offsetof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54, ___roll_1)); }
	inline float get_roll_1() const { return ___roll_1; }
	inline float* get_address_of_roll_1() { return &___roll_1; }
	inline void set_roll_1(float value)
	{
		___roll_1 = value;
	}
};


// Cinemachine.CinemachineStoryboard/FillStrategy
struct FillStrategy_t64D64AAB40BD0C071679510281437912BACDE55E 
{
public:
	// System.Int32 Cinemachine.CinemachineStoryboard/FillStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillStrategy_t64D64AAB40BD0C071679510281437912BACDE55E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/PositionMode
struct PositionMode_t32E29A6C3380A3D4CCCB9A50E97C0FE09B87766D 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/PositionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionMode_t32E29A6C3380A3D4CCCB9A50E97C0FE09B87766D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/RotationMode
struct RotationMode_t8654A62CA54FADB9F5A5F3CC756D186FDB3853DF 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/RotationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationMode_t8654A62CA54FADB9F5A5F3CC756D186FDB3853DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTargetGroup/UpdateMethod
struct UpdateMethod_tF4277584632456B0A5AF2D38BE3026311E1DE250 
{
public:
	// System.Int32 Cinemachine.CinemachineTargetGroup/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_tF4277584632456B0A5AF2D38BE3026311E1DE250, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTrackedDolly/CameraUpMode
struct CameraUpMode_tF118724ABBF5BDA380A857A77DB5BD11C858D038 
{
public:
	// System.Int32 Cinemachine.CinemachineTrackedDolly/CameraUpMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraUpMode_tF118724ABBF5BDA380A857A77DB5BD11C858D038, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/AngularDampingMode
struct AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/AngularDampingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/BlendHint
struct BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/BlendHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.ConfinerOven/BakedSolution
struct BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C  : public RuntimeObject
{
public:
	// System.Single Cinemachine.ConfinerOven/BakedSolution::<FrustumHeight>k__BackingField
	float ___U3CFrustumHeightU3Ek__BackingField_0;
	// System.Single Cinemachine.ConfinerOven/BakedSolution::m_frustumSizeIntSpace
	float ___m_frustumSizeIntSpace_1;
	// Cinemachine.ConfinerOven/AspectStretcher Cinemachine.ConfinerOven/BakedSolution::m_AspectStretcher
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  ___m_AspectStretcher_2;
	// System.Boolean Cinemachine.ConfinerOven/BakedSolution::m_HasBones
	bool ___m_HasBones_3;
	// System.Double Cinemachine.ConfinerOven/BakedSolution::m_SqrPolygonDiagonal
	double ___m_SqrPolygonDiagonal_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven/BakedSolution::m_OriginalPolygon
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_OriginalPolygon_5;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven/BakedSolution::m_Solution
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_Solution_6;

public:
	inline static int32_t get_offset_of_U3CFrustumHeightU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___U3CFrustumHeightU3Ek__BackingField_0)); }
	inline float get_U3CFrustumHeightU3Ek__BackingField_0() const { return ___U3CFrustumHeightU3Ek__BackingField_0; }
	inline float* get_address_of_U3CFrustumHeightU3Ek__BackingField_0() { return &___U3CFrustumHeightU3Ek__BackingField_0; }
	inline void set_U3CFrustumHeightU3Ek__BackingField_0(float value)
	{
		___U3CFrustumHeightU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_frustumSizeIntSpace_1() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_frustumSizeIntSpace_1)); }
	inline float get_m_frustumSizeIntSpace_1() const { return ___m_frustumSizeIntSpace_1; }
	inline float* get_address_of_m_frustumSizeIntSpace_1() { return &___m_frustumSizeIntSpace_1; }
	inline void set_m_frustumSizeIntSpace_1(float value)
	{
		___m_frustumSizeIntSpace_1 = value;
	}

	inline static int32_t get_offset_of_m_AspectStretcher_2() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_AspectStretcher_2)); }
	inline AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  get_m_AspectStretcher_2() const { return ___m_AspectStretcher_2; }
	inline AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * get_address_of_m_AspectStretcher_2() { return &___m_AspectStretcher_2; }
	inline void set_m_AspectStretcher_2(AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  value)
	{
		___m_AspectStretcher_2 = value;
	}

	inline static int32_t get_offset_of_m_HasBones_3() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_HasBones_3)); }
	inline bool get_m_HasBones_3() const { return ___m_HasBones_3; }
	inline bool* get_address_of_m_HasBones_3() { return &___m_HasBones_3; }
	inline void set_m_HasBones_3(bool value)
	{
		___m_HasBones_3 = value;
	}

	inline static int32_t get_offset_of_m_SqrPolygonDiagonal_4() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_SqrPolygonDiagonal_4)); }
	inline double get_m_SqrPolygonDiagonal_4() const { return ___m_SqrPolygonDiagonal_4; }
	inline double* get_address_of_m_SqrPolygonDiagonal_4() { return &___m_SqrPolygonDiagonal_4; }
	inline void set_m_SqrPolygonDiagonal_4(double value)
	{
		___m_SqrPolygonDiagonal_4 = value;
	}

	inline static int32_t get_offset_of_m_OriginalPolygon_5() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_OriginalPolygon_5)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_OriginalPolygon_5() const { return ___m_OriginalPolygon_5; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_OriginalPolygon_5() { return &___m_OriginalPolygon_5; }
	inline void set_m_OriginalPolygon_5(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_OriginalPolygon_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalPolygon_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Solution_6() { return static_cast<int32_t>(offsetof(BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C, ___m_Solution_6)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_Solution_6() const { return ___m_Solution_6; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_Solution_6() { return &___m_Solution_6; }
	inline void set_m_Solution_6(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_Solution_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Solution_6), (void*)value);
	}
};


// Cinemachine.ConfinerOven/BakingState
struct BakingState_t746ABA01408D04604BD59FF7C85EA663C2DEFFAA 
{
public:
	// System.Int32 Cinemachine.ConfinerOven/BakingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BakingState_t746ABA01408D04604BD59FF7C85EA663C2DEFFAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.ConfinerOven/BakingStateCache
struct BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C 
{
public:
	// ClipperLib.ClipperOffset Cinemachine.ConfinerOven/BakingStateCache::offsetter
	ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC * ___offsetter_0;
	// System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution> Cinemachine.ConfinerOven/BakingStateCache::solutions
	List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 * ___solutions_1;
	// Cinemachine.ConfinerOven/PolygonSolution Cinemachine.ConfinerOven/BakingStateCache::rightCandidate
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  ___rightCandidate_2;
	// Cinemachine.ConfinerOven/PolygonSolution Cinemachine.ConfinerOven/BakingStateCache::leftCandidate
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  ___leftCandidate_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven/BakingStateCache::maxCandidate
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___maxCandidate_4;
	// System.Single Cinemachine.ConfinerOven/BakingStateCache::stepSize
	float ___stepSize_5;
	// System.Single Cinemachine.ConfinerOven/BakingStateCache::maxFrustumHeight
	float ___maxFrustumHeight_6;
	// System.Single Cinemachine.ConfinerOven/BakingStateCache::currentFrustumHeight
	float ___currentFrustumHeight_7;
	// System.Single Cinemachine.ConfinerOven/BakingStateCache::bakeTime
	float ___bakeTime_8;

public:
	inline static int32_t get_offset_of_offsetter_0() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___offsetter_0)); }
	inline ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC * get_offsetter_0() const { return ___offsetter_0; }
	inline ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC ** get_address_of_offsetter_0() { return &___offsetter_0; }
	inline void set_offsetter_0(ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC * value)
	{
		___offsetter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetter_0), (void*)value);
	}

	inline static int32_t get_offset_of_solutions_1() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___solutions_1)); }
	inline List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 * get_solutions_1() const { return ___solutions_1; }
	inline List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 ** get_address_of_solutions_1() { return &___solutions_1; }
	inline void set_solutions_1(List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 * value)
	{
		___solutions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solutions_1), (void*)value);
	}

	inline static int32_t get_offset_of_rightCandidate_2() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___rightCandidate_2)); }
	inline PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  get_rightCandidate_2() const { return ___rightCandidate_2; }
	inline PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * get_address_of_rightCandidate_2() { return &___rightCandidate_2; }
	inline void set_rightCandidate_2(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  value)
	{
		___rightCandidate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightCandidate_2))->___m_Polygons_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftCandidate_3() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___leftCandidate_3)); }
	inline PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  get_leftCandidate_3() const { return ___leftCandidate_3; }
	inline PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * get_address_of_leftCandidate_3() { return &___leftCandidate_3; }
	inline void set_leftCandidate_3(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA  value)
	{
		___leftCandidate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftCandidate_3))->___m_Polygons_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_maxCandidate_4() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___maxCandidate_4)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_maxCandidate_4() const { return ___maxCandidate_4; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_maxCandidate_4() { return &___maxCandidate_4; }
	inline void set_maxCandidate_4(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___maxCandidate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxCandidate_4), (void*)value);
	}

	inline static int32_t get_offset_of_stepSize_5() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___stepSize_5)); }
	inline float get_stepSize_5() const { return ___stepSize_5; }
	inline float* get_address_of_stepSize_5() { return &___stepSize_5; }
	inline void set_stepSize_5(float value)
	{
		___stepSize_5 = value;
	}

	inline static int32_t get_offset_of_maxFrustumHeight_6() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___maxFrustumHeight_6)); }
	inline float get_maxFrustumHeight_6() const { return ___maxFrustumHeight_6; }
	inline float* get_address_of_maxFrustumHeight_6() { return &___maxFrustumHeight_6; }
	inline void set_maxFrustumHeight_6(float value)
	{
		___maxFrustumHeight_6 = value;
	}

	inline static int32_t get_offset_of_currentFrustumHeight_7() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___currentFrustumHeight_7)); }
	inline float get_currentFrustumHeight_7() const { return ___currentFrustumHeight_7; }
	inline float* get_address_of_currentFrustumHeight_7() { return &___currentFrustumHeight_7; }
	inline void set_currentFrustumHeight_7(float value)
	{
		___currentFrustumHeight_7 = value;
	}

	inline static int32_t get_offset_of_bakeTime_8() { return static_cast<int32_t>(offsetof(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C, ___bakeTime_8)); }
	inline float get_bakeTime_8() const { return ___bakeTime_8; }
	inline float* get_address_of_bakeTime_8() { return &___bakeTime_8; }
	inline void set_bakeTime_8(float value)
	{
		___bakeTime_8 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.ConfinerOven/BakingStateCache
struct BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_pinvoke
{
	ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC * ___offsetter_0;
	List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 * ___solutions_1;
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke ___rightCandidate_2;
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke ___leftCandidate_3;
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___maxCandidate_4;
	float ___stepSize_5;
	float ___maxFrustumHeight_6;
	float ___currentFrustumHeight_7;
	float ___bakeTime_8;
};
// Native definition for COM marshalling of Cinemachine.ConfinerOven/BakingStateCache
struct BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_com
{
	ClipperOffset_tF88813112995934923621A7FC86876E01E95F2DC * ___offsetter_0;
	List_1_t3A5212B6EEF176C9097A7A224F017A42CE0A3BB7 * ___solutions_1;
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com ___rightCandidate_2;
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com ___leftCandidate_3;
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___maxCandidate_4;
	float ___stepSize_5;
	float ___maxFrustumHeight_6;
	float ___currentFrustumHeight_7;
	float ___bakeTime_8;
};

// Cinemachine.DocumentationSortingAttribute/Level
struct Level_t58A8CCDD92B93E24A101D11B3F0CC06808D58BBD 
{
public:
	// System.Int32 Cinemachine.DocumentationSortingAttribute/Level::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Level_t58A8CCDD92B93E24A101D11B3F0CC06808D58BBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.Utility.HeadingTracker/Item
struct Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C 
{
public:
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker/Item::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_0;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___velocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_0() const { return ___velocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Item_tFFE692E039CD7B3C69EF589F573073CBC3B78B6C, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// Cinemachine.LensSettings/OverrideModes
struct OverrideModes_t9F50F7DC95547FC2670F467631715B79E53095C4 
{
public:
	// System.Int32 Cinemachine.LensSettings/OverrideModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverrideModes_t9F50F7DC95547FC2670F467631715B79E53095C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 
{
public:
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::X
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___X_0;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Y
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___Y_1;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Z
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___X_0)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_X_0() const { return ___X_0; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___Y_1)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_Y_1() const { return ___Y_1; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9, ___Z_2)); }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  get_Z_2() const { return ___Z_2; }
	inline NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  value)
	{
		___Z_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___X_0;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___Y_1;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke ___Z_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___X_0;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___Y_1;
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com ___Z_2;
};

// Cinemachine.TargetPositionCache/Mode
struct Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E 
{
public:
	// System.Int32 Cinemachine.TargetPositionCache/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t0E8223D47B28BF57DC054FEE24CEDEA6E67BFD0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.UpdateTracker/UpdateClock
struct UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4 
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateClock::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateClock_tAC77FB482A65400E9526AB615FCFB2D7936F4BF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode
struct DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode
struct DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/Mode
struct Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBCEED1F0072367C4C796DE014C5B33B0FC0B9A41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode
struct TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179 
{
public:
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeMode_t008A84386C0EFF10B63D7D1232CE5D799B972179, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent
struct TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// Cinemachine.TargetPositionCache/CacheCurve/Item
struct Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B 
{
public:
	// UnityEngine.Vector3 Cinemachine.TargetPositionCache/CacheCurve/Item::Pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Pos_0;
	// UnityEngine.Quaternion Cinemachine.TargetPositionCache/CacheCurve/Item::Rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rot_1;

public:
	inline static int32_t get_offset_of_Pos_0() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Pos_0() const { return ___Pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Pos_0() { return &___Pos_0; }
	inline void set_Pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Pos_0 = value;
	}

	inline static int32_t get_offset_of_Rot_1() { return static_cast<int32_t>(offsetof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B, ___Rot_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rot_1() const { return ___Rot_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rot_1() { return &___Rot_1; }
	inline void set_Rot_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rot_1 = value;
	}
};


// Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8 
{
public:
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// Cinemachine.AxisState/SpeedMode Cinemachine.AxisState::m_SpeedMode
	int32_t ___m_SpeedMode_1;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_3;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_4;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_5;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_6;
	// System.Boolean Cinemachine.AxisState::m_InvertInput
	bool ___m_InvertInput_7;
	// System.Single Cinemachine.AxisState::m_MinValue
	float ___m_MinValue_8;
	// System.Single Cinemachine.AxisState::m_MaxValue
	float ___m_MaxValue_9;
	// System.Boolean Cinemachine.AxisState::m_Wrap
	bool ___m_Wrap_10;
	// Cinemachine.AxisState/Recentering Cinemachine.AxisState::m_Recentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_Recentering_11;
	// System.Single Cinemachine.AxisState::m_CurrentSpeed
	float ___m_CurrentSpeed_12;
	// System.Single Cinemachine.AxisState::m_LastUpdateTime
	float ___m_LastUpdateTime_13;
	// System.Int32 Cinemachine.AxisState::m_LastUpdateFrame
	int32_t ___m_LastUpdateFrame_14;
	// Cinemachine.AxisState/IInputAxisProvider Cinemachine.AxisState::m_InputAxisProvider
	RuntimeObject* ___m_InputAxisProvider_16;
	// System.Int32 Cinemachine.AxisState::m_InputAxisIndex
	int32_t ___m_InputAxisIndex_17;
	// System.Boolean Cinemachine.AxisState::<ValueRangeLocked>k__BackingField
	bool ___U3CValueRangeLockedU3Ek__BackingField_18;
	// System.Boolean Cinemachine.AxisState::<HasRecentering>k__BackingField
	bool ___U3CHasRecenteringU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMode_1() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_SpeedMode_1)); }
	inline int32_t get_m_SpeedMode_1() const { return ___m_SpeedMode_1; }
	inline int32_t* get_address_of_m_SpeedMode_1() { return &___m_SpeedMode_1; }
	inline void set_m_SpeedMode_1(int32_t value)
	{
		___m_SpeedMode_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_AccelTime_3() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_AccelTime_3)); }
	inline float get_m_AccelTime_3() const { return ___m_AccelTime_3; }
	inline float* get_address_of_m_AccelTime_3() { return &___m_AccelTime_3; }
	inline void set_m_AccelTime_3(float value)
	{
		___m_AccelTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecelTime_4() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_DecelTime_4)); }
	inline float get_m_DecelTime_4() const { return ___m_DecelTime_4; }
	inline float* get_address_of_m_DecelTime_4() { return &___m_DecelTime_4; }
	inline void set_m_DecelTime_4(float value)
	{
		___m_DecelTime_4 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisName_5() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisName_5)); }
	inline String_t* get_m_InputAxisName_5() const { return ___m_InputAxisName_5; }
	inline String_t** get_address_of_m_InputAxisName_5() { return &___m_InputAxisName_5; }
	inline void set_m_InputAxisName_5(String_t* value)
	{
		___m_InputAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisValue_6() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisValue_6)); }
	inline float get_m_InputAxisValue_6() const { return ___m_InputAxisValue_6; }
	inline float* get_address_of_m_InputAxisValue_6() { return &___m_InputAxisValue_6; }
	inline void set_m_InputAxisValue_6(float value)
	{
		___m_InputAxisValue_6 = value;
	}

	inline static int32_t get_offset_of_m_InvertInput_7() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InvertInput_7)); }
	inline bool get_m_InvertInput_7() const { return ___m_InvertInput_7; }
	inline bool* get_address_of_m_InvertInput_7() { return &___m_InvertInput_7; }
	inline void set_m_InvertInput_7(bool value)
	{
		___m_InvertInput_7 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_8() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MinValue_8)); }
	inline float get_m_MinValue_8() const { return ___m_MinValue_8; }
	inline float* get_address_of_m_MinValue_8() { return &___m_MinValue_8; }
	inline void set_m_MinValue_8(float value)
	{
		___m_MinValue_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_9() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxValue_9)); }
	inline float get_m_MaxValue_9() const { return ___m_MaxValue_9; }
	inline float* get_address_of_m_MaxValue_9() { return &___m_MaxValue_9; }
	inline void set_m_MaxValue_9(float value)
	{
		___m_MaxValue_9 = value;
	}

	inline static int32_t get_offset_of_m_Wrap_10() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Wrap_10)); }
	inline bool get_m_Wrap_10() const { return ___m_Wrap_10; }
	inline bool* get_address_of_m_Wrap_10() { return &___m_Wrap_10; }
	inline void set_m_Wrap_10(bool value)
	{
		___m_Wrap_10 = value;
	}

	inline static int32_t get_offset_of_m_Recentering_11() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Recentering_11)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_Recentering_11() const { return ___m_Recentering_11; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_Recentering_11() { return &___m_Recentering_11; }
	inline void set_m_Recentering_11(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_Recentering_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSpeed_12() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_CurrentSpeed_12)); }
	inline float get_m_CurrentSpeed_12() const { return ___m_CurrentSpeed_12; }
	inline float* get_address_of_m_CurrentSpeed_12() { return &___m_CurrentSpeed_12; }
	inline void set_m_CurrentSpeed_12(float value)
	{
		___m_CurrentSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateTime_13() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateTime_13)); }
	inline float get_m_LastUpdateTime_13() const { return ___m_LastUpdateTime_13; }
	inline float* get_address_of_m_LastUpdateTime_13() { return &___m_LastUpdateTime_13; }
	inline void set_m_LastUpdateTime_13(float value)
	{
		___m_LastUpdateTime_13 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateFrame_14() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateFrame_14)); }
	inline int32_t get_m_LastUpdateFrame_14() const { return ___m_LastUpdateFrame_14; }
	inline int32_t* get_address_of_m_LastUpdateFrame_14() { return &___m_LastUpdateFrame_14; }
	inline void set_m_LastUpdateFrame_14(int32_t value)
	{
		___m_LastUpdateFrame_14 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisProvider_16() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisProvider_16)); }
	inline RuntimeObject* get_m_InputAxisProvider_16() const { return ___m_InputAxisProvider_16; }
	inline RuntimeObject** get_address_of_m_InputAxisProvider_16() { return &___m_InputAxisProvider_16; }
	inline void set_m_InputAxisProvider_16(RuntimeObject* value)
	{
		___m_InputAxisProvider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisProvider_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisIndex_17() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisIndex_17)); }
	inline int32_t get_m_InputAxisIndex_17() const { return ___m_InputAxisIndex_17; }
	inline int32_t* get_address_of_m_InputAxisIndex_17() { return &___m_InputAxisIndex_17; }
	inline void set_m_InputAxisIndex_17(int32_t value)
	{
		___m_InputAxisIndex_17 = value;
	}

	inline static int32_t get_offset_of_U3CValueRangeLockedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CValueRangeLockedU3Ek__BackingField_18)); }
	inline bool get_U3CValueRangeLockedU3Ek__BackingField_18() const { return ___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CValueRangeLockedU3Ek__BackingField_18() { return &___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline void set_U3CValueRangeLockedU3Ek__BackingField_18(bool value)
	{
		___U3CValueRangeLockedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHasRecenteringU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CHasRecenteringU3Ek__BackingField_19)); }
	inline bool get_U3CHasRecenteringU3Ek__BackingField_19() const { return ___U3CHasRecenteringU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CHasRecenteringU3Ek__BackingField_19() { return &___U3CHasRecenteringU3Ek__BackingField_19; }
	inline void set_U3CHasRecenteringU3Ek__BackingField_19(bool value)
	{
		___U3CHasRecenteringU3Ek__BackingField_19 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_pinvoke
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	char* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_com
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	Il2CppChar* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};

// Cinemachine.CinemachineBlendDefinition
struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE 
{
public:
	// Cinemachine.CinemachineBlendDefinition/Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_CustomCurve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
	}
};


// Cinemachine.CinemachineCore
struct CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_tD11960D31B37E3E1E7900CD412637FCD8221ABA5 * ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_tB774BAB8B129533A7AD9D22465C5D383A0A03AB5 * ___mActiveCameras_11;
	// System.Boolean Cinemachine.CinemachineCore::m_ActiveCamerasAreSorted
	bool ___m_ActiveCamerasAreSorted_12;
	// System.Int32 Cinemachine.CinemachineCore::m_ActivationSequence
	int32_t ___m_ActivationSequence_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_t404D2AF2D38681274B3783CCFE8103CC2AD8A790 * ___mAllCameras_14;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mRoundRobinVcamLastFrame_15;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tEC0D7891F01585BC992E380FEDE139A2FEEB1C1D * ___mUpdateStatus_18;
	// Cinemachine.CinemachineCore/UpdateFilter Cinemachine.CinemachineCore::<CurrentUpdateFilter>k__BackingField
	int32_t ___U3CCurrentUpdateFilterU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_mActiveBrains_10() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___mActiveBrains_10)); }
	inline List_1_tD11960D31B37E3E1E7900CD412637FCD8221ABA5 * get_mActiveBrains_10() const { return ___mActiveBrains_10; }
	inline List_1_tD11960D31B37E3E1E7900CD412637FCD8221ABA5 ** get_address_of_mActiveBrains_10() { return &___mActiveBrains_10; }
	inline void set_mActiveBrains_10(List_1_tD11960D31B37E3E1E7900CD412637FCD8221ABA5 * value)
	{
		___mActiveBrains_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveBrains_10), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameras_11() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___mActiveCameras_11)); }
	inline List_1_tB774BAB8B129533A7AD9D22465C5D383A0A03AB5 * get_mActiveCameras_11() const { return ___mActiveCameras_11; }
	inline List_1_tB774BAB8B129533A7AD9D22465C5D383A0A03AB5 ** get_address_of_mActiveCameras_11() { return &___mActiveCameras_11; }
	inline void set_mActiveCameras_11(List_1_tB774BAB8B129533A7AD9D22465C5D383A0A03AB5 * value)
	{
		___mActiveCameras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameras_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveCamerasAreSorted_12() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___m_ActiveCamerasAreSorted_12)); }
	inline bool get_m_ActiveCamerasAreSorted_12() const { return ___m_ActiveCamerasAreSorted_12; }
	inline bool* get_address_of_m_ActiveCamerasAreSorted_12() { return &___m_ActiveCamerasAreSorted_12; }
	inline void set_m_ActiveCamerasAreSorted_12(bool value)
	{
		___m_ActiveCamerasAreSorted_12 = value;
	}

	inline static int32_t get_offset_of_m_ActivationSequence_13() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___m_ActivationSequence_13)); }
	inline int32_t get_m_ActivationSequence_13() const { return ___m_ActivationSequence_13; }
	inline int32_t* get_address_of_m_ActivationSequence_13() { return &___m_ActivationSequence_13; }
	inline void set_m_ActivationSequence_13(int32_t value)
	{
		___m_ActivationSequence_13 = value;
	}

	inline static int32_t get_offset_of_mAllCameras_14() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___mAllCameras_14)); }
	inline List_1_t404D2AF2D38681274B3783CCFE8103CC2AD8A790 * get_mAllCameras_14() const { return ___mAllCameras_14; }
	inline List_1_t404D2AF2D38681274B3783CCFE8103CC2AD8A790 ** get_address_of_mAllCameras_14() { return &___mAllCameras_14; }
	inline void set_mAllCameras_14(List_1_t404D2AF2D38681274B3783CCFE8103CC2AD8A790 * value)
	{
		___mAllCameras_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCameras_14), (void*)value);
	}

	inline static int32_t get_offset_of_mRoundRobinVcamLastFrame_15() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___mRoundRobinVcamLastFrame_15)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mRoundRobinVcamLastFrame_15() const { return ___mRoundRobinVcamLastFrame_15; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mRoundRobinVcamLastFrame_15() { return &___mRoundRobinVcamLastFrame_15; }
	inline void set_mRoundRobinVcamLastFrame_15(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mRoundRobinVcamLastFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRoundRobinVcamLastFrame_15), (void*)value);
	}

	inline static int32_t get_offset_of_mUpdateStatus_18() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___mUpdateStatus_18)); }
	inline Dictionary_2_tEC0D7891F01585BC992E380FEDE139A2FEEB1C1D * get_mUpdateStatus_18() const { return ___mUpdateStatus_18; }
	inline Dictionary_2_tEC0D7891F01585BC992E380FEDE139A2FEEB1C1D ** get_address_of_mUpdateStatus_18() { return &___mUpdateStatus_18; }
	inline void set_mUpdateStatus_18(Dictionary_2_tEC0D7891F01585BC992E380FEDE139A2FEEB1C1D * value)
	{
		___mUpdateStatus_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateStatus_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentUpdateFilterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534, ___U3CCurrentUpdateFilterU3Ek__BackingField_19)); }
	inline int32_t get_U3CCurrentUpdateFilterU3Ek__BackingField_19() const { return ___U3CCurrentUpdateFilterU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CCurrentUpdateFilterU3Ek__BackingField_19() { return &___U3CCurrentUpdateFilterU3Ek__BackingField_19; }
	inline void set_U3CCurrentUpdateFilterU3Ek__BackingField_19(int32_t value)
	{
		___U3CCurrentUpdateFilterU3Ek__BackingField_19 = value;
	}
};

struct CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields
{
public:
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore/AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore/GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::mLastUpdateTime
	float ___mLastUpdateTime_16;
	// System.Int32 Cinemachine.CinemachineCore::<FixedFrameCount>k__BackingField
	int32_t ___U3CFixedFrameCountU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_kStreamingVersion_0() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___kStreamingVersion_0)); }
	inline int32_t get_kStreamingVersion_0() const { return ___kStreamingVersion_0; }
	inline int32_t* get_address_of_kStreamingVersion_0() { return &___kStreamingVersion_0; }
	inline void set_kStreamingVersion_0(int32_t value)
	{
		___kStreamingVersion_0 = value;
	}

	inline static int32_t get_offset_of_kVersionString_1() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___kVersionString_1)); }
	inline String_t* get_kVersionString_1() const { return ___kVersionString_1; }
	inline String_t** get_address_of_kVersionString_1() { return &___kVersionString_1; }
	inline void set_kVersionString_1(String_t* value)
	{
		___kVersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kVersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___sInstance_2)); }
	inline CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * get_sInstance_2() const { return ___sInstance_2; }
	inline CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}

	inline static int32_t get_offset_of_sShowHiddenObjects_3() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___sShowHiddenObjects_3)); }
	inline bool get_sShowHiddenObjects_3() const { return ___sShowHiddenObjects_3; }
	inline bool* get_address_of_sShowHiddenObjects_3() { return &___sShowHiddenObjects_3; }
	inline void set_sShowHiddenObjects_3(bool value)
	{
		___sShowHiddenObjects_3 = value;
	}

	inline static int32_t get_offset_of_GetInputAxis_4() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___GetInputAxis_4)); }
	inline AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * get_GetInputAxis_4() const { return ___GetInputAxis_4; }
	inline AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 ** get_address_of_GetInputAxis_4() { return &___GetInputAxis_4; }
	inline void set_GetInputAxis_4(AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * value)
	{
		___GetInputAxis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInputAxis_4), (void*)value);
	}

	inline static int32_t get_offset_of_UniformDeltaTimeOverride_5() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___UniformDeltaTimeOverride_5)); }
	inline float get_UniformDeltaTimeOverride_5() const { return ___UniformDeltaTimeOverride_5; }
	inline float* get_address_of_UniformDeltaTimeOverride_5() { return &___UniformDeltaTimeOverride_5; }
	inline void set_UniformDeltaTimeOverride_5(float value)
	{
		___UniformDeltaTimeOverride_5 = value;
	}

	inline static int32_t get_offset_of_CurrentTimeOverride_6() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___CurrentTimeOverride_6)); }
	inline float get_CurrentTimeOverride_6() const { return ___CurrentTimeOverride_6; }
	inline float* get_address_of_CurrentTimeOverride_6() { return &___CurrentTimeOverride_6; }
	inline void set_CurrentTimeOverride_6(float value)
	{
		___CurrentTimeOverride_6 = value;
	}

	inline static int32_t get_offset_of_GetBlendOverride_7() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___GetBlendOverride_7)); }
	inline GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * get_GetBlendOverride_7() const { return ___GetBlendOverride_7; }
	inline GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 ** get_address_of_GetBlendOverride_7() { return &___GetBlendOverride_7; }
	inline void set_GetBlendOverride_7(GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * value)
	{
		___GetBlendOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBlendOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUpdatedEvent_8() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___CameraUpdatedEvent_8)); }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * get_CameraUpdatedEvent_8() const { return ___CameraUpdatedEvent_8; }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E ** get_address_of_CameraUpdatedEvent_8() { return &___CameraUpdatedEvent_8; }
	inline void set_CameraUpdatedEvent_8(BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * value)
	{
		___CameraUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_CameraCutEvent_9() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___CameraCutEvent_9)); }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * get_CameraCutEvent_9() const { return ___CameraCutEvent_9; }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E ** get_address_of_CameraCutEvent_9() { return &___CameraCutEvent_9; }
	inline void set_CameraCutEvent_9(BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * value)
	{
		___CameraCutEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraCutEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_mLastUpdateTime_16() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___mLastUpdateTime_16)); }
	inline float get_mLastUpdateTime_16() const { return ___mLastUpdateTime_16; }
	inline float* get_address_of_mLastUpdateTime_16() { return &___mLastUpdateTime_16; }
	inline void set_mLastUpdateTime_16(float value)
	{
		___mLastUpdateTime_16 = value;
	}

	inline static int32_t get_offset_of_U3CFixedFrameCountU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_StaticFields, ___U3CFixedFrameCountU3Ek__BackingField_17)); }
	inline int32_t get_U3CFixedFrameCountU3Ek__BackingField_17() const { return ___U3CFixedFrameCountU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CFixedFrameCountU3Ek__BackingField_17() { return &___U3CFixedFrameCountU3Ek__BackingField_17; }
	inline void set_U3CFixedFrameCountU3Ek__BackingField_17(int32_t value)
	{
		___U3CFixedFrameCountU3Ek__BackingField_17 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Cinemachine.ConfinerOven
struct ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF  : public RuntimeObject
{
public:
	// System.Single Cinemachine.ConfinerOven::m_MinFrustumHeightWithBones
	float ___m_MinFrustumHeightWithBones_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven::m_OriginalPolygon
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_OriginalPolygon_1;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>> Cinemachine.ConfinerOven::m_Skeleton
	List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___m_Skeleton_2;
	// UnityEngine.Rect Cinemachine.ConfinerOven::m_PolygonRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_PolygonRect_6;
	// Cinemachine.ConfinerOven/AspectStretcher Cinemachine.ConfinerOven::m_AspectStretcher
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  ___m_AspectStretcher_7;
	// System.Single Cinemachine.ConfinerOven::m_maxComputationTimeForFullSkeletonBakeInSeconds
	float ___m_maxComputationTimeForFullSkeletonBakeInSeconds_8;
	// Cinemachine.ConfinerOven/BakingState Cinemachine.ConfinerOven::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_9;
	// System.Single Cinemachine.ConfinerOven::m_BakeProgress
	float ___m_BakeProgress_10;
	// Cinemachine.ConfinerOven/BakingStateCache Cinemachine.ConfinerOven::m_Cache
	BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C  ___m_Cache_11;

public:
	inline static int32_t get_offset_of_m_MinFrustumHeightWithBones_0() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_MinFrustumHeightWithBones_0)); }
	inline float get_m_MinFrustumHeightWithBones_0() const { return ___m_MinFrustumHeightWithBones_0; }
	inline float* get_address_of_m_MinFrustumHeightWithBones_0() { return &___m_MinFrustumHeightWithBones_0; }
	inline void set_m_MinFrustumHeightWithBones_0(float value)
	{
		___m_MinFrustumHeightWithBones_0 = value;
	}

	inline static int32_t get_offset_of_m_OriginalPolygon_1() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_OriginalPolygon_1)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_OriginalPolygon_1() const { return ___m_OriginalPolygon_1; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_OriginalPolygon_1() { return &___m_OriginalPolygon_1; }
	inline void set_m_OriginalPolygon_1(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_OriginalPolygon_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalPolygon_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Skeleton_2() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_Skeleton_2)); }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * get_m_Skeleton_2() const { return ___m_Skeleton_2; }
	inline List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** get_address_of_m_Skeleton_2() { return &___m_Skeleton_2; }
	inline void set_m_Skeleton_2(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * value)
	{
		___m_Skeleton_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Skeleton_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PolygonRect_6() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_PolygonRect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_PolygonRect_6() const { return ___m_PolygonRect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_PolygonRect_6() { return &___m_PolygonRect_6; }
	inline void set_m_PolygonRect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_PolygonRect_6 = value;
	}

	inline static int32_t get_offset_of_m_AspectStretcher_7() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_AspectStretcher_7)); }
	inline AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  get_m_AspectStretcher_7() const { return ___m_AspectStretcher_7; }
	inline AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * get_address_of_m_AspectStretcher_7() { return &___m_AspectStretcher_7; }
	inline void set_m_AspectStretcher_7(AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  value)
	{
		___m_AspectStretcher_7 = value;
	}

	inline static int32_t get_offset_of_m_maxComputationTimeForFullSkeletonBakeInSeconds_8() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_maxComputationTimeForFullSkeletonBakeInSeconds_8)); }
	inline float get_m_maxComputationTimeForFullSkeletonBakeInSeconds_8() const { return ___m_maxComputationTimeForFullSkeletonBakeInSeconds_8; }
	inline float* get_address_of_m_maxComputationTimeForFullSkeletonBakeInSeconds_8() { return &___m_maxComputationTimeForFullSkeletonBakeInSeconds_8; }
	inline void set_m_maxComputationTimeForFullSkeletonBakeInSeconds_8(float value)
	{
		___m_maxComputationTimeForFullSkeletonBakeInSeconds_8 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___U3CStateU3Ek__BackingField_9)); }
	inline int32_t get_U3CStateU3Ek__BackingField_9() const { return ___U3CStateU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_9() { return &___U3CStateU3Ek__BackingField_9; }
	inline void set_U3CStateU3Ek__BackingField_9(int32_t value)
	{
		___U3CStateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_m_BakeProgress_10() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_BakeProgress_10)); }
	inline float get_m_BakeProgress_10() const { return ___m_BakeProgress_10; }
	inline float* get_address_of_m_BakeProgress_10() { return &___m_BakeProgress_10; }
	inline void set_m_BakeProgress_10(float value)
	{
		___m_BakeProgress_10 = value;
	}

	inline static int32_t get_offset_of_m_Cache_11() { return static_cast<int32_t>(offsetof(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF, ___m_Cache_11)); }
	inline BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C  get_m_Cache_11() const { return ___m_Cache_11; }
	inline BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C * get_address_of_m_Cache_11() { return &___m_Cache_11; }
	inline void set_m_Cache_11(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C  value)
	{
		___m_Cache_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Cache_11))->___offsetter_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Cache_11))->___solutions_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Cache_11))->___rightCandidate_2))->___m_Polygons_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Cache_11))->___leftCandidate_3))->___m_Polygons_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Cache_11))->___maxCandidate_4), (void*)NULL);
		#endif
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_ModeOverride_6() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___ModeOverride_6)); }
	inline int32_t get_ModeOverride_6() const { return ___ModeOverride_6; }
	inline int32_t* get_address_of_ModeOverride_6() { return &___ModeOverride_6; }
	inline void set_ModeOverride_6(int32_t value)
	{
		___ModeOverride_6 = value;
	}

	inline static int32_t get_offset_of_LensShift_7() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___LensShift_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_LensShift_7() const { return ___LensShift_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_LensShift_7() { return &___LensShift_7; }
	inline void set_LensShift_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___LensShift_7 = value;
	}

	inline static int32_t get_offset_of_GateFit_8() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___GateFit_8)); }
	inline int32_t get_GateFit_8() const { return ___GateFit_8; }
	inline int32_t* get_address_of_GateFit_8() { return &___GateFit_8; }
	inline void set_GateFit_8(int32_t value)
	{
		___GateFit_8 = value;
	}

	inline static int32_t get_offset_of_m_SensorSize_9() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_SensorSize_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_SensorSize_9() const { return ___m_SensorSize_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_SensorSize_9() { return &___m_SensorSize_9; }
	inline void set_m_SensorSize_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_SensorSize_9 = value;
	}

	inline static int32_t get_offset_of_m_OrthoFromCamera_10() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_OrthoFromCamera_10)); }
	inline bool get_m_OrthoFromCamera_10() const { return ___m_OrthoFromCamera_10; }
	inline bool* get_address_of_m_OrthoFromCamera_10() { return &___m_OrthoFromCamera_10; }
	inline void set_m_OrthoFromCamera_10(bool value)
	{
		___m_OrthoFromCamera_10 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalFromCamera_11() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_PhysicalFromCamera_11)); }
	inline bool get_m_PhysicalFromCamera_11() const { return ___m_PhysicalFromCamera_11; }
	inline bool* get_address_of_m_PhysicalFromCamera_11() { return &___m_PhysicalFromCamera_11; }
	inline void set_m_PhysicalFromCamera_11(bool value)
	{
		___m_PhysicalFromCamera_11 = value;
	}
};

struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields, ___Default_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Cinemachine.CinemachineCore/UpdateStatus
struct UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.CinemachineCore/UpdateStatus::lastUpdateFrame
	int32_t ___lastUpdateFrame_0;
	// System.Int32 Cinemachine.CinemachineCore/UpdateStatus::lastUpdateFixedFrame
	int32_t ___lastUpdateFixedFrame_1;
	// Cinemachine.UpdateTracker/UpdateClock Cinemachine.CinemachineCore/UpdateStatus::lastUpdateMode
	int32_t ___lastUpdateMode_2;
	// System.Single Cinemachine.CinemachineCore/UpdateStatus::lastUpdateDeltaTime
	float ___lastUpdateDeltaTime_3;

public:
	inline static int32_t get_offset_of_lastUpdateFrame_0() { return static_cast<int32_t>(offsetof(UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4, ___lastUpdateFrame_0)); }
	inline int32_t get_lastUpdateFrame_0() const { return ___lastUpdateFrame_0; }
	inline int32_t* get_address_of_lastUpdateFrame_0() { return &___lastUpdateFrame_0; }
	inline void set_lastUpdateFrame_0(int32_t value)
	{
		___lastUpdateFrame_0 = value;
	}

	inline static int32_t get_offset_of_lastUpdateFixedFrame_1() { return static_cast<int32_t>(offsetof(UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4, ___lastUpdateFixedFrame_1)); }
	inline int32_t get_lastUpdateFixedFrame_1() const { return ___lastUpdateFixedFrame_1; }
	inline int32_t* get_address_of_lastUpdateFixedFrame_1() { return &___lastUpdateFixedFrame_1; }
	inline void set_lastUpdateFixedFrame_1(int32_t value)
	{
		___lastUpdateFixedFrame_1 = value;
	}

	inline static int32_t get_offset_of_lastUpdateMode_2() { return static_cast<int32_t>(offsetof(UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4, ___lastUpdateMode_2)); }
	inline int32_t get_lastUpdateMode_2() const { return ___lastUpdateMode_2; }
	inline int32_t* get_address_of_lastUpdateMode_2() { return &___lastUpdateMode_2; }
	inline void set_lastUpdateMode_2(int32_t value)
	{
		___lastUpdateMode_2 = value;
	}

	inline static int32_t get_offset_of_lastUpdateDeltaTime_3() { return static_cast<int32_t>(offsetof(UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4, ___lastUpdateDeltaTime_3)); }
	inline float get_lastUpdateDeltaTime_3() const { return ___lastUpdateDeltaTime_3; }
	inline float* get_address_of_lastUpdateDeltaTime_3() { return &___lastUpdateDeltaTime_3; }
	inline void set_lastUpdateDeltaTime_3(float value)
	{
		___lastUpdateDeltaTime_3 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 
{
public:
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackShape
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_AttackShape_0;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayShape
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_DecayShape_1;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackTime
	float ___m_AttackTime_2;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_SustainTime
	float ___m_SustainTime_3;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayTime
	float ___m_DecayTime_4;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_ScaleWithImpact
	bool ___m_ScaleWithImpact_5;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_HoldForever
	bool ___m_HoldForever_6;

public:
	inline static int32_t get_offset_of_m_AttackShape_0() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_AttackShape_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_AttackShape_0() const { return ___m_AttackShape_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_AttackShape_0() { return &___m_AttackShape_0; }
	inline void set_m_AttackShape_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_AttackShape_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttackShape_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DecayShape_1() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_DecayShape_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_DecayShape_1() const { return ___m_DecayShape_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_DecayShape_1() { return &___m_DecayShape_1; }
	inline void set_m_DecayShape_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_DecayShape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DecayShape_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttackTime_2() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_AttackTime_2)); }
	inline float get_m_AttackTime_2() const { return ___m_AttackTime_2; }
	inline float* get_address_of_m_AttackTime_2() { return &___m_AttackTime_2; }
	inline void set_m_AttackTime_2(float value)
	{
		___m_AttackTime_2 = value;
	}

	inline static int32_t get_offset_of_m_SustainTime_3() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_SustainTime_3)); }
	inline float get_m_SustainTime_3() const { return ___m_SustainTime_3; }
	inline float* get_address_of_m_SustainTime_3() { return &___m_SustainTime_3; }
	inline void set_m_SustainTime_3(float value)
	{
		___m_SustainTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecayTime_4() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_DecayTime_4)); }
	inline float get_m_DecayTime_4() const { return ___m_DecayTime_4; }
	inline float* get_address_of_m_DecayTime_4() { return &___m_DecayTime_4; }
	inline void set_m_DecayTime_4(float value)
	{
		___m_DecayTime_4 = value;
	}

	inline static int32_t get_offset_of_m_ScaleWithImpact_5() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_ScaleWithImpact_5)); }
	inline bool get_m_ScaleWithImpact_5() const { return ___m_ScaleWithImpact_5; }
	inline bool* get_address_of_m_ScaleWithImpact_5() { return &___m_ScaleWithImpact_5; }
	inline void set_m_ScaleWithImpact_5(bool value)
	{
		___m_ScaleWithImpact_5 = value;
	}

	inline static int32_t get_offset_of_m_HoldForever_6() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_HoldForever_6)); }
	inline bool get_m_HoldForever_6() const { return ___m_HoldForever_6; }
	inline bool* get_address_of_m_HoldForever_6() { return &___m_HoldForever_6; }
	inline void set_m_HoldForever_6(bool value)
	{
		___m_HoldForever_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_pinvoke
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke ___m_AttackShape_0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};
// Native definition for COM marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_com
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com* ___m_AttackShape_0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com* ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};

// Cinemachine.CinemachineOrbitalTransposer/Heading
struct Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_Definition
	int32_t ___m_Definition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_Bias
	float ___m_Bias_2;

public:
	inline static int32_t get_offset_of_m_Definition_0() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Definition_0)); }
	inline int32_t get_m_Definition_0() const { return ___m_Definition_0; }
	inline int32_t* get_address_of_m_Definition_0() { return &___m_Definition_0; }
	inline void set_m_Definition_0(int32_t value)
	{
		___m_Definition_0 = value;
	}

	inline static int32_t get_offset_of_m_VelocityFilterStrength_1() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_VelocityFilterStrength_1)); }
	inline int32_t get_m_VelocityFilterStrength_1() const { return ___m_VelocityFilterStrength_1; }
	inline int32_t* get_address_of_m_VelocityFilterStrength_1() { return &___m_VelocityFilterStrength_1; }
	inline void set_m_VelocityFilterStrength_1(int32_t value)
	{
		___m_VelocityFilterStrength_1 = value;
	}

	inline static int32_t get_offset_of_m_Bias_2() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Bias_2)); }
	inline float get_m_Bias_2() const { return ___m_Bias_2; }
	inline float* get_address_of_m_Bias_2() { return &___m_Bias_2; }
	inline void set_m_Bias_2(float value)
	{
		___m_Bias_2 = value;
	}
};


// Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 
{
public:
	// Cinemachine.CinemachineTriggerAction/ActionSettings/Mode Cinemachine.CinemachineTriggerAction/ActionSettings::m_Action
	int32_t ___m_Action_0;
	// UnityEngine.Object Cinemachine.CinemachineTriggerAction/ActionSettings::m_Target
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Target_1;
	// System.Int32 Cinemachine.CinemachineTriggerAction/ActionSettings::m_BoostAmount
	int32_t ___m_BoostAmount_2;
	// System.Single Cinemachine.CinemachineTriggerAction/ActionSettings::m_StartTime
	float ___m_StartTime_3;
	// Cinemachine.CinemachineTriggerAction/ActionSettings/TimeMode Cinemachine.CinemachineTriggerAction/ActionSettings::m_Mode
	int32_t ___m_Mode_4;
	// Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent Cinemachine.CinemachineTriggerAction/ActionSettings::m_Event
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Target_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BoostAmount_2() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_BoostAmount_2)); }
	inline int32_t get_m_BoostAmount_2() const { return ___m_BoostAmount_2; }
	inline int32_t* get_address_of_m_BoostAmount_2() { return &___m_BoostAmount_2; }
	inline void set_m_BoostAmount_2(int32_t value)
	{
		___m_BoostAmount_2 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_3() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_StartTime_3)); }
	inline float get_m_StartTime_3() const { return ___m_StartTime_3; }
	inline float* get_address_of_m_StartTime_3() { return &___m_StartTime_3; }
	inline void set_m_StartTime_3(float value)
	{
		___m_StartTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Mode_4() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Mode_4)); }
	inline int32_t get_m_Mode_4() const { return ___m_Mode_4; }
	inline int32_t* get_address_of_m_Mode_4() { return &___m_Mode_4; }
	inline void set_m_Mode_4(int32_t value)
	{
		___m_Mode_4 = value;
	}

	inline static int32_t get_offset_of_m_Event_5() { return static_cast<int32_t>(offsetof(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6, ___m_Event_5)); }
	inline TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * get_m_Event_5() const { return ___m_Event_5; }
	inline TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B ** get_address_of_m_Event_5() { return &___m_Event_5; }
	inline void set_m_Event_5(TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * value)
	{
		___m_Event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke
{
	int32_t ___m_Action_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_Target_1;
	int32_t ___m_BoostAmount_2;
	float ___m_StartTime_3;
	int32_t ___m_Mode_4;
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;
};
// Native definition for COM marshalling of Cinemachine.CinemachineTriggerAction/ActionSettings
struct ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com
{
	int32_t ___m_Action_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_Target_1;
	int32_t ___m_BoostAmount_2;
	float ___m_StartTime_3;
	int32_t ___m_Mode_4;
	TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * ___m_Event_5;
};

// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;

public:
	inline static int32_t get_offset_of_m_BlendHint_0() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_BlendHint_0)); }
	inline int32_t get_m_BlendHint_0() const { return ___m_BlendHint_0; }
	inline int32_t* get_address_of_m_BlendHint_0() { return &___m_BlendHint_0; }
	inline void set_m_BlendHint_0(int32_t value)
	{
		___m_BlendHint_0 = value;
	}

	inline static int32_t get_offset_of_m_InheritPosition_1() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_InheritPosition_1)); }
	inline bool get_m_InheritPosition_1() const { return ___m_InheritPosition_1; }
	inline bool* get_address_of_m_InheritPosition_1() { return &___m_InheritPosition_1; }
	inline void set_m_InheritPosition_1(bool value)
	{
		___m_InheritPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_OnCameraLive_2() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_OnCameraLive_2)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_OnCameraLive_2() const { return ___m_OnCameraLive_2; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_OnCameraLive_2() { return &___m_OnCameraLive_2; }
	inline void set_m_OnCameraLive_2(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_OnCameraLive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCameraLive_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};

// Cinemachine.UpdateTracker/UpdateStatus
struct UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::windowStart
	int32_t ___windowStart_1;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowLateUpdateMoves
	int32_t ___numWindowLateUpdateMoves_2;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindowFixedUpdateMoves
	int32_t ___numWindowFixedUpdateMoves_3;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::numWindows
	int32_t ___numWindows_4;
	// System.Int32 Cinemachine.UpdateTracker/UpdateStatus::lastFrameUpdated
	int32_t ___lastFrameUpdated_5;
	// UnityEngine.Matrix4x4 Cinemachine.UpdateTracker/UpdateStatus::lastPos
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lastPos_6;
	// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::<PreferredUpdate>k__BackingField
	int32_t ___U3CPreferredUpdateU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_windowStart_1() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___windowStart_1)); }
	inline int32_t get_windowStart_1() const { return ___windowStart_1; }
	inline int32_t* get_address_of_windowStart_1() { return &___windowStart_1; }
	inline void set_windowStart_1(int32_t value)
	{
		___windowStart_1 = value;
	}

	inline static int32_t get_offset_of_numWindowLateUpdateMoves_2() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowLateUpdateMoves_2)); }
	inline int32_t get_numWindowLateUpdateMoves_2() const { return ___numWindowLateUpdateMoves_2; }
	inline int32_t* get_address_of_numWindowLateUpdateMoves_2() { return &___numWindowLateUpdateMoves_2; }
	inline void set_numWindowLateUpdateMoves_2(int32_t value)
	{
		___numWindowLateUpdateMoves_2 = value;
	}

	inline static int32_t get_offset_of_numWindowFixedUpdateMoves_3() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindowFixedUpdateMoves_3)); }
	inline int32_t get_numWindowFixedUpdateMoves_3() const { return ___numWindowFixedUpdateMoves_3; }
	inline int32_t* get_address_of_numWindowFixedUpdateMoves_3() { return &___numWindowFixedUpdateMoves_3; }
	inline void set_numWindowFixedUpdateMoves_3(int32_t value)
	{
		___numWindowFixedUpdateMoves_3 = value;
	}

	inline static int32_t get_offset_of_numWindows_4() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___numWindows_4)); }
	inline int32_t get_numWindows_4() const { return ___numWindows_4; }
	inline int32_t* get_address_of_numWindows_4() { return &___numWindows_4; }
	inline void set_numWindows_4(int32_t value)
	{
		___numWindows_4 = value;
	}

	inline static int32_t get_offset_of_lastFrameUpdated_5() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastFrameUpdated_5)); }
	inline int32_t get_lastFrameUpdated_5() const { return ___lastFrameUpdated_5; }
	inline int32_t* get_address_of_lastFrameUpdated_5() { return &___lastFrameUpdated_5; }
	inline void set_lastFrameUpdated_5(int32_t value)
	{
		___lastFrameUpdated_5 = value;
	}

	inline static int32_t get_offset_of_lastPos_6() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___lastPos_6)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_lastPos_6() const { return ___lastPos_6; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_lastPos_6() { return &___lastPos_6; }
	inline void set_lastPos_6(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___lastPos_6 = value;
	}

	inline static int32_t get_offset_of_U3CPreferredUpdateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B, ___U3CPreferredUpdateU3Ek__BackingField_7)); }
	inline int32_t get_U3CPreferredUpdateU3Ek__BackingField_7() const { return ___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CPreferredUpdateU3Ek__BackingField_7() { return &___U3CPreferredUpdateU3Ek__BackingField_7; }
	inline void set_U3CPreferredUpdateU3Ek__BackingField_7(int32_t value)
	{
		___U3CPreferredUpdateU3Ek__BackingField_7 = value;
	}
};


// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB 
{
public:
	// System.Single Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Time
	float ___Time_0;
	// System.Boolean Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::IsCut
	bool ___IsCut_1;
	// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheEntry/RecordingItem::Item
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;

public:
	inline static int32_t get_offset_of_Time_0() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Time_0)); }
	inline float get_Time_0() const { return ___Time_0; }
	inline float* get_address_of_Time_0() { return &___Time_0; }
	inline void set_Time_0(float value)
	{
		___Time_0 = value;
	}

	inline static int32_t get_offset_of_IsCut_1() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___IsCut_1)); }
	inline bool get_IsCut_1() const { return ___IsCut_1; }
	inline bool* get_address_of_IsCut_1() { return &___IsCut_1; }
	inline void set_IsCut_1(bool value)
	{
		___IsCut_1 = value;
	}

	inline static int32_t get_offset_of_Item_2() { return static_cast<int32_t>(offsetof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB, ___Item_2)); }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  get_Item_2() const { return ___Item_2; }
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * get_address_of_Item_2() { return &___Item_2; }
	inline void set_Item_2(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		___Item_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
};
// Native definition for COM marshalling of Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
struct RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___Item_2;
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom0_11)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom1_12)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom2_13)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom3_14)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___m_CustomOverflow_15)); }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_pinvoke
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_com
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseDefinition::m_ImpulseChannel
	int32_t ___m_ImpulseChannel_0;
	// Cinemachine.SignalSourceAsset Cinemachine.CinemachineImpulseDefinition::m_RawSignal
	SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * ___m_RawSignal_1;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_AmplitudeGain
	float ___m_AmplitudeGain_2;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_FrequencyGain
	float ___m_FrequencyGain_3;
	// Cinemachine.CinemachineImpulseDefinition/RepeatMode Cinemachine.CinemachineImpulseDefinition::m_RepeatMode
	int32_t ___m_RepeatMode_4;
	// System.Boolean Cinemachine.CinemachineImpulseDefinition::m_Randomize
	bool ___m_Randomize_5;
	// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseDefinition::m_TimeEnvelope
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  ___m_TimeEnvelope_6;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_ImpactRadius
	float ___m_ImpactRadius_7;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode Cinemachine.CinemachineImpulseDefinition::m_DirectionMode
	int32_t ___m_DirectionMode_8;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode Cinemachine.CinemachineImpulseDefinition::m_DissipationMode
	int32_t ___m_DissipationMode_9;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_DissipationDistance
	float ___m_DissipationDistance_10;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_PropagationSpeed
	float ___m_PropagationSpeed_11;

public:
	inline static int32_t get_offset_of_m_ImpulseChannel_0() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_ImpulseChannel_0)); }
	inline int32_t get_m_ImpulseChannel_0() const { return ___m_ImpulseChannel_0; }
	inline int32_t* get_address_of_m_ImpulseChannel_0() { return &___m_ImpulseChannel_0; }
	inline void set_m_ImpulseChannel_0(int32_t value)
	{
		___m_ImpulseChannel_0 = value;
	}

	inline static int32_t get_offset_of_m_RawSignal_1() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_RawSignal_1)); }
	inline SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * get_m_RawSignal_1() const { return ___m_RawSignal_1; }
	inline SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B ** get_address_of_m_RawSignal_1() { return &___m_RawSignal_1; }
	inline void set_m_RawSignal_1(SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * value)
	{
		___m_RawSignal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RawSignal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AmplitudeGain_2() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_AmplitudeGain_2)); }
	inline float get_m_AmplitudeGain_2() const { return ___m_AmplitudeGain_2; }
	inline float* get_address_of_m_AmplitudeGain_2() { return &___m_AmplitudeGain_2; }
	inline void set_m_AmplitudeGain_2(float value)
	{
		___m_AmplitudeGain_2 = value;
	}

	inline static int32_t get_offset_of_m_FrequencyGain_3() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_FrequencyGain_3)); }
	inline float get_m_FrequencyGain_3() const { return ___m_FrequencyGain_3; }
	inline float* get_address_of_m_FrequencyGain_3() { return &___m_FrequencyGain_3; }
	inline void set_m_FrequencyGain_3(float value)
	{
		___m_FrequencyGain_3 = value;
	}

	inline static int32_t get_offset_of_m_RepeatMode_4() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_RepeatMode_4)); }
	inline int32_t get_m_RepeatMode_4() const { return ___m_RepeatMode_4; }
	inline int32_t* get_address_of_m_RepeatMode_4() { return &___m_RepeatMode_4; }
	inline void set_m_RepeatMode_4(int32_t value)
	{
		___m_RepeatMode_4 = value;
	}

	inline static int32_t get_offset_of_m_Randomize_5() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_Randomize_5)); }
	inline bool get_m_Randomize_5() const { return ___m_Randomize_5; }
	inline bool* get_address_of_m_Randomize_5() { return &___m_Randomize_5; }
	inline void set_m_Randomize_5(bool value)
	{
		___m_Randomize_5 = value;
	}

	inline static int32_t get_offset_of_m_TimeEnvelope_6() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_TimeEnvelope_6)); }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  get_m_TimeEnvelope_6() const { return ___m_TimeEnvelope_6; }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * get_address_of_m_TimeEnvelope_6() { return &___m_TimeEnvelope_6; }
	inline void set_m_TimeEnvelope_6(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  value)
	{
		___m_TimeEnvelope_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TimeEnvelope_6))->___m_AttackShape_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TimeEnvelope_6))->___m_DecayShape_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ImpactRadius_7() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_ImpactRadius_7)); }
	inline float get_m_ImpactRadius_7() const { return ___m_ImpactRadius_7; }
	inline float* get_address_of_m_ImpactRadius_7() { return &___m_ImpactRadius_7; }
	inline void set_m_ImpactRadius_7(float value)
	{
		___m_ImpactRadius_7 = value;
	}

	inline static int32_t get_offset_of_m_DirectionMode_8() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DirectionMode_8)); }
	inline int32_t get_m_DirectionMode_8() const { return ___m_DirectionMode_8; }
	inline int32_t* get_address_of_m_DirectionMode_8() { return &___m_DirectionMode_8; }
	inline void set_m_DirectionMode_8(int32_t value)
	{
		___m_DirectionMode_8 = value;
	}

	inline static int32_t get_offset_of_m_DissipationMode_9() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DissipationMode_9)); }
	inline int32_t get_m_DissipationMode_9() const { return ___m_DissipationMode_9; }
	inline int32_t* get_address_of_m_DissipationMode_9() { return &___m_DissipationMode_9; }
	inline void set_m_DissipationMode_9(int32_t value)
	{
		___m_DissipationMode_9 = value;
	}

	inline static int32_t get_offset_of_m_DissipationDistance_10() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DissipationDistance_10)); }
	inline float get_m_DissipationDistance_10() const { return ___m_DissipationDistance_10; }
	inline float* get_address_of_m_DissipationDistance_10() { return &___m_DissipationDistance_10; }
	inline void set_m_DissipationDistance_10(float value)
	{
		___m_DissipationDistance_10 = value;
	}

	inline static int32_t get_offset_of_m_PropagationSpeed_11() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_PropagationSpeed_11)); }
	inline float get_m_PropagationSpeed_11() const { return ___m_PropagationSpeed_11; }
	inline float* get_address_of_m_PropagationSpeed_11() { return &___m_PropagationSpeed_11; }
	inline void set_m_PropagationSpeed_11(float value)
	{
		___m_PropagationSpeed_11 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Cinemachine.SignalSourceAsset
struct SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CinemachineBlendListCamera/Instruction
struct Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineBlendListCamera/Instruction::m_VirtualCamera
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_0;
	// System.Single Cinemachine.CinemachineBlendListCamera/Instruction::m_Hold
	float ___m_Hold_1;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBlendListCamera/Instruction::m_Blend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;

public:
	inline static int32_t get_offset_of_m_VirtualCamera_0() { return static_cast<int32_t>(offsetof(Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD, ___m_VirtualCamera_0)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_VirtualCamera_0() const { return ___m_VirtualCamera_0; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_VirtualCamera_0() { return &___m_VirtualCamera_0; }
	inline void set_m_VirtualCamera_0(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_VirtualCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VirtualCamera_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hold_1() { return static_cast<int32_t>(offsetof(Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD, ___m_Hold_1)); }
	inline float get_m_Hold_1() const { return ___m_Hold_1; }
	inline float* get_address_of_m_Hold_1() { return &___m_Hold_1; }
	inline void set_m_Hold_1(float value)
	{
		___m_Hold_1 = value;
	}

	inline static int32_t get_offset_of_m_Blend_2() { return static_cast<int32_t>(offsetof(Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD, ___m_Blend_2)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_m_Blend_2() const { return ___m_Blend_2; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_m_Blend_2() { return &___m_Blend_2; }
	inline void set_m_Blend_2(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___m_Blend_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Blend_2))->___m_CustomCurve_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineBlendListCamera/Instruction
struct Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_pinvoke
{
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_0;
	float ___m_Hold_1;
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineBlendListCamera/Instruction
struct Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_com
{
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_VirtualCamera_0;
	float ___m_Hold_1;
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;
};

// Cinemachine.CinemachineBlenderSettings/CustomBlend
struct CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85 
{
public:
	// System.String Cinemachine.CinemachineBlenderSettings/CustomBlend::m_From
	String_t* ___m_From_0;
	// System.String Cinemachine.CinemachineBlenderSettings/CustomBlend::m_To
	String_t* ___m_To_1;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBlenderSettings/CustomBlend::m_Blend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;

public:
	inline static int32_t get_offset_of_m_From_0() { return static_cast<int32_t>(offsetof(CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85, ___m_From_0)); }
	inline String_t* get_m_From_0() const { return ___m_From_0; }
	inline String_t** get_address_of_m_From_0() { return &___m_From_0; }
	inline void set_m_From_0(String_t* value)
	{
		___m_From_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_From_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_To_1() { return static_cast<int32_t>(offsetof(CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85, ___m_To_1)); }
	inline String_t* get_m_To_1() const { return ___m_To_1; }
	inline String_t** get_address_of_m_To_1() { return &___m_To_1; }
	inline void set_m_To_1(String_t* value)
	{
		___m_To_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_To_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blend_2() { return static_cast<int32_t>(offsetof(CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85, ___m_Blend_2)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_m_Blend_2() const { return ___m_Blend_2; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_m_Blend_2() { return &___m_Blend_2; }
	inline void set_m_Blend_2(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___m_Blend_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Blend_2))->___m_CustomCurve_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineBlenderSettings/CustomBlend
struct CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_pinvoke
{
	char* ___m_From_0;
	char* ___m_To_1;
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineBlenderSettings/CustomBlend
struct CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_com
{
	Il2CppChar* ___m_From_0;
	Il2CppChar* ___m_To_1;
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_Blend_2;
};

// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineFreeLook/CreateRigDelegate
struct CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineFreeLook/DestroyRigDelegate
struct DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent
struct ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4  : public RuntimeObject
{
public:
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_StartTime
	float ___m_StartTime_0;
	// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Envelope
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  ___m_Envelope_1;
	// Cinemachine.ISignalSource6D Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_SignalSource
	RuntimeObject* ___m_SignalSource_2;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_3;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Radius
	float ___m_Radius_4;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DirectionMode
	int32_t ___m_DirectionMode_5;
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Channel
	int32_t ___m_Channel_6;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DissipationMode
	int32_t ___m_DissipationMode_7;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DissipationDistance
	float ___m_DissipationDistance_8;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_PropagationSpeed
	float ___m_PropagationSpeed_9;

public:
	inline static int32_t get_offset_of_m_StartTime_0() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_StartTime_0)); }
	inline float get_m_StartTime_0() const { return ___m_StartTime_0; }
	inline float* get_address_of_m_StartTime_0() { return &___m_StartTime_0; }
	inline void set_m_StartTime_0(float value)
	{
		___m_StartTime_0 = value;
	}

	inline static int32_t get_offset_of_m_Envelope_1() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_Envelope_1)); }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  get_m_Envelope_1() const { return ___m_Envelope_1; }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * get_address_of_m_Envelope_1() { return &___m_Envelope_1; }
	inline void set_m_Envelope_1(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  value)
	{
		___m_Envelope_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Envelope_1))->___m_AttackShape_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Envelope_1))->___m_DecayShape_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SignalSource_2() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_SignalSource_2)); }
	inline RuntimeObject* get_m_SignalSource_2() const { return ___m_SignalSource_2; }
	inline RuntimeObject** get_address_of_m_SignalSource_2() { return &___m_SignalSource_2; }
	inline void set_m_SignalSource_2(RuntimeObject* value)
	{
		___m_SignalSource_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SignalSource_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Position_3() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_Position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_3() const { return ___m_Position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_3() { return &___m_Position_3; }
	inline void set_m_Position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_3 = value;
	}

	inline static int32_t get_offset_of_m_Radius_4() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_Radius_4)); }
	inline float get_m_Radius_4() const { return ___m_Radius_4; }
	inline float* get_address_of_m_Radius_4() { return &___m_Radius_4; }
	inline void set_m_Radius_4(float value)
	{
		___m_Radius_4 = value;
	}

	inline static int32_t get_offset_of_m_DirectionMode_5() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_DirectionMode_5)); }
	inline int32_t get_m_DirectionMode_5() const { return ___m_DirectionMode_5; }
	inline int32_t* get_address_of_m_DirectionMode_5() { return &___m_DirectionMode_5; }
	inline void set_m_DirectionMode_5(int32_t value)
	{
		___m_DirectionMode_5 = value;
	}

	inline static int32_t get_offset_of_m_Channel_6() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_Channel_6)); }
	inline int32_t get_m_Channel_6() const { return ___m_Channel_6; }
	inline int32_t* get_address_of_m_Channel_6() { return &___m_Channel_6; }
	inline void set_m_Channel_6(int32_t value)
	{
		___m_Channel_6 = value;
	}

	inline static int32_t get_offset_of_m_DissipationMode_7() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_DissipationMode_7)); }
	inline int32_t get_m_DissipationMode_7() const { return ___m_DissipationMode_7; }
	inline int32_t* get_address_of_m_DissipationMode_7() { return &___m_DissipationMode_7; }
	inline void set_m_DissipationMode_7(int32_t value)
	{
		___m_DissipationMode_7 = value;
	}

	inline static int32_t get_offset_of_m_DissipationDistance_8() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_DissipationDistance_8)); }
	inline float get_m_DissipationDistance_8() const { return ___m_DissipationDistance_8; }
	inline float* get_address_of_m_DissipationDistance_8() { return &___m_DissipationDistance_8; }
	inline void set_m_DissipationDistance_8(float value)
	{
		___m_DissipationDistance_8 = value;
	}

	inline static int32_t get_offset_of_m_PropagationSpeed_9() { return static_cast<int32_t>(offsetof(ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4, ___m_PropagationSpeed_9)); }
	inline float get_m_PropagationSpeed_9() const { return ___m_PropagationSpeed_9; }
	inline float* get_address_of_m_PropagationSpeed_9() { return &___m_PropagationSpeed_9; }
	inline void set_m_PropagationSpeed_9(float value)
	{
		___m_PropagationSpeed_9 = value;
	}
};


// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
struct UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19  : public MulticastDelegate_t
{
public:

public:
};


// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cinemachine.BlendSourceVirtualCamera
struct BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC  : public RuntimeObject
{
public:
	// Cinemachine.CinemachineBlend Cinemachine.BlendSourceVirtualCamera::<Blend>k__BackingField
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___U3CBlendU3Ek__BackingField_0;
	// System.Int32 Cinemachine.BlendSourceVirtualCamera::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_1;
	// UnityEngine.Transform Cinemachine.BlendSourceVirtualCamera::<LookAt>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CLookAtU3Ek__BackingField_2;
	// UnityEngine.Transform Cinemachine.BlendSourceVirtualCamera::<Follow>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CFollowU3Ek__BackingField_3;
	// Cinemachine.CameraState Cinemachine.BlendSourceVirtualCamera::<State>k__BackingField
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___U3CStateU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBlendU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC, ___U3CBlendU3Ek__BackingField_0)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_U3CBlendU3Ek__BackingField_0() const { return ___U3CBlendU3Ek__BackingField_0; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_U3CBlendU3Ek__BackingField_0() { return &___U3CBlendU3Ek__BackingField_0; }
	inline void set_U3CBlendU3Ek__BackingField_0(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___U3CBlendU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlendU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC, ___U3CPriorityU3Ek__BackingField_1)); }
	inline int32_t get_U3CPriorityU3Ek__BackingField_1() const { return ___U3CPriorityU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPriorityU3Ek__BackingField_1() { return &___U3CPriorityU3Ek__BackingField_1; }
	inline void set_U3CPriorityU3Ek__BackingField_1(int32_t value)
	{
		___U3CPriorityU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC, ___U3CLookAtU3Ek__BackingField_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CLookAtU3Ek__BackingField_2() const { return ___U3CLookAtU3Ek__BackingField_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CLookAtU3Ek__BackingField_2() { return &___U3CLookAtU3Ek__BackingField_2; }
	inline void set_U3CLookAtU3Ek__BackingField_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CLookAtU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLookAtU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFollowU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC, ___U3CFollowU3Ek__BackingField_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CFollowU3Ek__BackingField_3() const { return ___U3CFollowU3Ek__BackingField_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CFollowU3Ek__BackingField_3() { return &___U3CFollowU3Ek__BackingField_3; }
	inline void set_U3CFollowU3Ek__BackingField_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CFollowU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFollowU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC, ___U3CStateU3Ek__BackingField_4)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CStateU3Ek__BackingField_4))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CStateU3Ek__BackingField_4))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CStateU3Ek__BackingField_4))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CStateU3Ek__BackingField_4))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CStateU3Ek__BackingField_4))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___played_4)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_played_4() const { return ___played_4; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___paused_5)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_paused_5() const { return ___paused_5; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38, ___stopped_6)); }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_tEFFD33105460921F68C4261E79791D397C76CB1B * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain/UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain/BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_t7047292520C88A40E765EA61E967062F583F6C2A * ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// UnityEngine.GameObject Cinemachine.CinemachineBrain::mActiveCameraPreviousFrameGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mActiveCameraPreviousFrameGameObject_24;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___U3CCurrentCameraStateU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_WorldUpOverride_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_BlendUpdateMethod_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_BlendUpdateMethod_9)); }
	inline int32_t get_m_BlendUpdateMethod_9() const { return ___m_BlendUpdateMethod_9; }
	inline int32_t* get_address_of_m_BlendUpdateMethod_9() { return &___m_BlendUpdateMethod_9; }
	inline void set_m_BlendUpdateMethod_9(int32_t value)
	{
		___m_BlendUpdateMethod_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_DefaultBlend_10)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_m_DefaultBlend_10() const { return ___m_DefaultBlend_10; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_m_DefaultBlend_10() { return &___m_DefaultBlend_10; }
	inline void set_m_DefaultBlend_10(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___m_DefaultBlend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_10))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CustomBlends_11)); }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * get_m_CustomBlends_11() const { return ___m_CustomBlends_11; }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F ** get_address_of_m_CustomBlends_11() { return &___m_CustomBlends_11; }
	inline void set_m_CustomBlends_11(CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * value)
	{
		___m_CustomBlends_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_OutputCamera_12)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_OutputCamera_12() const { return ___m_OutputCamera_12; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_OutputCamera_12() { return &___m_OutputCamera_12; }
	inline void set_m_OutputCamera_12(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_OutputCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraCutEvent_13)); }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * get_m_CameraCutEvent_13() const { return ___m_CameraCutEvent_13; }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E ** get_address_of_m_CameraCutEvent_13() { return &___m_CameraCutEvent_13; }
	inline void set_m_CameraCutEvent_13(BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * value)
	{
		___m_CameraCutEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraActivatedEvent_14)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_CameraActivatedEvent_14() const { return ___m_CameraActivatedEvent_14; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_CameraActivatedEvent_14() { return &___m_CameraActivatedEvent_14; }
	inline void set_m_CameraActivatedEvent_14(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_CameraActivatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mPhysicsCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_mPhysicsCoroutine_16() const { return ___mPhysicsCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_mPhysicsCoroutine_16() { return &___mPhysicsCoroutine_16; }
	inline void set_mPhysicsCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___mPhysicsCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_LastFrameUpdated_17)); }
	inline int32_t get_m_LastFrameUpdated_17() const { return ___m_LastFrameUpdated_17; }
	inline int32_t* get_address_of_m_LastFrameUpdated_17() { return &___m_LastFrameUpdated_17; }
	inline void set_m_LastFrameUpdated_17(int32_t value)
	{
		___m_LastFrameUpdated_17 = value;
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mWaitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_mWaitForFixedUpdate_18() const { return ___mWaitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_mWaitForFixedUpdate_18() { return &___mWaitForFixedUpdate_18; }
	inline void set_mWaitForFixedUpdate_18(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___mWaitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mFrameStack_19)); }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A * get_mFrameStack_19() const { return ___mFrameStack_19; }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A ** get_address_of_mFrameStack_19() { return &___mFrameStack_19; }
	inline void set_mFrameStack_19(List_1_t7047292520C88A40E765EA61E967062F583F6C2A * value)
	{
		___mFrameStack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_19), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mNextFrameId_20)); }
	inline int32_t get_mNextFrameId_20() const { return ___mNextFrameId_20; }
	inline int32_t* get_address_of_mNextFrameId_20() { return &___mNextFrameId_20; }
	inline void set_mNextFrameId_20(int32_t value)
	{
		___mNextFrameId_20 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mCurrentLiveCameras_21)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mCurrentLiveCameras_21() const { return ___mCurrentLiveCameras_21; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mCurrentLiveCameras_21() { return &___mCurrentLiveCameras_21; }
	inline void set_mCurrentLiveCameras_21(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mCurrentLiveCameras_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_21), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_23() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mActiveCameraPreviousFrame_23)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_23() const { return ___mActiveCameraPreviousFrame_23; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_23() { return &___mActiveCameraPreviousFrame_23; }
	inline void set_mActiveCameraPreviousFrame_23(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrameGameObject_24() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mActiveCameraPreviousFrameGameObject_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mActiveCameraPreviousFrameGameObject_24() const { return ___mActiveCameraPreviousFrameGameObject_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mActiveCameraPreviousFrameGameObject_24() { return &___mActiveCameraPreviousFrameGameObject_24; }
	inline void set_mActiveCameraPreviousFrameGameObject_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mActiveCameraPreviousFrameGameObject_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrameGameObject_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___U3CCurrentCameraStateU3Ek__BackingField_25)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_U3CCurrentCameraStateU3Ek__BackingField_25() const { return ___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return &___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_25(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mDefaultLinearAnimationCurve_22;

public:
	inline static int32_t get_offset_of_mSoloCamera_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mSoloCamera_15)); }
	inline RuntimeObject* get_mSoloCamera_15() const { return ___mSoloCamera_15; }
	inline RuntimeObject** get_address_of_mSoloCamera_15() { return &___mSoloCamera_15; }
	inline void set_mSoloCamera_15(RuntimeObject* value)
	{
		___mSoloCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLinearAnimationCurve_22() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mDefaultLinearAnimationCurve_22)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mDefaultLinearAnimationCurve_22() const { return ___mDefaultLinearAnimationCurve_22; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mDefaultLinearAnimationCurve_22() { return &___mDefaultLinearAnimationCurve_22; }
	inline void set_mDefaultLinearAnimationCurve_22(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mDefaultLinearAnimationCurve_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLinearAnimationCurve_22), (void*)value);
	}
};


// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcamOwner_5;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedFollowTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedFollowTarget_6;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedFollowTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedFollowTargetVcam_7;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedFollowTargetGroup
	RuntimeObject* ___mCachedFollowTargetGroup_8;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_9;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_10;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedLookAtTargetGroup
	RuntimeObject* ___mCachedLookAtTargetGroup_11;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTarget_6() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTarget_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedFollowTarget_6() const { return ___mCachedFollowTarget_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedFollowTarget_6() { return &___mCachedFollowTarget_6; }
	inline void set_mCachedFollowTarget_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedFollowTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetVcam_7() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetVcam_7)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedFollowTargetVcam_7() const { return ___mCachedFollowTargetVcam_7; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedFollowTargetVcam_7() { return &___mCachedFollowTargetVcam_7; }
	inline void set_mCachedFollowTargetVcam_7(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedFollowTargetVcam_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetVcam_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetGroup_8() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetGroup_8)); }
	inline RuntimeObject* get_mCachedFollowTargetGroup_8() const { return ___mCachedFollowTargetGroup_8; }
	inline RuntimeObject** get_address_of_mCachedFollowTargetGroup_8() { return &___mCachedFollowTargetGroup_8; }
	inline void set_mCachedFollowTargetGroup_8(RuntimeObject* value)
	{
		___mCachedFollowTargetGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_9() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTarget_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_9() const { return ___mCachedLookAtTarget_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_9() { return &___mCachedLookAtTarget_9; }
	inline void set_mCachedLookAtTarget_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_9), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_10() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetVcam_10)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_10() const { return ___mCachedLookAtTargetVcam_10; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_10() { return &___mCachedLookAtTargetVcam_10; }
	inline void set_mCachedLookAtTargetVcam_10(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_10), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetGroup_11() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetGroup_11)); }
	inline RuntimeObject* get_mCachedLookAtTargetGroup_11() const { return ___mCachedLookAtTargetGroup_11; }
	inline RuntimeObject** get_address_of_mCachedLookAtTargetGroup_11() { return &___mCachedLookAtTargetGroup_11; }
	inline void set_mCachedLookAtTargetGroup_11(RuntimeObject* value)
	{
		___mCachedLookAtTargetGroup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetGroup_11), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_m_ActivationId_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ActivationId_10)); }
	inline int32_t get_m_ActivationId_10() const { return ___m_ActivationId_10; }
	inline int32_t* get_address_of_m_ActivationId_10() { return &___m_ActivationId_10; }
	inline void set_m_ActivationId_10(int32_t value)
	{
		___m_ActivationId_10 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CFollowTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_11() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_11() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CLookAtTargetAttachmentU3Ek__BackingField_12)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_12() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_12; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_12() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_12; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_12(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StandbyUpdate_13)); }
	inline int32_t get_m_StandbyUpdate_13() const { return ___m_StandbyUpdate_13; }
	inline int32_t* get_address_of_m_StandbyUpdate_13() { return &___m_StandbyUpdate_13; }
	inline void set_m_StandbyUpdate_13(int32_t value)
	{
		___m_StandbyUpdate_13 = value;
	}

	inline static int32_t get_offset_of_U3CmExtensionsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CmExtensionsU3Ek__BackingField_14)); }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * get_U3CmExtensionsU3Ek__BackingField_14() const { return ___U3CmExtensionsU3Ek__BackingField_14; }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A ** get_address_of_U3CmExtensionsU3Ek__BackingField_14() { return &___U3CmExtensionsU3Ek__BackingField_14; }
	inline void set_U3CmExtensionsU3Ek__BackingField_14(List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * value)
	{
		___U3CmExtensionsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmExtensionsU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CPreviousStateIsValidU3Ek__BackingField_15)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_15() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return &___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_15(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_WasStarted_16)); }
	inline bool get_m_WasStarted_16() const { return ___m_WasStarted_16; }
	inline bool* get_address_of_m_WasStarted_16() { return &___m_WasStarted_16; }
	inline void set_m_WasStarted_16(bool value)
	{
		___m_WasStarted_16 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mSlaveStatusUpdated_17)); }
	inline bool get_mSlaveStatusUpdated_17() const { return ___mSlaveStatusUpdated_17; }
	inline bool* get_address_of_mSlaveStatusUpdated_17() { return &___mSlaveStatusUpdated_17; }
	inline void set_mSlaveStatusUpdated_17(bool value)
	{
		___mSlaveStatusUpdated_17 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_parentVcam_18)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_parentVcam_18() const { return ___m_parentVcam_18; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_parentVcam_18() { return &___m_parentVcam_18; }
	inline void set_m_parentVcam_18(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_parentVcam_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_QueuePriority_19)); }
	inline int32_t get_m_QueuePriority_19() const { return ___m_QueuePriority_19; }
	inline int32_t* get_address_of_m_QueuePriority_19() { return &___m_QueuePriority_19; }
	inline void set_m_QueuePriority_19(int32_t value)
	{
		___m_QueuePriority_19 = value;
	}
};


// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_20;
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_21;
	// System.Boolean Cinemachine.CinemachineFreeLook::m_CommonLens
	bool ___m_CommonLens_22;
	// Cinemachine.LensSettings Cinemachine.CinemachineFreeLook::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_23;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineFreeLook::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_24;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineFreeLook::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_25;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_YAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_YAxis_26;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_YAxisRecentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_YAxisRecentering_27;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_XAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_XAxis_28;
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineFreeLook::m_Heading
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  ___m_Heading_29;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_RecenterToTargetHeading
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_RecenterToTargetHeading_30;
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineFreeLook::m_BindingMode
	int32_t ___m_BindingMode_31;
	// System.Single Cinemachine.CinemachineFreeLook::m_SplineCurvature
	float ___m_SplineCurvature_32;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_Orbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_Orbits_33;
	// System.Single Cinemachine.CinemachineFreeLook::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_34;
	// System.Boolean Cinemachine.CinemachineFreeLook::mUseLegacyRigDefinitions
	bool ___mUseLegacyRigDefinitions_35;
	// System.Boolean Cinemachine.CinemachineFreeLook::mIsDestroyed
	bool ___mIsDestroyed_36;
	// Cinemachine.CameraState Cinemachine.CinemachineFreeLook::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_37;
	// Cinemachine.CinemachineVirtualCamera[] Cinemachine.CinemachineFreeLook::m_Rigs
	CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* ___m_Rigs_38;
	// Cinemachine.CinemachineOrbitalTransposer[] Cinemachine.CinemachineFreeLook::mOrbitals
	CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* ___mOrbitals_39;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendA
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendA_40;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendB
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendB_41;
	// System.Single Cinemachine.CinemachineFreeLook::<CachedXAxisHeading>k__BackingField
	float ___U3CCachedXAxisHeadingU3Ek__BackingField_44;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_CachedOrbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_CachedOrbits_45;
	// System.Single Cinemachine.CinemachineFreeLook::m_CachedTension
	float ___m_CachedTension_46;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedKnots
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedKnots_47;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl1
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl1_48;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl2
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl2_49;

public:
	inline static int32_t get_offset_of_m_LookAt_20() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LookAt_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_20() const { return ___m_LookAt_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_20() { return &___m_LookAt_20; }
	inline void set_m_LookAt_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_21() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Follow_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_21() const { return ___m_Follow_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_21() { return &___m_Follow_21; }
	inline void set_m_Follow_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CommonLens_22() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CommonLens_22)); }
	inline bool get_m_CommonLens_22() const { return ___m_CommonLens_22; }
	inline bool* get_address_of_m_CommonLens_22() { return &___m_CommonLens_22; }
	inline void set_m_CommonLens_22(bool value)
	{
		___m_CommonLens_22 = value;
	}

	inline static int32_t get_offset_of_m_Lens_23() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Lens_23)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_23() const { return ___m_Lens_23; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_23() { return &___m_Lens_23; }
	inline void set_m_Lens_23(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_23 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_24() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Transitions_24)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_24() const { return ___m_Transitions_24; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_24() { return &___m_Transitions_24; }
	inline void set_m_Transitions_24(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_24))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_25() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyBlendHint_25)); }
	inline int32_t get_m_LegacyBlendHint_25() const { return ___m_LegacyBlendHint_25; }
	inline int32_t* get_address_of_m_LegacyBlendHint_25() { return &___m_LegacyBlendHint_25; }
	inline void set_m_LegacyBlendHint_25(int32_t value)
	{
		___m_LegacyBlendHint_25 = value;
	}

	inline static int32_t get_offset_of_m_YAxis_26() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxis_26)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_YAxis_26() const { return ___m_YAxis_26; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_YAxis_26() { return &___m_YAxis_26; }
	inline void set_m_YAxis_26(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_YAxis_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_26))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_26))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_YAxisRecentering_27() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxisRecentering_27)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_YAxisRecentering_27() const { return ___m_YAxisRecentering_27; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_YAxisRecentering_27() { return &___m_YAxisRecentering_27; }
	inline void set_m_YAxisRecentering_27(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_YAxisRecentering_27 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_28() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_XAxis_28)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_XAxis_28() const { return ___m_XAxis_28; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_XAxis_28() { return &___m_XAxis_28; }
	inline void set_m_XAxis_28(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_XAxis_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_28))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_28))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Heading_29() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Heading_29)); }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  get_m_Heading_29() const { return ___m_Heading_29; }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * get_address_of_m_Heading_29() { return &___m_Heading_29; }
	inline void set_m_Heading_29(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  value)
	{
		___m_Heading_29 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_30() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_RecenterToTargetHeading_30)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_RecenterToTargetHeading_30() const { return ___m_RecenterToTargetHeading_30; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_RecenterToTargetHeading_30() { return &___m_RecenterToTargetHeading_30; }
	inline void set_m_RecenterToTargetHeading_30(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_RecenterToTargetHeading_30 = value;
	}

	inline static int32_t get_offset_of_m_BindingMode_31() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_BindingMode_31)); }
	inline int32_t get_m_BindingMode_31() const { return ___m_BindingMode_31; }
	inline int32_t* get_address_of_m_BindingMode_31() { return &___m_BindingMode_31; }
	inline void set_m_BindingMode_31(int32_t value)
	{
		___m_BindingMode_31 = value;
	}

	inline static int32_t get_offset_of_m_SplineCurvature_32() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_SplineCurvature_32)); }
	inline float get_m_SplineCurvature_32() const { return ___m_SplineCurvature_32; }
	inline float* get_address_of_m_SplineCurvature_32() { return &___m_SplineCurvature_32; }
	inline void set_m_SplineCurvature_32(float value)
	{
		___m_SplineCurvature_32 = value;
	}

	inline static int32_t get_offset_of_m_Orbits_33() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Orbits_33)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_Orbits_33() const { return ___m_Orbits_33; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_Orbits_33() { return &___m_Orbits_33; }
	inline void set_m_Orbits_33(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_Orbits_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Orbits_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_34() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyHeadingBias_34)); }
	inline float get_m_LegacyHeadingBias_34() const { return ___m_LegacyHeadingBias_34; }
	inline float* get_address_of_m_LegacyHeadingBias_34() { return &___m_LegacyHeadingBias_34; }
	inline void set_m_LegacyHeadingBias_34(float value)
	{
		___m_LegacyHeadingBias_34 = value;
	}

	inline static int32_t get_offset_of_mUseLegacyRigDefinitions_35() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mUseLegacyRigDefinitions_35)); }
	inline bool get_mUseLegacyRigDefinitions_35() const { return ___mUseLegacyRigDefinitions_35; }
	inline bool* get_address_of_mUseLegacyRigDefinitions_35() { return &___mUseLegacyRigDefinitions_35; }
	inline void set_mUseLegacyRigDefinitions_35(bool value)
	{
		___mUseLegacyRigDefinitions_35 = value;
	}

	inline static int32_t get_offset_of_mIsDestroyed_36() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mIsDestroyed_36)); }
	inline bool get_mIsDestroyed_36() const { return ___mIsDestroyed_36; }
	inline bool* get_address_of_mIsDestroyed_36() { return &___mIsDestroyed_36; }
	inline void set_mIsDestroyed_36(bool value)
	{
		___mIsDestroyed_36 = value;
	}

	inline static int32_t get_offset_of_m_State_37() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_State_37)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_37() const { return ___m_State_37; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_37() { return &___m_State_37; }
	inline void set_m_State_37(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_37))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Rigs_38() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Rigs_38)); }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* get_m_Rigs_38() const { return ___m_Rigs_38; }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A** get_address_of_m_Rigs_38() { return &___m_Rigs_38; }
	inline void set_m_Rigs_38(CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* value)
	{
		___m_Rigs_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigs_38), (void*)value);
	}

	inline static int32_t get_offset_of_mOrbitals_39() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mOrbitals_39)); }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* get_mOrbitals_39() const { return ___mOrbitals_39; }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4** get_address_of_mOrbitals_39() { return &___mOrbitals_39; }
	inline void set_mOrbitals_39(CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* value)
	{
		___mOrbitals_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOrbitals_39), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendA_40() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendA_40)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendA_40() const { return ___mBlendA_40; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendA_40() { return &___mBlendA_40; }
	inline void set_mBlendA_40(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendA_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendA_40), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendB_41() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendB_41)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendB_41() const { return ___mBlendB_41; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendB_41() { return &___mBlendB_41; }
	inline void set_mBlendB_41(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendB_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendB_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCachedXAxisHeadingU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___U3CCachedXAxisHeadingU3Ek__BackingField_44)); }
	inline float get_U3CCachedXAxisHeadingU3Ek__BackingField_44() const { return ___U3CCachedXAxisHeadingU3Ek__BackingField_44; }
	inline float* get_address_of_U3CCachedXAxisHeadingU3Ek__BackingField_44() { return &___U3CCachedXAxisHeadingU3Ek__BackingField_44; }
	inline void set_U3CCachedXAxisHeadingU3Ek__BackingField_44(float value)
	{
		___U3CCachedXAxisHeadingU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_m_CachedOrbits_45() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedOrbits_45)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_CachedOrbits_45() const { return ___m_CachedOrbits_45; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_CachedOrbits_45() { return &___m_CachedOrbits_45; }
	inline void set_m_CachedOrbits_45(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_CachedOrbits_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedOrbits_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedTension_46() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedTension_46)); }
	inline float get_m_CachedTension_46() const { return ___m_CachedTension_46; }
	inline float* get_address_of_m_CachedTension_46() { return &___m_CachedTension_46; }
	inline void set_m_CachedTension_46(float value)
	{
		___m_CachedTension_46 = value;
	}

	inline static int32_t get_offset_of_m_CachedKnots_47() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedKnots_47)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedKnots_47() const { return ___m_CachedKnots_47; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedKnots_47() { return &___m_CachedKnots_47; }
	inline void set_m_CachedKnots_47(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedKnots_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedKnots_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl1_48() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl1_48)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl1_48() const { return ___m_CachedCtrl1_48; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl1_48() { return &___m_CachedCtrl1_48; }
	inline void set_m_CachedCtrl1_48(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl1_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl1_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl2_49() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl2_49)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl2_49() const { return ___m_CachedCtrl2_49; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl2_49() { return &___m_CachedCtrl2_49; }
	inline void set_m_CachedCtrl2_49(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl2_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl2_49), (void*)value);
	}
};

struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields
{
public:
	// Cinemachine.CinemachineFreeLook/CreateRigDelegate Cinemachine.CinemachineFreeLook::CreateRigOverride
	CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * ___CreateRigOverride_42;
	// Cinemachine.CinemachineFreeLook/DestroyRigDelegate Cinemachine.CinemachineFreeLook::DestroyRigOverride
	DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * ___DestroyRigOverride_43;

public:
	inline static int32_t get_offset_of_CreateRigOverride_42() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___CreateRigOverride_42)); }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * get_CreateRigOverride_42() const { return ___CreateRigOverride_42; }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 ** get_address_of_CreateRigOverride_42() { return &___CreateRigOverride_42; }
	inline void set_CreateRigOverride_42(CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * value)
	{
		___CreateRigOverride_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateRigOverride_42), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyRigOverride_43() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___DestroyRigOverride_43)); }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * get_DestroyRigOverride_43() const { return ___DestroyRigOverride_43; }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 ** get_address_of_DestroyRigOverride_43() { return &___DestroyRigOverride_43; }
	inline void set_DestroyRigOverride_43(DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * value)
	{
		___DestroyRigOverride_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyRigOverride_43), (void*)value);
	}
};


// Cinemachine.CinemachineTransposer
struct CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881  : public CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D
{
public:
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineTransposer::m_BindingMode
	int32_t ___m_BindingMode_12;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_FollowOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FollowOffset_13;
	// System.Single Cinemachine.CinemachineTransposer::m_XDamping
	float ___m_XDamping_14;
	// System.Single Cinemachine.CinemachineTransposer::m_YDamping
	float ___m_YDamping_15;
	// System.Single Cinemachine.CinemachineTransposer::m_ZDamping
	float ___m_ZDamping_16;
	// Cinemachine.CinemachineTransposer/AngularDampingMode Cinemachine.CinemachineTransposer::m_AngularDampingMode
	int32_t ___m_AngularDampingMode_17;
	// System.Single Cinemachine.CinemachineTransposer::m_PitchDamping
	float ___m_PitchDamping_18;
	// System.Single Cinemachine.CinemachineTransposer::m_YawDamping
	float ___m_YawDamping_19;
	// System.Single Cinemachine.CinemachineTransposer::m_RollDamping
	float ___m_RollDamping_20;
	// System.Single Cinemachine.CinemachineTransposer::m_AngularDamping
	float ___m_AngularDamping_21;
	// System.Boolean Cinemachine.CinemachineTransposer::<HideOffsetInInspector>k__BackingField
	bool ___U3CHideOffsetInInspectorU3Ek__BackingField_22;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_PreviousTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousTargetPosition_23;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_PreviousReferenceOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_PreviousReferenceOrientation_24;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_targetOrientationOnAssign
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_targetOrientationOnAssign_25;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_PreviousOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousOffset_26;
	// UnityEngine.Transform Cinemachine.CinemachineTransposer::m_previousTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_previousTarget_27;

public:
	inline static int32_t get_offset_of_m_BindingMode_12() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_BindingMode_12)); }
	inline int32_t get_m_BindingMode_12() const { return ___m_BindingMode_12; }
	inline int32_t* get_address_of_m_BindingMode_12() { return &___m_BindingMode_12; }
	inline void set_m_BindingMode_12(int32_t value)
	{
		___m_BindingMode_12 = value;
	}

	inline static int32_t get_offset_of_m_FollowOffset_13() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_FollowOffset_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FollowOffset_13() const { return ___m_FollowOffset_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FollowOffset_13() { return &___m_FollowOffset_13; }
	inline void set_m_FollowOffset_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FollowOffset_13 = value;
	}

	inline static int32_t get_offset_of_m_XDamping_14() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_XDamping_14)); }
	inline float get_m_XDamping_14() const { return ___m_XDamping_14; }
	inline float* get_address_of_m_XDamping_14() { return &___m_XDamping_14; }
	inline void set_m_XDamping_14(float value)
	{
		___m_XDamping_14 = value;
	}

	inline static int32_t get_offset_of_m_YDamping_15() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_YDamping_15)); }
	inline float get_m_YDamping_15() const { return ___m_YDamping_15; }
	inline float* get_address_of_m_YDamping_15() { return &___m_YDamping_15; }
	inline void set_m_YDamping_15(float value)
	{
		___m_YDamping_15 = value;
	}

	inline static int32_t get_offset_of_m_ZDamping_16() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_ZDamping_16)); }
	inline float get_m_ZDamping_16() const { return ___m_ZDamping_16; }
	inline float* get_address_of_m_ZDamping_16() { return &___m_ZDamping_16; }
	inline void set_m_ZDamping_16(float value)
	{
		___m_ZDamping_16 = value;
	}

	inline static int32_t get_offset_of_m_AngularDampingMode_17() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_AngularDampingMode_17)); }
	inline int32_t get_m_AngularDampingMode_17() const { return ___m_AngularDampingMode_17; }
	inline int32_t* get_address_of_m_AngularDampingMode_17() { return &___m_AngularDampingMode_17; }
	inline void set_m_AngularDampingMode_17(int32_t value)
	{
		___m_AngularDampingMode_17 = value;
	}

	inline static int32_t get_offset_of_m_PitchDamping_18() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PitchDamping_18)); }
	inline float get_m_PitchDamping_18() const { return ___m_PitchDamping_18; }
	inline float* get_address_of_m_PitchDamping_18() { return &___m_PitchDamping_18; }
	inline void set_m_PitchDamping_18(float value)
	{
		___m_PitchDamping_18 = value;
	}

	inline static int32_t get_offset_of_m_YawDamping_19() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_YawDamping_19)); }
	inline float get_m_YawDamping_19() const { return ___m_YawDamping_19; }
	inline float* get_address_of_m_YawDamping_19() { return &___m_YawDamping_19; }
	inline void set_m_YawDamping_19(float value)
	{
		___m_YawDamping_19 = value;
	}

	inline static int32_t get_offset_of_m_RollDamping_20() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_RollDamping_20)); }
	inline float get_m_RollDamping_20() const { return ___m_RollDamping_20; }
	inline float* get_address_of_m_RollDamping_20() { return &___m_RollDamping_20; }
	inline void set_m_RollDamping_20(float value)
	{
		___m_RollDamping_20 = value;
	}

	inline static int32_t get_offset_of_m_AngularDamping_21() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_AngularDamping_21)); }
	inline float get_m_AngularDamping_21() const { return ___m_AngularDamping_21; }
	inline float* get_address_of_m_AngularDamping_21() { return &___m_AngularDamping_21; }
	inline void set_m_AngularDamping_21(float value)
	{
		___m_AngularDamping_21 = value;
	}

	inline static int32_t get_offset_of_U3CHideOffsetInInspectorU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___U3CHideOffsetInInspectorU3Ek__BackingField_22)); }
	inline bool get_U3CHideOffsetInInspectorU3Ek__BackingField_22() const { return ___U3CHideOffsetInInspectorU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CHideOffsetInInspectorU3Ek__BackingField_22() { return &___U3CHideOffsetInInspectorU3Ek__BackingField_22; }
	inline void set_U3CHideOffsetInInspectorU3Ek__BackingField_22(bool value)
	{
		___U3CHideOffsetInInspectorU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTargetPosition_23() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousTargetPosition_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousTargetPosition_23() const { return ___m_PreviousTargetPosition_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousTargetPosition_23() { return &___m_PreviousTargetPosition_23; }
	inline void set_m_PreviousTargetPosition_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousTargetPosition_23 = value;
	}

	inline static int32_t get_offset_of_m_PreviousReferenceOrientation_24() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousReferenceOrientation_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_PreviousReferenceOrientation_24() const { return ___m_PreviousReferenceOrientation_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_PreviousReferenceOrientation_24() { return &___m_PreviousReferenceOrientation_24; }
	inline void set_m_PreviousReferenceOrientation_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_PreviousReferenceOrientation_24 = value;
	}

	inline static int32_t get_offset_of_m_targetOrientationOnAssign_25() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_targetOrientationOnAssign_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_targetOrientationOnAssign_25() const { return ___m_targetOrientationOnAssign_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_targetOrientationOnAssign_25() { return &___m_targetOrientationOnAssign_25; }
	inline void set_m_targetOrientationOnAssign_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_targetOrientationOnAssign_25 = value;
	}

	inline static int32_t get_offset_of_m_PreviousOffset_26() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousOffset_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousOffset_26() const { return ___m_PreviousOffset_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousOffset_26() { return &___m_PreviousOffset_26; }
	inline void set_m_PreviousOffset_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousOffset_26 = value;
	}

	inline static int32_t get_offset_of_m_previousTarget_27() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_previousTarget_27)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_previousTarget_27() const { return ___m_previousTarget_27; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_previousTarget_27() { return &___m_previousTarget_27; }
	inline void set_m_previousTarget_27(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_previousTarget_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousTarget_27), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_20;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_21;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_22;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_23;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_24;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::<UserIsDragging>k__BackingField
	bool ___U3CUserIsDraggingU3Ek__BackingField_28;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_29;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___m_ComponentPipeline_30;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ComponentOwner_31;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_32;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_33;

public:
	inline static int32_t get_offset_of_m_LookAt_20() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LookAt_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_20() const { return ___m_LookAt_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_20() { return &___m_LookAt_20; }
	inline void set_m_LookAt_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_21() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Follow_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_21() const { return ___m_Follow_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_21() { return &___m_Follow_21; }
	inline void set_m_Follow_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lens_22() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Lens_22)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_22() const { return ___m_Lens_22; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_22() { return &___m_Lens_22; }
	inline void set_m_Lens_22(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_22 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_23() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Transitions_23)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_23() const { return ___m_Transitions_23; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_23() { return &___m_Transitions_23; }
	inline void set_m_Transitions_23(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_23))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_24() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LegacyBlendHint_24)); }
	inline int32_t get_m_LegacyBlendHint_24() const { return ___m_LegacyBlendHint_24; }
	inline int32_t* get_address_of_m_LegacyBlendHint_24() { return &___m_LegacyBlendHint_24; }
	inline void set_m_LegacyBlendHint_24(int32_t value)
	{
		___m_LegacyBlendHint_24 = value;
	}

	inline static int32_t get_offset_of_U3CUserIsDraggingU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___U3CUserIsDraggingU3Ek__BackingField_28)); }
	inline bool get_U3CUserIsDraggingU3Ek__BackingField_28() const { return ___U3CUserIsDraggingU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CUserIsDraggingU3Ek__BackingField_28() { return &___U3CUserIsDraggingU3Ek__BackingField_28; }
	inline void set_U3CUserIsDraggingU3Ek__BackingField_28(bool value)
	{
		___U3CUserIsDraggingU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_m_State_29() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_State_29)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_29() const { return ___m_State_29; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_29() { return &___m_State_29; }
	inline void set_m_State_29(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_29))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_29))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_29))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_29))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_29))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ComponentPipeline_30() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentPipeline_30)); }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* get_m_ComponentPipeline_30() const { return ___m_ComponentPipeline_30; }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC** get_address_of_m_ComponentPipeline_30() { return &___m_ComponentPipeline_30; }
	inline void set_m_ComponentPipeline_30(CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* value)
	{
		___m_ComponentPipeline_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentPipeline_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentOwner_31() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentOwner_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ComponentOwner_31() const { return ___m_ComponentOwner_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ComponentOwner_31() { return &___m_ComponentOwner_31; }
	inline void set_m_ComponentOwner_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ComponentOwner_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentOwner_31), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_32() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTarget_32)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_32() const { return ___mCachedLookAtTarget_32; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_32() { return &___mCachedLookAtTarget_32; }
	inline void set_mCachedLookAtTarget_32(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_32), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_33() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTargetVcam_33)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_33() const { return ___mCachedLookAtTargetVcam_33; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_33() { return &___mCachedLookAtTargetVcam_33; }
	inline void set_mCachedLookAtTargetVcam_33(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_33), (void*)value);
	}
};

struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * ___CreatePipelineOverride_26;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * ___DestroyPipelineOverride_27;

public:
	inline static int32_t get_offset_of_CreatePipelineOverride_26() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___CreatePipelineOverride_26)); }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * get_CreatePipelineOverride_26() const { return ___CreatePipelineOverride_26; }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 ** get_address_of_CreatePipelineOverride_26() { return &___CreatePipelineOverride_26; }
	inline void set_CreatePipelineOverride_26(CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * value)
	{
		___CreatePipelineOverride_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatePipelineOverride_26), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyPipelineOverride_27() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___DestroyPipelineOverride_27)); }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * get_DestroyPipelineOverride_27() const { return ___DestroyPipelineOverride_27; }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 ** get_address_of_DestroyPipelineOverride_27() { return &___DestroyPipelineOverride_27; }
	inline void set_DestroyPipelineOverride_27(DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * value)
	{
		___DestroyPipelineOverride_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyPipelineOverride_27), (void*)value);
	}
};


// Cinemachine.CinemachineOrbitalTransposer
struct CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2  : public CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineOrbitalTransposer::m_Heading
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  ___m_Heading_28;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineOrbitalTransposer::m_RecenterToTargetHeading
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_RecenterToTargetHeading_29;
	// Cinemachine.AxisState Cinemachine.CinemachineOrbitalTransposer::m_XAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_XAxis_30;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyRadius
	float ___m_LegacyRadius_31;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeightOffset
	float ___m_LegacyHeightOffset_32;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_33;
	// System.Boolean Cinemachine.CinemachineOrbitalTransposer::m_HeadingIsSlave
	bool ___m_HeadingIsSlave_34;
	// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate Cinemachine.CinemachineOrbitalTransposer::HeadingUpdater
	UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * ___HeadingUpdater_35;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::mLastTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mLastTargetPosition_36;
	// Cinemachine.Utility.HeadingTracker Cinemachine.CinemachineOrbitalTransposer::mHeadingTracker
	HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * ___mHeadingTracker_37;
	// UnityEngine.Rigidbody Cinemachine.CinemachineOrbitalTransposer::mTargetRigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___mTargetRigidBody_38;
	// UnityEngine.Transform Cinemachine.CinemachineOrbitalTransposer::<PreviousTarget>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CPreviousTargetU3Ek__BackingField_39;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::mLastCameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mLastCameraPosition_40;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::<LastHeading>k__BackingField
	float ___U3CLastHeadingU3Ek__BackingField_41;

public:
	inline static int32_t get_offset_of_m_Heading_28() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_Heading_28)); }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  get_m_Heading_28() const { return ___m_Heading_28; }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * get_address_of_m_Heading_28() { return &___m_Heading_28; }
	inline void set_m_Heading_28(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  value)
	{
		___m_Heading_28 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_29() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_RecenterToTargetHeading_29)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_RecenterToTargetHeading_29() const { return ___m_RecenterToTargetHeading_29; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_RecenterToTargetHeading_29() { return &___m_RecenterToTargetHeading_29; }
	inline void set_m_RecenterToTargetHeading_29(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_RecenterToTargetHeading_29 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_30() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_XAxis_30)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_XAxis_30() const { return ___m_XAxis_30; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_XAxis_30() { return &___m_XAxis_30; }
	inline void set_m_XAxis_30(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_XAxis_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_30))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_30))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LegacyRadius_31() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyRadius_31)); }
	inline float get_m_LegacyRadius_31() const { return ___m_LegacyRadius_31; }
	inline float* get_address_of_m_LegacyRadius_31() { return &___m_LegacyRadius_31; }
	inline void set_m_LegacyRadius_31(float value)
	{
		___m_LegacyRadius_31 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeightOffset_32() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyHeightOffset_32)); }
	inline float get_m_LegacyHeightOffset_32() const { return ___m_LegacyHeightOffset_32; }
	inline float* get_address_of_m_LegacyHeightOffset_32() { return &___m_LegacyHeightOffset_32; }
	inline void set_m_LegacyHeightOffset_32(float value)
	{
		___m_LegacyHeightOffset_32 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_33() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyHeadingBias_33)); }
	inline float get_m_LegacyHeadingBias_33() const { return ___m_LegacyHeadingBias_33; }
	inline float* get_address_of_m_LegacyHeadingBias_33() { return &___m_LegacyHeadingBias_33; }
	inline void set_m_LegacyHeadingBias_33(float value)
	{
		___m_LegacyHeadingBias_33 = value;
	}

	inline static int32_t get_offset_of_m_HeadingIsSlave_34() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_HeadingIsSlave_34)); }
	inline bool get_m_HeadingIsSlave_34() const { return ___m_HeadingIsSlave_34; }
	inline bool* get_address_of_m_HeadingIsSlave_34() { return &___m_HeadingIsSlave_34; }
	inline void set_m_HeadingIsSlave_34(bool value)
	{
		___m_HeadingIsSlave_34 = value;
	}

	inline static int32_t get_offset_of_HeadingUpdater_35() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___HeadingUpdater_35)); }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * get_HeadingUpdater_35() const { return ___HeadingUpdater_35; }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D ** get_address_of_HeadingUpdater_35() { return &___HeadingUpdater_35; }
	inline void set_HeadingUpdater_35(UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * value)
	{
		___HeadingUpdater_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeadingUpdater_35), (void*)value);
	}

	inline static int32_t get_offset_of_mLastTargetPosition_36() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___mLastTargetPosition_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mLastTargetPosition_36() const { return ___mLastTargetPosition_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mLastTargetPosition_36() { return &___mLastTargetPosition_36; }
	inline void set_mLastTargetPosition_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mLastTargetPosition_36 = value;
	}

	inline static int32_t get_offset_of_mHeadingTracker_37() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___mHeadingTracker_37)); }
	inline HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * get_mHeadingTracker_37() const { return ___mHeadingTracker_37; }
	inline HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 ** get_address_of_mHeadingTracker_37() { return &___mHeadingTracker_37; }
	inline void set_mHeadingTracker_37(HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * value)
	{
		___mHeadingTracker_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHeadingTracker_37), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetRigidBody_38() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___mTargetRigidBody_38)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_mTargetRigidBody_38() const { return ___mTargetRigidBody_38; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_mTargetRigidBody_38() { return &___mTargetRigidBody_38; }
	inline void set_mTargetRigidBody_38(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___mTargetRigidBody_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetRigidBody_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousTargetU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___U3CPreviousTargetU3Ek__BackingField_39)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CPreviousTargetU3Ek__BackingField_39() const { return ___U3CPreviousTargetU3Ek__BackingField_39; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CPreviousTargetU3Ek__BackingField_39() { return &___U3CPreviousTargetU3Ek__BackingField_39; }
	inline void set_U3CPreviousTargetU3Ek__BackingField_39(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CPreviousTargetU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousTargetU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_mLastCameraPosition_40() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___mLastCameraPosition_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mLastCameraPosition_40() const { return ___mLastCameraPosition_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mLastCameraPosition_40() { return &___mLastCameraPosition_40; }
	inline void set_mLastCameraPosition_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mLastCameraPosition_40 = value;
	}

	inline static int32_t get_offset_of_U3CLastHeadingU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___U3CLastHeadingU3Ek__BackingField_41)); }
	inline float get_U3CLastHeadingU3Ek__BackingField_41() const { return ___U3CLastHeadingU3Ek__BackingField_41; }
	inline float* get_address_of_U3CLastHeadingU3Ek__BackingField_41() { return &___U3CLastHeadingU3Ek__BackingField_41; }
	inline void set_U3CLastHeadingU3Ek__BackingField_41(float value)
	{
		___U3CLastHeadingU3Ek__BackingField_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * m_Items[1];

public:
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ClipperLib.IntPoint[]
struct IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  m_Items[1];

public:
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.TargetPositionCache/CacheCurve/Item[]
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  m_Items[1];

public:
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem[]
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  m_Items[1];

public:
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_back(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_cleanup(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_pinvoke_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_back(const Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A& unmarshaled);
IL2CPP_EXTERN_C void Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshal_com_cleanup(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke_back(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke_cleanup(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com_back(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled);
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com_cleanup(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled);
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled);

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ClipperLib.IntPoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_gshared_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ClipperLib.IntPoint>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_gshared_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_gshared (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA_gshared (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_gshared (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method);

// System.Void Cinemachine.CameraState/CustomBlendable::.ctor(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomBlendable__ctor_mA7DEF75ACB9FDE678221EF6176FBD4DC4441FB07 (CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___custom0, float ___weight1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Cinemachine.UpdateTracker::OnUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateTracker_OnUpdate_m5F262770C3B9222F8503D50DFE21FF7C9A902C41 (int32_t ___currentClock0, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineBrain::GetEffectiveDeltaTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineBrain_GetEffectiveDeltaTime_m27D6E0AC28FA42C74DD804AB942F0D496D55379B (CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * __this, bool ___fixedDelta0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::UpdateVirtualCameras(Cinemachine.CinemachineCore/UpdateFilter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_UpdateVirtualCameras_mCA6172FE9872138FF4D2B3867EE7AB5BE6D47F89 (CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * __this, int32_t ___updateFilter0, float ___deltaTime1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::UpdateFrame0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_UpdateFrame0_m8FD42266AA4C2CCE09B842A5BA7362126585858B (CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::ProcessActiveCamera(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_ProcessActiveCamera_m094A1972B629F11EB580679FEFD78076769180FF (CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Cinemachine.CinemachineBrain>::.ctor()
inline void UnityEvent_1__ctor_m7FAB70A1CC10FC2B1F244136B510D1B8F5A4FF13 (UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t568451F6715383F8D6A0FC5C9A190ECF50F9A049 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Boolean Cinemachine.CinemachineBlend::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineBlend_get_IsValid_m55FFFA5BC32710DA0EF7CA8DBD7B0303D562D0D2 (CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBlend::.ctor(Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,UnityEngine.AnimationCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBlend__ctor_mB06EF56D92F3900609669689E8820647EE84B5A3 (CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * __this, RuntimeObject* ___a0, RuntimeObject* ___b1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, float ___duration3, float ___t4, const RuntimeMethod* method);
// System.Void Cinemachine.BlendSourceVirtualCamera::.ctor(Cinemachine.CinemachineBlend)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendSourceVirtualCamera__ctor_m762CFEB65D584FC854F9653CF1A97444FF86E08B (BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC * __this, CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___blend0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera>::.ctor()
inline void UnityEvent_2__ctor_mB5F14A2841CFD4FFEA2B3FDB766A68789CA4C500 (UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tD4CC87D8825EB6B7B2ECA5E32AC86234B78DAC02 *, const RuntimeMethod*))UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared)(__this, method);
}
// System.Void Cinemachine.CinemachineClearShot/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m02E5C011A18650E911D7DE28902B36407425A1DA (U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineCore::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineCore_get_CurrentTime_mBD3A55B23004CB425D9297086BC20D7C55797625 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single Cinemachine.LensSettings::get_Aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6 (LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Boolean Cinemachine.LensSettings::get_Orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LensSettings_get_Orthographic_mD89E6548BD05054F1ADFF7CB767ADCBA147970A0 (LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * __this, const RuntimeMethod* method);
// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::ScreenToFOV(UnityEngine.Rect,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B (FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rScreen0, float ___fov1, float ___fovH2, float ___aspect3, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineComposer/FovCache::UpdateCache(Cinemachine.LensSettings,UnityEngine.Rect,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FovCache_UpdateCache_m2EFDABF6DAFD0ACF434A8A83F5CAB0AA4B4F3519 (FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * __this, LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___lens0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___softGuide1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___hardGuide2, float ___targetDistance3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Perspective_mC6E5CD7C41446DDEADD294A1FC6EFEC2FD23E947 (float ___fov0, float ___aspect1, float ___zNear2, float ___zFar3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mD9BC7BAFD53B8BEE637C33AF52EAB09DFA45F939 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v21, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_mA2FDFF7C8C2361A4CF3F446BAB9A861F923F763A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_m4E7A7C5E88FA369D6ED022C939427F4895F6635D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mC91AC74347F8E3D537E8C5D70015E9B8EA872A3F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m4E466ED07B11CC5457BD62517418C493C0DDF2E3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineConfiner2D/ShapeCache::Invalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeCache_Invalidate_m0AA1A789129A6F496BDB42C9914A48A80D0BB222 (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.CinemachineConfiner2D/ShapeCache::IsValid(UnityEngine.Collider2D&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeCache_IsValid_mD14BF34734A81849A719899A4F29ED241C21E25B (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** ___boundingShape2D0, float* ___aspectRatio1, float* ___maxOrthoSize2, const RuntimeMethod* method);
// Cinemachine.ConfinerOven/BakingState Cinemachine.ConfinerOven::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfinerOven_get_State_m05EB332DF4BD4F147E273BA2674EABE440F7A454_inline (ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * __this, const RuntimeMethod* method);
// System.Void Cinemachine.ConfinerOven::BakeConfiner(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfinerOven_BakeConfiner_mF38F9C5E62C35B1641CE6518FE9CE8E882B1E6F5 (ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * __this, float ___maxComputationTimePerFrameInSeconds0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineConfiner2D/ShapeCache::CalculateDeltaTransformationMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114 (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_get_lossyScale_m540B8C7CAA4F2FFF4B8C1DBED639B49F5EFB81CF (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_m0A6BCC370C26C2C536B22030915BB3C3B96C47E3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::.ctor()
inline void List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20 (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* PolygonCollider2D_GetPath_m202E10B7D451EAB0FC3346ABE252D54D2D4171D0 (PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>::Add(!0)
inline void List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * __this, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *, List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.PolygonCollider2D::get_pathCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolygonCollider2D_get_pathCount_m65B4937F5A9D2F1A3A992FD95DE6BC9A3F4F6D38 (PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.CompositeCollider2D::get_pointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_get_pointCount_m9D81B4AE41532D1BB6DCDC72CD3E3830D2DE59EA (CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.CompositeCollider2D::GetPath(System.Int32,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_GetPath_mAEB2C2844D33F325E960F5D2C664D3F02E3E145A (CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * __this, int32_t ___index0, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___points1, const RuntimeMethod* method);
// System.Int32 UnityEngine.CompositeCollider2D::get_pathCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_get_pathCount_mBE03B43FDE29D15B661002681B0F3F4EE6228460 (CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.ConfinerOven::.ctor(System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfinerOven__ctor_m48A6169D36FA4125D30C0D6120CAD016194F8909 (ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * __this, List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 ** ___inputPath0, float* ___aspectRatio1, float ___maxFrustumHeight2, const RuntimeMethod* method);
// System.Boolean Cinemachine.CinemachineConfiner2D/ShapeCache::ValidateCache(UnityEngine.Collider2D,System.Single,System.Single,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeCache_ValidateCache_mA040BB9D38360821A0D577FAA9520E12917B126C (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___boundingShape2D0, float ___maxWindowSize1, float ___aspectRatio2, bool* ___confinerStateChanged3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Collider2D_get_offset_m63144560DFF782608BA6627DE192D6337821995C (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineCore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15EED79FFF0FF14467B49DC3AC7D134CA38240DD (U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * __this, const RuntimeMethod* method);
// System.Int32 Cinemachine.CinemachineVirtualCameraBase::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineFreeLook/Orbit::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit__ctor_mBDC642CE7F3E574E43895420FD0343C3199FC85A (Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 * __this, float ___h0, float ___r1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseDefinition/SignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SignalSource_get_SignalDuration_m361ECAF68816FA8EC16C6EF9644886A11CFAA837 (SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA * __this, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_mA12020431103076AB69C0FC03C4C07B388AD9E27 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::GetValueAt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_GetValueAt_mA27AFC5D351DA50CA935ACCAB79D91F1E924C8CC (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, float ___offset0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::ChangeStopTime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_ChangeStopTime_mA4D7614B6F56A8E279596B52252816EB59843F23 (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Clear_m2B817953AFB7CDAA6B62AEC4A1E6A588484B554B (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Validate_mA0464BC35544052393B17674F751FAA755051B14 (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method);
// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4 (const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseManager::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineImpulseManager_get_CurrentTime_mE6D6E38260F7F6CA352A44825C905F3CABC331ED (CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::DistanceDecay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ImpulseEvent_DistanceDecay_mF8C3C77FF46D6C2B23BE694CCA9714F76ED60036 (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, float ___distance0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineOrbitalTransposer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2CC55D7CF3C4815383423BEA372FB9753A747D29 (U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * __this, const RuntimeMethod* method);
// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * CinemachineCore_get_Instance_mCD8E65EBCBB58BEDC6FD0C503AB9E866B76AFA83 (const RuntimeMethod* method);
// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::get_VirtualCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * CinemachineComponentBase_get_VirtualCamera_mDDC4BEDF77A93F4C25C2E62CBF96542ABB6FE3BA (CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.CinemachineCore::IsLive(Cinemachine.ICinemachineCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineCore_IsLive_m61EC3BE5D22564DD740379A88639BF368EBC1E43 (CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * __this, RuntimeObject* ___vcam0, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineOrbitalTransposer::UpdateHeading(System.Single,UnityEngine.Vector3,Cinemachine.AxisState&,Cinemachine.AxisState/Recentering&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineOrbitalTransposer_UpdateHeading_mB62BE9B437A813916796102106A15EC88B7D6D38 (CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * __this, float ___deltaTime0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up1, AxisState_t376D19829A676B98933979F42845F6476071DDE8 * ___axis2, Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * ___recentering3, bool ___isLive4, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineOrbitalTransposer/Heading::.ctor(Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heading__ctor_m27AC6DA9204C9B4856DEA05AAAD89E2400FF639A (Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * __this, int32_t ___def0, int32_t ___filterStrength1, float ___bias2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC (Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094 (ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793 (AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266 (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::.ctor(Cinemachine.CinemachineTriggerAction/ActionSettings/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, int32_t ___action0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCameraBase>()
inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::MoveToTopOfPrioritySubqueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631 (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Playables.PlayableDirector>()
inline PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Double UnityEngine.Playables.PlayableDirector::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableDirector_get_duration_m82E33D83BB84CFB367B98BDE1F927B10BBDA7B3E (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableDirector::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableDirector_get_time_m6E6BEDB6E9FF4A8CD48F73FB64F353B5787E735F (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_set_time_m1F9C316C3EDC9EB58D381C1F2520499125C1365A (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Play_m13D31AD720EEE25E93A21394B225EA10300C47C4 (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableDirector::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Stop_m4C9FCBB20CDD4BF75DF910F3BE713251D9548C96 (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, const RuntimeMethod* method);
// System.Single Cinemachine.ConfinerOven/AspectStretcher::get_Aspect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_inline (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, const RuntimeMethod* method);
// System.Void Cinemachine.ConfinerOven/AspectStretcher::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectStretcher__ctor_mDCB6211AC6DD9E121C1936D1CA89A59992810250 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, float ___aspect0, float ___centerX1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 Cinemachine.ConfinerOven/AspectStretcher::Stretch(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Stretch_mBF0EC7D7CB450374BBB47AE0ECE58FDD605FBA36 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method);
// UnityEngine.Vector2 Cinemachine.ConfinerOven/AspectStretcher::Unstretch(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Unstretch_m6C6ABFB166BF2BC9B4DBDF3B2057018DE19013D6 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single Cinemachine.ConfinerOven/BakedSolution::get_FrustumHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BakedSolution_get_FrustumHeight_mD53A0B6A4B8FA2F76504CF1A4D2F8429E47AC76B_inline (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::get_Count()
inline int32_t List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void ClipperLib.IntPoint::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPoint__ctor_mE5B43837884272FB8DD8256B001F6287A2E6BB63 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::get_Item(System.Int32)
inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * (*) (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Int32 ClipperLib.Clipper::PointInPolygon(ClipperLib.IntPoint,System.Collections.Generic.List`1<ClipperLib.IntPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Clipper_PointInPolygon_m2394FF589C7C4AFE474C1A07BA8C03847BB27023 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___pt0, List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * ___path1, const RuntimeMethod* method);
// System.Boolean Cinemachine.ConfinerOven/BakedSolution::IsInsideOriginal(ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakedSolution_IsInsideOriginal_m78F43D3331F08CB54EFD177DE23996F5E3C0B066 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ClipperLib.IntPoint>::get_Count()
inline int32_t List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 *, const RuntimeMethod*))List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<ClipperLib.IntPoint>::get_Item(System.Int32)
inline IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  (*) (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 *, int32_t, const RuntimeMethod*))List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_gshared_inline)(__this, ___index0, method);
}
// System.Single Cinemachine.ConfinerOven/BakedSolution::ClosestPointOnSegment(ClipperLib.IntPoint,ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BakedSolution_ClosestPointOnSegment_m640814AD98DC8ED622CC6F6CDD515E34F402C523 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p0, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___s01, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___s12, const RuntimeMethod* method);
// ClipperLib.IntPoint Cinemachine.ConfinerOven/BakedSolution::IntPointLerp(ClipperLib.IntPoint,ClipperLib.IntPoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  BakedSolution_IntPointLerp_mA505E038E47C5383553C541632DF7B0E9CF145D9 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___a0, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___b1, float ___lerp2, const RuntimeMethod* method);
// System.Boolean Cinemachine.ConfinerOven/BakedSolution::DoesIntersectOriginal(ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakedSolution_DoesIntersectOriginal_m4F340B7A818E7FB1CFA1732D2C6C12156D5A65E2 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___l10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___l21, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::GetEnumerator()
inline Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F  List_1_GetEnumerator_m8077ECD98AF0C32599B6EFD30BF28B38C0A69088 (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F  (*) (List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::get_Current()
inline List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * Enumerator_get_Current_m35D9C8D74929ECDAC5BA5CC7BC877B76A7B43978_inline (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F * __this, const RuntimeMethod* method)
{
	return ((  List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * (*) (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Int32 Cinemachine.ConfinerOven/BakedSolution::FindIntersection(ClipperLib.IntPoint&,ClipperLib.IntPoint&,ClipperLib.IntPoint&,ClipperLib.IntPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BakedSolution_FindIntersection_m7F71E48AF4363555C58A9117C7A7B3272A3CB902 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p21, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p32, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p43, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::MoveNext()
inline bool Enumerator_MoveNext_m70ECC7DD5B3052A7FD8D32B7494DD6AC940D53CC (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<ClipperLib.IntPoint>>::Dispose()
inline void Enumerator_Dispose_mE52774661C80C9168642350DFA54D299E6A19584 (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsInfinity_mEA460DCA490F45C8AB5179BFFE48D3E06965381B (double ___d0, const RuntimeMethod* method);
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347 (double ___d0, const RuntimeMethod* method);
// System.Double Cinemachine.ConfinerOven/BakedSolution::IntPointDiffSqrMagnitude(ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p21, const RuntimeMethod* method);
// System.Boolean Cinemachine.ConfinerOven/PolygonSolution::StateChanged(System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolygonSolution_StateChanged_m4F55923D1FF840A66DED34E00ABC163A4870674F (PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * __this, List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** ___paths0, const RuntimeMethod* method);
// System.Boolean Cinemachine.ConfinerOven/PolygonSolution::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolygonSolution_get_IsEmpty_mCA5809BECBE372CE603DC4E4C7E5873309A50196 (PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519 (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single Cinemachine.NoiseSettings/NoiseParams::GetValueAt(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610 (NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.NoiseSettings/TransformNoiseParams::GetValueAt(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD (TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Count()
inline int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, const RuntimeMethod*))List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::.ctor(System.Int32)
inline void List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94 (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, int32_t, const RuntimeMethod*))List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::Add(!0)
inline void List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B , const RuntimeMethod*))List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA_gshared)(__this, ___item0, method);
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::Add(Cinemachine.TargetPositionCache/CacheCurve/Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheCurve/Item>::get_Item(System.Int32)
inline Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  (*) (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_gshared_inline)(__this, ___index0, method);
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::Lerp(Cinemachine.TargetPositionCache/CacheCurve/Item,Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___a0, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___b1, float ___t2, const RuntimeMethod* method);
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Count()
inline int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::get_Item(System.Int32)
inline RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Add(!0)
inline void List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB , const RuntimeMethod*))List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, int32_t, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB , const RuntimeMethod*))List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___startTime0, float ___endTime1, float ___stepSize2, const RuntimeMethod* method);
// System.Void Cinemachine.TargetPositionCache/CacheCurve::AddUntil(Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, float ___time1, bool ___isCut2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::Clear()
inline void List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6 (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>::.ctor()
inline void List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334 (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *, const RuntimeMethod*))List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_gshared)(__this, method);
}
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Cinemachine.CameraState/CustomBlendable::.ctor(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomBlendable__ctor_mA7DEF75ACB9FDE678221EF6176FBD4DC4441FB07 (CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___custom0, float ___weight1, const RuntimeMethod* method)
{
	{
		// { m_Custom = custom; m_Weight = weight; }
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___custom0;
		__this->set_m_Custom_0(L_0);
		// { m_Custom = custom; m_Weight = weight; }
		float L_1 = ___weight1;
		__this->set_m_Weight_1(L_1);
		// { m_Custom = custom; m_Weight = weight; }
		return;
	}
}
IL2CPP_EXTERN_C  void CustomBlendable__ctor_mA7DEF75ACB9FDE678221EF6176FBD4DC4441FB07_AdjustorThunk (RuntimeObject * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___custom0, float ___weight1, const RuntimeMethod* method)
{
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B *>(__this + _offset);
	CustomBlendable__ctor_mA7DEF75ACB9FDE678221EF6176FBD4DC4441FB07(_thisAdjusted, ___custom0, ___weight1, method);
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
// Conversion methods for marshalling of: Cinemachine.CinemachineBlendListCamera/Instruction
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_pinvoke(const Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD& unmarshaled, Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_VirtualCamera_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_0Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_pinvoke_back(const Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_pinvoke& marshaled, Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineBlendListCamera/Instruction
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_pinvoke_cleanup(Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineBlendListCamera/Instruction
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_com(const Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD& unmarshaled, Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_com& marshaled)
{
	Exception_t* ___m_VirtualCamera_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_0Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_com_back(const Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_com& marshaled, Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineBlendListCamera/Instruction
IL2CPP_EXTERN_C void Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshal_com_cleanup(Instruction_t2B9B6F901E093EE37D10A69C0993A391883883AD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.CinemachineBlenderSettings/CustomBlend
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_pinvoke(const CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85& unmarshaled, CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_pinvoke& marshaled)
{
	marshaled.___m_From_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_From_0());
	marshaled.___m_To_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_To_1());
	marshaled.___m_Blend_2 = unmarshaled.get_m_Blend_2();
}
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_pinvoke_back(const CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_pinvoke& marshaled, CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85& unmarshaled)
{
	unmarshaled.set_m_From_0(il2cpp_codegen_marshal_string_result(marshaled.___m_From_0));
	unmarshaled.set_m_To_1(il2cpp_codegen_marshal_string_result(marshaled.___m_To_1));
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  unmarshaled_m_Blend_temp_2;
	memset((&unmarshaled_m_Blend_temp_2), 0, sizeof(unmarshaled_m_Blend_temp_2));
	unmarshaled_m_Blend_temp_2 = marshaled.___m_Blend_2;
	unmarshaled.set_m_Blend_2(unmarshaled_m_Blend_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineBlenderSettings/CustomBlend
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_pinvoke_cleanup(CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_From_0);
	marshaled.___m_From_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_To_1);
	marshaled.___m_To_1 = NULL;
}
// Conversion methods for marshalling of: Cinemachine.CinemachineBlenderSettings/CustomBlend
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_com(const CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85& unmarshaled, CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_com& marshaled)
{
	marshaled.___m_From_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_From_0());
	marshaled.___m_To_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_To_1());
	marshaled.___m_Blend_2 = unmarshaled.get_m_Blend_2();
}
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_com_back(const CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_com& marshaled, CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85& unmarshaled)
{
	unmarshaled.set_m_From_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_From_0));
	unmarshaled.set_m_To_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_To_1));
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  unmarshaled_m_Blend_temp_2;
	memset((&unmarshaled_m_Blend_temp_2), 0, sizeof(unmarshaled_m_Blend_temp_2));
	unmarshaled_m_Blend_temp_2 = marshaled.___m_Blend_2;
	unmarshaled.set_m_Blend_2(unmarshaled_m_Blend_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineBlenderSettings/CustomBlend
IL2CPP_EXTERN_C void CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshal_com_cleanup(CustomBlend_t8D1F710D2ED10B096356574DD839C02366269E85_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_From_0);
	marshaled.___m_From_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_To_1);
	marshaled.___m_To_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineBrain/<AfterPhysics>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterPhysicsU3Ed__33__ctor_m24D6754D2DAB3DF174EEE38B2A0B6E6E5D5A5DD2 (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineBrain/<AfterPhysics>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterPhysicsU3Ed__33_System_IDisposable_Dispose_mDCB6F829946F1B34F28228BC74725898C5EE8FCD (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Cinemachine.CinemachineBrain/<AfterPhysics>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAfterPhysicsU3Ed__33_MoveNext_mDA6F02ED5AF41DC0E1B1AD753F8AAE8F06B9B28A (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateTracker_t65DAFAB0BA9482C7B23F5B1B01DE209C617434E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return mWaitForFixedUpdate;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_4 = V_1;
		WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * L_5 = L_4->get_mWaitForFixedUpdate_18();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (m_UpdateMethod == UpdateMethod.FixedUpdate
		//     || m_UpdateMethod == UpdateMethod.SmartUpdate)
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_6 = V_1;
		int32_t L_7 = L_6->get_m_UpdateMethod_8();
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_8 = V_1;
		int32_t L_9 = L_8->get_m_UpdateMethod_8();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_006c;
		}
	}

IL_004b:
	{
		// CinemachineCore.UpdateFilter filter = CinemachineCore.UpdateFilter.Fixed;
		V_2 = 0;
		// if (m_UpdateMethod == UpdateMethod.SmartUpdate)
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_10 = V_1;
		int32_t L_11 = L_10->get_m_UpdateMethod_8();
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005e;
		}
	}
	{
		// UpdateTracker.OnUpdate(UpdateTracker.UpdateClock.Fixed);
		IL2CPP_RUNTIME_CLASS_INIT(UpdateTracker_t65DAFAB0BA9482C7B23F5B1B01DE209C617434E5_il2cpp_TypeInfo_var);
		UpdateTracker_OnUpdate_m5F262770C3B9222F8503D50DFE21FF7C9A902C41(0, /*hidden argument*/NULL);
		// filter = CinemachineCore.UpdateFilter.SmartFixed;
		V_2 = 8;
	}

IL_005e:
	{
		// UpdateVirtualCameras(filter, GetEffectiveDeltaTime(true));
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_12 = V_1;
		int32_t L_13 = V_2;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_14 = V_1;
		float L_15;
		L_15 = CinemachineBrain_GetEffectiveDeltaTime_m27D6E0AC28FA42C74DD804AB942F0D496D55379B(L_14, (bool)1, /*hidden argument*/NULL);
		CinemachineBrain_UpdateVirtualCameras_mCA6172FE9872138FF4D2B3867EE7AB5BE6D47F89(L_12, L_13, L_15, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// if (m_BlendUpdateMethod == BrainUpdateMethod.FixedUpdate)
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_16 = V_1;
		int32_t L_17 = L_16->get_m_BlendUpdateMethod_9();
		if (L_17)
		{
			goto IL_001e;
		}
	}
	{
		// UpdateFrame0(Time.fixedDeltaTime);
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_18 = V_1;
		float L_19;
		L_19 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		CinemachineBrain_UpdateFrame0_m8FD42266AA4C2CCE09B842A5BA7362126585858B(L_18, L_19, /*hidden argument*/NULL);
		// ProcessActiveCamera(Time.fixedDeltaTime);
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_20 = V_1;
		float L_21;
		L_21 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		CinemachineBrain_ProcessActiveCamera_m094A1972B629F11EB580679FEFD78076769180FF(L_20, L_21, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Cinemachine.CinemachineBrain/<AfterPhysics>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterPhysicsU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBDD4A0F001AD9DD0F2AB2F992A82F77B770FF837 (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Cinemachine.CinemachineBrain/<AfterPhysics>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAfterPhysicsU3Ed__33_System_Collections_IEnumerator_Reset_mAA45376E2089E38B00E97B3A6B9F00F2A495B435 (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAfterPhysicsU3Ed__33_System_Collections_IEnumerator_Reset_mAA45376E2089E38B00E97B3A6B9F00F2A495B435_RuntimeMethod_var)));
	}
}
// System.Object Cinemachine.CinemachineBrain/<AfterPhysics>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAfterPhysicsU3Ed__33_System_Collections_IEnumerator_get_Current_m266F0F6B25D7EAA07E9A5A65D99178B51EE354EA (U3CAfterPhysicsU3Ed__33_tA4D44E877AD53DB9E84AD4FFE95153A169259F47 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Cinemachine.CinemachineBrain/BrainEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrainEvent__ctor_m648F7E949F40D8EAB7019FAED3ECE88D8CAF05D7 (BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7FAB70A1CC10FC2B1F244136B510D1B8F5A4FF13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7FAB70A1CC10FC2B1F244136B510D1B8F5A4FF13(__this, /*hidden argument*/UnityEvent_1__ctor_m7FAB70A1CC10FC2B1F244136B510D1B8F5A4FF13_RuntimeMethod_var);
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
// System.Boolean Cinemachine.CinemachineBrain/BrainFrame::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrainFrame_get_Active_mD8AA67B2ACCA6591C9DA9A495850D2145C5B0712 (BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3 * __this, const RuntimeMethod* method)
{
	{
		// public bool Active { get { return blend.IsValid; } }
		CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * L_0 = __this->get_blend_1();
		bool L_1;
		L_1 = CinemachineBlend_get_IsValid_m55FFFA5BC32710DA0EF7CA8DBD7B0303D562D0D2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Cinemachine.CinemachineBrain/BrainFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrainFrame__ctor_mA060413F10EA79721B2D2A33D99DC1D3282831A6 (BrainFrame_t07FD63A76D2E5288AD57B3FDAC0AB14A034AF2D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CinemachineBlend blend = new CinemachineBlend(null, null, null, 0, 0);
		CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * L_0 = (CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C *)il2cpp_codegen_object_new(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C_il2cpp_TypeInfo_var);
		CinemachineBlend__ctor_mB06EF56D92F3900609669689E8820647EE84B5A3(L_0, (RuntimeObject*)NULL, (RuntimeObject*)NULL, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_blend_1(L_0);
		// public CinemachineBlend workingBlend = new CinemachineBlend(null, null, null, 0, 0);
		CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * L_1 = (CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C *)il2cpp_codegen_object_new(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C_il2cpp_TypeInfo_var);
		CinemachineBlend__ctor_mB06EF56D92F3900609669689E8820647EE84B5A3(L_1, (RuntimeObject*)NULL, (RuntimeObject*)NULL, (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_workingBlend_2(L_1);
		// public BlendSourceVirtualCamera workingBlendSource = new BlendSourceVirtualCamera(null);
		BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC * L_2 = (BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC *)il2cpp_codegen_object_new(BlendSourceVirtualCamera_t51EF059412C3159149A6F336FED668E4A11DF1AC_il2cpp_TypeInfo_var);
		BlendSourceVirtualCamera__ctor_m762CFEB65D584FC854F9653CF1A97444FF86E08B(L_2, (CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C *)NULL, /*hidden argument*/NULL);
		__this->set_workingBlendSource_3(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineBrain/VcamActivatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamActivatedEvent__ctor_mA99C1BA22F69EE75141BFFBB810E1230DCFA15E6 (VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mB5F14A2841CFD4FFEA2B3FDB766A68789CA4C500_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mB5F14A2841CFD4FFEA2B3FDB766A68789CA4C500(__this, /*hidden argument*/UnityEvent_2__ctor_mB5F14A2841CFD4FFEA2B3FDB766A68789CA4C500_RuntimeMethod_var);
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
// System.Void Cinemachine.CinemachineClearShot/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9685B944F64D38F8A51929E1DCF7714D96EE5C6E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * L_0 = (U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 *)il2cpp_codegen_object_new(U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m02E5C011A18650E911D7DE28902B36407425A1DA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineClearShot/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m02E5C011A18650E911D7DE28902B36407425A1DA (U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cinemachine.CinemachineClearShot/<>c::<Randomize>b__47_0(Cinemachine.CinemachineClearShot/Pair,Cinemachine.CinemachineClearShot/Pair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRandomizeU3Eb__47_0_m11EDFFF61087041AA23E34C5AE7D01B6976118F9 (U3CU3Ec_tE71B8ECA45D0B2A279AFC42A046D8FE08995E601 * __this, Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB  ___p10, Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB  ___p21, const RuntimeMethod* method)
{
	{
		// pairs.Sort((p1, p2) => (int)p1.b - (int)p2.b);
		Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB  L_0 = ___p10;
		float L_1 = L_0.get_b_1();
		Pair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB  L_2 = ___p21;
		float L_3 = L_2.get_b_1();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineCollider/VcamExtraState::AddPointToDebugPath(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_AddPointToDebugPath_mFF718D5B8D9DACD1A94BAFB458A028241E0FC95B (VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineCollider/VcamExtraState::ApplyDistanceSmoothing(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VcamExtraState_ApplyDistanceSmoothing_mB2490C4B28326713F8FAECEEBC239B46BDBB853C (VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC * __this, float ___distance0, float ___smoothingTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SmoothedTime != 0 && smoothingTime > Epsilon)
		float L_0 = __this->get_m_SmoothedTime_7();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___smoothingTime1;
		if ((!(((float)L_1) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0031;
		}
	}
	{
		// float now = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CinemachineCore_get_CurrentTime_mBD3A55B23004CB425D9297086BC20D7C55797625(/*hidden argument*/NULL);
		// if (now - m_SmoothedTime < smoothingTime)
		float L_3 = __this->get_m_SmoothedTime_7();
		float L_4 = ___smoothingTime1;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_3))) < ((float)L_4))))
		{
			goto IL_0031;
		}
	}
	{
		// return Mathf.Min(distance, m_SmoothedDistance);
		float L_5 = ___distance0;
		float L_6 = __this->get_m_SmoothedDistance_6();
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0031:
	{
		// return distance;
		float L_8 = ___distance0;
		return L_8;
	}
}
// System.Void Cinemachine.CinemachineCollider/VcamExtraState::UpdateDistanceSmoothing(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_UpdateDistanceSmoothing_m75C77A914C361D02C7C0F9B73A874D309EC124B8 (VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC * __this, float ___distance0, float ___smoothingTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float now = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CinemachineCore_get_CurrentTime_mBD3A55B23004CB425D9297086BC20D7C55797625(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (m_SmoothedDistance == 0 || distance <= m_SmoothedDistance)
		float L_1 = __this->get_m_SmoothedDistance_6();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = ___distance0;
		float L_3 = __this->get_m_SmoothedDistance_6();
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_002a;
		}
	}

IL_001c:
	{
		// m_SmoothedDistance = distance;
		float L_4 = ___distance0;
		__this->set_m_SmoothedDistance_6(L_4);
		// m_SmoothedTime = now;
		float L_5 = V_0;
		__this->set_m_SmoothedTime_7(L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineCollider/VcamExtraState::ResetDistanceSmoothing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState_ResetDistanceSmoothing_m9DA2E009ED1BBFD18F811B5A1E0DF1BE9D91342C (VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC * __this, float ___smoothingTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float now = CinemachineCore.CurrentTime;
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CinemachineCore_get_CurrentTime_mBD3A55B23004CB425D9297086BC20D7C55797625(/*hidden argument*/NULL);
		// if (now - m_SmoothedTime >= smoothingTime)
		float L_1 = __this->get_m_SmoothedTime_7();
		float L_2 = ___smoothingTime0;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) >= ((float)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// m_SmoothedDistance = m_SmoothedTime = 0;
		float L_3 = (0.0f);
		V_0 = L_3;
		__this->set_m_SmoothedTime_7(L_3);
		float L_4 = V_0;
		__this->set_m_SmoothedDistance_6(L_4);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineCollider/VcamExtraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState__ctor_mAD425FDD74968E2F744178F85B1C9F5FA2FA875F (VcamExtraState_t73D4C00CD5762D5EF09276AC175DC148D0FC72CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Cinemachine.CinemachineComposer/FovCache::UpdateCache(Cinemachine.LensSettings,UnityEngine.Rect,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FovCache_UpdateCache_m2EFDABF6DAFD0ACF434A8A83F5CAB0AA4B4F3519 (FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * __this, LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___lens0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___softGuide1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___hardGuide2, float ___targetDistance3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	double V_3 = 0.0;
	int32_t G_B4_0 = 0;
	{
		// bool recalculate = mAspect != lens.Aspect
		//     || softGuide != mSoftGuideRect || hardGuide != mHardGuideRect;
		float L_0 = __this->get_mAspect_5();
		float L_1;
		L_1 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_002b;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___softGuide1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = __this->get_mSoftGuideRect_6();
		bool L_4;
		L_4 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = ___hardGuide2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = __this->get_mHardGuideRect_7();
		bool L_7;
		L_7 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_5, L_6, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		// if (lens.Orthographic)
		bool L_8;
		L_8 = LensSettings_get_Orthographic_mD89E6548BD05054F1ADFF7CB767ADCBA147970A0((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b1;
		}
	}
	{
		// float orthoOverDistance = Mathf.Abs(lens.OrthographicSize / targetDistance);
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  L_9 = ___lens0;
		float L_10 = L_9.get_OrthographicSize_2();
		float L_11 = ___targetDistance3;
		float L_12;
		L_12 = fabsf(((float)((float)L_10/(float)L_11)));
		V_1 = L_12;
		// if (mOrthoSizeOverDistance == 0
		//     || Mathf.Abs(orthoOverDistance - mOrthoSizeOverDistance) / mOrthoSizeOverDistance
		//         > mOrthoSizeOverDistance * 0.01f)
		float L_13 = __this->get_mOrthoSizeOverDistance_4();
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_0074;
		}
	}
	{
		float L_14 = V_1;
		float L_15 = __this->get_mOrthoSizeOverDistance_4();
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract((float)L_14, (float)L_15)));
		float L_17 = __this->get_mOrthoSizeOverDistance_4();
		float L_18 = __this->get_mOrthoSizeOverDistance_4();
		if ((!(((float)((float)((float)L_16/(float)L_17))) > ((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(0.00999999978f)))))))
		{
			goto IL_0076;
		}
	}

IL_0074:
	{
		// recalculate = true;
		V_0 = (bool)1;
	}

IL_0076:
	{
		// if (recalculate)
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_011b;
		}
	}
	{
		// mFov = Mathf.Rad2Deg * 2 * Mathf.Atan(orthoOverDistance);
		float L_20 = V_1;
		float L_21;
		L_21 = atanf(L_20);
		__this->set_mFov_3(((float)il2cpp_codegen_multiply((float)(114.59156f), (float)L_21)));
		// mFovH = Mathf.Rad2Deg * 2 * Mathf.Atan(lens.Aspect * orthoOverDistance);
		float L_22;
		L_22 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		float L_23 = V_1;
		float L_24;
		L_24 = atanf(((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)));
		__this->set_mFovH_2(((float)il2cpp_codegen_multiply((float)(114.59156f), (float)L_24)));
		// mOrthoSizeOverDistance = orthoOverDistance;
		float L_25 = V_1;
		__this->set_mOrthoSizeOverDistance_4(L_25);
		// }
		goto IL_011b;
	}

IL_00b1:
	{
		// var verticalFOV = lens.FieldOfView;
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  L_26 = ___lens0;
		float L_27 = L_26.get_FieldOfView_1();
		V_2 = L_27;
		// if (mFov != verticalFOV)
		float L_28 = __this->get_mFov_3();
		float L_29 = V_2;
		if ((((float)L_28) == ((float)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		// recalculate = true;
		V_0 = (bool)1;
	}

IL_00c3:
	{
		// if (recalculate)
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		// mFov = verticalFOV;
		float L_31 = V_2;
		__this->set_mFov_3(L_31);
		// double radHFOV = 2 * Math.Atan(Math.Tan(mFov * Mathf.Deg2Rad / 2) * lens.Aspect);
		float L_32 = __this->get_mFov_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = tan(((double)((double)((float)((float)((float)il2cpp_codegen_multiply((float)L_32, (float)(0.0174532924f)))/(float)(2.0f))))));
		float L_34;
		L_34 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		double L_35;
		L_35 = atan(((double)il2cpp_codegen_multiply((double)L_33, (double)((double)((double)L_34)))));
		V_3 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_35));
		// mFovH = (float)(Mathf.Rad2Deg * radHFOV);
		double L_36 = V_3;
		__this->set_mFovH_2(((float)((float)((double)il2cpp_codegen_multiply((double)(57.295780181884766), (double)L_36)))));
		// mOrthoSizeOverDistance = 0;
		__this->set_mOrthoSizeOverDistance_4((0.0f));
	}

IL_011b:
	{
		// if (recalculate)
		bool L_37 = V_0;
		if (!L_37)
		{
			goto IL_0179;
		}
	}
	{
		// mFovSoftGuideRect = ScreenToFOV(softGuide, mFov, mFovH, lens.Aspect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_38 = ___softGuide1;
		float L_39 = __this->get_mFov_3();
		float L_40 = __this->get_mFovH_2();
		float L_41;
		L_41 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42;
		L_42 = FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B((FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 *)__this, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		__this->set_mFovSoftGuideRect_0(L_42);
		// mSoftGuideRect = softGuide;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_43 = ___softGuide1;
		__this->set_mSoftGuideRect_6(L_43);
		// mFovHardGuideRect = ScreenToFOV(hardGuide, mFov, mFovH, lens.Aspect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44 = ___hardGuide2;
		float L_45 = __this->get_mFov_3();
		float L_46 = __this->get_mFovH_2();
		float L_47;
		L_47 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_48;
		L_48 = FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B((FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 *)__this, L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
		__this->set_mFovHardGuideRect_1(L_48);
		// mHardGuideRect = hardGuide;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_49 = ___hardGuide2;
		__this->set_mHardGuideRect_7(L_49);
		// mAspect = lens.Aspect;
		float L_50;
		L_50 = LensSettings_get_Aspect_m9CC9D04C1503CE0708B7E8D7918D51E6D105CBA6((LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA *)(&___lens0), /*hidden argument*/NULL);
		__this->set_mAspect_5(L_50);
	}

IL_0179:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FovCache_UpdateCache_m2EFDABF6DAFD0ACF434A8A83F5CAB0AA4B4F3519_AdjustorThunk (RuntimeObject * __this, LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___lens0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___softGuide1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___hardGuide2, float ___targetDistance3, const RuntimeMethod* method)
{
	FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 *>(__this + _offset);
	FovCache_UpdateCache_m2EFDABF6DAFD0ACF434A8A83F5CAB0AA4B4F3519(_thisAdjusted, ___lens0, ___softGuide1, ___hardGuide2, ___targetDistance3, method);
}
// UnityEngine.Rect Cinemachine.CinemachineComposer/FovCache::ScreenToFOV(UnityEngine.Rect,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B (FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rScreen0, float ___fov1, float ___fovH2, float ___aspect3, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Rect r = new Rect(rScreen);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = ___rScreen0;
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_0, /*hidden argument*/NULL);
		// Matrix4x4 persp = Matrix4x4.Perspective(fov, aspect, 0.0001f, 2f).inverse;
		float L_1 = ___fov1;
		float L_2 = ___aspect3;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_Perspective_mC6E5CD7C41446DDEADD294A1FC6EFEC2FD23E947(L_1, L_2, (9.99999975E-05f), (2.0f), /*hidden argument*/NULL);
		V_4 = L_3;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 p = persp.MultiplyPoint(new Vector3(0, (r.yMin * 2f) - 1f, 0.5f)); p.z = -p.z;
		float L_5;
		L_5 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))), (float)(1.0f))), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// Vector3 p = persp.MultiplyPoint(new Vector3(0, (r.yMin * 2f) - 1f, 0.5f)); p.z = -p.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		float L_9 = L_8.get_z_4();
		(&V_2)->set_z_4(((-L_9)));
		// float angle = UnityVectorExtensions.SignedAngle(Vector3.forward, p, Vector3.left);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_13;
		L_13 = UnityVectorExtensions_SignedAngle_mD9BC7BAFD53B8BEE637C33AF52EAB09DFA45F939(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// r.yMin = ((fov / 2) + angle) / fov;
		float L_14 = ___fov1;
		float L_15 = V_3;
		float L_16 = ___fov1;
		Rect_set_yMin_mA2FDFF7C8C2361A4CF3F446BAB9A861F923F763A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((float)il2cpp_codegen_add((float)((float)((float)L_14/(float)(2.0f))), (float)L_15))/(float)L_16)), /*hidden argument*/NULL);
		// p = persp.MultiplyPoint(new Vector3(0, (r.yMax * 2f) - 1f, 0.5f)); p.z = -p.z;
		float L_17;
		L_17 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(2.0f))), (float)(1.0f))), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// p = persp.MultiplyPoint(new Vector3(0, (r.yMax * 2f) - 1f, 0.5f)); p.z = -p.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		float L_21 = L_20.get_z_4();
		(&V_2)->set_z_4(((-L_21)));
		// angle = UnityVectorExtensions.SignedAngle(Vector3.forward, p, Vector3.left);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_25;
		L_25 = UnityVectorExtensions_SignedAngle_mD9BC7BAFD53B8BEE637C33AF52EAB09DFA45F939(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// r.yMax = ((fov / 2) + angle) / fov;
		float L_26 = ___fov1;
		float L_27 = V_3;
		float L_28 = ___fov1;
		Rect_set_yMax_m4E7A7C5E88FA369D6ED022C939427F4895F6635D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((float)il2cpp_codegen_add((float)((float)((float)L_26/(float)(2.0f))), (float)L_27))/(float)L_28)), /*hidden argument*/NULL);
		// p = persp.MultiplyPoint(new Vector3((r.xMin * 2f) - 1f, 0, 0.5f));  p.z = -p.z;
		float L_29;
		L_29 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_30), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_29, (float)(2.0f))), (float)(1.0f))), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// p = persp.MultiplyPoint(new Vector3((r.xMin * 2f) - 1f, 0, 0.5f));  p.z = -p.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
		float L_33 = L_32.get_z_4();
		(&V_2)->set_z_4(((-L_33)));
		// angle = UnityVectorExtensions.SignedAngle(Vector3.forward, p, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_37;
		L_37 = UnityVectorExtensions_SignedAngle_mD9BC7BAFD53B8BEE637C33AF52EAB09DFA45F939(L_34, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		// r.xMin = ((fovH / 2) + angle) / fovH;
		float L_38 = ___fovH2;
		float L_39 = V_3;
		float L_40 = ___fovH2;
		Rect_set_xMin_mC91AC74347F8E3D537E8C5D70015E9B8EA872A3F((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((float)il2cpp_codegen_add((float)((float)((float)L_38/(float)(2.0f))), (float)L_39))/(float)L_40)), /*hidden argument*/NULL);
		// p = persp.MultiplyPoint(new Vector3((r.xMax * 2f) - 1f, 0, 0.5f));  p.z = -p.z;
		float L_41;
		L_41 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_41, (float)(2.0f))), (float)(1.0f))), (0.0f), (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_1), L_42, /*hidden argument*/NULL);
		V_2 = L_43;
		// p = persp.MultiplyPoint(new Vector3((r.xMax * 2f) - 1f, 0, 0.5f));  p.z = -p.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_2;
		float L_45 = L_44.get_z_4();
		(&V_2)->set_z_4(((-L_45)));
		// angle = UnityVectorExtensions.SignedAngle(Vector3.forward, p, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_49;
		L_49 = UnityVectorExtensions_SignedAngle_mD9BC7BAFD53B8BEE637C33AF52EAB09DFA45F939(L_46, L_47, L_48, /*hidden argument*/NULL);
		V_3 = L_49;
		// r.xMax = ((fovH / 2) + angle) / fovH;
		float L_50 = ___fovH2;
		float L_51 = V_3;
		float L_52 = ___fovH2;
		Rect_set_xMax_m4E466ED07B11CC5457BD62517418C493C0DDF2E3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((float)il2cpp_codegen_add((float)((float)((float)L_50/(float)(2.0f))), (float)L_51))/(float)L_52)), /*hidden argument*/NULL);
		// return r;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_53 = V_0;
		return L_53;
	}
}
IL2CPP_EXTERN_C  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B_AdjustorThunk (RuntimeObject * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rScreen0, float ___fov1, float ___fovH2, float ___aspect3, const RuntimeMethod* method)
{
	FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FovCache_t5555CCBDA0305214CA84F8F81D9C17F2DCC844C0 *>(__this + _offset);
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  _returnValue;
	_returnValue = FovCache_ScreenToFOV_m813E0A11A9BEBC417751E33DA5E18A5A0DADFF2B(_thisAdjusted, ___rScreen0, ___fov1, ___fovH2, ___aspect3, method);
	return _returnValue;
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
// System.Void Cinemachine.CinemachineConfiner/VcamExtraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState__ctor_m0EE1BF4E53FB8E8DFF70446D1A47286397ED89FD (VcamExtraState_tE9845AA267093B1D1A0E7E2AB306676F3A3D80BA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Cinemachine.CinemachineConfiner2D/ShapeCache
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_pinvoke(const ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3& unmarshaled, ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_confinerOven_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_confinerOven' of type 'ShapeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_confinerOven_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_pinvoke_back(const ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_pinvoke& marshaled, ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3& unmarshaled)
{
	Exception_t* ___m_confinerOven_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_confinerOven' of type 'ShapeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_confinerOven_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineConfiner2D/ShapeCache
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_pinvoke_cleanup(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineConfiner2D/ShapeCache
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_com(const ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3& unmarshaled, ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_com& marshaled)
{
	Exception_t* ___m_confinerOven_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_confinerOven' of type 'ShapeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_confinerOven_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_com_back(const ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_com& marshaled, ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3& unmarshaled)
{
	Exception_t* ___m_confinerOven_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_confinerOven' of type 'ShapeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_confinerOven_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineConfiner2D/ShapeCache
IL2CPP_EXTERN_C void ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshal_com_cleanup(ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineConfiner2D/ShapeCache::Invalidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeCache_Invalidate_m0AA1A789129A6F496BDB42C9914A48A80D0BB222 (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_aspectRatio = 0;
		__this->set_m_aspectRatio_4((0.0f));
		// m_maxWindowSize = -1;
		__this->set_m_maxWindowSize_5((-1.0f));
		// m_DeltaBakedToWorld = m_DeltaWorldToBaked = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = L_0;
		V_0 = L_1;
		__this->set_m_DeltaWorldToBaked_2(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = V_0;
		__this->set_m_DeltaBakedToWorld_3(L_2);
		// m_boundingShape2D = null;
		__this->set_m_boundingShape2D_8((Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *)NULL);
		// m_OriginalPath = null;
		__this->set_m_OriginalPath_1((List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)NULL);
		// m_confinerOven = null;
		__this->set_m_confinerOven_0((ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeCache_Invalidate_m0AA1A789129A6F496BDB42C9914A48A80D0BB222_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *>(__this + _offset);
	ShapeCache_Invalidate_m0AA1A789129A6F496BDB42C9914A48A80D0BB222(_thisAdjusted, method);
}
// System.Boolean Cinemachine.CinemachineConfiner2D/ShapeCache::ValidateCache(UnityEngine.Collider2D,System.Single,System.Single,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeCache_ValidateCache_mA040BB9D38360821A0D577FAA9520E12917B126C (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___boundingShape2D0, float ___maxWindowSize1, float ___aspectRatio2, bool* ___confinerStateChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * V_1 = NULL;
	int32_t V_2 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_4 = NULL;
	int32_t V_5 = 0;
	CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * V_6 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * V_10 = NULL;
	int32_t V_11 = 0;
	Type_t * G_B8_0 = NULL;
	{
		// confinerStateChanged = false;
		bool* L_0 = ___confinerStateChanged3;
		*((int8_t*)L_0) = (int8_t)0;
		// if (IsValid(boundingShape2D, aspectRatio, maxWindowSize))
		bool L_1;
		L_1 = ShapeCache_IsValid_mD14BF34734A81849A719899A4F29ED241C21E25B((ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *)__this, (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 **)(&___boundingShape2D0), (float*)(&___aspectRatio2), (float*)(&___maxWindowSize1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		// if (m_confinerOven.State == ConfinerOven.BakingState.BAKING)
		ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * L_2 = __this->get_m_confinerOven_0();
		int32_t L_3;
		L_3 = ConfinerOven_get_State_m05EB332DF4BD4F147E273BA2674EABE440F7A454_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		// m_confinerOven.BakeConfiner(m_maxComputationTimePerFrameInSeconds);
		ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * L_4 = __this->get_m_confinerOven_0();
		float L_5 = __this->get_m_maxComputationTimePerFrameInSeconds_6();
		ConfinerOven_BakeConfiner_mF38F9C5E62C35B1641CE6518FE9CE8E882B1E6F5(L_4, L_5, /*hidden argument*/NULL);
		// confinerStateChanged = m_confinerOven.State != ConfinerOven.BakingState.BAKING;
		bool* L_6 = ___confinerStateChanged3;
		ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * L_7 = __this->get_m_confinerOven_0();
		int32_t L_8;
		L_8 = ConfinerOven_get_State_m05EB332DF4BD4F147E273BA2674EABE440F7A454_inline(L_7, /*hidden argument*/NULL);
		*((int8_t*)L_6) = (int8_t)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0041:
	{
		// CalculateDeltaTransformationMatrix();
		ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114((ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *)__this, /*hidden argument*/NULL);
		// Vector2 lossyScaleXY = m_DeltaWorldToBaked.lossyScale;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_9 = __this->get_address_of_m_DeltaWorldToBaked_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Matrix4x4_get_lossyScale_m540B8C7CAA4F2FFF4B8C1DBED639B49F5EFB81CF((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		// if (lossyScaleXY.IsUniform())
		bool L_12;
		L_12 = UnityVectorExtensions_IsUniform_m0A6BCC370C26C2C536B22030915BB3C3B96C47E3(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// Invalidate();
		ShapeCache_Invalidate_m0AA1A789129A6F496BDB42C9914A48A80D0BB222((ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *)__this, /*hidden argument*/NULL);
		// confinerStateChanged = true;
		bool* L_13 = ___confinerStateChanged3;
		*((int8_t*)L_13) = (int8_t)1;
		// Type colliderType = boundingShape2D == null ? null:  boundingShape2D.GetType();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = ___boundingShape2D0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___boundingShape2D0;
		Type_t * L_17;
		L_17 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_16, /*hidden argument*/NULL);
		G_B8_0 = L_17;
		goto IL_007c;
	}

IL_007b:
	{
		G_B8_0 = ((Type_t *)(NULL));
	}

IL_007c:
	{
		V_0 = G_B8_0;
		// if (colliderType == typeof(PolygonCollider2D))
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_011d;
		}
	}
	{
		// PolygonCollider2D poly = boundingShape2D as PolygonCollider2D;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_22 = ___boundingShape2D0;
		V_1 = ((PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D *)IsInstSealed((RuntimeObject*)L_22, PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D_il2cpp_TypeInfo_var));
		// m_OriginalPath = new List<List<Vector2>>();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_23 = (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)il2cpp_codegen_object_new(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20(L_23, /*hidden argument*/List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		__this->set_m_OriginalPath_1(L_23);
		// m_bakedToWorld = boundingShape2D.transform.localToWorldMatrix;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = ___boundingShape2D0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_26;
		L_26 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_25, /*hidden argument*/NULL);
		__this->set_m_bakedToWorld_7(L_26);
		// for (int i = 0; i < poly.pathCount; ++i)
		V_2 = 0;
		goto IL_010f;
	}

IL_00b9:
	{
		// Vector2[] path = poly.GetPath(i);
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_27 = V_1;
		int32_t L_28 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29;
		L_29 = PolygonCollider2D_GetPath_m202E10B7D451EAB0FC3346ABE252D54D2D4171D0(L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		// List<Vector2> dst = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_30 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_30, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		V_4 = L_30;
		// for (int j = 0; j < path.Length; ++j)
		V_5 = 0;
		goto IL_00f7;
	}

IL_00cd:
	{
		// dst.Add(m_bakedToWorld.MultiplyPoint3x4(path[j]));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_31 = V_4;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_32 = __this->get_address_of_m_bakedToWorld_7();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_33 = V_3;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_32, L_37, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_38, /*hidden argument*/NULL);
		List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249(L_31, L_39, /*hidden argument*/List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_RuntimeMethod_var);
		// for (int j = 0; j < path.Length; ++j)
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00f7:
	{
		// for (int j = 0; j < path.Length; ++j)
		int32_t L_41 = V_5;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_42 = V_3;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		// m_OriginalPath.Add(dst);
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_43 = __this->get_m_OriginalPath_1();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_44 = V_4;
		List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB(L_43, L_44, /*hidden argument*/List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB_RuntimeMethod_var);
		// for (int i = 0; i < poly.pathCount; ++i)
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_010f:
	{
		// for (int i = 0; i < poly.pathCount; ++i)
		int32_t L_46 = V_2;
		PolygonCollider2D_t0DE3E0562D6B75598DFDB71D7605BD8A1761835D * L_47 = V_1;
		int32_t L_48;
		L_48 = PolygonCollider2D_get_pathCount_m65B4937F5A9D2F1A3A992FD95DE6BC9A3F4F6D38(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_00b9;
		}
	}
	{
		// }
		goto IL_01d5;
	}

IL_011d:
	{
		// else if (colliderType == typeof(CompositeCollider2D))
		Type_t * L_49 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_50 = { reinterpret_cast<intptr_t> (CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51;
		L_51 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_50, /*hidden argument*/NULL);
		bool L_52;
		L_52 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_49, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01d3;
		}
	}
	{
		// CompositeCollider2D poly = boundingShape2D as CompositeCollider2D;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_53 = ___boundingShape2D0;
		V_6 = ((CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 *)IsInstSealed((RuntimeObject*)L_53, CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35_il2cpp_TypeInfo_var));
		// m_OriginalPath = new List<List<Vector2>>();
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_54 = (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 *)il2cpp_codegen_object_new(List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894_il2cpp_TypeInfo_var);
		List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20(L_54, /*hidden argument*/List_1__ctor_m6CFA27404B97FD56C5AF1547B3B33584BA67AA20_RuntimeMethod_var);
		__this->set_m_OriginalPath_1(L_54);
		// m_bakedToWorld = boundingShape2D.transform.localToWorldMatrix;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_55 = ___boundingShape2D0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_55, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_57;
		L_57 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_56, /*hidden argument*/NULL);
		__this->set_m_bakedToWorld_7(L_57);
		// Vector2[] path = new Vector2[poly.pointCount];
		CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * L_58 = V_6;
		int32_t L_59;
		L_59 = CompositeCollider2D_get_pointCount_m9D81B4AE41532D1BB6DCDC72CD3E3830D2DE59EA(L_58, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_60 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_7 = L_60;
		// for (int i = 0; i < poly.pathCount; ++i)
		V_8 = 0;
		goto IL_01c6;
	}

IL_0169:
	{
		// int numPoints = poly.GetPath(i, path);
		CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * L_61 = V_6;
		int32_t L_62 = V_8;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_63 = V_7;
		int32_t L_64;
		L_64 = CompositeCollider2D_GetPath_mAEB2C2844D33F325E960F5D2C664D3F02E3E145A(L_61, L_62, L_63, /*hidden argument*/NULL);
		V_9 = L_64;
		// List<Vector2> dst = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_65 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_65, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		V_10 = L_65;
		// for (int j = 0; j < numPoints; ++j)
		V_11 = 0;
		goto IL_01ad;
	}

IL_0182:
	{
		// dst.Add(m_bakedToWorld.MultiplyPoint3x4(path[j]));
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_66 = V_10;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_67 = __this->get_address_of_m_bakedToWorld_7();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_68 = V_7;
		int32_t L_69 = V_11;
		int32_t L_70 = L_69;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_67, L_72, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_73, /*hidden argument*/NULL);
		List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249(L_66, L_74, /*hidden argument*/List_1_Add_m812D073096B787A464235E3D337FDC66DAD10249_RuntimeMethod_var);
		// for (int j = 0; j < numPoints; ++j)
		int32_t L_75 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01ad:
	{
		// for (int j = 0; j < numPoints; ++j)
		int32_t L_76 = V_11;
		int32_t L_77 = V_9;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0182;
		}
	}
	{
		// m_OriginalPath.Add(dst);
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_78 = __this->get_m_OriginalPath_1();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_79 = V_10;
		List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB(L_78, L_79, /*hidden argument*/List_1_Add_mFEA0B7307C7A3A8318CB054AA1815D55C7491AFB_RuntimeMethod_var);
		// for (int i = 0; i < poly.pathCount; ++i)
		int32_t L_80 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_01c6:
	{
		// for (int i = 0; i < poly.pathCount; ++i)
		int32_t L_81 = V_8;
		CompositeCollider2D_tFEE36FCBB44A7A893697E113323B78808D86AF35 * L_82 = V_6;
		int32_t L_83;
		L_83 = CompositeCollider2D_get_pathCount_mBE03B43FDE29D15B661002681B0F3F4EE6228460(L_82, /*hidden argument*/NULL);
		if ((((int32_t)L_81) < ((int32_t)L_83)))
		{
			goto IL_0169;
		}
	}
	{
		// }
		goto IL_01d5;
	}

IL_01d3:
	{
		// return false; // input collider is invalid
		return (bool)0;
	}

IL_01d5:
	{
		// m_confinerOven = new ConfinerOven(m_OriginalPath, aspectRatio, maxWindowSize);
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 ** L_84 = __this->get_address_of_m_OriginalPath_1();
		float L_85 = ___maxWindowSize1;
		ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * L_86 = (ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF *)il2cpp_codegen_object_new(ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF_il2cpp_TypeInfo_var);
		ConfinerOven__ctor_m48A6169D36FA4125D30C0D6120CAD016194F8909(L_86, (List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 **)L_84, (float*)(&___aspectRatio2), L_85, /*hidden argument*/NULL);
		__this->set_m_confinerOven_0(L_86);
		// m_aspectRatio = aspectRatio;
		float L_87 = ___aspectRatio2;
		__this->set_m_aspectRatio_4(L_87);
		// m_boundingShape2D = boundingShape2D;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_88 = ___boundingShape2D0;
		__this->set_m_boundingShape2D_8(L_88);
		// m_maxWindowSize = maxWindowSize;
		float L_89 = ___maxWindowSize1;
		__this->set_m_maxWindowSize_5(L_89);
		// CalculateDeltaTransformationMatrix();
		ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114((ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *)__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ShapeCache_ValidateCache_mA040BB9D38360821A0D577FAA9520E12917B126C_AdjustorThunk (RuntimeObject * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___boundingShape2D0, float ___maxWindowSize1, float ___aspectRatio2, bool* ___confinerStateChanged3, const RuntimeMethod* method)
{
	ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ShapeCache_ValidateCache_mA040BB9D38360821A0D577FAA9520E12917B126C(_thisAdjusted, ___boundingShape2D0, ___maxWindowSize1, ___aspectRatio2, ___confinerStateChanged3, method);
	return _returnValue;
}
// System.Boolean Cinemachine.CinemachineConfiner2D/ShapeCache::IsValid(UnityEngine.Collider2D&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShapeCache_IsValid_mD14BF34734A81849A719899A4F29ED241C21E25B (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** ___boundingShape2D0, float* ___aspectRatio1, float* ___maxOrthoSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return boundingShape2D != null && m_boundingShape2D != null &&
		//        m_boundingShape2D == boundingShape2D && // same boundingShape?
		//        m_OriginalPath != null && // first time?
		//        m_confinerOven != null && // cache not empty?
		//        Mathf.Abs(m_aspectRatio - aspectRatio) < UnityVectorExtensions.Epsilon && // aspect changed?
		//        Mathf.Abs(m_maxWindowSize - maxOrthoSize) < UnityVectorExtensions.Epsilon; // max ortho changed?
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** L_0 = ___boundingShape2D0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = *((Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 **)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = __this->get_m_boundingShape2D_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = __this->get_m_boundingShape2D_8();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** L_6 = ___boundingShape2D0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = *((Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 **)L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		List_1_t5128DCBC80975324FF27985AB2A9F3D29DACA894 * L_9 = __this->get_m_OriginalPath_1();
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * L_10 = __this->get_m_confinerOven_0();
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		float L_11 = __this->get_m_aspectRatio_4();
		float* L_12 = ___aspectRatio1;
		float L_13 = *((float*)L_12);
		float L_14;
		L_14 = fabsf(((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)));
		if ((!(((float)L_14) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0062;
		}
	}
	{
		float L_15 = __this->get_m_maxWindowSize_5();
		float* L_16 = ___maxOrthoSize2;
		float L_17 = *((float*)L_16);
		float L_18;
		L_18 = fabsf(((float)il2cpp_codegen_subtract((float)L_15, (float)L_17)));
		return (bool)((((float)L_18) < ((float)(9.99999975E-05f)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ShapeCache_IsValid_mD14BF34734A81849A719899A4F29ED241C21E25B_AdjustorThunk (RuntimeObject * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** ___boundingShape2D0, float* ___aspectRatio1, float* ___maxOrthoSize2, const RuntimeMethod* method)
{
	ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ShapeCache_IsValid_mD14BF34734A81849A719899A4F29ED241C21E25B(_thisAdjusted, ___boundingShape2D0, ___aspectRatio1, ___maxOrthoSize2, method);
	return _returnValue;
}
// System.Void Cinemachine.CinemachineConfiner2D/ShapeCache::CalculateDeltaTransformationMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114 (ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * __this, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var m = Matrix4x4.Translate(-m_boundingShape2D.offset) *
		//         m_boundingShape2D.transform.worldToLocalMatrix;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = __this->get_m_boundingShape2D_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Collider2D_get_offset_m63144560DFF782608BA6627DE192D6337821995C(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_3, /*hidden argument*/NULL);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = __this->get_m_boundingShape2D_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7;
		L_7 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_6, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// m_DeltaWorldToBaked = m_bakedToWorld * m;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9 = __this->get_m_bakedToWorld_7();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_DeltaWorldToBaked_2(L_11);
		// m_DeltaBakedToWorld = m_DeltaWorldToBaked.inverse;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_12 = __this->get_address_of_m_DeltaWorldToBaked_2();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13;
		L_13 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_12, /*hidden argument*/NULL);
		__this->set_m_DeltaBakedToWorld_3(L_13);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShapeCache_t67B4CDDE03281ED52C49FFC49F855CDA862F02C3 *>(__this + _offset);
	ShapeCache_CalculateDeltaTransformationMatrix_m11C29D7572FAF3F20A15F7144F6D46E8A909E114(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineConfiner2D/VcamExtraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState__ctor_m4230EE9C068362D2954AC73B33FF8B627D023268 (VcamExtraState_t39AE2700016879E31E7AA727FAEC7F2B86237051 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Cinemachine.CinemachineCore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m98EAFFDFF71A6A736468C8D60AC3ECE675B49340 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * L_0 = (U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 *)il2cpp_codegen_object_new(U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m15EED79FFF0FF14467B49DC3AC7D134CA38240DD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineCore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15EED79FFF0FF14467B49DC3AC7D134CA38240DD (U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cinemachine.CinemachineCore/<>c::<GetVirtualCamera>b__30_0(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineVirtualCameraBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetVirtualCameraU3Eb__30_0_mDC45F408EA0E79C405DD08F781D20C1CA3017B77 (U3CU3Ec_t975CB56EF2512732DD123C1828086EF5F06E7380 * __this, CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___x0, CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___y1, const RuntimeMethod* method)
{
	{
		// x.Priority == y.Priority ? y.m_ActivationId - x.m_ActivationId : y.Priority - x.Priority);
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_0 = ___x0;
		int32_t L_1;
		L_1 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_0, /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_2 = ___y1;
		int32_t L_3;
		L_3 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_4 = ___y1;
		int32_t L_5;
		L_5 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_4, /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_6 = ___x0;
		int32_t L_7;
		L_7 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_6, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_7));
	}

IL_001c:
	{
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_8 = ___y1;
		int32_t L_9 = L_8->get_m_ActivationId_10();
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_10 = ___x0;
		int32_t L_11 = L_10->get_m_ActivationId_10();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_11));
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
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 (AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___axisName0' to native representation
	char* ____axisName0_marshaled = NULL;
	____axisName0_marshaled = il2cpp_codegen_marshal_string(___axisName0);

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(____axisName0_marshaled);

	// Marshaling cleanup of parameter '___axisName0' native representation
	il2cpp_codegen_marshal_free(____axisName0_marshaled);
	____axisName0_marshaled = NULL;

	return returnValue;
}
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m55631A6E688731D441A5822CE96218E7E9CC5B01 (AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single Cinemachine.CinemachineCore/AxisInputDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisInputDelegate_Invoke_m860AF1CED1A9DF40081361395A2E99E5913DE2D4 (AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef float (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___axisName0, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___axisName0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< float >::Invoke(targetMethod, ___axisName0);
					else
						result = GenericVirtualFuncInvoker0< float >::Invoke(targetMethod, ___axisName0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___axisName0);
					else
						result = VirtualFuncInvoker0< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___axisName0);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___axisName0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef float (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___axisName0, targetMethod);
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___axisName0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineCore/AxisInputDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AxisInputDelegate_BeginInvoke_mE17152E703E8CC1FD23F1699D57494CD620D559D (AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * __this, String_t* ___axisName0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___axisName0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Single Cinemachine.CinemachineCore/AxisInputDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisInputDelegate_EndInvoke_m42BA5EAD29B364609461C59796CF1FE308942777 (AxisInputDelegate_tC74BFB577983EB520E974CB9EB9D0758BAD72677 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineCore/GetBlendOverrideDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetBlendOverrideDelegate__ctor_m0D9DFFA11AA07FC85C2903B99641E4CE9BF6DC9B (GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineCore/GetBlendOverrideDelegate::Invoke(Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,Cinemachine.CinemachineBlendDefinition,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  GetBlendOverrideDelegate_Invoke_mAE517451152A2ADCF950A31A7004F52FA64C8EE0 (GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * __this, RuntimeObject* ___fromVcam0, RuntimeObject* ___toVcam1, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___defaultBlend2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___owner3, const RuntimeMethod* method)
{
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3, targetMethod);
			}
			else
			{
				// closed
				typedef CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(targetMethod, ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3);
					else
						result = GenericVirtualFuncInvoker3< CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(targetMethod, ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3);
					else
						result = VirtualFuncInvoker3< CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3);
				}
			}
			else
			{
				typedef CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3, targetMethod);
			}
			else
			{
				typedef CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___fromVcam0, ___toVcam1, ___defaultBlend2, ___owner3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineCore/GetBlendOverrideDelegate::BeginInvoke(Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,Cinemachine.CinemachineBlendDefinition,UnityEngine.MonoBehaviour,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetBlendOverrideDelegate_BeginInvoke_m4CEF86F10D8C529DD09C94310D0E70668307B360 (GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * __this, RuntimeObject* ___fromVcam0, RuntimeObject* ___toVcam1, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___defaultBlend2, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___owner3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___fromVcam0;
	__d_args[1] = ___toVcam1;
	__d_args[2] = Box(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var, &___defaultBlend2);
	__d_args[3] = ___owner3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineCore/GetBlendOverrideDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  GetBlendOverrideDelegate_EndInvoke_m07B62A912EE6066CE03A1D3125A0BEB2ED1AC0E4 (GetBlendOverrideDelegate_t32AB037CCB52F195B40C363B70D34205538CE864 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE *)UnBox ((RuntimeObject*)__result);;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineCore/UpdateStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus__ctor_mAEEB635F3C3AE9D84B9072DA75E14B098312CACD (UpdateStatus_tCCA3856C3DE4FF511D1DB8A5B1364666E608B1C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 (OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate__ctor_m368CF0C4912A67D1DBDA8E1F2C2827D0163482FA (OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_Invoke_mA31514C83F7C6B0DC124FB9C3C9AF1AE46EA3BE2 (OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGUIDelegate_BeginInvoke_mB9DDADF15A39323C1F037853E3A73B2AB7697E33 (OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_EndInvoke_mA2E9D5AB93F6750402449BC316CB9F00CD0013F9 (OnGUIDelegate_t3A1214F1C0CB5EE0BA0A5D45D4A9F946484E7530 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void Cinemachine.CinemachineFollowZoom/VcamExtraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamExtraState__ctor_m765B777C8201B5A5D21FB547AA0215538E7CD976 (VcamExtraState_t6B11C5350C2EC7FFC9AC49DE846AAF5F894F53D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineFreeLook/CreateRigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateRigDelegate__ctor_m4DD0C7DBDBDA591D52EA8F0328BAB450BFCF51C2 (CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Cinemachine.CinemachineVirtualCamera Cinemachine.CinemachineFreeLook/CreateRigDelegate::Invoke(Cinemachine.CinemachineFreeLook,System.String,Cinemachine.CinemachineVirtualCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * CreateRigDelegate_Invoke_mAD1425DD908EFF6A0D37E425A6A2503EB0C0D6F9 (CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * __this, CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * ___vcam0, String_t* ___name1, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___copyFrom2, const RuntimeMethod* method)
{
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*FunctionPointerType) (CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				// closed
				typedef CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*FunctionPointerType) (void*, CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtualFuncInvoker2< CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtualFuncInvoker2< CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				typedef CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*FunctionPointerType) (CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*FunctionPointerType) (CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				typedef CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*FunctionPointerType) (void*, CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F *, String_t*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineFreeLook/CreateRigDelegate::BeginInvoke(Cinemachine.CinemachineFreeLook,System.String,Cinemachine.CinemachineVirtualCamera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateRigDelegate_BeginInvoke_m3026592E9652091C21A95142D9C9840AAE61EBAD (CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * __this, CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * ___vcam0, String_t* ___name1, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___copyFrom2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___vcam0;
	__d_args[1] = ___name1;
	__d_args[2] = ___copyFrom2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// Cinemachine.CinemachineVirtualCamera Cinemachine.CinemachineFreeLook/CreateRigDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * CreateRigDelegate_EndInvoke_mDDDCBA482E40537F256E8B0F686EA019C7FC42F7 (CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineFreeLook/DestroyRigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRigDelegate__ctor_m6B51E8D805DD7A663BE724FC16D490F5D0D05D69 (DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.CinemachineFreeLook/DestroyRigDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRigDelegate_Invoke_mE9C9FD19BE4FD0204687FA43F0C771C3C77E11C6 (DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rig0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rig0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rig0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___rig0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___rig0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___rig0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___rig0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rig0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rig0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rig0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cinemachine.CinemachineFreeLook/DestroyRigDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyRigDelegate_BeginInvoke_mC12BBE33DEEA306A7AE1FFD1E961069DCC252BE5 (DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rig0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___rig0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Cinemachine.CinemachineFreeLook/DestroyRigDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyRigDelegate_EndInvoke_mE037D325234815525A86DF33050DE927EFCD8F22 (DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineFreeLook/Orbit::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbit__ctor_mBDC642CE7F3E574E43895420FD0343C3199FC85A (Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 * __this, float ___h0, float ___r1, const RuntimeMethod* method)
{
	{
		// public Orbit(float h, float r) { m_Height = h; m_Radius = r; }
		float L_0 = ___h0;
		__this->set_m_Height_0(L_0);
		// public Orbit(float h, float r) { m_Height = h; m_Radius = r; }
		float L_1 = ___r1;
		__this->set_m_Radius_1(L_1);
		// public Orbit(float h, float r) { m_Height = h; m_Radius = r; }
		return;
	}
}
IL2CPP_EXTERN_C  void Orbit__ctor_mBDC642CE7F3E574E43895420FD0343C3199FC85A_AdjustorThunk (RuntimeObject * __this, float ___h0, float ___r1, const RuntimeMethod* method)
{
	Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Orbit_tA547D596379FBC5FD86CCCFEC4DF3BD8BA2C3AF5 *>(__this + _offset);
	Orbit__ctor_mBDC642CE7F3E574E43895420FD0343C3199FC85A(_thisAdjusted, ___h0, ___r1, method);
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
// System.Void Cinemachine.CinemachineImpulseDefinition/SignalSource::.ctor(Cinemachine.CinemachineImpulseDefinition,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSource__ctor_mCB153F491DABCD71273BD63B24BF32099AEBEF80 (SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA * __this, CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * ___def0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity1, const RuntimeMethod* method)
{
	{
		// public SignalSource(CinemachineImpulseDefinition def, Vector3 velocity)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Def = def;
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_0 = ___def0;
		__this->set_m_Def_0(L_0);
		// m_Velocity = velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___velocity1;
		__this->set_m_Velocity_1(L_1);
		// if (m_Def.m_Randomize && m_Def.m_RawSignal.SignalDuration <= 0)
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_2 = __this->get_m_Def_0();
		bool L_3 = L_2->get_m_Randomize_5();
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_4 = __this->get_m_Def_0();
		SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * L_5 = L_4->get_m_RawSignal_1();
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single Cinemachine.SignalSourceAsset::get_SignalDuration() */, L_5);
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// m_StartTimeOffset = UnityEngine.Random.Range(-1000f, 1000f);
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1000.0f), (1000.0f), /*hidden argument*/NULL);
		__this->set_m_StartTimeOffset_2(L_7);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseDefinition/SignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SignalSource_get_SignalDuration_m361ECAF68816FA8EC16C6EF9644886A11CFAA837 (SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA * __this, const RuntimeMethod* method)
{
	{
		// public float SignalDuration { get { return m_Def.m_RawSignal.SignalDuration; } }
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_0 = __this->get_m_Def_0();
		SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * L_1 = L_0->get_m_RawSignal_1();
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single Cinemachine.SignalSourceAsset::get_SignalDuration() */, L_1);
		return L_2;
	}
}
// System.Void Cinemachine.CinemachineImpulseDefinition/SignalSource::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSource_GetSignal_m9A46E678A84820D6D5FC33F008DEC2DFCFB94DA1 (SignalSource_tDE7CF3C3E08BA746F762E93807E2B2A192B013DA * __this, float ___timeSinceSignalStart0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___pos1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rot2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float time = m_StartTimeOffset + timeSinceSignalStart * m_Def.m_FrequencyGain;
		float L_0 = __this->get_m_StartTimeOffset_2();
		float L_1 = ___timeSinceSignalStart0;
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_2 = __this->get_m_Def_0();
		float L_3 = L_2->get_m_FrequencyGain_3();
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3))));
		// float signalDuration = SignalDuration;
		float L_4;
		L_4 = SignalSource_get_SignalDuration_m361ECAF68816FA8EC16C6EF9644886A11CFAA837(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (signalDuration > 0)
		float L_5 = V_1;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// if (m_Def.m_RepeatMode == RepeatMode.Loop)
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_6 = __this->get_m_Def_0();
		int32_t L_7 = L_6->get_m_RepeatMode_4();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		// time %= signalDuration;
		float L_8 = V_0;
		float L_9 = V_1;
		V_0 = (fmodf(L_8, L_9));
		goto IL_0064;
	}

IL_0038:
	{
		// else if (m_Def.m_TimeEnvelope.Duration > UnityVectorExtensions.Epsilon)
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_10 = __this->get_m_Def_0();
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_11 = L_10->get_address_of_m_TimeEnvelope_6();
		float L_12;
		L_12 = EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0064;
		}
	}
	{
		// time *= m_Def.m_TimeEnvelope.Duration / signalDuration; // stretch
		float L_13 = V_0;
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_14 = __this->get_m_Def_0();
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_15 = L_14->get_address_of_m_TimeEnvelope_6();
		float L_16;
		L_16 = EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_15, /*hidden argument*/NULL);
		float L_17 = V_1;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_16/(float)L_17))));
	}

IL_0064:
	{
		// m_Def.m_RawSignal.GetSignal(time, out pos, out rot);
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_18 = __this->get_m_Def_0();
		SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * L_19 = L_18->get_m_RawSignal_1();
		float L_20 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = ___pos1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_22 = ___rot2;
		VirtualActionInvoker3< float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(7 /* System.Void Cinemachine.SignalSourceAsset::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&) */, L_19, L_20, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_21, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_22);
		// float gain = m_Velocity.magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_23 = __this->get_address_of_m_Velocity_1();
		float L_24;
		L_24 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// Vector3 dir = m_Velocity.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_m_Velocity_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_25, /*hidden argument*/NULL);
		// gain *= m_Def.m_AmplitudeGain;
		float L_27 = V_2;
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_28 = __this->get_m_Def_0();
		float L_29 = L_28->get_m_AmplitudeGain_2();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_27, (float)L_29));
		// pos *= gain;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_31);
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_32, L_33, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_30 = L_34;
		// pos = Quaternion.FromToRotation(Vector3.down, m_Velocity) * pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_m_Velocity_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = ___pos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_38, L_40, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_35 = L_41;
		// rot = Quaternion.SlerpUnclamped(Quaternion.identity, rot, gain);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_42 = ___rot2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
		L_43 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_44 = ___rot2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_44);
		float L_46 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_43, L_45, L_46, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_42 = L_47;
		// }
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




// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_pinvoke(const EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7& unmarshaled, EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_m_AttackShape_0() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(*unmarshaled.get_m_AttackShape_0(), marshaled.___m_AttackShape_0);
	}
	if (unmarshaled.get_m_DecayShape_1() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(*unmarshaled.get_m_DecayShape_1(), marshaled.___m_DecayShape_1);
	}
	marshaled.___m_AttackTime_2 = unmarshaled.get_m_AttackTime_2();
	marshaled.___m_SustainTime_3 = unmarshaled.get_m_SustainTime_3();
	marshaled.___m_DecayTime_4 = unmarshaled.get_m_DecayTime_4();
	marshaled.___m_ScaleWithImpact_5 = static_cast<int32_t>(unmarshaled.get_m_ScaleWithImpact_5());
	marshaled.___m_HoldForever_6 = static_cast<int32_t>(unmarshaled.get_m_HoldForever_6());
}
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_pinvoke_back(const EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_pinvoke& marshaled, EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_m_AttackShape_0((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03*)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var));
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(marshaled.___m_AttackShape_0, *unmarshaled.get_m_AttackShape_0());
	unmarshaled.set_m_DecayShape_1((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03*)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var));
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(marshaled.___m_DecayShape_1, *unmarshaled.get_m_DecayShape_1());
	float unmarshaled_m_AttackTime_temp_2 = 0.0f;
	unmarshaled_m_AttackTime_temp_2 = marshaled.___m_AttackTime_2;
	unmarshaled.set_m_AttackTime_2(unmarshaled_m_AttackTime_temp_2);
	float unmarshaled_m_SustainTime_temp_3 = 0.0f;
	unmarshaled_m_SustainTime_temp_3 = marshaled.___m_SustainTime_3;
	unmarshaled.set_m_SustainTime_3(unmarshaled_m_SustainTime_temp_3);
	float unmarshaled_m_DecayTime_temp_4 = 0.0f;
	unmarshaled_m_DecayTime_temp_4 = marshaled.___m_DecayTime_4;
	unmarshaled.set_m_DecayTime_4(unmarshaled_m_DecayTime_temp_4);
	bool unmarshaled_m_ScaleWithImpact_temp_5 = false;
	unmarshaled_m_ScaleWithImpact_temp_5 = static_cast<bool>(marshaled.___m_ScaleWithImpact_5);
	unmarshaled.set_m_ScaleWithImpact_5(unmarshaled_m_ScaleWithImpact_temp_5);
	bool unmarshaled_m_HoldForever_temp_6 = false;
	unmarshaled_m_HoldForever_temp_6 = static_cast<bool>(marshaled.___m_HoldForever_6);
	unmarshaled.set_m_HoldForever_6(unmarshaled_m_HoldForever_temp_6);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_pinvoke_cleanup(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_pinvoke& marshaled)
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(marshaled.___m_AttackShape_0);
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(marshaled.___m_DecayShape_1);
}




// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_com(const EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7& unmarshaled, EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_com& marshaled)
{
	if (unmarshaled.get_m_AttackShape_0() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com(*unmarshaled.get_m_AttackShape_0(), *marshaled.___m_AttackShape_0);
	}
	if (unmarshaled.get_m_DecayShape_1() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com(*unmarshaled.get_m_DecayShape_1(), *marshaled.___m_DecayShape_1);
	}
	marshaled.___m_AttackTime_2 = unmarshaled.get_m_AttackTime_2();
	marshaled.___m_SustainTime_3 = unmarshaled.get_m_SustainTime_3();
	marshaled.___m_DecayTime_4 = unmarshaled.get_m_DecayTime_4();
	marshaled.___m_ScaleWithImpact_5 = static_cast<int32_t>(unmarshaled.get_m_ScaleWithImpact_5());
	marshaled.___m_HoldForever_6 = static_cast<int32_t>(unmarshaled.get_m_HoldForever_6());
}
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_com_back(const EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_com& marshaled, EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7& unmarshaled)
{
	if (unmarshaled.get_m_AttackShape_0() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_back(*marshaled.___m_AttackShape_0, *unmarshaled.get_m_AttackShape_0());
	}
	if (unmarshaled.get_m_DecayShape_1() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_back(*marshaled.___m_DecayShape_1, *unmarshaled.get_m_DecayShape_1());
	}
	float unmarshaled_m_AttackTime_temp_2 = 0.0f;
	unmarshaled_m_AttackTime_temp_2 = marshaled.___m_AttackTime_2;
	unmarshaled.set_m_AttackTime_2(unmarshaled_m_AttackTime_temp_2);
	float unmarshaled_m_SustainTime_temp_3 = 0.0f;
	unmarshaled_m_SustainTime_temp_3 = marshaled.___m_SustainTime_3;
	unmarshaled.set_m_SustainTime_3(unmarshaled_m_SustainTime_temp_3);
	float unmarshaled_m_DecayTime_temp_4 = 0.0f;
	unmarshaled_m_DecayTime_temp_4 = marshaled.___m_DecayTime_4;
	unmarshaled.set_m_DecayTime_4(unmarshaled_m_DecayTime_temp_4);
	bool unmarshaled_m_ScaleWithImpact_temp_5 = false;
	unmarshaled_m_ScaleWithImpact_temp_5 = static_cast<bool>(marshaled.___m_ScaleWithImpact_5);
	unmarshaled.set_m_ScaleWithImpact_5(unmarshaled_m_ScaleWithImpact_temp_5);
	bool unmarshaled_m_HoldForever_temp_6 = false;
	unmarshaled_m_HoldForever_temp_6 = static_cast<bool>(marshaled.___m_HoldForever_6);
	unmarshaled.set_m_HoldForever_6(unmarshaled_m_HoldForever_temp_6);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshal_com_cleanup(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_com& marshaled)
{
	if (marshaled.___m_AttackShape_0 != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_cleanup(*marshaled.___m_AttackShape_0);
	}
	if (marshaled.___m_DecayShape_1 != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_cleanup(*marshaled.___m_DecayShape_1);
	}
}
// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  EnvelopeDefinition_Default_m6048BC0ADAE235D4D0F47D57AC6F07F8031E8502 (const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new EnvelopeDefinition { m_DecayTime = 0.7f, m_SustainTime = 0.2f, m_ScaleWithImpact = true };
		il2cpp_codegen_initobj((&V_0), sizeof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 ));
		(&V_0)->set_m_DecayTime_4((0.699999988f));
		(&V_0)->set_m_SustainTime_3((0.200000003f));
		(&V_0)->set_m_ScaleWithImpact_5((bool)1);
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  L_0 = V_0;
		return L_0;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method)
{
	{
		// if (m_HoldForever)
		bool L_0 = __this->get_m_HoldForever_6();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_000e:
	{
		// return m_AttackTime + m_SustainTime + m_DecayTime;
		float L_1 = __this->get_m_AttackTime_2();
		float L_2 = __this->get_m_SustainTime_3();
		float L_3 = __this->get_m_DecayTime_4();
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_1, (float)L_2)), (float)L_3));
	}
}
IL2CPP_EXTERN_C  float EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *>(__this + _offset);
	float _returnValue;
	_returnValue = EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::GetValueAt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_GetValueAt_mA27AFC5D351DA50CA935ACCAB79D91F1E924C8CC (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, float ___offset0, const RuntimeMethod* method)
{
	{
		// if (offset >= 0)
		float L_0 = ___offset0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// if (offset < m_AttackTime && m_AttackTime > Epsilon)
		float L_1 = ___offset0;
		float L_2 = __this->get_m_AttackTime_2();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = __this->get_m_AttackTime_2();
		if ((!(((float)L_3) > ((float)(9.99999975E-05f)))))
		{
			goto IL_005d;
		}
	}
	{
		// if (m_AttackShape == null || m_AttackShape.length < 2)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_m_AttackShape_0();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_m_AttackShape_0();
		int32_t L_6;
		L_6 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)2)))
		{
			goto IL_0049;
		}
	}

IL_0037:
	{
		// return Damper.Damp(1, m_AttackTime, offset);
		float L_7 = __this->get_m_AttackTime_2();
		float L_8 = ___offset0;
		float L_9;
		L_9 = Damper_Damp_mA12020431103076AB69C0FC03C4C07B388AD9E27((1.0f), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0049:
	{
		// return m_AttackShape.Evaluate(offset / m_AttackTime);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_m_AttackShape_0();
		float L_11 = ___offset0;
		float L_12 = __this->get_m_AttackTime_2();
		float L_13;
		L_13 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_10, ((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		return L_13;
	}

IL_005d:
	{
		// offset -= m_AttackTime;
		float L_14 = ___offset0;
		float L_15 = __this->get_m_AttackTime_2();
		___offset0 = ((float)il2cpp_codegen_subtract((float)L_14, (float)L_15));
		// if (m_HoldForever || offset < m_SustainTime)
		bool L_16 = __this->get_m_HoldForever_6();
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		float L_17 = ___offset0;
		float L_18 = __this->get_m_SustainTime_3();
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_007e;
		}
	}

IL_0078:
	{
		// return 1;
		return (1.0f);
	}

IL_007e:
	{
		// offset -= m_SustainTime;
		float L_19 = ___offset0;
		float L_20 = __this->get_m_SustainTime_3();
		___offset0 = ((float)il2cpp_codegen_subtract((float)L_19, (float)L_20));
		// if (offset < m_DecayTime && m_DecayTime > Epsilon)
		float L_21 = ___offset0;
		float L_22 = __this->get_m_DecayTime_4();
		if ((!(((float)L_21) < ((float)L_22))))
		{
			goto IL_00e0;
		}
	}
	{
		float L_23 = __this->get_m_DecayTime_4();
		if ((!(((float)L_23) > ((float)(9.99999975E-05f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// if (m_DecayShape == null || m_DecayShape.length < 2)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = __this->get_m_DecayShape_1();
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_25 = __this->get_m_DecayShape_1();
		int32_t L_26;
		L_26 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) >= ((int32_t)2)))
		{
			goto IL_00cc;
		}
	}

IL_00b4:
	{
		// return 1 - Damper.Damp(1, m_DecayTime, offset);
		float L_27 = __this->get_m_DecayTime_4();
		float L_28 = ___offset0;
		float L_29;
		L_29 = Damper_Damp_mA12020431103076AB69C0FC03C4C07B388AD9E27((1.0f), L_27, L_28, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_29));
	}

IL_00cc:
	{
		// return m_DecayShape.Evaluate(offset / m_DecayTime);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_30 = __this->get_m_DecayShape_1();
		float L_31 = ___offset0;
		float L_32 = __this->get_m_DecayTime_4();
		float L_33;
		L_33 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_30, ((float)((float)L_31/(float)L_32)), /*hidden argument*/NULL);
		return L_33;
	}

IL_00e0:
	{
		// return 0;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float EnvelopeDefinition_GetValueAt_mA27AFC5D351DA50CA935ACCAB79D91F1E924C8CC_AdjustorThunk (RuntimeObject * __this, float ___offset0, const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *>(__this + _offset);
	float _returnValue;
	_returnValue = EnvelopeDefinition_GetValueAt_mA27AFC5D351DA50CA935ACCAB79D91F1E924C8CC(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::ChangeStopTime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_ChangeStopTime_mA4D7614B6F56A8E279596B52252816EB59843F23 (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method)
{
	{
		// if (offset < 0)
		float L_0 = ___offset0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// offset = 0;
		___offset0 = (0.0f);
	}

IL_000f:
	{
		// if (offset < m_AttackTime)
		float L_1 = ___offset0;
		float L_2 = __this->get_m_AttackTime_2();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// m_AttackTime = 0; // How to prevent pop? GML
		__this->set_m_AttackTime_2((0.0f));
	}

IL_0023:
	{
		// m_SustainTime = offset - m_AttackTime;
		float L_3 = ___offset0;
		float L_4 = __this->get_m_AttackTime_2();
		__this->set_m_SustainTime_3(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		// if (forceNoDecay)
		bool L_5 = ___forceNoDecay1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// m_DecayTime = 0;
		__this->set_m_DecayTime_4((0.0f));
	}

IL_003f:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_ChangeStopTime_mA4D7614B6F56A8E279596B52252816EB59843F23_AdjustorThunk (RuntimeObject * __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *>(__this + _offset);
	EnvelopeDefinition_ChangeStopTime_mA4D7614B6F56A8E279596B52252816EB59843F23(_thisAdjusted, ___offset0, ___forceNoDecay1, method);
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Clear_m2B817953AFB7CDAA6B62AEC4A1E6A588484B554B (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method)
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// m_AttackShape = m_DecayShape = null;
		V_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL;
		__this->set_m_DecayShape_1((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = V_0;
		__this->set_m_AttackShape_0(L_0);
		// m_AttackTime = m_SustainTime = m_DecayTime = 0;
		float L_1 = (0.0f);
		V_1 = L_1;
		__this->set_m_DecayTime_4(L_1);
		float L_2 = V_1;
		float L_3 = L_2;
		V_1 = L_3;
		__this->set_m_SustainTime_3(L_3);
		float L_4 = V_1;
		__this->set_m_AttackTime_2(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_Clear_m2B817953AFB7CDAA6B62AEC4A1E6A588484B554B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *>(__this + _offset);
	EnvelopeDefinition_Clear_m2B817953AFB7CDAA6B62AEC4A1E6A588484B554B(_thisAdjusted, method);
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Validate_mA0464BC35544052393B17674F751FAA755051B14 (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method)
{
	{
		// m_AttackTime = Mathf.Max(0, m_AttackTime);
		float L_0 = __this->get_m_AttackTime_2();
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_0, /*hidden argument*/NULL);
		__this->set_m_AttackTime_2(L_1);
		// m_DecayTime = Mathf.Max(0, m_DecayTime);
		float L_2 = __this->get_m_DecayTime_4();
		float L_3;
		L_3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_2, /*hidden argument*/NULL);
		__this->set_m_DecayTime_4(L_3);
		// m_SustainTime = Mathf.Max(0, m_SustainTime);
		float L_4 = __this->get_m_SustainTime_3();
		float L_5;
		L_5 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), L_4, /*hidden argument*/NULL);
		__this->set_m_SustainTime_3(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_Validate_mA0464BC35544052393B17674F751FAA755051B14_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *>(__this + _offset);
	EnvelopeDefinition_Validate_mA0464BC35544052393B17674F751FAA755051B14(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::get_Expired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_get_Expired_m06944921FE1EEA9118BFAEE7F52E73280418DCA7 (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var d = m_Envelope.Duration;
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_0 = __this->get_address_of_m_Envelope_1();
		float L_1;
		L_1 = EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var maxDistance = m_Radius + m_DissipationDistance;
		float L_2 = __this->get_m_Radius_4();
		float L_3 = __this->get_m_DissipationDistance_8();
		V_1 = ((float)il2cpp_codegen_add((float)L_2, (float)L_3));
		// float time = Instance.CurrentTime - maxDistance / Mathf.Max(1, m_PropagationSpeed);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_4;
		L_4 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		float L_5;
		L_5 = CinemachineImpulseManager_get_CurrentTime_mE6D6E38260F7F6CA352A44825C905F3CABC331ED(L_4, /*hidden argument*/NULL);
		float L_6 = V_1;
		float L_7 = __this->get_m_PropagationSpeed_9();
		float L_8;
		L_8 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((1.0f), L_7, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_5, (float)((float)((float)L_6/(float)L_8))));
		// return d > 0 && m_StartTime + d <= time;
		float L_9 = V_0;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_10 = __this->get_m_StartTime_0();
		float L_11 = V_0;
		float L_12 = V_2;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add((float)L_10, (float)L_11))) <= ((float)L_12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return (bool)0;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::Cancel(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent_Cancel_mA2831A11F90680EE32F4685E6311140D627C877B (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, float ___time0, bool ___forceNoDecay1, const RuntimeMethod* method)
{
	{
		// m_Envelope.m_HoldForever = false;
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_0 = __this->get_address_of_m_Envelope_1();
		L_0->set_m_HoldForever_6((bool)0);
		// m_Envelope.ChangeStopTime(time - m_StartTime, forceNoDecay);
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_1 = __this->get_address_of_m_Envelope_1();
		float L_2 = ___time0;
		float L_3 = __this->get_m_StartTime_0();
		bool L_4 = ___forceNoDecay1;
		EnvelopeDefinition_ChangeStopTime_mA4D7614B6F56A8E279596B52252816EB59843F23((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_1, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::DistanceDecay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ImpulseEvent_DistanceDecay_mF8C3C77FF46D6C2B23BE694CCA9714F76ED60036 (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, float ___distance0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float radius = Mathf.Max(m_Radius, 0);
		float L_0 = __this->get_m_Radius_4();
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (distance < radius)
		float L_2 = ___distance0;
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_001b:
	{
		// distance -= radius;
		float L_4 = ___distance0;
		float L_5 = V_0;
		___distance0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		// if (distance >= m_DissipationDistance)
		float L_6 = ___distance0;
		float L_7 = __this->get_m_DissipationDistance_8();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_002f;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_002f:
	{
		// switch (m_DissipationMode)
		int32_t L_8 = __this->get_m_DissipationMode_7();
		V_1 = L_8;
		int32_t L_9 = V_1;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}

IL_0048:
	{
		// return Mathf.Lerp(1, 0, distance / m_DissipationDistance);
		float L_10 = ___distance0;
		float L_11 = __this->get_m_DissipationDistance_8();
		float L_12;
		L_12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((1.0f), (0.0f), ((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		// return 0.5f * (1 + Mathf.Cos(Mathf.PI * (distance / m_DissipationDistance)));
		float L_13 = ___distance0;
		float L_14 = __this->get_m_DissipationDistance_8();
		float L_15;
		L_15 = cosf(((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)((float)((float)L_13/(float)L_14)))));
		return ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_15))));
	}

IL_0080:
	{
		// return 1 - Damper.Damp(1, m_DissipationDistance, distance);
		float L_16 = __this->get_m_DissipationDistance_8();
		float L_17 = ___distance0;
		float L_18;
		L_18 = Damper_Damp_mA12020431103076AB69C0FC03C4C07B388AD9E27((1.0f), L_16, L_17, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_18));
	}
}
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::GetDecayedSignal(UnityEngine.Vector3,System.Boolean,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_GetDecayedSignal_m973C1F0E6D32DC4DD14ECDF280FE58D14F6943EC (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___listenerPosition0, bool ___use2D1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___pos2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rot3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignalSource6D_t26BFD432B5044E626555FD66AE4B954746624159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (m_SignalSource != null)
		RuntimeObject* L_0 = __this->get_m_SignalSource_2();
		if (!L_0)
		{
			goto IL_0129;
		}
	}
	{
		// float distance = use2D ? Vector2.Distance(listenerPosition, m_Position)
		//     : Vector3.Distance(listenerPosition, m_Position);
		bool L_1 = ___use2D1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___listenerPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_Position_3();
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_3, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_0032;
	}

IL_001c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___listenerPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_m_Position_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_6, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_0032:
	{
		V_0 = G_B4_0;
		// float time = Instance.CurrentTime - m_StartTime
		//     - distance / Mathf.Max(1, m_PropagationSpeed);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_10;
		L_10 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		float L_11;
		L_11 = CinemachineImpulseManager_get_CurrentTime_mE6D6E38260F7F6CA352A44825C905F3CABC331ED(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_m_StartTime_0();
		float L_13 = V_0;
		float L_14 = __this->get_m_PropagationSpeed_9();
		float L_15;
		L_15 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((1.0f), L_14, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)((float)((float)L_13/(float)L_15))));
		// float scale = m_Envelope.GetValueAt(time) * DistanceDecay(distance);
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_16 = __this->get_address_of_m_Envelope_1();
		float L_17 = V_1;
		float L_18;
		L_18 = EnvelopeDefinition_GetValueAt_mA27AFC5D351DA50CA935ACCAB79D91F1E924C8CC((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_0;
		float L_20;
		L_20 = ImpulseEvent_DistanceDecay_mF8C3C77FF46D6C2B23BE694CCA9714F76ED60036(__this, L_19, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_18, (float)L_20));
		// if (scale != 0)
		float L_21 = V_2;
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_0129;
		}
	}
	{
		// m_SignalSource.GetSignal(time, out pos, out rot);
		RuntimeObject* L_22 = __this->get_m_SignalSource_2();
		float L_23 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = ___pos2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_25 = ___rot3;
		InterfaceActionInvoker3< float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * >::Invoke(1 /* System.Void Cinemachine.ISignalSource6D::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&) */, ISignalSource6D_t26BFD432B5044E626555FD66AE4B954746624159_il2cpp_TypeInfo_var, L_22, L_23, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_24, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_25);
		// pos *= scale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = ___pos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = ___pos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_27);
		float L_29 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, L_29, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_26 = L_30;
		// rot = Quaternion.SlerpUnclamped(Quaternion.identity, rot, scale);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_31 = ___rot3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_33 = ___rot3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_33);
		float L_35 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_32, L_34, L_35, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_31 = L_36;
		// if (m_DirectionMode == DirectionMode.RotateTowardSource && distance > Epsilon)
		int32_t L_37 = __this->get_m_DirectionMode_5();
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		float L_38 = V_0;
		if ((!(((float)L_38) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0127;
		}
	}
	{
		// Quaternion q = Quaternion.FromToRotation(Vector3.up, listenerPosition - m_Position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = ___listenerPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_m_Position_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_40, L_41, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
		L_43 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_39, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		// if (m_Radius > Epsilon)
		float L_44 = __this->get_m_Radius_4();
		if ((!(((float)L_44) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0115;
		}
	}
	{
		// float t = Mathf.Clamp01(distance / m_Radius);
		float L_45 = V_0;
		float L_46 = __this->get_m_Radius_4();
		float L_47;
		L_47 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_45/(float)L_46)), /*hidden argument*/NULL);
		V_4 = L_47;
		// q = Quaternion.Slerp(
		//     q, Quaternion.identity, Mathf.Cos(Mathf.PI * t / 2));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_50 = V_4;
		float L_51;
		L_51 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)L_50))/(float)(2.0f))));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52;
		L_52 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_48, L_49, L_51, /*hidden argument*/NULL);
		V_3 = L_52;
	}

IL_0115:
	{
		// pos = q * pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = ___pos2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_55 = ___pos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_55);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_54, L_56, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_53 = L_57;
	}

IL_0127:
	{
		// return true;
		return (bool)1;
	}

IL_0129:
	{
		// pos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = ___pos2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_58 = L_59;
		// rot = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_60 = ___rot3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61;
		L_61 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_60 = L_61;
		// return false;
		return (bool)0;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent_Clear_m3FBD19A05EAC470ACE87FAC6CF8FCBBB01E278A2 (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, const RuntimeMethod* method)
{
	{
		// m_Envelope.Clear();
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_0 = __this->get_address_of_m_Envelope_1();
		EnvelopeDefinition_Clear_m2B817953AFB7CDAA6B62AEC4A1E6A588484B554B((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_0, /*hidden argument*/NULL);
		// m_StartTime = 0;
		__this->set_m_StartTime_0((0.0f));
		// m_SignalSource = null;
		__this->set_m_SignalSource_2((RuntimeObject*)NULL);
		// m_Position = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_Position_3(L_1);
		// m_Channel = 0;
		__this->set_m_Channel_6(0);
		// m_Radius = 0;
		__this->set_m_Radius_4((0.0f));
		// m_DissipationDistance = 100;
		__this->set_m_DissipationDistance_8((100.0f));
		// m_DissipationMode = DissipationMode.ExponentialDecay;
		__this->set_m_DissipationMode_7(2);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent__ctor_mBDBA49A0F06CCB22CAB3ADCFB3B62BB1EF812E53 (ImpulseEvent_tA4C266AD475661A281A94672236D06B092C069A4 * __this, const RuntimeMethod* method)
{
	{
		// internal ImpulseEvent() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// internal ImpulseEvent() {}
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
// System.Void CinemachineMixer/MasterDirectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterDirectorDelegate__ctor_mFC5DB393BD8432B57F3EA9E183CD4D224AD4E5B3 (MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer/MasterDirectorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * MasterDirectorDelegate_Invoke_mE703899DFD92246C6411D29992C32024398EB999 (MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8 * __this, const RuntimeMethod* method)
{
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * (*FunctionPointerType) (void*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult CinemachineMixer/MasterDirectorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MasterDirectorDelegate_BeginInvoke_m67EDBDBF4F3B3BDA4AF8FDF03D0C43F6DB657E9E (MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer/MasterDirectorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * MasterDirectorDelegate_EndInvoke_m0DEA9513CDDF240BD9616179C047000F1C5552C3 (MasterDirectorDelegate_tCE752BE5E9EB76BC476A6B3B12FFB06C34BBC3B8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineOrbitalTransposer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m040BE18F4CF76FD237A199F900F8B2D09794FBBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * L_0 = (U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 *)il2cpp_codegen_object_new(U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2CC55D7CF3C4815383423BEA372FB9753A747D29(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineOrbitalTransposer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2CC55D7CF3C4815383423BEA372FB9753A747D29 (U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Cinemachine.CinemachineOrbitalTransposer/<>c::<.ctor>b__34_0(Cinemachine.CinemachineOrbitalTransposer,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_ctorU3Eb__34_0_mEB2AEA2C6607681346D746C7815B32FFE0789E36 (U3CU3Ec_tBAC7F7625CF885D559ED5EC829B2B35CC0366742 * __this, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * ___orbital0, float ___deltaTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return orbital.UpdateHeading(
		//     deltaTime, up, ref orbital.m_XAxis,
		//     ref orbital.m_RecenterToTargetHeading,
		//     CinemachineCore.Instance.IsLive(orbital.VirtualCamera));
		CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * L_0 = ___orbital0;
		float L_1 = ___deltaTime1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___up2;
		CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * L_3 = ___orbital0;
		AxisState_t376D19829A676B98933979F42845F6476071DDE8 * L_4 = L_3->get_address_of_m_XAxis_30();
		CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * L_5 = ___orbital0;
		Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * L_6 = L_5->get_address_of_m_RecenterToTargetHeading_29();
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534_il2cpp_TypeInfo_var);
		CinemachineCore_tCA2075A0438C6810B7F437CF91AEBB9FE989F534 * L_7;
		L_7 = CinemachineCore_get_Instance_mCD8E65EBCBB58BEDC6FD0C503AB9E866B76AFA83(/*hidden argument*/NULL);
		CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * L_8 = ___orbital0;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_9;
		L_9 = CinemachineComponentBase_get_VirtualCamera_mDDC4BEDF77A93F4C25C2E62CBF96542ABB6FE3BA(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = CinemachineCore_IsLive_m61EC3BE5D22564DD740379A88639BF368EBC1E43(L_7, L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = CinemachineOrbitalTransposer_UpdateHeading_mB62BE9B437A813916796102106A15EC88B7D6D38(L_0, L_1, L_2, (AxisState_t376D19829A676B98933979F42845F6476071DDE8 *)L_4, (Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 *)L_6, L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void Cinemachine.CinemachineOrbitalTransposer/Heading::.ctor(Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Heading__ctor_m27AC6DA9204C9B4856DEA05AAAD89E2400FF639A (Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * __this, int32_t ___def0, int32_t ___filterStrength1, float ___bias2, const RuntimeMethod* method)
{
	{
		// m_Definition = def;
		int32_t L_0 = ___def0;
		__this->set_m_Definition_0(L_0);
		// m_VelocityFilterStrength = filterStrength;
		int32_t L_1 = ___filterStrength1;
		__this->set_m_VelocityFilterStrength_1(L_1);
		// m_Bias = bias;
		float L_2 = ___bias2;
		__this->set_m_Bias_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Heading__ctor_m27AC6DA9204C9B4856DEA05AAAD89E2400FF639A_AdjustorThunk (RuntimeObject * __this, int32_t ___def0, int32_t ___filterStrength1, float ___bias2, const RuntimeMethod* method)
{
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 *>(__this + _offset);
	Heading__ctor_m27AC6DA9204C9B4856DEA05AAAD89E2400FF639A(_thisAdjusted, ___def0, ___filterStrength1, ___bias2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateHeadingDelegate__ctor_mB9BA33C54488BC8DD418BEEF3A51DB6AF40E361B (UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::Invoke(Cinemachine.CinemachineOrbitalTransposer,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateHeadingDelegate_Invoke_m3A58C1E3FAF4FE5B175648FF19F95BAD57CC6330 (UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * __this, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * ___orbital0, float ___deltaTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, const RuntimeMethod* method)
{
	float result = 0.0f;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___orbital0, ___deltaTime1, ___up2);
					else
						result = GenericVirtualFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, ___orbital0, ___deltaTime1, ___up2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___orbital0, ___deltaTime1, ___up2);
					else
						result = VirtualFuncInvoker2< float, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___orbital0, ___deltaTime1, ___up2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef float (*FunctionPointerType) (CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
			else
			{
				typedef float (*FunctionPointerType) (void*, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___orbital0, ___deltaTime1, ___up2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::BeginInvoke(Cinemachine.CinemachineOrbitalTransposer,System.Single,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateHeadingDelegate_BeginInvoke_mBDCD4A90CE6D3E50F8A7A7FF3A12039EE580E4A4 (UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * __this, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * ___orbital0, float ___deltaTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___orbital0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___deltaTime1);
	__d_args[2] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___up2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UpdateHeadingDelegate_EndInvoke_m75EB1823E9A52B6FD0216E863677C5A357A13672 (UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachinePathBase/Appearance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Appearance__ctor_m975B387EF5A573D25BD3C5C57B0314F3C4446196 (Appearance_t5C30CF5A3D0FE21A2264E1C25AAF86B3B035CEE8 * __this, const RuntimeMethod* method)
{
	{
		// public Color pathColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_pathColor_0(L_0);
		// public Color inactivePathColor = Color.gray;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		__this->set_inactivePathColor_1(L_1);
		// public float width = 0.2f;
		__this->set_width_2((0.200000003f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector4 Cinemachine.CinemachineSmoothPath/Waypoint::get_AsVector4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC (Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector4(position.x, position.y, position.z, roll); }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_position_0();
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_position_0();
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_position_0();
		float L_5 = L_4->get_z_4();
		float L_6 = __this->get_roll_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 *>(__this + _offset);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  _returnValue;
	_returnValue = Waypoint_get_AsVector4_m9CB420052E5FB5EA1681133222C5EB982BEA6BAC(_thisAdjusted, method);
	return _returnValue;
}
// Cinemachine.CinemachineSmoothPath/Waypoint Cinemachine.CinemachineSmoothPath/Waypoint::FromVector4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  Waypoint_FromVector4_m1F859E37CBC871BC98DC89550A1C6B264E46FB2A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Waypoint wp = new Waypoint();
		il2cpp_codegen_initobj((&V_0), sizeof(Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54 ));
		// wp.position = new Vector3(v[0], v[1], v[2]);
		float L_0;
		L_0 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 0, /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 1, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		(&V_0)->set_position_0(L_3);
		// wp.roll = v[3];
		float L_4;
		L_4 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___v0), 3, /*hidden argument*/NULL);
		(&V_0)->set_roll_1(L_4);
		// return wp;
		Waypoint_t2E24ECCFEA6F4D368CD2C992EA38915CD3438A54  L_5 = V_0;
		return L_5;
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
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke_back(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_pinvoke_cleanup(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com_back(const Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled, Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF& unmarshaled)
{
	Exception_t* ___m_VirtualCamera_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_VirtualCamera' of type 'Instruction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_VirtualCamera_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineStateDrivenCamera/Instruction
IL2CPP_EXTERN_C void Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshal_com_cleanup(Instruction_tF7573536FFDAE041562512FF1F00774A07AAA0BF_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineStateDrivenCamera/ParentHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094 (ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	{
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_0 = ___h0;
		__this->set_m_Hash_0(L_0);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		int32_t L_1 = ___p1;
		__this->set_m_ParentHash_1(L_1);
		// public ParentHash(int h, int p) { m_Hash = h; m_ParentHash = p; }
		return;
	}
}
IL2CPP_EXTERN_C  void ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094_AdjustorThunk (RuntimeObject * __this, int32_t ___h0, int32_t ___p1, const RuntimeMethod* method)
{
	ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParentHash_tBD10D628B7916DE4607702F7E7DC6C872D847036 *>(__this + _offset);
	ParentHash__ctor_mFD2F0C557399C8A6C3798E3CDC0EB58B5E82A094(_thisAdjusted, ___h0, ___p1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineStoryboard/CanvasInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasInfo__ctor_mD8E59D1746FD1DC9B497D9668DE2FACB016738DE (CanvasInfo_t70219CA4ECC7F2DFE94082AD8E227EC478E0D728 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke_back(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_pinvoke_cleanup(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com_back(const Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled, Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'Target': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTargetGroup/Target
IL2CPP_EXTERN_C void Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshal_com_cleanup(Target_t52AD35054DD4FEAE0EAB68DF2E315D824F49CB7B_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke_back(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_pinvoke_cleanup(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled)
{
	marshaled.___m_Enabled_0 = static_cast<int32_t>(unmarshaled.get_m_Enabled_0());
	marshaled.___m_PositionOffset_1 = unmarshaled.get_m_PositionOffset_1();
	marshaled.___m_SearchRadius_2 = unmarshaled.get_m_SearchRadius_2();
	marshaled.___m_SearchResolution_3 = unmarshaled.get_m_SearchResolution_3();
}
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com_back(const AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled, AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D& unmarshaled)
{
	bool unmarshaled_m_Enabled_temp_0 = false;
	unmarshaled_m_Enabled_temp_0 = static_cast<bool>(marshaled.___m_Enabled_0);
	unmarshaled.set_m_Enabled_0(unmarshaled_m_Enabled_temp_0);
	float unmarshaled_m_PositionOffset_temp_1 = 0.0f;
	unmarshaled_m_PositionOffset_temp_1 = marshaled.___m_PositionOffset_1;
	unmarshaled.set_m_PositionOffset_1(unmarshaled_m_PositionOffset_temp_1);
	int32_t unmarshaled_m_SearchRadius_temp_2 = 0;
	unmarshaled_m_SearchRadius_temp_2 = marshaled.___m_SearchRadius_2;
	unmarshaled.set_m_SearchRadius_2(unmarshaled_m_SearchRadius_temp_2);
	int32_t unmarshaled_m_SearchResolution_temp_3 = 0;
	unmarshaled_m_SearchResolution_temp_3 = marshaled.___m_SearchResolution_3;
	unmarshaled.set_m_SearchResolution_3(unmarshaled_m_SearchResolution_temp_3);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTrackedDolly/AutoDolly
IL2CPP_EXTERN_C void AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshal_com_cleanup(AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineTrackedDolly/AutoDolly::.ctor(System.Boolean,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793 (AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	{
		// m_Enabled = enabled;
		bool L_0 = ___enabled0;
		__this->set_m_Enabled_0(L_0);
		// m_PositionOffset = positionOffset;
		float L_1 = ___positionOffset1;
		__this->set_m_PositionOffset_1(L_1);
		// m_SearchRadius = searchRadius;
		int32_t L_2 = ___searchRadius2;
		__this->set_m_SearchRadius_2(L_2);
		// m_SearchResolution = stepsPerSegment;
		int32_t L_3 = ___stepsPerSegment3;
		__this->set_m_SearchResolution_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793_AdjustorThunk (RuntimeObject * __this, bool ___enabled0, float ___positionOffset1, int32_t ___searchRadius2, int32_t ___stepsPerSegment3, const RuntimeMethod* method)
{
	AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AutoDolly_t4D215A8DBC88600B267D613E0AFB5B025CAC211D *>(__this + _offset);
	AutoDolly__ctor_mB22E90A64C6D9D0F6C0F6FE794446F2867E76793(_thisAdjusted, ___enabled0, ___positionOffset1, ___searchRadius2, ___stepsPerSegment3, method);
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


// Conversion methods for marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke_back(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_pinvoke_cleanup(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com_back(const ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled, ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6& unmarshaled)
{
	Exception_t* ___m_Event_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Event' of type 'ActionSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Event_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineTriggerAction/ActionSettings
IL2CPP_EXTERN_C void ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshal_com_cleanup(ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::.ctor(Cinemachine.CinemachineTriggerAction/ActionSettings/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, int32_t ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Action = action;
		int32_t L_0 = ___action0;
		__this->set_m_Action_0(L_0);
		// m_Target = null;
		__this->set_m_Target_1((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
		// m_BoostAmount = 0;
		__this->set_m_BoostAmount_2(0);
		// m_StartTime = 0;
		__this->set_m_StartTime_3((0.0f));
		// m_Mode = TimeMode.FromStart;
		__this->set_m_Mode_4(0);
		// m_Event = new TriggerEvent();
		TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * L_1 = (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B *)il2cpp_codegen_object_new(TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B_il2cpp_TypeInfo_var);
		TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266(L_1, /*hidden argument*/NULL);
		__this->set_m_Event_5(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035_AdjustorThunk (RuntimeObject * __this, int32_t ___action0, const RuntimeMethod* method)
{
	ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 *>(__this + _offset);
	ActionSettings__ctor_mD581917562ECC8295F6278BA5AD001705F8E9035(_thisAdjusted, ___action0, method);
}
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716 (ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * V_2 = NULL;
	int32_t V_3 = 0;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * V_4 = NULL;
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * V_5 = NULL;
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * V_6 = NULL;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_11 = NULL;
	PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * V_12 = NULL;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_13 = NULL;
	{
		// UnityEngine.Object currentTarget = m_Target;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_m_Target_1();
		V_0 = L_0;
		// if (currentTarget != null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_01fd;
		}
	}
	{
		// GameObject targetGameObject = currentTarget as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = V_0;
		V_1 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		// Behaviour targetBehaviour = currentTarget as Behaviour;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = V_0;
		V_2 = ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)IsInstClass((RuntimeObject*)L_4, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var));
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// targetGameObject = targetBehaviour.gameObject;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_7 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0031:
	{
		// switch (m_Action)
		int32_t L_9 = __this->get_m_Action_0();
		V_3 = L_9;
		int32_t L_10 = V_3;
		switch (L_10)
		{
			case 0:
			{
				goto IL_01fd;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_00cc;
			}
			case 4:
			{
				goto IL_00e4;
			}
			case 5:
			{
				goto IL_00fc;
			}
			case 6:
			{
				goto IL_0114;
			}
			case 7:
			{
				goto IL_01c9;
			}
		}
	}
	{
		goto IL_01fd;
	}

IL_0063:
	{
		// CinemachineVirtualCameraBase vcam
		//     = targetGameObject.GetComponent<CinemachineVirtualCameraBase>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_12;
		L_12 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6(L_11, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6_RuntimeMethod_var);
		V_4 = L_12;
		// if (vcam != null)
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_01fd;
		}
	}
	{
		// vcam.Priority += m_BoostAmount;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_15 = V_4;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_16 = L_15;
		int32_t L_17;
		L_17 = CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_m_BoostAmount_2();
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), /*hidden argument*/NULL);
		// vcam.MoveToTopOfPrioritySubqueue();
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_19 = V_4;
		CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631(L_19, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_0098:
	{
		// if (targetGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_01fd;
		}
	}
	{
		// targetGameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_1;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// CinemachineVirtualCameraBase vcam
		//     = targetGameObject.GetComponent<CinemachineVirtualCameraBase>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_24;
		L_24 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6(L_23, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m78F24AAB944A0EDB54313A9C5CF232FBD35BA3F6_RuntimeMethod_var);
		V_5 = L_24;
		// if (vcam != null)
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_25 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_01fd;
		}
	}
	{
		// vcam.MoveToTopOfPrioritySubqueue();
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_27 = V_5;
		CinemachineVirtualCameraBase_MoveToTopOfPrioritySubqueue_m1C3187B5E5F52FA2D2924CD3443435BCA449B631(L_27, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00cc:
	{
		// if (targetGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01fd;
		}
	}
	{
		// targetGameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_1;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00e4:
	{
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_31 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_01fd;
		}
	}
	{
		// targetBehaviour.enabled = true;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_33 = V_2;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_33, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_00fc:
	{
		// if (targetBehaviour != null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_01fd;
		}
	}
	{
		// targetBehaviour.enabled = false;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_36 = V_2;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_36, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_0114:
	{
		// PlayableDirector playable
		//     = targetGameObject.GetComponent<PlayableDirector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_1;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_38;
		L_38 = GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48(L_37, /*hidden argument*/GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48_RuntimeMethod_var);
		V_6 = L_38;
		// if (playable != null)
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01ad;
		}
	}
	{
		// double startTime = 0;
		V_7 = (0.0);
		// double duration = playable.duration;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_41 = V_6;
		double L_42;
		L_42 = PlayableDirector_get_duration_m82E33D83BB84CFB367B98BDE1F927B10BBDA7B3E(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		// double current = playable.time;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_43 = V_6;
		double L_44;
		L_44 = PlayableDirector_get_time_m6E6BEDB6E9FF4A8CD48F73FB64F353B5787E735F(L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		// switch (m_Mode)
		int32_t L_45 = __this->get_m_Mode_4();
		V_10 = L_45;
		int32_t L_46 = V_10;
		switch (L_46)
		{
			case 0:
			{
				goto IL_0165;
			}
			case 1:
			{
				goto IL_0173;
			}
			case 2:
			{
				goto IL_0181;
			}
			case 3:
			{
				goto IL_018f;
			}
		}
	}

IL_0165:
	{
		// startTime += m_StartTime;
		double L_47 = V_7;
		float L_48 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_add((double)L_47, (double)((double)((double)L_48))));
		// break;
		goto IL_019b;
	}

IL_0173:
	{
		// startTime = duration - m_StartTime;
		double L_49 = V_8;
		float L_50 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_subtract((double)L_49, (double)((double)((double)L_50))));
		// break;
		goto IL_019b;
	}

IL_0181:
	{
		// startTime = current - m_StartTime;
		double L_51 = V_9;
		float L_52 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_subtract((double)L_51, (double)((double)((double)L_52))));
		// break;
		goto IL_019b;
	}

IL_018f:
	{
		// startTime = current + m_StartTime;
		double L_53 = V_9;
		float L_54 = __this->get_m_StartTime_3();
		V_7 = ((double)il2cpp_codegen_add((double)L_53, (double)((double)((double)L_54))));
	}

IL_019b:
	{
		// playable.time = startTime;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_55 = V_6;
		double L_56 = V_7;
		PlayableDirector_set_time_m1F9C316C3EDC9EB58D381C1F2520499125C1365A(L_55, L_56, /*hidden argument*/NULL);
		// playable.Play();
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_57 = V_6;
		PlayableDirector_Play_m13D31AD720EEE25E93A21394B225EA10300C47C4(L_57, /*hidden argument*/NULL);
		// }
		goto IL_01fd;
	}

IL_01ad:
	{
		// Animation ani = targetGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_1;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_59;
		L_59 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C(L_58, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var);
		V_11 = L_59;
		// if (ani != null)
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_60 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_60, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01fd;
		}
	}
	{
		// ani.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_62 = V_11;
		bool L_63;
		L_63 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_62, /*hidden argument*/NULL);
		// break;
		goto IL_01fd;
	}

IL_01c9:
	{
		// PlayableDirector playable
		//     = targetGameObject.GetComponent<PlayableDirector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = V_1;
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_65;
		L_65 = GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48(L_64, /*hidden argument*/GameObject_GetComponent_TisPlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38_m6BF2935EBF97B908F4D5BEEE07226BB024D88A48_RuntimeMethod_var);
		V_12 = L_65;
		// if (playable != null)
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_66 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_66, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e4;
		}
	}
	{
		// playable.Stop();
		PlayableDirector_t63912C98A4EC9D4701E88B633E27E0D97209BA38 * L_68 = V_12;
		PlayableDirector_Stop_m4C9FCBB20CDD4BF75DF910F3BE713251D9548C96(L_68, /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_01e4:
	{
		// Animation ani = targetGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = V_1;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_70;
		L_70 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C(L_69, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var);
		V_13 = L_70;
		// if (ani != null)
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_71 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_71, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01fd;
		}
	}
	{
		// ani.Stop();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_73 = V_13;
		Animation_Stop_m06283FD9F64A3B05A2A248AE2B86C7F88D479DE9(L_73, /*hidden argument*/NULL);
	}

IL_01fd:
	{
		// m_Event.Invoke();
		TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * L_74 = __this->get_m_Event_5();
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_74, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionSettings_t6ED1A2194213B308930F51D59E42D4FC057222C6 *>(__this + _offset);
	ActionSettings_Invoke_mF3E35400963944A72FD025FEF8052413056DC716(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m575A5E831C9D536CC3AF82E75EBEE29E76D43C89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * L_0 = (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD *)il2cpp_codegen_object_new(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Cinemachine.CinemachineVirtualCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB7EABDE6BB8BDE667A9786AC0176017ADEC9AF3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Cinemachine.CinemachineVirtualCamera/<>c::<UpdateComponentPipeline>b__41_0(Cinemachine.CinemachineComponentBase,Cinemachine.CinemachineComponentBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateComponentPipelineU3Eb__41_0_mCE45F92D28AB75075C2C97D20DBDAF56CB6D1FA3 (U3CU3Ec_t9DBA60FAE3D3730FD567913937825BC3ACF72EFD * __this, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * ___c10, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * ___c21, const RuntimeMethod* method)
{
	{
		// list.Sort((c1, c2) => (int)c1.Stage - (int)c2.Stage);
		CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * L_0 = ___c10;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_0);
		CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * L_2 = ___c21;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineComponentBase::get_Stage() */, L_2);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
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
// System.Void Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatePipelineDelegate__ctor_mF51B89DEB4EAE7A714B49CA9BF703B8541D419A0 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::Invoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_Invoke_mF25FE1D09EC7FB09C0E0EDF766B2A19BF31080E5 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___copyFrom2, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				// closed
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
					else
						result = GenericVirtualFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(targetMethod, ___vcam0, ___name1, ___copyFrom2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___vcam0, ___name1, ___copyFrom2);
					else
						result = VirtualFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___vcam0, ___name1, ___copyFrom2);
				}
			}
			else
			{
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
			else
			{
				typedef Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*FunctionPointerType) (void*, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, String_t*, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___vcam0, ___name1, ___copyFrom2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::BeginInvoke(Cinemachine.CinemachineVirtualCamera,System.String,Cinemachine.CinemachineComponentBase[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreatePipelineDelegate_BeginInvoke_m354E9436E905807B4CCD0ACB6528D067E014E638 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___vcam0, String_t* ___name1, CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___copyFrom2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___vcam0;
	__d_args[1] = ___name1;
	__d_args[2] = ___copyFrom2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * CreatePipelineDelegate_EndInvoke_m038BA53E61623D2190CBCCD6649F230C29CE89F0 (CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate__ctor_m3D90BC04CC0ADE49A4EE6503D20E7AB776F7A6AA (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_Invoke_m900F828AF1A5259B1D8606DB45BD14D4CB3274E1 (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___pipeline0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___pipeline0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pipeline0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pipeline0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pipeline0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pipeline0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyPipelineDelegate_BeginInvoke_m5E9E8B1CCB62A8EA334567CE88741B5356DE062B (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pipeline0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___pipeline0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyPipelineDelegate_EndInvoke_mD018624F272E6D61432DF250DFCDAD7DC2B53BBB (DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke_back(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_pinvoke_cleanup(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com_back(const TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled, TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C& unmarshaled)
{
	Exception_t* ___m_OnCameraLive_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_OnCameraLive' of type 'TransitionParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_OnCameraLive_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineVirtualCameraBase/TransitionParams
IL2CPP_EXTERN_C void TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshal_com_cleanup(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Cinemachine.ConfinerOven/AspectStretcher::get_Aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, const RuntimeMethod* method)
{
	{
		// public float Aspect { get; }
		float L_0 = __this->get_U3CAspectU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *>(__this + _offset);
	float _returnValue;
	_returnValue = AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Cinemachine.ConfinerOven/AspectStretcher::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectStretcher__ctor_mDCB6211AC6DD9E121C1936D1CA89A59992810250 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, float ___aspect0, float ___centerX1, const RuntimeMethod* method)
{
	{
		// Aspect = aspect;
		float L_0 = ___aspect0;
		__this->set_U3CAspectU3Ek__BackingField_0(L_0);
		// m_InverseAspect = 1 / Aspect;
		float L_1;
		L_1 = AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_inline((AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *)__this, /*hidden argument*/NULL);
		__this->set_m_InverseAspect_1(((float)((float)(1.0f)/(float)L_1)));
		// m_CenterX = centerX;
		float L_2 = ___centerX1;
		__this->set_m_CenterX_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AspectStretcher__ctor_mDCB6211AC6DD9E121C1936D1CA89A59992810250_AdjustorThunk (RuntimeObject * __this, float ___aspect0, float ___centerX1, const RuntimeMethod* method)
{
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *>(__this + _offset);
	AspectStretcher__ctor_mDCB6211AC6DD9E121C1936D1CA89A59992810250(_thisAdjusted, ___aspect0, ___centerX1, method);
}
// UnityEngine.Vector2 Cinemachine.ConfinerOven/AspectStretcher::Stretch(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Stretch_mBF0EC7D7CB450374BBB47AE0ECE58FDD605FBA36 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method)
{
	{
		// return new Vector2((p.x - m_CenterX) * m_InverseAspect + m_CenterX, p.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___p0;
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get_m_CenterX_2();
		float L_3 = __this->get_m_InverseAspect_1();
		float L_4 = __this->get_m_CenterX_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___p0;
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), (float)L_3)), (float)L_4)), L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Stretch_mBF0EC7D7CB450374BBB47AE0ECE58FDD605FBA36_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method)
{
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = AspectStretcher_Stretch_mBF0EC7D7CB450374BBB47AE0ECE58FDD605FBA36(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// UnityEngine.Vector2 Cinemachine.ConfinerOven/AspectStretcher::Unstretch(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Unstretch_m6C6ABFB166BF2BC9B4DBDF3B2057018DE19013D6 (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method)
{
	{
		// return new Vector2((p.x - m_CenterX) * Aspect + m_CenterX, p.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___p0;
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get_m_CenterX_2();
		float L_3;
		L_3 = AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_inline((AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *)__this, /*hidden argument*/NULL);
		float L_4 = __this->get_m_CenterX_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___p0;
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), (float)L_3)), (float)L_4)), L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  AspectStretcher_Unstretch_m6C6ABFB166BF2BC9B4DBDF3B2057018DE19013D6_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, const RuntimeMethod* method)
{
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = AspectStretcher_Unstretch_m6C6ABFB166BF2BC9B4DBDF3B2057018DE19013D6(_thisAdjusted, ___p0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Cinemachine.ConfinerOven/BakedSolution::get_FrustumHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BakedSolution_get_FrustumHeight_mD53A0B6A4B8FA2F76504CF1A4D2F8429E47AC76B (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, const RuntimeMethod* method)
{
	{
		// public float FrustumHeight { get; }
		float L_0 = __this->get_U3CFrustumHeightU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Cinemachine.ConfinerOven/BakedSolution::.ctor(System.Single,System.Single,System.Boolean,UnityEngine.Rect,System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakedSolution__ctor_m764A15AA9AD75B36FBE0BEED88317DE7D3970CC7 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, float ___aspectRatio0, float ___frustumHeight1, bool ___hasBones2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___polygonBounds3, List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___originalPolygon4, List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * ___solution5, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// public BakedSolution(
		//     float aspectRatio, float frustumHeight, bool hasBones, Rect polygonBounds,
		//     List<List<IntPoint>> originalPolygon, List<List<IntPoint>> solution)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_AspectStretcher = new AspectStretcher(aspectRatio, polygonBounds.center.x);
		float L_0 = ___aspectRatio0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___polygonBounds3), /*hidden argument*/NULL);
		float L_2 = L_1.get_x_0();
		AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  L_3;
		memset((&L_3), 0, sizeof(L_3));
		AspectStretcher__ctor_mDCB6211AC6DD9E121C1936D1CA89A59992810250((&L_3), L_0, L_2, /*hidden argument*/NULL);
		__this->set_m_AspectStretcher_2(L_3);
		// FrustumHeight = frustumHeight;
		float L_4 = ___frustumHeight1;
		__this->set_U3CFrustumHeightU3Ek__BackingField_0(L_4);
		// m_frustumSizeIntSpace = frustumHeight * k_FloatToIntScaler;
		float L_5 = ___frustumHeight1;
		__this->set_m_frustumSizeIntSpace_1(((float)il2cpp_codegen_multiply((float)L_5, (float)(100000.0f))));
		// m_HasBones = hasBones;
		bool L_6 = ___hasBones2;
		__this->set_m_HasBones_3(L_6);
		// m_OriginalPolygon = originalPolygon;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_7 = ___originalPolygon4;
		__this->set_m_OriginalPolygon_5(L_7);
		// m_Solution = solution;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_8 = ___solution5;
		__this->set_m_Solution_6(L_8);
		// float polygonSizeX = polygonBounds.width / aspectRatio * k_FloatToIntScaler;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___polygonBounds3), /*hidden argument*/NULL);
		float L_10 = ___aspectRatio0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_9/(float)L_10)), (float)(100000.0f)));
		// float polygonSizeY = polygonBounds.height * k_FloatToIntScaler;
		float L_11;
		L_11 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___polygonBounds3), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_11, (float)(100000.0f)));
		// m_SqrPolygonDiagonal = polygonSizeX * polygonSizeX + polygonSizeY * polygonSizeY;
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		__this->set_m_SqrPolygonDiagonal_4(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))))));
		// }
		return;
	}
}
// System.Void Cinemachine.ConfinerOven/BakedSolution::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakedSolution_Clear_m38FD13E2E690AD2E4082B0463A15EB1ABD4D527F (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, const RuntimeMethod* method)
{
	{
		// m_Solution = null;
		__this->set_m_Solution_6((List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *)NULL);
		// m_OriginalPolygon = null;
		__this->set_m_OriginalPolygon_5((List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *)NULL);
		// }
		return;
	}
}
// System.Boolean Cinemachine.ConfinerOven/BakedSolution::IsValid(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakedSolution_IsValid_m088087FE81CEB48209DAB579552B9F1B1B2C3364 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, float ___frustumHeight0, const RuntimeMethod* method)
{
	{
		// return m_Solution != null && Mathf.Abs(frustumHeight - FrustumHeight) < k_MinStepSize;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_0 = __this->get_m_Solution_6();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = ___frustumHeight0;
		float L_2;
		L_2 = BakedSolution_get_FrustumHeight_mD53A0B6A4B8FA2F76504CF1A4D2F8429E47AC76B_inline(__this, /*hidden argument*/NULL);
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		return (bool)((((float)L_3) < ((float)(0.00499999989f)))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2 Cinemachine.ConfinerOven/BakedSolution::ConfinePoint(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BakedSolution_ConfinePoint_mD522D2F038B40F7A66B2B7817253B2791BEF6FA4 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___pointToConfine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_11;
	memset((&V_11), 0, sizeof(V_11));
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_12;
	memset((&V_12), 0, sizeof(V_12));
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_13;
	memset((&V_13), 0, sizeof(V_13));
	double V_14 = 0.0;
	double V_15 = 0.0;
	int32_t G_B10_0 = 0;
	{
		// if (m_Solution.Count <= 0) return pointToConfine; // empty confiner -> no need to confine
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_0 = __this->get_m_Solution_6();
		int32_t L_1;
		L_1 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_0, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// if (m_Solution.Count <= 0) return pointToConfine; // empty confiner -> no need to confine
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = ___pointToConfine0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_2);
		return L_3;
	}

IL_0015:
	{
		// Vector2 pInConfinerSpace = m_AspectStretcher.Stretch(pointToConfine);
		AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  L_4 = __this->get_m_AspectStretcher_2();
		V_6 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = ___pointToConfine0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = AspectStretcher_Stretch_mBF0EC7D7CB450374BBB47AE0ECE58FDD605FBA36((AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *)(&V_6), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// IntPoint p =
		//     new IntPoint(pInConfinerSpace.x * k_FloatToIntScaler, pInConfinerSpace.y * k_FloatToIntScaler);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_y_1();
		IntPoint__ctor_mE5B43837884272FB8DD8256B001F6287A2E6BB63((IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)(&V_1), ((double)((double)((float)il2cpp_codegen_multiply((float)L_9, (float)(100000.0f))))), ((double)((double)((float)il2cpp_codegen_multiply((float)L_11, (float)(100000.0f))))), /*hidden argument*/NULL);
		// for (int i = 0; i < m_Solution.Count; ++i)
		V_7 = 0;
		goto IL_0073;
	}

IL_0051:
	{
		// if (Clipper.PointInPolygon(p, m_Solution[i]) != 0) // 0: outside, +1: inside , -1: point on poly boundary
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_12 = V_1;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_13 = __this->get_m_Solution_6();
		int32_t L_14 = V_7;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_15;
		L_15 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_16;
		L_16 = Clipper_PointInPolygon_m2394FF589C7C4AFE474C1A07BA8C03847BB27023(L_12, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		// return pointToConfine; // inside, no confinement needed
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = ___pointToConfine0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_17);
		return L_18;
	}

IL_006d:
	{
		// for (int i = 0; i < m_Solution.Count; ++i)
		int32_t L_19 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = 0; i < m_Solution.Count; ++i)
		int32_t L_20 = V_7;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_21 = __this->get_m_Solution_6();
		int32_t L_22;
		L_22 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_21, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0051;
		}
	}
	{
		// bool checkIntersectOriginal = m_HasBones && IsInsideOriginal(p);
		bool L_23 = __this->get_m_HasBones_3();
		if (!L_23)
		{
			goto IL_0093;
		}
	}
	{
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_24 = V_1;
		bool L_25;
		L_25 = BakedSolution_IsInsideOriginal_m78F43D3331F08CB54EFD177DE23996F5E3C0B066(__this, L_24, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_25));
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 0;
	}

IL_0094:
	{
		V_2 = (bool)G_B10_0;
		// IntPoint closest = p;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_26 = V_1;
		V_3 = L_26;
		// double minDistance = double.MaxValue;
		V_4 = (1.7976931348623157E+308);
		// for (int i = 0; i < m_Solution.Count; ++i)
		V_8 = 0;
		goto IL_0192;
	}

IL_00aa:
	{
		// int numPoints = m_Solution[i].Count;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_27 = __this->get_m_Solution_6();
		int32_t L_28 = V_8;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_29;
		L_29 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_30;
		L_30 = List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_inline(L_29, /*hidden argument*/List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		V_9 = L_30;
		// for (int j = 0; j < numPoints; ++j)
		V_10 = 0;
		goto IL_0183;
	}

IL_00c6:
	{
		// IntPoint l1 = m_Solution[i][j];
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_31 = __this->get_m_Solution_6();
		int32_t L_32 = V_8;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_33;
		L_33 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_31, L_32, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_34 = V_10;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_35;
		L_35 = List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
		V_11 = L_35;
		// IntPoint l2 = m_Solution[i][(j + 1) % numPoints];
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_36 = __this->get_m_Solution_6();
		int32_t L_37 = V_8;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_38;
		L_38 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_39 = V_10;
		int32_t L_40 = V_9;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_41;
		L_41 = List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_inline(L_38, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))%(int32_t)L_40)), /*hidden argument*/List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
		V_12 = L_41;
		// IntPoint c = IntPointLerp(l1, l2, ClosestPointOnSegment(p, l1, l2));
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_42 = V_11;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_43 = V_12;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_44 = V_1;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_45 = V_11;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_46 = V_12;
		float L_47;
		L_47 = BakedSolution_ClosestPointOnSegment_m640814AD98DC8ED622CC6F6CDD515E34F402C523(L_44, L_45, L_46, /*hidden argument*/NULL);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_48;
		L_48 = BakedSolution_IntPointLerp_mA505E038E47C5383553C541632DF7B0E9CF145D9(L_42, L_43, L_47, /*hidden argument*/NULL);
		V_13 = L_48;
		// double diffX = Mathf.Abs(p.X - c.X);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_49 = V_1;
		int64_t L_50 = L_49.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_51 = V_13;
		int64_t L_52 = L_51.get_X_0();
		float L_53;
		L_53 = fabsf(((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)L_50, (int64_t)L_52)))));
		// double diffY = Mathf.Abs(p.Y - c.Y);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_54 = V_1;
		int64_t L_55 = L_54.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_56 = V_13;
		int64_t L_57 = L_56.get_Y_1();
		float L_58;
		L_58 = fabsf(((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)L_55, (int64_t)L_57)))));
		V_14 = ((double)((double)L_58));
		// double distance = diffX * diffX + diffY * diffY;
		double L_59 = ((double)((double)L_53));
		double L_60 = L_59;
		double L_61 = V_14;
		double L_62 = V_14;
		V_15 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_60, (double)L_60)), (double)((double)il2cpp_codegen_multiply((double)L_61, (double)L_62))));
		// if (diffX > m_frustumSizeIntSpace || diffY > m_frustumSizeIntSpace)
		float L_63 = __this->get_m_frustumSizeIntSpace_1();
		if ((((double)L_59) > ((double)((double)((double)L_63)))))
		{
			goto IL_0157;
		}
	}
	{
		double L_64 = V_14;
		float L_65 = __this->get_m_frustumSizeIntSpace_1();
		if ((!(((double)L_64) > ((double)((double)((double)L_65))))))
		{
			goto IL_0162;
		}
	}

IL_0157:
	{
		// distance += m_SqrPolygonDiagonal; // penalty is the biggest distance between any two points
		double L_66 = V_15;
		double L_67 = __this->get_m_SqrPolygonDiagonal_4();
		V_15 = ((double)il2cpp_codegen_add((double)L_66, (double)L_67));
	}

IL_0162:
	{
		// if (distance < minDistance && (!checkIntersectOriginal || !DoesIntersectOriginal(p, c)))
		double L_68 = V_15;
		double L_69 = V_4;
		if ((!(((double)L_68) < ((double)L_69))))
		{
			goto IL_017d;
		}
	}
	{
		bool L_70 = V_2;
		if (!L_70)
		{
			goto IL_0176;
		}
	}
	{
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_71 = V_1;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_72 = V_13;
		bool L_73;
		L_73 = BakedSolution_DoesIntersectOriginal_m4F340B7A818E7FB1CFA1732D2C6C12156D5A65E2(__this, L_71, L_72, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_017d;
		}
	}

IL_0176:
	{
		// minDistance = distance;
		double L_74 = V_15;
		V_4 = L_74;
		// closest = c;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_75 = V_13;
		V_3 = L_75;
	}

IL_017d:
	{
		// for (int j = 0; j < numPoints; ++j)
		int32_t L_76 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0183:
	{
		// for (int j = 0; j < numPoints; ++j)
		int32_t L_77 = V_10;
		int32_t L_78 = V_9;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_00c6;
		}
	}
	{
		// for (int i = 0; i < m_Solution.Count; ++i)
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_0192:
	{
		// for (int i = 0; i < m_Solution.Count; ++i)
		int32_t L_80 = V_8;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_81 = __this->get_m_Solution_6();
		int32_t L_82;
		L_82 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_81, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_00aa;
		}
	}
	{
		// var result = new Vector2(closest.X * k_IntToFloatScaler, closest.Y * k_IntToFloatScaler);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_83 = V_3;
		int64_t L_84 = L_83.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_85 = V_3;
		int64_t L_86 = L_85.get_Y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), ((float)il2cpp_codegen_multiply((float)((float)((float)L_84)), (float)(9.99999975E-06f))), ((float)il2cpp_codegen_multiply((float)((float)((float)L_86)), (float)(9.99999975E-06f))), /*hidden argument*/NULL);
		// return m_AspectStretcher.Unstretch(result);
		AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C  L_87 = __this->get_m_AspectStretcher_2();
		V_6 = L_87;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89;
		L_89 = AspectStretcher_Unstretch_m6C6ABFB166BF2BC9B4DBDF3B2057018DE19013D6((AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C *)(&V_6), L_88, /*hidden argument*/NULL);
		return L_89;
	}
}
// System.Boolean Cinemachine.ConfinerOven/BakedSolution::IsInsideOriginal(ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakedSolution_IsInsideOriginal_m78F43D3331F08CB54EFD177DE23996F5E3C0B066 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_OriginalPolygon.Count; ++i)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (Clipper.PointInPolygon(p, m_OriginalPolygon[i]) != 0)
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_0 = ___p0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_1 = __this->get_m_OriginalPolygon_5();
		int32_t L_2 = V_0;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_3;
		L_3 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Clipper_PointInPolygon_m2394FF589C7C4AFE474C1A07BA8C03847BB27023(L_0, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// for (int i = 0; i < m_OriginalPolygon.Count; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < m_OriginalPolygon.Count; ++i)
		int32_t L_6 = V_0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_7 = __this->get_m_OriginalPolygon_5();
		int32_t L_8;
		L_8 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_7, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Single Cinemachine.ConfinerOven/BakedSolution::ClosestPointOnSegment(ClipperLib.IntPoint,ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BakedSolution_ClosestPointOnSegment_m640814AD98DC8ED622CC6F6CDD515E34F402C523 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p0, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___s01, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___s12, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// double sX = s1.X - s0.X;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_0 = ___s12;
		int64_t L_1 = L_0.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_2 = ___s01;
		int64_t L_3 = L_2.get_X_0();
		V_0 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3))));
		// double sY = s1.Y - s0.Y;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_4 = ___s12;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_6 = ___s01;
		int64_t L_7 = L_6.get_Y_1();
		V_1 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7))));
		// double len2 = sX * sX + sY * sY;
		double L_8 = V_0;
		double L_9 = V_0;
		double L_10 = V_1;
		double L_11 = V_1;
		V_2 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_9)), (double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11))));
		// if (len2 < k_ClipperEpsilon)
		double L_12 = V_2;
		if ((!(((double)L_12) < ((double)(1000.0)))))
		{
			goto IL_0038;
		}
	}
	{
		// return 0; // degenerate segment
		return (0.0f);
	}

IL_0038:
	{
		// double s0pX = p.X - s0.X;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_13 = ___p0;
		int64_t L_14 = L_13.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_15 = ___s01;
		int64_t L_16 = L_15.get_X_0();
		// double s0pY = p.Y - s0.Y;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_17 = ___p0;
		int64_t L_18 = L_17.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_19 = ___s01;
		int64_t L_20 = L_19.get_Y_1();
		V_3 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)L_20))));
		// double dot = s0pX * sX + s0pY * sY;
		double L_21 = V_0;
		double L_22 = V_3;
		double L_23 = V_1;
		// return Mathf.Clamp01((float) (dot / len2));
		double L_24 = V_2;
		float L_25;
		L_25 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((double)((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_14, (int64_t)L_16)))), (double)L_21)), (double)((double)il2cpp_codegen_multiply((double)L_22, (double)L_23))))/(double)L_24)))), /*hidden argument*/NULL);
		return L_25;
	}
}
// ClipperLib.IntPoint Cinemachine.ConfinerOven/BakedSolution::IntPointLerp(ClipperLib.IntPoint,ClipperLib.IntPoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  BakedSolution_IntPointLerp_mA505E038E47C5383553C541632DF7B0E9CF145D9 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___a0, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___b1, float ___lerp2, const RuntimeMethod* method)
{
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new IntPoint
		// {
		//     X = Mathf.RoundToInt(a.X + (b.X - a.X) * lerp),
		//     Y = Mathf.RoundToInt(a.Y + (b.Y - a.Y) * lerp),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 ));
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_0 = ___a0;
		int64_t L_1 = L_0.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_2 = ___b1;
		int64_t L_3 = L_2.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_4 = ___a0;
		int64_t L_5 = L_4.get_X_0();
		float L_6 = ___lerp2;
		int32_t L_7;
		L_7 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_add((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_5)))), (float)L_6)))), /*hidden argument*/NULL);
		(&V_0)->set_X_0(((int64_t)((int64_t)L_7)));
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_8 = ___a0;
		int64_t L_9 = L_8.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_10 = ___b1;
		int64_t L_11 = L_10.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_12 = ___a0;
		int64_t L_13 = L_12.get_Y_1();
		float L_14 = ___lerp2;
		int32_t L_15;
		L_15 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_add((float)((float)((float)L_9)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)L_11, (int64_t)L_13)))), (float)L_14)))), /*hidden argument*/NULL);
		(&V_0)->set_Y_1(((int64_t)((int64_t)L_15)));
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_16 = V_0;
		return L_16;
	}
}
// System.Boolean Cinemachine.ConfinerOven/BakedSolution::DoesIntersectOriginal(ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakedSolution_DoesIntersectOriginal_m4F340B7A818E7FB1CFA1732D2C6C12156D5A65E2 (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___l10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___l21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE52774661C80C9168642350DFA54D299E6A19584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m70ECC7DD5B3052A7FD8D32B7494DD6AC940D53CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m35D9C8D74929ECDAC5BA5CC7BC877B76A7B43978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8077ECD98AF0C32599B6EFD30BF28B38C0A69088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_4;
	memset((&V_4), 0, sizeof(V_4));
	IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var original in m_OriginalPolygon)
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_0 = __this->get_m_OriginalPolygon_5();
		Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F  L_1;
		L_1 = List_1_GetEnumerator_m8077ECD98AF0C32599B6EFD30BF28B38C0A69088(L_0, /*hidden argument*/List_1_GetEnumerator_m8077ECD98AF0C32599B6EFD30BF28B38C0A69088_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{// begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_000e:
		{
			// foreach (var original in m_OriginalPolygon)
			List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_2;
			L_2 = Enumerator_get_Current_m35D9C8D74929ECDAC5BA5CC7BC877B76A7B43978_inline((Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m35D9C8D74929ECDAC5BA5CC7BC877B76A7B43978_RuntimeMethod_var);
			V_1 = L_2;
			// int numPoints = original.Count;
			List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_3 = V_1;
			int32_t L_4;
			L_4 = List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_inline(L_3, /*hidden argument*/List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
			V_2 = L_4;
			// for (int i = 0; i < numPoints; ++i)
			V_3 = 0;
			goto IL_0050;
		}

IL_0021:
		{
			// if (FindIntersection(l1, l2, original[i], original[(i + 1) % numPoints]) == 2)
			List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_5 = V_1;
			int32_t L_6 = V_3;
			IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_7;
			L_7 = List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
			V_4 = L_7;
			List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_8 = V_1;
			int32_t L_9 = V_3;
			int32_t L_10 = V_2;
			IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_11;
			L_11 = List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_inline(L_8, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))%(int32_t)L_10)), /*hidden argument*/List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_RuntimeMethod_var);
			V_5 = L_11;
			int32_t L_12;
			L_12 = BakedSolution_FindIntersection_m7F71E48AF4363555C58A9117C7A7B3272A3CB902((IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)(&___l10), (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)(&___l21), (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)(&V_4), (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)(&V_5), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_12) == ((uint32_t)2))))
			{
				goto IL_004c;
			}
		}

IL_0047:
		{
			// return true;
			V_6 = (bool)1;
			IL2CPP_LEAVE(0x6F, FINALLY_005f);
		}

IL_004c:
		{
			// for (int i = 0; i < numPoints; ++i)
			int32_t L_13 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		}

IL_0050:
		{
			// for (int i = 0; i < numPoints; ++i)
			int32_t L_14 = V_3;
			int32_t L_15 = V_2;
			if ((((int32_t)L_14) < ((int32_t)L_15)))
			{
				goto IL_0021;
			}
		}

IL_0054:
		{
			// foreach (var original in m_OriginalPolygon)
			bool L_16;
			L_16 = Enumerator_MoveNext_m70ECC7DD5B3052A7FD8D32B7494DD6AC940D53CC((Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m70ECC7DD5B3052A7FD8D32B7494DD6AC940D53CC_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_000e;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_005f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mE52774661C80C9168642350DFA54D299E6A19584((Enumerator_tC19414764789A2C27C5D7BE19650002F0C64D55F *)(&V_0), /*hidden argument*/Enumerator_Dispose_mE52774661C80C9168642350DFA54D299E6A19584_RuntimeMethod_var);
		IL2CPP_END_FINALLY(95)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// return false;
		return (bool)0;
	}

IL_006f:
	{
		// }
		bool L_17 = V_6;
		return L_17;
	}
}
// System.Int32 Cinemachine.ConfinerOven/BakedSolution::FindIntersection(ClipperLib.IntPoint&,ClipperLib.IntPoint&,ClipperLib.IntPoint&,ClipperLib.IntPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BakedSolution_FindIntersection_m7F71E48AF4363555C58A9117C7A7B3272A3CB902 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p21, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p32, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * ___p43, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		// double dx12 = p2.X - p1.X;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_0 = ___p21;
		int64_t L_1 = L_0->get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_2 = ___p10;
		int64_t L_3 = L_2->get_X_0();
		V_0 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3))));
		// double dy12 = p2.Y - p1.Y;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_4 = ___p21;
		int64_t L_5 = L_4->get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_6 = ___p10;
		int64_t L_7 = L_6->get_Y_1();
		V_1 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7))));
		// double dx34 = p4.X - p3.X;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_8 = ___p43;
		int64_t L_9 = L_8->get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_10 = ___p32;
		int64_t L_11 = L_10->get_X_0();
		V_2 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)L_11))));
		// double dy34 = p4.Y - p3.Y;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_12 = ___p43;
		int64_t L_13 = L_12->get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_14 = ___p32;
		int64_t L_15 = L_14->get_Y_1();
		V_3 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)L_15))));
		// double denominator = dy12 * dx34 - dx12 * dy34;
		double L_16 = V_1;
		double L_17 = V_2;
		double L_18 = V_0;
		double L_19 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17)), (double)((double)il2cpp_codegen_multiply((double)L_18, (double)L_19))));
		// double t1 =
		//     ((p1.X - p3.X) * dy34 + (p3.Y - p1.Y) * dx34)
		//     / denominator;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_20 = ___p10;
		int64_t L_21 = L_20->get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_22 = ___p32;
		int64_t L_23 = L_22->get_X_0();
		double L_24 = V_3;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_25 = ___p32;
		int64_t L_26 = L_25->get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_27 = ___p10;
		int64_t L_28 = L_27->get_Y_1();
		double L_29 = V_2;
		double L_30 = V_4;
		V_5 = ((double)((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_21, (int64_t)L_23)))), (double)L_24)), (double)((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_26, (int64_t)L_28)))), (double)L_29))))/(double)L_30));
		// if (double.IsInfinity(t1) || double.IsNaN(t1))
		double L_31 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Double_IsInfinity_mEA460DCA490F45C8AB5179BFFE48D3E06965381B(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_007d;
		}
	}
	{
		double L_33 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}

IL_007d:
	{
		// if (IntPointDiffSqrMagnitude(p1, p3) < k_ClipperEpsilon ||
		//     IntPointDiffSqrMagnitude(p1, p4) < k_ClipperEpsilon ||
		//     IntPointDiffSqrMagnitude(p2, p3) < k_ClipperEpsilon ||
		//     IntPointDiffSqrMagnitude(p2, p4) < k_ClipperEpsilon)
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_35 = ___p10;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_36 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_35);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_37 = ___p32;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_38 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_37);
		double L_39;
		L_39 = BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299(L_36, L_38, /*hidden argument*/NULL);
		if ((((double)L_39) < ((double)(1000.0))))
		{
			goto IL_00ed;
		}
	}
	{
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_40 = ___p10;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_41 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_40);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_42 = ___p43;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_43 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_42);
		double L_44;
		L_44 = BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299(L_41, L_43, /*hidden argument*/NULL);
		if ((((double)L_44) < ((double)(1000.0))))
		{
			goto IL_00ed;
		}
	}
	{
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_45 = ___p21;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_46 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_45);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_47 = ___p32;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_48 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_47);
		double L_49;
		L_49 = BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299(L_46, L_48, /*hidden argument*/NULL);
		if ((((double)L_49) < ((double)(1000.0))))
		{
			goto IL_00ed;
		}
	}
	{
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_50 = ___p21;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_51 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_50);
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_52 = ___p43;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_53 = (*(IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 *)L_52);
		double L_54;
		L_54 = BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299(L_51, L_53, /*hidden argument*/NULL);
		if ((!(((double)L_54) < ((double)(1000.0)))))
		{
			goto IL_00ef;
		}
	}

IL_00ed:
	{
		// return 2; // they are the same line, or very close parallels
		return 2;
	}

IL_00ef:
	{
		// return 0; // no intersection
		return 0;
	}

IL_00f1:
	{
		// double t2 = ((p3.X - p1.X) * dy12 + (p1.Y - p3.Y) * dx12) / -denominator;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_55 = ___p32;
		int64_t L_56 = L_55->get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_57 = ___p10;
		int64_t L_58 = L_57->get_X_0();
		double L_59 = V_1;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_60 = ___p10;
		int64_t L_61 = L_60->get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 * L_62 = ___p32;
		int64_t L_63 = L_62->get_Y_1();
		double L_64 = V_0;
		double L_65 = V_4;
		V_6 = ((double)((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_56, (int64_t)L_58)))), (double)L_59)), (double)((double)il2cpp_codegen_multiply((double)((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_61, (int64_t)L_63)))), (double)L_64))))/(double)((-L_65))));
		// return (t1 >= 0 && t1 <= 1 && t2 >= 0 && t2 < 1) ? 2 : 1; // 2 = segments intersect, 1 = lines intersect
		double L_66 = V_5;
		if ((!(((double)L_66) >= ((double)(0.0)))))
		{
			goto IL_014c;
		}
	}
	{
		double L_67 = V_5;
		if ((!(((double)L_67) <= ((double)(1.0)))))
		{
			goto IL_014c;
		}
	}
	{
		double L_68 = V_6;
		if ((!(((double)L_68) >= ((double)(0.0)))))
		{
			goto IL_014c;
		}
	}
	{
		double L_69 = V_6;
		if ((((double)L_69) < ((double)(1.0))))
		{
			goto IL_014e;
		}
	}

IL_014c:
	{
		return 1;
	}

IL_014e:
	{
		return 2;
	}
}
// System.Double Cinemachine.ConfinerOven/BakedSolution::IntPointDiffSqrMagnitude(ClipperLib.IntPoint,ClipperLib.IntPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BakedSolution_IntPointDiffSqrMagnitude_m90D1C80D7F57BA58D4EB1E2F78648EF7DB36B299 (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p10, IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  ___p21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// double X = p1.X - p2.X;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_0 = ___p10;
		int64_t L_1 = L_0.get_X_0();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_2 = ___p21;
		int64_t L_3 = L_2.get_X_0();
		// double Y = p1.Y - p2.Y;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_4 = ___p10;
		int64_t L_5 = L_4.get_Y_1();
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_6 = ___p21;
		int64_t L_7 = L_6.get_Y_1();
		V_0 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7))));
		// return X * X + Y * Y;
		double L_8 = ((double)((double)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)L_3))));
		double L_9 = V_0;
		double L_10 = V_0;
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_8)), (double)((double)il2cpp_codegen_multiply((double)L_9, (double)L_10))));
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




// Conversion methods for marshalling of: Cinemachine.ConfinerOven/BakingStateCache
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_pinvoke(const BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C& unmarshaled, BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___offsetter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'offsetter' of type 'BakingStateCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___offsetter_0Exception, NULL);
}
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_pinvoke_back(const BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_pinvoke& marshaled, BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C& unmarshaled)
{
	Exception_t* ___offsetter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'offsetter' of type 'BakingStateCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___offsetter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.ConfinerOven/BakingStateCache
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_pinvoke_cleanup(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: Cinemachine.ConfinerOven/BakingStateCache
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_com(const BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C& unmarshaled, BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_com& marshaled)
{
	Exception_t* ___offsetter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'offsetter' of type 'BakingStateCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___offsetter_0Exception, NULL);
}
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_com_back(const BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_com& marshaled, BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C& unmarshaled)
{
	Exception_t* ___offsetter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'offsetter' of type 'BakingStateCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___offsetter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.ConfinerOven/BakingStateCache
IL2CPP_EXTERN_C void BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshal_com_cleanup(BakingStateCache_tB1E6799B6B7F949F9E54B62048D69AD25385617C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Cinemachine.ConfinerOven/PolygonSolution
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Polygons_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Polygons' of type 'PolygonSolution'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Polygons_0Exception, NULL);
}
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke_back(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled)
{
	Exception_t* ___m_Polygons_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Polygons' of type 'PolygonSolution'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Polygons_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.ConfinerOven/PolygonSolution
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_pinvoke_cleanup(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.ConfinerOven/PolygonSolution
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled)
{
	Exception_t* ___m_Polygons_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Polygons' of type 'PolygonSolution'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Polygons_0Exception, NULL);
}
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com_back(const PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled, PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA& unmarshaled)
{
	Exception_t* ___m_Polygons_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Polygons' of type 'PolygonSolution'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Polygons_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.ConfinerOven/PolygonSolution
IL2CPP_EXTERN_C void PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshal_com_cleanup(PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_marshaled_com& marshaled)
{
}
// System.Boolean Cinemachine.ConfinerOven/PolygonSolution::StateChanged(System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolygonSolution_StateChanged_m4F55923D1FF840A66DED34E00ABC163A4870674F (PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * __this, List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (paths.Count != m_Polygons.Count)
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** L_0 = ___paths0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_1 = *((List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 **)L_0);
		int32_t L_2;
		L_2 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_1, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_3 = __this->get_m_Polygons_0();
		int32_t L_4;
		L_4 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_3, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// for (int i = 0; i < paths.Count; ++i)
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		// if (paths[i].Count != m_Polygons[i].Count)
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** L_5 = ___paths0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_6 = *((List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 **)L_5);
		int32_t L_7 = V_0;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_8;
		L_8 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_9;
		L_9 = List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_inline(L_8, /*hidden argument*/List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_10 = __this->get_m_Polygons_0();
		int32_t L_11 = V_0;
		List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * L_12;
		L_12 = List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mBB9C44D1846A0F8924D4F65B44C2D67D2E846E90_RuntimeMethod_var);
		int32_t L_13;
		L_13 = List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_inline(L_12, /*hidden argument*/List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_RuntimeMethod_var);
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// for (int i = 0; i < paths.Count; ++i)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0040:
	{
		// for (int i = 0; i < paths.Count; ++i)
		int32_t L_15 = V_0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** L_16 = ___paths0;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_17 = *((List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 **)L_16);
		int32_t L_18;
		L_18 = List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_inline(L_17, /*hidden argument*/List_1_get_Count_m7892FD3FBFE5EC9ACABAAD2B7B9D08D5AC98A95F_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PolygonSolution_StateChanged_m4F55923D1FF840A66DED34E00ABC163A4870674F_AdjustorThunk (RuntimeObject * __this, List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 ** ___paths0, const RuntimeMethod* method)
{
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA *>(__this + _offset);
	bool _returnValue;
	_returnValue = PolygonSolution_StateChanged_m4F55923D1FF840A66DED34E00ABC163A4870674F(_thisAdjusted, ___paths0, method);
	return _returnValue;
}
// System.Boolean Cinemachine.ConfinerOven/PolygonSolution::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PolygonSolution_get_IsEmpty_mCA5809BECBE372CE603DC4E4C7E5873309A50196 (PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmpty => m_Polygons == null;
		List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 * L_0 = __this->get_m_Polygons_0();
		return (bool)((((RuntimeObject*)(List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PolygonSolution_get_IsEmpty_mCA5809BECBE372CE603DC4E4C7E5873309A50196_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA *>(__this + _offset);
	bool _returnValue;
	_returnValue = PolygonSolution_get_IsEmpty_mCA5809BECBE372CE603DC4E4C7E5873309A50196(_thisAdjusted, method);
	return _returnValue;
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
// Conversion methods for marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled)
{
	marshaled.___Frequency_0 = unmarshaled.get_Frequency_0();
	marshaled.___Amplitude_1 = unmarshaled.get_Amplitude_1();
	marshaled.___Constant_2 = static_cast<int32_t>(unmarshaled.get_Constant_2());
}
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled)
{
	float unmarshaled_Frequency_temp_0 = 0.0f;
	unmarshaled_Frequency_temp_0 = marshaled.___Frequency_0;
	unmarshaled.set_Frequency_0(unmarshaled_Frequency_temp_0);
	float unmarshaled_Amplitude_temp_1 = 0.0f;
	unmarshaled_Amplitude_temp_1 = marshaled.___Amplitude_1;
	unmarshaled.set_Amplitude_1(unmarshaled_Amplitude_temp_1);
	bool unmarshaled_Constant_temp_2 = false;
	unmarshaled_Constant_temp_2 = static_cast<bool>(marshaled.___Constant_2);
	unmarshaled.set_Constant_2(unmarshaled_Constant_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled)
{
	marshaled.___Frequency_0 = unmarshaled.get_Frequency_0();
	marshaled.___Amplitude_1 = unmarshaled.get_Amplitude_1();
	marshaled.___Constant_2 = static_cast<int32_t>(unmarshaled.get_Constant_2());
}
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(const NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled, NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74& unmarshaled)
{
	float unmarshaled_Frequency_temp_0 = 0.0f;
	unmarshaled_Frequency_temp_0 = marshaled.___Frequency_0;
	unmarshaled.set_Frequency_0(unmarshaled_Frequency_temp_0);
	float unmarshaled_Amplitude_temp_1 = 0.0f;
	unmarshaled_Amplitude_temp_1 = marshaled.___Amplitude_1;
	unmarshaled.set_Amplitude_1(unmarshaled_Amplitude_temp_1);
	bool unmarshaled_Constant_temp_2 = false;
	unmarshaled_Constant_temp_2 = static_cast<bool>(marshaled.___Constant_2);
	unmarshaled.set_Constant_2(unmarshaled_Constant_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/NoiseParams
IL2CPP_EXTERN_C void NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshaled_com& marshaled)
{
}
// System.Single Cinemachine.NoiseSettings/NoiseParams::GetValueAt(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610 (NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float t = (Frequency * time) + timeOffset;
		float L_0 = __this->get_Frequency_0();
		float L_1 = ___time0;
		float L_2 = ___timeOffset1;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// if (Constant)
		bool L_3 = __this->get_Constant_2();
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// return  Mathf.Cos(t * 2 * Mathf.PI) * Amplitude * 0.5f;
		float L_4 = V_0;
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f))), (float)(3.14159274f))));
		float L_6 = __this->get_Amplitude_1();
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)(0.5f)));
	}

IL_0033:
	{
		// return (Mathf.PerlinNoise(t, 0f) - 0.5f) * Amplitude;
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519(L_7, (0.0f), /*hidden argument*/NULL);
		float L_9 = __this->get_Amplitude_1();
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_8, (float)(0.5f))), (float)L_9));
	}
}
IL2CPP_EXTERN_C  float NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610_AdjustorThunk (RuntimeObject * __this, float ___time0, float ___timeOffset1, const RuntimeMethod* method)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *>(__this + _offset);
	float _returnValue;
	_returnValue = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610(_thisAdjusted, ___time0, ___timeOffset1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_X_0(), marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_Y_1(), marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke(unmarshaled.get_Z_2(), marshaled.___Z_2);
}
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke_back(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_X_temp_0;
	memset((&unmarshaled_X_temp_0), 0, sizeof(unmarshaled_X_temp_0));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___X_0, unmarshaled_X_temp_0);
	unmarshaled.set_X_0(unmarshaled_X_temp_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Y_temp_1;
	memset((&unmarshaled_Y_temp_1), 0, sizeof(unmarshaled_Y_temp_1));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___Y_1, unmarshaled_Y_temp_1);
	unmarshaled.set_Y_1(unmarshaled_Y_temp_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Z_temp_2;
	memset((&unmarshaled_Z_temp_2), 0, sizeof(unmarshaled_Z_temp_2));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_back(marshaled.___Z_2, unmarshaled_Z_temp_2);
	unmarshaled.set_Z_2(unmarshaled_Z_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_pinvoke_cleanup(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_pinvoke& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_pinvoke_cleanup(marshaled.___Z_2);
}






// Conversion methods for marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_X_0(), marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_Y_1(), marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com(unmarshaled.get_Z_2(), marshaled.___Z_2);
}
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com_back(const TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled, TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9& unmarshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_X_temp_0;
	memset((&unmarshaled_X_temp_0), 0, sizeof(unmarshaled_X_temp_0));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___X_0, unmarshaled_X_temp_0);
	unmarshaled.set_X_0(unmarshaled_X_temp_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Y_temp_1;
	memset((&unmarshaled_Y_temp_1), 0, sizeof(unmarshaled_Y_temp_1));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___Y_1, unmarshaled_Y_temp_1);
	unmarshaled.set_Y_1(unmarshaled_Y_temp_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74  unmarshaled_Z_temp_2;
	memset((&unmarshaled_Z_temp_2), 0, sizeof(unmarshaled_Z_temp_2));
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_back(marshaled.___Z_2, unmarshaled_Z_temp_2);
	unmarshaled.set_Z_2(unmarshaled_Z_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.NoiseSettings/TransformNoiseParams
IL2CPP_EXTERN_C void TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshal_com_cleanup(TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9_marshaled_com& marshaled)
{
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___X_0);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___Y_1);
	NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74_marshal_com_cleanup(marshaled.___Z_2);
}
// UnityEngine.Vector3 Cinemachine.NoiseSettings/TransformNoiseParams::GetValueAt(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD (TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method)
{
	{
		// return new Vector3(
		//     X.GetValueAt(time, timeOffsets.x),
		//     Y.GetValueAt(time, timeOffsets.y),
		//     Z.GetValueAt(time, timeOffsets.z));
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_0 = __this->get_address_of_X_0();
		float L_1 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___timeOffsets1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_0, L_1, L_3, /*hidden argument*/NULL);
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_5 = __this->get_address_of_Y_1();
		float L_6 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___timeOffsets1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_5, L_6, L_8, /*hidden argument*/NULL);
		NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 * L_10 = __this->get_address_of_Z_2();
		float L_11 = ___time0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___timeOffsets1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = NoiseParams_GetValueAt_mA2C1E6FA7AE9AB3FC9A51024E0D474E5C8596610((NoiseParams_tCD06F575D1A3AB194959BA734930D7F167F7FC74 *)L_10, L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD_AdjustorThunk (RuntimeObject * __this, float ___time0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___timeOffsets1, const RuntimeMethod* method)
{
	TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformNoiseParams_t289B5F998709F980FED31FB99ADD97DDC3BFEAD9 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = TransformNoiseParams_GetValueAt_m89FDF2289D147DC0B617426E76A78402474770CD(_thisAdjusted, ___time0, ___timeOffsets1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Cinemachine.TargetPositionCache/CacheCurve::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CacheCurve_get_Count_m7BE1AE49E310A7185E449EF27D9715404DB58F4D (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count => m_Cache.Count;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___startTime0, float ___endTime1, float ___stepSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CacheCurve(float startTime, float endTime, float stepSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// StepSize = stepSize;
		float L_0 = ___stepSize2;
		__this->set_StepSize_1(L_0);
		// StartTime = startTime;
		float L_1 = ___startTime0;
		__this->set_StartTime_0(L_1);
		// m_Cache = new List<Item>(Mathf.CeilToInt((StepSize * 0.5f + endTime - startTime) / StepSize));
		float L_2 = __this->get_StepSize_1();
		float L_3 = ___endTime1;
		float L_4 = ___startTime0;
		float L_5 = __this->get_StepSize_1();
		int32_t L_6;
		L_6 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))), (float)L_3)), (float)L_4))/(float)L_5)), /*hidden argument*/NULL);
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_7 = (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 *)il2cpp_codegen_object_new(List_1_tC1537C8DF457B7721EAA10465942441865A779E5_il2cpp_TypeInfo_var);
		List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94(L_7, L_6, /*hidden argument*/List_1__ctor_m0A87900FEA9DBA7FC77FFDD29AA466E938168B94_RuntimeMethod_var);
		__this->set_m_Cache_2(L_7);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::Add(Cinemachine.TargetPositionCache/CacheCurve/Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Add(Item item) => m_Cache.Add(item);
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_1 = ___item0;
		List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA(L_0, L_1, /*hidden argument*/List_1_Add_m40E1D6006AE59B2B9767A5C5D80AF3385DAE05CA_RuntimeMethod_var);
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheCurve::AddUntil(Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___item0, float ___time1, bool ___isCut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// var prevIndex = m_Cache.Count - 1;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// var prevTime = prevIndex * StepSize;
		int32_t L_2 = V_0;
		float L_3 = __this->get_StepSize_1();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3));
		// var timeRange = time - StartTime - prevTime;
		float L_4 = ___time1;
		float L_5 = __this->get_StartTime_0();
		float L_6 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), (float)L_6));
		// if (isCut)
		bool L_7 = ___isCut2;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_8 = __this->get_StepSize_1();
		V_3 = L_8;
		goto IL_003f;
	}

IL_002f:
	{
		// Add(item);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_9 = ___item0;
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(__this, L_9, /*hidden argument*/NULL);
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_10 = V_3;
		float L_11 = __this->get_StepSize_1();
		V_3 = ((float)il2cpp_codegen_add((float)L_10, (float)L_11));
	}

IL_003f:
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_12 = V_3;
		float L_13 = V_2;
		if ((((float)L_12) <= ((float)L_13)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_0044:
	{
		// var prev = m_Cache[prevIndex];
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_14 = __this->get_m_Cache_2();
		int32_t L_15 = V_0;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_16;
		L_16 = List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var);
		V_4 = L_16;
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_17 = __this->get_StepSize_1();
		V_5 = L_17;
		goto IL_0079;
	}

IL_005c:
	{
		// Add(Item.Lerp(prev, item, t / timeRange));
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_18 = V_4;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_19 = ___item0;
		float L_20 = V_5;
		float L_21 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_22;
		L_22 = Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC(L_18, L_19, ((float)((float)L_20/(float)L_21)), /*hidden argument*/NULL);
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(__this, L_22, /*hidden argument*/NULL);
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_23 = V_5;
		float L_24 = __this->get_StepSize_1();
		V_5 = ((float)il2cpp_codegen_add((float)L_23, (float)L_24));
	}

IL_0079:
	{
		// for (float t = StepSize; t <= timeRange; t += StepSize)
		float L_25 = V_5;
		float L_26 = V_2;
		if ((((float)L_25) <= ((float)L_26)))
		{
			goto IL_005c;
		}
	}
	{
		// }
		return;
	}
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  CacheCurve_Evaluate_m9D2DF73C6C1AF43179910C16C2249A6205429938 (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var numItems = m_Cache.Count;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_0 = __this->get_m_Cache_2();
		int32_t L_1;
		L_1 = List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_inline(L_0, /*hidden argument*/List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_RuntimeMethod_var);
		V_0 = L_1;
		// if (numItems == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return Item.Empty;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_3;
		L_3 = Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3(/*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// var s = time - StartTime;
		float L_4 = ___time0;
		float L_5 = __this->get_StartTime_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		// var index = Mathf.Clamp(Mathf.FloorToInt(s / StepSize), 0, numItems - 1);
		float L_6 = V_1;
		float L_7 = __this->get_StepSize_1();
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_8, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_10;
		// var v = m_Cache[index];
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_11 = __this->get_m_Cache_2();
		int32_t L_12 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_13;
		L_13 = List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var);
		V_3 = L_13;
		// if (index == numItems - 1)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1))))))
		{
			goto IL_004a;
		}
	}
	{
		// return v;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_16 = V_3;
		return L_16;
	}

IL_004a:
	{
		// return Item.Lerp(v, m_Cache[index + 1], (s - index * StepSize) / StepSize);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_17 = V_3;
		List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * L_18 = __this->get_m_Cache_2();
		int32_t L_19 = V_2;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_20;
		L_20 = List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_inline(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_RuntimeMethod_var);
		float L_21 = V_1;
		int32_t L_22 = V_2;
		float L_23 = __this->get_StepSize_1();
		float L_24 = __this->get_StepSize_1();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_25;
		L_25 = Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC(L_17, L_20, ((float)((float)((float)il2cpp_codegen_subtract((float)L_21, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_22)), (float)L_23))))/(float)L_24)), /*hidden argument*/NULL);
		return L_25;
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
// System.Void Cinemachine.TargetPositionCache/CacheEntry::AddRawItem(System.Single,System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry_AddRawItem_m56ADB9D380E62201025B3F4B752CDD4E90970B49 (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, float ___time0, bool ___isCut1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// var endTime = time - CacheStepSize;
		float L_0 = ___time0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)(0.0166666675f)));
		// var maxItem = RawItems.Count - 1;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_1 = __this->get_RawItems_1();
		int32_t L_2;
		L_2 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_1, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// var lastToKeep = maxItem;
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_001e;
	}

IL_001a:
	{
		// --lastToKeep;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// while (lastToKeep >= 0 && RawItems[lastToKeep].Time > endTime)
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_6 = __this->get_RawItems_1();
		int32_t L_7 = V_2;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_8;
		L_8 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		float L_9 = L_8.get_Time_0();
		float L_10 = V_0;
		if ((((float)L_9) > ((float)L_10)))
		{
			goto IL_001a;
		}
	}

IL_0036:
	{
		// if (lastToKeep == maxItem)
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_008a;
		}
	}
	{
		// RawItems.Add(new RecordingItem
		// {
		//     Time = time,
		//     IsCut = isCut,
		//     Item = new CacheCurve.Item { Pos = target.position, Rot = target.rotation }
		// });
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_13 = __this->get_RawItems_1();
		il2cpp_codegen_initobj((&V_3), sizeof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB ));
		float L_14 = ___time0;
		(&V_3)->set_Time_0(L_14);
		bool L_15 = ___isCut1;
		(&V_3)->set_IsCut_1(L_15);
		il2cpp_codegen_initobj((&V_4), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = ___target2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		(&V_4)->set_Pos_0(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = ___target2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		(&V_4)->set_Rot_1(L_19);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_20 = V_4;
		(&V_3)->set_Item_2(L_20);
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_21 = V_3;
		List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A(L_13, L_21, /*hidden argument*/List_1_Add_mF4C2202F7EB8BB70C639F97C808A2F22720D214A_RuntimeMethod_var);
		// }
		return;
	}

IL_008a:
	{
		// var trimStart = lastToKeep + 2;
		int32_t L_22 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2));
		// if (trimStart <= maxItem)
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00af;
		}
	}
	{
		// RawItems.RemoveRange(trimStart, RawItems.Count - trimStart);
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_25 = __this->get_RawItems_1();
		int32_t L_26 = V_5;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_27 = __this->get_RawItems_1();
		int32_t L_28;
		L_28 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_27, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		int32_t L_29 = V_5;
		List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F(L_25, L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), /*hidden argument*/List_1_RemoveRange_m56838B2A12DB31FC32841390BF3570FB1FF85C7F_RuntimeMethod_var);
	}

IL_00af:
	{
		// RawItems[lastToKeep + 1] = new RecordingItem
		// {
		//     Time = time,
		//     IsCut = isCut,
		//     Item = new CacheCurve.Item { Pos = target.position, Rot = target.rotation }
		// };
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_30 = __this->get_RawItems_1();
		int32_t L_31 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB ));
		float L_32 = ___time0;
		(&V_3)->set_Time_0(L_32);
		bool L_33 = ___isCut1;
		(&V_3)->set_IsCut_1(L_33);
		il2cpp_codegen_initobj((&V_4), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = ___target2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		(&V_4)->set_Pos_0(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = ___target2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_36, /*hidden argument*/NULL);
		(&V_4)->set_Rot_1(L_37);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_38 = V_4;
		(&V_3)->set_Item_2(L_38);
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_39 = V_3;
		List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), L_39, /*hidden argument*/List_1_set_Item_m73C67A9427CEE72326745B6EF67067FC23506D8A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheEntry::CreateCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry_CreateCurves_m3C30DAF286804CB56B42102406ACE0BF891292EA (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B8_0 = NULL;
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B7_0 = NULL;
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * G_B9_1 = NULL;
	{
		// int maxItem = RawItems.Count - 1;
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_0 = __this->get_RawItems_1();
		int32_t L_1;
		L_1 = List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_inline(L_0, /*hidden argument*/List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// float startTime = maxItem < 0 ? 0 : RawItems[0].Time;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_3 = __this->get_RawItems_1();
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_4;
		L_4 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_3, 0, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		float L_5 = L_4.get_Time_0();
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = (0.0f);
	}

IL_002a:
	{
		V_1 = G_B3_0;
		// float endTime = maxItem < 0 ? 0 : RawItems[maxItem].Time;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_7 = __this->get_RawItems_1();
		int32_t L_8 = V_0;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_9;
		L_9 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		float L_10 = L_9.get_Time_0();
		G_B6_0 = L_10;
		goto IL_0047;
	}

IL_0042:
	{
		G_B6_0 = (0.0f);
	}

IL_0047:
	{
		V_2 = G_B6_0;
		// Curve = new CacheCurve(startTime, endTime, CacheStepSize);
		float L_11 = V_1;
		float L_12 = V_2;
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_13 = (CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 *)il2cpp_codegen_object_new(CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10_il2cpp_TypeInfo_var);
		CacheCurve__ctor_m9126DDC2FF162438BEF34E60AD524A2BD74E09D8(L_13, L_11, L_12, (0.0166666675f), /*hidden argument*/NULL);
		__this->set_Curve_0(L_13);
		// Curve.Add(maxItem < 0 ? CacheCurve.Item.Empty : RawItems[0].Item);
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_14 = __this->get_Curve_0();
		int32_t L_15 = V_0;
		G_B7_0 = L_14;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			G_B8_0 = L_14;
			goto IL_0077;
		}
	}
	{
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_16 = __this->get_RawItems_1();
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_17;
		L_17 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_16, 0, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_18 = L_17.get_Item_2();
		G_B9_0 = L_18;
		G_B9_1 = G_B7_0;
		goto IL_007c;
	}

IL_0077:
	{
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_19;
		L_19 = Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3(/*hidden argument*/NULL);
		G_B9_0 = L_19;
		G_B9_1 = G_B8_0;
	}

IL_007c:
	{
		CacheCurve_Add_m325C65AD39FDFBC91F4D5624B8BF7C5560B36DFF(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= maxItem; ++i)
		V_3 = 1;
		goto IL_00c7;
	}

IL_0085:
	{
		// Curve.AddUntil(RawItems[i].Item, RawItems[i].Time, RawItems[i].IsCut);
		CacheCurve_t330A58DA61E0392D900E8E9420FCC37F1B425C10 * L_20 = __this->get_Curve_0();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_21 = __this->get_RawItems_1();
		int32_t L_22 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_23;
		L_23 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_24 = L_23.get_Item_2();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_25 = __this->get_RawItems_1();
		int32_t L_26 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_27;
		L_27 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		float L_28 = L_27.get_Time_0();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_29 = __this->get_RawItems_1();
		int32_t L_30 = V_3;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_31;
		L_31 = List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_RuntimeMethod_var);
		bool L_32 = L_31.get_IsCut_1();
		CacheCurve_AddUntil_m3613245687496AC0DC18F1EB9A6328E3F8AA203F(L_20, L_24, L_28, L_32, /*hidden argument*/NULL);
		// for (int i = 1; i <= maxItem; ++i)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 1; i <= maxItem; ++i)
		int32_t L_34 = V_3;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_0085;
		}
	}
	{
		// RawItems.Clear();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_36 = __this->get_RawItems_1();
		List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6(L_36, /*hidden argument*/List_1_Clear_mFE47C3DDAD2ADBAC7AB3AB8E4F1A9B78CEBF0DE6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.TargetPositionCache/CacheEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheEntry__ctor_mF5B26181E6FBFC00701BC6A362BEA3416815FD2B (CacheEntry_tC683B96A4235FEB735629D760FF9E5954610DAC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<RecordingItem> RawItems = new List<RecordingItem>();
		List_1_tAED568015081230FCEC357C56CB10520C53903F7 * L_0 = (List_1_tAED568015081230FCEC357C56CB10520C53903F7 *)il2cpp_codegen_object_new(List_1_tAED568015081230FCEC357C56CB10520C53903F7_il2cpp_TypeInfo_var);
		List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334(L_0, /*hidden argument*/List_1__ctor_m786B3FBB5FFA2F06FB278182CEA118E62A2DA334_RuntimeMethod_var);
		__this->set_RawItems_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0 (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmpty => End < Start;
		float L_0 = __this->get_End_1();
		float L_1 = __this->get_Start_0();
		return (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_get_IsEmpty_m0EBE2CFDA395E03444770956D336B17D2CC676D0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Cinemachine.TargetPositionCache/TimeRange::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// public bool Contains(float time) => time >= Start && time <= End;
		float L_0 = ___time0;
		float L_1 = __this->get_Start_0();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		float L_2 = ___time0;
		float L_3 = __this->get_End_1();
		return (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	bool _returnValue;
	_returnValue = TimeRange_Contains_m2FE15B3333F2883C0580220A5D3FDE954533A8FA(_thisAdjusted, ___time0, method);
	return _returnValue;
}
// Cinemachine.TargetPositionCache/TimeRange Cinemachine.TargetPositionCache/TimeRange::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  TimeRange_get_Empty_m273B20F7E14B9A0670F209E17316EC4EBDD7D053 (const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// { get => new TimeRange { Start = float.MaxValue, End = float.MinValue }; }
		il2cpp_codegen_initobj((&V_0), sizeof(TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C ));
		(&V_0)->set_Start_0(((std::numeric_limits<float>::max)()));
		(&V_0)->set_End_1((-(std::numeric_limits<float>::max)()));
		TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C  L_0 = V_0;
		return L_0;
	}
}
// System.Void Cinemachine.TargetPositionCache/TimeRange::Include(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E (TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// Start = Mathf.Min(Start, time);
		float L_0 = __this->get_Start_0();
		float L_1 = ___time0;
		float L_2;
		L_2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, L_1, /*hidden argument*/NULL);
		__this->set_Start_0(L_2);
		// End = Mathf.Max(End, time);
		float L_3 = __this->get_End_1();
		float L_4 = ___time0;
		float L_5;
		L_5 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_3, L_4, /*hidden argument*/NULL);
		__this->set_End_1(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E_AdjustorThunk (RuntimeObject * __this, float ___time0, const RuntimeMethod* method)
{
	TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeRange_t7E98E43CB32F29AB2FDD468EF65B68E0E7A27D8C *>(__this + _offset);
	TimeRange_Include_m98B368672B3FAD811027079C3EA8236914D3729E(_thisAdjusted, ___time0, method);
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
// Cinemachine.UpdateTracker/UpdateClock Cinemachine.UpdateTracker/UpdateStatus::get_PreferredUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::set_PreferredUpdate(Cinemachine.UpdateTracker/UpdateClock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::.ctor(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus__ctor_mDEAE275BFECF3D63AE2A93D74EABACD19FA21724 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos1, const RuntimeMethod* method)
{
	{
		// public UpdateStatus(int currentFrame, Matrix4x4 pos)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// windowStart = currentFrame;
		int32_t L_0 = ___currentFrame0;
		__this->set_windowStart_1(L_0);
		// lastFrameUpdated = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_lastFrameUpdated_5(L_1);
		// PreferredUpdate = UpdateClock.Late;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, 1, /*hidden argument*/NULL);
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___pos1;
		__this->set_lastPos_6(L_2);
		// }
		return;
	}
}
// System.Void Cinemachine.UpdateTracker/UpdateStatus::OnUpdate(System.Int32,Cinemachine.UpdateTracker/UpdateClock,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateStatus_OnUpdate_m22DED61941774ECFB0119BAAE3BD2C164D39D521 (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___currentFrame0, int32_t ___currentClock1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___pos2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B15_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B16_1 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B18_0 = NULL;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * G_B19_1 = NULL;
	{
		// if (lastPos == pos)
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get_lastPos_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___pos2;
		bool L_2;
		L_2 = Matrix4x4_op_Equality_mFCC23863C7DB90A5FEFA5F1D9ECD511D21E8C846(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (currentClock == UpdateClock.Late)
		int32_t L_3 = ___currentClock1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ++numWindowLateUpdateMoves;
		int32_t L_4 = __this->get_numWindowLateUpdateMoves_2();
		__this->set_numWindowLateUpdateMoves_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		goto IL_003a;
	}

IL_0023:
	{
		// else if (lastFrameUpdated != currentFrame) // only count 1 per rendered frame
		int32_t L_5 = __this->get_lastFrameUpdated_5();
		int32_t L_6 = ___currentFrame0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		// ++numWindowFixedUpdateMoves;
		int32_t L_7 = __this->get_numWindowFixedUpdateMoves_3();
		__this->set_numWindowFixedUpdateMoves_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_003a:
	{
		// lastPos = pos;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___pos2;
		__this->set_lastPos_6(L_8);
		// if (numWindowFixedUpdateMoves > 3 && numWindowLateUpdateMoves < numWindowFixedUpdateMoves / 3)
		int32_t L_9 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_9) <= ((int32_t)3)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_10 = __this->get_numWindowLateUpdateMoves_2();
		int32_t L_11 = __this->get_numWindowFixedUpdateMoves_3();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)((int32_t)L_11/(int32_t)3)))))
		{
			goto IL_005e;
		}
	}
	{
		// choice = UpdateClock.Fixed;
		V_0 = 0;
		goto IL_0060;
	}

IL_005e:
	{
		// choice =  UpdateClock.Late;
		V_0 = 1;
	}

IL_0060:
	{
		// if (numWindows == 0)
		int32_t L_12 = __this->get_numWindows_4();
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_13 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_13, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (windowStart + kWindowSize <= currentFrame)
		int32_t L_14 = __this->get_windowStart_1();
		int32_t L_15 = ___currentFrame0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)30)))) > ((int32_t)L_15)))
		{
			goto IL_00bc;
		}
	}
	{
		// PreferredUpdate = choice;
		int32_t L_16 = V_0;
		UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline(__this, L_16, /*hidden argument*/NULL);
		// ++numWindows;
		int32_t L_17 = __this->get_numWindows_4();
		__this->set_numWindows_4(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// windowStart = currentFrame;
		int32_t L_18 = ___currentFrame0;
		__this->set_windowStart_1(L_18);
		// numWindowLateUpdateMoves = (PreferredUpdate == UpdateClock.Late) ? 1 : 0;
		int32_t L_19;
		L_19 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B14_0 = __this;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			G_B15_0 = __this;
			goto IL_00a4;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_00a5:
	{
		G_B16_1->set_numWindowLateUpdateMoves_2(G_B16_0);
		// numWindowFixedUpdateMoves = (PreferredUpdate == UpdateClock.Fixed) ? 1 : 0;
		int32_t L_20;
		L_20 = UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline(__this, /*hidden argument*/NULL);
		G_B17_0 = __this;
		if (!L_20)
		{
			G_B18_0 = __this;
			goto IL_00b6;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
	}

IL_00b7:
	{
		G_B19_1->set_numWindowFixedUpdateMoves_3(G_B19_0);
	}

IL_00bc:
	{
		// }
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
// System.Void Cinemachine.CinemachineTriggerAction/ActionSettings/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m1B0E4D0D8DD5D925A7B5F502DECF073FBA41C266 (TriggerEvent_tFDDCEEC758AF8ED7D820A3DBC13992996162143B * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::Lerp(Cinemachine.TargetPositionCache/CacheCurve/Item,Cinemachine.TargetPositionCache/CacheCurve/Item,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_Lerp_m729C3CBFCA75B42CC2799D491DEF4C17C53602DC (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___a0, Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  ___b1, float ___t2, const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Item
		// {
		//     Pos = Vector3.LerpUnclamped(a.Pos, b.Pos, t),
		//     Rot = Quaternion.SlerpUnclamped(a.Rot, b.Rot, t)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_Pos_0();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_Pos_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline(L_1, L_3, L_4, /*hidden argument*/NULL);
		(&V_0)->set_Pos_0(L_5);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_6 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_Rot_1();
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_8 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_Rot_1();
		float L_10 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_7, L_9, L_10, /*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_11);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_12 = V_0;
		return L_12;
	}
}
// Cinemachine.TargetPositionCache/CacheCurve/Item Cinemachine.TargetPositionCache/CacheCurve/Item::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  Item_get_Empty_m2209C3BE792AABD138C9A597718D01D2FF089CB3 (const RuntimeMethod* method)
{
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Item Empty => new Item { Rot = Quaternion.identity };
		il2cpp_codegen_initobj((&V_0), sizeof(Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		(&V_0)->set_Rot_1(L_0);
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_1 = V_0;
		return L_1;
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
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_pinvoke_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
	marshaled.___Time_0 = unmarshaled.get_Time_0();
	marshaled.___IsCut_1 = static_cast<int32_t>(unmarshaled.get_IsCut_1());
	marshaled.___Item_2 = unmarshaled.get_Item_2();
}
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_back(const RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled, RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB& unmarshaled)
{
	float unmarshaled_Time_temp_0 = 0.0f;
	unmarshaled_Time_temp_0 = marshaled.___Time_0;
	unmarshaled.set_Time_0(unmarshaled_Time_temp_0);
	bool unmarshaled_IsCut_temp_1 = false;
	unmarshaled_IsCut_temp_1 = static_cast<bool>(marshaled.___IsCut_1);
	unmarshaled.set_IsCut_1(unmarshaled_IsCut_temp_1);
	Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  unmarshaled_Item_temp_2;
	memset((&unmarshaled_Item_temp_2), 0, sizeof(unmarshaled_Item_temp_2));
	unmarshaled_Item_temp_2 = marshaled.___Item_2;
	unmarshaled.set_Item_2(unmarshaled_Item_temp_2);
}
// Conversion method for clean up from marshalling of: Cinemachine.TargetPositionCache/CacheEntry/RecordingItem
IL2CPP_EXTERN_C void RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshal_com_cleanup(RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfinerOven_get_State_m05EB332DF4BD4F147E273BA2674EABE440F7A454_inline (ConfinerOven_t156F34A1B24E4552EE29793DF0B0EA156CA79ECF * __this, const RuntimeMethod* method)
{
	{
		// public BakingState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m56656A6C1F3F6EDABE61AC85E1BA8C638B470310_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, const RuntimeMethod* method)
{
	{
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		int32_t L_0 = __this->get_m_Priority_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_Priority_9(L_0);
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AspectStretcher_get_Aspect_m5F122CB5941347F158A1AAC93BA287C20EE6A5CB_inline (AspectStretcher_t2E1B17D2244D88C08DE4ADC25C6C5469DC54022C * __this, const RuntimeMethod* method)
{
	{
		// public float Aspect { get; }
		float L_0 = __this->get_U3CAspectU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BakedSolution_get_FrustumHeight_mD53A0B6A4B8FA2F76504CF1A4D2F8429E47AC76B_inline (BakedSolution_t635D192AE289980EA2CB6A1A2889B8357A1D817C * __this, const RuntimeMethod* method)
{
	{
		// public float FrustumHeight { get; }
		float L_0 = __this->get_U3CFrustumHeightU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateStatus_set_PreferredUpdate_m0D163727BB4C16214C9A22D74656ED09CEF6C929_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPreferredUpdateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UpdateStatus_get_PreferredUpdate_mF6224BC9B52B95B06ECD82F3CCDAC7B0994B9B6F_inline (UpdateStatus_t6D890F291503BB7E5B1904375EC9297AA60A5E0B * __this, const RuntimeMethod* method)
{
	{
		// public UpdateClock PreferredUpdate { get; private set; }
		int32_t L_0 = __this->get_U3CPreferredUpdateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		float L_6 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___a0;
		float L_12 = L_11.get_y_3();
		float L_13 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___a0;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___b1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___a0;
		float L_19 = L_18.get_z_4();
		float L_20 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1296B5ABBD5D5EB893136BF8DAC16AA6262354F6_gshared_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  List_1_get_Item_m60D8BA5C345C3804D75F94B9F81A59D95C61910E_gshared_inline (List_1_tC143170EE25943366B2DA9D8910EC3E385E53814 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B* L_2 = (IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B*)__this->get__items_1();
		int32_t L_3 = ___index0;
		IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B*)L_2, (int32_t)L_3);
		return (IntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE8F7A4717F2AFBB314903A66709DBC4E3A6299D4_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  List_1_get_Item_m588295567556A4B26FAE500F63608188BF09A64C_gshared_inline (List_1_tC1537C8DF457B7721EAA10465942441865A779E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8* L_2 = (ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8*)L_2, (int32_t)L_3);
		return (Item_tD358B647F06D81E0559DB72CB866D99EF2538A6B )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9514D8319A9C37531733E4D2D7B2A5E920822635_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  List_1_get_Item_mA95FFB9EDC14B335488F4DB6EF5553ED59F5BF5F_gshared_inline (List_1_tAED568015081230FCEC357C56CB10520C53903F7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5* L_2 = (RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5*)L_2, (int32_t)L_3);
		return (RecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB )L_4;
	}
}
