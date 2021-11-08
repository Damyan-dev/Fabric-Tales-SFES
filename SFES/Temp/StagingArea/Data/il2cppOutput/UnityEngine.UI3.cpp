#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t7BDDF85417DBC1A0C4817BF9F1D054C9F7128876;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_tCE3CE3D7F67C20FF5576ED2A6E74518A0756E2DE;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t70CCE75ACEB3CF2576D80B7E19A2E16DFF786640;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t47E725A87E8DA38B74327401954A54493CC3251E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// UnityEngine.Pool.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct ObjectPool_1_t795DAE0BCB36797AD504B81EEA02A75D17C0C807;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_tBEBACD97616BCB10B35EC8D20237C6EE1D61B96C;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t0AABBBAF16CED490518BA49ED7BC02D9A9475166;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE;
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.EventSystems.PointerInputModule/ButtonState[]
struct ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UIElements.BaseRuntimePanel
struct BaseRuntimePanel_t74D3C6BB15505935A817612DF7E4BF5C1207BF7C;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UIElements.PanelEventHandler
struct PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1;
// UnityEngine.UI.Dropdown/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13;
// UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.EventSystems.EventSystem/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t943DC5199E19E7C5EB9F737F0DD84698E82D51BE;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t9C594CD634607709CF020BE9C8A469E1C9033D36;
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23;
// UnityEngine.UI.GraphicRaycaster/<>c
struct U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010;
// UnityEngine.UI.InputField/<CaretBlink>d__166
struct U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11;
// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188
struct U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE;
// UnityEngine.UI.LayoutRebuilder/<>c
struct U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE;
// UnityEngine.UI.LayoutUtility/<>c
struct U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UIElements.PanelEventHandler/PointerEvent
struct PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1;
// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C;
// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34;
// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29;
// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F;
// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E;
// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// UnityEngine.UI.ToggleGroup/<>c
struct U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionPool_2_t113735429CC986DF50E70D1331655AC8C5545231_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionPool_2_tA61CF193D9DED5D2CB4520A933D67D8D41D2EA38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionPool_2_tC542CE473060920E8CD7BD47DC12D96653555971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionPool_2_tD05CA33894395ED1CB5C7133E8CE63B353365CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_t434CD34173AC88CCFC20D78AE2D6202648ABC8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralFDDA5A71603115BE1B96859DB981B148FC40333D;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Get_m8F5F489E04ED362A04C4337E6CDCB89095B201F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Get_mA820604000360651F288513C7C03F3122F94A181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Release_m1264145199AD7659458DED8120EB81FEF88C7AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Release_m6E524A13FCB1414868BEB569D84BF67AF03E4FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m934CEB8BFEEE4CBB51892A6E6DF8349C0CEC1568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF1214425D58EB915621D1DC66C969EF8F6A285F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2C561949211613B6EB1147E314EC59F5F5D06FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m69ED5B756629D6CD329C68F5F7E1D1595ACDE013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaretBlinkU3Ed__166_System_Collections_IEnumerator_Reset_mAFFF6F45F97F73F90B3338C1C512BE5B03C17D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClickRepeatU3Ed__58_System_Collections_IEnumerator_Reset_m91332A8DFD75C0F222997DD4D8573EA9AAC27F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDestroyDropdownListU3Ed__75_System_Collections_IEnumerator_Reset_mE42D3D74A267F697DA8EB36F64E317621923C98D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedSetDirtyU3Ed__56_System_Collections_IEnumerator_Reset_mD3851B6C7275A35789E989AAFB19866B0240BEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMouseDragOutsideRectU3Ed__188_System_Collections_IEnumerator_Reset_m8312ED8C486BC30D97217F5133028D0A841F6CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnFinishSubmitU3Ed__9_System_Collections_IEnumerator_Reset_m8C34DF18B3EE52EC98CAECD371811E60CCA7BC1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m62F724813F4091B75FBC3A02E7C89A0DB7022DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VertexHelper_FillMesh_m69ADAB814A243F7F5578BC07086F373B85A34269_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____items_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____items_1)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E, ____items_1)); }
	inline ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* get__items_1() const { return ____items_1; }
	inline ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E_StaticFields, ____emptyArray_5)); }
	inline ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonStateU5BU5D_t4D972D1454C06AF73EDF00CA052E89F89BC9AE6F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.LayoutRebuilder::m_ToRebuild
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ToRebuild_0;
	// System.Int32 UnityEngine.UI.LayoutRebuilder::m_CachedHashFromTransform
	int32_t ___m_CachedHashFromTransform_1;

public:
	inline static int32_t get_offset_of_m_ToRebuild_0() { return static_cast<int32_t>(offsetof(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585, ___m_ToRebuild_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ToRebuild_0() const { return ___m_ToRebuild_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ToRebuild_0() { return &___m_ToRebuild_0; }
	inline void set_m_ToRebuild_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ToRebuild_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToRebuild_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedHashFromTransform_1() { return static_cast<int32_t>(offsetof(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585, ___m_CachedHashFromTransform_1)); }
	inline int32_t get_m_CachedHashFromTransform_1() const { return ___m_CachedHashFromTransform_1; }
	inline int32_t* get_address_of_m_CachedHashFromTransform_1() { return &___m_CachedHashFromTransform_1; }
	inline void set_m_CachedHashFromTransform_1(int32_t value)
	{
		___m_CachedHashFromTransform_1 = value;
	}
};

struct LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_StaticFields
{
public:
	// UnityEngine.Pool.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::s_Rebuilders
	ObjectPool_1_t795DAE0BCB36797AD504B81EEA02A75D17C0C807 * ___s_Rebuilders_2;

public:
	inline static int32_t get_offset_of_s_Rebuilders_2() { return static_cast<int32_t>(offsetof(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_StaticFields, ___s_Rebuilders_2)); }
	inline ObjectPool_1_t795DAE0BCB36797AD504B81EEA02A75D17C0C807 * get_s_Rebuilders_2() const { return ___s_Rebuilders_2; }
	inline ObjectPool_1_t795DAE0BCB36797AD504B81EEA02A75D17C0C807 ** get_address_of_s_Rebuilders_2() { return &___s_Rebuilders_2; }
	inline void set_s_Rebuilders_2(ObjectPool_1_t795DAE0BCB36797AD504B81EEA02A75D17C0C807 * value)
	{
		___s_Rebuilders_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Rebuilders_2), (void*)value);
	}
};


// UnityEngine.UIElements.PointerId
struct PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1  : public RuntimeObject
{
public:

public:
};

struct PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields
{
public:
	// System.Int32 UnityEngine.UIElements.PointerId::maxPointers
	int32_t ___maxPointers_0;
	// System.Int32 UnityEngine.UIElements.PointerId::invalidPointerId
	int32_t ___invalidPointerId_1;
	// System.Int32 UnityEngine.UIElements.PointerId::mousePointerId
	int32_t ___mousePointerId_2;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerIdBase
	int32_t ___touchPointerIdBase_3;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerCount
	int32_t ___touchPointerCount_4;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerIdBase
	int32_t ___penPointerIdBase_5;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerCount
	int32_t ___penPointerCount_6;
	// System.Int32[] UnityEngine.UIElements.PointerId::hoveringPointers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hoveringPointers_7;

public:
	inline static int32_t get_offset_of_maxPointers_0() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___maxPointers_0)); }
	inline int32_t get_maxPointers_0() const { return ___maxPointers_0; }
	inline int32_t* get_address_of_maxPointers_0() { return &___maxPointers_0; }
	inline void set_maxPointers_0(int32_t value)
	{
		___maxPointers_0 = value;
	}

	inline static int32_t get_offset_of_invalidPointerId_1() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___invalidPointerId_1)); }
	inline int32_t get_invalidPointerId_1() const { return ___invalidPointerId_1; }
	inline int32_t* get_address_of_invalidPointerId_1() { return &___invalidPointerId_1; }
	inline void set_invalidPointerId_1(int32_t value)
	{
		___invalidPointerId_1 = value;
	}

	inline static int32_t get_offset_of_mousePointerId_2() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___mousePointerId_2)); }
	inline int32_t get_mousePointerId_2() const { return ___mousePointerId_2; }
	inline int32_t* get_address_of_mousePointerId_2() { return &___mousePointerId_2; }
	inline void set_mousePointerId_2(int32_t value)
	{
		___mousePointerId_2 = value;
	}

	inline static int32_t get_offset_of_touchPointerIdBase_3() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___touchPointerIdBase_3)); }
	inline int32_t get_touchPointerIdBase_3() const { return ___touchPointerIdBase_3; }
	inline int32_t* get_address_of_touchPointerIdBase_3() { return &___touchPointerIdBase_3; }
	inline void set_touchPointerIdBase_3(int32_t value)
	{
		___touchPointerIdBase_3 = value;
	}

	inline static int32_t get_offset_of_touchPointerCount_4() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___touchPointerCount_4)); }
	inline int32_t get_touchPointerCount_4() const { return ___touchPointerCount_4; }
	inline int32_t* get_address_of_touchPointerCount_4() { return &___touchPointerCount_4; }
	inline void set_touchPointerCount_4(int32_t value)
	{
		___touchPointerCount_4 = value;
	}

	inline static int32_t get_offset_of_penPointerIdBase_5() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___penPointerIdBase_5)); }
	inline int32_t get_penPointerIdBase_5() const { return ___penPointerIdBase_5; }
	inline int32_t* get_address_of_penPointerIdBase_5() { return &___penPointerIdBase_5; }
	inline void set_penPointerIdBase_5(int32_t value)
	{
		___penPointerIdBase_5 = value;
	}

	inline static int32_t get_offset_of_penPointerCount_6() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___penPointerCount_6)); }
	inline int32_t get_penPointerCount_6() const { return ___penPointerCount_6; }
	inline int32_t* get_address_of_penPointerCount_6() { return &___penPointerCount_6; }
	inline void set_penPointerCount_6(int32_t value)
	{
		___penPointerCount_6 = value;
	}

	inline static int32_t get_offset_of_hoveringPointers_7() { return static_cast<int32_t>(offsetof(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields, ___hoveringPointers_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hoveringPointers_7() const { return ___hoveringPointers_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hoveringPointers_7() { return &___hoveringPointers_7; }
	inline void set_hoveringPointers_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hoveringPointers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringPointers_7), (void*)value);
	}
};


// UnityEngine.UIElements.PointerType
struct PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3  : public RuntimeObject
{
public:

public:
};

struct PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields
{
public:
	// System.String UnityEngine.UIElements.PointerType::mouse
	String_t* ___mouse_0;
	// System.String UnityEngine.UIElements.PointerType::touch
	String_t* ___touch_1;
	// System.String UnityEngine.UIElements.PointerType::pen
	String_t* ___pen_2;
	// System.String UnityEngine.UIElements.PointerType::unknown
	String_t* ___unknown_3;

public:
	inline static int32_t get_offset_of_mouse_0() { return static_cast<int32_t>(offsetof(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields, ___mouse_0)); }
	inline String_t* get_mouse_0() const { return ___mouse_0; }
	inline String_t** get_address_of_mouse_0() { return &___mouse_0; }
	inline void set_mouse_0(String_t* value)
	{
		___mouse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouse_0), (void*)value);
	}

	inline static int32_t get_offset_of_touch_1() { return static_cast<int32_t>(offsetof(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields, ___touch_1)); }
	inline String_t* get_touch_1() const { return ___touch_1; }
	inline String_t** get_address_of_touch_1() { return &___touch_1; }
	inline void set_touch_1(String_t* value)
	{
		___touch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touch_1), (void*)value);
	}

	inline static int32_t get_offset_of_pen_2() { return static_cast<int32_t>(offsetof(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields, ___pen_2)); }
	inline String_t* get_pen_2() const { return ___pen_2; }
	inline String_t** get_address_of_pen_2() { return &___pen_2; }
	inline void set_pen_2(String_t* value)
	{
		___pen_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pen_2), (void*)value);
	}

	inline static int32_t get_offset_of_unknown_3() { return static_cast<int32_t>(offsetof(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields, ___unknown_3)); }
	inline String_t* get_unknown_3() const { return ___unknown_3; }
	inline String_t** get_address_of_unknown_3() { return &___unknown_3; }
	inline void set_unknown_3(String_t* value)
	{
		___unknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknown_3), (void*)value);
	}
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

// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Button UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>4__this
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<fadeTime>5__2
	float ___U3CfadeTimeU3E5__2_3;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E4__this_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CfadeTimeU3E5__2_3)); }
	inline float get_U3CfadeTimeU3E5__2_3() const { return ___U3CfadeTimeU3E5__2_3; }
	inline float* get_address_of_U3CfadeTimeU3E5__2_3() { return &___U3CfadeTimeU3E5__2_3; }
	inline void set_U3CfadeTimeU3E5__2_3(float value)
	{
		___U3CfadeTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// UnityEngine.UI.Dropdown/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13  : public RuntimeObject
{
public:
	// UnityEngine.UI.Dropdown/DropdownItem UnityEngine.UI.Dropdown/<>c__DisplayClass63_0::item
	DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * ___item_0;
	// UnityEngine.UI.Dropdown UnityEngine.UI.Dropdown/<>c__DisplayClass63_0::<>4__this
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13, ___item_0)); }
	inline DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * get_item_0() const { return ___item_0; }
	inline DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13, ___U3CU3E4__this_1)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::delay
	float ___delay_2;
	// UnityEngine.UI.Dropdown UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>4__this
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E4__this_3)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown/OptionDataList::m_Options
	List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___m_Options_0;

public:
	inline static int32_t get_offset_of_m_Options_0() { return static_cast<int32_t>(offsetof(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6, ___m_Options_0)); }
	inline List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * get_m_Options_0() const { return ___m_Options_0; }
	inline List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 ** get_address_of_m_Options_0() { return &___m_Options_0; }
	inline void set_m_Options_0(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * value)
	{
		___m_Options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_0), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t943DC5199E19E7C5EB9F737F0DD84698E82D51BE  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem/<>c__DisplayClass52_0::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_0;

public:
	inline static int32_t get_offset_of_go_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t943DC5199E19E7C5EB9F737F0DD84698E82D51BE, ___go_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_0() const { return ___go_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_0() { return &___go_0; }
	inline void set_go_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_0), (void*)value);
	}
};


// UnityEngine.UI.GraphicRaycaster/<>c
struct U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_StaticFields
{
public:
	// UnityEngine.UI.GraphicRaycaster/<>c UnityEngine.UI.GraphicRaycaster/<>c::<>9
	U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster/<>c::<>9__27_0
	Comparison_1_t7BDDF85417DBC1A0C4817BF9F1D054C9F7128876 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_StaticFields, ___U3CU3E9__27_0_1)); }
	inline Comparison_1_t7BDDF85417DBC1A0C4817BF9F1D054C9F7128876 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline Comparison_1_t7BDDF85417DBC1A0C4817BF9F1D054C9F7128876 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(Comparison_1_t7BDDF85417DBC1A0C4817BF9F1D054C9F7128876 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_0_1), (void*)value);
	}
};


// UnityEngine.UI.InputField/<CaretBlink>d__166
struct U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__166::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__166::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__166::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11, ___U3CU3E4__this_2)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188
struct U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A, ___U3CU3E4__this_3)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}
};


// UnityEngine.UI.LayoutRebuilder/<>c
struct U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields
{
public:
	// UnityEngine.UI.LayoutRebuilder/<>c UnityEngine.UI.LayoutRebuilder/<>c::<>9
	U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder/<>c::<>9__10_0
	Predicate_1_tBEBACD97616BCB10B35EC8D20237C6EE1D61B96C * ___U3CU3E9__10_0_1;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder/<>c::<>9__12_0
	UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * ___U3CU3E9__12_0_2;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder/<>c::<>9__12_1
	UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * ___U3CU3E9__12_1_3;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder/<>c::<>9__12_2
	UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * ___U3CU3E9__12_2_4;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder/<>c::<>9__12_3
	UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * ___U3CU3E9__12_3_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Predicate_1_tBEBACD97616BCB10B35EC8D20237C6EE1D61B96C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Predicate_1_tBEBACD97616BCB10B35EC8D20237C6EE1D61B96C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Predicate_1_tBEBACD97616BCB10B35EC8D20237C6EE1D61B96C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9__12_0_2)); }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * get_U3CU3E9__12_0_2() const { return ___U3CU3E9__12_0_2; }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE ** get_address_of_U3CU3E9__12_0_2() { return &___U3CU3E9__12_0_2; }
	inline void set_U3CU3E9__12_0_2(UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * value)
	{
		___U3CU3E9__12_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9__12_1_3)); }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * get_U3CU3E9__12_1_3() const { return ___U3CU3E9__12_1_3; }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE ** get_address_of_U3CU3E9__12_1_3() { return &___U3CU3E9__12_1_3; }
	inline void set_U3CU3E9__12_1_3(UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * value)
	{
		___U3CU3E9__12_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_2_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9__12_2_4)); }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * get_U3CU3E9__12_2_4() const { return ___U3CU3E9__12_2_4; }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE ** get_address_of_U3CU3E9__12_2_4() { return &___U3CU3E9__12_2_4; }
	inline void set_U3CU3E9__12_2_4(UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * value)
	{
		___U3CU3E9__12_2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_3_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields, ___U3CU3E9__12_3_5)); }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * get_U3CU3E9__12_3_5() const { return ___U3CU3E9__12_3_5; }
	inline UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE ** get_address_of_U3CU3E9__12_3_5() { return &___U3CU3E9__12_3_5; }
	inline void set_U3CU3E9__12_3_5(UnityAction_1_tEBBE4F10DEAB2C7BBD873B6FF4C2EE1CF0A884BE * value)
	{
		___U3CU3E9__12_3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_3_5), (void*)value);
	}
};


// UnityEngine.UI.LayoutUtility/<>c
struct U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields
{
public:
	// UnityEngine.UI.LayoutUtility/<>c UnityEngine.UI.LayoutUtility/<>c::<>9
	U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__3_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__3_0_1;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__4_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__4_0_2;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__4_1
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__4_1_3;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__5_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__5_0_4;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__6_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__6_0_5;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__7_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__7_0_6;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__7_1
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__7_1_7;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility/<>c::<>9__8_0
	Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * ___U3CU3E9__8_0_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__4_0_2)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__4_0_2() const { return ___U3CU3E9__4_0_2; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__4_0_2() { return &___U3CU3E9__4_0_2; }
	inline void set_U3CU3E9__4_0_2(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__4_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__4_1_3)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__4_1_3() const { return ___U3CU3E9__4_1_3; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__4_1_3() { return &___U3CU3E9__4_1_3; }
	inline void set_U3CU3E9__4_1_3(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__4_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__5_0_4)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__5_0_4() const { return ___U3CU3E9__5_0_4; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__5_0_4() { return &___U3CU3E9__5_0_4; }
	inline void set_U3CU3E9__5_0_4(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__5_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__6_0_5)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__6_0_5() const { return ___U3CU3E9__6_0_5; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__6_0_5() { return &___U3CU3E9__6_0_5; }
	inline void set_U3CU3E9__6_0_5(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__6_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__7_0_6)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__7_0_6() const { return ___U3CU3E9__7_0_6; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__7_0_6() { return &___U3CU3E9__7_0_6; }
	inline void set_U3CU3E9__7_0_6(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__7_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__7_1_7)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__7_1_7() const { return ___U3CU3E9__7_1_7; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__7_1_7() { return &___U3CU3E9__7_1_7; }
	inline void set_U3CU3E9__7_1_7(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__7_1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields, ___U3CU3E9__8_0_8)); }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * get_U3CU3E9__8_0_8() const { return ___U3CU3E9__8_0_8; }
	inline Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA ** get_address_of_U3CU3E9__8_0_8() { return &___U3CU3E9__8_0_8; }
	inline void set_U3CU3E9__8_0_8(Func_2_tEBA626460619958FDB2EFCFCA577D34379F642DA * value)
	{
		___U3CU3E9__8_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_8), (void*)value);
	}
};


// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877  : public RuntimeObject
{
public:

public:
};

struct RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_StaticFields
{
public:
	// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::instance
	RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_StaticFields, ___instance_0)); }
	inline RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * get_instance_0() const { return ___instance_0; }
	inline RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// UnityEngine.UI.ToggleGroup/<>c
struct U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_StaticFields
{
public:
	// UnityEngine.UI.ToggleGroup/<>c UnityEngine.UI.ToggleGroup/<>c::<>9
	U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup/<>c::<>9__13_0
	Predicate_1_t0AABBBAF16CED490518BA49ED7BC02D9A9475166 * ___U3CU3E9__13_0_1;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup/<>c::<>9__14_0
	Func_2_tCE3CE3D7F67C20FF5576ED2A6E74518A0756E2DE * ___U3CU3E9__14_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Predicate_1_t0AABBBAF16CED490518BA49ED7BC02D9A9475166 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Predicate_1_t0AABBBAF16CED490518BA49ED7BC02D9A9475166 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Predicate_1_t0AABBBAF16CED490518BA49ED7BC02D9A9475166 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_StaticFields, ___U3CU3E9__14_0_2)); }
	inline Func_2_tCE3CE3D7F67C20FF5576ED2A6E74518A0756E2DE * get_U3CU3E9__14_0_2() const { return ___U3CU3E9__14_0_2; }
	inline Func_2_tCE3CE3D7F67C20FF5576ED2A6E74518A0756E2DE ** get_address_of_U3CU3E9__14_0_2() { return &___U3CU3E9__14_0_2; }
	inline void set_U3CU3E9__14_0_2(Func_2_tCE3CE3D7F67C20FF5576ED2A6E74518A0756E2DE * value)
	{
		___U3CU3E9__14_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t7F7209CE80E982A37AD0FED34F45A96EFE184746 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t7F7209CE80E982A37AD0FED34F45A96EFE184746__padding[12];
	};

public:
};


// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051 
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;

public:
	inline static int32_t get_offset_of_activeEventSystem_0() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___activeEventSystem_0)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_activeEventSystem_0() const { return ___activeEventSystem_0; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_activeEventSystem_0() { return &___activeEventSystem_0; }
	inline void set_activeEventSystem_0(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___activeEventSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeEventSystem_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendEvents_1() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___sendEvents_1)); }
	inline bool get_sendEvents_1() const { return ___sendEvents_1; }
	inline bool* get_address_of_sendEvents_1() { return &___sendEvents_1; }
	inline void set_sendEvents_1(bool value)
	{
		___sendEvents_1 = value;
	}

	inline static int32_t get_offset_of_createPanelGameObjectsOnStart_2() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___createPanelGameObjectsOnStart_2)); }
	inline bool get_createPanelGameObjectsOnStart_2() const { return ___createPanelGameObjectsOnStart_2; }
	inline bool* get_address_of_createPanelGameObjectsOnStart_2() { return &___createPanelGameObjectsOnStart_2; }
	inline void set_createPanelGameObjectsOnStart_2(bool value)
	{
		___createPanelGameObjectsOnStart_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_pinvoke
{
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_com
{
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.UIElements.PanelRaycaster/FloatIntBits
struct FloatIntBits_t03F8F3AB1336E95A1F83487F125671457CE281C3 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Single UnityEngine.UIElements.PanelRaycaster/FloatIntBits::f
					float ___f_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					float ___f_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.UIElements.PanelRaycaster/FloatIntBits::i
					int32_t ___i_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i_1_forAlignmentOnly;
				};
			};
		};
		uint8_t FloatIntBits_t03F8F3AB1336E95A1F83487F125671457CE281C3__padding[4];
	};

