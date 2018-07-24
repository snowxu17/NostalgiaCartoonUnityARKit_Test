#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.XR.iOS.VideoFormatEnumerator
struct VideoFormatEnumerator_t3131638505;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityPointCloudExample
struct UnityPointCloudExample_t3649008995;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t1157215840;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// VideoFormatButton
struct VideoFormatButton_t1937817916;
// VideoFormatButton/VideoFormatButtonPressed
struct VideoFormatButtonPressed_t1187798507;
// System.Delegate
struct Delegate_t1188392813;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// VideoFormatsExample
struct VideoFormatsExample_t2303262312;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_t3416529523;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3929719369;
// UnityEngine.XR.iOS.UnityARVideoFormat[]
struct UnityARVideoFormatU5BU5D_t3086264048;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_t2924556994;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t1608557165;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t3113222537;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t4030593004;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t1851120876;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t4007601678;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t23344545;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t3526051790;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_t3258688950;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t2550278937;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded
struct ARImageAnchorAdded_t763367172;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated
struct ARImageAnchorUpdated_t1988379239;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved
struct ARImageAnchorRemoved_t841752569;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t2125002991;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3772093212;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t923029411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3254989823;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback
struct ARSessionLocalizeCallback_t3284060032;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t1988849735;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1565083332;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t2645242205;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3371657877;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3285282493;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t3964727538;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t386858594;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t1021040265;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_t3423900432;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_t2563439402;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded
struct internal_ARImageAnchorAdded_t958088978;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated
struct internal_ARImageAnchorUpdated_t294417830;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved
struct internal_ARImageAnchorRemoved_t1751104571;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var;
extern const uint32_t VideoFormatEnumerator_BeginInvoke_m3988644263_MetadataUsageId;
extern RuntimeClass* ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const uint32_t UnityPointCloudExample_Start_m4202814548_MetadataUsageId;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m3743125852_RuntimeMethod_var;
extern const uint32_t UnityPointCloudExample_Update_m3072589646_MetadataUsageId;
extern RuntimeClass* VideoFormatButton_t1937817916_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var;
extern const uint32_t VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId;
extern const uint32_t VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral51204818;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral1652116954;
extern const uint32_t VideoFormatButton_Populate_m915370135_MetadataUsageId;
extern const uint32_t VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId;
extern const uint32_t VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId;
extern const RuntimeMethod* VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
extern const uint32_t VideoFormatsExample_Start_m1615238214_MetadataUsageId;
extern const uint32_t VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3413760873_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3655906576_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2987439075_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m510309855_RuntimeMethod_var;
extern const uint32_t VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId;
extern const uint32_t VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId;
struct Vector3_t3722313464 ;

struct Vector3U5BU5D_t1718750761;
struct ObjectU5BU5D_t2843939325;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LIST_1_T3416529523_H
#define LIST_1_T3416529523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  List_1_t3416529523  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UnityARVideoFormatU5BU5D_t3086264048* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____items_1)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get__items_1() const { return ____items_1; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3416529523, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3416529523_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UnityARVideoFormatU5BU5D_t3086264048* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3416529523_StaticFields, ___EmptyArray_4)); }
	inline UnityARVideoFormatU5BU5D_t3086264048* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UnityARVideoFormatU5BU5D_t3086264048** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UnityARVideoFormatU5BU5D_t3086264048* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3416529523_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t3328599146* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t3328599146* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t3328599146* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef UNITYARLIGHTESTIMATE_T1498306117_H
#define UNITYARLIGHTESTIMATE_T1498306117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1498306117 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1498306117, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1498306117_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef UNITYVIDEOPARAMS_T4155354995_H
#define UNITYVIDEOPARAMS_T4155354995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t4155354995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t4155354995, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T4155354995_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef WORLDTYPES_T3445540846_H
#define WORLDTYPES_T3445540846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// worldTypes
struct  worldTypes_t3445540846 
{
public:
	// System.Int32 worldTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(worldTypes_t3445540846, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDTYPES_T3445540846_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef ARTRACKINGSTATE_T3182235352_H
#define ARTRACKINGSTATE_T3182235352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3182235352 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3182235352, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T3182235352_H
#ifndef ARTRACKINGSTATEREASON_T2348933773_H
#define ARTRACKINGSTATEREASON_T2348933773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2348933773 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2348933773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T2348933773_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef UNITYARVIDEOFORMAT_T1944454781_H
#define UNITYARVIDEOFORMAT_T1944454781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_t1944454781 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_t1944454781_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_t3416529523 * ___videoFormatsList_4;
	// UnityEngine.XR.iOS.VideoFormatEnumerator UnityEngine.XR.iOS.UnityARVideoFormat::<>f__mg$cache0
	VideoFormatEnumerator_t3131638505 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___videoFormatsList_4)); }
	inline List_1_t3416529523 * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_t3416529523 ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_t3416529523 * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatsList_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_t1944454781_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline VideoFormatEnumerator_t3131638505 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline VideoFormatEnumerator_t3131638505 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(VideoFormatEnumerator_t3131638505 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEOFORMAT_T1944454781_H
#ifndef LIGHTDATATYPE_T2323651587_H
#define LIGHTDATATYPE_T2323651587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_t2323651587 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_t2323651587, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_T2323651587_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ENUMERATOR_T1010806104_H
#define ENUMERATOR_T1010806104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>
struct  Enumerator_t1010806104 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3416529523 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UnityARVideoFormat_t1944454781  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___l_0)); }
	inline List_1_t3416529523 * get_l_0() const { return ___l_0; }
	inline List_1_t3416529523 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3416529523 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1010806104, ___current_3)); }
	inline UnityARVideoFormat_t1944454781  get_current_3() const { return ___current_3; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UnityARVideoFormat_t1944454781  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1010806104_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::videoFormat
	intptr_t ___videoFormat_5;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::arResourceGroupName
	String_t* ___arResourceGroupName_6;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}

	inline static int32_t get_offset_of_videoFormat_5() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___videoFormat_5)); }
	inline intptr_t get_videoFormat_5() const { return ___videoFormat_5; }
	inline intptr_t* get_address_of_videoFormat_5() { return &___videoFormat_5; }
	inline void set_videoFormat_5(intptr_t value)
	{
		___videoFormat_5 = value;
	}

	inline static int32_t get_offset_of_arResourceGroupName_6() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___arResourceGroupName_6)); }
	inline String_t* get_arResourceGroupName_6() const { return ___arResourceGroupName_6; }
	inline String_t** get_address_of_arResourceGroupName_6() { return &___arResourceGroupName_6; }
	inline void set_arResourceGroupName_6(String_t* value)
	{
		___arResourceGroupName_6 = value;
		Il2CppCodeGenWriteBarrier((&___arResourceGroupName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	intptr_t ___videoFormat_5;
	char* ___arResourceGroupName_6;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	intptr_t ___videoFormat_5;
	Il2CppChar* ___arResourceGroupName_6;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef UNITYARLIGHTDATA_T2160616730_H
#define UNITYARLIGHTDATA_T2160616730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t2160616730 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_t1498306117  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_t1498306117 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_t1498306117  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t2160616730, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_t2924556994 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_t2924556994 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_t2924556994 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t2160616730_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_t1498306117  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_t2924556994 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T2160616730_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef VIDEOFORMATBUTTONPRESSED_T1187798507_H
#define VIDEOFORMATBUTTONPRESSED_T1187798507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton/VideoFormatButtonPressed
struct  VideoFormatButtonPressed_t1187798507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTONPRESSED_T1187798507_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef VIDEOFORMATENUMERATOR_T3131638505_H
#define VIDEOFORMATENUMERATOR_T3131638505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.VideoFormatEnumerator
struct  VideoFormatEnumerator_t3131638505  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATENUMERATOR_T3131638505_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef UNITYARCAMERA_T2069150450_H
#define UNITYARCAMERA_T2069150450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2069150450 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t4155354995  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t2160616730  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1718750761* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4073345847  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4073345847  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4073345847  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4073345847  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___videoParams_4)); }
	inline UnityVideoParams_t4155354995  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t4155354995 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t4155354995  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___lightData_5)); }
	inline UnityARLightData_t2160616730  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t2160616730 * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t2160616730  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t4073345847  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t4073345847  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t2069150450, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t1718750761* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t1718750761* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_pinvoke
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2069150450_marshaled_com
{
	UnityARMatrix4x4_t4073345847  ___worldTransform_0;
	UnityARMatrix4x4_t4073345847  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t4155354995  ___videoParams_4;
	UnityARLightData_t2160616730_marshaled_com ___lightData_5;
	UnityARMatrix4x4_t4073345847  ___displayTransform_6;
	Vector3_t3722313464 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T2069150450_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#define UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t3929719369  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_19;

public:
	inline static int32_t get_offset_of_m_NativeARSession_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369, ___m_NativeARSession_19)); }
	inline intptr_t get_m_NativeARSession_19() const { return ___m_NativeARSession_19; }
	inline intptr_t* get_address_of_m_NativeARSession_19() { return &___m_NativeARSession_19; }
	inline void set_m_NativeARSession_19(intptr_t value)
	{
		___m_NativeARSession_19 = value;
	}
};

struct UnityARSessionNativeInterface_t3929719369_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t1157215840 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t1608557165 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t3113222537 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t4030593004 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t1851120876 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t4007601678 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t23344545 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t3526051790 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_t3258688950 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t2550278937 * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorAddedEvent
	ARImageAnchorAdded_t763367172 * ___ARImageAnchorAddedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorUpdatedEvent
	ARImageAnchorUpdated_t1988379239 * ___ARImageAnchorUpdatedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorRemovedEvent
	ARImageAnchorRemoved_t841752569 * ___ARImageAnchorRemovedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t2125002991 * ___ARSessionFailedEvent_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3772093212 * ___ARSessionInterruptedEvent_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3772093212 * ___ARSessioninterruptionEndedEvent_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t923029411 * ___ARSessionTrackingChangedEvent_16;
	// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::<ARSessionShouldAttemptRelocalization>k__BackingField
	bool ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2069150450  ___s_Camera_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t3929719369 * ___s_UnityARSessionNativeInterface_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3254989823 * ___U3CU3Ef__mgU24cache0_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t2125002991 * ___U3CU3Ef__mgU24cache1_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache2_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3772093212 * ___U3CU3Ef__mgU24cache3_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	ARSessionLocalizeCallback_t3284060032 * ___U3CU3Ef__mgU24cache4_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARSessionTrackingChanged_t1988849735 * ___U3CU3Ef__mgU24cache5_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorAdded_t1565083332 * ___U3CU3Ef__mgU24cache6_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorUpdated_t2645242205 * ___U3CU3Ef__mgU24cache7_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARAnchorRemoved_t3371657877 * ___U3CU3Ef__mgU24cache8_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorAdded_t3285282493 * ___U3CU3Ef__mgU24cache9_30;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorUpdated_t3964727538 * ___U3CU3Ef__mgU24cacheA_31;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheB
	internal_ARUserAnchorRemoved_t386858594 * ___U3CU3Ef__mgU24cacheB_32;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheC
	internal_ARFaceAnchorAdded_t1021040265 * ___U3CU3Ef__mgU24cacheC_33;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheD
	internal_ARFaceAnchorUpdated_t3423900432 * ___U3CU3Ef__mgU24cacheD_34;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheE
	internal_ARFaceAnchorRemoved_t2563439402 * ___U3CU3Ef__mgU24cacheE_35;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheF
	internal_ARImageAnchorAdded_t958088978 * ___U3CU3Ef__mgU24cacheF_36;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache10
	internal_ARImageAnchorUpdated_t294417830 * ___U3CU3Ef__mgU24cache10_37;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache11
	internal_ARImageAnchorRemoved_t1751104571 * ___U3CU3Ef__mgU24cache11_38;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t1157215840 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t1157215840 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t1157215840 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t1608557165 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t1608557165 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t1608557165 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t3113222537 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t3113222537 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t3113222537 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t4030593004 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t4030593004 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t4030593004 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t1851120876 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t1851120876 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t1851120876 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t4007601678 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t4007601678 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t4007601678 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t23344545 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t23344545 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t23344545 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t3526051790 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t3526051790 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t3526051790 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_t3258688950 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_t3258688950 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_t3258688950 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t2550278937 * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t2550278937 ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t2550278937 * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorAddedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorAddedEvent_10)); }
	inline ARImageAnchorAdded_t763367172 * get_ARImageAnchorAddedEvent_10() const { return ___ARImageAnchorAddedEvent_10; }
	inline ARImageAnchorAdded_t763367172 ** get_address_of_ARImageAnchorAddedEvent_10() { return &___ARImageAnchorAddedEvent_10; }
	inline void set_ARImageAnchorAddedEvent_10(ARImageAnchorAdded_t763367172 * value)
	{
		___ARImageAnchorAddedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorAddedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorUpdatedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorUpdatedEvent_11)); }
	inline ARImageAnchorUpdated_t1988379239 * get_ARImageAnchorUpdatedEvent_11() const { return ___ARImageAnchorUpdatedEvent_11; }
	inline ARImageAnchorUpdated_t1988379239 ** get_address_of_ARImageAnchorUpdatedEvent_11() { return &___ARImageAnchorUpdatedEvent_11; }
	inline void set_ARImageAnchorUpdatedEvent_11(ARImageAnchorUpdated_t1988379239 * value)
	{
		___ARImageAnchorUpdatedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorUpdatedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorRemovedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARImageAnchorRemovedEvent_12)); }
	inline ARImageAnchorRemoved_t841752569 * get_ARImageAnchorRemovedEvent_12() const { return ___ARImageAnchorRemovedEvent_12; }
	inline ARImageAnchorRemoved_t841752569 ** get_address_of_ARImageAnchorRemovedEvent_12() { return &___ARImageAnchorRemovedEvent_12; }
	inline void set_ARImageAnchorRemovedEvent_12(ARImageAnchorRemoved_t841752569 * value)
	{
		___ARImageAnchorRemovedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorRemovedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionFailedEvent_13)); }
	inline ARSessionFailed_t2125002991 * get_ARSessionFailedEvent_13() const { return ___ARSessionFailedEvent_13; }
	inline ARSessionFailed_t2125002991 ** get_address_of_ARSessionFailedEvent_13() { return &___ARSessionFailedEvent_13; }
	inline void set_ARSessionFailedEvent_13(ARSessionFailed_t2125002991 * value)
	{
		___ARSessionFailedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_13), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionInterruptedEvent_14)); }
	inline ARSessionCallback_t3772093212 * get_ARSessionInterruptedEvent_14() const { return ___ARSessionInterruptedEvent_14; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessionInterruptedEvent_14() { return &___ARSessionInterruptedEvent_14; }
	inline void set_ARSessionInterruptedEvent_14(ARSessionCallback_t3772093212 * value)
	{
		___ARSessionInterruptedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_14), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessioninterruptionEndedEvent_15)); }
	inline ARSessionCallback_t3772093212 * get_ARSessioninterruptionEndedEvent_15() const { return ___ARSessioninterruptionEndedEvent_15; }
	inline ARSessionCallback_t3772093212 ** get_address_of_ARSessioninterruptionEndedEvent_15() { return &___ARSessioninterruptionEndedEvent_15; }
	inline void set_ARSessioninterruptionEndedEvent_15(ARSessionCallback_t3772093212 * value)
	{
		___ARSessioninterruptionEndedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_15), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___ARSessionTrackingChangedEvent_16)); }
	inline ARSessionTrackingChanged_t923029411 * get_ARSessionTrackingChangedEvent_16() const { return ___ARSessionTrackingChangedEvent_16; }
	inline ARSessionTrackingChanged_t923029411 ** get_address_of_ARSessionTrackingChangedEvent_16() { return &___ARSessionTrackingChangedEvent_16; }
	inline void set_ARSessionTrackingChangedEvent_16(ARSessionTrackingChanged_t923029411 * value)
	{
		___ARSessionTrackingChangedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_16), value);
	}

	inline static int32_t get_offset_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17)); }
	inline bool get_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() const { return ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return &___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline void set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17(bool value)
	{
		___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_s_Camera_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_Camera_18)); }
	inline UnityARCamera_t2069150450  get_s_Camera_18() const { return ___s_Camera_18; }
	inline UnityARCamera_t2069150450 * get_address_of_s_Camera_18() { return &___s_Camera_18; }
	inline void set_s_Camera_18(UnityARCamera_t2069150450  value)
	{
		___s_Camera_18 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___s_UnityARSessionNativeInterface_20)); }
	inline UnityARSessionNativeInterface_t3929719369 * get_s_UnityARSessionNativeInterface_20() const { return ___s_UnityARSessionNativeInterface_20; }
	inline UnityARSessionNativeInterface_t3929719369 ** get_address_of_s_UnityARSessionNativeInterface_20() { return &___s_UnityARSessionNativeInterface_20; }
	inline void set_s_UnityARSessionNativeInterface_20(UnityARSessionNativeInterface_t3929719369 * value)
	{
		___s_UnityARSessionNativeInterface_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache0_21)); }
	inline internal_ARFrameUpdate_t3254989823 * get_U3CU3Ef__mgU24cache0_21() const { return ___U3CU3Ef__mgU24cache0_21; }
	inline internal_ARFrameUpdate_t3254989823 ** get_address_of_U3CU3Ef__mgU24cache0_21() { return &___U3CU3Ef__mgU24cache0_21; }
	inline void set_U3CU3Ef__mgU24cache0_21(internal_ARFrameUpdate_t3254989823 * value)
	{
		___U3CU3Ef__mgU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache1_22)); }
	inline ARSessionFailed_t2125002991 * get_U3CU3Ef__mgU24cache1_22() const { return ___U3CU3Ef__mgU24cache1_22; }
	inline ARSessionFailed_t2125002991 ** get_address_of_U3CU3Ef__mgU24cache1_22() { return &___U3CU3Ef__mgU24cache1_22; }
	inline void set_U3CU3Ef__mgU24cache1_22(ARSessionFailed_t2125002991 * value)
	{
		___U3CU3Ef__mgU24cache1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache2_23)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache2_23() const { return ___U3CU3Ef__mgU24cache2_23; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache2_23() { return &___U3CU3Ef__mgU24cache2_23; }
	inline void set_U3CU3Ef__mgU24cache2_23(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache3_24)); }
	inline ARSessionCallback_t3772093212 * get_U3CU3Ef__mgU24cache3_24() const { return ___U3CU3Ef__mgU24cache3_24; }
	inline ARSessionCallback_t3772093212 ** get_address_of_U3CU3Ef__mgU24cache3_24() { return &___U3CU3Ef__mgU24cache3_24; }
	inline void set_U3CU3Ef__mgU24cache3_24(ARSessionCallback_t3772093212 * value)
	{
		___U3CU3Ef__mgU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache4_25)); }
	inline ARSessionLocalizeCallback_t3284060032 * get_U3CU3Ef__mgU24cache4_25() const { return ___U3CU3Ef__mgU24cache4_25; }
	inline ARSessionLocalizeCallback_t3284060032 ** get_address_of_U3CU3Ef__mgU24cache4_25() { return &___U3CU3Ef__mgU24cache4_25; }
	inline void set_U3CU3Ef__mgU24cache4_25(ARSessionLocalizeCallback_t3284060032 * value)
	{
		___U3CU3Ef__mgU24cache4_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache5_26)); }
	inline internal_ARSessionTrackingChanged_t1988849735 * get_U3CU3Ef__mgU24cache5_26() const { return ___U3CU3Ef__mgU24cache5_26; }
	inline internal_ARSessionTrackingChanged_t1988849735 ** get_address_of_U3CU3Ef__mgU24cache5_26() { return &___U3CU3Ef__mgU24cache5_26; }
	inline void set_U3CU3Ef__mgU24cache5_26(internal_ARSessionTrackingChanged_t1988849735 * value)
	{
		___U3CU3Ef__mgU24cache5_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache6_27)); }
	inline internal_ARAnchorAdded_t1565083332 * get_U3CU3Ef__mgU24cache6_27() const { return ___U3CU3Ef__mgU24cache6_27; }
	inline internal_ARAnchorAdded_t1565083332 ** get_address_of_U3CU3Ef__mgU24cache6_27() { return &___U3CU3Ef__mgU24cache6_27; }
	inline void set_U3CU3Ef__mgU24cache6_27(internal_ARAnchorAdded_t1565083332 * value)
	{
		___U3CU3Ef__mgU24cache6_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache7_28)); }
	inline internal_ARAnchorUpdated_t2645242205 * get_U3CU3Ef__mgU24cache7_28() const { return ___U3CU3Ef__mgU24cache7_28; }
	inline internal_ARAnchorUpdated_t2645242205 ** get_address_of_U3CU3Ef__mgU24cache7_28() { return &___U3CU3Ef__mgU24cache7_28; }
	inline void set_U3CU3Ef__mgU24cache7_28(internal_ARAnchorUpdated_t2645242205 * value)
	{
		___U3CU3Ef__mgU24cache7_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache8_29)); }
	inline internal_ARAnchorRemoved_t3371657877 * get_U3CU3Ef__mgU24cache8_29() const { return ___U3CU3Ef__mgU24cache8_29; }
	inline internal_ARAnchorRemoved_t3371657877 ** get_address_of_U3CU3Ef__mgU24cache8_29() { return &___U3CU3Ef__mgU24cache8_29; }
	inline void set_U3CU3Ef__mgU24cache8_29(internal_ARAnchorRemoved_t3371657877 * value)
	{
		___U3CU3Ef__mgU24cache8_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache9_30)); }
	inline internal_ARUserAnchorAdded_t3285282493 * get_U3CU3Ef__mgU24cache9_30() const { return ___U3CU3Ef__mgU24cache9_30; }
	inline internal_ARUserAnchorAdded_t3285282493 ** get_address_of_U3CU3Ef__mgU24cache9_30() { return &___U3CU3Ef__mgU24cache9_30; }
	inline void set_U3CU3Ef__mgU24cache9_30(internal_ARUserAnchorAdded_t3285282493 * value)
	{
		___U3CU3Ef__mgU24cache9_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_31() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheA_31)); }
	inline internal_ARUserAnchorUpdated_t3964727538 * get_U3CU3Ef__mgU24cacheA_31() const { return ___U3CU3Ef__mgU24cacheA_31; }
	inline internal_ARUserAnchorUpdated_t3964727538 ** get_address_of_U3CU3Ef__mgU24cacheA_31() { return &___U3CU3Ef__mgU24cacheA_31; }
	inline void set_U3CU3Ef__mgU24cacheA_31(internal_ARUserAnchorUpdated_t3964727538 * value)
	{
		___U3CU3Ef__mgU24cacheA_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_32() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheB_32)); }
	inline internal_ARUserAnchorRemoved_t386858594 * get_U3CU3Ef__mgU24cacheB_32() const { return ___U3CU3Ef__mgU24cacheB_32; }
	inline internal_ARUserAnchorRemoved_t386858594 ** get_address_of_U3CU3Ef__mgU24cacheB_32() { return &___U3CU3Ef__mgU24cacheB_32; }
	inline void set_U3CU3Ef__mgU24cacheB_32(internal_ARUserAnchorRemoved_t386858594 * value)
	{
		___U3CU3Ef__mgU24cacheB_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_33() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheC_33)); }
	inline internal_ARFaceAnchorAdded_t1021040265 * get_U3CU3Ef__mgU24cacheC_33() const { return ___U3CU3Ef__mgU24cacheC_33; }
	inline internal_ARFaceAnchorAdded_t1021040265 ** get_address_of_U3CU3Ef__mgU24cacheC_33() { return &___U3CU3Ef__mgU24cacheC_33; }
	inline void set_U3CU3Ef__mgU24cacheC_33(internal_ARFaceAnchorAdded_t1021040265 * value)
	{
		___U3CU3Ef__mgU24cacheC_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_34() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheD_34)); }
	inline internal_ARFaceAnchorUpdated_t3423900432 * get_U3CU3Ef__mgU24cacheD_34() const { return ___U3CU3Ef__mgU24cacheD_34; }
	inline internal_ARFaceAnchorUpdated_t3423900432 ** get_address_of_U3CU3Ef__mgU24cacheD_34() { return &___U3CU3Ef__mgU24cacheD_34; }
	inline void set_U3CU3Ef__mgU24cacheD_34(internal_ARFaceAnchorUpdated_t3423900432 * value)
	{
		___U3CU3Ef__mgU24cacheD_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_35() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheE_35)); }
	inline internal_ARFaceAnchorRemoved_t2563439402 * get_U3CU3Ef__mgU24cacheE_35() const { return ___U3CU3Ef__mgU24cacheE_35; }
	inline internal_ARFaceAnchorRemoved_t2563439402 ** get_address_of_U3CU3Ef__mgU24cacheE_35() { return &___U3CU3Ef__mgU24cacheE_35; }
	inline void set_U3CU3Ef__mgU24cacheE_35(internal_ARFaceAnchorRemoved_t2563439402 * value)
	{
		___U3CU3Ef__mgU24cacheE_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_36() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cacheF_36)); }
	inline internal_ARImageAnchorAdded_t958088978 * get_U3CU3Ef__mgU24cacheF_36() const { return ___U3CU3Ef__mgU24cacheF_36; }
	inline internal_ARImageAnchorAdded_t958088978 ** get_address_of_U3CU3Ef__mgU24cacheF_36() { return &___U3CU3Ef__mgU24cacheF_36; }
	inline void set_U3CU3Ef__mgU24cacheF_36(internal_ARImageAnchorAdded_t958088978 * value)
	{
		___U3CU3Ef__mgU24cacheF_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_37() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache10_37)); }
	inline internal_ARImageAnchorUpdated_t294417830 * get_U3CU3Ef__mgU24cache10_37() const { return ___U3CU3Ef__mgU24cache10_37; }
	inline internal_ARImageAnchorUpdated_t294417830 ** get_address_of_U3CU3Ef__mgU24cache10_37() { return &___U3CU3Ef__mgU24cache10_37; }
	inline void set_U3CU3Ef__mgU24cache10_37(internal_ARImageAnchorUpdated_t294417830 * value)
	{
		___U3CU3Ef__mgU24cache10_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_38() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t3929719369_StaticFields, ___U3CU3Ef__mgU24cache11_38)); }
	inline internal_ARImageAnchorRemoved_t1751104571 * get_U3CU3Ef__mgU24cache11_38() const { return ___U3CU3Ef__mgU24cache11_38; }
	inline internal_ARImageAnchorRemoved_t1751104571 ** get_address_of_U3CU3Ef__mgU24cache11_38() { return &___U3CU3Ef__mgU24cache11_38; }
	inline void set_U3CU3Ef__mgU24cache11_38(internal_ARImageAnchorRemoved_t1751104571 * value)
	{
		___U3CU3Ef__mgU24cache11_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T3929719369_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ARFRAMEUPDATE_T1157215840_H
#define ARFRAMEUPDATE_T1157215840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t1157215840  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T1157215840_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef VIDEOFORMATBUTTON_T1937817916_H
#define VIDEOFORMATBUTTON_T1937817916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatButton
struct  VideoFormatButton_t1937817916  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text VideoFormatButton::videoFormatDescription
	Text_t1901882714 * ___videoFormatDescription_2;
	// UnityEngine.XR.iOS.UnityARVideoFormat VideoFormatButton::arVideoFormat
	UnityARVideoFormat_t1944454781  ___arVideoFormat_3;

public:
	inline static int32_t get_offset_of_videoFormatDescription_2() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___videoFormatDescription_2)); }
	inline Text_t1901882714 * get_videoFormatDescription_2() const { return ___videoFormatDescription_2; }
	inline Text_t1901882714 ** get_address_of_videoFormatDescription_2() { return &___videoFormatDescription_2; }
	inline void set_videoFormatDescription_2(Text_t1901882714 * value)
	{
		___videoFormatDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatDescription_2), value);
	}

	inline static int32_t get_offset_of_arVideoFormat_3() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916, ___arVideoFormat_3)); }
	inline UnityARVideoFormat_t1944454781  get_arVideoFormat_3() const { return ___arVideoFormat_3; }
	inline UnityARVideoFormat_t1944454781 * get_address_of_arVideoFormat_3() { return &___arVideoFormat_3; }
	inline void set_arVideoFormat_3(UnityARVideoFormat_t1944454781  value)
	{
		___arVideoFormat_3 = value;
	}
};