public:
	inline static int32_t get_offset_of_f_0() { return static_cast<int32_t>(offsetof(FloatIntBits_t03F8F3AB1336E95A1F83487F125671457CE281C3, ___f_0)); }
	inline float get_f_0() const { return ___f_0; }
	inline float* get_address_of_f_0() { return &___f_0; }
	inline void set_f_0(float value)
	{
		___f_0 = value;
	}

	inline static int32_t get_offset_of_i_1() { return static_cast<int32_t>(offsetof(FloatIntBits_t03F8F3AB1336E95A1F83487F125671457CE281C3, ___i_1)); }
	inline int32_t get_i_1() const { return ___i_1; }
	inline int32_t* get_address_of_i_1() { return &___i_1; }
	inline void set_i_1(int32_t value)
	{
		___i_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Rendering.ColorWriteMask
struct ColorWriteMask_t3FA3CB36396FDF33FC5192A387BC3E75232299C0 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorWriteMask_t3FA3CB36396FDF33FC5192A387BC3E75232299C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CompareFunction
struct CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displays_1), (void*)value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ____mainDisplay_2)); }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainDisplay_2), (void*)value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDisplaysUpdated_3), (void*)value);
	}
};


// UnityEngine.EventModifiers
struct EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.EventTriggerType
struct EventTriggerType_tED9176836ED486B7FEE926108C027C4E2954B9CE 
{
public:
	// System.Int32 UnityEngine.EventSystems.EventTriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventTriggerType_tED9176836ED486B7FEE926108C027C4E2954B9CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Rendering.StencilOp
struct StencilOp_t29403ED1B3D9A0953577E567FA3BF403E13FA6AD 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StencilOp_t29403ED1B3D9A0953577E567FA3BF403E13FA6AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.UI.AspectRatioFitter/AspectMode
struct AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.CanvasScaler/ScaleMode
struct ScaleMode_t0CBCB9FD5EB6F84B682D0F5E4203D0925BCDB069 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t0CBCB9FD5EB6F84B682D0F5E4203D0925BCDB069, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct ScreenMatchMode_t64D475564756A5C040CC9B7C62D321C7133970DB 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScreenMatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenMatchMode_t64D475564756A5C040CC9B7C62D321C7133970DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CanvasScaler/Unit
struct Unit_t48D9126E954FB214B48FD2E199CB041FF97CFF80 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_t48D9126E954FB214B48FD2E199CB041FF97CFF80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026  : public UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ContentSizeFitter/FitMode
struct FitMode_t003CA2D5EEC902650F2182E2D748E327BC6D4571 
{
public:
	// System.Int32 UnityEngine.UI.ContentSizeFitter/FitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FitMode_t003CA2D5EEC902650F2182E2D748E327BC6D4571, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276  : public UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810 
{
public:
	// System.Int32 UnityEngine.UI.GraphicRaycaster/BlockingObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup/Axis
struct Axis_tBD4147C2DEA74142784225B3CB0DC2DF0217A1DE 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_tBD4147C2DEA74142784225B3CB0DC2DF0217A1DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup/Constraint
struct Constraint_tA930C0D79BAE00A005492CF973235EFBAD92D20D 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Constraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Constraint_tA930C0D79BAE00A005492CF973235EFBAD92D20D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.GridLayoutGroup/Corner
struct Corner_t448F8AE9F386A784CC3EF956C9BDDC068E6DAFB2 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Corner::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Corner_t448F8AE9F386A784CC3EF956C9BDDC068E6DAFB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/EditState
struct EditState_tB978DACF7D497A639D7FA14E2B6974AE3DA6D29E 
{
public:
	// System.Int32 UnityEngine.UI.InputField/EditState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditState_tB978DACF7D497A639D7FA14E2B6974AE3DA6D29E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E  : public UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C
{
public:

public:
};


// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>4__this
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___U3CU3E4__this_2;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_3;
	// UnityEngine.Camera UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E4__this_2)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_screenPosition_3() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___screenPosition_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_3() const { return ___screenPosition_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_3() { return &___screenPosition_3; }
	inline void set_screenPosition_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_3 = value;
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_4() const { return ___camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_4), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar/Axis
struct Axis_t561E10ABB080BB3C1F7C93C39E8DDD06BE6490B1 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t561E10ABB080BB3C1F7C93C39E8DDD06BE6490B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.UI.Selectable/SelectionState
struct SelectionState_tB421C4551CDC64C8EB31158E8C7FF118F46FF72F 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_tB421C4551CDC64C8EB31158E8C7FF118F46FF72F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Axis
struct Axis_t5BFF2AACB2D94E92243ED4EF295A1DCAF2FC52D5 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t5BFF2AACB2D94E92243ED4EF295A1DCAF2FC52D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// UnityEngine.EventSystems.StandaloneInputModule/InputMode
struct InputMode_tABD640D064CD823116744F702C9DD0836A7E8972 
{
public:
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule/InputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputMode_tABD640D064CD823116744F702C9DD0836A7E8972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressureU3Ek__BackingField_24)); }
	inline float get_U3CpressureU3Ek__BackingField_24() const { return ___U3CpressureU3Ek__BackingField_24; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_24() { return &___U3CpressureU3Ek__BackingField_24; }
	inline void set_U3CpressureU3Ek__BackingField_24(float value)
	{
		___U3CpressureU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtangentialPressureU3Ek__BackingField_25)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_25() const { return ___U3CtangentialPressureU3Ek__BackingField_25; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_25() { return &___U3CtangentialPressureU3Ek__BackingField_25; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_25(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CaltitudeAngleU3Ek__BackingField_26)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_26() const { return ___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_26() { return &___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_26(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CazimuthAngleU3Ek__BackingField_27)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_27() const { return ___U3CazimuthAngleU3Ek__BackingField_27; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_27() { return &___U3CazimuthAngleU3Ek__BackingField_27; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_27(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtwistU3Ek__BackingField_28)); }
	inline float get_U3CtwistU3Ek__BackingField_28() const { return ___U3CtwistU3Ek__BackingField_28; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_28() { return &___U3CtwistU3Ek__BackingField_28; }
	inline void set_U3CtwistU3Ek__BackingField_28(float value)
	{
		___U3CtwistU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusU3Ek__BackingField_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_29() const { return ___U3CradiusU3Ek__BackingField_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_29() { return &___U3CradiusU3Ek__BackingField_29; }
	inline void set_U3CradiusU3Ek__BackingField_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusVarianceU3Ek__BackingField_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_30() const { return ___U3CradiusVarianceU3Ek__BackingField_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_30() { return &___U3CradiusVarianceU3Ek__BackingField_30; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_30 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t9C594CD634607709CF020BE9C8A469E1C9033D36  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * ___callback_1;

public:
	inline static int32_t get_offset_of_eventID_0() { return static_cast<int32_t>(offsetof(Entry_t9C594CD634607709CF020BE9C8A469E1C9033D36, ___eventID_0)); }
	inline int32_t get_eventID_0() const { return ___eventID_0; }
	inline int32_t* get_address_of_eventID_0() { return &___eventID_0; }
	inline void set_eventID_0(int32_t value)
	{
		___eventID_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(Entry_t9C594CD634607709CF020BE9C8A469E1C9033D36, ___callback_1)); }
	inline TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * get_callback_1() const { return ___callback_1; }
	inline TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// UnityEngine.UIElements.PanelEventHandler/PointerEvent
struct PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_0;
	// System.String UnityEngine.UIElements.PanelEventHandler/PointerEvent::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.PanelEventHandler/PointerEvent::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_2;
	// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_3;
	// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_4;
	// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<localPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3ClocalPositionU3Ek__BackingField_6;
	// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<deltaPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CdeltaPositionU3Ek__BackingField_7;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_8;
	// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_9;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_10;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_11;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_12;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_13;
	// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_15;
	// UnityEngine.Vector2 UnityEngine.UIElements.PanelEventHandler/PointerEvent::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_16;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PanelEventHandler/PointerEvent::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CpointerIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_0() const { return ___U3CpointerIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_0() { return &___U3CpointerIdU3Ek__BackingField_0; }
	inline void set_U3CpointerIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CpointerTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_1() const { return ___U3CpointerTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_1() { return &___U3CpointerTypeU3Ek__BackingField_1; }
	inline void set_U3CpointerTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CisPrimaryU3Ek__BackingField_2)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_2() const { return ___U3CisPrimaryU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_2() { return &___U3CisPrimaryU3Ek__BackingField_2; }
	inline void set_U3CisPrimaryU3Ek__BackingField_2(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CbuttonU3Ek__BackingField_3)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_3() const { return ___U3CbuttonU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_3() { return &___U3CbuttonU3Ek__BackingField_3; }
	inline void set_U3CbuttonU3Ek__BackingField_3(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CpressedButtonsU3Ek__BackingField_4)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_4() const { return ___U3CpressedButtonsU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_4() { return &___U3CpressedButtonsU3Ek__BackingField_4; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_4(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CpositionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_5() const { return ___U3CpositionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_5() { return &___U3CpositionU3Ek__BackingField_5; }
	inline void set_U3CpositionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3ClocalPositionU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3ClocalPositionU3Ek__BackingField_6() const { return ___U3ClocalPositionU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3ClocalPositionU3Ek__BackingField_6() { return &___U3ClocalPositionU3Ek__BackingField_6; }
	inline void set_U3ClocalPositionU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3ClocalPositionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CdeltaPositionU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CdeltaPositionU3Ek__BackingField_7() const { return ___U3CdeltaPositionU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CdeltaPositionU3Ek__BackingField_7() { return &___U3CdeltaPositionU3Ek__BackingField_7; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CdeltaTimeU3Ek__BackingField_8)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_8() const { return ___U3CdeltaTimeU3Ek__BackingField_8; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_8() { return &___U3CdeltaTimeU3Ek__BackingField_8; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_8(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CclickCountU3Ek__BackingField_9)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_9() const { return ___U3CclickCountU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_9() { return &___U3CclickCountU3Ek__BackingField_9; }
	inline void set_U3CclickCountU3Ek__BackingField_9(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CpressureU3Ek__BackingField_10)); }
	inline float get_U3CpressureU3Ek__BackingField_10() const { return ___U3CpressureU3Ek__BackingField_10; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_10() { return &___U3CpressureU3Ek__BackingField_10; }
	inline void set_U3CpressureU3Ek__BackingField_10(float value)
	{
		___U3CpressureU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CtangentialPressureU3Ek__BackingField_11)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_11() const { return ___U3CtangentialPressureU3Ek__BackingField_11; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_11() { return &___U3CtangentialPressureU3Ek__BackingField_11; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_11(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CaltitudeAngleU3Ek__BackingField_12)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_12() const { return ___U3CaltitudeAngleU3Ek__BackingField_12; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_12() { return &___U3CaltitudeAngleU3Ek__BackingField_12; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_12(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CazimuthAngleU3Ek__BackingField_13)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_13() const { return ___U3CazimuthAngleU3Ek__BackingField_13; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_13() { return &___U3CazimuthAngleU3Ek__BackingField_13; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_13(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CtwistU3Ek__BackingField_14)); }
	inline float get_U3CtwistU3Ek__BackingField_14() const { return ___U3CtwistU3Ek__BackingField_14; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_14() { return &___U3CtwistU3Ek__BackingField_14; }
	inline void set_U3CtwistU3Ek__BackingField_14(float value)
	{
		___U3CtwistU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CradiusU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_15() const { return ___U3CradiusU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_15() { return &___U3CradiusU3Ek__BackingField_15; }
	inline void set_U3CradiusU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CradiusVarianceU3Ek__BackingField_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_16() const { return ___U3CradiusVarianceU3Ek__BackingField_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_16() { return &___U3CradiusVarianceU3Ek__BackingField_16; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1, ___U3CmodifiersU3Ek__BackingField_17)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_17() const { return ___U3CmodifiersU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_17() { return &___U3CmodifiersU3Ek__BackingField_17; }
	inline void set_U3CmodifiersU3Ek__BackingField_17(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_17 = value;
	}
};


// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ___m_EventData_1;

public:
	inline static int32_t get_offset_of_m_Button_0() { return static_cast<int32_t>(offsetof(ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562, ___m_Button_0)); }
	inline int32_t get_m_Button_0() const { return ___m_Button_0; }
	inline int32_t* get_address_of_m_Button_0() { return &___m_Button_0; }
	inline void set_m_Button_0(int32_t value)
	{
		___m_Button_0 = value;
	}

	inline static int32_t get_offset_of_m_EventData_1() { return static_cast<int32_t>(offsetof(ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562, ___m_EventData_1)); }
	inline MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * get_m_EventData_1() const { return ___m_EventData_1; }
	inline MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 ** get_address_of_m_EventData_1() { return &___m_EventData_1; }
	inline void set_m_EventData_1(MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * value)
	{
		___m_EventData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventData_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonState
	int32_t ___buttonState_0;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___buttonData_1;

public:
	inline static int32_t get_offset_of_buttonState_0() { return static_cast<int32_t>(offsetof(MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6, ___buttonState_0)); }
	inline int32_t get_buttonState_0() const { return ___buttonState_0; }
	inline int32_t* get_address_of_buttonState_0() { return &___buttonState_0; }
	inline void set_buttonState_0(int32_t value)
	{
		___buttonState_0 = value;
	}

	inline static int32_t get_offset_of_buttonData_1() { return static_cast<int32_t>(offsetof(MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6, ___buttonData_1)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_buttonData_1() const { return ___buttonData_1; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_buttonData_1() { return &___buttonData_1; }
	inline void set_buttonData_1(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___buttonData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonData_1), (void*)value);
	}
};


// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::baseMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMat_0;
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::customMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customMat_1;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::count
	int32_t ___count_2;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::stencilId
	int32_t ___stencilId_3;
	// UnityEngine.Rendering.StencilOp UnityEngine.UI.StencilMaterial/MatEntry::operation
	int32_t ___operation_4;
	// UnityEngine.Rendering.CompareFunction UnityEngine.UI.StencilMaterial/MatEntry::compareFunction
	int32_t ___compareFunction_5;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::readMask
	int32_t ___readMask_6;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::writeMask
	int32_t ___writeMask_7;
	// System.Boolean UnityEngine.UI.StencilMaterial/MatEntry::useAlphaClip
	bool ___useAlphaClip_8;
	// UnityEngine.Rendering.ColorWriteMask UnityEngine.UI.StencilMaterial/MatEntry::colorMask
	int32_t ___colorMask_9;

public:
	inline static int32_t get_offset_of_baseMat_0() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___baseMat_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMat_0() const { return ___baseMat_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMat_0() { return &___baseMat_0; }
	inline void set_baseMat_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMat_0), (void*)value);
	}

	inline static int32_t get_offset_of_customMat_1() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___customMat_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_customMat_1() const { return ___customMat_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_customMat_1() { return &___customMat_1; }
	inline void set_customMat_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___customMat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMat_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_stencilId_3() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___stencilId_3)); }
	inline int32_t get_stencilId_3() const { return ___stencilId_3; }
	inline int32_t* get_address_of_stencilId_3() { return &___stencilId_3; }
	inline void set_stencilId_3(int32_t value)
	{
		___stencilId_3 = value;
	}

	inline static int32_t get_offset_of_operation_4() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___operation_4)); }
	inline int32_t get_operation_4() const { return ___operation_4; }
	inline int32_t* get_address_of_operation_4() { return &___operation_4; }
	inline void set_operation_4(int32_t value)
	{
		___operation_4 = value;
	}

	inline static int32_t get_offset_of_compareFunction_5() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___compareFunction_5)); }
	inline int32_t get_compareFunction_5() const { return ___compareFunction_5; }
	inline int32_t* get_address_of_compareFunction_5() { return &___compareFunction_5; }
	inline void set_compareFunction_5(int32_t value)
	{
		___compareFunction_5 = value;
	}

	inline static int32_t get_offset_of_readMask_6() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___readMask_6)); }
	inline int32_t get_readMask_6() const { return ___readMask_6; }
	inline int32_t* get_address_of_readMask_6() { return &___readMask_6; }
	inline void set_readMask_6(int32_t value)
	{
		___readMask_6 = value;
	}

	inline static int32_t get_offset_of_writeMask_7() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___writeMask_7)); }
	inline int32_t get_writeMask_7() const { return ___writeMask_7; }
	inline int32_t* get_address_of_writeMask_7() { return &___writeMask_7; }
	inline void set_writeMask_7(int32_t value)
	{
		___writeMask_7 = value;
	}

	inline static int32_t get_offset_of_useAlphaClip_8() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___useAlphaClip_8)); }
	inline bool get_useAlphaClip_8() const { return ___useAlphaClip_8; }
	inline bool* get_address_of_useAlphaClip_8() { return &___useAlphaClip_8; }
	inline void set_useAlphaClip_8(bool value)
	{
		___useAlphaClip_8 = value;
	}

	inline static int32_t get_offset_of_colorMask_9() { return static_cast<int32_t>(offsetof(MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E, ___colorMask_9)); }
	inline int32_t get_colorMask_9() const { return ___colorMask_9; }
	inline int32_t* get_address_of_colorMask_9() { return &___colorMask_9; }
	inline void set_colorMask_9(int32_t value)
	{
		___colorMask_9 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Dropdown/DropdownItem
struct DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown/DropdownItem::m_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Text_4;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown/DropdownItem::m_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Image_5;
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown/DropdownItem::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_6;
	// UnityEngine.UI.Toggle UnityEngine.UI.Dropdown/DropdownItem::m_Toggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___m_Toggle_7;

public:
	inline static int32_t get_offset_of_m_Text_4() { return static_cast<int32_t>(offsetof(DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB, ___m_Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Text_4() const { return ___m_Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Text_4() { return &___m_Text_4; }
	inline void set_m_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_5() { return static_cast<int32_t>(offsetof(DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB, ___m_Image_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Image_5() const { return ___m_Image_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Image_5() { return &___m_Image_5; }
	inline void set_m_Image_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_6() { return static_cast<int32_t>(offsetof(DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB, ___m_RectTransform_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_6() const { return ___m_RectTransform_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_6() { return &___m_RectTransform_6; }
	inline void set_m_RectTransform_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Toggle_7() { return static_cast<int32_t>(offsetof(DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB, ___m_Toggle_7)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_m_Toggle_7() const { return ___m_Toggle_7; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_m_Toggle_7() { return &___m_Toggle_7; }
	inline void set_m_Toggle_7(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___m_Toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Toggle_7), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  ___s_UIToolkitOverride_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_UIToolkitOverride_15() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_UIToolkitOverride_15)); }
	inline UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  get_s_UIToolkitOverride_15() const { return ___s_UIToolkitOverride_15; }
	inline UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051 * get_address_of_s_UIToolkitOverride_15() { return &___s_UIToolkitOverride_15; }
	inline void set_s_UIToolkitOverride_15(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  value)
	{
		___s_UIToolkitOverride_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_UIToolkitOverride_15))->___activeEventSystem_0), (void*)NULL);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Padding_4)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalMinSize_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalPreferredSize_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_TotalFlexibleSize_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2, ___m_RectChildren_11)); }
	inline List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t432BA4439FC00E108A9A351BD7FBCD9242270BB3 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectChildren_11), (void*)value);
	}
};


// UnityEngine.UIElements.PanelEventHandler
struct PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelEventHandler::m_Panel
	BaseRuntimePanel_t74D3C6BB15505935A817612DF7E4BF5C1207BF7C * ___m_Panel_4;
	// UnityEngine.UIElements.PanelEventHandler/PointerEvent UnityEngine.UIElements.PanelEventHandler::m_PointerEvent
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * ___m_PointerEvent_5;
	// System.Boolean UnityEngine.UIElements.PanelEventHandler::m_Selecting
	bool ___m_Selecting_6;
	// UnityEngine.Event UnityEngine.UIElements.PanelEventHandler::m_Event
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_Event_7;

public:
	inline static int32_t get_offset_of_m_Panel_4() { return static_cast<int32_t>(offsetof(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E, ___m_Panel_4)); }
	inline BaseRuntimePanel_t74D3C6BB15505935A817612DF7E4BF5C1207BF7C * get_m_Panel_4() const { return ___m_Panel_4; }
	inline BaseRuntimePanel_t74D3C6BB15505935A817612DF7E4BF5C1207BF7C ** get_address_of_m_Panel_4() { return &___m_Panel_4; }
	inline void set_m_Panel_4(BaseRuntimePanel_t74D3C6BB15505935A817612DF7E4BF5C1207BF7C * value)
	{
		___m_Panel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Panel_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerEvent_5() { return static_cast<int32_t>(offsetof(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E, ___m_PointerEvent_5)); }
	inline PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * get_m_PointerEvent_5() const { return ___m_PointerEvent_5; }
	inline PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 ** get_address_of_m_PointerEvent_5() { return &___m_PointerEvent_5; }
	inline void set_m_PointerEvent_5(PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * value)
	{
		___m_PointerEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Selecting_6() { return static_cast<int32_t>(offsetof(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E, ___m_Selecting_6)); }
	inline bool get_m_Selecting_6() const { return ___m_Selecting_6; }
	inline bool* get_address_of_m_Selecting_6() { return &___m_Selecting_6; }
	inline void set_m_Selecting_6(bool value)
	{
		___m_Selecting_6 = value;
	}

	inline static int32_t get_offset_of_m_Event_7() { return static_cast<int32_t>(offsetof(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E, ___m_Event_7)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_Event_7() const { return ___m_Event_7; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_Event_7() { return &___m_Event_7; }
	inline void set_m_Event_7(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_Event_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Event_7), (void*)value);
	}
};

struct PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_StaticFields
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.PanelEventHandler::s_Modifiers
	int32_t ___s_Modifiers_8;

public:
	inline static int32_t get_offset_of_s_Modifiers_8() { return static_cast<int32_t>(offsetof(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_StaticFields, ___s_Modifiers_8)); }
	inline int32_t get_s_Modifiers_8() const { return ___s_Modifiers_8; }
	inline int32_t* get_address_of_s_Modifiers_8() { return &___s_Modifiers_8; }
	inline void set_s_Modifiers_8(int32_t value)
	{
		___s_Modifiers_8 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_35;

public:
	inline static int32_t get_offset_of_s_NoOptionData_35() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_35)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_35() const { return ___s_NoOptionData_35; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_35() { return &___s_NoOptionData_35; }
	inline void set_s_NoOptionData_35(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_35), (void*)value);
	}
};


// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108  : public LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;

public:
	inline static int32_t get_offset_of_m_Spacing_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_Spacing_12)); }
	inline float get_m_Spacing_12() const { return ___m_Spacing_12; }
	inline float* get_address_of_m_Spacing_12() { return &___m_Spacing_12; }
	inline void set_m_Spacing_12(float value)
	{
		___m_Spacing_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildForceExpandWidth_13)); }
	inline bool get_m_ChildForceExpandWidth_13() const { return ___m_ChildForceExpandWidth_13; }
	inline bool* get_address_of_m_ChildForceExpandWidth_13() { return &___m_ChildForceExpandWidth_13; }
	inline void set_m_ChildForceExpandWidth_13(bool value)
	{
		___m_ChildForceExpandWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildForceExpandHeight_14)); }
	inline bool get_m_ChildForceExpandHeight_14() const { return ___m_ChildForceExpandHeight_14; }
	inline bool* get_address_of_m_ChildForceExpandHeight_14() { return &___m_ChildForceExpandHeight_14; }
	inline void set_m_ChildForceExpandHeight_14(bool value)
	{
		___m_ChildForceExpandHeight_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_15() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildControlWidth_15)); }
	inline bool get_m_ChildControlWidth_15() const { return ___m_ChildControlWidth_15; }
	inline bool* get_address_of_m_ChildControlWidth_15() { return &___m_ChildControlWidth_15; }
	inline void set_m_ChildControlWidth_15(bool value)
	{
		___m_ChildControlWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_16() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildControlHeight_16)); }
	inline bool get_m_ChildControlHeight_16() const { return ___m_ChildControlHeight_16; }
	inline bool* get_address_of_m_ChildControlHeight_16() { return &___m_ChildControlHeight_16; }
	inline void set_m_ChildControlHeight_16(bool value)
	{
		___m_ChildControlHeight_16 = value;
	}