struct VideoFormatButton_t1937817916_StaticFields
{
public:
	// VideoFormatButton/VideoFormatButtonPressed VideoFormatButton::FormatButtonPressedEvent
	VideoFormatButtonPressed_t1187798507 * ___FormatButtonPressedEvent_4;

public:
	inline static int32_t get_offset_of_FormatButtonPressedEvent_4() { return static_cast<int32_t>(offsetof(VideoFormatButton_t1937817916_StaticFields, ___FormatButtonPressedEvent_4)); }
	inline VideoFormatButtonPressed_t1187798507 * get_FormatButtonPressedEvent_4() const { return ___FormatButtonPressedEvent_4; }
	inline VideoFormatButtonPressed_t1187798507 ** get_address_of_FormatButtonPressedEvent_4() { return &___FormatButtonPressedEvent_4; }
	inline void set_FormatButtonPressedEvent_4(VideoFormatButtonPressed_t1187798507 * value)
	{
		___FormatButtonPressedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___FormatButtonPressedEvent_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATBUTTON_T1937817916_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#define UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3649008995  : public MonoBehaviour_t3962482529
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1113636619 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t2585711361 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1718750761* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___PointCloudPrefab_3)); }
	inline GameObject_t1113636619 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t1113636619 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___pointCloudObjects_4)); }
	inline List_1_t2585711361 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t2585711361 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t2585711361 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3649008995, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1718750761* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1718750761* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3649008995_H
#ifndef VIDEOFORMATSEXAMPLE_T2303262312_H
#define VIDEOFORMATSEXAMPLE_T2303262312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoFormatsExample
struct  VideoFormatsExample_t2303262312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform VideoFormatsExample::formatsParent
	Transform_t3600365921 * ___formatsParent_2;
	// UnityEngine.GameObject VideoFormatsExample::videoFormatButtonPrefab
	GameObject_t1113636619 * ___videoFormatButtonPrefab_3;

public:
	inline static int32_t get_offset_of_formatsParent_2() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___formatsParent_2)); }
	inline Transform_t3600365921 * get_formatsParent_2() const { return ___formatsParent_2; }
	inline Transform_t3600365921 ** get_address_of_formatsParent_2() { return &___formatsParent_2; }
	inline void set_formatsParent_2(Transform_t3600365921 * value)
	{
		___formatsParent_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatsParent_2), value);
	}

	inline static int32_t get_offset_of_videoFormatButtonPrefab_3() { return static_cast<int32_t>(offsetof(VideoFormatsExample_t2303262312, ___videoFormatButtonPrefab_3)); }
	inline GameObject_t1113636619 * get_videoFormatButtonPrefab_3() const { return ___videoFormatButtonPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_videoFormatButtonPrefab_3() { return &___videoFormatButtonPrefab_3; }
	inline void set_videoFormatButtonPrefab_3(GameObject_t1113636619 * value)
	{
		___videoFormatButtonPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatButtonPrefab_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATSEXAMPLE_T2303262312_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_8() const { return ___m_CanvasRenderer_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_8() { return &___m_CanvasRenderer_8; }
	inline void set_m_CanvasRenderer_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
extern "C"  Enumerator_t1010806104  List_1_GetEnumerator_m3413760873_gshared (List_1_t3416529523 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
extern "C"  UnityARVideoFormat_t1944454781  Enumerator_get_Current_m3655906576_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2987439075_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
extern "C"  void Enumerator_Dispose_m510309855_gshared (Enumerator_t1010806104 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatEnumerator_Invoke_m100250450 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C"  void ARFrameUpdate__ctor_m3633991724 (ARFrameUpdate_t1157215840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C"  void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771 (RuntimeObject * __this /* static, unused */, ARFrameUpdate_t1157215840 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
#define List_1__ctor_m1424466557(__this, method) ((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
#define List_1_Add_m2765963565(__this, p0, method) ((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m3743125852(__this, p0, method) ((  GameObject_t1113636619 * (*) (List_1_t2585711361 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C"  int64_t Math_Min_m2427345610 (RuntimeObject * __this /* static, unused */, int64_t p0, int64_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C"  void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::SupportedVideoFormats()
extern "C"  List_1_t3416529523 * UnityARVideoFormat_SupportedVideoFormats_m1522157695 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>::GetEnumerator()
#define List_1_GetEnumerator_m3413760873(__this, method) ((  Enumerator_t1010806104  (*) (List_1_t3416529523 *, const RuntimeMethod*))List_1_GetEnumerator_m3413760873_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::get_Current()
#define Enumerator_get_Current_m3655906576(__this, method) ((  UnityARVideoFormat_t1944454781  (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_get_Current_m3655906576_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 UnityEngine.GameObject::GetComponent<VideoFormatButton>()
#define GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976(__this, method) ((  VideoFormatButton_t1937817916 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::MoveNext()
#define Enumerator_MoveNext_m2987439075(__this, method) ((  bool (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_MoveNext_m2987439075_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.iOS.UnityARVideoFormat>::Dispose()
#define Enumerator_Dispose_m510309855(__this, method) ((  void (*) (Enumerator_t1010806104 *, const RuntimeMethod*))Enumerator_Dispose_m510309855_gshared)(__this, method)
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C"  UnityARSessionNativeInterface_t3929719369 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::get_IsSupported()
extern "C"  bool ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811 (ARKitWorldTrackingSessionConfiguration_t273386347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RunWithConfigAndOptions(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
extern "C"  void UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177 (UnityARSessionNativeInterface_t3929719369 * __this, ARKitWorldTrackingSessionConfiguration_t273386347  ___config0, int32_t ___runOptions1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_VideoFormatEnumerator_t3131638505 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARVideoFormat_t1944454781 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFormatEnumerator__ctor_m397483959 (VideoFormatEnumerator_t3131638505 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatEnumerator_Invoke_m100250450 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatEnumerator_Invoke_m100250450((VideoFormatEnumerator_t3131638505 *)__this->get_prev_9(), ___videoFormat0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___videoFormat0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.VideoFormatEnumerator::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* VideoFormatEnumerator_BeginInvoke_m3988644263 (VideoFormatEnumerator_t3131638505 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatEnumerator_BeginInvoke_m3988644263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::EndInvoke(System.IAsyncResult)
extern "C"  void VideoFormatEnumerator_EndInvoke_m2608799897 (VideoFormatEnumerator_t3131638505 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityPointCloudExample::.ctor()
extern "C"  void UnityPointCloudExample__ctor_m3444243678 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	{
		// public uint numPointsToShow = 100;
		__this->set_numPointsToShow_2(((int32_t)100));
		// public GameObject PointCloudPrefab = null;
		__this->set_PointCloudPrefab_3((GameObject_t1113636619 *)NULL);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C"  void UnityPointCloudExample_Start_m4202814548 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m4202814548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
		intptr_t L_0 = (intptr_t)UnityPointCloudExample_ARFrameUpdated_m3531421433_RuntimeMethod_var;
		ARFrameUpdate_t1157215840 * L_1 = (ARFrameUpdate_t1157215840 *)il2cpp_codegen_object_new(ARFrameUpdate_t1157215840_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m3633991724(L_1, __this, L_0, /*hidden argument*/NULL);
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m3366057771(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// if (PointCloudPrefab != null)
		GameObject_t1113636619 * L_2 = __this->get_PointCloudPrefab_3();
		// if (PointCloudPrefab != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// pointCloudObjects = new List<GameObject> ();
		// pointCloudObjects = new List<GameObject> ();
		List_1_t2585711361 * L_4 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_4, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_pointCloudObjects_4(L_4);
		// for (int i =0; i < numPointsToShow; i++)
		V_0 = 0;
		goto IL_0052;
	}

IL_0036:
	{
		// pointCloudObjects.Add (Instantiate (PointCloudPrefab));
		List_1_t2585711361 * L_5 = __this->get_pointCloudObjects_4();
		GameObject_t1113636619 * L_6 = __this->get_PointCloudPrefab_3();
		// pointCloudObjects.Add (Instantiate (PointCloudPrefab));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		// pointCloudObjects.Add (Instantiate (PointCloudPrefab));
		NullCheck(L_5);
		List_1_Add_m2765963565(L_5, L_7, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
		// for (int i =0; i < numPointsToShow; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0052:
	{
		// for (int i =0; i < numPointsToShow; i++)
		int32_t L_9 = V_0;
		uint32_t L_10 = __this->get_numPointsToShow_2();
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0036;
		}
	}
	{
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  void UnityPointCloudExample_ARFrameUpdated_m3531421433 (UnityPointCloudExample_t3649008995 * __this, UnityARCamera_t2069150450  ___camera0, const RuntimeMethod* method)
{
	{
		// m_PointCloudData = camera.pointCloudData;
		Vector3U5BU5D_t1718750761* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_5(L_0);
		// }
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C"  void UnityPointCloudExample_Update_m3072589646 (UnityPointCloudExample_t3649008995 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m3072589646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	{
		// if (PointCloudPrefab != null && m_PointCloudData != null)
		GameObject_t1113636619 * L_0 = __this->get_PointCloudPrefab_3();
		// if (PointCloudPrefab != null && m_PointCloudData != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0091;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_2 = __this->get_m_PointCloudData_5();
		if (!L_2)
		{
			goto IL_0091;
		}
	}
	{
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		V_0 = 0;
		goto IL_0074;
	}

IL_0025:
	{
		// Vector4 vert = m_PointCloudData [count];
		Vector3U5BU5D_t1718750761* L_3 = __this->get_m_PointCloudData_5();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		// Vector4 vert = m_PointCloudData [count];
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_5 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))), /*hidden argument*/NULL);
		V_1 = L_5;
		// GameObject point = pointCloudObjects [count];
		List_1_t2585711361 * L_6 = __this->get_pointCloudObjects_4();
		int32_t L_7 = V_0;
		// GameObject point = pointCloudObjects [count];
		NullCheck(L_6);
		GameObject_t1113636619 * L_8 = List_1_get_Item_m3743125852(L_6, L_7, /*hidden argument*/List_1_get_Item_m3743125852_RuntimeMethod_var);
		V_2 = L_8;
		// point.transform.position = new Vector3(vert.x, vert.y, vert.z);
		GameObject_t1113636619 * L_9 = V_2;
		// point.transform.position = new Vector3(vert.x, vert.y, vert.z);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		float L_11 = (&V_1)->get_x_1();
		float L_12 = (&V_1)->get_y_2();
		float L_13 = (&V_1)->get_z_3();
		// point.transform.position = new Vector3(vert.x, vert.y, vert.z);
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		// point.transform.position = new Vector3(vert.x, vert.y, vert.z);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_14, /*hidden argument*/NULL);
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0074:
	{
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		int32_t L_16 = V_0;
		Vector3U5BU5D_t1718750761* L_17 = __this->get_m_PointCloudData_5();
		NullCheck(L_17);
		uint32_t L_18 = __this->get_numPointsToShow_2();
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		int64_t L_19 = Math_Min_m2427345610(NULL /*static, unused*/, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))), (((int64_t)((uint64_t)L_18))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_16)))) < ((int64_t)L_19)))
		{
			goto IL_0025;
		}
	}
	{
	}

IL_0091:
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
// System.Void VideoFormatButton::.ctor()
extern "C"  void VideoFormatButton__ctor_m7407655 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatButton::add_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_add_FormatButtonPressedEvent_m1863116585 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_add_FormatButtonPressedEvent_m1863116585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((VideoFormatButtonPressed_t1187798507 **)(((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_4()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::remove_FormatButtonPressedEvent(VideoFormatButton/VideoFormatButtonPressed)
extern "C"  void VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780 (RuntimeObject * __this /* static, unused */, VideoFormatButtonPressed_t1187798507 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoFormatButtonPressed_t1187798507 * V_0 = NULL;
	VideoFormatButtonPressed_t1187798507 * V_1 = NULL;
	{
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VideoFormatButtonPressed_t1187798507 * L_1 = V_0;
		V_1 = L_1;
		VideoFormatButtonPressed_t1187798507 * L_2 = V_1;
		VideoFormatButtonPressed_t1187798507 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		VideoFormatButtonPressed_t1187798507 * L_5 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_6 = InterlockedCompareExchangeImpl<VideoFormatButtonPressed_t1187798507 *>((VideoFormatButtonPressed_t1187798507 **)(((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_address_of_FormatButtonPressedEvent_4()), ((VideoFormatButtonPressed_t1187798507 *)CastclassSealed((RuntimeObject*)L_4, VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		VideoFormatButtonPressed_t1187798507 * L_7 = V_0;
		VideoFormatButtonPressed_t1187798507 * L_8 = V_1;
		if ((!(((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_7) == ((RuntimeObject*)(VideoFormatButtonPressed_t1187798507 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void VideoFormatButton::Populate(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButton_Populate_m915370135 (VideoFormatButton_t1937817916 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_Populate_m915370135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arVideoFormat = videoFormat;
		UnityARVideoFormat_t1944454781  L_0 = ___videoFormat0;
		__this->set_arVideoFormat_3(L_0);
		// videoFormatDescription.text = "VideoFormat Resolution: " + videoFormat.imageResolutionWidth + "x" + videoFormat.imageResolutionHeight + " FPS: " + videoFormat.framesPerSecond;
		Text_t1901882714 * L_1 = __this->get_videoFormatDescription_2();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral51204818);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral51204818);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		float L_5 = (&___videoFormat0)->get_imageResolutionWidth_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3452614616);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614616);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		float L_10 = (&___videoFormat0)->get_imageResolutionHeight_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1652116954);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1652116954);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		int32_t L_15 = (&___videoFormat0)->get_framesPerSecond_3();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m2971454694(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		// videoFormatDescription.text = "VideoFormat Resolution: " + videoFormat.imageResolutionWidth + "x" + videoFormat.imageResolutionHeight + " FPS: " + videoFormat.framesPerSecond;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_18);
		// }
		return;
	}
}
// System.Void VideoFormatButton::ButtonPressed()
extern "C"  void VideoFormatButton_ButtonPressed_m1715857364 (VideoFormatButton_t1937817916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButton_ButtonPressed_m1715857364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FormatButtonPressedEvent != null) {
		VideoFormatButtonPressed_t1187798507 * L_0 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// FormatButtonPressedEvent.Invoke (arVideoFormat);
		VideoFormatButtonPressed_t1187798507 * L_1 = ((VideoFormatButton_t1937817916_StaticFields*)il2cpp_codegen_static_fields_for(VideoFormatButton_t1937817916_il2cpp_TypeInfo_var))->get_FormatButtonPressedEvent_4();
		UnityARVideoFormat_t1944454781  L_2 = __this->get_arVideoFormat_3();
		// FormatButtonPressedEvent.Invoke (arVideoFormat);
		NullCheck(L_1);
		VideoFormatButtonPressed_Invoke_m3826882959(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001d:
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
extern "C"  void DelegatePInvokeWrapper_VideoFormatButtonPressed_t1187798507 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(UnityARVideoFormat_t1944454781 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void VideoFormatButton/VideoFormatButtonPressed::.ctor(System.Object,System.IntPtr)
extern "C"  void VideoFormatButtonPressed__ctor_m1152072860 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatButtonPressed_Invoke_m3826882959 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatButtonPressed_Invoke_m3826882959((VideoFormatButtonPressed_t1187798507 *)__this->get_prev_9(), ___videoFormat0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___videoFormat0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_t1944454781  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_t1944454781 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult VideoFormatButton/VideoFormatButtonPressed::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* VideoFormatButtonPressed_BeginInvoke_m3331672980 (VideoFormatButtonPressed_t1187798507 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatButtonPressed_BeginInvoke_m3331672980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_t1944454781_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VideoFormatButton/VideoFormatButtonPressed::EndInvoke(System.IAsyncResult)
extern "C"  void VideoFormatButtonPressed_EndInvoke_m419070761 (VideoFormatButtonPressed_t1187798507 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void VideoFormatsExample::.ctor()
extern "C"  void VideoFormatsExample__ctor_m143854614 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoFormatsExample::Start()
extern "C"  void VideoFormatsExample_Start_m1615238214 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_Start_m1615238214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VideoFormatButton.FormatButtonPressedEvent += ExampletButtonPressed;
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, L_0, /*hidden argument*/NULL);
		// VideoFormatButton.FormatButtonPressedEvent += ExampletButtonPressed;
		VideoFormatButton_add_FormatButtonPressedEvent_m1863116585(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// PopulateVideoFormatButtons ();
		// PopulateVideoFormatButtons ();
		VideoFormatsExample_PopulateVideoFormatButtons_m595526008(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoFormatsExample::OnDestroy()
extern "C"  void VideoFormatsExample_OnDestroy_m541603283 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_OnDestroy_m541603283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VideoFormatButton.FormatButtonPressedEvent -= ExampletButtonPressed;
		intptr_t L_0 = (intptr_t)VideoFormatsExample_ExampletButtonPressed_m2588664126_RuntimeMethod_var;
		VideoFormatButtonPressed_t1187798507 * L_1 = (VideoFormatButtonPressed_t1187798507 *)il2cpp_codegen_object_new(VideoFormatButtonPressed_t1187798507_il2cpp_TypeInfo_var);
		VideoFormatButtonPressed__ctor_m1152072860(L_1, __this, L_0, /*hidden argument*/NULL);
		// VideoFormatButton.FormatButtonPressedEvent -= ExampletButtonPressed;
		VideoFormatButton_remove_FormatButtonPressedEvent_m3255418780(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoFormatsExample::PopulateVideoFormatButtons()
extern "C"  void VideoFormatsExample_PopulateVideoFormatButtons_m595526008 (VideoFormatsExample_t2303262312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_PopulateVideoFormatButtons_m595526008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARVideoFormat_t1944454781  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1010806104  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	VideoFormatButton_t1937817916 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
		List_1_t3416529523 * L_0 = UnityARVideoFormat_SupportedVideoFormats_m1522157695(NULL /*static, unused*/, /*hidden argument*/NULL);
		// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
		NullCheck(L_0);
		Enumerator_t1010806104  L_1 = List_1_GetEnumerator_m3413760873(L_0, /*hidden argument*/List_1_GetEnumerator_m3413760873_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0012:
		{
			// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
			// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
			UnityARVideoFormat_t1944454781  L_2 = Enumerator_get_Current_m3655906576((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3655906576_RuntimeMethod_var);
			V_0 = L_2;
			// GameObject go = Instantiate<GameObject> (videoFormatButtonPrefab, formatsParent);
			GameObject_t1113636619 * L_3 = __this->get_videoFormatButtonPrefab_3();
			Transform_t3600365921 * L_4 = __this->get_formatsParent_2();
			// GameObject go = Instantiate<GameObject> (videoFormatButtonPrefab, formatsParent);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
			V_2 = L_5;
			// VideoFormatButton vfb = go.GetComponent<VideoFormatButton> ();
			GameObject_t1113636619 * L_6 = V_2;
			// VideoFormatButton vfb = go.GetComponent<VideoFormatButton> ();
			NullCheck(L_6);
			VideoFormatButton_t1937817916 * L_7 = GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976(L_6, /*hidden argument*/GameObject_GetComponent_TisVideoFormatButton_t1937817916_m1994409976_RuntimeMethod_var);
			V_3 = L_7;
			// if (vfb != null) {
			VideoFormatButton_t1937817916 * L_8 = V_3;
			// if (vfb != null) {
			bool L_9 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0040:
		{
			// vfb.Populate (vf);
			VideoFormatButton_t1937817916 * L_10 = V_3;
			UnityARVideoFormat_t1944454781  L_11 = V_0;
			// vfb.Populate (vf);
			NullCheck(L_10);
			VideoFormatButton_Populate_m915370135(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0049:
		{
		}

IL_004a:
		{
			// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
			bool L_12 = Enumerator_MoveNext_m2987439075((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2987439075_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0012;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		// foreach (UnityARVideoFormat vf in UnityARVideoFormat.SupportedVideoFormats())
		Enumerator_Dispose_m510309855((Enumerator_t1010806104 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m510309855_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void VideoFormatsExample::ExampletButtonPressed(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C"  void VideoFormatsExample_ExampletButtonPressed_m2588664126 (VideoFormatsExample_t2303262312 * __this, UnityARVideoFormat_t1944454781  ___videoFormat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatsExample_ExampletButtonPressed_m2588664126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARSessionNativeInterface_t3929719369 * V_0 = NULL;
	ARKitWorldTrackingSessionConfiguration_t273386347  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// UnityARSessionNativeInterface session = UnityARSessionNativeInterface.GetARSessionNativeInterface();
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t3929719369_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t3929719369 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1118592565(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration();
		il2cpp_codegen_initobj((&V_1), sizeof(ARKitWorldTrackingSessionConfiguration_t273386347 ));
		// if (config.IsSupported) {
		// if (config.IsSupported) {
		bool L_1 = ARKitWorldTrackingSessionConfiguration_get_IsSupported_m4234602811((ARKitWorldTrackingSessionConfiguration_t273386347 *)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		// config.planeDetection = UnityARPlaneDetection.HorizontalAndVertical;
		(&V_1)->set_planeDetection_1(3);
		// config.alignment = UnityARAlignment.UnityARAlignmentGravity;
		(&V_1)->set_alignment_0(0);
		// config.getPointCloudData = true;
		(&V_1)->set_getPointCloudData_2((bool)1);
		// config.enableLightEstimation = true;
		(&V_1)->set_enableLightEstimation_3((bool)1);
		// config.enableAutoFocus = true;
		(&V_1)->set_enableAutoFocus_4((bool)1);
		// config.videoFormat = videoFormat.videoFormatPtr;
		intptr_t L_2 = (&___videoFormat0)->get_videoFormatPtr_0();
		(&V_1)->set_videoFormat_5(L_2);
		// Application.targetFrameRate = videoFormat.framesPerSecond;
		int32_t L_3 = (&___videoFormat0)->get_framesPerSecond_3();
		// Application.targetFrameRate = videoFormat.framesPerSecond;
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// UnityARSessionRunOption runOption = UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking;
		V_2 = 3;
		// session.RunWithConfigAndOptions (config, runOption);
		UnityARSessionNativeInterface_t3929719369 * L_4 = V_0;
		ARKitWorldTrackingSessionConfiguration_t273386347  L_5 = V_1;
		int32_t L_6 = V_2;
		// session.RunWithConfigAndOptions (config, runOption);
		NullCheck(L_4);
		UnityARSessionNativeInterface_RunWithConfigAndOptions_m2136170177(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0069:
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