	inline static int32_t get_offset_of_m_ChildScaleWidth_17() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildScaleWidth_17)); }
	inline bool get_m_ChildScaleWidth_17() const { return ___m_ChildScaleWidth_17; }
	inline bool* get_address_of_m_ChildScaleWidth_17() { return &___m_ChildScaleWidth_17; }
	inline void set_m_ChildScaleWidth_17(bool value)
	{
		___m_ChildScaleWidth_17 = value;
	}

	inline static int32_t get_offset_of_m_ChildScaleHeight_18() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ChildScaleHeight_18)); }
	inline bool get_m_ChildScaleHeight_18() const { return ___m_ChildScaleHeight_18; }
	inline bool* get_address_of_m_ChildScaleHeight_18() { return &___m_ChildScaleHeight_18; }
	inline void set_m_ChildScaleHeight_18(bool value)
	{
		___m_ChildScaleHeight_18 = value;
	}

	inline static int32_t get_offset_of_m_ReverseArrangement_19() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108, ___m_ReverseArrangement_19)); }
	inline bool get_m_ReverseArrangement_19() const { return ___m_ReverseArrangement_19; }
	inline bool* get_address_of_m_ReverseArrangement_19() { return &___m_ReverseArrangement_19; }
	inline void set_m_ReverseArrangement_19(bool value)
	{
		___m_ReverseArrangement_19 = value;
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnEndEdit
	EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_70;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnSubmit_33)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnSubmit_33() const { return ___m_OnSubmit_33; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnSubmit_33() { return &___m_OnSubmit_33; }
	inline void set_m_OnSubmit_33(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnSubmit_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_34)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_34() const { return ___m_OnValueChanged_34; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_34() { return &___m_OnValueChanged_34; }
	inline void set_m_OnValueChanged_34(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_35)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_35() const { return ___m_OnValidateInput_35; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_35() { return &___m_OnValidateInput_35; }
	inline void set_m_OnValidateInput_35(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_36)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_36() const { return ___m_CaretColor_36; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_36() { return &___m_CaretColor_36; }
	inline void set_m_CaretColor_36(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_37)); }
	inline bool get_m_CustomCaretColor_37() const { return ___m_CustomCaretColor_37; }
	inline bool* get_address_of_m_CustomCaretColor_37() { return &___m_CustomCaretColor_37; }
	inline void set_m_CustomCaretColor_37(bool value)
	{
		___m_CustomCaretColor_37 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_38() const { return ___m_SelectionColor_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_38() { return &___m_SelectionColor_38; }
	inline void set_m_SelectionColor_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_38 = value;
	}

	inline static int32_t get_offset_of_m_Text_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_39)); }
	inline String_t* get_m_Text_39() const { return ___m_Text_39; }
	inline String_t** get_address_of_m_Text_39() { return &___m_Text_39; }
	inline void set_m_Text_39(String_t* value)
	{
		___m_Text_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_40)); }
	inline float get_m_CaretBlinkRate_40() const { return ___m_CaretBlinkRate_40; }
	inline float* get_address_of_m_CaretBlinkRate_40() { return &___m_CaretBlinkRate_40; }
	inline void set_m_CaretBlinkRate_40(float value)
	{
		___m_CaretBlinkRate_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_41)); }
	inline int32_t get_m_CaretWidth_41() const { return ___m_CaretWidth_41; }
	inline int32_t* get_address_of_m_CaretWidth_41() { return &___m_CaretWidth_41; }
	inline void set_m_CaretWidth_41(int32_t value)
	{
		___m_CaretWidth_41 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_42)); }
	inline bool get_m_ReadOnly_42() const { return ___m_ReadOnly_42; }
	inline bool* get_address_of_m_ReadOnly_42() { return &___m_ReadOnly_42; }
	inline void set_m_ReadOnly_42(bool value)
	{
		___m_ReadOnly_42 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_43)); }
	inline bool get_m_ShouldActivateOnSelect_43() const { return ___m_ShouldActivateOnSelect_43; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_43() { return &___m_ShouldActivateOnSelect_43; }
	inline void set_m_ShouldActivateOnSelect_43(bool value)
	{
		___m_ShouldActivateOnSelect_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_44)); }
	inline int32_t get_m_CaretPosition_44() const { return ___m_CaretPosition_44; }
	inline int32_t* get_address_of_m_CaretPosition_44() { return &___m_CaretPosition_44; }
	inline void set_m_CaretPosition_44(int32_t value)
	{
		___m_CaretPosition_44 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_45)); }
	inline int32_t get_m_CaretSelectPosition_45() const { return ___m_CaretSelectPosition_45; }
	inline int32_t* get_address_of_m_CaretSelectPosition_45() { return &___m_CaretSelectPosition_45; }
	inline void set_m_CaretSelectPosition_45(int32_t value)
	{
		___m_CaretSelectPosition_45 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_46)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_46() const { return ___caretRectTrans_46; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_46() { return &___caretRectTrans_46; }
	inline void set_caretRectTrans_46(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_47)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_47() const { return ___m_CursorVerts_47; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_47() { return &___m_CursorVerts_47; }
	inline void set_m_CursorVerts_47(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_48)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_48() const { return ___m_InputTextCache_48; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_48() { return &___m_InputTextCache_48; }
	inline void set_m_InputTextCache_48(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_49)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_49() const { return ___m_CachedInputRenderer_49; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_49() { return &___m_CachedInputRenderer_49; }
	inline void set_m_CachedInputRenderer_49(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_50)); }
	inline bool get_m_PreventFontCallback_50() const { return ___m_PreventFontCallback_50; }
	inline bool* get_address_of_m_PreventFontCallback_50() { return &___m_PreventFontCallback_50; }
	inline void set_m_PreventFontCallback_50(bool value)
	{
		___m_PreventFontCallback_50 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_51)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_51() const { return ___m_Mesh_51; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_51() { return &___m_Mesh_51; }
	inline void set_m_Mesh_51(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_52)); }
	inline bool get_m_AllowInput_52() const { return ___m_AllowInput_52; }
	inline bool* get_address_of_m_AllowInput_52() { return &___m_AllowInput_52; }
	inline void set_m_AllowInput_52(bool value)
	{
		___m_AllowInput_52 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_53)); }
	inline bool get_m_ShouldActivateNextUpdate_53() const { return ___m_ShouldActivateNextUpdate_53; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_53() { return &___m_ShouldActivateNextUpdate_53; }
	inline void set_m_ShouldActivateNextUpdate_53(bool value)
	{
		___m_ShouldActivateNextUpdate_53 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_54)); }
	inline bool get_m_UpdateDrag_54() const { return ___m_UpdateDrag_54; }
	inline bool* get_address_of_m_UpdateDrag_54() { return &___m_UpdateDrag_54; }
	inline void set_m_UpdateDrag_54(bool value)
	{
		___m_UpdateDrag_54 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_55() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_55)); }
	inline bool get_m_DragPositionOutOfBounds_55() const { return ___m_DragPositionOutOfBounds_55; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_55() { return &___m_DragPositionOutOfBounds_55; }
	inline void set_m_DragPositionOutOfBounds_55(bool value)
	{
		___m_DragPositionOutOfBounds_55 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_58)); }
	inline bool get_m_CaretVisible_58() const { return ___m_CaretVisible_58; }
	inline bool* get_address_of_m_CaretVisible_58() { return &___m_CaretVisible_58; }
	inline void set_m_CaretVisible_58(bool value)
	{
		___m_CaretVisible_58 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_59)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_59() const { return ___m_BlinkCoroutine_59; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_59() { return &___m_BlinkCoroutine_59; }
	inline void set_m_BlinkCoroutine_59(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_60)); }
	inline float get_m_BlinkStartTime_60() const { return ___m_BlinkStartTime_60; }
	inline float* get_address_of_m_BlinkStartTime_60() { return &___m_BlinkStartTime_60; }
	inline void set_m_BlinkStartTime_60(float value)
	{
		___m_BlinkStartTime_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_61)); }
	inline int32_t get_m_DrawStart_61() const { return ___m_DrawStart_61; }
	inline int32_t* get_address_of_m_DrawStart_61() { return &___m_DrawStart_61; }
	inline void set_m_DrawStart_61(int32_t value)
	{
		___m_DrawStart_61 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_62)); }
	inline int32_t get_m_DrawEnd_62() const { return ___m_DrawEnd_62; }
	inline int32_t* get_address_of_m_DrawEnd_62() { return &___m_DrawEnd_62; }
	inline void set_m_DrawEnd_62(int32_t value)
	{
		___m_DrawEnd_62 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_63)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_63() const { return ___m_DragCoroutine_63; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_63() { return &___m_DragCoroutine_63; }
	inline void set_m_DragCoroutine_63(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_64)); }
	inline String_t* get_m_OriginalText_64() const { return ___m_OriginalText_64; }
	inline String_t** get_address_of_m_OriginalText_64() { return &___m_OriginalText_64; }
	inline void set_m_OriginalText_64(String_t* value)
	{
		___m_OriginalText_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_65)); }
	inline bool get_m_WasCanceled_65() const { return ___m_WasCanceled_65; }
	inline bool* get_address_of_m_WasCanceled_65() { return &___m_WasCanceled_65; }
	inline void set_m_WasCanceled_65(bool value)
	{
		___m_WasCanceled_65 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_66)); }
	inline bool get_m_HasDoneFocusTransition_66() const { return ___m_HasDoneFocusTransition_66; }
	inline bool* get_address_of_m_HasDoneFocusTransition_66() { return &___m_HasDoneFocusTransition_66; }
	inline void set_m_HasDoneFocusTransition_66(bool value)
	{
		___m_HasDoneFocusTransition_66 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_67)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_67() const { return ___m_WaitForSecondsRealtime_67; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_67() { return &___m_WaitForSecondsRealtime_67; }
	inline void set_m_WaitForSecondsRealtime_67(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_68)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_68() const { return ___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return &___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_68(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_68 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_70() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_70)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_70() const { return ___m_ProcessingEvent_70; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_70() { return &___m_ProcessingEvent_70; }
	inline void set_m_ProcessingEvent_70(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_70), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A  : public HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  m_Items[1];

public:
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
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
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * m_Items[1];

public:
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  m_Items[1];

public:
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionPool_2_Get_m0C9B1A119E57834C8D324B8AD564C565ECAF3B86_gshared (const RuntimeMethod* method);
// !0 UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionPool_2_Get_mDA2B9C72E48609F6719FDEEB7D80B19836454F97_gshared (const RuntimeMethod* method);
// !0 UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionPool_2_Get_m5FD1DC6EF8F26EECA5C4ACEE8E467E7284E575B1_gshared (const RuntimeMethod* method);
// !0 UnityEngine.Pool.CollectionPool`2<System.Object,System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionPool_2_Get_m5B662A7FACCEADFDE78190DDD8AB1F7AF6632CBD_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Vector3>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m19A5D7897164459D4B7A516A93075BF2091CB573_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Color32>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mC86F767B2788311B4A897EDD5D0863E23CF6DC85_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.CollectionPool`2<System.Object,UnityEngine.Vector4>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mD3ECBD65CA8F0628678138292B4C24CF2C066DE9_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.CollectionPool`2<System.Object,System.Int32>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m864CE18D1E161929E9226F26FC020B08A8702BCE_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_gshared_inline (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_gshared_inline (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, int32_t ___index0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, int32_t ___index0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m318722AF88298242B0822DB6715D00FABDDA3113_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::InitializeListIfRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_gshared)(__this, ___collection0, method);
}
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* Mesh_get_colors32_m4BD048545AD6BC19E982926AB0C8A1948A82AD32 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
inline void List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVs_m1D0782DFB09CE0D0AEC8E73006088BD97DCF2FF1 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uvs1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_gshared)(__this, ___collection0, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* Mesh_get_tangents_m278A41721D47A627367F3F8E2B722B80A949A0F3 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Mesh_GetIndices_m8C8D25ABFA9D8A7AE23DAEB6FD7142E6BB46C49D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___submesh0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282_gshared)(__this, ___collection0, method);
}
// !0 UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Vector3>::Get()
inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9 (const RuntimeMethod* method)
{
	return ((  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * (*) (const RuntimeMethod*))CollectionPool_2_Get_m0C9B1A119E57834C8D324B8AD564C565ECAF3B86_gshared)(method);
}
// !0 UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Color32>,UnityEngine.Color32>::Get()
inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * CollectionPool_2_Get_m8F5F489E04ED362A04C4337E6CDCB89095B201F6 (const RuntimeMethod* method)
{
	return ((  List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * (*) (const RuntimeMethod*))CollectionPool_2_Get_mDA2B9C72E48609F6719FDEEB7D80B19836454F97_gshared)(method);
}
// !0 UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.Vector4>::Get()
inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3 (const RuntimeMethod* method)
{
	return ((  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * (*) (const RuntimeMethod*))CollectionPool_2_Get_m5FD1DC6EF8F26EECA5C4ACEE8E467E7284E575B1_gshared)(method);
}
// !0 UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<System.Int32>,System.Int32>::Get()
inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * CollectionPool_2_Get_mA820604000360651F288513C7C03F3122F94A181 (const RuntimeMethod* method)
{
	return ((  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * (*) (const RuntimeMethod*))CollectionPool_2_Get_m5B662A7FACCEADFDE78190DDD8AB1F7AF6632CBD_gshared)(method);
}
// System.Void UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Vector3>::Release(!0)
inline void CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))CollectionPool_2_Release_m19A5D7897164459D4B7A516A93075BF2091CB573_gshared)(___toRelease0, method);
}
// System.Void UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Color32>,UnityEngine.Color32>::Release(!0)
inline void CollectionPool_2_Release_m1264145199AD7659458DED8120EB81FEF88C7AAD (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))CollectionPool_2_Release_mC86F767B2788311B4A897EDD5D0863E23CF6DC85_gshared)(___toRelease0, method);
}
// System.Void UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.Vector4>::Release(!0)
inline void CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))CollectionPool_2_Release_mD3ECBD65CA8F0628678138292B4C24CF2C066DE9_gshared)(___toRelease0, method);
}
// System.Void UnityEngine.Pool.CollectionPool`2<System.Collections.Generic.List`1<System.Int32>,System.Int32>::Release(!0)
inline void CollectionPool_2_Release_m6E524A13FCB1414868BEB569D84BF67AF03E4FD0 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))CollectionPool_2_Release_m864CE18D1E161929E9226F26FC020B08A8702BCE_gshared)(___toRelease0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
inline void List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
inline void List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_inline (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4 (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, int32_t ___index0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, int32_t, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , const RuntimeMethod*))List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, int32_t ___index0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___inVertices0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___inColors0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m949810A73F5C96C7F7C4D6AC695EE37FC97B71EE (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uvs1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___inNormals0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___inTangents0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(!0)
inline void List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600 (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D , const RuntimeMethod*))List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
inline void List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector3,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m0988345B2D2BCC66B875E9F07B99E12C68C4590C (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv02, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv13, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv24, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv35, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal6, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent7, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector3,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m3428A0D5A377CBF2191350B793299EF1EC3503B1 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv02, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv13, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal4, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SplitUIVertexStreams_m5C6173A24593B7CCF544611CAED2EFD594CE1912 (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___verts0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions1, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___colors2, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv0S3, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv1S4, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv2S5, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv3S6, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___normals7, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___tangents8, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___indices9, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_CreateUIVertexStream_mE53F102DD8CACFF7CE3159BF90328C0D0A2AAFCD (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___verts0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions1, List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___colors2, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv0S3, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv1S4, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv2S5, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___uv3S6, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___normals7, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___tangents8, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___indices9, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup__ctor_m3FC0FB5106A29D484A1D08F92547715FBBB39337 (HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_CalculateLayoutInputHorizontal_m5E1D66D491C159A1F45014E6115A56719B3B9933 (LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::CalcAlongAxis(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m88F784D17AA542ED1CD28A4541F422A7E90CBE14 (HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108 * __this, int32_t ___axis0, bool ___isVertical1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::SetChildrenAlongAxis(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m478E2367383D18BF103AD4C58360BDB002F7A88C (HorizontalOrVerticalLayoutGroup_tAEE7FC9DCA8F7E95D4DE560305B3A219008A8108 * __this, int32_t ___axis0, bool ___isVertical1, const RuntimeMethod* method);
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.ColorBlock::get_fadeDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ColorBlock_get_fadeDuration_m37083141F2C18A45CC211E4683D1903E3A614B1C_inline (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Selectable_get_currentSelectionState_m2F4651DC6AA8CD09F3395F178523D937DFDFCD2E (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089 (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1238B72D437B572D32DDC7E67B423C2E90691350 *, const RuntimeMethod*))UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_gshared)(__this, method);
}
// UnityEngine.UI.Toggle UnityEngine.UI.Dropdown/DropdownItem::get_toggle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * DropdownItem_get_toggle_m696C6516BE86A6014F90D07B549868A999E2B247_inline (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::OnSelectItem(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_OnSelectItem_m51485B5AF5732C5C7A63A7C0984267D00534E31C (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::ImmediateDestroyDropdownList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ImmediateDestroyDropdownList_mA6162FD9DB206E8593ED2878AB2D3B8C95DA760E (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, const RuntimeMethod*))UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selected0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.UI.Dropdown>()
inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * Component_GetComponentInParent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m934CEB8BFEEE4CBB51892A6E6DF8349C0CEC1568 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m318722AF88298242B0822DB6715D00FABDDA3113_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_Hide_m730F238F76DFA575F75C31AFADA880004B324544 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown/OptionData::set_image(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_image_m575DC2D9B5CF0727CBEB9F32B51B9B1E219C5A0C_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::.ctor()
inline void List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown/OptionDataList::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDataList_set_options_mC0550A0E7A192C60A93B5A6DF56D86BDC6609A8E_inline (OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * __this, List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventTrigger/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m6693E5CD57DF6DFB9411F5AE5C0C35958CC9FBFD (TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
inline void UnityEvent_1__ctor_m62F724813F4091B75FBC3A02E7C89A0DB7022DFD (UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5CD4A65E59B117C339B96E838E5F127A989C5428 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, const RuntimeMethod*))UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared)(__this, method);
}
// System.Void UnityEngine.UI.GraphicRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD924EE81C8A13ED0718AF48F253124F294ABB2DB (U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Graphic::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17 (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258 (const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputField_get_hasSelection_m2CF3B8E665092331229BE635B40A6A32AEB47E92 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_MarkGeometryAsDirty_mE510B52A8F4814750C7F0FAF012E2735507DD5ED (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_isFocused_m60B873B25A63045E65D55BDC90268C8623D7C418_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.MultipleDisplayUtilities::GetRelativeMousePositionForDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultipleDisplayUtilities_GetRelativeMousePositionForDrag_mD78A6F9B5481AB808F54B1549409A443B33432D6 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___position1, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * InputField_get_textComponent_mF2F6C6AB96152BA577A1364A663906315AD01D4F_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputField_get_multiLine_mA9BE5B7BFEE95E9764958FB83F61D1E69B2EA8B2 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_MoveUp_mAC099D941C00DF9BE47A1C55D43C9CF7B9CD4304 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, bool ___shift0, bool ___goToFirstChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_MoveDown_m791D171F5C4611A775AF835297E5CB4505FC3E9B (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, bool ___shift0, bool ___goToLastChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_MoveLeft_m0671A9AC1D833070233E3F966F8B00680D1E1FB3 (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_MoveRight_m02C718260771AED239B61770F1DB38E7AE266D7A (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::UpdateLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_UpdateLabel_mF570FC1863A271F7B69C1701711F57BEC7E1633A (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_MarkLayoutForRebuild_m1BDFA10259B85AEBD3A758B78EF4702BE014D1FE (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m08AEBA4CF31106A157D26C8F80A5BAC82544DA2A (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder__ctor_m463A9E152E52208B053AB1AB2188FD2D8A0ACB28 (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_Clear_m28BB858DDB42479A0E2C9FA91467381CF8755669 (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.LayoutUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B199444775398EC661E1E5A54F902DDEC91E77F (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.UIElements.PanelEventHandler::get_eventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * PanelEventHandler_get_eventSystem_mFD6DA62D3D1E1BEFE2AD24CCA92D2C54F0E75CA0 (PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * EventSystem_get_currentInputModule_mA369862FF1DB0C9CD447DE69F1E77DF0C0AE37E3_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pointerId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pointerId_mC594F85728C2458396DD0BE4DA18FFD105E85C6A_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.PanelEventHandler/PointerEvent::<Read>g__InRange|82_0(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEvent_U3CReadU3Eg__InRangeU7C82_0_m9777A18085ABC88B9427D4CDF5D1B5FCFB17AA86 (int32_t ___i0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pointerType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pointerType_mBC6E7E69839774C2DBECB1237A57BC217649D75D_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_isPrimary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_isPrimary_mC0791AEDE4A3154A34D03239114E00A5234619F8_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_m180AAB76815A20002896B6B3AAC5B27D9598CDC1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_button(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PointerDeviceState::GetPressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerDeviceState_GetPressedButtons_m2CB0A826D2D596EEDBE3E9B547E0F889B8B7EA0D (int32_t ___pointerId0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pressedButtons(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pressedButtons_m503BBE745C5238BCF3145D863C4A93D0F3DEBCC0_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_clickCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Display_RelativeMouseAt_m97B71A8A86DD2983B03E4816AE5C7B95484FB011 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inputMouseCoordinates0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Display::get_systemHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Display_get_systemHeight_mA296AFD545D00DF7FEB84E7C690FD56CC2C19D70 (Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_position_m2070392F417D5F6F15D9491F43043BEEB8CAE88F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_localPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_localPosition_mE7DBCF0E95173F03DBFE0CDE60156A8845976449_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_deltaPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_deltaPosition_m91C3FE8785DD76E41C6D1DEA779760782AC11413_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_deltaTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_deltaTime_mA5A35683A18A7513445C565C39CDD9EB1F637CAC_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_pressure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_pressure_mA81170913D7C3728117A74D1136BE958126EF03B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pressure(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pressure_mED595BC110E6530F28174E72DB2BAE41D4748E87_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_tangentialPressure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_tangentialPressure_mC8D73DC7BCBCDD3F9B304F6D67306636C7ABEF5B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_tangentialPressure(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_tangentialPressure_m27F5B8A25D814CB92BEBB2CB7FA6E4280075F5BD_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_altitudeAngle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_altitudeAngle_mCC4DDEAD13A70868CA04A8CC52B48F8C47D86B2C_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_altitudeAngle(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_altitudeAngle_mAB9497C0F7E6F874F415EF7EE85D8326984769AB_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_azimuthAngle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_azimuthAngle_m49C7005B95EE0876B98DCEF10EB06E89499A7BE4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_azimuthAngle(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_azimuthAngle_m8C7C98E167CA8F099A7967A002DA2458AB5F4B60_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_twist()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_twist_m8FDDC2EA4432155C0ECA62287D484AF368162E6B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_twist(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_twist_mE8E3FE627C1992916AF67DBB0C078B06A45FC01F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_radius_m23EA54B76FCE87B9DC0DA1818B2A6D0FC7A43AB8_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_radius(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_radius_m11370F334E729B70C1EBE7045547840BF607FAE1_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_radiusVariance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_radiusVariance_m909383C57D96BC1FF4B370892BBB0708515B0999_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_radiusVariance(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_radiusVariance_m8E42278D22E5919F197F107528C4A7FF44141D83_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_modifiers_mEA3BC9C6521FB58068CCBEE40FED28C5F4370AC9_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_button_m73BE1DAD1647066281BAF47A02DA83FAB6026BEC_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_clickCount_m5C1A6BB64C60E17582D61DC7538BF5E46A3C56A8_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_m261F5A7BB4E3DD3FD760B27E70D84197DEF00F98 (RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Count()
inline int32_t List_1_get_Count_m69ED5B756629D6CD329C68F5F7E1D1595ACDE013_inline (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::get_Item(System.Int32)
inline ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_inline (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * (*) (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ButtonState_get_button_m7C3B83551E176EDC1232A65589B4FC685CE022A5_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState__ctor_m7D9B7D5AB76C393C5A3CD720ECAA2FCE990E8E6F (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonState_set_button_mBEA15BAD80964F6716746E100CFF406537D38261_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseButtonEventData__ctor_m66CCB772A4D986FB2A401E96F6296A56BBD6A238 (MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonState_set_eventData_m85A92E7A2104B5A248A7AEA7A8C86F41DB47CC73_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::Add(!0)
inline void List_1_Add_mAF1214425D58EB915621D1DC66C969EF8F6A285F (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * __this, ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E *, ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * MouseState_GetButtonState_m4CB357F518E9333CAB0CE3A54755429A6B8D0A32 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ButtonState_get_eventData_mC7A3D0172F44EEE3570A751D9DD154C465F0C48F_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>::.ctor()
inline void List_1__ctor_m2C561949211613B6EB1147E314EC59F5F5D06FF1 (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7 (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, const RuntimeMethod*))UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared)(__this, method);
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_m7D92A04D6DA6F4C7CC72439221C2EE46034A0595 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, const RuntimeMethod* method);
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scrollbar_get_axis_m98559873075F3EC100F759F77D85F125DF3EAD5F (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Scrollbar::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Scrollbar_get_size_m5D2EDDF92A6BA31ED642067D57E8B7174778E69B_inline (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scrollbar_get_reverseValue_mE21B1C18892A9E7A7B977092CA78D190DE9D2038 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ToggleGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE529EC087B06A93509276E7E9CA68D3E3E6CC257 (U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m0A6FB0A0089B29A53768BFE65D6E06183A1B60BE (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnEnable_m9BE8F521B232703E4A0EF14EA43F264EDAF3B3F0 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_m7334773773C9454A7A6E95613E60762E68B728F7 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDisable_m7D3E0D1AC43330C5A50B17DD296D2CB84994CA23 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDestroy_m7D4F82D8ADD8723A4712F376C5D5F0F18A856966 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIBehaviour_IsActive_m14EAD5699E8E72A360B1241146393349E5DCEF07 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// return isActiveAndEnabled;
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnRectTransformDimensionsChange_mF5614DB1353F7D1E1FC8235641AECFE94DBE03E0 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnBeforeTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnBeforeTransformParentChanged_mEFF5109EE955F34D2D068F0DAD4C4312F5297CD3 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnTransformParentChanged_m8D3C0D2ADCDFF54D4FB6BD4DB0E91FA7199BB1DB (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDidApplyAnimationProperties_mC4A4AF43FD946053995575D0899A4E1E4D444E16 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnCanvasGroupChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnCanvasGroupChanged_m1DE1A5688A487CCD9028F5A544D7EC025C2E15BB (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnCanvasHierarchyChanged_mE516A02869AA87FCF106F85EC95A536C71C8CC67 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.UIBehaviour::IsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIBehaviour_IsDestroyed_m28D16D52C10659BE98248139BDE1D9C5423043A5 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this == null;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(__this, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m869436738107AF382FD4D10DE9641F8241B323C7 (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.VertexHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper__ctor_m66DE6882DBEBE377C3E672DD0E9DEB88694069B6 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method)
{
	{
		// public VertexHelper()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper__ctor_m393544BA4187E8E1FF628CC7FD3755AEB5EA76EE (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * V_0 = NULL;
	{
		// public VertexHelper(Mesh m)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// m_Positions.AddRange(m.vertices);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_Positions_0();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = ___m0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2;
		L_2 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_1, /*hidden argument*/NULL);
		List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_RuntimeMethod_var);
		// m_Colors.AddRange(m.colors32);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = __this->get_m_Colors_1();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = ___m0;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_5;
		L_5 = Mesh_get_colors32_m4BD048545AD6BC19E982926AB0C8A1948A82AD32(L_4, /*hidden argument*/NULL);
		List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F(L_3, (RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/List_1_AddRange_m3CA3D7D38FFDDB36A67522EBC913278B7EC91E0F_RuntimeMethod_var);
		// List<Vector4> tempUVList = new List<Vector4>();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)il2cpp_codegen_object_new(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_il2cpp_TypeInfo_var);
		List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6(L_6, /*hidden argument*/List_1__ctor_m8C48C3F6EF447031F54430F3EF5AEB57666345E6_RuntimeMethod_var);
		V_0 = L_6;
		// m.GetUVs(0, tempUVList);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = ___m0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8 = V_0;
		Mesh_GetUVs_m1D0782DFB09CE0D0AEC8E73006088BD97DCF2FF1(L_7, 0, L_8, /*hidden argument*/NULL);
		// m_Uv0S.AddRange(tempUVList);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_9 = __this->get_m_Uv0S_2();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_10 = V_0;
		List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6(L_9, L_10, /*hidden argument*/List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		// m.GetUVs(1, tempUVList);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11 = ___m0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_12 = V_0;
		Mesh_GetUVs_m1D0782DFB09CE0D0AEC8E73006088BD97DCF2FF1(L_11, 1, L_12, /*hidden argument*/NULL);
		// m_Uv1S.AddRange(tempUVList);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = __this->get_m_Uv1S_3();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_14 = V_0;
		List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6(L_13, L_14, /*hidden argument*/List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		// m.GetUVs(2, tempUVList);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_15 = ___m0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_16 = V_0;
		Mesh_GetUVs_m1D0782DFB09CE0D0AEC8E73006088BD97DCF2FF1(L_15, 2, L_16, /*hidden argument*/NULL);
		// m_Uv2S.AddRange(tempUVList);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_17 = __this->get_m_Uv2S_4();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_18 = V_0;
		List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6(L_17, L_18, /*hidden argument*/List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		// m.GetUVs(3, tempUVList);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_19 = ___m0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_20 = V_0;
		Mesh_GetUVs_m1D0782DFB09CE0D0AEC8E73006088BD97DCF2FF1(L_19, 3, L_20, /*hidden argument*/NULL);
		// m_Uv3S.AddRange(tempUVList);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_21 = __this->get_m_Uv3S_5();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_22 = V_0;
		List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6(L_21, L_22, /*hidden argument*/List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		// m_Normals.AddRange(m.normals);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_23 = __this->get_m_Normals_6();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_24 = ___m0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25;
		L_25 = Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0(L_24, /*hidden argument*/NULL);
		List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D(L_23, (RuntimeObject*)(RuntimeObject*)L_25, /*hidden argument*/List_1_AddRange_m420501B726B498F21E1ADD0B81CAFEBBAF00157D_RuntimeMethod_var);
		// m_Tangents.AddRange(m.tangents);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_26 = __this->get_m_Tangents_7();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_27 = ___m0;
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_28;
		L_28 = Mesh_get_tangents_m278A41721D47A627367F3F8E2B722B80A949A0F3(L_27, /*hidden argument*/NULL);
		List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6(L_26, (RuntimeObject*)(RuntimeObject*)L_28, /*hidden argument*/List_1_AddRange_m9836ED22067866025DFC85CA43574EBDA17771B6_RuntimeMethod_var);
		// m_Indices.AddRange(m.GetIndices(0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_29 = __this->get_m_Indices_8();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_30 = ___m0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31;
		L_31 = Mesh_GetIndices_m8C8D25ABFA9D8A7AE23DAEB6FD7142E6BB46C49D(L_30, 0, /*hidden argument*/NULL);
		List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282(L_29, (RuntimeObject*)(RuntimeObject*)L_31, /*hidden argument*/List_1_AddRange_m118CAEDE9E858F250D7DD80F83C9CD4CE727E282_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::InitializeListIfRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Get_m8F5F489E04ED362A04C4337E6CDCB89095B201F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Get_mA820604000360651F288513C7C03F3122F94A181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_t113735429CC986DF50E70D1331655AC8C5545231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tA61CF193D9DED5D2CB4520A933D67D8D41D2EA38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tC542CE473060920E8CD7BD47DC12D96653555971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tD05CA33894395ED1CB5C7133E8CE63B353365CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_ListsInitalized)
		bool L_0 = __this->get_m_ListsInitalized_11();
		if (L_0)
		{
			goto IL_0072;
		}
	}
	{
		// m_Positions = ListPool<Vector3>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tC542CE473060920E8CD7BD47DC12D96653555971_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1;
		L_1 = CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9(/*hidden argument*/CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9_RuntimeMethod_var);
		__this->set_m_Positions_0(L_1);
		// m_Colors = ListPool<Color32>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tD05CA33894395ED1CB5C7133E8CE63B353365CF0_il2cpp_TypeInfo_var);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_2;
		L_2 = CollectionPool_2_Get_m8F5F489E04ED362A04C4337E6CDCB89095B201F6(/*hidden argument*/CollectionPool_2_Get_m8F5F489E04ED362A04C4337E6CDCB89095B201F6_RuntimeMethod_var);
		__this->set_m_Colors_1(L_2);
		// m_Uv0S = ListPool<Vector4>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_t113735429CC986DF50E70D1331655AC8C5545231_il2cpp_TypeInfo_var);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3;
		L_3 = CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3(/*hidden argument*/CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		__this->set_m_Uv0S_2(L_3);
		// m_Uv1S = ListPool<Vector4>.Get();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4;
		L_4 = CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3(/*hidden argument*/CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		__this->set_m_Uv1S_3(L_4);
		// m_Uv2S = ListPool<Vector4>.Get();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5;
		L_5 = CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3(/*hidden argument*/CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		__this->set_m_Uv2S_4(L_5);
		// m_Uv3S = ListPool<Vector4>.Get();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6;
		L_6 = CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3(/*hidden argument*/CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		__this->set_m_Uv3S_5(L_6);
		// m_Normals = ListPool<Vector3>.Get();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7;
		L_7 = CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9(/*hidden argument*/CollectionPool_2_Get_m1CF800EFE7C5F42B5AE3D90E61AE28AA1BD87EE9_RuntimeMethod_var);
		__this->set_m_Normals_6(L_7);
		// m_Tangents = ListPool<Vector4>.Get();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8;
		L_8 = CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3(/*hidden argument*/CollectionPool_2_Get_m054E42B1D6CEF076404742E58B4C225085EEC7D3_RuntimeMethod_var);
		__this->set_m_Tangents_7(L_8);
		// m_Indices = ListPool<int>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tA61CF193D9DED5D2CB4520A933D67D8D41D2EA38_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9;
		L_9 = CollectionPool_2_Get_mA820604000360651F288513C7C03F3122F94A181(/*hidden argument*/CollectionPool_2_Get_mA820604000360651F288513C7C03F3122F94A181_RuntimeMethod_var);
		__this->set_m_Indices_8(L_9);
		// m_ListsInitalized = true;
		__this->set_m_ListsInitalized_11((bool)1);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Dispose_m1F4448E484FD377DDA18AE871DE116EEBE39A5FB (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Release_m1264145199AD7659458DED8120EB81FEF88C7AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Release_m6E524A13FCB1414868BEB569D84BF67AF03E4FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_t113735429CC986DF50E70D1331655AC8C5545231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tA61CF193D9DED5D2CB4520A933D67D8D41D2EA38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tC542CE473060920E8CD7BD47DC12D96653555971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionPool_2_tD05CA33894395ED1CB5C7133E8CE63B353365CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ListsInitalized)
		bool L_0 = __this->get_m_ListsInitalized_11();
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		// ListPool<Vector3>.Release(m_Positions);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_m_Positions_0();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tC542CE473060920E8CD7BD47DC12D96653555971_il2cpp_TypeInfo_var);
		CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9(L_1, /*hidden argument*/CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9_RuntimeMethod_var);
		// ListPool<Color32>.Release(m_Colors);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_2 = __this->get_m_Colors_1();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tD05CA33894395ED1CB5C7133E8CE63B353365CF0_il2cpp_TypeInfo_var);
		CollectionPool_2_Release_m1264145199AD7659458DED8120EB81FEF88C7AAD(L_2, /*hidden argument*/CollectionPool_2_Release_m1264145199AD7659458DED8120EB81FEF88C7AAD_RuntimeMethod_var);
		// ListPool<Vector4>.Release(m_Uv0S);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = __this->get_m_Uv0S_2();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_t113735429CC986DF50E70D1331655AC8C5545231_il2cpp_TypeInfo_var);
		CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04(L_3, /*hidden argument*/CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		// ListPool<Vector4>.Release(m_Uv1S);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4 = __this->get_m_Uv1S_3();
		CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04(L_4, /*hidden argument*/CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		// ListPool<Vector4>.Release(m_Uv2S);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = __this->get_m_Uv2S_4();
		CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04(L_5, /*hidden argument*/CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		// ListPool<Vector4>.Release(m_Uv3S);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = __this->get_m_Uv3S_5();
		CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04(L_6, /*hidden argument*/CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		// ListPool<Vector3>.Release(m_Normals);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_m_Normals_6();
		CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9(L_7, /*hidden argument*/CollectionPool_2_Release_mE746DF4596F247A1D0A6A01C6269DFD6B6E9C6B9_RuntimeMethod_var);
		// ListPool<Vector4>.Release(m_Tangents);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8 = __this->get_m_Tangents_7();
		CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04(L_8, /*hidden argument*/CollectionPool_2_Release_m5D47463697DC0F97179838B605390E89CC40BD04_RuntimeMethod_var);
		// ListPool<int>.Release(m_Indices);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_m_Indices_8();
		IL2CPP_RUNTIME_CLASS_INIT(CollectionPool_2_tA61CF193D9DED5D2CB4520A933D67D8D41D2EA38_il2cpp_TypeInfo_var);
		CollectionPool_2_Release_m6E524A13FCB1414868BEB569D84BF67AF03E4FD0(L_9, /*hidden argument*/CollectionPool_2_Release_m6E524A13FCB1414868BEB569D84BF67AF03E4FD0_RuntimeMethod_var);
		// m_Positions = null;
		__this->set_m_Positions_0((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL);
		// m_Colors = null;
		__this->set_m_Colors_1((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)NULL);
		// m_Uv0S = null;
		__this->set_m_Uv0S_2((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)NULL);
		// m_Uv1S = null;
		__this->set_m_Uv1S_3((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)NULL);
		// m_Uv2S = null;
		__this->set_m_Uv2S_4((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)NULL);
		// m_Uv3S = null;
		__this->set_m_Uv3S_5((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)NULL);
		// m_Normals = null;
		__this->set_m_Normals_6((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL);
		// m_Tangents = null;
		__this->set_m_Tangents_7((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)NULL);
		// m_Indices = null;
		__this->set_m_Indices_8((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)NULL);
		// m_ListsInitalized = false;
		__this->set_m_ListsInitalized_11((bool)0);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ListsInitalized)
		bool L_0 = __this->get_m_ListsInitalized_11();
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		// m_Positions.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_m_Positions_0();
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_1, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// m_Colors.Clear();
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_2 = __this->get_m_Colors_1();
		List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D(L_2, /*hidden argument*/List_1_Clear_m83FE75551E6A40A29FDFF65DF681289573D8A03D_RuntimeMethod_var);
		// m_Uv0S.Clear();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = __this->get_m_Uv0S_2();
		List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC(L_3, /*hidden argument*/List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		// m_Uv1S.Clear();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4 = __this->get_m_Uv1S_3();
		List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC(L_4, /*hidden argument*/List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		// m_Uv2S.Clear();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = __this->get_m_Uv2S_4();
		List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC(L_5, /*hidden argument*/List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		// m_Uv3S.Clear();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = __this->get_m_Uv3S_5();
		List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC(L_6, /*hidden argument*/List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		// m_Normals.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_m_Normals_6();
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_7, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// m_Tangents.Clear();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8 = __this->get_m_Tangents_7();
		List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC(L_8, /*hidden argument*/List_1_Clear_m06065F47F36FB47C1D674BF6D5AC5A767DF614DC_RuntimeMethod_var);
		// m_Indices.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_m_Indices_8();
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_9, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Positions != null ? m_Positions.Count : 0; }
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_Positions_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_m_Positions_0();
		int32_t L_2;
		L_2 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_1, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * ___vertex0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// vertex.position = m_Positions[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_0 = ___vertex0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_m_Positions_0();
		int32_t L_2 = ___i1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_RuntimeMethod_var);
		L_0->set_position_0(L_3);
		// vertex.color = m_Colors[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_4 = ___vertex0;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_5 = __this->get_m_Colors_1();
		int32_t L_6 = ___i1;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7;
		L_7 = List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_RuntimeMethod_var);
		L_4->set_color_3(L_7);
		// vertex.uv0 = m_Uv0S[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_8 = ___vertex0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_9 = __this->get_m_Uv0S_2();
		int32_t L_10 = ___i1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11;
		L_11 = List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		L_8->set_uv0_4(L_11);
		// vertex.uv1 = m_Uv1S[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_12 = ___vertex0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = __this->get_m_Uv1S_3();
		int32_t L_14 = ___i1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		L_15 = List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		L_12->set_uv1_5(L_15);
		// vertex.uv2 = m_Uv2S[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_16 = ___vertex0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_17 = __this->get_m_Uv2S_4();
		int32_t L_18 = ___i1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19;
		L_19 = List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		L_16->set_uv2_6(L_19);
		// vertex.uv3 = m_Uv3S[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_20 = ___vertex0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_21 = __this->get_m_Uv3S_5();
		int32_t L_22 = ___i1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
		L_23 = List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		L_20->set_uv3_7(L_23);
		// vertex.normal = m_Normals[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_24 = ___vertex0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_25 = __this->get_m_Normals_6();
		int32_t L_26 = ___i1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_RuntimeMethod_var);
		L_24->set_normal_1(L_27);
		// vertex.tangent = m_Tangents[i];
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * L_28 = ___vertex0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_29 = __this->get_m_Tangents_7();
		int32_t L_30 = ___i1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31;
		L_31 = List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_RuntimeMethod_var);
		L_28->set_tangent_2(L_31);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___vertex0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// m_Positions[i] = vertex.position;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_Positions_0();
		int32_t L_1 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_2 = ___vertex0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_position_0();
		List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282(L_0, L_1, L_3, /*hidden argument*/List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_RuntimeMethod_var);
		// m_Colors[i] = vertex.color;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_4 = __this->get_m_Colors_1();
		int32_t L_5 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_6 = ___vertex0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = L_6.get_color_3();
		List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4(L_4, L_5, L_7, /*hidden argument*/List_1_set_Item_m6E3F119160E1F463C3061BEB1C08AEB09330BFC4_RuntimeMethod_var);
		// m_Uv0S[i] = vertex.uv0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8 = __this->get_m_Uv0S_2();
		int32_t L_9 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_10 = ___vertex0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = L_10.get_uv0_4();
		List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0(L_8, L_9, L_11, /*hidden argument*/List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		// m_Uv1S[i] = vertex.uv1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_12 = __this->get_m_Uv1S_3();
		int32_t L_13 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_14 = ___vertex0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = L_14.get_uv1_5();
		List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0(L_12, L_13, L_15, /*hidden argument*/List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		// m_Uv2S[i] = vertex.uv2;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_16 = __this->get_m_Uv2S_4();
		int32_t L_17 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_18 = ___vertex0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_19 = L_18.get_uv2_6();
		List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0(L_16, L_17, L_19, /*hidden argument*/List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		// m_Uv3S[i] = vertex.uv3;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_20 = __this->get_m_Uv3S_5();
		int32_t L_21 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_22 = ___vertex0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23 = L_22.get_uv3_7();
		List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0(L_20, L_21, L_23, /*hidden argument*/List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		// m_Normals[i] = vertex.normal;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_24 = __this->get_m_Normals_6();
		int32_t L_25 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_26 = ___vertex0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26.get_normal_1();
		List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282(L_24, L_25, L_27, /*hidden argument*/List_1_set_Item_m5D12B4B137C3B78CC4D31776653852EDE5C26282_RuntimeMethod_var);
		// m_Tangents[i] = vertex.tangent;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_28 = __this->get_m_Tangents_7();
		int32_t L_29 = ___i1;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_30 = ___vertex0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31 = L_30.get_tangent_2();
		List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0(L_28, L_29, L_31, /*hidden argument*/List_1_set_Item_m7D6C06E4DCD120FCB32F154AA5027777D9DDBDF0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_FillMesh_m69ADAB814A243F7F5578BC07086F373B85A34269 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// mesh.Clear();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(L_0, /*hidden argument*/NULL);
		// if (m_Positions.Count >= 65000)
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_m_Positions_0();
		int32_t L_2;
		L_2 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_1, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65000))))
		{
			goto IL_0029;
		}
	}
	{
		// throw new ArgumentException("Mesh can not have more than 65000 vertices");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDDA5A71603115BE1B96859DB981B148FC40333D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexHelper_FillMesh_m69ADAB814A243F7F5578BC07086F373B85A34269_RuntimeMethod_var)));
	}

IL_0029:
	{
		// mesh.SetVertices(m_Positions);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = ___mesh0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = __this->get_m_Positions_0();
		Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD(L_4, L_5, /*hidden argument*/NULL);
		// mesh.SetColors(m_Colors);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6 = ___mesh0;
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_7 = __this->get_m_Colors_1();
		Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F(L_6, L_7, /*hidden argument*/NULL);
		// mesh.SetUVs(0, m_Uv0S);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8 = ___mesh0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_9 = __this->get_m_Uv0S_2();
		Mesh_SetUVs_m949810A73F5C96C7F7C4D6AC695EE37FC97B71EE(L_8, 0, L_9, /*hidden argument*/NULL);
		// mesh.SetUVs(1, m_Uv1S);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_10 = ___mesh0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_11 = __this->get_m_Uv1S_3();
		Mesh_SetUVs_m949810A73F5C96C7F7C4D6AC695EE37FC97B71EE(L_10, 1, L_11, /*hidden argument*/NULL);
		// mesh.SetUVs(2, m_Uv2S);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = ___mesh0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = __this->get_m_Uv2S_4();
		Mesh_SetUVs_m949810A73F5C96C7F7C4D6AC695EE37FC97B71EE(L_12, 2, L_13, /*hidden argument*/NULL);
		// mesh.SetUVs(3, m_Uv3S);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_14 = ___mesh0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_15 = __this->get_m_Uv3S_5();
		Mesh_SetUVs_m949810A73F5C96C7F7C4D6AC695EE37FC97B71EE(L_14, 3, L_15, /*hidden argument*/NULL);
		// mesh.SetNormals(m_Normals);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_16 = ___mesh0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_17 = __this->get_m_Normals_6();
		Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168(L_16, L_17, /*hidden argument*/NULL);
		// mesh.SetTangents(m_Tangents);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_18 = ___mesh0;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_19 = __this->get_m_Tangents_7();
		Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E(L_18, L_19, /*hidden argument*/NULL);
		// mesh.SetTriangles(m_Indices, 0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_20 = ___mesh0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = __this->get_m_Indices_8();
		Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129(L_20, L_21, 0, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22 = ___mesh0;
		Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector3,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m0988345B2D2BCC66B875E9F07B99E12C68C4590C (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv02, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv13, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv24, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv35, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal6, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// m_Positions.Add(position);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_Positions_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E(L_0, L_1, /*hidden argument*/List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_RuntimeMethod_var);
		// m_Colors.Add(color);
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_2 = __this->get_m_Colors_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = ___color1;
		List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600(L_2, L_3, /*hidden argument*/List_1_Add_m0D933B665BB4F39D8B88024A3348A2D122A03600_RuntimeMethod_var);
		// m_Uv0S.Add(uv0);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4 = __this->get_m_Uv0S_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ___uv02;
		List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674(L_4, L_5, /*hidden argument*/List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		// m_Uv1S.Add(uv1);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = __this->get_m_Uv1S_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___uv13;
		List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674(L_6, L_7, /*hidden argument*/List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		// m_Uv2S.Add(uv2);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_8 = __this->get_m_Uv2S_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___uv24;
		List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674(L_8, L_9, /*hidden argument*/List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		// m_Uv3S.Add(uv3);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_10 = __this->get_m_Uv3S_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = ___uv35;
		List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674(L_10, L_11, /*hidden argument*/List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		// m_Normals.Add(normal);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12 = __this->get_m_Normals_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___normal6;
		List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E(L_12, L_13, /*hidden argument*/List_1_Add_m76C6963F23F90A4707FF8C87E3E60F6341845E1E_RuntimeMethod_var);
		// m_Tangents.Add(tangent);
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_14 = __this->get_m_Tangents_7();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = ___tangent7;
		List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674(L_14, L_15, /*hidden argument*/List_1_Add_mA857FBA553C3F8AF3D470479A38FD6A12A20F674_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector3,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m3428A0D5A377CBF2191350B793299EF1EC3503B1 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv02, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv13, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal4, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent5, const RuntimeMethod* method)
{
	{
		// AddVert(position, color, uv0, uv1, Vector4.zero, Vector4.zero, normal, tangent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___color1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___uv02;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___uv13;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5;
		L_5 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___normal4;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___tangent5;
		VertexHelper_AddVert_m0988345B2D2BCC66B875E9F07B99E12C68C4590C(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m5CD02FDA1B6ADBD0E276037F948B68E08497D1F2 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv02, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddVert(position, color, uv0, Vector4.zero, s_DefaultNormal, s_DefaultTangent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_1 = ___color1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___uv02;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ((VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var))->get_s_DefaultNormal_10();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = ((VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var))->get_s_DefaultTangent_9();
		VertexHelper_AddVert_m3428A0D5A377CBF2191350B793299EF1EC3503B1(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m7A43A65F746413AF697EBD1D0A8EA87A0A7ED032 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___v0, const RuntimeMethod* method)
{
	{
		// AddVert(v.position, v.color, v.uv0, v.uv1, v.uv2, v.uv3, v.normal, v.tangent);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_0 = ___v0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_position_0();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_2 = ___v0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = L_2.get_color_3();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_4 = ___v0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = L_4.get_uv0_4();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_6 = ___v0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = L_6.get_uv1_5();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_8 = ___v0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = L_8.get_uv2_6();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_10 = ___v0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = L_10.get_uv3_7();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_12 = ___v0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12.get_normal_1();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_14 = ___v0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = L_14.get_tangent_2();
		VertexHelper_AddVert_m0988345B2D2BCC66B875E9F07B99E12C68C4590C(__this, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// m_Indices.Add(idx0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_m_Indices_8();
		int32_t L_1 = ___idx00;
		List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_0, L_1, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		// m_Indices.Add(idx1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = __this->get_m_Indices_8();
		int32_t L_3 = ___idx11;
		List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_2, L_3, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		// m_Indices.Add(idx2);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = __this->get_m_Indices_8();
		int32_t L_5 = ___idx22;
		List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_4, L_5, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexQuad_m16C46AF7CE9A2D9E1AE47A4B9799081A707C47B5 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___verts0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int startIndex = currentVertCount;
		int32_t L_0;
		L_0 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_005d;
	}

IL_000b:
	{
		// AddVert(verts[i].position, verts[i].color, verts[i].uv0, verts[i].uv1, verts[i].normal, verts[i].tangent);
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_1 = ___verts0;
		int32_t L_2 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)))->get_position_0();
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_4 = ___verts0;
		int32_t L_5 = V_1;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->get_color_3();
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_7 = ___verts0;
		int32_t L_8 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->get_uv0_4();
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_10 = ___verts0;
		int32_t L_11 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->get_uv1_5();
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_13 = ___verts0;
		int32_t L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->get_normal_1();
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_16 = ___verts0;
		int32_t L_17 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->get_tangent_2();
		VertexHelper_AddVert_m3428A0D5A377CBF2191350B793299EF1EC3503B1(__this, L_3, L_6, L_9, L_12, L_15, L_18, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005d:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)4)))
		{
			goto IL_000b;
		}
	}
	{
		// AddTriangle(startIndex, startIndex + 1, startIndex + 2);
		int32_t L_21 = V_0;
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(__this, L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), /*hidden argument*/NULL);
		// AddTriangle(startIndex + 2, startIndex + 3, startIndex);
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		int32_t L_26 = V_0;
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)3)), L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexTriangleStream_m3FC7DF3D1DA3F0D40025258E3B8FF5830EE7CE55 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___verts0, const RuntimeMethod* method)
{
	{
		// if (verts == null)
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_0 = ___verts0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// CanvasRenderer.SplitUIVertexStreams(verts, m_Positions, m_Colors, m_Uv0S, m_Uv1S, m_Uv2S, m_Uv3S, m_Normals, m_Tangents, m_Indices);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_1 = ___verts0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_m_Positions_0();
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = __this->get_m_Colors_1();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4 = __this->get_m_Uv0S_2();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = __this->get_m_Uv1S_3();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = __this->get_m_Uv2S_4();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = __this->get_m_Uv3S_5();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = __this->get_m_Normals_6();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_9 = __this->get_m_Tangents_7();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = __this->get_m_Indices_8();
		CanvasRenderer_SplitUIVertexStreams_m5C6173A24593B7CCF544611CAED2EFD594CE1912(L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_mA3E62A7B45BFFFC73D72BC7B8BFAD5388F8578BA (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___stream0, const RuntimeMethod* method)
{
	{
		// if (stream == null)
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// InitializeListIfRequired();
		VertexHelper_InitializeListIfRequired_m6CCC5B58B5B1EC87F651B36220440A58B38728CF(__this, /*hidden argument*/NULL);
		// CanvasRenderer.CreateUIVertexStream(stream, m_Positions, m_Colors, m_Uv0S, m_Uv1S, m_Uv2S, m_Uv3S, m_Normals, m_Tangents, m_Indices);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_1 = ___stream0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_m_Positions_0();
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_3 = __this->get_m_Colors_1();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_4 = __this->get_m_Uv0S_2();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = __this->get_m_Uv1S_3();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_6 = __this->get_m_Uv2S_4();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = __this->get_m_Uv3S_5();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = __this->get_m_Normals_6();
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_9 = __this->get_m_Tangents_7();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = __this->get_m_Indices_8();
		CanvasRenderer_CreateUIVertexStream_mE53F102DD8CACFF7CE3159BF90328C0D0A2AAFCD(L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VertexHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper__cctor_mBB5A60A031C02D4D294AC842BCC7F73153B00FC5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Vector4 s_DefaultTangent = new Vector4(1.0f, 0.0f, 0.0f, -1.0f);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_0), (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var))->set_s_DefaultTangent_9(L_0);
		// private static readonly Vector3 s_DefaultNormal = Vector3.back;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		((VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields*)il2cpp_codegen_static_fields_for(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_il2cpp_TypeInfo_var))->set_s_DefaultNormal_10(L_1);
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
// System.Void UnityEngine.UI.VerticalLayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalLayoutGroup__ctor_m50FC410FAF5C69492B239DA9A18189563054E4D0 (VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A * __this, const RuntimeMethod* method)
{
	{
		// protected VerticalLayoutGroup()
		HorizontalOrVerticalLayoutGroup__ctor_m3FC0FB5106A29D484A1D08F92547715FBBB39337(__this, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalLayoutGroup_CalculateLayoutInputHorizontal_m6C97EB48D36329CEDA4D94DC825DA2DD8D49AF99 (VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A * __this, const RuntimeMethod* method)
{
	{
		// base.CalculateLayoutInputHorizontal();
		LayoutGroup_CalculateLayoutInputHorizontal_m5E1D66D491C159A1F45014E6115A56719B3B9933(__this, /*hidden argument*/NULL);
		// CalcAlongAxis(0, true);
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m88F784D17AA542ED1CD28A4541F422A7E90CBE14(__this, 0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::CalculateLayoutInputVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalLayoutGroup_CalculateLayoutInputVertical_mD376BB61F211CE987B424108EA749D9BA17D1F52 (VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A * __this, const RuntimeMethod* method)
{
	{
		// CalcAlongAxis(1, true);
		HorizontalOrVerticalLayoutGroup_CalcAlongAxis_m88F784D17AA542ED1CD28A4541F422A7E90CBE14(__this, 1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalLayoutGroup_SetLayoutHorizontal_m6CE79D24AC376A32573E305024D9ED763BED8CDB (VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A * __this, const RuntimeMethod* method)
{
	{
		// SetChildrenAlongAxis(0, true);
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m478E2367383D18BF103AD4C58360BDB002F7A88C(__this, 0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.VerticalLayoutGroup::SetLayoutVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalLayoutGroup_SetLayoutVertical_m41201990B993E828922B56DA65C656505F0FA2E3 (VerticalLayoutGroup_t18FC738F7F168EC2C879630C51B75CC0726F287A * __this, const RuntimeMethod* method)
{
	{
		// SetChildrenAlongAxis(1, true);
		HorizontalOrVerticalLayoutGroup_SetChildrenAlongAxis_m478E2367383D18BF103AD4C58360BDB002F7A88C(__this, 1, (bool)1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Button/<OnFinishSubmit>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnFinishSubmitU3Ed__9__ctor_m4663BB761D062DC802EABBD3FDBD8FDFA03551EC (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.Button/<OnFinishSubmit>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnFinishSubmitU3Ed__9_System_IDisposable_Dispose_m1EB4BF5C53168DA8C48EFAC7FFE209B4E4090FB6 (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Button/<OnFinishSubmit>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnFinishSubmitU3Ed__9_MoveNext_m23D48ECBECED3420D3B57B062BA5D612B44907B2 (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_1 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var fadeTime = colors.fadeDuration;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = V_1;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_5;
		L_5 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6;
		L_6 = ColorBlock_get_fadeDuration_m37083141F2C18A45CC211E4683D1903E3A614B1C_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CfadeTimeU3E5__2_3(L_6);
		// var elapsedTime = 0f;
		__this->set_U3CelapsedTimeU3E5__3_4((0.0f));
		goto IL_0068;
	}

IL_003f:
	{
		// elapsedTime += Time.unscaledDeltaTime;
		float L_7 = __this->get_U3CelapsedTimeU3E5__3_4();
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__3_4(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0068:
	{
		// while (elapsedTime < fadeTime)
		float L_9 = __this->get_U3CelapsedTimeU3E5__3_4();
		float L_10 = __this->get_U3CfadeTimeU3E5__2_3();
		if ((((float)L_9) < ((float)L_10)))
		{
			goto IL_003f;
		}
	}
	{
		// DoStateTransition(currentSelectionState, false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = V_1;
		int32_t L_13;
		L_13 = Selectable_get_currentSelectionState_m2F4651DC6AA8CD09F3395F178523D937DFDFCD2E(L_12, /*hidden argument*/NULL);
		VirtualActionInvoker2< int32_t, bool >::Invoke(26 /* System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean) */, L_11, L_13, (bool)0);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnFinishSubmitU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCE5F932F82D5E0662EB7EC1F04EA53AA6E9E3A62 (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Button/<OnFinishSubmit>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnFinishSubmitU3Ed__9_System_Collections_IEnumerator_Reset_m8C34DF18B3EE52EC98CAECD371811E60CCA7BC1D (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnFinishSubmitU3Ed__9_System_Collections_IEnumerator_Reset_m8C34DF18B3EE52EC98CAECD371811E60CCA7BC1D_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnFinishSubmitU3Ed__9_System_Collections_IEnumerator_get_Current_m1336764E1957C2B5EBE654AB0C8834996F183534 (U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.Button/ButtonClickedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickedEvent__ctor_m83123C7524AB4DC1FFB95F86455F859572F1B6A8 (ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTweenCallback__ctor_m657B9693A9F289FE37673F95D76A89BCF250FAA9 (ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089(__this, /*hidden argument*/UnityEvent_1__ctor_m632B1AC6010416860C58BFFD4788D8A11AEEB089_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.Dropdown/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mE228A7EF3A8402C0C54E10741528BA4C12FA19CD (U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/<>c__DisplayClass63_0::<Show>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CShowU3Eb__0_m42E8F0816930DEB826D2091D0E5429947623F0FB (U3CU3Ec__DisplayClass63_0_tEAA88043853FAF41C0C07DB0DC042503C73C0B13 * __this, bool ___x0, const RuntimeMethod* method)
{
	{
		// item.toggle.onValueChanged.AddListener(x => OnSelectItem(item.toggle));
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_U3CU3E4__this_1();
		DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * L_1 = __this->get_item_0();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_2;
		L_2 = DropdownItem_get_toggle_m696C6516BE86A6014F90D07B549868A999E2B247_inline(L_1, /*hidden argument*/NULL);
		Dropdown_OnSelectItem_m51485B5AF5732C5C7A63A7C0984267D00534E31C(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDestroyDropdownListU3Ed__75__ctor_m47D084871CB3AF3216C6DC8D342881D7460E14C4 (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDestroyDropdownListU3Ed__75_System_IDisposable_Dispose_m9746BE4CFDE332E7BB2B42BB56F16E4383F759EF (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDestroyDropdownListU3Ed__75_MoveNext_m2166A5CAE1107928834C346B4D52ACB983AC8845 (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(delay);
		float L_4 = __this->get_delay_2();
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_5 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ImmediateDestroyDropdownList();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_6 = V_1;
		Dropdown_ImmediateDestroyDropdownList_mA6162FD9DB206E8593ED2878AB2D3B8C95DA760E(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDestroyDropdownListU3Ed__75_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5EA4D91EB06B4E048941BBC0AD8D92B7829B4D39 (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDestroyDropdownListU3Ed__75_System_Collections_IEnumerator_Reset_mE42D3D74A267F697DA8EB36F64E317621923C98D (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedDestroyDropdownListU3Ed__75_System_Collections_IEnumerator_Reset_mE42D3D74A267F697DA8EB36F64E317621923C98D_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDestroyDropdownListU3Ed__75_System_Collections_IEnumerator_get_Current_m5ED616A0AA9D4E548F5B8F39FAADB1F016155CBF (U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.Dropdown/DropdownEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownEvent__ctor_mE2A2ECC494E83733FD196E30F74CB19B05B940B9 (DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF(__this, /*hidden argument*/UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
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
// UnityEngine.UI.Text UnityEngine.UI.Dropdown/DropdownItem::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * DropdownItem_get_text_mFFE89EDD35FAA758C0793DC0743D2C7265150904 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		// public Text          text          { get { return m_Text;          } set { m_Text = value;           } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_Text_4();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::set_text(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_set_text_mC11250A9655C633527F6D09FD3774BE37740B8D6 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Text          text          { get { return m_Text;          } set { m_Text = value;           } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___value0;
		__this->set_m_Text_4(L_0);
		// public Text          text          { get { return m_Text;          } set { m_Text = value;           } }
		return;
	}
}
// UnityEngine.UI.Image UnityEngine.UI.Dropdown/DropdownItem::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * DropdownItem_get_image_m2CCA7CA013F2EBB8C75827D616370928023827D2 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		// public Image         image         { get { return m_Image;         } set { m_Image = value;          } }
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_m_Image_5();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::set_image(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_set_image_mFE9F20CF013BAFC91ACE79C9FD199282D3038CE8 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___value0, const RuntimeMethod* method)
{
	{
		// public Image         image         { get { return m_Image;         } set { m_Image = value;          } }
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = ___value0;
		__this->set_m_Image_5(L_0);
		// public Image         image         { get { return m_Image;         } set { m_Image = value;          } }
		return;
	}
}
// UnityEngine.RectTransform UnityEngine.UI.Dropdown/DropdownItem::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * DropdownItem_get_rectTransform_m848D2741413CF956597F825EDCAA547655EAB7E4 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform rectTransform { get { return m_RectTransform; } set { m_RectTransform = value;  } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_RectTransform_6();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::set_rectTransform(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_set_rectTransform_mFE5A54410202CA0E151BEECFAE71CC9D4B81E50F (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___value0, const RuntimeMethod* method)
{
	{
		// public RectTransform rectTransform { get { return m_RectTransform; } set { m_RectTransform = value;  } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___value0;
		__this->set_m_RectTransform_6(L_0);
		// public RectTransform rectTransform { get { return m_RectTransform; } set { m_RectTransform = value;  } }
		return;
	}
}
// UnityEngine.UI.Toggle UnityEngine.UI.Dropdown/DropdownItem::get_toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * DropdownItem_get_toggle_m696C6516BE86A6014F90D07B549868A999E2B247 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		// public Toggle        toggle        { get { return m_Toggle;        } set { m_Toggle = value;         } }
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_m_Toggle_7();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::set_toggle(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_set_toggle_mACFADA4ED419E2959BE14A979DDF7195562A441A (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___value0, const RuntimeMethod* method)
{
	{
		// public Toggle        toggle        { get { return m_Toggle;        } set { m_Toggle = value;         } }
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___value0;
		__this->set_m_Toggle_7(L_0);
		// public Toggle        toggle        { get { return m_Toggle;        } set { m_Toggle = value;         } }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_OnPointerEnter_m27B152E33C585BB46FA85CA0B155290CF7465618 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystem.current.SetSelectedGameObject(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::OnCancel(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem_OnCancel_m2A6C5ACB0FDD94E53B364C56F39A70A891C9CB8F (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m934CEB8BFEEE4CBB51892A6E6DF8349C0CEC1568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * V_0 = NULL;
	{
		// Dropdown dropdown = GetComponentInParent<Dropdown>();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0;
		L_0 = Component_GetComponentInParent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m934CEB8BFEEE4CBB51892A6E6DF8349C0CEC1568(__this, /*hidden argument*/Component_GetComponentInParent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m934CEB8BFEEE4CBB51892A6E6DF8349C0CEC1568_RuntimeMethod_var);
		V_0 = L_0;
		// if (dropdown)
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// dropdown.Hide();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_3 = V_0;
		Dropdown_Hide_m730F238F76DFA575F75C31AFADA880004B324544(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/DropdownItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropdownItem__ctor_mC4429F24D5D1E49FA86D33B61DADC33464728B97 (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->get_m_Text_0();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionData::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		return;
	}
}
// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * OptionData_get_image_m3A9639CF8946C3DF2D8A2364B62E69D52FD6C1BC (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public Sprite image { get { return m_Image; } set { m_Image = value; } }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_Image_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionData::set_image(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData_set_image_m575DC2D9B5CF0727CBEB9F32B51B9B1E219C5A0C (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method)
{
	{
		// public Sprite image { get { return m_Image; } set { m_Image = value; } }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___value0;
		__this->set_m_Image_1(L_0);
		// public Sprite image { get { return m_Image; } set { m_Image = value; } }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_mA1D3FE8359A7237C62D802A3E94221D451364056 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public OptionData()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// public OptionData(string text)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.text = text;
		String_t* L_0 = ___text0;
		OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m8C980A8F61978E1BD5091A7476453792CD07FDF0 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image0, const RuntimeMethod* method)
{
	{
		// public OptionData(Sprite image)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.image = image;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___image0;
		OptionData_set_image_m575DC2D9B5CF0727CBEB9F32B51B9B1E219C5A0C_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown/OptionDataList::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * OptionDataList_get_options_mDC1404A7BE88BEF7957F1E5C2D66EEA7F0B1B712 (OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * __this, const RuntimeMethod* method)
{
	{
		// public List<OptionData> options { get { return m_Options; } set { m_Options = value; } }
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_0 = __this->get_m_Options_0();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionDataList::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDataList_set_options_mC0550A0E7A192C60A93B5A6DF56D86BDC6609A8E (OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * __this, List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<OptionData> options { get { return m_Options; } set { m_Options = value; } }
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_0 = ___value0;
		__this->set_m_Options_0(L_0);
		// public List<OptionData> options { get { return m_Options; } set { m_Options = value; } }
		return;
	}
}
// System.Void UnityEngine.UI.Dropdown/OptionDataList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionDataList__ctor_mAEA703E51D910C8FA6BE11A012B9C9F932E187C7 (OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OptionDataList()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// options = new List<OptionData>();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_0 = (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *)il2cpp_codegen_object_new(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD(L_0, /*hidden argument*/List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		OptionDataList_set_options_mC0550A0E7A192C60A93B5A6DF56D86BDC6609A8E_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.EventSystems.EventSystem/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m499945AD9D24871CD3C64520792A845B3C55404D (U3CU3Ec__DisplayClass52_0_t943DC5199E19E7C5EB9F737F0DD84698E82D51BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.EventSystem/<>c__DisplayClass52_0::<CreateUIToolkitPanelGameObject>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CCreateUIToolkitPanelGameObjectU3Eb__0_mC65289E53026C3AD34B1EC73643B778120E6F30C (U3CU3Ec__DisplayClass52_0_t943DC5199E19E7C5EB9F737F0DD84698E82D51BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// panel.destroyed += () => Destroy(go);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_go_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_pinvoke(const UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051& unmarshaled, UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_pinvoke& marshaled)
{
	Exception_t* ___activeEventSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'activeEventSystem' of type 'UIToolkitOverrideConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___activeEventSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_pinvoke_back(const UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_pinvoke& marshaled, UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051& unmarshaled)
{
	Exception_t* ___activeEventSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'activeEventSystem' of type 'UIToolkitOverrideConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___activeEventSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_pinvoke_cleanup(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_com(const UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051& unmarshaled, UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_com& marshaled)
{
	Exception_t* ___activeEventSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'activeEventSystem' of type 'UIToolkitOverrideConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___activeEventSystem_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_com_back(const UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_com& marshaled, UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051& unmarshaled)
{
	Exception_t* ___activeEventSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'activeEventSystem' of type 'UIToolkitOverrideConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___activeEventSystem_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshal_com_cleanup(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_com& marshaled)
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
// System.Void UnityEngine.EventSystems.EventTrigger/Entry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m033E853903D01DE79E1534A6DD2692E8CC9AAA7F (Entry_t9C594CD634607709CF020BE9C8A469E1C9033D36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EventTriggerType eventID = EventTriggerType.PointerClick;
		__this->set_eventID_0(4);
		// public TriggerEvent callback = new TriggerEvent();
		TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * L_0 = (TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 *)il2cpp_codegen_object_new(TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276_il2cpp_TypeInfo_var);
		TriggerEvent__ctor_m6693E5CD57DF6DFB9411F5AE5C0C35958CC9FBFD(L_0, /*hidden argument*/NULL);
		__this->set_callback_1(L_0);
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
// System.Void UnityEngine.EventSystems.EventTrigger/TriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerEvent__ctor_m6693E5CD57DF6DFB9411F5AE5C0C35958CC9FBFD (TriggerEvent_t6C4DB59340B55DE906C54EE3FF7DAE4DE24A1276 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m62F724813F4091B75FBC3A02E7C89A0DB7022DFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m62F724813F4091B75FBC3A02E7C89A0DB7022DFD(__this, /*hidden argument*/UnityEvent_1__ctor_m62F724813F4091B75FBC3A02E7C89A0DB7022DFD_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTweenCallback__ctor_m5BD825A7E915816E2F70423A9567C4D82959C309 (FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED(__this, /*hidden argument*/UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.GraphicRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEF2D6179052C21DB4A2B864871CB982341EA50CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * L_0 = (U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 *)il2cpp_codegen_object_new(U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD924EE81C8A13ED0718AF48F253124F294ABB2DB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.GraphicRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD924EE81C8A13ED0718AF48F253124F294ABB2DB (U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.UI.GraphicRaycaster/<>c::<Raycast>b__27_0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRaycastU3Eb__27_0_mE359E2E78D7A20EDFC2AE14298F21CCD3245506E (U3CU3Ec_t43FDD2D1BAB9CBA1C02E24FEF16A3D9C757F6010 * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___g10, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___g21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// s_SortedGraphics.Sort((g1, g2) => g2.depth.CompareTo(g1.depth));
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = ___g21;
		int32_t L_1;
		L_1 = Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2 = ___g10;
		int32_t L_3;
		L_3 = Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.InputField/<CaretBlink>d__166::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__166__ctor_m9DF7299B6E4A1F2CBFD0EB1F2299801E9A522825 (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.InputField/<CaretBlink>d__166::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__166_System_IDisposable_Dispose_m84EE64130978282BC5B034877C5066C360B8EE41 (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.InputField/<CaretBlink>d__166::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaretBlinkU3Ed__166_MoveNext_m4E091F34C673827AFDF4D62F556650E869A2ADB1 (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_CaretVisible = true;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = V_1;
		L_3->set_m_CaretVisible_58((bool)1);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00a3;
	}

IL_0049:
	{
		// float blinkPeriod = 1f / m_CaretBlinkRate;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = V_1;
		float L_5 = L_4->get_m_CaretBlinkRate_40();
		V_2 = ((float)((float)(1.0f)/(float)L_5));
		// bool blinkState = (Time.unscaledTime - m_BlinkStartTime) % blinkPeriod < blinkPeriod / 2;
		float L_6;
		L_6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = V_1;
		float L_8 = L_7->get_m_BlinkStartTime_60();
		float L_9 = V_2;
		float L_10 = V_2;
		V_3 = (bool)((((float)(fmodf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)), L_9))) < ((float)((float)((float)L_10/(float)(2.0f)))))? 1 : 0);
		// if (m_CaretVisible != blinkState)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_11 = V_1;
		bool L_12 = L_11->get_m_CaretVisible_58();
		bool L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_008c;
		}
	}
	{
		// m_CaretVisible = blinkState;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_14 = V_1;
		bool L_15 = V_3;
		L_14->set_m_CaretVisible_58(L_15);
		// if (!hasSelection)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_16 = V_1;
		bool L_17;
		L_17 = InputField_get_hasSelection_m2CF3B8E665092331229BE635B40A6A32AEB47E92(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_008c;
		}
	}
	{
		// MarkGeometryAsDirty();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_18 = V_1;
		InputField_MarkGeometryAsDirty_mE510B52A8F4814750C7F0FAF012E2735507DD5ED(L_18, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a3:
	{
		// while (isFocused && m_CaretBlinkRate > 0)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_19 = V_1;
		bool L_20;
		L_20 = InputField_get_isFocused_m60B873B25A63045E65D55BDC90268C8623D7C418_inline(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_21 = V_1;
		float L_22 = L_21->get_m_CaretBlinkRate_40();
		if ((((float)L_22) > ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}

IL_00b8:
	{
		// m_BlinkCoroutine = null;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_23 = V_1;
		L_23->set_m_BlinkCoroutine_59((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.InputField/<CaretBlink>d__166::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaretBlinkU3Ed__166_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82D7FF1827807A5C71074129DA1FF89B7E26338D (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.InputField/<CaretBlink>d__166::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkU3Ed__166_System_Collections_IEnumerator_Reset_mAFFF6F45F97F73F90B3338C1C512BE5B03C17D70 (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCaretBlinkU3Ed__166_System_Collections_IEnumerator_Reset_mAFFF6F45F97F73F90B3338C1C512BE5B03C17D70_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.InputField/<CaretBlink>d__166::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCaretBlinkU3Ed__166_System_Collections_IEnumerator_get_Current_m89533C06CE9A32B5ABB71AA73EE94B13FDD5B691 (U3CCaretBlinkU3Ed__166_tA24699E4BE3679AC6E13B3FF17F930B60185AC11 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__188__ctor_m1D5B0ED84E076B1E840D606C45A08BA52486432C (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__188_System_IDisposable_Dispose_m9F950B53D2861203BDDDE9125797EDA0DB9C7F57 (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMouseDragOutsideRectU3Ed__188_MoveNext_mE80E76A11F82EF5ADA486F33194B4E1F65FE2835 (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float G_B17_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_012e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0135;
	}

IL_0026:
	{
		// Vector2 position = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_2 = L_4;
		// if (!MultipleDisplayUtilities.GetRelativeMousePositionForDrag(eventData, ref position))
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = __this->get_eventData_2();
		bool L_6;
		L_6 = MultipleDisplayUtilities_GetRelativeMousePositionForDrag_mD78A6F9B5481AB808F54B1549409A443B33432D6(L_5, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0148;
		}
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(textComponent.rectTransform, position, eventData.pressEventCamera, out localMousePos);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = InputField_get_textComponent_mF2F6C6AB96152BA577A1364A663906315AD01D4F_inline(L_7, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_2;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_11 = __this->get_eventData_2();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12;
		L_12 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_9, L_10, L_12, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
		// Rect rect = textComponent.rectTransform.rect;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_14 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15;
		L_15 = InputField_get_textComponent_mF2F6C6AB96152BA577A1364A663906315AD01D4F_inline(L_14, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_16;
		L_16 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_15, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17;
		L_17 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// if (multiLine)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_18 = V_1;
		bool L_19;
		L_19 = InputField_get_multiLine_mA9BE5B7BFEE95E9764958FB83F61D1E69B2EA8B2(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a9;
		}
	}
	{
		// if (localMousePos.y > rect.yMax)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22;
		L_22 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_0090;
		}
	}
	{
		// MoveUp(true, true);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_23 = V_1;
		InputField_MoveUp_mAC099D941C00DF9BE47A1C55D43C9CF7B9CD4304(L_23, (bool)1, (bool)1, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_0090:
	{
		// else if (localMousePos.y < rect.yMin)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_3;
		float L_25 = L_24.get_y_1();
		float L_26;
		L_26 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_25) < ((float)L_26))))
		{
			goto IL_00d9;
		}
	}
	{
		// MoveDown(true, true);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_27 = V_1;
		InputField_MoveDown_m791D171F5C4611A775AF835297E5CB4505FC3E9B(L_27, (bool)1, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00d9;
	}

IL_00a9:
	{
		// if (localMousePos.x < rect.xMin)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_3;
		float L_29 = L_28.get_x_0();
		float L_30;
		L_30 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_00c2;
		}
	}
	{
		// MoveLeft(true, false);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_31 = V_1;
		InputField_MoveLeft_m0671A9AC1D833070233E3F966F8B00680D1E1FB3(L_31, (bool)1, (bool)0, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_00c2:
	{
		// else if (localMousePos.x > rect.xMax)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_3;
		float L_33 = L_32.get_x_0();
		float L_34;
		L_34 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_00d9;
		}
	}
	{
		// MoveRight(true, false);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_35 = V_1;
		InputField_MoveRight_m02C718260771AED239B61770F1DB38E7AE266D7A(L_35, (bool)1, (bool)0, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// UpdateLabel();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_36 = V_1;
		InputField_UpdateLabel_mF570FC1863A271F7B69C1701711F57BEC7E1633A(L_36, /*hidden argument*/NULL);
		// float delay = multiLine ? kVScrollSpeed : kHScrollSpeed;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_37 = V_1;
		bool L_38;
		L_38 = InputField_get_multiLine_mA9BE5B7BFEE95E9764958FB83F61D1E69B2EA8B2(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00ee;
		}
	}
	{
		G_B17_0 = (0.0500000007f);
		goto IL_00f3;
	}

IL_00ee:
	{
		G_B17_0 = (0.100000001f);
	}

IL_00f3:
	{
		V_5 = G_B17_0;
		// if (m_WaitForSecondsRealtime == null)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_39 = V_1;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_40 = L_39->get_m_WaitForSecondsRealtime_67();
		if (L_40)
		{
			goto IL_010c;
		}
	}
	{
		// m_WaitForSecondsRealtime = new WaitForSecondsRealtime(delay);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_41 = V_1;
		float L_42 = V_5;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_43 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_43, L_42, /*hidden argument*/NULL);
		L_41->set_m_WaitForSecondsRealtime_67(L_43);
		goto IL_0119;
	}

IL_010c:
	{
		// m_WaitForSecondsRealtime.waitTime = delay;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_44 = V_1;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_45 = L_44->get_m_WaitForSecondsRealtime_67();
		float L_46 = V_5;
		WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline(L_45, L_46, /*hidden argument*/NULL);
	}

IL_0119:
	{
		// yield return m_WaitForSecondsRealtime;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_47 = V_1;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_48 = L_47->get_m_WaitForSecondsRealtime_67();
		__this->set_U3CU3E2__current_1(L_48);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_012e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0135:
	{
		// while (m_UpdateDrag && m_DragPositionOutOfBounds)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_49 = V_1;
		bool L_50 = L_49->get_m_UpdateDrag_54();
		if (!L_50)
		{
			goto IL_0148;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_51 = V_1;
		bool L_52 = L_51->get_m_DragPositionOutOfBounds_55();
		if (L_52)
		{
			goto IL_0026;
		}
	}

IL_0148:
	{
		// m_DragCoroutine = null;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_53 = V_1;
		L_53->set_m_DragCoroutine_63((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__188_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB41CC1B1EA5BE59E108373F851E8A4E75CB6404C (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__188_System_Collections_IEnumerator_Reset_m8312ED8C486BC30D97217F5133028D0A841F6CDF (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMouseDragOutsideRectU3Ed__188_System_Collections_IEnumerator_Reset_m8312ED8C486BC30D97217F5133028D0A841F6CDF_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__188::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__188_System_Collections_IEnumerator_get_Current_m9193B6EE99F7877F27E547CC8D9929D3B0F35B14 (U3CMouseDragOutsideRectU3Ed__188_tAEA2324970B095CE39CFCF9C7DD3EAFDC619D20A * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.InputField/EndEditEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndEditEvent__ctor_m2B4CBE629459D465810066EAAFF7AE13F9B7E5B9 (EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.InputField/OnChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChangeEvent__ctor_mB146DCA915176957A9B5CF48F08FF1EF64E44F5F (OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  Il2CppChar DelegatePInvokeWrapper_OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F (OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	uint8_t returnValue = il2cppPInvokeFunc(____text0_marshaled, ___charIndex1, static_cast<uint8_t>(___addedChar2));

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

	return static_cast<Il2CppChar>(returnValue);
}
// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValidateInput__ctor_m79176985D76F3F168B4682FDE46B33C400806149 (OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OnValidateInput_Invoke_mFD5B2C2FE9905B863CB61FC6FC6B1D20ED50FDBF (OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	Il2CppChar result = 0x0;
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
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
			else
			{
				// closed
				typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
					else
						result = GenericVirtualFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___charIndex1, ___addedChar2);
					else
						result = VirtualFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___charIndex1, ___addedChar2);
				}
			}
			else
			{
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
			else
			{
				typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.InputField/SubmitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmitEvent__ctor_m32C23EA2D0183736A8039A9B638734819D760CE4 (SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSetDirtyU3Ed__56__ctor_mA52F10924596857781781E2D32305ED395CCFC40 (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSetDirtyU3Ed__56_System_IDisposable_Dispose_mB2EEBBFE1EDA19D7668469D89C5DC20135F92CA3 (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedSetDirtyU3Ed__56_MoveNext_m2600A9E03E1423A54B1E91926F6AD71E180719BC (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0027:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LayoutRebuilder.MarkLayoutForRebuild(rectTransform);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_rectTransform_2();
		IL2CPP_RUNTIME_CLASS_INIT(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m1BDFA10259B85AEBD3A758B78EF4702BE014D1FE(L_3, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedSetDirtyU3Ed__56_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0766D0840885F5FD82287052C846A487A3C954D (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedSetDirtyU3Ed__56_System_Collections_IEnumerator_Reset_mD3851B6C7275A35789E989AAFB19866B0240BEAC (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedSetDirtyU3Ed__56_System_Collections_IEnumerator_Reset_mD3851B6C7275A35789E989AAFB19866B0240BEAC_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedSetDirtyU3Ed__56_System_Collections_IEnumerator_get_Current_mFA346E997DCBDC2A7E20F57FD48C4A012EC0ED4E (U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mED93E562BDABEA3DF3EC4B657D6D55CC06145307 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * L_0 = (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE *)il2cpp_codegen_object_new(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m08AEBA4CF31106A157D26C8F80A5BAC82544DA2A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m08AEBA4CF31106A157D26C8F80A5BAC82544DA2A (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.LayoutRebuilder UnityEngine.UI.LayoutRebuilder/<>c::<.cctor>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * U3CU3Ec_U3C_cctorU3Eb__5_0_mB67104EE6305C2FA10D2FC2630F0E86CE2D0E0F1 (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static ObjectPool<LayoutRebuilder> s_Rebuilders = new ObjectPool<LayoutRebuilder>(() => new LayoutRebuilder(), null, x => x.Clear());
		LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * L_0 = (LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 *)il2cpp_codegen_object_new(LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585_il2cpp_TypeInfo_var);
		LayoutRebuilder__ctor_m463A9E152E52208B053AB1AB2188FD2D8A0ACB28(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::<.cctor>b__5_1(UnityEngine.UI.LayoutRebuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__5_1_mC4187670E25E5A6EE7BB78CE95C1F14D9768CEA0 (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * ___x0, const RuntimeMethod* method)
{
	{
		// static ObjectPool<LayoutRebuilder> s_Rebuilders = new ObjectPool<LayoutRebuilder>(() => new LayoutRebuilder(), null, x => x.Clear());
		LayoutRebuilder_tE88B8B9EA50644E438123BDCE2BC2A3287E07585 * L_0 = ___x0;
		LayoutRebuilder_Clear_m28BB858DDB42479A0E2C9FA91467381CF8755669(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.LayoutRebuilder/<>c::<StripDisabledBehavioursFromList>b__10_0(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStripDisabledBehavioursFromListU3Eb__10_0_m701215783D65B7E21FBEDF6DD2D14AB22719C28D (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// components.RemoveAll(e => e is Behaviour && !((Behaviour)e).isActiveAndEnabled);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___e0;
		if (!((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)IsInstClass((RuntimeObject*)L_0, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_1 = ___e0;
		bool L_2;
		L_2 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)CastclassClass((RuntimeObject*)L_1, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::<Rebuild>b__12_0(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRebuildU3Eb__12_0_mA041A1DCC1746B1827D000661B5CD0D3AABE0161 (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PerformLayoutCalculation(m_ToRebuild, e => (e as ILayoutElement).CalculateLayoutInputHorizontal());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___e0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.UI.ILayoutElement::CalculateLayoutInputHorizontal() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::<Rebuild>b__12_1(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRebuildU3Eb__12_1_mB33AEEFC02E5A2BADD0EC1020E2975B7ABCA9107 (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PerformLayoutControl(m_ToRebuild, e => (e as ILayoutController).SetLayoutHorizontal());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___e0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.UI.ILayoutController::SetLayoutHorizontal() */, ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::<Rebuild>b__12_2(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRebuildU3Eb__12_2_mA37813EF3059FEDE8365C5F941899CD429089586 (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PerformLayoutCalculation(m_ToRebuild, e => (e as ILayoutElement).CalculateLayoutInputVertical());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___e0;
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UI.ILayoutElement::CalculateLayoutInputVertical() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.UI.LayoutRebuilder/<>c::<Rebuild>b__12_3(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRebuildU3Eb__12_3_m50289A90C028D9B108DB0F8551E1237AD636337F (U3CU3Ec_tF79F3380B4FBBEE2D222FA51ECA9C5F326A844EE * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PerformLayoutControl(m_ToRebuild, e => (e as ILayoutController).SetLayoutVertical());
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___e0;
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UI.ILayoutController::SetLayoutVertical() */, ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ILayoutController_tF2880E0D8295D36BEA0298A9F862C1DF937FCEA8_il2cpp_TypeInfo_var)));
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
// System.Void UnityEngine.UI.LayoutUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF1ADF4C7AE970B77BB4C949F313143B8465F6D35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * L_0 = (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 *)il2cpp_codegen_object_new(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1B199444775398EC661E1E5A54F902DDEC91E77F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.LayoutUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B199444775398EC661E1E5A54F902DDEC91E77F (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetMinWidth>b__3_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetMinWidthU3Eb__3_0_mCBA85C4A1F5E5868352281A6D02ECB2DB3CA543A (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLayoutProperty(rect, e => e.minWidth, 0);
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.ILayoutElement::get_minWidth() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetPreferredWidth>b__4_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetPreferredWidthU3Eb__4_0_m98B9DCF76E6BF84270C3DA0B8E3A98868E056390 (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Max(GetLayoutProperty(rect, e => e.minWidth, 0), GetLayoutProperty(rect, e => e.preferredWidth, 0));
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.ILayoutElement::get_minWidth() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetPreferredWidth>b__4_1(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetPreferredWidthU3Eb__4_1_m4460F5F291EA091DC96FA574787BFBE261FFD659 (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Max(GetLayoutProperty(rect, e => e.minWidth, 0), GetLayoutProperty(rect, e => e.preferredWidth, 0));
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single UnityEngine.UI.ILayoutElement::get_preferredWidth() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetFlexibleWidth>b__5_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetFlexibleWidthU3Eb__5_0_m168AAD0730CBC71061EF59ACE641DBAA2F73EEF5 (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLayoutProperty(rect, e => e.flexibleWidth, 0);
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single UnityEngine.UI.ILayoutElement::get_flexibleWidth() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetMinHeight>b__6_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetMinHeightU3Eb__6_0_mE547AB359DF68B6250AC20EAE08BF7A6B370039B (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLayoutProperty(rect, e => e.minHeight, 0);
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single UnityEngine.UI.ILayoutElement::get_minHeight() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetPreferredHeight>b__7_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetPreferredHeightU3Eb__7_0_mD751E70588985A919D25922900C1C3CBE2CC7A9B (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Max(GetLayoutProperty(rect, e => e.minHeight, 0), GetLayoutProperty(rect, e => e.preferredHeight, 0));
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single UnityEngine.UI.ILayoutElement::get_minHeight() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetPreferredHeight>b__7_1(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetPreferredHeightU3Eb__7_1_m490DBFE3A1AFF5E10F751C55998C2E951C542594 (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Max(GetLayoutProperty(rect, e => e.minHeight, 0), GetLayoutProperty(rect, e => e.preferredHeight, 0));
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(6 /* System.Single UnityEngine.UI.ILayoutElement::get_preferredHeight() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single UnityEngine.UI.LayoutUtility/<>c::<GetFlexibleHeight>b__8_0(UnityEngine.UI.ILayoutElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGetFlexibleHeightU3Eb__8_0_m500C6DA403AFD260B45ABFCE746ED86872EECC2F (U3CU3Ec_t7FCAF6521DF9F0C0224AF729F0D318FEBBDF7425 * __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLayoutProperty(rect, e => e.flexibleHeight, 0);
		RuntimeObject* L_0 = ___e0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(7 /* System.Single UnityEngine.UI.ILayoutElement::get_flexibleHeight() */, ILayoutElement_t8273808ADBE740C4FE99A05EFDC5762920B71AD9_il2cpp_TypeInfo_var, L_0);
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
// System.Void UnityEngine.UI.MaskableGraphic/CullStateChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CullStateChangedEvent__ctor_m733D6A4DFDEED4F4812B6EFD581007DB79C1FB57 (CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_pointerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; private set; }
		int32_t L_0 = __this->get_U3CpointerIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pointerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_pointerId_mC594F85728C2458396DD0BE4DA18FFD105E85C6A (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerEvent_get_pointerType_mA065EAFE75FF5FF520F3C9D279B88F1FDDA69733 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public string pointerType { get; private set; }
		String_t* L_0 = __this->get_U3CpointerTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pointerType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_pointerType_mBC6E7E69839774C2DBECB1237A57BC217649D75D (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string pointerType { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CpointerTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEvent_get_isPrimary_m243601CB403BB4E71F035154AF97977AAB4A10D7 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public bool isPrimary { get; private set; }
		bool L_0 = __this->get_U3CisPrimaryU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_isPrimary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_isPrimary_mC0791AEDE4A3154A34D03239114E00A5234619F8 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isPrimary { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisPrimaryU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEvent_get_button_m73BE1DAD1647066281BAF47A02DA83FAB6026BEC (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int button { get; private set; }
		int32_t L_0 = __this->get_U3CbuttonU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int button { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_pressedButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEvent_get_pressedButtons_m657BD9F01F005FBDE4F0AF8C56842448B50CDFD8 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int pressedButtons { get; private set; }
		int32_t L_0 = __this->get_U3CpressedButtonsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_pressedButtons_m503BBE745C5238BCF3145D863C4A93D0F3DEBCC0 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pressedButtons { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerEvent_get_position_m67F689FF13799BB13E406ACD233C74AEA2C16523 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 position { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CpositionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_position_m2070392F417D5F6F15D9491F43043BEEB8CAE88F (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 position { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerEvent_get_localPosition_m0AB2132582570F340BAC372385EAD9FA58ABE4F0 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 localPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3ClocalPositionU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_localPosition_mE7DBCF0E95173F03DBFE0CDE60156A8845976449 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 localPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3ClocalPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerEvent_get_deltaPosition_mB8C7CDA6916C2A8E5EDBD314B968418A2AF11CFE (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 deltaPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CdeltaPositionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_deltaPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_deltaPosition_m91C3FE8785DD76E41C6D1DEA779760782AC11413 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 deltaPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CdeltaPositionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_deltaTime_m590B1EA2D45C28BA7F939F259ED739A18D5DCD9B (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float deltaTime { get; private set; }
		float L_0 = __this->get_U3CdeltaTimeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_deltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_deltaTime_mA5A35683A18A7513445C565C39CDD9EB1F637CAC (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float deltaTime { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CdeltaTimeU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEvent_get_clickCount_m5C1A6BB64C60E17582D61DC7538BF5E46A3C56A8 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; private set; }
		int32_t L_0 = __this->get_U3CclickCountU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_pressure_m7D598695CE8DD444103FF31E45E5D8DA051C3937 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float pressure { get; private set; }
		float L_0 = __this->get_U3CpressureU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_pressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_pressure_mED595BC110E6530F28174E72DB2BAE41D4748E87 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float pressure { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CpressureU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_tangentialPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_tangentialPressure_m9E532F2E7C0E227BFB6EF0BC5C23E2BF516DA9E5 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float tangentialPressure { get; private set; }
		float L_0 = __this->get_U3CtangentialPressureU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_tangentialPressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_tangentialPressure_m27F5B8A25D814CB92BEBB2CB7FA6E4280075F5BD (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float tangentialPressure { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CtangentialPressureU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_altitudeAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_altitudeAngle_m0FD10EE7DB11D36570DD9B457E233929F9A359B1 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float altitudeAngle { get; private set; }
		float L_0 = __this->get_U3CaltitudeAngleU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_altitudeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_altitudeAngle_mAB9497C0F7E6F874F415EF7EE85D8326984769AB (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float altitudeAngle { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CaltitudeAngleU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_azimuthAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_azimuthAngle_m5D56CE4049A6FB8A876EB1B7691DE56283CE02C5 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float azimuthAngle { get; private set; }
		float L_0 = __this->get_U3CazimuthAngleU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_azimuthAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_azimuthAngle_m8C7C98E167CA8F099A7967A002DA2458AB5F4B60 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float azimuthAngle { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CazimuthAngleU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_twist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEvent_get_twist_m9DB4299FD625F4C4E55475BE5640B5670BFD5D14 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public float twist { get; private set; }
		float L_0 = __this->get_U3CtwistU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_twist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_twist_mE8E3FE627C1992916AF67DBB0C078B06A45FC01F (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float twist { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CtwistU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEvent_get_radius_m6A1F5767621D349A31318E1DFFE59689429210D0 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radius { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CradiusU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_radius(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_radius_m11370F334E729B70C1EBE7045547840BF607FAE1 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 radius { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CradiusU3Ek__BackingField_15(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_radiusVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEvent_get_radiusVariance_mC834B4AD7D48B744874E4B91FFE89C2B98D7FEBA (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radiusVariance { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CradiusVarianceU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_radiusVariance(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_radiusVariance_m8E42278D22E5919F197F107528C4A7FF44141D83 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 radiusVariance { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CradiusVarianceU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.EventModifiers UnityEngine.UIElements.PanelEventHandler/PointerEvent::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEvent_get_modifiers_m506ABD0F7AF460CCE6F2791A273A291B64CEDD9A (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public EventModifiers modifiers { get; private set; }
		int32_t L_0 = __this->get_U3CmodifiersU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_set_modifiers_mEA3BC9C6521FB58068CCBEE40FED28C5F4370AC9 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EventModifiers modifiers { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::Read(UnityEngine.UIElements.PanelEventHandler,UnityEngine.EventSystems.PointerEventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_Read_m64F256970700DF0565B9FB9F47162641D4F8BBF1 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E * ___self0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData1, bool ___isMove2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_t434CD34173AC88CCFC20D78AE2D6202648ABC8A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B4_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B1_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B3_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B2_0 = NULL;
	String_t* G_B5_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B5_1 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B8_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B6_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B9_1 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B18_0 = NULL;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * G_B19_1 = NULL;
	{
		// pointerId = self.eventSystem.currentInputModule.ConvertUIToolkitPointerId(eventData);
		PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E * L_0 = ___self0;
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = PanelEventHandler_get_eventSystem_mFD6DA62D3D1E1BEFE2AD24CCA92D2C54F0E75CA0(L_0, /*hidden argument*/NULL);
		BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * L_2;
		L_2 = EventSystem_get_currentInputModule_mA369862FF1DB0C9CD447DE69F1E77DF0C0AE37E3_inline(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(26 /* System.Int32 UnityEngine.EventSystems.BaseInputModule::ConvertUIToolkitPointerId(UnityEngine.EventSystems.PointerEventData) */, L_2, L_3);
		PointerEvent_set_pointerId_mC594F85728C2458396DD0BE4DA18FFD105E85C6A_inline(__this, L_4, /*hidden argument*/NULL);
		// pointerType =
		//     InRange(pointerId, PointerId.touchPointerIdBase, PointerId.touchPointerCount) ? PointerType.touch :
		//     InRange(pointerId, PointerId.penPointerIdBase, PointerId.penPointerCount) ? PointerType.pen :
		//     PointerType.mouse;
		int32_t L_5;
		L_5 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		int32_t L_6 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_touchPointerIdBase_3();
		int32_t L_7 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_touchPointerCount_4();
		bool L_8;
		L_8 = PointerEvent_U3CReadU3Eg__InRangeU7C82_0_m9777A18085ABC88B9427D4CDF5D1B5FCFB17AA86(L_5, L_6, L_7, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_8)
		{
			G_B4_0 = __this;
			goto IL_0054;
		}
	}
	{
		int32_t L_9;
		L_9 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		int32_t L_10 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_penPointerIdBase_5();
		int32_t L_11 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_penPointerCount_6();
		bool L_12;
		L_12 = PointerEvent_U3CReadU3Eg__InRangeU7C82_0_m9777A18085ABC88B9427D4CDF5D1B5FCFB17AA86(L_9, L_10, L_11, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_12)
		{
			G_B3_0 = G_B1_0;
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var);
		String_t* L_13 = ((PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var))->get_mouse_0();
		G_B5_0 = L_13;
		G_B5_1 = G_B2_0;
		goto IL_0059;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var);
		String_t* L_14 = ((PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var))->get_pen_2();
		G_B5_0 = L_14;
		G_B5_1 = G_B3_0;
		goto IL_0059;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var);
		String_t* L_15 = ((PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t319062C6ECAA6FD84C491FE35AAB846B161A36D3_il2cpp_TypeInfo_var))->get_touch_1();
		G_B5_0 = L_15;
		G_B5_1 = G_B4_0;
	}

IL_0059:
	{
		PointerEvent_set_pointerType_mBC6E7E69839774C2DBECB1237A57BC217649D75D_inline(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// isPrimary = pointerId == PointerId.mousePointerId ||
		//     pointerId == PointerId.touchPointerIdBase ||
		//     pointerId == PointerId.penPointerIdBase;
		int32_t L_16;
		L_16 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		int32_t L_17 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		G_B6_0 = __this;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			G_B8_0 = __this;
			goto IL_0088;
		}
	}
	{
		int32_t L_18;
		L_18 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		int32_t L_19 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_touchPointerIdBase_3();
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			G_B8_0 = G_B6_0;
			goto IL_0088;
		}
	}
	{
		int32_t L_20;
		L_20 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var);
		int32_t L_21 = ((PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tD592A4AAE154EC87BF982E69DC283134006C24E1_il2cpp_TypeInfo_var))->get_penPointerIdBase_5();
		G_B9_0 = ((((int32_t)L_20) == ((int32_t)L_21))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0089:
	{
		PointerEvent_set_isPrimary_mC0791AEDE4A3154A34D03239114E00A5234619F8_inline(G_B9_1, (bool)G_B9_0, /*hidden argument*/NULL);
		// button = (int)eventData.button;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_22 = ___eventData1;
		int32_t L_23;
		L_23 = PointerEventData_get_button_m180AAB76815A20002896B6B3AAC5B27D9598CDC1_inline(L_22, /*hidden argument*/NULL);
		PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179_inline(__this, L_23, /*hidden argument*/NULL);
		// pressedButtons = PointerDeviceState.GetPressedButtons(pointerId);
		int32_t L_24;
		L_24 = PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_t434CD34173AC88CCFC20D78AE2D6202648ABC8A7_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = PointerDeviceState_GetPressedButtons_m2CB0A826D2D596EEDBE3E9B547E0F889B8B7EA0D(L_24, /*hidden argument*/NULL);
		PointerEvent_set_pressedButtons_m503BBE745C5238BCF3145D863C4A93D0F3DEBCC0_inline(__this, L_25, /*hidden argument*/NULL);
		// clickCount = eventData.clickCount;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_26 = ___eventData1;
		int32_t L_27;
		L_27 = PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline(L_26, /*hidden argument*/NULL);
		PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6_inline(__this, L_27, /*hidden argument*/NULL);
		// var h = Screen.height;
		int32_t L_28;
		L_28 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = L_28;
		// var eventPosition = Display.RelativeMouseAt(eventData.position);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_29 = ___eventData1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Display_RelativeMouseAt_m97B71A8A86DD2983B03E4816AE5C7B95484FB011(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		// if (eventPosition != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_35;
		L_35 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0100;
		}
	}
	{
		// int eventDisplayIndex = (int)eventPosition.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_1;
		float L_37 = L_36.get_z_4();
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_37);
		// if (eventDisplayIndex > 0 && eventDisplayIndex < Display.displays.Length)
		int32_t L_38 = V_3;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* L_40 = ((Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields*)il2cpp_codegen_static_fields_for(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var))->get_displays_1();
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_010c;
		}
	}
	{
		// h = Display.displays[eventDisplayIndex].systemHeight;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* L_41 = ((Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields*)il2cpp_codegen_static_fields_for(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_42 = V_3;
		int32_t L_43 = L_42;
		Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45;
		L_45 = Display_get_systemHeight_mA296AFD545D00DF7FEB84E7C690FD56CC2C19D70(L_44, /*hidden argument*/NULL);
		V_0 = L_45;
		// }
		goto IL_010c;
	}

IL_0100:
	{
		// eventPosition = eventData.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_46 = ___eventData1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_47, /*hidden argument*/NULL);
		V_1 = L_48;
	}

IL_010c:
	{
		// var delta = eventData.delta;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_49 = ___eventData1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_49, /*hidden argument*/NULL);
		V_2 = L_50;
		// eventPosition.y = h - eventPosition.y;
		int32_t L_51 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_1;
		float L_53 = L_52.get_y_3();
		(&V_1)->set_y_3(((float)il2cpp_codegen_subtract((float)((float)((float)L_51)), (float)L_53)));
		// delta.y = -delta.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54 = V_2;
		float L_55 = L_54.get_y_1();
		(&V_2)->set_y_1(((-L_55)));
		// localPosition = position = eventPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = L_56;
		V_4 = L_57;
		PointerEvent_set_position_m2070392F417D5F6F15D9491F43043BEEB8CAE88F_inline(__this, L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_4;
		PointerEvent_set_localPosition_mE7DBCF0E95173F03DBFE0CDE60156A8845976449_inline(__this, L_58, /*hidden argument*/NULL);
		// deltaPosition = delta;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_59, /*hidden argument*/NULL);
		PointerEvent_set_deltaPosition_m91C3FE8785DD76E41C6D1DEA779760782AC11413_inline(__this, L_60, /*hidden argument*/NULL);
		// deltaTime = 0; //TODO: find out what's expected here. Time since last frame? Since last sent event?
		PointerEvent_set_deltaTime_mA5A35683A18A7513445C565C39CDD9EB1F637CAC_inline(__this, (0.0f), /*hidden argument*/NULL);
		// pressure = eventData.pressure;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_61 = ___eventData1;
		float L_62;
		L_62 = PointerEventData_get_pressure_mA81170913D7C3728117A74D1136BE958126EF03B_inline(L_61, /*hidden argument*/NULL);
		PointerEvent_set_pressure_mED595BC110E6530F28174E72DB2BAE41D4748E87_inline(__this, L_62, /*hidden argument*/NULL);
		// tangentialPressure = eventData.tangentialPressure;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_63 = ___eventData1;
		float L_64;
		L_64 = PointerEventData_get_tangentialPressure_mC8D73DC7BCBCDD3F9B304F6D67306636C7ABEF5B_inline(L_63, /*hidden argument*/NULL);
		PointerEvent_set_tangentialPressure_m27F5B8A25D814CB92BEBB2CB7FA6E4280075F5BD_inline(__this, L_64, /*hidden argument*/NULL);
		// altitudeAngle = eventData.altitudeAngle;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_65 = ___eventData1;
		float L_66;
		L_66 = PointerEventData_get_altitudeAngle_mCC4DDEAD13A70868CA04A8CC52B48F8C47D86B2C_inline(L_65, /*hidden argument*/NULL);
		PointerEvent_set_altitudeAngle_mAB9497C0F7E6F874F415EF7EE85D8326984769AB_inline(__this, L_66, /*hidden argument*/NULL);
		// azimuthAngle = eventData.azimuthAngle;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_67 = ___eventData1;
		float L_68;
		L_68 = PointerEventData_get_azimuthAngle_m49C7005B95EE0876B98DCEF10EB06E89499A7BE4_inline(L_67, /*hidden argument*/NULL);
		PointerEvent_set_azimuthAngle_m8C7C98E167CA8F099A7967A002DA2458AB5F4B60_inline(__this, L_68, /*hidden argument*/NULL);
		// twist = eventData.twist;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_69 = ___eventData1;
		float L_70;
		L_70 = PointerEventData_get_twist_m8FDDC2EA4432155C0ECA62287D484AF368162E6B_inline(L_69, /*hidden argument*/NULL);
		PointerEvent_set_twist_mE8E3FE627C1992916AF67DBB0C078B06A45FC01F_inline(__this, L_70, /*hidden argument*/NULL);
		// radius = eventData.radius;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_71 = ___eventData1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		L_72 = PointerEventData_get_radius_m23EA54B76FCE87B9DC0DA1818B2A6D0FC7A43AB8_inline(L_71, /*hidden argument*/NULL);
		PointerEvent_set_radius_m11370F334E729B70C1EBE7045547840BF607FAE1_inline(__this, L_72, /*hidden argument*/NULL);
		// radiusVariance = eventData.radiusVariance;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_73 = ___eventData1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = PointerEventData_get_radiusVariance_m909383C57D96BC1FF4B370892BBB0708515B0999_inline(L_73, /*hidden argument*/NULL);
		PointerEvent_set_radiusVariance_m8E42278D22E5919F197F107528C4A7FF44141D83_inline(__this, L_74, /*hidden argument*/NULL);
		// modifiers = s_Modifiers;
		IL2CPP_RUNTIME_CLASS_INIT(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_il2cpp_TypeInfo_var);
		int32_t L_75 = ((PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_StaticFields*)il2cpp_codegen_static_fields_for(PanelEventHandler_t390768EF1C97009C543FDEAF628EAFEA23B5C33E_il2cpp_TypeInfo_var))->get_s_Modifiers_8();
		PointerEvent_set_modifiers_mEA3BC9C6521FB58068CCBEE40FED28C5F4370AC9_inline(__this, L_75, /*hidden argument*/NULL);
		// if (isMove)
		bool L_76 = ___isMove2;
		if (!L_76)
		{
			goto IL_01cb;
		}
	}
	{
		// button = -1;
		PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179_inline(__this, (-1), /*hidden argument*/NULL);
		// clickCount = 0;
		PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01cb:
	{
		// button = button >= 0 ? button : 0;
		int32_t L_77;
		L_77 = PointerEvent_get_button_m73BE1DAD1647066281BAF47A02DA83FAB6026BEC_inline(__this, /*hidden argument*/NULL);
		G_B17_0 = __this;
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			G_B18_0 = __this;
			goto IL_01d8;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		goto IL_01de;
	}

IL_01d8:
	{
		int32_t L_78;
		L_78 = PointerEvent_get_button_m73BE1DAD1647066281BAF47A02DA83FAB6026BEC_inline(__this, /*hidden argument*/NULL);
		G_B19_0 = L_78;
		G_B19_1 = G_B18_0;
	}

IL_01de:
	{
		PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179_inline(G_B19_1, G_B19_0, /*hidden argument*/NULL);
		// clickCount = Mathf.Max(1, clickCount);
		int32_t L_79;
		L_79 = PointerEvent_get_clickCount_m5C1A6BB64C60E17582D61DC7538BF5E46A3C56A8_inline(__this, /*hidden argument*/NULL);
		int32_t L_80;
		L_80 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(1, L_79, /*hidden argument*/NULL);
		PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6_inline(__this, L_80, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::SetPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent_SetPosition_m7A93FE631C4753ACA017DC1E57A9990FA69097D7 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOverride0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___deltaOverride1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// localPosition = position = positionOverride;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___positionOverride0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0;
		V_0 = L_1;
		PointerEvent_set_position_m2070392F417D5F6F15D9491F43043BEEB8CAE88F_inline(__this, L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		PointerEvent_set_localPosition_mE7DBCF0E95173F03DBFE0CDE60156A8845976449_inline(__this, L_2, /*hidden argument*/NULL);
		// deltaPosition = deltaOverride;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___deltaOverride1;
		PointerEvent_set_deltaPosition_m91C3FE8785DD76E41C6D1DEA779760782AC11413_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelEventHandler/PointerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent__ctor_m5D105BDF459A068E58C1A2A0A024A81EEE07A568 (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PanelEventHandler/PointerEvent::<Read>g__InRange|82_0(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEvent_U3CReadU3Eg__InRangeU7C82_0_m9777A18085ABC88B9427D4CDF5D1B5FCFB17AA86 (int32_t ___i0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		// bool InRange(int i, int start, int count) => i >= start && i < start + count;
		int32_t L_0 = ___i0;
		int32_t L_1 = ___start1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_2 = ___i0;
		int32_t L_3 = ___start1;
		int32_t L_4 = ___count2;
		return (bool)((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))))? 1 : 0);
	}

IL_000b:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::Compare(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastHitComparer_Compare_m856F219A57E2827C0E4E0E075D0A7205CC6C39CE (RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___x0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___y1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return x.distance.CompareTo(y.distance);
		float L_0;
		L_0 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___x0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___y1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_m261F5A7BB4E3DD3FD760B27E70D84197DEF00F98 (RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__cctor_m459166A92BCDDCF83F2A33C4266B6AB6524DE04B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RaycastHitComparer instance = new RaycastHitComparer();
		RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 * L_0 = (RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877 *)il2cpp_codegen_object_new(RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_il2cpp_TypeInfo_var);
		RaycastHitComparer__ctor_m261F5A7BB4E3DD3FD760B27E70D84197DEF00F98(L_0, /*hidden argument*/NULL);
		((RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_StaticFields*)il2cpp_codegen_static_fields_for(RaycastHitComparer_tC1146CEF99040544A2E1034A40CA0E4747E83877_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ButtonState_get_eventData_mC7A3D0172F44EEE3570A751D9DD154C465F0C48F (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EventData; }
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_0 = __this->get_m_EventData_1();
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_set_eventData_m85A92E7A2104B5A248A7AEA7A8C86F41DB47CC73 (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_EventData = value; }
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_0 = ___value0;
		__this->set_m_EventData_1(L_0);
		// set { m_EventData = value; }
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ButtonState_get_button_m7C3B83551E176EDC1232A65589B4FC685CE022A5 (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Button; }
		int32_t L_0 = __this->get_m_Button_0();
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState_set_button_mBEA15BAD80964F6716746E100CFF406537D38261 (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Button = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Button_0(L_0);
		// set { m_Button = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonState__ctor_m7D9B7D5AB76C393C5A3CD720ECAA2FCE990E8E6F (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method)
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
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::PressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_PressedThisFrame_mEB9CB4D5EFBFDD43BB877CBA36FCE0DA8F21C3FF (MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * __this, const RuntimeMethod* method)
{
	{
		// return buttonState == PointerEventData.FramePressState.Pressed || buttonState == PointerEventData.FramePressState.PressedAndReleased;
		int32_t L_0 = __this->get_buttonState_0();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->get_buttonState_0();
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::ReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_ReleasedThisFrame_m014BA45901727A4D5C432BB239D0E076D8A82EA1 (MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * __this, const RuntimeMethod* method)
{
	{
		// return buttonState == PointerEventData.FramePressState.Released || buttonState == PointerEventData.FramePressState.PressedAndReleased;
		int32_t L_0 = __this->get_buttonState_0();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_buttonState_0();
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseButtonEventData__ctor_m66CCB772A4D986FB2A401E96F6296A56BBD6A238 (MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * __this, const RuntimeMethod* method)
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
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * MouseState_GetButtonState_m4CB357F518E9333CAB0CE3A54755429A6B8D0A32 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF1214425D58EB915621D1DC66C969EF8F6A285F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69ED5B756629D6CD329C68F5F7E1D1595ACDE013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// ButtonState tracked = null;
		V_0 = (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 *)NULL;
		// var trackedButtonsCount = m_TrackedButtons.Count;
		List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * L_0 = __this->get_m_TrackedButtons_0();
		int32_t L_1;
		L_1 = List_1_get_Count_m69ED5B756629D6CD329C68F5F7E1D1595ACDE013_inline(L_0, /*hidden argument*/List_1_get_Count_m69ED5B756629D6CD329C68F5F7E1D1595ACDE013_RuntimeMethod_var);
		V_1 = L_1;
		// for (int i = 0; i < trackedButtonsCount; i++)
		V_2 = 0;
		goto IL_0039;
	}

IL_0012:
	{
		// if (m_TrackedButtons[i].button == button)
		List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * L_2 = __this->get_m_TrackedButtons_0();
		int32_t L_3 = V_2;
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_4;
		L_4 = List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ButtonState_get_button_m7C3B83551E176EDC1232A65589B4FC685CE022A5_inline(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___button0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0035;
		}
	}
	{
		// tracked = m_TrackedButtons[i];
		List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * L_7 = __this->get_m_TrackedButtons_0();
		int32_t L_8 = V_2;
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_9;
		L_9 = List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m32E471E7E295588EA7517D1C207A2CAB2F3440FC_RuntimeMethod_var);
		V_0 = L_9;
		// break;
		goto IL_003d;
	}

IL_0035:
	{
		// for (int i = 0; i < trackedButtonsCount; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < trackedButtonsCount; i++)
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}

IL_003d:
	{
		// if (tracked == null)
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0064;
		}
	}
	{
		// tracked = new ButtonState { button = button, eventData = new MouseButtonEventData() };
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_14 = (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 *)il2cpp_codegen_object_new(ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562_il2cpp_TypeInfo_var);
		ButtonState__ctor_m7D9B7D5AB76C393C5A3CD720ECAA2FCE990E8E6F(L_14, /*hidden argument*/NULL);
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_15 = L_14;
		int32_t L_16 = ___button0;
		ButtonState_set_button_mBEA15BAD80964F6716746E100CFF406537D38261_inline(L_15, L_16, /*hidden argument*/NULL);
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_17 = L_15;
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_18 = (MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 *)il2cpp_codegen_object_new(MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6_il2cpp_TypeInfo_var);
		MouseButtonEventData__ctor_m66CCB772A4D986FB2A401E96F6296A56BBD6A238(L_18, /*hidden argument*/NULL);
		ButtonState_set_eventData_m85A92E7A2104B5A248A7AEA7A8C86F41DB47CC73_inline(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_17;
		// m_TrackedButtons.Add(tracked);
		List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * L_19 = __this->get_m_TrackedButtons_0();
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_20 = V_0;
		List_1_Add_mAF1214425D58EB915621D1DC66C969EF8F6A285F(L_19, L_20, /*hidden argument*/List_1_Add_mAF1214425D58EB915621D1DC66C969EF8F6A285F_RuntimeMethod_var);
	}

IL_0064:
	{
		// return tracked;
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_21 = V_0;
		return L_21;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState_SetButtonState_mA97DA94B17CF78F158EC17EC16283626BE513937 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, int32_t ___button0, int32_t ___stateForMouseButton1, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data2, const RuntimeMethod* method)
{
	{
		// var toModify = GetButtonState(button);
		int32_t L_0 = ___button0;
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_1;
		L_1 = MouseState_GetButtonState_m4CB357F518E9333CAB0CE3A54755429A6B8D0A32(__this, L_0, /*hidden argument*/NULL);
		// toModify.eventData.buttonState = stateForMouseButton;
		ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * L_2 = L_1;
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_3;
		L_3 = ButtonState_get_eventData_mC7A3D0172F44EEE3570A751D9DD154C465F0C48F_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___stateForMouseButton1;
		L_3->set_buttonState_0(L_4);
		// toModify.eventData.buttonData = data;
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_5;
		L_5 = ButtonState_get_eventData_mC7A3D0172F44EEE3570A751D9DD154C465F0C48F_inline(L_2, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___data2;
		L_5->set_buttonData_1(L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2C561949211613B6EB1147E314EC59F5F5D06FF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ButtonState> m_TrackedButtons = new List<ButtonState>();
		List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * L_0 = (List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E *)il2cpp_codegen_object_new(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E_il2cpp_TypeInfo_var);
		List_1__ctor_m2C561949211613B6EB1147E314EC59F5F5D06FF1(L_0, /*hidden argument*/List_1__ctor_m2C561949211613B6EB1147E314EC59F5F5D06FF1_RuntimeMethod_var);
		__this->set_m_TrackedButtons_0(L_0);
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
IL2CPP_EXTERN_C  RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311 (GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * (DEFAULT_CALL *PInvokeFunc)(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * returnValue = il2cppPInvokeFunc(___r0, ___f1, ___i2);

	// Marshaling of return value back from native representation
	RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*>((RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*)SZArrayNew(RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09_il2cpp_TypeInfo_var, 1));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRayIntersectionAllCallback__ctor_m3FB3501090DF1536469BE66442205BC29D4D2725 (GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.RaycastHit2D[] UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* GetRayIntersectionAllCallback_Invoke_mC413E2F7F934A21FCF43D6FC99DB7A16A85427FC (GetRayIntersectionAllCallback_t9D6C059892DE030746D2873EB8871415BAC79311 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method)
{
	RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* result = NULL;
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
				typedef RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* (*FunctionPointerType) (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___r0, ___f1, ___i2, targetMethod);
			}
			else
			{
				// closed
				typedef RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___f1, ___i2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* (*FunctionPointerType) (RuntimeObject*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___f1, ___i2, targetMethod);
			}
			else
			{
				typedef RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___f1, ___i2, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C (GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___results1' to native representation
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * ____results1_marshaled = NULL;
	if (___results1 != NULL)
	{
		____results1_marshaled = reinterpret_cast<RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *>((___results1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___r0, ____results1_marshaled, ___f2, ___i3);

	return returnValue;
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRayIntersectionAllNonAllocCallback__ctor_mBC32BC06655600F7870640A99A1D0A4970FD0403 (GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetRayIntersectionAllNonAllocCallback_Invoke_m3A03F6D1E31D55B967B4688FE35EA70C618B1BC9 (GetRayIntersectionAllNonAllocCallback_t6DAE64211C37E996B257BF2C54707DAD3474D69C * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___r0, ___results1, ___f2, ___i3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___results1, ___f2, ___i3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject*, RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___results1, ___f2, ___i3, targetMethod);
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___results1, ___f2, ___i3, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34 (GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___results1' to native representation
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ____results1_marshaled = NULL;
	if (___results1 != NULL)
	{
		____results1_marshaled = reinterpret_cast<RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *>((___results1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___r0, ____results1_marshaled, ___f2, ___i3);

	return returnValue;
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRaycastNonAllocCallback__ctor_m5EF88C8923C7A175F825682E242A0A21F7F9CDC1 (GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetRaycastNonAllocCallback_Invoke_m9F06CE1FAAC409FACB2138A85B6E69E6A38099E5 (GetRaycastNonAllocCallback_tA4A6A2336A9B9FEE31F8F5344576B3BB0A7B3F34 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___r0, ___results1, ___f2, ___i3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___results1, ___f2, ___i3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef int32_t (*FunctionPointerType) (RuntimeObject*, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___results1, ___f2, ___i3, targetMethod);
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___results1, ___f2, ___i3, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  DelegatePInvokeWrapper_Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29 (Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p21, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  (DEFAULT_CALL *PInvokeFunc)(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  returnValue = il2cppPInvokeFunc(___p10, ___p21, ___f2, ___i3);

	return returnValue;
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast2DCallback__ctor_mBE2DD6E8DBBE5E92D144CF9E21D3F7B446A84DF0 (Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.RaycastHit2D UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback::Invoke(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Raycast2DCallback_Invoke_mD30E994123A65522A82EF29EBAA5A75ED1A25097 (Raycast2DCallback_t125C1CA6D0148380915E597AC8ADBB93EFB0EE29 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p21, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  result;
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
				typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  (*FunctionPointerType) (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___p10, ___p21, ___f2, ___i3, targetMethod);
			}
			else
			{
				// closed
				typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___p10, ___p21, ___f2, ___i3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  (*FunctionPointerType) (RuntimeObject*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___p10) - 1), ___p21, ___f2, ___i3, targetMethod);
			}
			else
			{
				typedef RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  (*FunctionPointerType) (void*, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___p10, ___p21, ___f2, ___i3, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F (Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hit1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___r0, ___hit1, ___f2, ___i3);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Raycast3DCallback__ctor_mAAD87D0BBDD341D9798A282988F3E29209F367EC (Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Raycast3DCallback_Invoke_mC1E4D81B6EF4118CAB6ED4ECEA3312AFB1E81744 (Raycast3DCallback_t27A8B301052E9C6A4A7D38F95293CA129C39373F * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hit1, float ___f2, int32_t ___i3, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___r0, ___hit1, ___f2, ___i3, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___hit1, ___f2, ___i3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef bool (*FunctionPointerType) (RuntimeObject*, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___hit1, ___f2, ___i3, targetMethod);
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___hit1, ___f2, ___i3, targetMethod);
			}
		}
	}
	return result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* DelegatePInvokeWrapper_RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005 (RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * (DEFAULT_CALL *PInvokeFunc)(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * returnValue = il2cppPInvokeFunc(___r0, ___f1, ___i2);

	// Marshaling of return value back from native representation
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*>((RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)SZArrayNew(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09_il2cpp_TypeInfo_var, 1));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastAllCallback__ctor_m219974A3E0AE674C4843A1638B9B97E967D942B6 (RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.RaycastHit[] UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* RaycastAllCallback_Invoke_m4A107AB96A1A28BD319A50AFBFD401A791E8DD26 (RaycastAllCallback_t48E12CFDCFDEA0CD7D83F9DDE1E341DBCC855005 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* result = NULL;
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
				typedef RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* (*FunctionPointerType) (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___r0, ___f1, ___i2, targetMethod);
			}
			else
			{
				// closed
				typedef RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___f1, ___i2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* (*FunctionPointerType) (RuntimeObject*, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___f1, ___i2, targetMethod);
			}
			else
			{
				typedef RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* (*FunctionPointerType) (void*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___f1, ___i2, targetMethod);
			}
		}
	}
	return result;
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
// System.Void UnityEngine.UI.ScrollRect/ScrollRectEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRectEvent__ctor_mF8413852D2A70FE11491D494D0909CA5BD0FD303 (ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7(__this, /*hidden argument*/UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickRepeatU3Ed__58__ctor_m8873755FA35DD3F2FD77BC0BBF4790DEDAD63E34 (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickRepeatU3Ed__58_System_IDisposable_Dispose_m53CB1C56045E24999148EA191B041CB6815839BA (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClickRepeatU3Ed__58_MoveNext_mB0F8287D6C01B3C1F27761E3736E533046D2C813 (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B14_0 = 0.0f;
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * G_B14_1 = NULL;
	float G_B13_0 = 0.0f;
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * G_B13_1 = NULL;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * G_B15_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00bc;
	}

IL_0026:
	{
		// if (!RectTransformUtility.RectangleContainsScreenPoint(m_HandleRect, screenPosition, camera))
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_4 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = L_4->get_m_HandleRect_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_screenPosition_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_RectangleContainsScreenPoint_m7D92A04D6DA6F4C7CC72439221C2EE46034A0595(L_5, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00a1;
		}
	}
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(m_HandleRect, screenPosition, camera, out localMousePos))
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_9 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = L_9->get_m_HandleRect_20();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = __this->get_screenPosition_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_camera_4();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_10, L_11, L_12, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a1;
		}
	}
	{
		// var axisCoordinate = axis == 0 ? localMousePos.x : localMousePos.y;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_14 = V_1;
		int32_t L_15;
		L_15 = Scrollbar_get_axis_m98559873075F3EC100F759F77D85F125DF3EAD5F(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_2;
		float L_17 = L_16.get_y_1();
		G_B9_0 = L_17;
		goto IL_0070;
	}

IL_006a:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_2;
		float L_19 = L_18.get_x_0();
		G_B9_0 = L_19;
	}

IL_0070:
	{
		// float change = axisCoordinate < 0 ? size : -size;
		if ((((float)G_B9_0) < ((float)(0.0f))))
		{
			goto IL_0080;
		}
	}
	{
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_20 = V_1;
		float L_21;
		L_21 = Scrollbar_get_size_m5D2EDDF92A6BA31ED642067D57E8B7174778E69B_inline(L_20, /*hidden argument*/NULL);
		G_B12_0 = ((-L_21));
		goto IL_0086;
	}

IL_0080:
	{
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_22 = V_1;
		float L_23;
		L_23 = Scrollbar_get_size_m5D2EDDF92A6BA31ED642067D57E8B7174778E69B_inline(L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
	}

IL_0086:
	{
		V_3 = G_B12_0;
		// value += reverseValue ? change : -change;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_24 = V_1;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_25 = V_1;
		float L_26;
		L_26 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_25, /*hidden argument*/NULL);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_27 = V_1;
		bool L_28;
		L_28 = Scrollbar_get_reverseValue_mE21B1C18892A9E7A7B977092CA78D190DE9D2038(L_27, /*hidden argument*/NULL);
		G_B13_0 = L_26;
		G_B13_1 = L_24;
		if (L_28)
		{
			G_B14_0 = L_26;
			G_B14_1 = L_24;
			goto IL_009a;
		}
	}
	{
		float L_29 = V_3;
		G_B15_0 = ((-L_29));
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_009b;
	}

IL_009a:
	{
		float L_30 = V_3;
		G_B15_0 = L_30;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_009b:
	{
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(G_B15_2, ((float)il2cpp_codegen_add((float)G_B15_1, (float)G_B15_0)), /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_31 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_31, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b5:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bc:
	{
		// while (isPointerDownAndNotDragging)
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_32 = V_1;
		bool L_33 = L_32->get_isPointerDownAndNotDragging_30();
		if (L_33)
		{
			goto IL_0026;
		}
	}
	{
		// StopCoroutine(m_PointerDownRepeat);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_34 = V_1;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_35 = V_1;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_36 = L_35->get_m_PointerDownRepeat_29();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(L_34, L_36, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClickRepeatU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D1D5B3A420C829CDCF5FF31E77ACBE2CF12C033 (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClickRepeatU3Ed__58_System_Collections_IEnumerator_Reset_m91332A8DFD75C0F222997DD4D8573EA9AAC27F36 (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClickRepeatU3Ed__58_System_Collections_IEnumerator_Reset_m91332A8DFD75C0F222997DD4D8573EA9AAC27F36_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClickRepeatU3Ed__58_System_Collections_IEnumerator_get_Current_m52060FC222F29953E4BC040BC88CCC64EF3C8492 (U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.UI.Scrollbar/ScrollEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollEvent__ctor_m44DC6D36587E09ACF8AC837A3251B4345559ACE8 (ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED(__this, /*hidden argument*/UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.Slider/SliderEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderEvent__ctor_m9D53B3806FC27FCFEB6B8EE6CF86FD7257DC0E6F (SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED(__this, /*hidden argument*/UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.StencilMaterial/MatEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatEntry__ctor_mE5E902719906D17EAC17E5861CD3A6BB91B913A0 (MatEntry_t94DD6F2A201E3EF569EE31B20C3EC8274A9E022E * __this, const RuntimeMethod* method)
{
	{
		// public CompareFunction compareFunction = CompareFunction.Always;
		__this->set_compareFunction_5(8);
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
// System.Void UnityEngine.UI.Toggle/ToggleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleEvent__ctor_m8B27AC4348B70FDEF171E184CE39A0B40CD07022 (ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.ToggleGroup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7AE6250C08FB205F11B09FB6971AC66417AA6438 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * L_0 = (U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 *)il2cpp_codegen_object_new(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE529EC087B06A93509276E7E9CA68D3E3E6CC257(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.ToggleGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE529EC087B06A93509276E7E9CA68D3E3E6CC257 (U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup/<>c::<AnyTogglesOn>b__13_0(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAnyTogglesOnU3Eb__13_0_m6B58E5D7E10F6C3A857BF297744D758E5D81B6B4 (U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___x0, const RuntimeMethod* method)
{
	{
		// return m_Toggles.Find(x => x.isOn) != null;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___x0;
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.ToggleGroup/<>c::<ActiveToggles>b__14_0(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CActiveTogglesU3Eb__14_0_m8A396237A2696D3A2068BE32BCB869F70904C9AD (U3CU3Ec_t6FADCC9ADE15B1BB28A4FA9CDCE1340EFAEB9961 * __this, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___x0, const RuntimeMethod* method)
{
	{
		// return m_Toggles.Where(x => x.isOn);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = ___x0;
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_0 = __this->get_m_Colors_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ColorBlock_get_fadeDuration_m37083141F2C18A45CC211E4683D1903E3A614B1C_inline (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * __this, const RuntimeMethod* method)
{
	{
		// public float fadeDuration      { get { return m_FadeDuration; } set { m_FadeDuration = value; } }
		float L_0 = __this->get_m_FadeDuration_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * DropdownItem_get_toggle_m696C6516BE86A6014F90D07B549868A999E2B247_inline (DropdownItem_t4D0754A7D4953D1DDC5663E6877182138BF8DEEB * __this, const RuntimeMethod* method)
{
	{
		// public Toggle        toggle        { get { return m_Toggle;        } set { m_Toggle = value;         } }
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_m_Toggle_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_text_m23C74889CF93559CD64F90EC8DA69C20C13FC549_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = ___value0;
		__this->set_m_Text_0(L_0);
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionData_set_image_m575DC2D9B5CF0727CBEB9F32B51B9B1E219C5A0C_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method)
{
	{
		// public Sprite image { get { return m_Image; } set { m_Image = value; } }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___value0;
		__this->set_m_Image_1(L_0);
		// public Sprite image { get { return m_Image; } set { m_Image = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OptionDataList_set_options_mC0550A0E7A192C60A93B5A6DF56D86BDC6609A8E_inline (OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * __this, List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<OptionData> options { get { return m_Options; } set { m_Options = value; } }
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_0 = ___value0;
		__this->set_m_Options_0(L_0);
		// public List<OptionData> options { get { return m_Options; } set { m_Options = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputField_get_isFocused_m60B873B25A63045E65D55BDC90268C8623D7C418_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AllowInput; }
		bool L_0 = __this->get_m_AllowInput_52();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * InputField_get_textComponent_mF2F6C6AB96152BA577A1364A663906315AD01D4F_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TextComponent; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_TextComponent_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * EventSystem_get_currentInputModule_mA369862FF1DB0C9CD447DE69F1E77DF0C0AE37E3_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentInputModule; }
		BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * L_0 = __this->get_m_CurrentInputModule_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pointerId_mC594F85728C2458396DD0BE4DA18FFD105E85C6A_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_pointerId_m952B98C55ED0D0866D56068DD573DCA3492EEB8F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; private set; }
		int32_t L_0 = __this->get_U3CpointerIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pointerType_mBC6E7E69839774C2DBECB1237A57BC217649D75D_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string pointerType { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CpointerTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_isPrimary_mC0791AEDE4A3154A34D03239114E00A5234619F8_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isPrimary { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisPrimaryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_m180AAB76815A20002896B6B3AAC5B27D9598CDC1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = __this->get_U3CbuttonU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_button_m4204B0D114034863454155E3D83C587004153179_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int button { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pressedButtons_m503BBE745C5238BCF3145D863C4A93D0F3DEBCC0_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pressedButtons { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = __this->get_U3CclickCountU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_clickCount_mBAE3AEBF5FE0A1423E5462D93D331ACFA50B71C6_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CdeltaU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_position_m2070392F417D5F6F15D9491F43043BEEB8CAE88F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 position { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_localPosition_mE7DBCF0E95173F03DBFE0CDE60156A8845976449_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 localPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3ClocalPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_deltaPosition_m91C3FE8785DD76E41C6D1DEA779760782AC11413_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 deltaPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CdeltaPositionU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_deltaTime_mA5A35683A18A7513445C565C39CDD9EB1F637CAC_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float deltaTime { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CdeltaTimeU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_pressure_mA81170913D7C3728117A74D1136BE958126EF03B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float pressure { get; set; }
		float L_0 = __this->get_U3CpressureU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_pressure_mED595BC110E6530F28174E72DB2BAE41D4748E87_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float pressure { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CpressureU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_tangentialPressure_mC8D73DC7BCBCDD3F9B304F6D67306636C7ABEF5B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float tangentialPressure { get; set; }
		float L_0 = __this->get_U3CtangentialPressureU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_tangentialPressure_m27F5B8A25D814CB92BEBB2CB7FA6E4280075F5BD_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float tangentialPressure { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CtangentialPressureU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_altitudeAngle_mCC4DDEAD13A70868CA04A8CC52B48F8C47D86B2C_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float altitudeAngle { get; set; }
		float L_0 = __this->get_U3CaltitudeAngleU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_altitudeAngle_mAB9497C0F7E6F874F415EF7EE85D8326984769AB_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float altitudeAngle { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CaltitudeAngleU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_azimuthAngle_m49C7005B95EE0876B98DCEF10EB06E89499A7BE4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float azimuthAngle { get; set; }
		float L_0 = __this->get_U3CazimuthAngleU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_azimuthAngle_m8C7C98E167CA8F099A7967A002DA2458AB5F4B60_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float azimuthAngle { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CazimuthAngleU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_twist_m8FDDC2EA4432155C0ECA62287D484AF368162E6B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float twist { get; set; }
		float L_0 = __this->get_U3CtwistU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_twist_mE8E3FE627C1992916AF67DBB0C078B06A45FC01F_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float twist { get; private set; }
		float L_0 = ___value0;
		__this->set_U3CtwistU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_radius_m23EA54B76FCE87B9DC0DA1818B2A6D0FC7A43AB8_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radius { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CradiusU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_radius_m11370F334E729B70C1EBE7045547840BF607FAE1_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 radius { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CradiusU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_radiusVariance_m909383C57D96BC1FF4B370892BBB0708515B0999_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 radiusVariance { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CradiusVarianceU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_radiusVariance_m8E42278D22E5919F197F107528C4A7FF44141D83_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 radiusVariance { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CradiusVarianceU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEvent_set_modifiers_mEA3BC9C6521FB58068CCBEE40FED28C5F4370AC9_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EventModifiers modifiers { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_button_m73BE1DAD1647066281BAF47A02DA83FAB6026BEC_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int button { get; private set; }
		int32_t L_0 = __this->get_U3CbuttonU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_clickCount_m5C1A6BB64C60E17582D61DC7538BF5E46A3C56A8_inline (PointerEvent_tA3AFA0BA20E0B972290378456C49195CF23752B1 * __this, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; private set; }
		int32_t L_0 = __this->get_U3CclickCountU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ButtonState_get_button_m7C3B83551E176EDC1232A65589B4FC685CE022A5_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Button; }
		int32_t L_0 = __this->get_m_Button_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonState_set_button_mBEA15BAD80964F6716746E100CFF406537D38261_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Button = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Button_0(L_0);
		// set { m_Button = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonState_set_eventData_m85A92E7A2104B5A248A7AEA7A8C86F41DB47CC73_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_EventData = value; }
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_0 = ___value0;
		__this->set_m_EventData_1(L_0);
		// set { m_EventData = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * ButtonState_get_eventData_mC7A3D0172F44EEE3570A751D9DD154C465F0C48F_inline (ButtonState_t49AF0FCF7DF429002E167972B40DC5A2A3804562 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EventData; }
		MouseButtonEventData_tE8E157C9D47E03160B193B4853B5DF5AA3FA65B6 * L_0 = __this->get_m_EventData_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Scrollbar_get_size_m5D2EDDF92A6BA31ED642067D57E8B7174778E69B_inline (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method)
{
	{
		// public float size { get { return m_Size; } set { if (SetPropertyUtility.SetStruct(ref m_Size, Mathf.Clamp01(value))) UpdateVisuals(); } }
		float L_0 = __this->get_m_Size_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m863D7819591108234EBC5D9C037281E7937937E4_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  List_1_get_Item_m881D01322CD00E1AA04E6522C79523FFF315187A_gshared_inline (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_2 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)L_2, (int32_t)L_3);
		return (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  List_1_get_Item_mEA3B7024A71447E870607D8ABFB32F9BCC0500D8_gshared_inline (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_2 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_2, (int32_t)L_3);
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4;
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
