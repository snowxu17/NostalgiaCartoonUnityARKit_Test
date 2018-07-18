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

template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// SimpleJSON.JSONNode
struct JSONNode_t2946056997;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t2340361630;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t123164443;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t3621052039;
// SimpleJSON.JSONNull
struct JSONNull_t1736727710;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1925909886;
// SimpleJSON.JSONArray/<>c__Iterator0
struct U3CU3Ec__Iterator0_t2066799033;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3992595042;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t3378627465;
// SimpleJSON.JSONBool
struct JSONBool_t130112664;
// SimpleJSON.JSONObject
struct JSONObject_t4158403488;
// SimpleJSON.JSONNumber
struct JSONNumber_t4005729108;
// SimpleJSON.JSONString
struct JSONString_t3803360443;
// SimpleJSON.JSONNode/<>c__Iterator0
struct U3CU3Ec__Iterator0_t2360448098;
// SimpleJSON.JSONNode/<>c__Iterator1
struct U3CU3Ec__Iterator1_t2360382562;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_t4108838352;
// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t509071878;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_t3789446452;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Exception
struct Exception_t;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.FileInfo
struct FileInfo_t1169991790;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// SimpleJSON.JSONNode/Enumerator
struct Enumerator_t1513288951;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerator_1_t1266588635;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t2731313296;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1510070208;
// SimpleJSON.JSONObject/<Remove>c__AnonStorey1
struct U3CRemoveU3Ec__AnonStorey1_t2292622994;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t3505375296;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t1033609360;
// SimpleJSON.JSONObject/<>c__Iterator0
struct U3CU3Ec__Iterator0_t2553288236;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_t2920988767;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t3535526568;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t2385938284;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* JSONNode_t2946056997_il2cpp_TypeInfo_var;
extern const uint32_t JSON_Parse_m2597873051_MetadataUsageId;
extern RuntimeClass* List_1_t123164443_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2497635700_RuntimeMethod_var;
extern const uint32_t JSONArray__ctor_m1810447092_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3335450781_RuntimeMethod_var;
extern const uint32_t JSONArray_GetEnumerator_m3244393662_MetadataUsageId;
extern RuntimeClass* JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m4160179865_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1412457272_RuntimeMethod_var;
extern const uint32_t JSONArray_get_Item_m770505322_MetadataUsageId;
extern RuntimeClass* JSONNull_t1736727710_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m1031575508_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m4256349914_RuntimeMethod_var;
extern const uint32_t JSONArray_set_Item_m2325276014_MetadataUsageId;
extern const uint32_t JSONArray_get_Item_m3275530059_MetadataUsageId;
extern const uint32_t JSONArray_set_Item_m3538304411_MetadataUsageId;
extern const uint32_t JSONArray_get_Count_m1674341146_MetadataUsageId;
extern const uint32_t JSONArray_Add_m1638966007_MetadataUsageId;
extern const RuntimeMethod* List_1_RemoveAt_m3966380295_RuntimeMethod_var;
extern const uint32_t JSONArray_Remove_m649058450_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1859561057_RuntimeMethod_var;
extern const uint32_t JSONArray_Remove_m2844647652_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var;
extern const uint32_t JSONArray_get_Children_m1636733882_MetadataUsageId;
extern const uint32_t JSONArray_WriteToStringBuilder_m689595461_MetadataUsageId;
extern const uint32_t JSONArray_SerializeBinary_m1073995468_MetadataUsageId;
extern const RuntimeMethod* Enumerator_get_Current_m2446791353_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m667095019_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m721294528_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__Iterator0_MoveNext_m1389010882_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Dispose_m995296339_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__Iterator0_Reset_m926194436_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m926194436_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967_MetadataUsageId;
extern const uint32_t JSONBool__ctor_m256490940_MetadataUsageId;
extern const uint32_t JSONBool__ctor_m2893134212_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t JSONBool_set_Value_m2347564520_MetadataUsageId;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t JSONBool_WriteToStringBuilder_m54378927_MetadataUsageId;
extern const uint32_t JSONBool_Equals_m1859842010_MetadataUsageId;
extern const uint32_t JSONLazyCreator__ctor_m4143221426_MetadataUsageId;
extern const uint32_t JSONLazyCreator__ctor_m1713835880_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_Item_m1604509049_MetadataUsageId;
extern RuntimeClass* JSONArray_t2340361630_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884_RuntimeMethod_var;
extern const uint32_t JSONLazyCreator_set_Item_m2105688194_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_Item_m3899434704_MetadataUsageId;
extern RuntimeClass* JSONObject_t4158403488_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281_RuntimeMethod_var;
extern const uint32_t JSONLazyCreator_set_Item_m2231982194_MetadataUsageId;
extern const uint32_t JSONLazyCreator_Add_m1572478273_MetadataUsageId;
extern const uint32_t JSONLazyCreator_Add_m1239340615_MetadataUsageId;
extern RuntimeClass* JSONNumber_t4005729108_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var;
extern const uint32_t JSONLazyCreator_get_AsInt_m639509886_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsInt_m1252161255_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsFloat_m3107782794_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsFloat_m3660787451_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsDouble_m1582721663_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsDouble_m2172386329_MetadataUsageId;
extern RuntimeClass* JSONString_t3803360443_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329_RuntimeMethod_var;
extern String_t* _stringLiteral3452614544;
extern const uint32_t JSONLazyCreator_get_AsLong_m1291925100_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsLong_m759719013_MetadataUsageId;
extern RuntimeClass* JSONBool_t130112664_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923_RuntimeMethod_var;
extern const uint32_t JSONLazyCreator_get_AsBool_m713101833_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsBool_m3560479934_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsArray_m1273817130_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsObject_m2281226208_MetadataUsageId;
extern String_t* _stringLiteral1202628576;
extern const uint32_t JSONLazyCreator_WriteToStringBuilder_m3234868409_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t JSONNode_get_Value_m1803583094_MetadataUsageId;
extern const uint32_t JSONNode_Add_m1559930036_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_Children_m3071153908_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_DeepChildren_m2537763012_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ToString_m3879752396_MetadataUsageId;
extern const uint32_t JSONNode_ToString_m101519447_MetadataUsageId;
extern RuntimeClass* LinqEnumerator_t509071878_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_Linq_m2984709014_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_AsDouble_m3335246132_MetadataUsageId;
extern const uint32_t JSONNode_set_AsDouble_m2583247575_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_AsBool_m4176397070_MetadataUsageId;
extern const uint32_t JSONNode_set_AsBool_m3057475042_MetadataUsageId;
extern const uint32_t JSONNode_get_AsArray_m715902207_MetadataUsageId;
extern const uint32_t JSONNode_get_AsObject_m1198661593_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m2523080653_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m1622328703_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m6922295_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m2306304485_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m4217586291_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m1432850039_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m451620647_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m4260169399_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m3939691209_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m4080243595_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m4035013745_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m889386234_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var;
extern const uint32_t JSONNode_op_Implicit_m3674316631_MetadataUsageId;
extern const uint32_t JSONNode_op_Equality_m2227562659_MetadataUsageId;
extern const uint32_t JSONNode_op_Inequality_m3223804307_MetadataUsageId;
extern const uint32_t JSONNode_get_EscapeBuilder_m155653411_MetadataUsageId;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3451303928;
extern const uint32_t JSONNode_Escape_m3387382048_MetadataUsageId;
extern const uint32_t JSONNode_ParseElement_m3982566797_MetadataUsageId;
extern RuntimeClass* Stack_1_t3789446452_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m2409004951_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m1161466254_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m3040978591_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m288158433_RuntimeMethod_var;
extern const RuntimeMethod* JSONNode_Parse_m883557124_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m4204993319_RuntimeMethod_var;
extern String_t* _stringLiteral3600160164;
extern String_t* _stringLiteral4214229893;
extern const uint32_t JSONNode_Parse_m883557124_MetadataUsageId;
extern RuntimeClass* BinaryWriter_t3992595042_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToBinaryStream_m4065140296_MetadataUsageId;
extern const RuntimeMethod* JSONNode_SaveToCompressedStream_m2127353253_RuntimeMethod_var;
extern String_t* _stringLiteral3373200493;
extern const uint32_t JSONNode_SaveToCompressedStream_m2127353253_MetadataUsageId;
extern const RuntimeMethod* JSONNode_SaveToCompressedFile_m1574216136_RuntimeMethod_var;
extern const uint32_t JSONNode_SaveToCompressedFile_m1574216136_MetadataUsageId;
extern const RuntimeMethod* JSONNode_SaveToCompressedBase64_m2429603569_RuntimeMethod_var;
extern const uint32_t JSONNode_SaveToCompressedBase64_m2429603569_MetadataUsageId;
extern RuntimeClass* FileInfo_t1169991790_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToBinaryFile_m2052397863_MetadataUsageId;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToBinaryBase64_m2572046373_MetadataUsageId;
extern RuntimeClass* JSONNodeType_t2191432521_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JSONNode_DeserializeBinary_m2667052454_RuntimeMethod_var;
extern String_t* _stringLiteral163746037;
extern const uint32_t JSONNode_DeserializeBinary_m2667052454_MetadataUsageId;
extern const RuntimeMethod* JSONNode_LoadFromCompressedFile_m1190016295_RuntimeMethod_var;
extern const uint32_t JSONNode_LoadFromCompressedFile_m1190016295_MetadataUsageId;
extern const RuntimeMethod* JSONNode_LoadFromCompressedStream_m2944368907_RuntimeMethod_var;
extern const uint32_t JSONNode_LoadFromCompressedStream_m2944368907_MetadataUsageId;
extern const RuntimeMethod* JSONNode_LoadFromCompressedBase64_m515598289_RuntimeMethod_var;
extern const uint32_t JSONNode_LoadFromCompressedBase64_m515598289_MetadataUsageId;
extern RuntimeClass* BinaryReader_t2428077293_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_LoadFromBinaryStream_m1014593361_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromBinaryFile_m2307845755_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromBinaryBase64_m2500927739_MetadataUsageId;
extern const uint32_t JSONNode_GetContainer_m1786727336_MetadataUsageId;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral3452614615;
extern const uint32_t JSONNode_op_Implicit_m1069568051_MetadataUsageId;
extern String_t* _stringLiteral3452614614;
extern const uint32_t JSONNode_op_Implicit_m1069633587_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m1069961267_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m37910905_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m2876089377_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m1722984681_MetadataUsageId;
extern const uint32_t JSONNode_ReadVector2_m3437438845_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ReadVector2_m1806416846_MetadataUsageId;
extern const uint32_t JSONNode_ReadVector2_m4251691506_MetadataUsageId;
extern const uint32_t JSONNode_ReadVector3_m1304543877_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ReadVector3_m169927776_MetadataUsageId;
extern const uint32_t JSONNode_ReadVector3_m392771156_MetadataUsageId;
extern String_t* _stringLiteral3452614601;
extern const uint32_t JSONNode_ReadVector4_m48250077_MetadataUsageId;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ReadVector4_m138461513_MetadataUsageId;
extern const uint32_t JSONNode_WriteVector4_m2563938836_MetadataUsageId;
extern const uint32_t JSONNode_ReadQuaternion_m1305162694_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ReadQuaternion_m841140865_MetadataUsageId;
extern const uint32_t JSONNode_WriteQuaternion_m510950336_MetadataUsageId;
extern String_t* _stringLiteral1910834845;
extern String_t* _stringLiteral452723731;
extern const uint32_t JSONNode_ReadRect_m772759586_MetadataUsageId;
extern const uint32_t JSONNode_WriteRect_m919993616_MetadataUsageId;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4249957872;
extern String_t* _stringLiteral742876383;
extern String_t* _stringLiteral228012198;
extern String_t* _stringLiteral1182448499;
extern const uint32_t JSONNode_ReadRectOffset_m4067776346_MetadataUsageId;
extern const uint32_t JSONNode_ReadRectOffset_m3243216635_MetadataUsageId;
extern const uint32_t JSONNode_WriteRectOffset_m4206839533_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_ReadMatrix_m2859087272_MetadataUsageId;
extern const uint32_t JSONNode__cctor_m2316088940_MetadataUsageId;
extern const RuntimeMethod* U3CU3Ec__Iterator0_Reset_m3539192766_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m3539192766_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1925909886_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3378627465_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec__Iterator1_MoveNext_m3186589243_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator1_Dispose_m1364031124_MetadataUsageId;
extern const RuntimeMethod* U3CU3Ec__Iterator1_Reset_m3127036862_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__Iterator1_Reset_m3127036862_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2__ctor_m2381912246_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m416358542_RuntimeMethod_var;
extern const uint32_t Enumerator_get_Current_m313174397_MetadataUsageId;
extern const RuntimeMethod* Enumerator_MoveNext_m347499449_RuntimeMethod_var;
extern const uint32_t Enumerator_MoveNext_m786491500_MetadataUsageId;
struct Enumerator_t1513288951_marshaled_pinvoke;
struct Enumerator_t1513288951;;
struct Enumerator_t1513288951_marshaled_pinvoke;;
struct Enumerator_t1513288951_marshaled_com;
struct Enumerator_t1513288951_marshaled_com;;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var;
extern const uint32_t KeyEnumerator_get_Current_m1297174988_MetadataUsageId;
extern const uint32_t LinqEnumerator__ctor_m3544204463_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t834018167_il2cpp_TypeInfo_var;
extern const uint32_t LinqEnumerator_System_Collections_IEnumerator_get_Current_m3995158436_MetadataUsageId;
extern const uint32_t LinqEnumerator_GetEnumerator_m3611392418_MetadataUsageId;
extern const uint32_t LinqEnumerator_Reset_m719129891_MetadataUsageId;
extern const uint32_t LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_m4226822910_MetadataUsageId;
extern const uint32_t ValueEnumerator_get_Current_m3443043276_MetadataUsageId;
extern const uint32_t JSONNull__ctor_m3625891807_MetadataUsageId;
extern const uint32_t JSONNull_CreateOrGet_m3773723069_MetadataUsageId;
extern const uint32_t JSONNull_get_Value_m2760466840_MetadataUsageId;
extern const uint32_t JSONNull_Equals_m1550257260_MetadataUsageId;
extern const uint32_t JSONNull_WriteToStringBuilder_m110715656_MetadataUsageId;
extern const uint32_t JSONNull__cctor_m1510182135_MetadataUsageId;
extern const uint32_t JSONNumber__ctor_m3343705146_MetadataUsageId;
extern const uint32_t JSONNumber__ctor_m167111434_MetadataUsageId;
extern const uint32_t JSONNumber_get_Value_m3896965801_MetadataUsageId;
extern const uint32_t JSONNumber_set_Value_m719460139_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern const uint32_t JSONNumber_IsNumeric_m4277004660_MetadataUsageId;
extern const uint32_t JSONNumber_Equals_m3973864127_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2731313296_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2635188939_RuntimeMethod_var;
extern const uint32_t JSONObject__ctor_m3280371024_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var;
extern const uint32_t JSONObject_GetEnumerator_m3719468439_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3745523859_RuntimeMethod_var;
extern const uint32_t JSONObject_get_Item_m2254947377_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m1416072037_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m4017966756_RuntimeMethod_var;
extern const uint32_t JSONObject_set_Item_m3512362680_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Count_m3623399773_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var;
extern const uint32_t JSONObject_get_Item_m2688448103_MetadataUsageId;
extern const uint32_t JSONObject_set_Item_m1156855828_MetadataUsageId;
extern const uint32_t JSONObject_get_Count_m2164742813_MetadataUsageId;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern const uint32_t JSONObject_Add_m742236942_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2771669071_RuntimeMethod_var;
extern const uint32_t JSONObject_Remove_m2603736413_MetadataUsageId;
extern const uint32_t JSONObject_Remove_m4286821291_MetadataUsageId;
extern RuntimeClass* U3CRemoveU3Ec__AnonStorey1_t2292622994_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3505375296_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CRemoveU3Ec__AnonStorey1_U3CU3Em__0_m3600785454_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1138704236_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t834018167_m3569154686_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_t834018167_m2250935909_RuntimeMethod_var;
extern const uint32_t JSONObject_Remove_m780311716_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t2553288236_il2cpp_TypeInfo_var;
extern const uint32_t JSONObject_get_Children_m3987237774_MetadataUsageId;
extern const RuntimeMethod* Enumerator_Dispose_m1765329307_RuntimeMethod_var;
extern String_t* _stringLiteral3787497674;
extern const uint32_t JSONObject_WriteToStringBuilder_m4047663162_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m3940207030_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m2653291907_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3970196056_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1781309907_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3927693234_RuntimeMethod_var;
extern const uint32_t JSONObject_SerializeBinary_m2078857922_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_MoveNext_m785944640_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Dispose_m1565699041_MetadataUsageId;
extern const RuntimeMethod* U3CU3Ec__Iterator0_Reset_m2072516878_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m2072516878_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4281407763_MetadataUsageId;
extern const uint32_t U3CRemoveU3Ec__AnonStorey1_U3CU3Em__0_m3600785454_MetadataUsageId;
extern const uint32_t JSONString__ctor_m562445776_MetadataUsageId;
extern const uint32_t JSONString_WriteToStringBuilder_m1475190596_MetadataUsageId;
extern const uint32_t JSONString_Equals_m2864760385_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
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
#ifndef U3CU3EC__ITERATOR1_T2360382562_H
#define U3CU3EC__ITERATOR1_T2360382562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/<>c__Iterator1
struct  U3CU3Ec__Iterator1_t2360382562  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::<C>__1
	JSONNode_t2946056997 * ___U3CCU3E__1_1;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::$locvar1
	RuntimeObject* ___U24locvar1_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::<D>__2
	JSONNode_t2946056997 * ___U3CDU3E__2_3;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::$this
	JSONNode_t2946056997 * ___U24this_4;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::$current
	JSONNode_t2946056997 * ___U24current_5;
	// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SimpleJSON.JSONNode/<>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CCU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U3CCU3E__1_1)); }
	inline JSONNode_t2946056997 * get_U3CCU3E__1_1() const { return ___U3CCU3E__1_1; }
	inline JSONNode_t2946056997 ** get_address_of_U3CCU3E__1_1() { return &___U3CCU3E__1_1; }
	inline void set_U3CCU3E__1_1(JSONNode_t2946056997 * value)
	{
		___U3CCU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24locvar1_2)); }
	inline RuntimeObject* get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline RuntimeObject** get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(RuntimeObject* value)
	{
		___U24locvar1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_2), value);
	}

	inline static int32_t get_offset_of_U3CDU3E__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U3CDU3E__2_3)); }
	inline JSONNode_t2946056997 * get_U3CDU3E__2_3() const { return ___U3CDU3E__2_3; }
	inline JSONNode_t2946056997 ** get_address_of_U3CDU3E__2_3() { return &___U3CDU3E__2_3; }
	inline void set_U3CDU3E__2_3(JSONNode_t2946056997 * value)
	{
		___U3CDU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24this_4)); }
	inline JSONNode_t2946056997 * get_U24this_4() const { return ___U24this_4; }
	inline JSONNode_t2946056997 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(JSONNode_t2946056997 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24current_5)); }
	inline JSONNode_t2946056997 * get_U24current_5() const { return ___U24current_5; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(JSONNode_t2946056997 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR1_T2360382562_H
#ifndef U3CU3EC__ITERATOR0_T2360448098_H
#define U3CU3EC__ITERATOR0_T2360448098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2360448098  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_0;
	// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 SimpleJSON.JSONNode/<>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24current_0)); }
	inline JSONNode_t2946056997 * get_U24current_0() const { return ___U24current_0; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(JSONNode_t2946056997 * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2360448098_H
#ifndef STACK_1_T3789446452_H
#define STACK_1_T3789446452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct  Stack_1_t3789446452  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	JSONNodeU5BU5D_t3535526568* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____array_0)); }
	inline JSONNodeU5BU5D_t3535526568* get__array_0() const { return ____array_0; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(JSONNodeU5BU5D_t3535526568* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3789446452_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef BINARYREADER_T2428077293_H
#define BINARYREADER_T2428077293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2428077293  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1273022909 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1523322056 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t2204182725 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_stream_0)); }
	inline Stream_t1273022909 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t1273022909 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t1273022909 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_encoding_1)); }
	inline Encoding_t1523322056 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t1523322056 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_1), value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___decoder_3)); }
	inline Decoder_t2204182725 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t2204182725 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t2204182725 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_3), value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___charBuffer_4)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T2428077293_H
#ifndef BINARYWRITER_T3992595042_H
#define BINARYWRITER_T3992595042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3992595042  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1273022909 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t4116647657* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___OutStream_1)); }
	inline Stream_t1273022909 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t1273022909 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t1273022909 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___stringBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t3992595042_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3992595042 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3992595042 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3992595042 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3992595042 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T3992595042_H
#ifndef DICTIONARY_2_T2731313296_H
#define DICTIONARY_2_T2731313296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct  Dictionary_2_t2731313296  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	JSONNodeU5BU5D_t3535526568* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___valueSlots_7)); }
	inline JSONNodeU5BU5D_t3535526568* get_valueSlots_7() const { return ___valueSlots_7; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(JSONNodeU5BU5D_t3535526568* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2731313296_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2385938284 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2385938284 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2385938284 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2385938284 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2731313296_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef U3CREMOVEU3EC__ANONSTOREY1_T2292622994_H
#define U3CREMOVEU3EC__ANONSTOREY1_T2292622994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONObject/<Remove>c__AnonStorey1
struct  U3CRemoveU3Ec__AnonStorey1_t2292622994  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<Remove>c__AnonStorey1::aNode
	JSONNode_t2946056997 * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ec__AnonStorey1_t2292622994, ___aNode_0)); }
	inline JSONNode_t2946056997 * get_aNode_0() const { return ___aNode_0; }
	inline JSONNode_t2946056997 ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(JSONNode_t2946056997 * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___aNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREMOVEU3EC__ANONSTOREY1_T2292622994_H
#ifndef JSON_T1924642173_H
#define JSON_T1924642173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSON
struct  JSON_t1924642173  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T1924642173_H
#ifndef KEYCOLLECTION_T2920988767_H
#define KEYCOLLECTION_T2920988767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct  KeyCollection_t2920988767  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2731313296 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2920988767, ___dictionary_0)); }
	inline Dictionary_2_t2731313296 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2731313296 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2731313296 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2920988767_H
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
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef LIST_1_T123164443_H
#define LIST_1_T123164443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct  List_1_t123164443  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t3535526568* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____items_1)); }
	inline JSONNodeU5BU5D_t3535526568* get__items_1() const { return ____items_1; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONNodeU5BU5D_t3535526568* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t123164443_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JSONNodeU5BU5D_t3535526568* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t123164443_StaticFields, ___EmptyArray_4)); }
	inline JSONNodeU5BU5D_t3535526568* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JSONNodeU5BU5D_t3535526568* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T123164443_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef KEYVALUEPAIR_2_T834018167_H
#define KEYVALUEPAIR_2_T834018167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct  KeyValuePair_2_t834018167 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t2946056997 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t834018167, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t834018167, ___value_1)); }
	inline JSONNode_t2946056997 * get_value_1() const { return ___value_1; }
	inline JSONNode_t2946056997 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t2946056997 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T834018167_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef ENUMERATOR_T2012408320_H
#define ENUMERATOR_T2012408320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct  Enumerator_t2012408320 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t123164443 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JSONNode_t2946056997 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___l_0)); }
	inline List_1_t123164443 * get_l_0() const { return ___l_0; }
	inline List_1_t123164443 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t123164443 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___current_3)); }
	inline JSONNode_t2946056997 * get_current_3() const { return ___current_3; }
	inline JSONNode_t2946056997 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t2946056997 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2012408320_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef JSONNODETYPE_T2191432521_H
#define JSONNODETYPE_T2191432521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNodeType
struct  JSONNodeType_t2191432521 
{
public:
	// System.Int32 SimpleJSON.JSONNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONNodeType_t2191432521, ___value___1)); }
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
#endif // JSONNODETYPE_T2191432521_H
#ifndef U3CU3EC__ITERATOR0_T2066799033_H
#define U3CU3EC__ITERATOR0_T2066799033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2066799033  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::$locvar0
	Enumerator_t2012408320  ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::<N>__1
	JSONNode_t2946056997 * ___U3CNU3E__1_1;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<>c__Iterator0::$this
	JSONArray_t2340361630 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONArray/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONArray/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24locvar0_0)); }
	inline Enumerator_t2012408320  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2012408320 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2012408320  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U3CNU3E__1_1)); }
	inline JSONNode_t2946056997 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t2946056997 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t2946056997 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24this_2)); }
	inline JSONArray_t2340361630 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t2340361630 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t2340361630 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24current_3)); }
	inline JSONNode_t2946056997 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2946056997 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2066799033_H
#ifndef JSONTEXTMODE_T2489858454_H
#define JSONTEXTMODE_T2489858454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONTextMode
struct  JSONTextMode_t2489858454 
{
public:
	// System.Int32 SimpleJSON.JSONTextMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONTextMode_t2489858454, ___value___1)); }
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
#endif // JSONTEXTMODE_T2489858454_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef TYPE_T145086099_H
#define TYPE_T145086099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/Enumerator/Type
struct  Type_t145086099 
{
public:
	// System.Int32 SimpleJSON.JSONNode/Enumerator/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t145086099, ___value___1)); }
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
#endif // TYPE_T145086099_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef ENUMERATOR_T390528775_H
#define ENUMERATOR_T390528775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct  Enumerator_t390528775 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2731313296 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t834018167  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___dictionary_0)); }
	inline Dictionary_2_t2731313296 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2731313296 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2731313296 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___current_3)); }
	inline KeyValuePair_2_t834018167  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t834018167 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t834018167  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T390528775_H
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
#ifndef JSONCONTAINERTYPE_T1996325857_H
#define JSONCONTAINERTYPE_T1996325857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONContainerType
struct  JSONContainerType_t1996325857 
{
public:
	// System.Int32 SimpleJSON.JSONContainerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONContainerType_t1996325857, ___value___1)); }
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
#endif // JSONCONTAINERTYPE_T1996325857_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef JSONNODE_T2946056997_H
#define JSONNODE_T2946056997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode
struct  JSONNode_t2946056997  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t2946056997_StaticFields
{
public:
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::VectorContainerType
	int32_t ___VectorContainerType_3;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::QuaternionContainerType
	int32_t ___QuaternionContainerType_4;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::RectContainerType
	int32_t ___RectContainerType_5;

public:
	inline static int32_t get_offset_of_forceASCII_0() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_StaticFields, ___forceASCII_0)); }
	inline bool get_forceASCII_0() const { return ___forceASCII_0; }
	inline bool* get_address_of_forceASCII_0() { return &___forceASCII_0; }
	inline void set_forceASCII_0(bool value)
	{
		___forceASCII_0 = value;
	}

	inline static int32_t get_offset_of_longAsString_1() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_StaticFields, ___longAsString_1)); }
	inline bool get_longAsString_1() const { return ___longAsString_1; }
	inline bool* get_address_of_longAsString_1() { return &___longAsString_1; }
	inline void set_longAsString_1(bool value)
	{
		___longAsString_1 = value;
	}

	inline static int32_t get_offset_of_VectorContainerType_3() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_StaticFields, ___VectorContainerType_3)); }
	inline int32_t get_VectorContainerType_3() const { return ___VectorContainerType_3; }
	inline int32_t* get_address_of_VectorContainerType_3() { return &___VectorContainerType_3; }
	inline void set_VectorContainerType_3(int32_t value)
	{
		___VectorContainerType_3 = value;
	}

	inline static int32_t get_offset_of_QuaternionContainerType_4() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_StaticFields, ___QuaternionContainerType_4)); }
	inline int32_t get_QuaternionContainerType_4() const { return ___QuaternionContainerType_4; }
	inline int32_t* get_address_of_QuaternionContainerType_4() { return &___QuaternionContainerType_4; }
	inline void set_QuaternionContainerType_4(int32_t value)
	{
		___QuaternionContainerType_4 = value;
	}

	inline static int32_t get_offset_of_RectContainerType_5() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_StaticFields, ___RectContainerType_5)); }
	inline int32_t get_RectContainerType_5() const { return ___RectContainerType_5; }
	inline int32_t* get_address_of_RectContainerType_5() { return &___RectContainerType_5; }
	inline void set_RectContainerType_5(int32_t value)
	{
		___RectContainerType_5 = value;
	}
};

struct JSONNode_t2946056997_ThreadStaticFields
{
public:
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t * ___m_EscapeBuilder_2;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_2() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997_ThreadStaticFields, ___m_EscapeBuilder_2)); }
	inline StringBuilder_t * get_m_EscapeBuilder_2() const { return ___m_EscapeBuilder_2; }
	inline StringBuilder_t ** get_address_of_m_EscapeBuilder_2() { return &___m_EscapeBuilder_2; }
	inline void set_m_EscapeBuilder_2(StringBuilder_t * value)
	{
		___m_EscapeBuilder_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EscapeBuilder_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODE_T2946056997_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef ENUMERATOR_T1513288951_H
#define ENUMERATOR_T1513288951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/Enumerator
struct  Enumerator_t1513288951 
{
public:
	// SimpleJSON.JSONNode/Enumerator/Type SimpleJSON.JSONNode/Enumerator::type
	int32_t ___type_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Object
	Enumerator_t390528775  ___m_Object_1;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Array
	Enumerator_t2012408320  ___m_Array_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Enumerator_t1513288951, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_m_Object_1() { return static_cast<int32_t>(offsetof(Enumerator_t1513288951, ___m_Object_1)); }
	inline Enumerator_t390528775  get_m_Object_1() const { return ___m_Object_1; }
	inline Enumerator_t390528775 * get_address_of_m_Object_1() { return &___m_Object_1; }
	inline void set_m_Object_1(Enumerator_t390528775  value)
	{
		___m_Object_1 = value;
	}

	inline static int32_t get_offset_of_m_Array_2() { return static_cast<int32_t>(offsetof(Enumerator_t1513288951, ___m_Array_2)); }
	inline Enumerator_t2012408320  get_m_Array_2() const { return ___m_Array_2; }
	inline Enumerator_t2012408320 * get_address_of_m_Array_2() { return &___m_Array_2; }
	inline void set_m_Array_2(Enumerator_t2012408320  value)
	{
		___m_Array_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_t1513288951_marshaled_pinvoke
{
	int32_t ___type_0;
	Enumerator_t390528775  ___m_Object_1;
	Enumerator_t2012408320  ___m_Array_2;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_t1513288951_marshaled_com
{
	int32_t ___type_0;
	Enumerator_t390528775  ___m_Object_1;
	Enumerator_t2012408320  ___m_Array_2;
};
#endif // ENUMERATOR_T1513288951_H
#ifndef U3CU3EC__ITERATOR0_T2553288236_H
#define U3CU3EC__ITERATOR0_T2553288236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONObject/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2553288236  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::$locvar0
	Enumerator_t390528775  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::<N>__1
	KeyValuePair_2_t834018167  ___U3CNU3E__1_1;
	// SimpleJSON.JSONObject SimpleJSON.JSONObject/<>c__Iterator0::$this
	JSONObject_t4158403488 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONObject/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONObject/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U24locvar0_0)); }
	inline Enumerator_t390528775  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t390528775 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t390528775  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t834018167  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t834018167 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t834018167  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U24this_2)); }
	inline JSONObject_t4158403488 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t4158403488 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t4158403488 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U24current_3)); }
	inline JSONNode_t2946056997 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2946056997 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2553288236, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2553288236_H
#ifndef ENUMERATOR_T2913490280_H
#define ENUMERATOR_T2913490280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
struct  Enumerator_t2913490280 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t390528775  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2913490280, ___host_enumerator_0)); }
	inline Enumerator_t390528775  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t390528775 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t390528775  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2913490280_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
#ifndef KEYENUMERATOR_T488138053_H
#define KEYENUMERATOR_T488138053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/KeyEnumerator
struct  KeyEnumerator_t488138053 
{
public:
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/KeyEnumerator::m_Enumerator
	Enumerator_t1513288951  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(KeyEnumerator_t488138053, ___m_Enumerator_0)); }
	inline Enumerator_t1513288951  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_t1513288951 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_t1513288951  value)
	{
		___m_Enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t488138053_marshaled_pinvoke
{
	Enumerator_t1513288951_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t488138053_marshaled_com
{
	Enumerator_t1513288951_marshaled_com ___m_Enumerator_0;
};
#endif // KEYENUMERATOR_T488138053_H
#ifndef JSONARRAY_T2340361630_H
#define JSONARRAY_T2340361630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray
struct  JSONArray_t2340361630  : public JSONNode_t2946056997
{
public:
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t123164443 * ___m_List_6;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_7;

public:
	inline static int32_t get_offset_of_m_List_6() { return static_cast<int32_t>(offsetof(JSONArray_t2340361630, ___m_List_6)); }
	inline List_1_t123164443 * get_m_List_6() const { return ___m_List_6; }
	inline List_1_t123164443 ** get_address_of_m_List_6() { return &___m_List_6; }
	inline void set_m_List_6(List_1_t123164443 * value)
	{
		___m_List_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_6), value);
	}

	inline static int32_t get_offset_of_inline_7() { return static_cast<int32_t>(offsetof(JSONArray_t2340361630, ___inline_7)); }
	inline bool get_inline_7() const { return ___inline_7; }
	inline bool* get_address_of_inline_7() { return &___inline_7; }
	inline void set_inline_7(bool value)
	{
		___inline_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T2340361630_H
#ifndef LINQENUMERATOR_T509071878_H
#define LINQENUMERATOR_T509071878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/LinqEnumerator
struct  LinqEnumerator_t509071878  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/LinqEnumerator::m_Node
	JSONNode_t2946056997 * ___m_Node_0;
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/LinqEnumerator::m_Enumerator
	Enumerator_t1513288951  ___m_Enumerator_1;

public:
	inline static int32_t get_offset_of_m_Node_0() { return static_cast<int32_t>(offsetof(LinqEnumerator_t509071878, ___m_Node_0)); }
	inline JSONNode_t2946056997 * get_m_Node_0() const { return ___m_Node_0; }
	inline JSONNode_t2946056997 ** get_address_of_m_Node_0() { return &___m_Node_0; }
	inline void set_m_Node_0(JSONNode_t2946056997 * value)
	{
		___m_Node_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Node_0), value);
	}

	inline static int32_t get_offset_of_m_Enumerator_1() { return static_cast<int32_t>(offsetof(LinqEnumerator_t509071878, ___m_Enumerator_1)); }
	inline Enumerator_t1513288951  get_m_Enumerator_1() const { return ___m_Enumerator_1; }
	inline Enumerator_t1513288951 * get_address_of_m_Enumerator_1() { return &___m_Enumerator_1; }
	inline void set_m_Enumerator_1(Enumerator_t1513288951  value)
	{
		___m_Enumerator_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINQENUMERATOR_T509071878_H
#ifndef JSONSTRING_T3803360443_H
#define JSONSTRING_T3803360443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONString
struct  JSONString_t3803360443  : public JSONNode_t2946056997
{
public:
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_6;

public:
	inline static int32_t get_offset_of_m_Data_6() { return static_cast<int32_t>(offsetof(JSONString_t3803360443, ___m_Data_6)); }
	inline String_t* get_m_Data_6() const { return ___m_Data_6; }
	inline String_t** get_address_of_m_Data_6() { return &___m_Data_6; }
	inline void set_m_Data_6(String_t* value)
	{
		___m_Data_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSTRING_T3803360443_H
#ifndef FUNC_2_T3505375296_H
#define FUNC_2_T3505375296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct  Func_2_t3505375296  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3505375296_H
#ifndef JSONLAZYCREATOR_T3621052039_H
#define JSONLAZYCREATOR_T3621052039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONLazyCreator
struct  JSONLazyCreator_t3621052039  : public JSONNode_t2946056997
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_t2946056997 * ___m_Node_6;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_7;

public:
	inline static int32_t get_offset_of_m_Node_6() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3621052039, ___m_Node_6)); }
	inline JSONNode_t2946056997 * get_m_Node_6() const { return ___m_Node_6; }
	inline JSONNode_t2946056997 ** get_address_of_m_Node_6() { return &___m_Node_6; }
	inline void set_m_Node_6(JSONNode_t2946056997 * value)
	{
		___m_Node_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Node_6), value);
	}

	inline static int32_t get_offset_of_m_Key_7() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3621052039, ___m_Key_7)); }
	inline String_t* get_m_Key_7() const { return ___m_Key_7; }
	inline String_t** get_address_of_m_Key_7() { return &___m_Key_7; }
	inline void set_m_Key_7(String_t* value)
	{
		___m_Key_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Key_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONLAZYCREATOR_T3621052039_H
#ifndef JSONNULL_T1736727710_H
#define JSONNULL_T1736727710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNull
struct  JSONNull_t1736727710  : public JSONNode_t2946056997
{
public:

public:
};

struct JSONNull_t1736727710_StaticFields
{
public:
	// SimpleJSON.JSONNull SimpleJSON.JSONNull::m_StaticInstance
	JSONNull_t1736727710 * ___m_StaticInstance_6;
	// System.Boolean SimpleJSON.JSONNull::reuseSameInstance
	bool ___reuseSameInstance_7;

public:
	inline static int32_t get_offset_of_m_StaticInstance_6() { return static_cast<int32_t>(offsetof(JSONNull_t1736727710_StaticFields, ___m_StaticInstance_6)); }
	inline JSONNull_t1736727710 * get_m_StaticInstance_6() const { return ___m_StaticInstance_6; }
	inline JSONNull_t1736727710 ** get_address_of_m_StaticInstance_6() { return &___m_StaticInstance_6; }
	inline void set_m_StaticInstance_6(JSONNull_t1736727710 * value)
	{
		___m_StaticInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticInstance_6), value);
	}

	inline static int32_t get_offset_of_reuseSameInstance_7() { return static_cast<int32_t>(offsetof(JSONNull_t1736727710_StaticFields, ___reuseSameInstance_7)); }
	inline bool get_reuseSameInstance_7() const { return ___reuseSameInstance_7; }
	inline bool* get_address_of_reuseSameInstance_7() { return &___reuseSameInstance_7; }
	inline void set_reuseSameInstance_7(bool value)
	{
		___reuseSameInstance_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNULL_T1736727710_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef JSONNUMBER_T4005729108_H
#define JSONNUMBER_T4005729108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNumber
struct  JSONNumber_t4005729108  : public JSONNode_t2946056997
{
public:
	// System.Double SimpleJSON.JSONNumber::m_Data
	double ___m_Data_6;

public:
	inline static int32_t get_offset_of_m_Data_6() { return static_cast<int32_t>(offsetof(JSONNumber_t4005729108, ___m_Data_6)); }
	inline double get_m_Data_6() const { return ___m_Data_6; }
	inline double* get_address_of_m_Data_6() { return &___m_Data_6; }
	inline void set_m_Data_6(double value)
	{
		___m_Data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNUMBER_T4005729108_H
#ifndef JSONOBJECT_T4158403488_H
#define JSONOBJECT_T4158403488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONObject
struct  JSONObject_t4158403488  : public JSONNode_t2946056997
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t2731313296 * ___m_Dict_6;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_7;

public:
	inline static int32_t get_offset_of_m_Dict_6() { return static_cast<int32_t>(offsetof(JSONObject_t4158403488, ___m_Dict_6)); }
	inline Dictionary_2_t2731313296 * get_m_Dict_6() const { return ___m_Dict_6; }
	inline Dictionary_2_t2731313296 ** get_address_of_m_Dict_6() { return &___m_Dict_6; }
	inline void set_m_Dict_6(Dictionary_2_t2731313296 * value)
	{
		___m_Dict_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_6), value);
	}

	inline static int32_t get_offset_of_inline_7() { return static_cast<int32_t>(offsetof(JSONObject_t4158403488, ___inline_7)); }
	inline bool get_inline_7() const { return ___inline_7; }
	inline bool* get_address_of_inline_7() { return &___inline_7; }
	inline void set_inline_7(bool value)
	{
		___inline_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T4158403488_H
#ifndef VALUEENUMERATOR_T3808401860_H
#define VALUEENUMERATOR_T3808401860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/ValueEnumerator
struct  ValueEnumerator_t3808401860 
{
public:
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/ValueEnumerator::m_Enumerator
	Enumerator_t1513288951  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(ValueEnumerator_t3808401860, ___m_Enumerator_0)); }
	inline Enumerator_t1513288951  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_t1513288951 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_t1513288951  value)
	{
		___m_Enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_t3808401860_marshaled_pinvoke
{
	Enumerator_t1513288951_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_t3808401860_marshaled_com
{
	Enumerator_t1513288951_marshaled_com ___m_Enumerator_0;
};
#endif // VALUEENUMERATOR_T3808401860_H
#ifndef JSONBOOL_T130112664_H
#define JSONBOOL_T130112664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONBool
struct  JSONBool_t130112664  : public JSONNode_t2946056997
{
public:
	// System.Boolean SimpleJSON.JSONBool::m_Data
	bool ___m_Data_6;

public:
	inline static int32_t get_offset_of_m_Data_6() { return static_cast<int32_t>(offsetof(JSONBool_t130112664, ___m_Data_6)); }
	inline bool get_m_Data_6() const { return ___m_Data_6; }
	inline bool* get_address_of_m_Data_6() { return &___m_Data_6; }
	inline void set_m_Data_6(bool value)
	{
		___m_Data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONBOOL_T130112664_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
#ifndef FILEINFO_T1169991790_H
#define FILEINFO_T1169991790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileInfo
struct  FileInfo_t1169991790  : public FileSystemInfo_t3745885336
{
public:
	// System.Boolean System.IO.FileInfo::exists
	bool ___exists_5;

public:
	inline static int32_t get_offset_of_exists_5() { return static_cast<int32_t>(offsetof(FileInfo_t1169991790, ___exists_5)); }
	inline bool get_exists_5() const { return ___exists_5; }
	inline bool* get_address_of_exists_5() { return &___exists_5; }
	inline void set_exists_5(bool value)
	{
		___exists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEINFO_T1169991790_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void Enumerator_t1513288951_marshal_pinvoke(const Enumerator_t1513288951& unmarshaled, Enumerator_t1513288951_marshaled_pinvoke& marshaled);
extern "C" void Enumerator_t1513288951_marshal_pinvoke_back(const Enumerator_t1513288951_marshaled_pinvoke& marshaled, Enumerator_t1513288951& unmarshaled);
extern "C" void Enumerator_t1513288951_marshal_pinvoke_cleanup(Enumerator_t1513288951_marshaled_pinvoke& marshaled);
extern "C" void Enumerator_t1513288951_marshal_com(const Enumerator_t1513288951& unmarshaled, Enumerator_t1513288951_marshaled_com& marshaled);
extern "C" void Enumerator_t1513288951_marshal_com_back(const Enumerator_t1513288951_marshaled_com& marshaled, Enumerator_t1513288951& unmarshaled);
extern "C" void Enumerator_t1513288951_marshal_com_cleanup(Enumerator_t1513288951_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<System.Object>(T)
extern "C"  RuntimeObject * JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared (JSONLazyCreator_t3621052039 * __this, RuntimeObject * ___aVal0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C"  RuntimeObject * Stack_1_Peek_m326384648_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C"  void KeyValuePair_2__ctor_m727165395_gshared (KeyValuePair_2_t2530217319 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C"  KeyValuePair_2_t2530217319  Enumerable_ElementAt_TisKeyValuePair_2_t2530217319_m1306417333_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1809414358_gshared (Func_2_t1033609360 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t2530217319_m612643609_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1033609360 * p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  KeyValuePair_2_t2530217319  Enumerable_First_TisKeyValuePair_2_t2530217319_m692131782_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t314722136  KeyCollection_GetEnumerator_m982770428_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m3687673883_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m76191888_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);

// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Parse_m883557124 (RuntimeObject * __this /* static, unused */, String_t* ___aJSON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
#define List_1__ctor_m2497635700(__this, method) ((  void (*) (List_1_t123164443 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m4108532860 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
#define List_1_GetEnumerator_m3335450781(__this, method) ((  Enumerator_t2012408320  (*) (List_1_t123164443 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void Enumerator__ctor_m191252025 (Enumerator_t1513288951 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
#define List_1_get_Count_m4160179865(__this, method) ((  int32_t (*) (List_1_t123164443 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m4143221426 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m1412457272(__this, p0, method) ((  JSONNode_t2946056997 * (*) (List_1_t123164443 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m2227562659 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
extern "C"  JSONNull_t1736727710 * JSONNull_CreateOrGet_m3773723069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0)
#define List_1_Add_m1031575508(__this, p0, method) ((  void (*) (List_1_t123164443 *, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,!0)
#define List_1_set_Item_m4256349914(__this, p0, p1, method) ((  void (*) (List_1_t123164443 *, int32_t, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3966380295(__this, p0, method) ((  void (*) (List_1_t123164443 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(!0)
#define List_1_Remove_m1859561057(__this, p0, method) ((  bool (*) (List_1_t123164443 *, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m1141181736 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C"  StringBuilder_t * StringBuilder_AppendLine_m2783356575 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Append_m2180175564 (StringBuilder_t * __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m2446791353(__this, method) ((  JSONNode_t2946056997 * (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m667095019(__this, method) ((  bool (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m721294528(__this, method) ((  void (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
extern "C"  bool Boolean_TryParse_m1999513058 (RuntimeObject * __this /* static, unused */, String_t* p0, bool* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
extern "C"  int32_t Boolean_GetHashCode_m3167312162 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m1810447092 (JSONArray_t2340361630 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONArray>(T)
#define JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884(__this, ___aVal0, method) ((  JSONArray_t2340361630 * (*) (JSONLazyCreator_t3621052039 *, JSONArray_t2340361630 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared)(__this, ___aVal0, method)
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m1713835880 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m3280371024 (JSONObject_t4158403488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONObject>(T)
#define JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281(__this, ___aVal0, method) ((  JSONObject_t4158403488 * (*) (JSONLazyCreator_t3621052039 *, JSONObject_t4158403488 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared)(__this, ___aVal0, method)
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m113693744 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
extern "C"  void JSONNumber__ctor_m3343705146 (JSONNumber_t4005729108 * __this, double ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONNumber>(T)
#define JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, ___aVal0, method) ((  JSONNumber_t4005729108 * (*) (JSONLazyCreator_t3621052039 *, JSONNumber_t4005729108 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared)(__this, ___aVal0, method)
// System.Void SimpleJSON.JSONString::.ctor(System.String)
extern "C"  void JSONString__ctor_m562445776 (JSONString_t3803360443 * __this, String_t* ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONString>(T)
#define JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329(__this, ___aVal0, method) ((  JSONString_t3803360443 * (*) (JSONLazyCreator_t3621052039 *, JSONString_t3803360443 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared)(__this, ___aVal0, method)
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m2986581816 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
extern "C"  void JSONBool__ctor_m256490940 (JSONBool_t130112664 * __this, bool ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONBool>(T)
#define JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923(__this, ___aVal0, method) ((  JSONBool_t130112664 * (*) (JSONLazyCreator_t3621052039 *, JSONBool_t130112664 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m803974048_gshared)(__this, ___aVal0, method)
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m2223295763 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C"  void U3CU3Ec__Iterator1__ctor_m2346700051 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
extern "C"  void LinqEnumerator__ctor_m3544204463 (LinqEnumerator_t509071878 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
extern "C"  void KeyEnumerator__ctor_m1622573906 (KeyEnumerator_t488138053 * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
extern "C"  void ValueEnumerator__ctor_m585639700 (ValueEnumerator_t3808401860 * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
extern "C"  String_t* Double_ToString_m3828879243 (double* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C"  bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
#define KeyValuePair_2_get_Value_m1737997693(__this, method) ((  JSONNode_t2946056997 * (*) (KeyValuePair_2_t834018167 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Int32 System.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m2705121830 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
extern "C"  StringBuilder_t * JSONNode_get_EscapeBuilder_m155653411 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m1410065908 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C"  int32_t StringBuilder_get_Capacity_m2088663745 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C"  void StringBuilder_set_Capacity_m3366027632 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.String)
extern "C"  String_t* UInt16_ToString_m3056878594 (uint16_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m2523080653 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m4035013745 (RuntimeObject * __this /* static, unused */, bool ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m6922295 (RuntimeObject * __this /* static, unused */, double ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::.ctor()
#define Stack_1__ctor_m2409004951(__this, method) ((  void (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Push(!0)
#define Stack_1_Push_m1161466254(__this, p0, method) ((  void (*) (Stack_1_t3789446452 *, JSONNode_t2946056997 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m3223804307 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Peek()
#define Stack_1_Peek_m3040978591(__this, method) ((  JSONNode_t2946056997 * (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_Peek_m326384648_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count()
#define Stack_1_get_Count_m288158433(__this, method) ((  int32_t (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Pop()
#define Stack_1_Pop_m4204993319(__this, method) ((  JSONNode_t2946056997 * (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
extern "C"  JSONNode_t2946056997 * JSONNode_ParseElement_m3982566797 (RuntimeObject * __this /* static, unused */, String_t* ___token0, bool ___quoted1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
extern "C"  int32_t Int32_Parse_m2244041137 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m1874693998 (BinaryWriter_t3992595042 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m3289795077 (FileInfo_t1169991790 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C"  DirectoryInfo_t35957480 * FileInfo_get_Directory_m2050317500 (FileInfo_t1169991790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C"  FileStream_t4292183065 * File_OpenWrite_m24069155 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToBinaryStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToBinaryStream_m4065140296 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C"  String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::DeserializeBinary(System.IO.BinaryReader)
extern "C"  JSONNode_t2946056997 * JSONNode_DeserializeBinary_m2667052454 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___aReader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m2602947653 (BinaryReader_t2428077293 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBinaryStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromBinaryStream_m1014593361 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C"  ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4100805873 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::GetContainer(SimpleJSON.JSONContainerType)
extern "C"  JSONNode_t2946056997 * JSONNode_GetContainer_m1786727336 (RuntimeObject * __this /* static, unused */, int32_t ___aType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector2(UnityEngine.Vector2,System.String,System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector2_m3528033602 (JSONNode_t2946056997 * __this, Vector2_t2156229523  ___aVec0, String_t* ___aXName1, String_t* ___aYName2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector3(UnityEngine.Vector3,System.String,System.String,System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector3_m2390637150 (JSONNode_t2946056997 * __this, Vector3_t3722313464  ___aVec0, String_t* ___aXName1, String_t* ___aYName2, String_t* ___aZName3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector4(UnityEngine.Vector4)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector4_m2563938836 (JSONNode_t2946056997 * __this, Vector4_t3319028937  ___aVec0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteQuaternion(UnityEngine.Quaternion)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteQuaternion_m510950336 (JSONNode_t2946056997 * __this, Quaternion_t2301928331  ___aRot0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteRect(UnityEngine.Rect)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteRect_m919993616 (JSONNode_t2946056997 * __this, Rect_t2360479859  ___aRect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteRectOffset(UnityEngine.RectOffset)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteRectOffset_m4206839533 (JSONNode_t2946056997 * __this, RectOffset_t1369453676 * ___aRect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 SimpleJSON.JSONNode::ReadVector2()
extern "C"  Vector2_t2156229523  JSONNode_ReadVector2_m4251691506 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SimpleJSON.JSONNode::ReadVector3()
extern "C"  Vector3_t3722313464  JSONNode_ReadVector3_m392771156 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 SimpleJSON.JSONNode::ReadVector4()
extern "C"  Vector4_t3319028937  JSONNode_ReadVector4_m138461513 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SimpleJSON.JSONNode::ReadQuaternion()
extern "C"  Quaternion_t2301928331  JSONNode_ReadQuaternion_m841140865 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect SimpleJSON.JSONNode::ReadRect()
extern "C"  Rect_t2360479859  JSONNode_ReadRect_m3165547662 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset SimpleJSON.JSONNode::ReadRectOffset()
extern "C"  RectOffset_t1369453676 * JSONNode_ReadRectOffset_m3243216635 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 SimpleJSON.JSONNode::ReadVector2(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  JSONNode_ReadVector2_m3437438845 (JSONNode_t2946056997 * __this, Vector2_t2156229523  ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SimpleJSON.JSONNode::ReadVector3(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  JSONNode_ReadVector3_m1304543877 (JSONNode_t2946056997 * __this, Vector3_t3722313464  ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t3319028937  Vector4_get_zero_m1422399515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 SimpleJSON.JSONNode::ReadVector4(UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  JSONNode_ReadVector4_m48250077 (JSONNode_t2946056997 * __this, Vector4_t3319028937  ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SimpleJSON.JSONNode::ReadQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  JSONNode_ReadQuaternion_m1305162694 (JSONNode_t2946056997 * __this, Quaternion_t2301928331  ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect SimpleJSON.JSONNode::ReadRect(UnityEngine.Rect)
extern "C"  Rect_t2360479859  JSONNode_ReadRect_m772759586 (JSONNode_t2946056997 * __this, Rect_t2360479859  ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m3839990490 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m1501338330 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor()
extern "C"  void RectOffset__ctor_m3236153262 (RectOffset_t1369453676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset SimpleJSON.JSONNode::ReadRectOffset(UnityEngine.RectOffset)
extern "C"  RectOffset_t1369453676 * JSONNode_ReadRectOffset_m4067776346 (JSONNode_t2946056997 * __this, RectOffset_t1369453676 * ___aDefault0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_left()
extern "C"  int32_t RectOffset_get_left_m1232181034 (RectOffset_t1369453676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_right()
extern "C"  int32_t RectOffset_get_right_m2294081512 (RectOffset_t1369453676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_top()
extern "C"  int32_t RectOffset_get_top_m2855347295 (RectOffset_t1369453676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RectOffset::get_bottom()
extern "C"  int32_t RectOffset_get_bottom_m890891527 (RectOffset_t1369453676 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m1906605342 (Matrix4x4_t1817901843 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m567451091 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  RuntimeObject* JSONNode_get_DeepChildren_m2537763012 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void Enumerator__ctor_m2905563300 (Enumerator_t1513288951 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
extern "C"  bool Enumerator_get_IsValid_m2766619510 (Enumerator_t1513288951 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::.ctor(!0,!1)
#define KeyValuePair_2__ctor_m2381912246(__this, p0, p1, method) ((  void (*) (KeyValuePair_2_t834018167 *, String_t*, JSONNode_t2946056997 *, const RuntimeMethod*))KeyValuePair_2__ctor_m727165395_gshared)(__this, p0, p1, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m416358542(__this, method) ((  KeyValuePair_2_t834018167  (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
extern "C"  KeyValuePair_2_t834018167  Enumerator_get_Current_m313174397 (Enumerator_t1513288951 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m347499449(__this, method) ((  bool (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m786491500 (Enumerator_t1513288951 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void KeyEnumerator__ctor_m1033279676 (KeyEnumerator_t488138053 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void KeyEnumerator__ctor_m2193205752 (KeyEnumerator_t488138053 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
#define KeyValuePair_2_get_Key_m3658972889(__this, method) ((  String_t* (*) (KeyValuePair_2_t834018167 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// SimpleJSON.JSONNode SimpleJSON.JSONNode/KeyEnumerator::get_Current()
extern "C"  JSONNode_t2946056997 * KeyEnumerator_get_Current_m1297174988 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
extern "C"  bool KeyEnumerator_MoveNext_m361149340 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
extern "C"  KeyEnumerator_t488138053  KeyEnumerator_GetEnumerator_m335101271 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void ValueEnumerator__ctor_m975839129 (ValueEnumerator_t3808401860 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void ValueEnumerator__ctor_m1508113784 (ValueEnumerator_t3808401860 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
extern "C"  JSONNode_t2946056997 * ValueEnumerator_get_Current_m3443043276 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
extern "C"  bool ValueEnumerator_MoveNext_m3223684276 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
extern "C"  ValueEnumerator_t3808401860  ValueEnumerator_GetEnumerator_m2650376631 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNull::.ctor()
extern "C"  void JSONNull__ctor_m3625891807 (JSONNull_t1736727710 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2449771842 (JSONNode_t2946056997 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
extern "C"  bool JSONNumber_IsNumeric_m4277004660 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m4025515304 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::GetHashCode()
extern "C"  int32_t Double_GetHashCode_m2295714610 (double* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
#define Dictionary_2__ctor_m2635188939(__this, method) ((  void (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m502378881(__this, method) ((  Enumerator_t390528775  (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m217107153(__this, p0, method) ((  bool (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0)
#define Dictionary_2_get_Item_m3745523859(__this, p0, method) ((  JSONNode_t2946056997 * (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1416072037(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2731313296 *, String_t*, JSONNode_t2946056997 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1)
#define Dictionary_2_Add_m4017966756(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2731313296 *, String_t*, JSONNode_t2946056997 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
#define Dictionary_2_get_Count_m3623399773(__this, method) ((  int32_t (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(__this /* static, unused */, p0, p1, method) ((  KeyValuePair_2_t834018167  (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_t2530217319_m1306417333_gshared)(__this /* static, unused */, p0, p1, method)
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0)
#define Dictionary_2_Remove_m2771669071(__this, p0, method) ((  bool (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void SimpleJSON.JSONObject/<Remove>c__AnonStorey1::.ctor()
extern "C"  void U3CRemoveU3Ec__AnonStorey1__ctor_m2434442688 (U3CRemoveU3Ec__AnonStorey1_t2292622994 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1138704236(__this, p0, p1, method) ((  void (*) (Func_2_t3505375296 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1809414358_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisKeyValuePair_2_t834018167_m3569154686(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3505375296 *, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_t2530217319_m612643609_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisKeyValuePair_2_t834018167_m2250935909(__this /* static, unused */, p0, method) ((  KeyValuePair_2_t834018167  (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_t2530217319_m692131782_gshared)(__this /* static, unused */, p0, method)
// System.Void SimpleJSON.JSONObject/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m3323659225 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3387382048 (RuntimeObject * __this /* static, unused */, String_t* ___aText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m1765329307(__this, method) ((  void (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Keys()
#define Dictionary_2_get_Keys_m3940207030(__this, method) ((  KeyCollection_t2920988767 * (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>::GetEnumerator()
#define KeyCollection_GetEnumerator_m2653291907(__this, method) ((  Enumerator_t2913490280  (*) (KeyCollection_t2920988767 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m982770428_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m3970196056(__this, method) ((  String_t* (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_get_Current_m3687673883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m1781309907(__this, method) ((  bool (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_MoveNext_m76191888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m3927693234(__this, method) ((  void (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4281407763 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSON_Parse_m2597873051 (RuntimeObject * __this /* static, unused */, String_t* ___aJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSON_Parse_m2597873051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		// return JSONNode.Parse(aJSON);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_1 = JSONNode_Parse_m883557124(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
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
// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m1810447092 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray__ctor_m1810447092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JSONNode> m_List = new List<JSONNode>();
		List_1_t123164443 * L_0 = (List_1_t123164443 *)il2cpp_codegen_object_new(List_1_t123164443_il2cpp_TypeInfo_var);
		List_1__ctor_m2497635700(L_0, /*hidden argument*/List_1__ctor_m2497635700_RuntimeMethod_var);
		__this->set_m_List_6(L_0);
		// private bool inline = false;
		__this->set_inline_7((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray::get_Inline()
extern "C"  bool JSONArray_get_Inline_m213943594 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return inline; }
		bool L_0 = __this->get_inline_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return inline; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::set_Inline(System.Boolean)
extern "C"  void JSONArray_set_Inline_m27152584 (JSONArray_t2340361630 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->set_inline_7(L_0);
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONArray::get_Tag()
extern "C"  int32_t JSONArray_get_Tag_m70753800 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Array; } }
		V_0 = 1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Array; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONArray::get_IsArray()
extern "C"  bool JSONArray_get_IsArray_m620401257 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsArray { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsArray { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONArray_GetEnumerator_m3244393662 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_GetEnumerator_m3244393662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		List_1_t123164443 * L_0 = __this->get_m_List_6();
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		NullCheck(L_0);
		Enumerator_t2012408320  L_1 = List_1_GetEnumerator_m3335450781(L_0, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		Enumerator_t1513288951  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Enumerator__ctor_m191252025((&L_2), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		Enumerator_t1513288951  L_3 = V_0;
		return L_3;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONArray_get_Item_m770505322 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Item_m770505322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t123164443 * L_2 = __this->get_m_List_6();
		// if (aIndex < 0 || aIndex >= m_List.Count)
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}

IL_0019:
	{
		// return new JSONLazyCreator(this);
		// return new JSONLazyCreator(this);
		JSONLazyCreator_t3621052039 * L_4 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_4, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0037;
	}

IL_0025:
	{
		// return m_List[aIndex];
		List_1_t123164443 * L_5 = __this->get_m_List_6();
		int32_t L_6 = ___aIndex0;
		// return m_List[aIndex];
		NullCheck(L_5);
		JSONNode_t2946056997 * L_7 = List_1_get_Item_m1412457272(L_5, L_6, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		JSONNode_t2946056997 * L_8 = V_0;
		return L_8;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m2325276014 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_set_Item_m2325276014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t2946056997 * L_0 = ___value1;
		// if (value == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0014:
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		List_1_t123164443 * L_5 = __this->get_m_List_6();
		// if (aIndex < 0 || aIndex >= m_List.Count)
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m4160179865(L_5, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		// m_List.Add(value);
		List_1_t123164443 * L_7 = __this->get_m_List_6();
		JSONNode_t2946056997 * L_8 = ___value1;
		// m_List.Add(value);
		NullCheck(L_7);
		List_1_Add_m1031575508(L_7, L_8, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		goto IL_004a;
	}

IL_003d:
	{
		// m_List[aIndex] = value;
		List_1_t123164443 * L_9 = __this->get_m_List_6();
		int32_t L_10 = ___aIndex0;
		JSONNode_t2946056997 * L_11 = ___value1;
		// m_List[aIndex] = value;
		NullCheck(L_9);
		List_1_set_Item_m4256349914(L_9, L_10, L_11, /*hidden argument*/List_1_set_Item_m4256349914_RuntimeMethod_var);
	}

IL_004a:
	{
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONArray_get_Item_m3275530059 (JSONArray_t2340361630 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Item_m3275530059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// get { return new JSONLazyCreator(this); }
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_t3621052039 * L_0 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return new JSONLazyCreator(this); }
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m3538304411 (JSONArray_t2340361630 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_set_Item_m3538304411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t2946056997 * L_0 = ___value1;
		// if (value == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0014:
	{
		// m_List.Add(value);
		List_1_t123164443 * L_3 = __this->get_m_List_6();
		JSONNode_t2946056997 * L_4 = ___value1;
		// m_List.Add(value);
		NullCheck(L_3);
		List_1_Add_m1031575508(L_3, L_4, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m1674341146 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Count_m1674341146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return m_List.Count; }
		List_1_t123164443 * L_0 = __this->get_m_List_6();
		// get { return m_List.Count; }
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4160179865(L_0, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// get { return m_List.Count; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_Add_m1638966007 (JSONArray_t2340361630 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Add_m1638966007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aItem == null)
		JSONNode_t2946056997 * L_0 = ___aItem1;
		// if (aItem == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___aItem1 = L_2;
	}

IL_0014:
	{
		// m_List.Add(aItem);
		List_1_t123164443 * L_3 = __this->get_m_List_6();
		JSONNode_t2946056997 * L_4 = ___aItem1;
		// m_List.Add(aItem);
		NullCheck(L_3);
		List_1_Add_m1031575508(L_3, L_4, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONArray_Remove_m649058450 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Remove_m649058450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t123164443 * L_2 = __this->get_m_List_6();
		// if (aIndex < 0 || aIndex >= m_List.Count)
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}

IL_0019:
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_0040;
	}

IL_0020:
	{
		// JSONNode tmp = m_List[aIndex];
		List_1_t123164443 * L_4 = __this->get_m_List_6();
		int32_t L_5 = ___aIndex0;
		// JSONNode tmp = m_List[aIndex];
		NullCheck(L_4);
		JSONNode_t2946056997 * L_6 = List_1_get_Item_m1412457272(L_4, L_5, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		V_1 = L_6;
		// m_List.RemoveAt(aIndex);
		List_1_t123164443 * L_7 = __this->get_m_List_6();
		int32_t L_8 = ___aIndex0;
		// m_List.RemoveAt(aIndex);
		NullCheck(L_7);
		List_1_RemoveAt_m3966380295(L_7, L_8, /*hidden argument*/List_1_RemoveAt_m3966380295_RuntimeMethod_var);
		// return tmp;
		JSONNode_t2946056997 * L_9 = V_1;
		V_0 = L_9;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		JSONNode_t2946056997 * L_10 = V_0;
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONArray_Remove_m2844647652 (JSONArray_t2340361630 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Remove_m2844647652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// m_List.Remove(aNode);
		List_1_t123164443 * L_0 = __this->get_m_List_6();
		JSONNode_t2946056997 * L_1 = ___aNode0;
		// m_List.Remove(aNode);
		NullCheck(L_0);
		List_1_Remove_m1859561057(L_0, L_1, /*hidden argument*/List_1_Remove_m1859561057_RuntimeMethod_var);
		// return aNode;
		JSONNode_t2946056997 * L_2 = ___aNode0;
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		JSONNode_t2946056997 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
extern "C"  RuntimeObject* JSONArray_get_Children_m1636733882 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Children_m1636733882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2066799033 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__Iterator0_t2066799033 * L_0 = (U3CU3Ec__Iterator0_t2066799033 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m1141181736(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t2066799033 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CU3Ec__Iterator0_t2066799033 * L_2 = V_0;
		U3CU3Ec__Iterator0_t2066799033 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_5(((int32_t)-2));
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void SimpleJSON.JSONArray::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONArray_WriteToStringBuilder_m689595461 (JSONArray_t2340361630 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_WriteToStringBuilder_m689595461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// aSB.Append('[');
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append('[');
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// int count = m_List.Count;
		List_1_t123164443 * L_1 = __this->get_m_List_6();
		// int count = m_List.Count;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m4160179865(L_1, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		V_0 = L_2;
		// if (inline)
		bool L_3 = __this->get_inline_7();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_0024:
	{
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_007c;
	}

IL_002b:
	{
		// if (i > 0)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// aSB.Append(',');
		StringBuilder_t * L_5 = ___aSB0;
		// aSB.Append(',');
		NullCheck(L_5);
		StringBuilder_Append_m2383614642(L_5, ((int32_t)44), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_6 = ___aMode3;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// aSB.AppendLine();
		StringBuilder_t * L_7 = ___aSB0;
		// aSB.AppendLine();
		NullCheck(L_7);
		StringBuilder_AppendLine_m2783356575(L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_8 = ___aMode3;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		// aSB.Append(' ', aIndent + aIndentInc);
		StringBuilder_t * L_9 = ___aSB0;
		int32_t L_10 = ___aIndent1;
		int32_t L_11 = ___aIndentInc2;
		// aSB.Append(' ', aIndent + aIndentInc);
		NullCheck(L_9);
		StringBuilder_Append_m2180175564(L_9, ((int32_t)32), ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_005f:
	{
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		List_1_t123164443 * L_12 = __this->get_m_List_6();
		int32_t L_13 = V_1;
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		NullCheck(L_12);
		JSONNode_t2946056997 * L_14 = List_1_get_Item_m1412457272(L_12, L_13, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		StringBuilder_t * L_15 = ___aSB0;
		int32_t L_16 = ___aIndent1;
		int32_t L_17 = ___aIndentInc2;
		int32_t L_18 = ___aIndentInc2;
		int32_t L_19 = ___aMode3;
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		NullCheck(L_14);
		VirtActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), L_18, L_19);
		// for (int i = 0; i < count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007c:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_002b;
		}
	}
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_23 = ___aMode3;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t * L_24 = ___aSB0;
		// aSB.AppendLine().Append(' ', aIndent);
		NullCheck(L_24);
		StringBuilder_t * L_25 = StringBuilder_AppendLine_m2783356575(L_24, /*hidden argument*/NULL);
		int32_t L_26 = ___aIndent1;
		// aSB.AppendLine().Append(' ', aIndent);
		NullCheck(L_25);
		StringBuilder_Append_m2180175564(L_25, ((int32_t)32), L_26, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// aSB.Append(']');
		StringBuilder_t * L_27 = ___aSB0;
		// aSB.Append(']');
		NullCheck(L_27);
		StringBuilder_Append_m2383614642(L_27, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONArray_SerializeBinary_m1073995468 (JSONArray_t2340361630 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_SerializeBinary_m1073995468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// aWriter.Write((byte)JSONNodeType.Array);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.Array);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)1);
		// aWriter.Write(m_List.Count);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		List_1_t123164443 * L_2 = __this->get_m_List_6();
		// aWriter.Write(m_List.Count);
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		// aWriter.Write(m_List.Count);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// for (int i = 0; i < m_List.Count; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0020:
	{
		// m_List[i].SerializeBinary(aWriter);
		List_1_t123164443 * L_4 = __this->get_m_List_6();
		int32_t L_5 = V_0;
		// m_List[i].SerializeBinary(aWriter);
		NullCheck(L_4);
		JSONNode_t2946056997 * L_6 = List_1_get_Item_m1412457272(L_4, L_5, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		BinaryWriter_t3992595042 * L_7 = ___aWriter0;
		// m_List[i].SerializeBinary(aWriter);
		NullCheck(L_6);
		VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(41 /* System.Void SimpleJSON.JSONNode::SerializeBinary(System.IO.BinaryWriter) */, L_6, L_7);
		// for (int i = 0; i < m_List.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < m_List.Count; i++)
		int32_t L_9 = V_0;
		List_1_t123164443 * L_10 = __this->get_m_List_6();
		// for (int i = 0; i < m_List.Count; i++)
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m4160179865(L_10, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0020;
		}
	}
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
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m1141181736 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m1389010882 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_MoveNext_m1389010882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00b4;
	}

IL_0023:
	{
		// foreach (JSONNode N in m_List)
		JSONArray_t2340361630 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		List_1_t123164443 * L_3 = L_2->get_m_List_6();
		// foreach (JSONNode N in m_List)
		NullCheck(L_3);
		Enumerator_t2012408320  L_4 = List_1_GetEnumerator_m3335450781(L_3, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0082;
				}
			}
		}

IL_004a:
		{
			goto IL_0082;
		}

IL_004f:
		{
			// foreach (JSONNode N in m_List)
			Enumerator_t2012408320 * L_6 = __this->get_address_of_U24locvar0_0();
			// foreach (JSONNode N in m_List)
			JSONNode_t2946056997 * L_7 = Enumerator_get_Current_m2446791353((Enumerator_t2012408320 *)L_6, /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			__this->set_U3CNU3E__1_1(L_7);
			// yield return N;
			JSONNode_t2946056997 * L_8 = __this->get_U3CNU3E__1_1();
			__this->set_U24current_3(L_8);
			bool L_9 = __this->get_U24disposing_4();
			if (L_9)
			{
				goto IL_007b;
			}
		}

IL_0074:
		{
			__this->set_U24PC_5(1);
		}

IL_007b:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB6, FINALLY_0097);
		}

IL_0082:
		{
			Enumerator_t2012408320 * L_10 = __this->get_address_of_U24locvar0_0();
			// foreach (JSONNode N in m_List)
			bool L_11 = Enumerator_MoveNext_m667095019((Enumerator_t2012408320 *)L_10, /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_004f;
			}
		}

IL_0092:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(151)
		}

IL_009b:
		{
			Enumerator_t2012408320 * L_13 = __this->get_address_of_U24locvar0_0();
			// foreach (JSONNode N in m_List)
			Enumerator_Dispose_m721294528((Enumerator_t2012408320 *)L_13, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
			IL2CPP_END_FINALLY(151)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		// }
		__this->set_U24PC_5((-1));
	}

IL_00b4:
	{
		return (bool)0;
	}

IL_00b6:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m3579767890 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Object SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m268166767 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m995296339 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Dispose_m995296339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t2012408320 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m721294528((Enumerator_t2012408320 *)L_2, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m926194436 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m926194436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CU3Ec__Iterator0_Reset_m926194436_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m905320162 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2066799033 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_5();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t2066799033 * L_2 = (U3CU3Ec__Iterator0_t2066799033 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m1141181736(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator0_t2066799033 * L_3 = V_0;
		JSONArray_t2340361630 * L_4 = __this->get_U24this_2();
		NullCheck(L_3);
		L_3->set_U24this_2(L_4);
		U3CU3Ec__Iterator0_t2066799033 * L_5 = V_0;
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
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
extern "C"  void JSONBool__ctor_m256490940 (JSONBool_t130112664 * __this, bool ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONBool__ctor_m256490940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(bool aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		bool L_0 = ___aData0;
		__this->set_m_Data_6(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
extern "C"  void JSONBool__ctor_m2893134212 (JSONBool_t130112664 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONBool__ctor_m2893134212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		// Value = aData;
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONBool::get_Tag()
extern "C"  int32_t JSONBool_get_Tag_m3919200192 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		V_0 = 6;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
extern "C"  bool JSONBool_get_IsBoolean_m590459540 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsBoolean { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsBoolean { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONBool::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONBool_GetEnumerator_m224621338 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1513288951  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_t1513288951  L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONBool::get_Value()
extern "C"  String_t* JSONBool_get_Value_m2671812150 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_Data.ToString(); }
		bool* L_0 = __this->get_address_of_m_Data_6();
		// get { return m_Data.ToString(); }
		String_t* L_1 = Boolean_ToString_m2664721875((bool*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// get { return m_Data.ToString(); }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
extern "C"  void JSONBool_set_Value_m2347564520 (JSONBool_t130112664 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONBool_set_Value_m2347564520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bool.TryParse(value, out v))
		String_t* L_0 = ___value0;
		// if (bool.TryParse(value, out v))
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_1 = Boolean_TryParse_m1999513058(NULL /*static, unused*/, L_0, (bool*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// m_Data = v;
		bool L_2 = V_0;
		__this->set_m_Data_6(L_2);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
extern "C"  bool JSONBool_get_AsBool_m4013081955 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_Data; }
		bool L_0 = __this->get_m_Data_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return m_Data; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
extern "C"  void JSONBool_set_AsBool_m81101108 (JSONBool_t130112664 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		bool L_0 = ___value0;
		__this->set_m_Data_6(L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONBool_WriteToStringBuilder_m54378927 (JSONBool_t130112664 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONBool_WriteToStringBuilder_m54378927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * G_B2_0 = NULL;
	StringBuilder_t * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t * G_B3_1 = NULL;
	{
		// aSB.Append((m_Data) ? "true" : "false");
		StringBuilder_t * L_0 = ___aSB0;
		bool L_1 = __this->get_m_Data_6();
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		// aSB.Append((m_Data) ? "true" : "false");
		NullCheck(G_B3_1);
		StringBuilder_Append_m1965104174(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
extern "C"  bool JSONBool_Equals_m1859842010 (JSONBool_t130112664 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONBool_Equals_m1859842010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0034;
	}

IL_000e:
	{
		// if (obj is bool)
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// return m_Data == (bool)obj;
		bool L_2 = __this->get_m_Data_6();
		RuntimeObject * L_3 = ___obj0;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((*(bool*)((bool*)UnBox(L_3, Boolean_t97287965_il2cpp_TypeInfo_var))))))? 1 : 0);
		goto IL_0034;
	}

IL_002d:
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
extern "C"  int32_t JSONBool_GetHashCode_m2044598991 (JSONBool_t130112664 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		bool* L_0 = __this->get_address_of_m_Data_6();
		// return m_Data.GetHashCode();
		int32_t L_1 = Boolean_GetHashCode_m3167312162((bool*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONBool::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONBool_SerializeBinary_m3857374775 (JSONBool_t130112664 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	{
		// aWriter.Write((byte)JSONNodeType.Boolean);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.Boolean);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)6);
		// aWriter.Write(m_Data);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		bool L_2 = __this->get_m_Data_6();
		// aWriter.Write(m_Data);
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_1, L_2);
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
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m4143221426 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator__ctor_m4143221426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNode m_Node = null;
		__this->set_m_Node_6((JSONNode_t2946056997 *)NULL);
		// private string m_Key = null;
		__this->set_m_Key_7((String_t*)NULL);
		// public JSONLazyCreator(JSONNode aNode)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t2946056997 * L_0 = ___aNode0;
		__this->set_m_Node_6(L_0);
		// m_Key = null;
		__this->set_m_Key_7((String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m1713835880 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator__ctor_m1713835880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNode m_Node = null;
		__this->set_m_Node_6((JSONNode_t2946056997 *)NULL);
		// private string m_Key = null;
		__this->set_m_Key_7((String_t*)NULL);
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t2946056997 * L_0 = ___aNode0;
		__this->set_m_Node_6(L_0);
		// m_Key = aKey;
		String_t* L_1 = ___aKey1;
		__this->set_m_Key_7(L_1);
		// }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
extern "C"  int32_t JSONLazyCreator_get_Tag_m1690904436 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		V_0 = 7;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONLazyCreator::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONLazyCreator_GetEnumerator_m145823688 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1513288951  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_t1513288951  L_1 = V_1;
		return L_1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONLazyCreator_get_Item_m1604509049 (JSONLazyCreator_t3621052039 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_Item_m1604509049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// get { return new JSONLazyCreator(this); }
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_t3621052039 * L_0 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return new JSONLazyCreator(this); }
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2105688194 (JSONLazyCreator_t3621052039 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_Item_m2105688194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONArray()).Add(value); }
		// set { Set(new JSONArray()).Add(value); }
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		// set { Set(new JSONArray()).Add(value); }
		JSONArray_t2340361630 * L_1 = JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884_RuntimeMethod_var);
		JSONNode_t2946056997 * L_2 = ___value1;
		// set { Set(new JSONArray()).Add(value); }
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// set { Set(new JSONArray()).Add(value); }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONLazyCreator_get_Item_m3899434704 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_Item_m3899434704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// get { return new JSONLazyCreator(this, aKey); }
		String_t* L_0 = ___aKey0;
		// get { return new JSONLazyCreator(this, aKey); }
		JSONLazyCreator_t3621052039 * L_1 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m1713835880(L_1, __this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return new JSONLazyCreator(this, aKey); }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2231982194 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_Item_m2231982194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONObject()).Add(aKey, value); }
		// set { Set(new JSONObject()).Add(aKey, value); }
		JSONObject_t4158403488 * L_0 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_0, /*hidden argument*/NULL);
		// set { Set(new JSONObject()).Add(aKey, value); }
		JSONObject_t4158403488 * L_1 = JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_t2946056997 * L_3 = ___value1;
		// set { Set(new JSONObject()).Add(aKey, value); }
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// set { Set(new JSONObject()).Add(aKey, value); }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m1572478273 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_Add_m1572478273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONArray()).Add(aItem);
		// Set(new JSONArray()).Add(aItem);
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		// Set(new JSONArray()).Add(aItem);
		JSONArray_t2340361630 * L_1 = JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884_RuntimeMethod_var);
		JSONNode_t2946056997 * L_2 = ___aItem0;
		// Set(new JSONArray()).Add(aItem);
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m1239340615 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_Add_m1239340615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONObject()).Add(aKey, aItem);
		// Set(new JSONObject()).Add(aKey, aItem);
		JSONObject_t4158403488 * L_0 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_0, /*hidden argument*/NULL);
		// Set(new JSONObject()).Add(aKey, aItem);
		JSONObject_t4158403488 * L_1 = JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_t2946056997 * L_3 = ___aItem1;
		// Set(new JSONObject()).Add(aKey, aItem);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m113693744 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (b == null)
		RuntimeObject * L_0 = ___b1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_001b;
	}

IL_000e:
	{
		// return System.Object.ReferenceEquals(a, b);
		JSONLazyCreator_t3621052039 * L_1 = ___a0;
		RuntimeObject * L_2 = ___b1;
		// return System.Object.ReferenceEquals(a, b);
		bool L_3 = il2cpp_codegen_object_reference_equals(L_1, L_2);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m272214824 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return !(a == b);
		JSONLazyCreator_t3621052039 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		// return !(a == b);
		bool L_2 = JSONLazyCreator_op_Equality_m113693744(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m1206030535 (JSONLazyCreator_t3621052039 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_001b;
	}

IL_000e:
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject * L_1 = ___obj0;
		// return System.Object.ReferenceEquals(this, obj);
		bool L_2 = il2cpp_codegen_object_reference_equals(__this, L_1);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m485192462 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m639509886 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsInt_m639509886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { Set(new JSONNumber(0)); return 0; }
		// get { Set(new JSONNumber(0)); return 0; }
		JSONNumber_t4005729108 * L_0 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_0, (0.0), /*hidden argument*/NULL);
		// get { Set(new JSONNumber(0)); return 0; }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// get { Set(new JSONNumber(0)); return 0; }
		V_0 = 0;
		goto IL_001d;
	}

IL_001d:
	{
		// get { Set(new JSONNumber(0)); return 0; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m1252161255 (JSONLazyCreator_t3621052039 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsInt_m1252161255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		int32_t L_0 = ___value0;
		// set { Set(new JSONNumber(value)); }
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, (((double)((double)L_0))), /*hidden argument*/NULL);
		// set { Set(new JSONNumber(value)); }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m3107782794 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsFloat_m3107782794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		JSONNumber_t4005729108 * L_0 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_0, (0.0), /*hidden argument*/NULL);
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		V_0 = (0.0f);
		goto IL_0021;
	}

IL_0021:
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m3660787451 (JSONLazyCreator_t3621052039 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsFloat_m3660787451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		float L_0 = ___value0;
		// set { Set(new JSONNumber(value)); }
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, (((double)((double)L_0))), /*hidden argument*/NULL);
		// set { Set(new JSONNumber(value)); }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m1582721663 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsDouble_m1582721663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		JSONNumber_t4005729108 * L_0 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_0, (0.0), /*hidden argument*/NULL);
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		V_0 = (0.0);
		goto IL_0025;
	}

IL_0025:
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m2172386329 (JSONLazyCreator_t3621052039 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsDouble_m2172386329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		double L_0 = ___value0;
		// set { Set(new JSONNumber(value)); }
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, L_0, /*hidden argument*/NULL);
		// set { Set(new JSONNumber(value)); }
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
extern "C"  int64_t JSONLazyCreator_get_AsLong_m1291925100 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsLong_m1291925100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// Set(new JSONString("0"));
		// Set(new JSONString("0"));
		JSONString_t3803360443 * L_1 = (JSONString_t3803360443 *)il2cpp_codegen_object_new(JSONString_t3803360443_il2cpp_TypeInfo_var);
		JSONString__ctor_m562445776(L_1, _stringLiteral3452614544, /*hidden argument*/NULL);
		// Set(new JSONString("0"));
		JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329_RuntimeMethod_var);
		goto IL_0036;
	}

IL_0021:
	{
		// Set(new JSONNumber(0.0));
		// Set(new JSONNumber(0.0));
		JSONNumber_t4005729108 * L_2 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_2, (0.0), /*hidden argument*/NULL);
		// Set(new JSONNumber(0.0));
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_2, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
	}

IL_0036:
	{
		// return 0L;
		V_0 = (((int64_t)((int64_t)0)));
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int64_t L_3 = V_0;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
extern "C"  void JSONLazyCreator_set_AsLong_m759719013 (JSONLazyCreator_t3621052039 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsLong_m759719013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		// Set(new JSONString(value.ToString()));
		String_t* L_1 = Int64_ToString_m2986581816((int64_t*)(&___value0), /*hidden argument*/NULL);
		// Set(new JSONString(value.ToString()));
		JSONString_t3803360443 * L_2 = (JSONString_t3803360443 *)il2cpp_codegen_object_new(JSONString_t3803360443_il2cpp_TypeInfo_var);
		JSONString__ctor_m562445776(L_2, L_1, /*hidden argument*/NULL);
		// Set(new JSONString(value.ToString()));
		JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329(__this, L_2, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_t3803360443_m1534910329_RuntimeMethod_var);
		goto IL_0037;
	}

IL_0029:
	{
		// Set(new JSONNumber(value));
		int64_t L_3 = ___value0;
		// Set(new JSONNumber(value));
		JSONNumber_t4005729108 * L_4 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_4, (((double)((double)L_3))), /*hidden argument*/NULL);
		// Set(new JSONNumber(value));
		JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459(__this, L_4, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t4005729108_m1338349459_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m713101833 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsBool_m713101833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { Set(new JSONBool(false)); return false; }
		// get { Set(new JSONBool(false)); return false; }
		JSONBool_t130112664 * L_0 = (JSONBool_t130112664 *)il2cpp_codegen_object_new(JSONBool_t130112664_il2cpp_TypeInfo_var);
		JSONBool__ctor_m256490940(L_0, (bool)0, /*hidden argument*/NULL);
		// get { Set(new JSONBool(false)); return false; }
		JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923_RuntimeMethod_var);
		// get { Set(new JSONBool(false)); return false; }
		V_0 = (bool)0;
		goto IL_0015;
	}

IL_0015:
	{
		// get { Set(new JSONBool(false)); return false; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m3560479934 (JSONLazyCreator_t3621052039 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsBool_m3560479934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONBool(value)); }
		bool L_0 = ___value0;
		// set { Set(new JSONBool(value)); }
		JSONBool_t130112664 * L_1 = (JSONBool_t130112664 *)il2cpp_codegen_object_new(JSONBool_t130112664_il2cpp_TypeInfo_var);
		JSONBool__ctor_m256490940(L_1, L_0, /*hidden argument*/NULL);
		// set { Set(new JSONBool(value)); }
		JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONBool_t130112664_m1012042923_RuntimeMethod_var);
		// set { Set(new JSONBool(value)); }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t2340361630 * JSONLazyCreator_get_AsArray_m1273817130 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsArray_m1273817130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t2340361630 * V_0 = NULL;
	{
		// get { return Set(new JSONArray()); }
		// get { return Set(new JSONArray()); }
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		// get { return Set(new JSONArray()); }
		JSONArray_t2340361630 * L_1 = JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_t2340361630_m659877884_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// get { return Set(new JSONArray()); }
		JSONArray_t2340361630 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C"  JSONObject_t4158403488 * JSONLazyCreator_get_AsObject_m2281226208 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsObject_m2281226208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t4158403488 * V_0 = NULL;
	{
		// get { return Set(new JSONObject()); }
		// get { return Set(new JSONObject()); }
		JSONObject_t4158403488 * L_0 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_0, /*hidden argument*/NULL);
		// get { return Set(new JSONObject()); }
		JSONObject_t4158403488 * L_1 = JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_t4158403488_m2596896281_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// get { return Set(new JSONObject()); }
		JSONObject_t4158403488 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONLazyCreator_WriteToStringBuilder_m3234868409 (JSONLazyCreator_t3621052039 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_WriteToStringBuilder_m3234868409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append("null");
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral1202628576, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONLazyCreator_SerializeBinary_m2891749081 (JSONLazyCreator_t3621052039 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
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
// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m4108532860 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONNode_get_Item_m666679968 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		JSONNode_t2946056997 * L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m3863398006 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_get_Item_m549512498 (JSONNode_t2946056997 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		JSONNode_t2946056997 * L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m2975862191 (JSONNode_t2946056997 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m1803583094 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_Value_m1803583094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public virtual string Value { get { return ""; } set { } }
		V_0 = _stringLiteral757602046;
		goto IL_000c;
	}

IL_000c:
	{
		// public virtual string Value { get { return ""; } set { } }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m164851360 (JSONNode_t2946056997 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public virtual string Value { get { return ""; } set { } }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m3208034033 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public virtual int Count { get { return 0; } }
		V_0 = 0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual int Count { get { return 0; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNumber()
extern "C"  bool JSONNode_get_IsNumber_m1997555190 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsNumber { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsNumber { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsString()
extern "C"  bool JSONNode_get_IsString_m2365069463 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsString { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsString { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsBoolean()
extern "C"  bool JSONNode_get_IsBoolean_m374546442 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsBoolean { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsBoolean { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNull()
extern "C"  bool JSONNode_get_IsNull_m432204863 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsNull { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsNull { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsArray()
extern "C"  bool JSONNode_get_IsArray_m3266153079 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsArray { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsArray { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsObject()
extern "C"  bool JSONNode_get_IsObject_m1218486432 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool IsObject { get { return false; } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool IsObject { get { return false; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_Inline()
extern "C"  bool JSONNode_get_Inline_m2588530947 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public virtual bool Inline { get { return false; } set { } }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// public virtual bool Inline { get { return false; } set { } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean)
extern "C"  void JSONNode_set_Inline_m1412959380 (JSONNode_t2946056997 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public virtual bool Inline { get { return false; } set { } }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m3412224573 (JSONNode_t2946056997 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m1559930036 (JSONNode_t2946056997 * __this, JSONNode_t2946056997 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Add_m1559930036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add("", aItem);
		JSONNode_t2946056997 * L_0 = ___aItem0;
		// Add("", aItem);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, _stringLiteral757602046, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m3322071993 (JSONNode_t2946056997 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		JSONNode_t2946056997 * L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m982669543 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		JSONNode_t2946056997 * L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m3985872421 (JSONNode_t2946056997 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return aNode;
		JSONNode_t2946056997 * L_0 = ___aNode0;
		V_0 = L_0;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
extern "C"  RuntimeObject* JSONNode_get_Children_m3071153908 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_Children_m3071153908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2360448098 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__Iterator0_t2360448098 * L_0 = (U3CU3Ec__Iterator0_t2360448098 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m2223295763(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t2360448098 * L_1 = V_0;
		U3CU3Ec__Iterator0_t2360448098 * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_U24PC_2(((int32_t)-2));
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  RuntimeObject* JSONNode_get_DeepChildren_m2537763012 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_DeepChildren_m2537763012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator1_t2360382562 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__Iterator1_t2360382562 * L_0 = (U3CU3Ec__Iterator1_t2360382562 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m2346700051(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator1_t2360382562 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_4(__this);
		U3CU3Ec__Iterator1_t2360382562 * L_2 = V_0;
		U3CU3Ec__Iterator1_t2360382562 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_7(((int32_t)-2));
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m3879752396 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ToString_m3879752396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, 0, JSONTextMode.Compact);
		StringBuilder_t * L_1 = V_0;
		// WriteToStringBuilder(sb, 0, 0, JSONTextMode.Compact);
		VirtActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, 0, 0);
		// return sb.ToString();
		StringBuilder_t * L_2 = V_0;
		// return sb.ToString();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_1 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.Int32)
extern "C"  String_t* JSONNode_ToString_m101519447 (JSONNode_t2946056997 * __this, int32_t ___aIndent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ToString_m101519447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, aIndent, JSONTextMode.Indent);
		StringBuilder_t * L_1 = V_0;
		int32_t L_2 = ___aIndent0;
		// WriteToStringBuilder(sb, 0, aIndent, JSONTextMode.Indent);
		VirtActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, L_2, 1);
		// return sb.ToString();
		StringBuilder_t * L_3 = V_0;
		// return sb.ToString();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_1 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode::get_Linq()
extern "C"  RuntimeObject* JSONNode_get_Linq_m2984709014 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_Linq_m2984709014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// public IEnumerable<KeyValuePair<string, JSONNode>> Linq { get { return new LinqEnumerator(this); } }
		// public IEnumerable<KeyValuePair<string, JSONNode>> Linq { get { return new LinqEnumerator(this); } }
		LinqEnumerator_t509071878 * L_0 = (LinqEnumerator_t509071878 *)il2cpp_codegen_object_new(LinqEnumerator_t509071878_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3544204463(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// public IEnumerable<KeyValuePair<string, JSONNode>> Linq { get { return new LinqEnumerator(this); } }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode::get_Keys()
extern "C"  KeyEnumerator_t488138053  JSONNode_get_Keys_m1079695168 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		Enumerator_t1513288951  L_0 = VirtFuncInvoker0< Enumerator_t1513288951  >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		KeyEnumerator_t488138053  L_1;
		memset(&L_1, 0, sizeof(L_1));
		KeyEnumerator__ctor_m1622573906((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		KeyEnumerator_t488138053  L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode::get_Values()
extern "C"  ValueEnumerator_t3808401860  JSONNode_get_Values_m1108093404 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		Enumerator_t1513288951  L_0 = VirtFuncInvoker0< Enumerator_t1513288951  >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		ValueEnumerator_t3808401860  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ValueEnumerator__ctor_m585639700((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		ValueEnumerator_t3808401860  L_2 = V_0;
		return L_2;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m3335246132 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsDouble_m3335246132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double v = 0.0;
		V_0 = (0.0);
		// if (double.TryParse(Value,NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		// if (double.TryParse(Value,NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		// if (double.TryParse(Value,NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (double.TryParse(Value,NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		bool L_2 = Double_TryParse_m623190659(NULL /*static, unused*/, L_0, ((int32_t)167), L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return v;
		double L_3 = V_0;
		V_1 = L_3;
		goto IL_003d;
	}

IL_002e:
	{
		// return 0.0;
		V_1 = (0.0);
		goto IL_003d;
	}

IL_003d:
	{
		// }
		double L_4 = V_1;
		return L_4;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m2583247575 (JSONNode_t2946056997 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsDouble_m2583247575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value.ToString(CultureInfo.InvariantCulture);
		// Value = value.ToString(CultureInfo.InvariantCulture);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Value = value.ToString(CultureInfo.InvariantCulture);
		String_t* L_1 = Double_ToString_m3828879243((double*)(&___value0), L_0, /*hidden argument*/NULL);
		// Value = value.ToString(CultureInfo.InvariantCulture);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m1744967455 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return (int)AsDouble; }
		// get { return (int)AsDouble; }
		double L_0 = VirtFuncInvoker0< double >::Invoke(29 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		V_0 = (((int32_t)((int32_t)L_0)));
		goto IL_000e;
	}

IL_000e:
	{
		// get { return (int)AsDouble; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m3925067009 (JSONNode_t2946056997 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { AsDouble = value; }
		int32_t L_0 = ___value0;
		// set { AsDouble = value; }
		VirtActionInvoker1< double >::Invoke(30 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, (((double)((double)L_0))));
		// set { AsDouble = value; }
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m1174173524 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return (float)AsDouble; }
		// get { return (float)AsDouble; }
		double L_0 = VirtFuncInvoker0< double >::Invoke(29 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		V_0 = (((float)((float)L_0)));
		goto IL_000e;
	}

IL_000e:
	{
		// get { return (float)AsDouble; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m3518333943 (JSONNode_t2946056997 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { AsDouble = value; }
		float L_0 = ___value0;
		// set { AsDouble = value; }
		VirtActionInvoker1< double >::Invoke(30 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, (((double)((double)L_0))));
		// set { AsDouble = value; }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m4176397070 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsBool_m4176397070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool v = false;
		V_0 = (bool)0;
		// if (bool.TryParse(Value, out v))
		// if (bool.TryParse(Value, out v))
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		// if (bool.TryParse(Value, out v))
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_1 = Boolean_TryParse_m1999513058(NULL /*static, unused*/, L_0, (bool*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// return v;
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0030;
	}

IL_001c:
	{
		// return !string.IsNullOrEmpty(Value);
		// return !string.IsNullOrEmpty(Value);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		// return !string.IsNullOrEmpty(Value);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_0030:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m3057475042 (JSONNode_t2946056997 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsBool_m3057475042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * G_B2_0 = NULL;
	JSONNode_t2946056997 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_t2946056997 * G_B3_1 = NULL;
	{
		// Value = (value) ? "true" : "false";
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		// Value = (value) ? "true" : "false";
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNode::get_AsLong()
extern "C"  int64_t JSONNode_get_AsLong_m2462365054 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// long val = 0;
		V_0 = (((int64_t)((int64_t)0)));
		// if (long.TryParse(Value, out val))
		// if (long.TryParse(Value, out val))
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		// if (long.TryParse(Value, out val))
		bool L_1 = Int64_TryParse_m2208578514(NULL /*static, unused*/, L_0, (int64_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return val;
		int64_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0025;
	}

IL_001d:
	{
		// return 0L;
		V_1 = (((int64_t)((int64_t)0)));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int64_t L_3 = V_1;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsLong(System.Int64)
extern "C"  void JSONNode_set_AsLong_m74205833 (JSONNode_t2946056997 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// Value = value.ToString();
		// Value = value.ToString();
		String_t* L_0 = Int64_ToString_m2986581816((int64_t*)(&___value0), /*hidden argument*/NULL);
		// Value = value.ToString();
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C"  JSONArray_t2340361630 * JSONNode_get_AsArray_m715902207 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsArray_m715902207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t2340361630 * V_0 = NULL;
	{
		// return this as JSONArray;
		V_0 = ((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)__this, JSONArray_t2340361630_il2cpp_TypeInfo_var));
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONArray_t2340361630 * L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONNode::get_AsObject()
extern "C"  JSONObject_t4158403488 * JSONNode_get_AsObject_m1198661593 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsObject_m1198661593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t4158403488 * V_0 = NULL;
	{
		// return this as JSONObject;
		V_0 = ((JSONObject_t4158403488 *)IsInstClass((RuntimeObject*)__this, JSONObject_t4158403488_il2cpp_TypeInfo_var));
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONObject_t4158403488 * L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m2523080653 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m2523080653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return new JSONString(s);
		String_t* L_0 = ___s0;
		// return new JSONString(s);
		JSONString_t3803360443 * L_1 = (JSONString_t3803360443 *)il2cpp_codegen_object_new(JSONString_t3803360443_il2cpp_TypeInfo_var);
		JSONString__ctor_m562445776(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m1622328703 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1622328703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return (d == null) ? null : d.Value;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? null : d.Value;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0019;
	}

IL_0013:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? null : d.Value;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m6922295 (RuntimeObject * __this /* static, unused */, double ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m6922295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return new JSONNumber(n);
		double L_0 = ___n0;
		// return new JSONNumber(n);
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.Double SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  double JSONNode_op_Implicit_m2306304485 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m2306304485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double G_B3_0 = 0.0;
	{
		// return (d == null) ? 0 : d.AsDouble;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? 0 : d.AsDouble;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = (0.0);
		goto IL_0021;
	}

IL_001b:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? 0 : d.AsDouble;
		NullCheck(L_2);
		double L_3 = VirtFuncInvoker0< double >::Invoke(29 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, L_2);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		double L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Single)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m4217586291 (RuntimeObject * __this /* static, unused */, float ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m4217586291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return new JSONNumber(n);
		float L_0 = ___n0;
		// return new JSONNumber(n);
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, (((double)((double)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.Single SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  float JSONNode_op_Implicit_m1432850039 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1432850039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// return (d == null) ? 0 : d.AsFloat;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? 0 : d.AsFloat;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_001d;
	}

IL_0017:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? 0 : d.AsFloat;
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_2);
		G_B3_0 = L_3;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m451620647 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m451620647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return new JSONNumber(n);
		int32_t L_0 = ___n0;
		// return new JSONNumber(n);
		JSONNumber_t4005729108 * L_1 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_1, (((double)((double)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  int32_t JSONNode_op_Implicit_m4260169399 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m4260169399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return (d == null) ? 0 : d.AsInt;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? 0 : d.AsInt;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0019;
	}

IL_0013:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? 0 : d.AsInt;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_2);
		G_B3_0 = L_3;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int64)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m3939691209 (RuntimeObject * __this /* static, unused */, int64_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m3939691209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// return new JSONString(n.ToString());
		// return new JSONString(n.ToString());
		String_t* L_1 = Int64_ToString_m2986581816((int64_t*)(&___n0), /*hidden argument*/NULL);
		// return new JSONString(n.ToString());
		JSONString_t3803360443 * L_2 = (JSONString_t3803360443 *)il2cpp_codegen_object_new(JSONString_t3803360443_il2cpp_TypeInfo_var);
		JSONString__ctor_m562445776(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0030;
	}

IL_0023:
	{
		// return new JSONNumber(n);
		int64_t L_3 = ___n0;
		// return new JSONNumber(n);
		JSONNumber_t4005729108 * L_4 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_4, (((double)((double)L_3))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_0;
		return L_5;
	}
}
// System.Int64 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  int64_t JSONNode_op_Implicit_m4080243595 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m4080243595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		// return (d == null) ? 0L : d.AsLong;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? 0L : d.AsLong;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = (((int64_t)((int64_t)0)));
		goto IL_001a;
	}

IL_0014:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? 0L : d.AsLong;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(37 /* System.Int64 SimpleJSON.JSONNode::get_AsLong() */, L_2);
		G_B3_0 = L_3;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int64_t L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m4035013745 (RuntimeObject * __this /* static, unused */, bool ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m4035013745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return new JSONBool(b);
		bool L_0 = ___b0;
		// return new JSONBool(b);
		JSONBool_t130112664 * L_1 = (JSONBool_t130112664 *)il2cpp_codegen_object_new(JSONBool_t130112664_il2cpp_TypeInfo_var);
		JSONBool__ctor_m256490940(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		JSONNode_t2946056997 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  bool JSONNode_op_Implicit_m889386234 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m889386234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return (d == null) ? false : d.AsBool;
		JSONNode_t2946056997 * L_0 = ___d0;
		// return (d == null) ? false : d.AsBool;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0019;
	}

IL_0013:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		// return (d == null) ? false : d.AsBool;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(35 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m3674316631 (RuntimeObject * __this /* static, unused */, KeyValuePair_2_t834018167  ___aKeyValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m3674316631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// return aKeyValue.Value;
		// return aKeyValue.Value;
		JSONNode_t2946056997 * L_0 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&___aKeyValue0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m2227562659 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Equality_m2227562659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (ReferenceEquals(a, b))
		JSONNode_t2946056997 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		// if (ReferenceEquals(a, b))
		bool L_2 = il2cpp_codegen_object_reference_equals(L_0, L_1);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0085;
	}

IL_0014:
	{
		// bool aIsNull = a is JSONNull || ReferenceEquals(a, null) || a is JSONLazyCreator;
		JSONNode_t2946056997 * L_3 = ___a0;
		if (((JSONNull_t1736727710 *)IsInstClass((RuntimeObject*)L_3, JSONNull_t1736727710_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		JSONNode_t2946056997 * L_4 = ___a0;
		// bool aIsNull = a is JSONNull || ReferenceEquals(a, null) || a is JSONLazyCreator;
		bool L_5 = il2cpp_codegen_object_reference_equals(L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		JSONNode_t2946056997 * L_6 = ___a0;
		G_B6_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t3621052039 *)((JSONLazyCreator_t3621052039 *)IsInstClass((RuntimeObject*)L_6, JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = 1;
	}

IL_0037:
	{
		V_1 = (bool)G_B6_0;
		// bool bIsNull = b is JSONNull || ReferenceEquals(b, null) || b is JSONLazyCreator;
		RuntimeObject * L_7 = ___b1;
		if (((JSONNull_t1736727710 *)IsInstClass((RuntimeObject*)L_7, JSONNull_t1736727710_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_8 = ___b1;
		// bool bIsNull = b is JSONNull || ReferenceEquals(b, null) || b is JSONLazyCreator;
		bool L_9 = il2cpp_codegen_object_reference_equals(L_8, NULL);
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_10 = ___b1;
		G_B10_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t3621052039 *)((JSONLazyCreator_t3621052039 *)IsInstClass((RuntimeObject*)L_10, JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 1;
	}

IL_005b:
	{
		V_2 = (bool)G_B10_0;
		// if (aIsNull && bIsNull)
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0085;
	}

IL_006f:
	{
		// return !aIsNull && a.Equals(b);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_007e;
		}
	}
	{
		JSONNode_t2946056997 * L_14 = ___a0;
		RuntimeObject * L_15 = ___b1;
		// return !aIsNull && a.Equals(b);
		NullCheck(L_14);
		bool L_16 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		G_B16_0 = ((int32_t)(L_16));
		goto IL_007f;
	}

IL_007e:
	{
		G_B16_0 = 0;
	}

IL_007f:
	{
		V_0 = (bool)G_B16_0;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m3223804307 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Inequality_m3223804307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return !(a == b);
		JSONNode_t2946056997 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		// return !(a == b);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_2 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2449771842 (JSONNode_t2946056997 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return ReferenceEquals(this, obj);
		RuntimeObject * L_0 = ___obj0;
		// return ReferenceEquals(this, obj);
		bool L_1 = il2cpp_codegen_object_reference_equals(__this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m2855600823 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		// return base.GetHashCode();
		int32_t L_0 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
extern "C"  StringBuilder_t * JSONNode_get_EscapeBuilder_m155653411 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_EscapeBuilder_m155653411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// if (m_EscapeBuilder == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = ((JSONNode_t2946056997_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_m_EscapeBuilder_2();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_EscapeBuilder = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		((JSONNode_t2946056997_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_m_EscapeBuilder_2(L_1);
	}

IL_0015:
	{
		// return m_EscapeBuilder;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		StringBuilder_t * L_2 = ((JSONNode_t2946056997_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_m_EscapeBuilder_2();
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		StringBuilder_t * L_3 = V_0;
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3387382048 (RuntimeObject * __this /* static, unused */, String_t* ___aText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Escape_m3387382048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// var sb = EscapeBuilder;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = JSONNode_get_EscapeBuilder_m155653411(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// sb.Length = 0;
		StringBuilder_t * L_1 = V_0;
		// sb.Length = 0;
		NullCheck(L_1);
		StringBuilder_set_Length_m1410065908(L_1, 0, /*hidden argument*/NULL);
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		StringBuilder_t * L_2 = V_0;
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		NullCheck(L_2);
		int32_t L_3 = StringBuilder_get_Capacity_m2088663745(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___aText0;
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___aText0;
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_7/(int32_t)((int32_t)10))))))))
		{
			goto IL_003f;
		}
	}
	{
		// sb.Capacity = aText.Length + aText.Length / 10;
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = ___aText0;
		// sb.Capacity = aText.Length + aText.Length / 10;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___aText0;
		// sb.Capacity = aText.Length + aText.Length / 10;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		// sb.Capacity = aText.Length + aText.Length / 10;
		NullCheck(L_8);
		StringBuilder_set_Capacity_m3366027632(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_12/(int32_t)((int32_t)10))))), /*hidden argument*/NULL);
	}

IL_003f:
	{
		// foreach (char c in aText)
		String_t* L_13 = ___aText0;
		V_2 = L_13;
		V_3 = 0;
		goto IL_0151;
	}

IL_0049:
	{
		// foreach (char c in aText)
		String_t* L_14 = V_2;
		int32_t L_15 = V_3;
		// foreach (char c in aText)
		NullCheck(L_14);
		Il2CppChar L_16 = String_get_Chars_m2986988803(L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// {
		Il2CppChar L_17 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00dc;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_00ed;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}

IL_0072:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_0098;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)92))))
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00fe;
	}

IL_0087:
	{
		// sb.Append("\\\\");
		StringBuilder_t * L_20 = V_0;
		// sb.Append("\\\\");
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3458119668, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_0098:
	{
		// sb.Append("\\\"");
		StringBuilder_t * L_21 = V_0;
		// sb.Append("\\\"");
		NullCheck(L_21);
		StringBuilder_Append_m1965104174(L_21, _stringLiteral3450386420, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00a9:
	{
		// sb.Append("\\n");
		StringBuilder_t * L_22 = V_0;
		// sb.Append("\\n");
		NullCheck(L_22);
		StringBuilder_Append_m1965104174(L_22, _stringLiteral3454842868, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00ba:
	{
		// sb.Append("\\r");
		StringBuilder_t * L_23 = V_0;
		// sb.Append("\\r");
		NullCheck(L_23);
		StringBuilder_Append_m1965104174(L_23, _stringLiteral3455629300, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00cb:
	{
		// sb.Append("\\t");
		StringBuilder_t * L_24 = V_0;
		// sb.Append("\\t");
		NullCheck(L_24);
		StringBuilder_Append_m1965104174(L_24, _stringLiteral3455498228, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00dc:
	{
		// sb.Append("\\b");
		StringBuilder_t * L_25 = V_0;
		// sb.Append("\\b");
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, _stringLiteral3454580724, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00ed:
	{
		// sb.Append("\\f");
		StringBuilder_t * L_26 = V_0;
		// sb.Append("\\f");
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3454318580, /*hidden argument*/NULL);
		// break;
		goto IL_014c;
	}

IL_00fe:
	{
		// if (c < ' ' || (forceASCII && c > 127))
		Il2CppChar L_27 = V_1;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_28 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_forceASCII_0();
		if (!L_28)
		{
			goto IL_013f;
		}
	}
	{
		Il2CppChar L_29 = V_1;
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)127))))
		{
			goto IL_013f;
		}
	}

IL_0118:
	{
		// ushort val = c;
		Il2CppChar L_30 = V_1;
		V_4 = (uint16_t)L_30;
		// sb.Append("\\u").Append(val.ToString("X4"));
		StringBuilder_t * L_31 = V_0;
		// sb.Append("\\u").Append(val.ToString("X4"));
		NullCheck(L_31);
		StringBuilder_t * L_32 = StringBuilder_Append_m1965104174(L_31, _stringLiteral3455432692, /*hidden argument*/NULL);
		// sb.Append("\\u").Append(val.ToString("X4"));
		String_t* L_33 = UInt16_ToString_m3056878594((uint16_t*)(&V_4), _stringLiteral3451303928, /*hidden argument*/NULL);
		// sb.Append("\\u").Append(val.ToString("X4"));
		NullCheck(L_32);
		StringBuilder_Append_m1965104174(L_32, L_33, /*hidden argument*/NULL);
		goto IL_0147;
	}

IL_013f:
	{
		// sb.Append(c);
		StringBuilder_t * L_34 = V_0;
		Il2CppChar L_35 = V_1;
		// sb.Append(c);
		NullCheck(L_34);
		StringBuilder_Append_m2383614642(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0147:
	{
		// break;
		goto IL_014c;
	}

IL_014c:
	{
		// foreach (char c in aText)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0151:
	{
		int32_t L_37 = V_3;
		String_t* L_38 = V_2;
		// foreach (char c in aText)
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m3847582255(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0049;
		}
	}
	{
		// string result = sb.ToString();
		StringBuilder_t * L_40 = V_0;
		// string result = sb.ToString();
		NullCheck(L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		V_5 = L_41;
		// sb.Length = 0;
		StringBuilder_t * L_42 = V_0;
		// sb.Length = 0;
		NullCheck(L_42);
		StringBuilder_set_Length_m1410065908(L_42, 0, /*hidden argument*/NULL);
		// return result;
		String_t* L_43 = V_5;
		V_6 = L_43;
		goto IL_0175;
	}

IL_0175:
	{
		// }
		String_t* L_44 = V_6;
		return L_44;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
extern "C"  JSONNode_t2946056997 * JSONNode_ParseElement_m3982566797 (RuntimeObject * __this /* static, unused */, String_t* ___token0, bool ___quoted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ParseElement_m3982566797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	String_t* V_1 = NULL;
	double V_2 = 0.0;
	{
		// if (quoted)
		bool L_0 = ___quoted1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return token;
		String_t* L_1 = ___token0;
		// return token;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_2 = JSONNode_op_Implicit_m2523080653(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_009a;
	}

IL_0013:
	{
		// string tmp = token.ToLower();
		String_t* L_3 = ___token0;
		// string tmp = token.ToLower();
		NullCheck(L_3);
		String_t* L_4 = String_ToLower_m2029374922(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (tmp == "false" || tmp == "true")
		String_t* L_5 = V_1;
		// if (tmp == "false" || tmp == "true")
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral3875954633, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_7 = V_1;
		// if (tmp == "false" || tmp == "true")
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, _stringLiteral4002445229, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}

IL_003a:
	{
		// return tmp == "true";
		String_t* L_9 = V_1;
		// return tmp == "true";
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral4002445229, /*hidden argument*/NULL);
		// return tmp == "true";
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_11 = JSONNode_op_Implicit_m4035013745(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_009a;
	}

IL_0050:
	{
		// if (tmp == "null")
		String_t* L_12 = V_1;
		// if (tmp == "null")
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		// return JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_14 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_009a;
	}

IL_006b:
	{
		// if (double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out val))
		String_t* L_15 = ___token0;
		// if (double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out val))
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_16 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out val))
		bool L_17 = Double_TryParse_m623190659(NULL /*static, unused*/, L_15, ((int32_t)167), L_16, (double*)(&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		// return val;
		double L_18 = V_2;
		// return val;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_19 = JSONNode_op_Implicit_m6922295(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_009a;
	}

IL_008e:
	{
		// return token;
		String_t* L_20 = ___token0;
		// return token;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_21 = JSONNode_op_Implicit_m2523080653(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		JSONNode_t2946056997 * L_22 = V_0;
		return L_22;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Parse_m883557124 (RuntimeObject * __this /* static, unused */, String_t* ___aJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Parse_m883557124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t3789446452 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	String_t* V_9 = NULL;
	JSONNode_t2946056997 * V_10 = NULL;
	{
		// Stack<JSONNode> stack = new Stack<JSONNode>();
		Stack_1_t3789446452 * L_0 = (Stack_1_t3789446452 *)il2cpp_codegen_object_new(Stack_1_t3789446452_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2409004951(L_0, /*hidden argument*/Stack_1__ctor_m2409004951_RuntimeMethod_var);
		V_0 = L_0;
		// JSONNode ctx = null;
		V_1 = (JSONNode_t2946056997 *)NULL;
		// int i = 0;
		V_2 = 0;
		// StringBuilder Token = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		V_3 = L_1;
		// string TokenName = "";
		V_4 = _stringLiteral757602046;
		// bool QuoteMode = false;
		V_5 = (bool)0;
		// bool TokenIsQuoted = false;
		V_6 = (bool)0;
		// while (i < aJSON.Length)
		goto IL_038e;
	}

IL_0023:
	{
		// switch (aJSON[i])
		String_t* L_2 = ___aJSON0;
		int32_t L_3 = V_2;
		// switch (aJSON[i])
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		// {
		Il2CppChar L_5 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_028a;
			}
			case 1:
			{
				goto IL_0285;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0285;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_6 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0100;
			}
			case 1:
			{
				goto IL_02a4;
			}
			case 2:
			{
				goto IL_015c;
			}
		}
	}
	{
		Il2CppChar L_7 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_028a;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0217;
			}
		}
	}

IL_0077:
	{
		Il2CppChar L_8 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_00a4;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_015c;
			}
		}
	}

IL_008d:
	{
		Il2CppChar L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)44))))
		{
			goto IL_0229;
		}
	}
	{
		Il2CppChar L_10 = V_7;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)58))))
		{
			goto IL_01e5;
		}
	}
	{
		goto IL_0376;
	}

IL_00a4:
	{
		// if (QuoteMode)
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_00bf;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_12 = V_3;
		String_t* L_13 = ___aJSON0;
		int32_t L_14 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_13);
		Il2CppChar L_15 = String_get_Chars_m2986988803(L_13, L_14, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_12);
		StringBuilder_Append_m2383614642(L_12, L_15, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_00bf:
	{
		// stack.Push(new JSONObject());
		Stack_1_t3789446452 * L_16 = V_0;
		// stack.Push(new JSONObject());
		JSONObject_t4158403488 * L_17 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_17, /*hidden argument*/NULL);
		// stack.Push(new JSONObject());
		NullCheck(L_16);
		Stack_1_Push_m1161466254(L_16, L_17, /*hidden argument*/Stack_1_Push_m1161466254_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_t2946056997 * L_18 = V_1;
		// if (ctx != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_19 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_18, NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e6;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_t2946056997 * L_20 = V_1;
		String_t* L_21 = V_4;
		Stack_1_t3789446452 * L_22 = V_0;
		// ctx.Add(TokenName, stack.Peek());
		NullCheck(L_22);
		JSONNode_t2946056997 * L_23 = Stack_1_Peek_m3040978591(L_22, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		// ctx.Add(TokenName, stack.Peek());
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_20, L_21, L_23);
	}

IL_00e6:
	{
		// TokenName = "";
		V_4 = _stringLiteral757602046;
		// Token.Length = 0;
		StringBuilder_t * L_24 = V_3;
		// Token.Length = 0;
		NullCheck(L_24);
		StringBuilder_set_Length_m1410065908(L_24, 0, /*hidden argument*/NULL);
		// ctx = stack.Peek();
		Stack_1_t3789446452 * L_25 = V_0;
		// ctx = stack.Peek();
		NullCheck(L_25);
		JSONNode_t2946056997 * L_26 = Stack_1_Peek_m3040978591(L_25, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_26;
		// break;
		goto IL_0389;
	}

IL_0100:
	{
		// if (QuoteMode)
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_011b;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_28 = V_3;
		String_t* L_29 = ___aJSON0;
		int32_t L_30 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_29);
		Il2CppChar L_31 = String_get_Chars_m2986988803(L_29, L_30, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_28);
		StringBuilder_Append_m2383614642(L_28, L_31, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_011b:
	{
		// stack.Push(new JSONArray());
		Stack_1_t3789446452 * L_32 = V_0;
		// stack.Push(new JSONArray());
		JSONArray_t2340361630 * L_33 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_33, /*hidden argument*/NULL);
		// stack.Push(new JSONArray());
		NullCheck(L_32);
		Stack_1_Push_m1161466254(L_32, L_33, /*hidden argument*/Stack_1_Push_m1161466254_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_t2946056997 * L_34 = V_1;
		// if (ctx != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_35 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_34, NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0142;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_t2946056997 * L_36 = V_1;
		String_t* L_37 = V_4;
		Stack_1_t3789446452 * L_38 = V_0;
		// ctx.Add(TokenName, stack.Peek());
		NullCheck(L_38);
		JSONNode_t2946056997 * L_39 = Stack_1_Peek_m3040978591(L_38, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		// ctx.Add(TokenName, stack.Peek());
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_36, L_37, L_39);
	}

IL_0142:
	{
		// TokenName = "";
		V_4 = _stringLiteral757602046;
		// Token.Length = 0;
		StringBuilder_t * L_40 = V_3;
		// Token.Length = 0;
		NullCheck(L_40);
		StringBuilder_set_Length_m1410065908(L_40, 0, /*hidden argument*/NULL);
		// ctx = stack.Peek();
		Stack_1_t3789446452 * L_41 = V_0;
		// ctx = stack.Peek();
		NullCheck(L_41);
		JSONNode_t2946056997 * L_42 = Stack_1_Peek_m3040978591(L_41, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_42;
		// break;
		goto IL_0389;
	}

IL_015c:
	{
		// if (QuoteMode)
		bool L_43 = V_5;
		if (!L_43)
		{
			goto IL_0177;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_44 = V_3;
		String_t* L_45 = ___aJSON0;
		int32_t L_46 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_45);
		Il2CppChar L_47 = String_get_Chars_m2986988803(L_45, L_46, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_44);
		StringBuilder_Append_m2383614642(L_44, L_47, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_0177:
	{
		// if (stack.Count == 0)
		Stack_1_t3789446452 * L_48 = V_0;
		// if (stack.Count == 0)
		NullCheck(L_48);
		int32_t L_49 = Stack_1_get_Count_m288158433(L_48, /*hidden argument*/Stack_1_get_Count_m288158433_RuntimeMethod_var);
		if (L_49)
		{
			goto IL_018d;
		}
	}
	{
		// throw new Exception("JSON Parse: Too many closing brackets");
		// throw new Exception("JSON Parse: Too many closing brackets");
		Exception_t * L_50 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_50, _stringLiteral3600160164, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, NULL, JSONNode_Parse_m883557124_RuntimeMethod_var);
	}

IL_018d:
	{
		// stack.Pop();
		Stack_1_t3789446452 * L_51 = V_0;
		// stack.Pop();
		NullCheck(L_51);
		Stack_1_Pop_m4204993319(L_51, /*hidden argument*/Stack_1_Pop_m4204993319_RuntimeMethod_var);
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t * L_52 = V_3;
		// if (Token.Length > 0 || TokenIsQuoted)
		NullCheck(L_52);
		int32_t L_53 = StringBuilder_get_Length_m3238060835(L_52, /*hidden argument*/NULL);
		if ((((int32_t)L_53) > ((int32_t)0)))
		{
			goto IL_01a7;
		}
	}
	{
		bool L_54 = V_6;
		if (!L_54)
		{
			goto IL_01bc;
		}
	}

IL_01a7:
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_t2946056997 * L_55 = V_1;
		String_t* L_56 = V_4;
		StringBuilder_t * L_57 = V_3;
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_57);
		bool L_59 = V_6;
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_60 = JSONNode_ParseElement_m3982566797(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		NullCheck(L_55);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_55, L_56, L_60);
	}

IL_01bc:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteral757602046;
		// Token.Length = 0;
		StringBuilder_t * L_61 = V_3;
		// Token.Length = 0;
		NullCheck(L_61);
		StringBuilder_set_Length_m1410065908(L_61, 0, /*hidden argument*/NULL);
		// if (stack.Count > 0)
		Stack_1_t3789446452 * L_62 = V_0;
		// if (stack.Count > 0)
		NullCheck(L_62);
		int32_t L_63 = Stack_1_get_Count_m288158433(L_62, /*hidden argument*/Stack_1_get_Count_m288158433_RuntimeMethod_var);
		if ((((int32_t)L_63) <= ((int32_t)0)))
		{
			goto IL_01e0;
		}
	}
	{
		// ctx = stack.Peek();
		Stack_1_t3789446452 * L_64 = V_0;
		// ctx = stack.Peek();
		NullCheck(L_64);
		JSONNode_t2946056997 * L_65 = Stack_1_Peek_m3040978591(L_64, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_65;
	}

IL_01e0:
	{
		// break;
		goto IL_0389;
	}

IL_01e5:
	{
		// if (QuoteMode)
		bool L_66 = V_5;
		if (!L_66)
		{
			goto IL_0200;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_67 = V_3;
		String_t* L_68 = ___aJSON0;
		int32_t L_69 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_68);
		Il2CppChar L_70 = String_get_Chars_m2986988803(L_68, L_69, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_67);
		StringBuilder_Append_m2383614642(L_67, L_70, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_0200:
	{
		// TokenName = Token.ToString();
		StringBuilder_t * L_71 = V_3;
		// TokenName = Token.ToString();
		NullCheck(L_71);
		String_t* L_72 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_71);
		V_4 = L_72;
		// Token.Length = 0;
		StringBuilder_t * L_73 = V_3;
		// Token.Length = 0;
		NullCheck(L_73);
		StringBuilder_set_Length_m1410065908(L_73, 0, /*hidden argument*/NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_0389;
	}

IL_0217:
	{
		// QuoteMode ^= true;
		bool L_74 = V_5;
		V_5 = (bool)((int32_t)((int32_t)L_74^(int32_t)1));
		// TokenIsQuoted |= QuoteMode;
		bool L_75 = V_6;
		bool L_76 = V_5;
		V_6 = (bool)((int32_t)((int32_t)L_75|(int32_t)L_76));
		// break;
		goto IL_0389;
	}

IL_0229:
	{
		// if (QuoteMode)
		bool L_77 = V_5;
		if (!L_77)
		{
			goto IL_0244;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_78 = V_3;
		String_t* L_79 = ___aJSON0;
		int32_t L_80 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_79);
		Il2CppChar L_81 = String_get_Chars_m2986988803(L_79, L_80, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_78);
		StringBuilder_Append_m2383614642(L_78, L_81, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_0244:
	{
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t * L_82 = V_3;
		// if (Token.Length > 0 || TokenIsQuoted)
		NullCheck(L_82);
		int32_t L_83 = StringBuilder_get_Length_m3238060835(L_82, /*hidden argument*/NULL);
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			goto IL_0257;
		}
	}
	{
		bool L_84 = V_6;
		if (!L_84)
		{
			goto IL_026c;
		}
	}

IL_0257:
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_t2946056997 * L_85 = V_1;
		String_t* L_86 = V_4;
		StringBuilder_t * L_87 = V_3;
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		NullCheck(L_87);
		String_t* L_88 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		bool L_89 = V_6;
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_90 = JSONNode_ParseElement_m3982566797(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		NullCheck(L_85);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_85, L_86, L_90);
	}

IL_026c:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteral757602046;
		// Token.Length = 0;
		StringBuilder_t * L_91 = V_3;
		// Token.Length = 0;
		NullCheck(L_91);
		StringBuilder_set_Length_m1410065908(L_91, 0, /*hidden argument*/NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_0389;
	}

IL_0285:
	{
		// break;
		goto IL_0389;
	}

IL_028a:
	{
		// if (QuoteMode)
		bool L_92 = V_5;
		if (!L_92)
		{
			goto IL_029f;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_93 = V_3;
		String_t* L_94 = ___aJSON0;
		int32_t L_95 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_94);
		Il2CppChar L_96 = String_get_Chars_m2986988803(L_94, L_95, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_93);
		StringBuilder_Append_m2383614642(L_93, L_96, /*hidden argument*/NULL);
	}

IL_029f:
	{
		// break;
		goto IL_0389;
	}

IL_02a4:
	{
		// ++i;
		int32_t L_97 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		// if (QuoteMode)
		bool L_98 = V_5;
		if (!L_98)
		{
			goto IL_0371;
		}
	}
	{
		// char C = aJSON[i];
		String_t* L_99 = ___aJSON0;
		int32_t L_100 = V_2;
		// char C = aJSON[i];
		NullCheck(L_99);
		Il2CppChar L_101 = String_get_Chars_m2986988803(L_99, L_100, /*hidden argument*/NULL);
		V_8 = L_101;
		// {
		Il2CppChar L_102 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0301;
			}
			case 1:
			{
				goto IL_02d3;
			}
			case 2:
			{
				goto IL_02f3;
			}
			case 3:
			{
				goto IL_0338;
			}
		}
	}

IL_02d3:
	{
		Il2CppChar L_103 = V_8;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)98))))
		{
			goto IL_031d;
		}
	}
	{
		Il2CppChar L_104 = V_8;
		if ((((int32_t)L_104) == ((int32_t)((int32_t)102))))
		{
			goto IL_032a;
		}
	}
	{
		Il2CppChar L_105 = V_8;
		if ((((int32_t)L_105) == ((int32_t)((int32_t)110))))
		{
			goto IL_030f;
		}
	}
	{
		goto IL_0362;
	}

IL_02f3:
	{
		// Token.Append('\t');
		StringBuilder_t * L_106 = V_3;
		// Token.Append('\t');
		NullCheck(L_106);
		StringBuilder_Append_m2383614642(L_106, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_0301:
	{
		// Token.Append('\r');
		StringBuilder_t * L_107 = V_3;
		// Token.Append('\r');
		NullCheck(L_107);
		StringBuilder_Append_m2383614642(L_107, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_030f:
	{
		// Token.Append('\n');
		StringBuilder_t * L_108 = V_3;
		// Token.Append('\n');
		NullCheck(L_108);
		StringBuilder_Append_m2383614642(L_108, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_031d:
	{
		// Token.Append('\b');
		StringBuilder_t * L_109 = V_3;
		// Token.Append('\b');
		NullCheck(L_109);
		StringBuilder_Append_m2383614642(L_109, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_032a:
	{
		// Token.Append('\f');
		StringBuilder_t * L_110 = V_3;
		// Token.Append('\f');
		NullCheck(L_110);
		StringBuilder_Append_m2383614642(L_110, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_0338:
	{
		// string s = aJSON.Substring(i + 1, 4);
		String_t* L_111 = ___aJSON0;
		int32_t L_112 = V_2;
		// string s = aJSON.Substring(i + 1, 4);
		NullCheck(L_111);
		String_t* L_113 = String_Substring_m1610150815(L_111, ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1)), 4, /*hidden argument*/NULL);
		V_9 = L_113;
		// Token.Append((char)int.Parse(
		StringBuilder_t * L_114 = V_3;
		String_t* L_115 = V_9;
		// Token.Append((char)int.Parse(
		int32_t L_116 = Int32_Parse_m2244041137(NULL /*static, unused*/, L_115, ((int32_t)512), /*hidden argument*/NULL);
		// Token.Append((char)int.Parse(
		NullCheck(L_114);
		StringBuilder_Append_m2383614642(L_114, (((int32_t)((uint16_t)L_116))), /*hidden argument*/NULL);
		// i += 4;
		int32_t L_117 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)4));
		// break;
		goto IL_0370;
	}

IL_0362:
	{
		// Token.Append(C);
		StringBuilder_t * L_118 = V_3;
		Il2CppChar L_119 = V_8;
		// Token.Append(C);
		NullCheck(L_118);
		StringBuilder_Append_m2383614642(L_118, L_119, /*hidden argument*/NULL);
		// break;
		goto IL_0370;
	}

IL_0370:
	{
	}

IL_0371:
	{
		// break;
		goto IL_0389;
	}

IL_0376:
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_120 = V_3;
		String_t* L_121 = ___aJSON0;
		int32_t L_122 = V_2;
		// Token.Append(aJSON[i]);
		NullCheck(L_121);
		Il2CppChar L_123 = String_get_Chars_m2986988803(L_121, L_122, /*hidden argument*/NULL);
		// Token.Append(aJSON[i]);
		NullCheck(L_120);
		StringBuilder_Append_m2383614642(L_120, L_123, /*hidden argument*/NULL);
		// break;
		goto IL_0389;
	}

IL_0389:
	{
		// ++i;
		int32_t L_124 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
	}

IL_038e:
	{
		// while (i < aJSON.Length)
		int32_t L_125 = V_2;
		String_t* L_126 = ___aJSON0;
		// while (i < aJSON.Length)
		NullCheck(L_126);
		int32_t L_127 = String_get_Length_m3847582255(L_126, /*hidden argument*/NULL);
		if ((((int32_t)L_125) < ((int32_t)L_127)))
		{
			goto IL_0023;
		}
	}
	{
		// if (QuoteMode)
		bool L_128 = V_5;
		if (!L_128)
		{
			goto IL_03ad;
		}
	}
	{
		// throw new Exception("JSON Parse: Quotation marks seems to be messed up.");
		// throw new Exception("JSON Parse: Quotation marks seems to be messed up.");
		Exception_t * L_129 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_129, _stringLiteral4214229893, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_129, NULL, JSONNode_Parse_m883557124_RuntimeMethod_var);
	}

IL_03ad:
	{
		// if (ctx == null)
		JSONNode_t2946056997 * L_130 = V_1;
		// if (ctx == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_131 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_130, NULL, /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_03cd;
		}
	}
	{
		// return ParseElement(Token.ToString(), TokenIsQuoted);
		StringBuilder_t * L_132 = V_3;
		// return ParseElement(Token.ToString(), TokenIsQuoted);
		NullCheck(L_132);
		String_t* L_133 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_132);
		bool L_134 = V_6;
		// return ParseElement(Token.ToString(), TokenIsQuoted);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_135 = JSONNode_ParseElement_m3982566797(NULL /*static, unused*/, L_133, L_134, /*hidden argument*/NULL);
		V_10 = L_135;
		goto IL_03d5;
	}

IL_03cd:
	{
		// return ctx;
		JSONNode_t2946056997 * L_136 = V_1;
		V_10 = L_136;
		goto IL_03d5;
	}

IL_03d5:
	{
		// }
		JSONNode_t2946056997 * L_137 = V_10;
		return L_137;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToBinaryStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToBinaryStream_m4065140296 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToBinaryStream_m4065140296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_t3992595042 * V_0 = NULL;
	{
		// var W = new System.IO.BinaryWriter(aData);
		Stream_t1273022909 * L_0 = ___aData0;
		// var W = new System.IO.BinaryWriter(aData);
		BinaryWriter_t3992595042 * L_1 = (BinaryWriter_t3992595042 *)il2cpp_codegen_object_new(BinaryWriter_t3992595042_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m1874693998(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// SerializeBinary(W);
		BinaryWriter_t3992595042 * L_2 = V_0;
		// SerializeBinary(W);
		VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(41 /* System.Void SimpleJSON.JSONNode::SerializeBinary(System.IO.BinaryWriter) */, __this, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m2127353253 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedStream_m2127353253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_SaveToCompressedStream_m2127353253_RuntimeMethod_var);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m1574216136 (JSONNode_t2946056997 * __this, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedFile_m1574216136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_SaveToCompressedFile_m1574216136_RuntimeMethod_var);
	}
}
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m2429603569 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedBase64_m2429603569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_SaveToCompressedBase64_m2429603569_RuntimeMethod_var);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToBinaryFile(System.String)
extern "C"  void JSONNode_SaveToBinaryFile_m2052397863 (JSONNode_t2946056997 * __this, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToBinaryFile_m2052397863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t4292183065 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		String_t* L_0 = ___aFileName0;
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		FileInfo_t1169991790 * L_1 = (FileInfo_t1169991790 *)il2cpp_codegen_object_new(FileInfo_t1169991790_il2cpp_TypeInfo_var);
		FileInfo__ctor_m3289795077(L_1, L_0, /*hidden argument*/NULL);
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		NullCheck(L_1);
		DirectoryInfo_t35957480 * L_2 = FileInfo_get_Directory_m2050317500(L_1, /*hidden argument*/NULL);
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_2);
		// System.IO.Directory.CreateDirectory((new System.IO.FileInfo(aFileName)).Directory.FullName);
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		// using (var F = System.IO.File.OpenWrite(aFileName))
		String_t* L_4 = ___aFileName0;
		// using (var F = System.IO.File.OpenWrite(aFileName))
		FileStream_t4292183065 * L_5 = File_OpenWrite_m24069155(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		// SaveToBinaryStream(F);
		FileStream_t4292183065 * L_6 = V_0;
		// SaveToBinaryStream(F);
		JSONNode_SaveToBinaryStream_m4065140296(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x39, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			FileStream_t4292183065 * L_8 = V_0;
			// using (var F = System.IO.File.OpenWrite(aFileName))
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(44)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.String SimpleJSON.JSONNode::SaveToBinaryBase64()
extern "C"  String_t* JSONNode_SaveToBinaryBase64_m2572046373 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToBinaryBase64_m2572046373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// using (var stream = new System.IO.MemoryStream())
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// SaveToBinaryStream(stream);
		MemoryStream_t94973147 * L_1 = V_0;
		// SaveToBinaryStream(stream);
		JSONNode_SaveToBinaryStream_m4065140296(__this, L_1, /*hidden argument*/NULL);
		// stream.Position = 0;
		MemoryStream_t94973147 * L_2 = V_0;
		// stream.Position = 0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		// return System.Convert.ToBase64String(stream.ToArray());
		MemoryStream_t94973147 * L_3 = V_0;
		// return System.Convert.ToBase64String(stream.ToArray());
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_3);
		// return System.Convert.ToBase64String(stream.ToArray());
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_5 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			MemoryStream_t94973147 * L_7 = V_0;
			// using (var stream = new System.IO.MemoryStream())
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_7);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::DeserializeBinary(System.IO.BinaryReader)
extern "C"  JSONNode_t2946056997 * JSONNode_DeserializeBinary_m2667052454 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___aReader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_DeserializeBinary_m2667052454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JSONArray_t2340361630 * V_2 = NULL;
	int32_t V_3 = 0;
	JSONNode_t2946056997 * V_4 = NULL;
	int32_t V_5 = 0;
	JSONObject_t4158403488 * V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	JSONNode_t2946056997 * V_9 = NULL;
	{
		// JSONNodeType type = (JSONNodeType)aReader.ReadByte();
		BinaryReader_t2428077293 * L_0 = ___aReader0;
		// JSONNodeType type = (JSONNodeType)aReader.ReadByte();
		NullCheck(L_0);
		uint8_t L_1 = VirtFuncInvoker0< uint8_t >::Invoke(13 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		// {
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_00ae;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_00e7;
			}
			case 5:
			{
				goto IL_00d4;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_002d:
	{
		// int count = aReader.ReadInt32();
		BinaryReader_t2428077293 * L_3 = ___aReader0;
		// int count = aReader.ReadInt32();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_1 = L_4;
		// JSONArray tmp = new JSONArray();
		JSONArray_t2340361630 * L_5 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_0052;
	}

IL_0042:
	{
		// tmp.Add(DeserializeBinary(aReader));
		JSONArray_t2340361630 * L_6 = V_2;
		BinaryReader_t2428077293 * L_7 = ___aReader0;
		// tmp.Add(DeserializeBinary(aReader));
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_8 = JSONNode_DeserializeBinary_m2667052454(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		// tmp.Add(DeserializeBinary(aReader));
		NullCheck(L_6);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_6, L_8);
		// for (int i = 0; i < count; i++)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0052:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0042;
		}
	}
	{
		// return tmp;
		JSONArray_t2340361630 * L_12 = V_2;
		V_4 = L_12;
		goto IL_010b;
	}

IL_0061:
	{
		// int count = aReader.ReadInt32();
		BinaryReader_t2428077293 * L_13 = ___aReader0;
		// int count = aReader.ReadInt32();
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_13);
		V_5 = L_14;
		// JSONObject tmp = new JSONObject();
		JSONObject_t4158403488 * L_15 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_15, /*hidden argument*/NULL);
		V_6 = L_15;
		// for (int i = 0; i < count; i++)
		V_7 = 0;
		goto IL_009c;
	}

IL_0079:
	{
		// string key = aReader.ReadString();
		BinaryReader_t2428077293 * L_16 = ___aReader0;
		// string key = aReader.ReadString();
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_16);
		V_8 = L_17;
		// var val = DeserializeBinary(aReader);
		BinaryReader_t2428077293 * L_18 = ___aReader0;
		// var val = DeserializeBinary(aReader);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_19 = JSONNode_DeserializeBinary_m2667052454(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_9 = L_19;
		// tmp.Add(key, val);
		JSONObject_t4158403488 * L_20 = V_6;
		String_t* L_21 = V_8;
		JSONNode_t2946056997 * L_22 = V_9;
		// tmp.Add(key, val);
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_20, L_21, L_22);
		// for (int i = 0; i < count; i++)
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_009c:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_24 = V_7;
		int32_t L_25 = V_5;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0079;
		}
	}
	{
		// return tmp;
		JSONObject_t4158403488 * L_26 = V_6;
		V_4 = L_26;
		goto IL_010b;
	}

IL_00ae:
	{
		// return new JSONString(aReader.ReadString());
		BinaryReader_t2428077293 * L_27 = ___aReader0;
		// return new JSONString(aReader.ReadString());
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_27);
		// return new JSONString(aReader.ReadString());
		JSONString_t3803360443 * L_29 = (JSONString_t3803360443 *)il2cpp_codegen_object_new(JSONString_t3803360443_il2cpp_TypeInfo_var);
		JSONString__ctor_m562445776(L_29, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		goto IL_010b;
	}

IL_00c1:
	{
		// return new JSONNumber(aReader.ReadDouble());
		BinaryReader_t2428077293 * L_30 = ___aReader0;
		// return new JSONNumber(aReader.ReadDouble());
		NullCheck(L_30);
		double L_31 = VirtFuncInvoker0< double >::Invoke(17 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_30);
		// return new JSONNumber(aReader.ReadDouble());
		JSONNumber_t4005729108 * L_32 = (JSONNumber_t4005729108 *)il2cpp_codegen_object_new(JSONNumber_t4005729108_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m3343705146(L_32, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		goto IL_010b;
	}

IL_00d4:
	{
		// return new JSONBool(aReader.ReadBoolean());
		BinaryReader_t2428077293 * L_33 = ___aReader0;
		// return new JSONBool(aReader.ReadBoolean());
		NullCheck(L_33);
		bool L_34 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_33);
		// return new JSONBool(aReader.ReadBoolean());
		JSONBool_t130112664 * L_35 = (JSONBool_t130112664 *)il2cpp_codegen_object_new(JSONBool_t130112664_il2cpp_TypeInfo_var);
		JSONBool__ctor_m256490940(L_35, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		goto IL_010b;
	}

IL_00e7:
	{
		// return JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_36 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_36;
		goto IL_010b;
	}

IL_00f4:
	{
		// throw new Exception("Error deserializing JSON. Unknown tag: " + type);
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(JSONNodeType_t2191432521_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral163746037, L_39, /*hidden argument*/NULL);
		// throw new Exception("Error deserializing JSON. Unknown tag: " + type);
		Exception_t * L_41 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_41, L_40, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, NULL, JSONNode_DeserializeBinary_m2667052454_RuntimeMethod_var);
	}

IL_010b:
	{
		// }
		JSONNode_t2946056997 * L_42 = V_4;
		return L_42;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedFile_m1190016295 (RuntimeObject * __this /* static, unused */, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedFile_m1190016295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_LoadFromCompressedFile_m1190016295_RuntimeMethod_var);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedStream_m2944368907 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedStream_m2944368907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_LoadFromCompressedStream_m2944368907_RuntimeMethod_var);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedBase64_m515598289 (RuntimeObject * __this /* static, unused */, String_t* ___aBase640, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedBase64_m515598289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		// throw new Exception("Can't use compressed functions. You need include the SharpZipLib and uncomment the define at the top of SimpleJSON");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, JSONNode_LoadFromCompressedBase64_m515598289_RuntimeMethod_var);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBinaryStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromBinaryStream_m1014593361 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromBinaryStream_m1014593361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t2428077293 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// using (var R = new System.IO.BinaryReader(aData))
		Stream_t1273022909 * L_0 = ___aData0;
		// using (var R = new System.IO.BinaryReader(aData))
		BinaryReader_t2428077293 * L_1 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m2602947653(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// return DeserializeBinary(R);
		BinaryReader_t2428077293 * L_2 = V_0;
		// return DeserializeBinary(R);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_3 = JSONNode_DeserializeBinary_m2667052454(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x22, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t2428077293 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_001b:
		{
			BinaryReader_t2428077293 * L_5 = V_0;
			// using (var R = new System.IO.BinaryReader(aData))
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_0021:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0022:
	{
		// }
		JSONNode_t2946056997 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBinaryFile(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromBinaryFile_m2307845755 (RuntimeObject * __this /* static, unused */, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromBinaryFile_m2307845755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t4292183065 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// using (var F = System.IO.File.OpenRead(aFileName))
		String_t* L_0 = ___aFileName0;
		// using (var F = System.IO.File.OpenRead(aFileName))
		FileStream_t4292183065 * L_1 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// return LoadFromBinaryStream(F);
		FileStream_t4292183065 * L_2 = V_0;
		// return LoadFromBinaryStream(F);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_3 = JSONNode_LoadFromBinaryStream_m1014593361(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x22, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_001b:
		{
			FileStream_t4292183065 * L_5 = V_0;
			// using (var F = System.IO.File.OpenRead(aFileName))
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_0021:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0022:
	{
		// }
		JSONNode_t2946056997 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBinaryBase64(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromBinaryBase64_m2500927739 (RuntimeObject * __this /* static, unused */, String_t* ___aBase640, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromBinaryBase64_m2500927739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	JSONNode_t2946056997 * V_2 = NULL;
	{
		// var tmp = System.Convert.FromBase64String(aBase64);
		String_t* L_0 = ___aBase640;
		// var tmp = System.Convert.FromBase64String(aBase64);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var stream = new System.IO.MemoryStream(tmp);
		ByteU5BU5D_t4116647657* L_2 = V_0;
		// var stream = new System.IO.MemoryStream(tmp);
		MemoryStream_t94973147 * L_3 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// stream.Position = 0;
		MemoryStream_t94973147 * L_4 = V_1;
		// stream.Position = 0;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, (((int64_t)((int64_t)0))));
		// return LoadFromBinaryStream(stream);
		MemoryStream_t94973147 * L_5 = V_1;
		// return LoadFromBinaryStream(stream);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_6 = JSONNode_LoadFromBinaryStream_m1014593361(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		JSONNode_t2946056997 * L_7 = V_2;
		return L_7;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::GetContainer(SimpleJSON.JSONContainerType)
extern "C"  JSONNode_t2946056997 * JSONNode_GetContainer_m1786727336 (RuntimeObject * __this /* static, unused */, int32_t ___aType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_GetContainer_m1786727336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (aType == JSONContainerType.Array)
		int32_t L_0 = ___aType0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new JSONArray();
		JSONArray_t2340361630 * L_1 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001d;
	}

IL_0012:
	{
		// return new JSONObject();
		JSONObject_t4158403488 * L_2 = (JSONObject_t4158403488 *)il2cpp_codegen_object_new(JSONObject_t4158403488_il2cpp_TypeInfo_var);
		JSONObject__ctor_m3280371024(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		JSONNode_t2946056997 * L_3 = V_0;
		return L_3;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.Vector2)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m1069568051 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___aVec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1069568051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(VectorContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_VectorContainerType_3();
		// JSONNode n = GetContainer(VectorContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteVector2(aVec);
		JSONNode_t2946056997 * L_2 = V_0;
		Vector2_t2156229523  L_3 = ___aVec0;
		// n.WriteVector2(aVec);
		NullCheck(L_2);
		JSONNode_WriteVector2_m3528033602(L_2, L_3, _stringLiteral3452614616, _stringLiteral3452614615, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.Vector3)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m1069633587 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___aVec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1069633587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(VectorContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_VectorContainerType_3();
		// JSONNode n = GetContainer(VectorContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteVector3(aVec);
		JSONNode_t2946056997 * L_2 = V_0;
		Vector3_t3722313464  L_3 = ___aVec0;
		// n.WriteVector3(aVec);
		NullCheck(L_2);
		JSONNode_WriteVector3_m2390637150(L_2, L_3, _stringLiteral3452614616, _stringLiteral3452614615, _stringLiteral3452614614, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.Vector4)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m1069961267 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___aVec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1069961267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(VectorContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_VectorContainerType_3();
		// JSONNode n = GetContainer(VectorContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteVector4(aVec);
		JSONNode_t2946056997 * L_2 = V_0;
		Vector4_t3319028937  L_3 = ___aVec0;
		// n.WriteVector4(aVec);
		NullCheck(L_2);
		JSONNode_WriteVector4_m2563938836(L_2, L_3, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.Quaternion)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m37910905 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  ___aRot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m37910905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(QuaternionContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_QuaternionContainerType_4();
		// JSONNode n = GetContainer(QuaternionContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteQuaternion(aRot);
		JSONNode_t2946056997 * L_2 = V_0;
		Quaternion_t2301928331  L_3 = ___aRot0;
		// n.WriteQuaternion(aRot);
		NullCheck(L_2);
		JSONNode_WriteQuaternion_m510950336(L_2, L_3, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.Rect)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m2876089377 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___aRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m2876089377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(RectContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_RectContainerType_5();
		// JSONNode n = GetContainer(RectContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteRect(aRect);
		JSONNode_t2946056997 * L_2 = V_0;
		Rect_t2360479859  L_3 = ___aRect0;
		// n.WriteRect(aRect);
		NullCheck(L_2);
		JSONNode_WriteRect_m919993616(L_2, L_3, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(UnityEngine.RectOffset)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m1722984681 (RuntimeObject * __this /* static, unused */, RectOffset_t1369453676 * ___aRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m1722984681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// JSONNode n = GetContainer(RectContainerType);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		int32_t L_0 = ((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->get_RectContainerType_5();
		// JSONNode n = GetContainer(RectContainerType);
		JSONNode_t2946056997 * L_1 = JSONNode_GetContainer_m1786727336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// n.WriteRectOffset(aRect);
		JSONNode_t2946056997 * L_2 = V_0;
		RectOffset_t1369453676 * L_3 = ___aRect0;
		// n.WriteRectOffset(aRect);
		NullCheck(L_2);
		JSONNode_WriteRectOffset_m4206839533(L_2, L_3, /*hidden argument*/NULL);
		// return n;
		JSONNode_t2946056997 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		JSONNode_t2946056997 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Vector2 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  Vector2_t2156229523  JSONNode_op_Implicit_m2172899561 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return aNode.ReadVector2();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadVector2();
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = JSONNode_ReadVector2_m4251691506(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		Vector2_t2156229523  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  Vector3_t3722313464  JSONNode_op_Implicit_m4190648856 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return aNode.ReadVector3();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadVector3();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = JSONNode_ReadVector3_m392771156(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector4 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  Vector4_t3319028937  JSONNode_op_Implicit_m1706213219 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return aNode.ReadVector4();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadVector4();
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = JSONNode_ReadVector4_m138461513(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		Vector4_t3319028937  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  Quaternion_t2301928331  JSONNode_op_Implicit_m2784941064 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return aNode.ReadQuaternion();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadQuaternion();
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = JSONNode_ReadQuaternion_m841140865(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		Quaternion_t2301928331  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Rect SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  Rect_t2360479859  JSONNode_op_Implicit_m519301595 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return aNode.ReadRect();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadRect();
		NullCheck(L_0);
		Rect_t2360479859  L_1 = JSONNode_ReadRect_m3165547662(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		Rect_t2360479859  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RectOffset SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  RectOffset_t1369453676 * JSONNode_op_Implicit_m137279167 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	RectOffset_t1369453676 * V_0 = NULL;
	{
		// return aNode.ReadRectOffset();
		JSONNode_t2946056997 * L_0 = ___aNode0;
		// return aNode.ReadRectOffset();
		NullCheck(L_0);
		RectOffset_t1369453676 * L_1 = JSONNode_ReadRectOffset_m3243216635(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		RectOffset_t1369453676 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 SimpleJSON.JSONNode::ReadVector2(UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  JSONNode_ReadVector2_m3437438845 (JSONNode_t2946056997 * __this, Vector2_t2156229523  ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector2_m3437438845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_1);
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_3);
		// return new Vector2(this["x"].AsFloat, this["y"].AsFloat);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_006c;
	}

IL_0037:
	{
		// if (IsArray)
		// if (IsArray)
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		NullCheck(L_7);
		float L_8 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_7);
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		JSONNode_t2946056997 * L_9 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		NullCheck(L_9);
		float L_10 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_9);
		// return new Vector2(this[0].AsFloat, this[1].AsFloat);
		Vector2_t2156229523  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3970636864((&L_11), L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_006c;
	}

IL_0065:
	{
		// return aDefault;
		Vector2_t2156229523  L_12 = ___aDefault0;
		V_0 = L_12;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		Vector2_t2156229523  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector2 SimpleJSON.JSONNode::ReadVector2(System.String,System.String)
extern "C"  Vector2_t2156229523  JSONNode_ReadVector2_m1806416846 (JSONNode_t2946056997 * __this, String_t* ___aXName0, String_t* ___aYName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector2_m1806416846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		String_t* L_1 = ___aXName0;
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_1);
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_2);
		String_t* L_4 = ___aYName1;
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_4);
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		// return new Vector2(this[aXName].AsFloat, this[aYName].AsFloat);
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_003b;
	}

IL_0030:
	{
		// return Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		Vector2_t2156229523  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 SimpleJSON.JSONNode::ReadVector2()
extern "C"  Vector2_t2156229523  JSONNode_ReadVector2_m4251691506 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector2_m4251691506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ReadVector2(Vector2.zero);
		// return ReadVector2(Vector2.zero);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		// return ReadVector2(Vector2.zero);
		Vector2_t2156229523  L_1 = JSONNode_ReadVector2_m3437438845(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Vector2_t2156229523  L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector2(UnityEngine.Vector2,System.String,System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector2_m3528033602 (JSONNode_t2946056997 * __this, Vector2_t2156229523  ___aVec0, String_t* ___aXName1, String_t* ___aYName2, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[aXName].AsFloat = aVec.x;
		String_t* L_1 = ___aXName1;
		// this[aXName].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_1);
		float L_3 = (&___aVec0)->get_x_0();
		// this[aXName].AsFloat = aVec.x;
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_2, L_3);
		// this[aYName].AsFloat = aVec.y;
		String_t* L_4 = ___aYName2;
		// this[aYName].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_4);
		float L_6 = (&___aVec0)->get_y_1();
		// this[aYName].AsFloat = aVec.y;
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_5, L_6);
		goto IL_007a;
	}

IL_0040:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsFloat = aVec.x;
		// this[0].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_8 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		float L_9 = (&___aVec0)->get_x_0();
		// this[0].AsFloat = aVec.x;
		NullCheck(L_8);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_8, L_9);
		// this[1].AsFloat = aVec.y;
		// this[1].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_10 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		float L_11 = (&___aVec0)->get_y_1();
		// this[1].AsFloat = aVec.y;
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_10, L_11);
	}

IL_007a:
	{
		// return this;
		V_0 = __this;
		goto IL_0081;
	}

IL_0081:
	{
		// }
		JSONNode_t2946056997 * L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 SimpleJSON.JSONNode::ReadVector3(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  JSONNode_ReadVector3_m1304543877 (JSONNode_t2946056997 * __this, Vector3_t3722313464  ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector3_m1304543877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_1);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_3);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614614);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		// return new Vector3(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat);
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0088;
	}

IL_0047:
	{
		// if (IsArray)
		// if (IsArray)
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		JSONNode_t2946056997 * L_9 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		NullCheck(L_9);
		float L_10 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_9);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		NullCheck(L_11);
		float L_12 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_11);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		NullCheck(L_13);
		float L_14 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_13);
		// return new Vector3(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat);
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), L_10, L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0088;
	}

IL_0081:
	{
		// return aDefault;
		Vector3_t3722313464  L_16 = ___aDefault0;
		V_0 = L_16;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		Vector3_t3722313464  L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Vector3 SimpleJSON.JSONNode::ReadVector3(System.String,System.String,System.String)
extern "C"  Vector3_t3722313464  JSONNode_ReadVector3_m169927776 (JSONNode_t2946056997 * __this, String_t* ___aXName0, String_t* ___aYName1, String_t* ___aZName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector3_m169927776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		String_t* L_1 = ___aXName0;
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_1);
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_2);
		String_t* L_4 = ___aYName1;
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_4);
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		String_t* L_7 = ___aZName2;
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		JSONNode_t2946056997 * L_8 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_7);
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		NullCheck(L_8);
		float L_9 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_8);
		// return new Vector3(this[aXName].AsFloat, this[aYName].AsFloat, this[aZName].AsFloat);
		Vector3_t3722313464  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m3353183577((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0046;
	}

IL_003b:
	{
		// return Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		Vector3_t3722313464  L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 SimpleJSON.JSONNode::ReadVector3()
extern "C"  Vector3_t3722313464  JSONNode_ReadVector3_m392771156 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector3_m392771156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ReadVector3(Vector3.zero);
		// return ReadVector3(Vector3.zero);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		// return ReadVector3(Vector3.zero);
		Vector3_t3722313464  L_1 = JSONNode_ReadVector3_m1304543877(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Vector3_t3722313464  L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector3(UnityEngine.Vector3,System.String,System.String,System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector3_m2390637150 (JSONNode_t2946056997 * __this, Vector3_t3722313464  ___aVec0, String_t* ___aXName1, String_t* ___aYName2, String_t* ___aZName3, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[aXName].AsFloat = aVec.x;
		String_t* L_1 = ___aXName1;
		// this[aXName].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_1);
		float L_3 = (&___aVec0)->get_x_1();
		// this[aXName].AsFloat = aVec.x;
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_2, L_3);
		// this[aYName].AsFloat = aVec.y;
		String_t* L_4 = ___aYName2;
		// this[aYName].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_4);
		float L_6 = (&___aVec0)->get_y_2();
		// this[aYName].AsFloat = aVec.y;
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_5, L_6);
		// this[aZName].AsFloat = aVec.z;
		String_t* L_7 = ___aZName3;
		// this[aZName].AsFloat = aVec.z;
		JSONNode_t2946056997 * L_8 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, L_7);
		float L_9 = (&___aVec0)->get_z_3();
		// this[aZName].AsFloat = aVec.z;
		NullCheck(L_8);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_8, L_9);
		goto IL_00a1;
	}

IL_0054:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_10)
		{
			goto IL_00a1;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsFloat = aVec.x;
		// this[0].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		float L_12 = (&___aVec0)->get_x_1();
		// this[0].AsFloat = aVec.x;
		NullCheck(L_11);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_11, L_12);
		// this[1].AsFloat = aVec.y;
		// this[1].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		float L_14 = (&___aVec0)->get_y_2();
		// this[1].AsFloat = aVec.y;
		NullCheck(L_13);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_13, L_14);
		// this[2].AsFloat = aVec.z;
		// this[2].AsFloat = aVec.z;
		JSONNode_t2946056997 * L_15 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		float L_16 = (&___aVec0)->get_z_3();
		// this[2].AsFloat = aVec.z;
		NullCheck(L_15);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_15, L_16);
	}

IL_00a1:
	{
		// return this;
		V_0 = __this;
		goto IL_00a8;
	}

IL_00a8:
	{
		// }
		JSONNode_t2946056997 * L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Vector4 SimpleJSON.JSONNode::ReadVector4(UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  JSONNode_ReadVector4_m48250077 (JSONNode_t2946056997 * __this, Vector4_t3319028937  ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector4_m48250077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_1);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_3);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614614);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614601);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_7);
		float L_8 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_7);
		// return new Vector4(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		Vector4_t3319028937  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector4__ctor_m2498754347((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_00a4;
	}

IL_0057:
	{
		// if (IsArray)
		// if (IsArray)
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_11);
		float L_12 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_11);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_13);
		float L_14 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_13);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_15 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_15);
		float L_16 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_15);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_17 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_17);
		float L_18 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_17);
		// return new Vector4(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		Vector4_t3319028937  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector4__ctor_m2498754347((&L_19), L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00a4;
	}

IL_009d:
	{
		// return aDefault;
		Vector4_t3319028937  L_20 = ___aDefault0;
		V_0 = L_20;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		Vector4_t3319028937  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector4 SimpleJSON.JSONNode::ReadVector4()
extern "C"  Vector4_t3319028937  JSONNode_ReadVector4_m138461513 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadVector4_m138461513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ReadVector4(Vector4.zero);
		// return ReadVector4(Vector4.zero);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_0 = Vector4_get_zero_m1422399515(NULL /*static, unused*/, /*hidden argument*/NULL);
		// return ReadVector4(Vector4.zero);
		Vector4_t3319028937  L_1 = JSONNode_ReadVector4_m48250077(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Vector4_t3319028937  L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteVector4(UnityEngine.Vector4)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteVector4_m2563938836 (JSONNode_t2946056997 * __this, Vector4_t3319028937  ___aVec0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_WriteVector4_m2563938836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this["x"].AsFloat = aVec.x;
		// this["x"].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		float L_2 = (&___aVec0)->get_x_1();
		// this["x"].AsFloat = aVec.x;
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_1, L_2);
		// this["y"].AsFloat = aVec.y;
		// this["y"].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		float L_4 = (&___aVec0)->get_y_2();
		// this["y"].AsFloat = aVec.y;
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_3, L_4);
		// this["z"].AsFloat = aVec.z;
		// this["z"].AsFloat = aVec.z;
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614614);
		float L_6 = (&___aVec0)->get_z_3();
		// this["z"].AsFloat = aVec.z;
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_5, L_6);
		// this["w"].AsFloat = aVec.w;
		// this["w"].AsFloat = aVec.w;
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614601);
		float L_8 = (&___aVec0)->get_w_4();
		// this["w"].AsFloat = aVec.w;
		NullCheck(L_7);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_7, L_8);
		goto IL_00d6;
	}

IL_0076:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_9)
		{
			goto IL_00d6;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsFloat = aVec.x;
		// this[0].AsFloat = aVec.x;
		JSONNode_t2946056997 * L_10 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		float L_11 = (&___aVec0)->get_x_1();
		// this[0].AsFloat = aVec.x;
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_10, L_11);
		// this[1].AsFloat = aVec.y;
		// this[1].AsFloat = aVec.y;
		JSONNode_t2946056997 * L_12 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		float L_13 = (&___aVec0)->get_y_2();
		// this[1].AsFloat = aVec.y;
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_12, L_13);
		// this[2].AsFloat = aVec.z;
		// this[2].AsFloat = aVec.z;
		JSONNode_t2946056997 * L_14 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		float L_15 = (&___aVec0)->get_z_3();
		// this[2].AsFloat = aVec.z;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_14, L_15);
		// this[3].AsFloat = aVec.w;
		// this[3].AsFloat = aVec.w;
		JSONNode_t2946056997 * L_16 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		float L_17 = (&___aVec0)->get_w_4();
		// this[3].AsFloat = aVec.w;
		NullCheck(L_16);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_16, L_17);
	}

IL_00d6:
	{
		// return this;
		V_0 = __this;
		goto IL_00dd;
	}

IL_00dd:
	{
		// }
		JSONNode_t2946056997 * L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Quaternion SimpleJSON.JSONNode::ReadQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  JSONNode_ReadQuaternion_m1305162694 (JSONNode_t2946056997 * __this, Quaternion_t2301928331  ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadQuaternion_m1305162694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_1);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_3);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614614);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614601);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		NullCheck(L_7);
		float L_8 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_7);
		// return new Quaternion(this["x"].AsFloat, this["y"].AsFloat, this["z"].AsFloat, this["w"].AsFloat);
		Quaternion_t2301928331  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Quaternion__ctor_m435141806((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_00a4;
	}

IL_0057:
	{
		// if (IsArray)
		// if (IsArray)
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_11);
		float L_12 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_11);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_13);
		float L_14 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_13);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_15 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_15);
		float L_16 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_15);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_17 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_17);
		float L_18 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_17);
		// return new Quaternion(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		Quaternion_t2301928331  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Quaternion__ctor_m435141806((&L_19), L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00a4;
	}

IL_009d:
	{
		// return aDefault;
		Quaternion_t2301928331  L_20 = ___aDefault0;
		V_0 = L_20;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		Quaternion_t2301928331  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Quaternion SimpleJSON.JSONNode::ReadQuaternion()
extern "C"  Quaternion_t2301928331  JSONNode_ReadQuaternion_m841140865 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadQuaternion_m841140865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return ReadQuaternion(Quaternion.identity);
		// return ReadQuaternion(Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// return ReadQuaternion(Quaternion.identity);
		Quaternion_t2301928331  L_1 = JSONNode_ReadQuaternion_m1305162694(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Quaternion_t2301928331  L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteQuaternion(UnityEngine.Quaternion)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteQuaternion_m510950336 (JSONNode_t2946056997 * __this, Quaternion_t2301928331  ___aRot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_WriteQuaternion_m510950336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this["x"].AsFloat = aRot.x;
		// this["x"].AsFloat = aRot.x;
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		float L_2 = (&___aRot0)->get_x_0();
		// this["x"].AsFloat = aRot.x;
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_1, L_2);
		// this["y"].AsFloat = aRot.y;
		// this["y"].AsFloat = aRot.y;
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		float L_4 = (&___aRot0)->get_y_1();
		// this["y"].AsFloat = aRot.y;
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_3, L_4);
		// this["z"].AsFloat = aRot.z;
		// this["z"].AsFloat = aRot.z;
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614614);
		float L_6 = (&___aRot0)->get_z_2();
		// this["z"].AsFloat = aRot.z;
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_5, L_6);
		// this["w"].AsFloat = aRot.w;
		// this["w"].AsFloat = aRot.w;
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614601);
		float L_8 = (&___aRot0)->get_w_3();
		// this["w"].AsFloat = aRot.w;
		NullCheck(L_7);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_7, L_8);
		goto IL_00d6;
	}

IL_0076:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_9)
		{
			goto IL_00d6;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsFloat = aRot.x;
		// this[0].AsFloat = aRot.x;
		JSONNode_t2946056997 * L_10 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		float L_11 = (&___aRot0)->get_x_0();
		// this[0].AsFloat = aRot.x;
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_10, L_11);
		// this[1].AsFloat = aRot.y;
		// this[1].AsFloat = aRot.y;
		JSONNode_t2946056997 * L_12 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		float L_13 = (&___aRot0)->get_y_1();
		// this[1].AsFloat = aRot.y;
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_12, L_13);
		// this[2].AsFloat = aRot.z;
		// this[2].AsFloat = aRot.z;
		JSONNode_t2946056997 * L_14 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		float L_15 = (&___aRot0)->get_z_2();
		// this[2].AsFloat = aRot.z;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_14, L_15);
		// this[3].AsFloat = aRot.w;
		// this[3].AsFloat = aRot.w;
		JSONNode_t2946056997 * L_16 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		float L_17 = (&___aRot0)->get_w_3();
		// this[3].AsFloat = aRot.w;
		NullCheck(L_16);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_16, L_17);
	}

IL_00d6:
	{
		// return this;
		V_0 = __this;
		goto IL_00dd;
	}

IL_00dd:
	{
		// }
		JSONNode_t2946056997 * L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Rect SimpleJSON.JSONNode::ReadRect(UnityEngine.Rect)
extern "C"  Rect_t2360479859  JSONNode_ReadRect_m772759586 (JSONNode_t2946056997 * __this, Rect_t2360479859  ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadRect_m772759586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		NullCheck(L_1);
		float L_2 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_1);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		NullCheck(L_3);
		float L_4 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_3);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral1910834845);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_5);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral452723731);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		NullCheck(L_7);
		float L_8 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_7);
		// return new Rect(this["x"].AsFloat, this["y"].AsFloat, this["width"].AsFloat, this["height"].AsFloat);
		Rect_t2360479859  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m2614021312((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_00a4;
	}

IL_0057:
	{
		// if (IsArray)
		// if (IsArray)
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_11);
		float L_12 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_11);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_13);
		float L_14 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_13);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_15 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_15);
		float L_16 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_15);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		JSONNode_t2946056997 * L_17 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		NullCheck(L_17);
		float L_18 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_17);
		// return new Rect(this[0].AsFloat, this[1].AsFloat, this[2].AsFloat, this[3].AsFloat);
		Rect_t2360479859  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Rect__ctor_m2614021312((&L_19), L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00a4;
	}

IL_009d:
	{
		// return aDefault;
		Rect_t2360479859  L_20 = ___aDefault0;
		V_0 = L_20;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		Rect_t2360479859  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Rect SimpleJSON.JSONNode::ReadRect()
extern "C"  Rect_t2360479859  JSONNode_ReadRect_m3165547662 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// return ReadRect(new Rect());
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t2360479859 ));
		Rect_t2360479859  L_0 = V_0;
		// return ReadRect(new Rect());
		Rect_t2360479859  L_1 = JSONNode_ReadRect_m772759586(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Rect_t2360479859  L_2 = V_1;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteRect(UnityEngine.Rect)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteRect_m919993616 (JSONNode_t2946056997 * __this, Rect_t2360479859  ___aRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_WriteRect_m919993616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this["x"].AsFloat = aRect.x;
		// this["x"].AsFloat = aRect.x;
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614616);
		// this["x"].AsFloat = aRect.x;
		float L_2 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this["x"].AsFloat = aRect.x;
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_1, L_2);
		// this["y"].AsFloat = aRect.y;
		// this["y"].AsFloat = aRect.y;
		JSONNode_t2946056997 * L_3 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral3452614615);
		// this["y"].AsFloat = aRect.y;
		float L_4 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this["y"].AsFloat = aRect.y;
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_3, L_4);
		// this["width"].AsFloat = aRect.width;
		// this["width"].AsFloat = aRect.width;
		JSONNode_t2946056997 * L_5 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral1910834845);
		// this["width"].AsFloat = aRect.width;
		float L_6 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this["width"].AsFloat = aRect.width;
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_5, L_6);
		// this["height"].AsFloat = aRect.height;
		// this["height"].AsFloat = aRect.height;
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral452723731);
		// this["height"].AsFloat = aRect.height;
		float L_8 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this["height"].AsFloat = aRect.height;
		NullCheck(L_7);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_7, L_8);
		goto IL_00d6;
	}

IL_0076:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_9)
		{
			goto IL_00d6;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsFloat = aRect.x;
		// this[0].AsFloat = aRect.x;
		JSONNode_t2946056997 * L_10 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// this[0].AsFloat = aRect.x;
		float L_11 = Rect_get_x_m3839990490((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this[0].AsFloat = aRect.x;
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_10, L_11);
		// this[1].AsFloat = aRect.y;
		// this[1].AsFloat = aRect.y;
		JSONNode_t2946056997 * L_12 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// this[1].AsFloat = aRect.y;
		float L_13 = Rect_get_y_m1501338330((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this[1].AsFloat = aRect.y;
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_12, L_13);
		// this[2].AsFloat = aRect.width;
		// this[2].AsFloat = aRect.width;
		JSONNode_t2946056997 * L_14 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// this[2].AsFloat = aRect.width;
		float L_15 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this[2].AsFloat = aRect.width;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_14, L_15);
		// this[3].AsFloat = aRect.height;
		// this[3].AsFloat = aRect.height;
		JSONNode_t2946056997 * L_16 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		// this[3].AsFloat = aRect.height;
		float L_17 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&___aRect0), /*hidden argument*/NULL);
		// this[3].AsFloat = aRect.height;
		NullCheck(L_16);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_16, L_17);
	}

IL_00d6:
	{
		// return this;
		V_0 = __this;
		goto IL_00dd;
	}

IL_00dd:
	{
		// }
		JSONNode_t2946056997 * L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.RectOffset SimpleJSON.JSONNode::ReadRectOffset(UnityEngine.RectOffset)
extern "C"  RectOffset_t1369453676 * JSONNode_ReadRectOffset_m4067776346 (JSONNode_t2946056997 * __this, RectOffset_t1369453676 * ___aDefault0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadRectOffset_m4067776346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	{
		// if (this is JSONObject)
		if (!((JSONObject_t4158403488 *)IsInstClass((RuntimeObject*)__this, JSONObject_t4158403488_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		JSONNode_t2946056997 * L_0 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral4249957872);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_0);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral742876383);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_2);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		JSONNode_t2946056997 * L_4 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral228012198);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_4);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		JSONNode_t2946056997 * L_6 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral1182448499);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_6);
		// return new RectOffset(this["left"].AsInt, this["right"].AsInt, this["top"].AsInt, this["bottom"].AsInt);
		RectOffset_t1369453676 * L_8 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_00a4;
	}

IL_0057:
	{
		// if (this is JSONArray)
		if (!((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)__this, JSONArray_t2340361630_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		JSONNode_t2946056997 * L_9 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_9);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		JSONNode_t2946056997 * L_11 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_11);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		JSONNode_t2946056997 * L_13 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_13);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		JSONNode_t2946056997 * L_15 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_15);
		// return new RectOffset(this[0].AsInt, this[1].AsInt, this[2].AsInt, this[3].AsInt);
		RectOffset_t1369453676 * L_17 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_17, L_10, L_12, L_14, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_00a4;
	}

IL_009d:
	{
		// return aDefault;
		RectOffset_t1369453676 * L_18 = ___aDefault0;
		V_0 = L_18;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		RectOffset_t1369453676 * L_19 = V_0;
		return L_19;
	}
}
// UnityEngine.RectOffset SimpleJSON.JSONNode::ReadRectOffset()
extern "C"  RectOffset_t1369453676 * JSONNode_ReadRectOffset_m3243216635 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadRectOffset_m3243216635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t1369453676 * V_0 = NULL;
	{
		// return ReadRectOffset(new RectOffset());
		// return ReadRectOffset(new RectOffset());
		RectOffset_t1369453676 * L_0 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m3236153262(L_0, /*hidden argument*/NULL);
		// return ReadRectOffset(new RectOffset());
		RectOffset_t1369453676 * L_1 = JSONNode_ReadRectOffset_m4067776346(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		RectOffset_t1369453676 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteRectOffset(UnityEngine.RectOffset)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteRectOffset_m4206839533 (JSONNode_t2946056997 * __this, RectOffset_t1369453676 * ___aRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_WriteRectOffset_m4206839533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (IsObject)
		// if (IsObject)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean SimpleJSON.JSONNode::get_IsObject() */, __this);
		if (!L_0)
		{
			goto IL_0072;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this["left"].AsInt = aRect.left;
		// this["left"].AsInt = aRect.left;
		JSONNode_t2946056997 * L_1 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral4249957872);
		RectOffset_t1369453676 * L_2 = ___aRect0;
		// this["left"].AsInt = aRect.left;
		NullCheck(L_2);
		int32_t L_3 = RectOffset_get_left_m1232181034(L_2, /*hidden argument*/NULL);
		// this["left"].AsInt = aRect.left;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_1, L_3);
		// this["right"].AsInt = aRect.right;
		// this["right"].AsInt = aRect.right;
		JSONNode_t2946056997 * L_4 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral742876383);
		RectOffset_t1369453676 * L_5 = ___aRect0;
		// this["right"].AsInt = aRect.right;
		NullCheck(L_5);
		int32_t L_6 = RectOffset_get_right_m2294081512(L_5, /*hidden argument*/NULL);
		// this["right"].AsInt = aRect.right;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_4, L_6);
		// this["top"].AsInt = aRect.top;
		// this["top"].AsInt = aRect.top;
		JSONNode_t2946056997 * L_7 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral228012198);
		RectOffset_t1369453676 * L_8 = ___aRect0;
		// this["top"].AsInt = aRect.top;
		NullCheck(L_8);
		int32_t L_9 = RectOffset_get_top_m2855347295(L_8, /*hidden argument*/NULL);
		// this["top"].AsInt = aRect.top;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_7, L_9);
		// this["bottom"].AsInt = aRect.bottom;
		// this["bottom"].AsInt = aRect.bottom;
		JSONNode_t2946056997 * L_10 = VirtFuncInvoker1< JSONNode_t2946056997 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, __this, _stringLiteral1182448499);
		RectOffset_t1369453676 * L_11 = ___aRect0;
		// this["bottom"].AsInt = aRect.bottom;
		NullCheck(L_11);
		int32_t L_12 = RectOffset_get_bottom_m890891527(L_11, /*hidden argument*/NULL);
		// this["bottom"].AsInt = aRect.bottom;
		NullCheck(L_10);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_10, L_12);
		goto IL_00ce;
	}

IL_0072:
	{
		// else if (IsArray)
		// else if (IsArray)
		bool L_13 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_13)
		{
			goto IL_00ce;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// this[0].AsInt = aRect.left;
		// this[0].AsInt = aRect.left;
		JSONNode_t2946056997 * L_14 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 0);
		RectOffset_t1369453676 * L_15 = ___aRect0;
		// this[0].AsInt = aRect.left;
		NullCheck(L_15);
		int32_t L_16 = RectOffset_get_left_m1232181034(L_15, /*hidden argument*/NULL);
		// this[0].AsInt = aRect.left;
		NullCheck(L_14);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_14, L_16);
		// this[1].AsInt = aRect.right;
		// this[1].AsInt = aRect.right;
		JSONNode_t2946056997 * L_17 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 1);
		RectOffset_t1369453676 * L_18 = ___aRect0;
		// this[1].AsInt = aRect.right;
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_right_m2294081512(L_18, /*hidden argument*/NULL);
		// this[1].AsInt = aRect.right;
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_17, L_19);
		// this[2].AsInt = aRect.top;
		// this[2].AsInt = aRect.top;
		JSONNode_t2946056997 * L_20 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 2);
		RectOffset_t1369453676 * L_21 = ___aRect0;
		// this[2].AsInt = aRect.top;
		NullCheck(L_21);
		int32_t L_22 = RectOffset_get_top_m2855347295(L_21, /*hidden argument*/NULL);
		// this[2].AsInt = aRect.top;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_20, L_22);
		// this[3].AsInt = aRect.bottom;
		// this[3].AsInt = aRect.bottom;
		JSONNode_t2946056997 * L_23 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, 3);
		RectOffset_t1369453676 * L_24 = ___aRect0;
		// this[3].AsInt = aRect.bottom;
		NullCheck(L_24);
		int32_t L_25 = RectOffset_get_bottom_m890891527(L_24, /*hidden argument*/NULL);
		// this[3].AsInt = aRect.bottom;
		NullCheck(L_23);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_23, L_25);
	}

IL_00ce:
	{
		// return this;
		V_0 = __this;
		goto IL_00d5;
	}

IL_00d5:
	{
		// }
		JSONNode_t2946056997 * L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.Matrix4x4 SimpleJSON.JSONNode::ReadMatrix()
extern "C"  Matrix4x4_t1817901843  JSONNode_ReadMatrix_m2859087272 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ReadMatrix_m2859087272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Matrix4x4_t1817901843  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// Matrix4x4 result = Matrix4x4.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_0 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (IsArray)
		// if (IsArray)
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// for (int i = 0; i < 16; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_001a:
	{
		// result[i] = this[i].AsFloat;
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		// result[i] = this[i].AsFloat;
		JSONNode_t2946056997 * L_4 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, L_3);
		// result[i] = this[i].AsFloat;
		NullCheck(L_4);
		float L_5 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_4);
		// result[i] = this[i].AsFloat;
		Matrix4x4_set_Item_m1906605342((Matrix4x4_t1817901843 *)(&V_0), L_2, L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < 16; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
	}

IL_003d:
	{
		// return result;
		Matrix4x4_t1817901843  L_8 = V_0;
		V_2 = L_8;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		Matrix4x4_t1817901843  L_9 = V_2;
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::WriteMatrix(UnityEngine.Matrix4x4)
extern "C"  JSONNode_t2946056997 * JSONNode_WriteMatrix_m3642914197 (JSONNode_t2946056997 * __this, Matrix4x4_t1817901843  ___aMatrix0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// if (IsArray)
		// if (IsArray)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean SimpleJSON.JSONNode::get_IsArray() */, __this);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// Inline = true;
		// Inline = true;
		VirtActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, __this, (bool)1);
		// for (int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		// this[i].AsFloat = aMatrix[i];
		int32_t L_1 = V_0;
		// this[i].AsFloat = aMatrix[i];
		JSONNode_t2946056997 * L_2 = VirtFuncInvoker1< JSONNode_t2946056997 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, __this, L_1);
		int32_t L_3 = V_0;
		// this[i].AsFloat = aMatrix[i];
		float L_4 = Matrix4x4_get_Item_m567451091((Matrix4x4_t1817901843 *)(&___aMatrix0), L_3, /*hidden argument*/NULL);
		// this[i].AsFloat = aMatrix[i];
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, L_2, L_4);
		// for (int i = 0; i < 16; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)16))))
		{
			goto IL_001b;
		}
	}
	{
	}

IL_003e:
	{
		// return this;
		V_1 = __this;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		JSONNode_t2946056997 * L_7 = V_1;
		return L_7;
	}
}
// System.Void SimpleJSON.JSONNode::.cctor()
extern "C"  void JSONNode__cctor_m2316088940 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode__cctor_m2316088940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool forceASCII = false; // Use Unicode by default
		((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_forceASCII_0((bool)0);
		// public static bool longAsString = false; // lazy creator creates a JSONString instead of JSONNumber
		((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_longAsString_1((bool)0);
		// public static JSONContainerType VectorContainerType = JSONContainerType.Array;
		((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_VectorContainerType_3(0);
		// public static JSONContainerType QuaternionContainerType = JSONContainerType.Array;
		((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_QuaternionContainerType_4(0);
		// public static JSONContainerType RectContainerType = JSONContainerType.Array;
		((JSONNode_t2946056997_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t2946056997_il2cpp_TypeInfo_var))->set_RectContainerType_5(0);
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
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m2223295763 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m840149228 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U24PC_2();
		__this->set_U24PC_2((-1));
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// yield break;
		goto IL_0018;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m2165411879 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m572992195 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m2389997204 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m3539192766 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m3539192766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CU3Ec__Iterator0_Reset_m3539192766_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m2046900386 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_U24PC_2();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t2360448098 * L_2 = (U3CU3Ec__Iterator0_t2360448098 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m2223295763(L_2, /*hidden argument*/NULL);
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
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C"  void U3CU3Ec__Iterator1__ctor_m2346700051 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::MoveNext()
extern "C"  bool U3CU3Ec__Iterator1_MoveNext_m3186589243 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_MoveNext_m3186589243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0125;
	}

IL_0023:
	{
		// foreach (var C in Children)
		JSONNode_t2946056997 * L_2 = __this->get_U24this_4();
		// foreach (var C in Children)
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children() */, L_2);
		// foreach (var C in Children)
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t1925909886_il2cpp_TypeInfo_var, L_3);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_007a;
				}
			}
		}

IL_004a:
		{
			goto IL_00ee;
		}

IL_004f:
		{
			// foreach (var C in Children)
			RuntimeObject* L_6 = __this->get_U24locvar0_0();
			// foreach (var C in Children)
			NullCheck(L_6);
			JSONNode_t2946056997 * L_7 = InterfaceFuncInvoker0< JSONNode_t2946056997 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t3378627465_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CCU3E__1_1(L_7);
			// foreach (var D in C.DeepChildren)
			JSONNode_t2946056997 * L_8 = __this->get_U3CCU3E__1_1();
			// foreach (var D in C.DeepChildren)
			NullCheck(L_8);
			RuntimeObject* L_9 = JSONNode_get_DeepChildren_m2537763012(L_8, /*hidden argument*/NULL);
			// foreach (var D in C.DeepChildren)
			NullCheck(L_9);
			RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t1925909886_il2cpp_TypeInfo_var, L_9);
			__this->set_U24locvar1_2(L_10);
			V_0 = ((int32_t)-3);
		}

IL_007a:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_11 = V_0;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)))
				{
					case 0:
					{
						goto IL_00be;
					}
				}
			}

IL_0086:
			{
				goto IL_00be;
			}

IL_008b:
			{
				// foreach (var D in C.DeepChildren)
				RuntimeObject* L_12 = __this->get_U24locvar1_2();
				// foreach (var D in C.DeepChildren)
				NullCheck(L_12);
				JSONNode_t2946056997 * L_13 = InterfaceFuncInvoker0< JSONNode_t2946056997 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t3378627465_il2cpp_TypeInfo_var, L_12);
				__this->set_U3CDU3E__2_3(L_13);
				// yield return D;
				JSONNode_t2946056997 * L_14 = __this->get_U3CDU3E__2_3();
				__this->set_U24current_5(L_14);
				bool L_15 = __this->get_U24disposing_6();
				if (L_15)
				{
					goto IL_00b7;
				}
			}

IL_00b0:
			{
				__this->set_U24PC_7(1);
			}

IL_00b7:
			{
				V_1 = (bool)1;
				IL2CPP_LEAVE(0x127, FINALLY_00d3);
			}

IL_00be:
			{
				RuntimeObject* L_16 = __this->get_U24locvar1_2();
				// foreach (var D in C.DeepChildren)
				NullCheck(L_16);
				bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_008b;
				}
			}

IL_00ce:
			{
				IL2CPP_LEAVE(0xEE, FINALLY_00d3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d3;
		}

FINALLY_00d3:
		{ // begin finally (depth: 2)
			{
				bool L_18 = V_1;
				if (!L_18)
				{
					goto IL_00d7;
				}
			}

IL_00d6:
			{
				IL2CPP_END_FINALLY(211)
			}

IL_00d7:
			{
				RuntimeObject* L_19 = __this->get_U24locvar1_2();
				if (!L_19)
				{
					goto IL_00ed;
				}
			}

IL_00e2:
			{
				RuntimeObject* L_20 = __this->get_U24locvar1_2();
				// foreach (var D in C.DeepChildren)
				NullCheck(L_20);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
			}

IL_00ed:
			{
				IL2CPP_END_FINALLY(211)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(211)
		{
			IL2CPP_END_CLEANUP(0x127, FINALLY_0103);
			IL2CPP_JUMP_TBL(0xEE, IL_00ee)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00ee:
		{
			RuntimeObject* L_21 = __this->get_U24locvar0_0();
			// foreach (var C in Children)
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_004f;
			}
		}

IL_00fe:
		{
			IL2CPP_LEAVE(0x11E, FINALLY_0103);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0103;
	}

FINALLY_0103:
	{ // begin finally (depth: 1)
		{
			bool L_23 = V_1;
			if (!L_23)
			{
				goto IL_0107;
			}
		}

IL_0106:
		{
			IL2CPP_END_FINALLY(259)
		}

IL_0107:
		{
			RuntimeObject* L_24 = __this->get_U24locvar0_0();
			if (!L_24)
			{
				goto IL_011d;
			}
		}

IL_0112:
		{
			RuntimeObject* L_25 = __this->get_U24locvar0_0();
			// foreach (var C in Children)
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_011d:
		{
			IL2CPP_END_FINALLY(259)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(259)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_JUMP_TBL(0x11E, IL_011e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011e:
	{
		// }
		__this->set_U24PC_7((-1));
	}

IL_0125:
	{
		return (bool)0;
	}

IL_0127:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m3511466412 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m4075242723 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Dispose()
extern "C"  void U3CU3Ec__Iterator1_Dispose_m1364031124 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_Dispose_m1364031124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x44, FINALLY_002d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002d;
		}

FINALLY_002d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_2 = __this->get_U24locvar1_2();
				if (!L_2)
				{
					goto IL_0043;
				}
			}

IL_0038:
			{
				RuntimeObject* L_3 = __this->get_U24locvar1_2();
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_3);
			}

IL_0043:
			{
				IL2CPP_END_FINALLY(45)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(45)
		{
			IL2CPP_JUMP_TBL(0x44, IL_0044)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_4 = __this->get_U24locvar0_0();
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0054:
		{
			RuntimeObject* L_5 = __this->get_U24locvar0_0();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Reset()
extern "C"  void U3CU3Ec__Iterator1_Reset_m3127036862 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_Reset_m3127036862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CU3Ec__Iterator1_Reset_m3127036862_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_m2166885297 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator1_t2360382562 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_7();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator1_t2360382562 * L_2 = (U3CU3Ec__Iterator1_t2360382562 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m2346700051(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator1_t2360382562 * L_3 = V_0;
		JSONNode_t2946056997 * L_4 = __this->get_U24this_4();
		NullCheck(L_3);
		L_3->set_U24this_4(L_4);
		U3CU3Ec__Iterator1_t2360382562 * L_5 = V_0;
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
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
extern "C" void Enumerator_t1513288951_marshal_pinvoke(const Enumerator_t1513288951& unmarshaled, Enumerator_t1513288951_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL, NULL);
}
extern "C" void Enumerator_t1513288951_marshal_pinvoke_back(const Enumerator_t1513288951_marshaled_pinvoke& marshaled, Enumerator_t1513288951& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
extern "C" void Enumerator_t1513288951_marshal_pinvoke_cleanup(Enumerator_t1513288951_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
extern "C" void Enumerator_t1513288951_marshal_com(const Enumerator_t1513288951& unmarshaled, Enumerator_t1513288951_marshaled_com& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL, NULL);
}
extern "C" void Enumerator_t1513288951_marshal_com_back(const Enumerator_t1513288951_marshaled_com& marshaled, Enumerator_t1513288951& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
extern "C" void Enumerator_t1513288951_marshal_com_cleanup(Enumerator_t1513288951_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void Enumerator__ctor_m191252025 (Enumerator_t1513288951 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	Enumerator_t390528775  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// type = Type.Array;
		__this->set_type_0(1);
		// m_Object = default(Dictionary<string, JSONNode>.Enumerator);
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t390528775 ));
		Enumerator_t390528775  L_0 = V_0;
		__this->set_m_Object_1(L_0);
		// m_Array = aArrayEnum;
		Enumerator_t2012408320  L_1 = ___aArrayEnum0;
		__this->set_m_Array_2(L_1);
		// }
		return;
	}
}
extern "C"  void Enumerator__ctor_m191252025_AdjustorThunk (RuntimeObject * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	Enumerator_t1513288951 * _thisAdjusted = reinterpret_cast<Enumerator_t1513288951 *>(__this + 1);
	Enumerator__ctor_m191252025(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void Enumerator__ctor_m2905563300 (Enumerator_t1513288951 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	Enumerator_t2012408320  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// type = Type.Object;
		__this->set_type_0(2);
		// m_Object = aDictEnum;
		Enumerator_t390528775  L_0 = ___aDictEnum0;
		__this->set_m_Object_1(L_0);
		// m_Array = default(List<JSONNode>.Enumerator);
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t2012408320 ));
		Enumerator_t2012408320  L_1 = V_0;
		__this->set_m_Array_2(L_1);
		// }
		return;
	}
}
extern "C"  void Enumerator__ctor_m2905563300_AdjustorThunk (RuntimeObject * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	Enumerator_t1513288951 * _thisAdjusted = reinterpret_cast<Enumerator_t1513288951 *>(__this + 1);
	Enumerator__ctor_m2905563300(_thisAdjusted, ___aDictEnum0, method);
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
extern "C"  bool Enumerator_get_IsValid_m2766619510 (Enumerator_t1513288951 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsValid { get { return type != Type.None; } }
		int32_t L_0 = __this->get_type_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		// public bool IsValid { get { return type != Type.None; } }
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool Enumerator_get_IsValid_m2766619510_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951 * _thisAdjusted = reinterpret_cast<Enumerator_t1513288951 *>(__this + 1);
	return Enumerator_get_IsValid_m2766619510(_thisAdjusted, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
extern "C"  KeyValuePair_2_t834018167  Enumerator_get_Current_m313174397 (Enumerator_t1513288951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m313174397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->get_type_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		Enumerator_t2012408320 * L_2 = __this->get_address_of_m_Array_2();
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		JSONNode_t2946056997 * L_3 = Enumerator_get_Current_m2446791353((Enumerator_t2012408320 *)L_2, /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		KeyValuePair_2_t834018167  L_4;
		memset(&L_4, 0, sizeof(L_4));
		KeyValuePair_2__ctor_m2381912246((&L_4), L_1, L_3, /*hidden argument*/KeyValuePair_2__ctor_m2381912246_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0056;
	}

IL_0028:
	{
		// else if (type == Type.Object)
		int32_t L_5 = __this->get_type_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// return m_Object.Current;
		Enumerator_t390528775 * L_6 = __this->get_address_of_m_Object_1();
		// return m_Object.Current;
		KeyValuePair_2_t834018167  L_7 = Enumerator_get_Current_m416358542((Enumerator_t390528775 *)L_6, /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0056;
	}

IL_0045:
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, null);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		// return new KeyValuePair<string, JSONNode>(string.Empty, null);
		KeyValuePair_2_t834018167  L_9;
		memset(&L_9, 0, sizeof(L_9));
		KeyValuePair_2__ctor_m2381912246((&L_9), L_8, (JSONNode_t2946056997 *)NULL, /*hidden argument*/KeyValuePair_2__ctor_m2381912246_RuntimeMethod_var);
		V_0 = L_9;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		KeyValuePair_2_t834018167  L_10 = V_0;
		return L_10;
	}
}
extern "C"  KeyValuePair_2_t834018167  Enumerator_get_Current_m313174397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951 * _thisAdjusted = reinterpret_cast<Enumerator_t1513288951 *>(__this + 1);
	return Enumerator_get_Current_m313174397(_thisAdjusted, method);
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m786491500 (Enumerator_t1513288951 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_MoveNext_m786491500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->get_type_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// return m_Array.MoveNext();
		Enumerator_t2012408320 * L_1 = __this->get_address_of_m_Array_2();
		// return m_Array.MoveNext();
		bool L_2 = Enumerator_MoveNext_m667095019((Enumerator_t2012408320 *)L_1, /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0042;
	}

IL_001e:
	{
		// else if (type == Type.Object)
		int32_t L_3 = __this->get_type_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_003b;
		}
	}
	{
		// return m_Object.MoveNext();
		Enumerator_t390528775 * L_4 = __this->get_address_of_m_Object_1();
		// return m_Object.MoveNext();
		bool L_5 = Enumerator_MoveNext_m347499449((Enumerator_t390528775 *)L_4, /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0042;
	}

IL_003b:
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
extern "C"  bool Enumerator_MoveNext_m786491500_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951 * _thisAdjusted = reinterpret_cast<Enumerator_t1513288951 *>(__this + 1);
	return Enumerator_MoveNext_m786491500(_thisAdjusted, method);
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


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke(const KeyEnumerator_t488138053& unmarshaled, KeyEnumerator_t488138053_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke_back(const KeyEnumerator_t488138053_marshaled_pinvoke& marshaled, KeyEnumerator_t488138053& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
extern "C" void KeyEnumerator_t488138053_marshal_pinvoke_cleanup(KeyEnumerator_t488138053_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
extern "C" void KeyEnumerator_t488138053_marshal_com(const KeyEnumerator_t488138053& unmarshaled, KeyEnumerator_t488138053_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
extern "C" void KeyEnumerator_t488138053_marshal_com_back(const KeyEnumerator_t488138053_marshaled_com& marshaled, KeyEnumerator_t488138053& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
extern "C" void KeyEnumerator_t488138053_marshal_com_cleanup(KeyEnumerator_t488138053_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void KeyEnumerator__ctor_m1033279676 (KeyEnumerator_t488138053 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t2012408320  L_0 = ___aArrayEnum0;
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t1513288951  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Enumerator__ctor_m191252025((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m1622573906((KeyEnumerator_t488138053 *)__this, L_1, /*hidden argument*/NULL);
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
extern "C"  void KeyEnumerator__ctor_m1033279676_AdjustorThunk (RuntimeObject * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	KeyEnumerator__ctor_m1033279676(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void KeyEnumerator__ctor_m2193205752 (KeyEnumerator_t488138053 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t390528775  L_0 = ___aDictEnum0;
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t1513288951  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Enumerator__ctor_m2905563300((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m1622573906((KeyEnumerator_t488138053 *)__this, L_1, /*hidden argument*/NULL);
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
extern "C"  void KeyEnumerator__ctor_m2193205752_AdjustorThunk (RuntimeObject * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	KeyEnumerator__ctor_m2193205752(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
extern "C"  void KeyEnumerator__ctor_m1622573906 (KeyEnumerator_t488138053 * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_t1513288951  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
extern "C"  void KeyEnumerator__ctor_m1622573906_AdjustorThunk (RuntimeObject * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	KeyEnumerator__ctor_m1622573906(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/KeyEnumerator::get_Current()
extern "C"  JSONNode_t2946056997 * KeyEnumerator_get_Current_m1297174988 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyEnumerator_get_Current_m1297174988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_0();
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		KeyValuePair_2_t834018167  L_1 = Enumerator_get_Current_m313174397((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		String_t* L_2 = KeyValuePair_2_get_Key_m3658972889((KeyValuePair_2_t834018167 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode_t2946056997 * L_3 = JSONNode_op_Implicit_m2523080653(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		JSONNode_t2946056997 * L_4 = V_1;
		return L_4;
	}
}
extern "C"  JSONNode_t2946056997 * KeyEnumerator_get_Current_m1297174988_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	return KeyEnumerator_get_Current_m1297174988(_thisAdjusted, method);
}
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
extern "C"  bool KeyEnumerator_MoveNext_m361149340 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_0();
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_1 = Enumerator_MoveNext_m786491500((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool KeyEnumerator_MoveNext_m361149340_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	return KeyEnumerator_MoveNext_m361149340(_thisAdjusted, method);
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
extern "C"  KeyEnumerator_t488138053  KeyEnumerator_GetEnumerator_m335101271 (KeyEnumerator_t488138053 * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public KeyEnumerator GetEnumerator() { return this; }
		V_0 = (*(KeyEnumerator_t488138053 *)__this);
		goto IL_000d;
	}

IL_000d:
	{
		// public KeyEnumerator GetEnumerator() { return this; }
		KeyEnumerator_t488138053  L_0 = V_0;
		return L_0;
	}
}
extern "C"  KeyEnumerator_t488138053  KeyEnumerator_GetEnumerator_m335101271_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t488138053 * _thisAdjusted = reinterpret_cast<KeyEnumerator_t488138053 *>(__this + 1);
	return KeyEnumerator_GetEnumerator_m335101271(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
extern "C"  void LinqEnumerator__ctor_m3544204463 (LinqEnumerator_t509071878 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinqEnumerator__ctor_m3544204463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal LinqEnumerator(JSONNode aNode)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t2946056997 * L_0 = ___aNode0;
		__this->set_m_Node_0(L_0);
		// if (m_Node != null)
		JSONNode_t2946056997 * L_1 = __this->get_m_Node_0();
		// if (m_Node != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_2 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_1, NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_t2946056997 * L_3 = __this->get_m_Node_0();
		// m_Enumerator = m_Node.GetEnumerator();
		NullCheck(L_3);
		Enumerator_t1513288951  L_4 = VirtFuncInvoker0< Enumerator_t1513288951  >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_3);
		__this->set_m_Enumerator_1(L_4);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/LinqEnumerator::get_Current()
extern "C"  KeyValuePair_2_t834018167  LinqEnumerator_get_Current_m2216486529 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_1();
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		KeyValuePair_2_t834018167  L_1 = Enumerator_get_Current_m313174397((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		KeyValuePair_2_t834018167  L_2 = V_0;
		return L_2;
	}
}
// System.Object SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * LinqEnumerator_System_Collections_IEnumerator_get_Current_m3995158436 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinqEnumerator_System_Collections_IEnumerator_get_Current_m3995158436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_1();
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		KeyValuePair_2_t834018167  L_1 = Enumerator_get_Current_m313174397((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		KeyValuePair_2_t834018167  L_2 = L_1;
		RuntimeObject * L_3 = Box(KeyValuePair_2_t834018167_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONNode/LinqEnumerator::MoveNext()
extern "C"  bool LinqEnumerator_MoveNext_m1261066672 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_1();
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_1 = Enumerator_MoveNext_m786491500((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Dispose()
extern "C"  void LinqEnumerator_Dispose_m519852053 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// m_Node = null;
		__this->set_m_Node_0((JSONNode_t2946056997 *)NULL);
		// m_Enumerator = new Enumerator();
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		__this->set_m_Enumerator_1(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode/LinqEnumerator::GetEnumerator()
extern "C"  RuntimeObject* LinqEnumerator_GetEnumerator_m3611392418 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinqEnumerator_GetEnumerator_m3611392418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_t2946056997 * L_0 = __this->get_m_Node_0();
		// return new LinqEnumerator(m_Node);
		LinqEnumerator_t509071878 * L_1 = (LinqEnumerator_t509071878 *)il2cpp_codegen_object_new(LinqEnumerator_t509071878_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3544204463(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Reset()
extern "C"  void LinqEnumerator_Reset_m719129891 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinqEnumerator_Reset_m719129891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Node != null)
		JSONNode_t2946056997 * L_0 = __this->get_m_Node_0();
		// if (m_Node != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_t2946056997 * L_2 = __this->get_m_Node_0();
		// m_Enumerator = m_Node.GetEnumerator();
		NullCheck(L_2);
		Enumerator_t1513288951  L_3 = VirtFuncInvoker0< Enumerator_t1513288951  >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_2);
		__this->set_m_Enumerator_1(L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_m4226822910 (LinqEnumerator_t509071878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_m4226822910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_t2946056997 * L_0 = __this->get_m_Node_0();
		// return new LinqEnumerator(m_Node);
		LinqEnumerator_t509071878 * L_1 = (LinqEnumerator_t509071878 *)il2cpp_codegen_object_new(LinqEnumerator_t509071878_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3544204463(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		RuntimeObject* L_2 = V_0;
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


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke(const ValueEnumerator_t3808401860& unmarshaled, ValueEnumerator_t3808401860_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke_back(const ValueEnumerator_t3808401860_marshaled_pinvoke& marshaled, ValueEnumerator_t3808401860& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
extern "C" void ValueEnumerator_t3808401860_marshal_pinvoke_cleanup(ValueEnumerator_t3808401860_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
extern "C" void ValueEnumerator_t3808401860_marshal_com(const ValueEnumerator_t3808401860& unmarshaled, ValueEnumerator_t3808401860_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
extern "C" void ValueEnumerator_t3808401860_marshal_com_back(const ValueEnumerator_t3808401860_marshaled_com& marshaled, ValueEnumerator_t3808401860& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
extern "C" void ValueEnumerator_t3808401860_marshal_com_cleanup(ValueEnumerator_t3808401860_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
extern "C"  void ValueEnumerator__ctor_m975839129 (ValueEnumerator_t3808401860 * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t2012408320  L_0 = ___aArrayEnum0;
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_t1513288951  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Enumerator__ctor_m191252025((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m585639700((ValueEnumerator_t3808401860 *)__this, L_1, /*hidden argument*/NULL);
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
extern "C"  void ValueEnumerator__ctor_m975839129_AdjustorThunk (RuntimeObject * __this, Enumerator_t2012408320  ___aArrayEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	ValueEnumerator__ctor_m975839129(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
extern "C"  void ValueEnumerator__ctor_m1508113784 (ValueEnumerator_t3808401860 * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t390528775  L_0 = ___aDictEnum0;
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t1513288951  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Enumerator__ctor_m2905563300((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m585639700((ValueEnumerator_t3808401860 *)__this, L_1, /*hidden argument*/NULL);
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
extern "C"  void ValueEnumerator__ctor_m1508113784_AdjustorThunk (RuntimeObject * __this, Enumerator_t390528775  ___aDictEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	ValueEnumerator__ctor_m1508113784(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
extern "C"  void ValueEnumerator__ctor_m585639700 (ValueEnumerator_t3808401860 * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_t1513288951  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
extern "C"  void ValueEnumerator__ctor_m585639700_AdjustorThunk (RuntimeObject * __this, Enumerator_t1513288951  ___aEnumerator0, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	ValueEnumerator__ctor_m585639700(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
extern "C"  JSONNode_t2946056997 * ValueEnumerator_get_Current_m3443043276 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueEnumerator_get_Current_m3443043276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_0();
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		KeyValuePair_2_t834018167  L_1 = Enumerator_get_Current_m313174397((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		JSONNode_t2946056997 * L_2 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		JSONNode_t2946056997 * L_3 = V_1;
		return L_3;
	}
}
extern "C"  JSONNode_t2946056997 * ValueEnumerator_get_Current_m3443043276_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	return ValueEnumerator_get_Current_m3443043276(_thisAdjusted, method);
}
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
extern "C"  bool ValueEnumerator_MoveNext_m3223684276 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_t1513288951 * L_0 = __this->get_address_of_m_Enumerator_0();
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_1 = Enumerator_MoveNext_m786491500((Enumerator_t1513288951 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		bool L_2 = V_0;
		return L_2;
	}
}
extern "C"  bool ValueEnumerator_MoveNext_m3223684276_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	return ValueEnumerator_MoveNext_m3223684276(_thisAdjusted, method);
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
extern "C"  ValueEnumerator_t3808401860  ValueEnumerator_GetEnumerator_m2650376631 (ValueEnumerator_t3808401860 * __this, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public ValueEnumerator GetEnumerator() { return this; }
		V_0 = (*(ValueEnumerator_t3808401860 *)__this);
		goto IL_000d;
	}

IL_000d:
	{
		// public ValueEnumerator GetEnumerator() { return this; }
		ValueEnumerator_t3808401860  L_0 = V_0;
		return L_0;
	}
}
extern "C"  ValueEnumerator_t3808401860  ValueEnumerator_GetEnumerator_m2650376631_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_t3808401860 * _thisAdjusted = reinterpret_cast<ValueEnumerator_t3808401860 *>(__this + 1);
	return ValueEnumerator_GetEnumerator_m2650376631(_thisAdjusted, method);
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
// System.Void SimpleJSON.JSONNull::.ctor()
extern "C"  void JSONNull__ctor_m3625891807 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull__ctor_m3625891807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNull() { }
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// private JSONNull() { }
		return;
	}
}
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
extern "C"  JSONNull_t1736727710 * JSONNull_CreateOrGet_m3773723069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull_CreateOrGet_m3773723069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNull_t1736727710 * V_0 = NULL;
	{
		// if (reuseSameInstance)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNull_t1736727710_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_t1736727710_il2cpp_TypeInfo_var))->get_reuseSameInstance_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return m_StaticInstance;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_1 = ((JSONNull_t1736727710_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_t1736727710_il2cpp_TypeInfo_var))->get_m_StaticInstance_6();
		V_0 = L_1;
		goto IL_0021;
	}

IL_0016:
	{
		// return new JSONNull();
		JSONNull_t1736727710 * L_2 = (JSONNull_t1736727710 *)il2cpp_codegen_object_new(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull__ctor_m3625891807(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		JSONNull_t1736727710 * L_3 = V_0;
		return L_3;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
extern "C"  int32_t JSONNull_get_Tag_m1650094985 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		V_0 = 5;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
extern "C"  bool JSONNull_get_IsNull_m2651858009 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsNull { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsNull { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNull::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONNull_GetEnumerator_m3532849176 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1513288951  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_t1513288951  L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONNull::get_Value()
extern "C"  String_t* JSONNull_get_Value_m2760466840 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull_get_Value_m2760466840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// get { return "null"; }
		V_0 = _stringLiteral1202628576;
		goto IL_000c;
	}

IL_000c:
	{
		// get { return "null"; }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::set_Value(System.String)
extern "C"  void JSONNull_set_Value_m2598583470 (JSONNull_t1736727710 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
extern "C"  bool JSONNull_get_AsBool_m1479937752 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
extern "C"  void JSONNull_set_AsBool_m1193743253 (JSONNull_t1736727710 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
extern "C"  bool JSONNull_Equals_m1550257260 (JSONNull_t1736727710 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull_Equals_m1550257260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (object.ReferenceEquals(this, obj))
		RuntimeObject * L_0 = ___obj0;
		// if (object.ReferenceEquals(this, obj))
		bool L_1 = il2cpp_codegen_object_reference_equals(__this, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0023;
	}

IL_0014:
	{
		// return (obj is JSONNull);
		RuntimeObject * L_2 = ___obj0;
		V_0 = (bool)((!(((RuntimeObject*)(JSONNull_t1736727710 *)((JSONNull_t1736727710 *)IsInstClass((RuntimeObject*)L_2, JSONNull_t1736727710_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
extern "C"  int32_t JSONNull_GetHashCode_m1539483434 (JSONNull_t1736727710 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 0;
		V_0 = 0;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONNull_WriteToStringBuilder_m110715656 (JSONNull_t1736727710 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull_WriteToStringBuilder_m110715656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append("null");
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral1202628576, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONNull_SerializeBinary_m1095539067 (JSONNull_t1736727710 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	{
		// aWriter.Write((byte)JSONNodeType.NullValue);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.NullValue);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)5);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::.cctor()
extern "C"  void JSONNull__cctor_m1510182135 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNull__cctor_m1510182135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static JSONNull m_StaticInstance = new JSONNull();
		JSONNull_t1736727710 * L_0 = (JSONNull_t1736727710 *)il2cpp_codegen_object_new(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull__ctor_m3625891807(L_0, /*hidden argument*/NULL);
		((JSONNull_t1736727710_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_t1736727710_il2cpp_TypeInfo_var))->set_m_StaticInstance_6(L_0);
		// public static bool reuseSameInstance = true;
		((JSONNull_t1736727710_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_t1736727710_il2cpp_TypeInfo_var))->set_reuseSameInstance_7((bool)1);
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
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
extern "C"  void JSONNumber__ctor_m3343705146 (JSONNumber_t4005729108 * __this, double ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber__ctor_m3343705146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(double aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		double L_0 = ___aData0;
		__this->set_m_Data_6(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
extern "C"  void JSONNumber__ctor_m167111434 (JSONNumber_t4005729108 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber__ctor_m167111434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		// Value = aData;
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNumber::get_Tag()
extern "C"  int32_t JSONNumber_get_Tag_m1536559019 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		V_0 = 4;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
extern "C"  bool JSONNumber_get_IsNumber_m1912317574 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsNumber { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsNumber { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNumber::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONNumber_GetEnumerator_m1094041560 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1513288951  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_t1513288951  L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONNumber::get_Value()
extern "C"  String_t* JSONNumber_get_Value_m3896965801 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber_get_Value_m3896965801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		double* L_0 = __this->get_address_of_m_Data_6();
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		String_t* L_2 = Double_ToString_m3828879243((double*)L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
extern "C"  void JSONNumber_set_Value_m719460139 (JSONNumber_t4005729108 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber_set_Value_m719460139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = ___value0;
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		bool L_2 = Double_TryParse_m623190659(NULL /*static, unused*/, L_0, ((int32_t)167), L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// m_Data = v;
		double L_3 = V_0;
		__this->set_m_Data_6(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
extern "C"  double JSONNumber_get_AsDouble_m3104410531 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// get { return m_Data; }
		double L_0 = __this->get_m_Data_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return m_Data; }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
extern "C"  void JSONNumber_set_AsDouble_m1432374178 (JSONNumber_t4005729108 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		double L_0 = ___value0;
		__this->set_m_Data_6(L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNumber::get_AsLong()
extern "C"  int64_t JSONNumber_get_AsLong_m3868857986 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// get { return (long)m_Data; }
		double L_0 = __this->get_m_Data_6();
		V_0 = (((int64_t)((int64_t)L_0)));
		goto IL_000e;
	}

IL_000e:
	{
		// get { return (long)m_Data; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsLong(System.Int64)
extern "C"  void JSONNumber_set_AsLong_m566123771 (JSONNumber_t4005729108 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		int64_t L_0 = ___value0;
		__this->set_m_Data_6((((double)((double)L_0))));
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONNumber_WriteToStringBuilder_m3482803863 (JSONNumber_t4005729108 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	{
		// aSB.Append(Value);
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append(Value);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		// aSB.Append(Value);
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
extern "C"  bool JSONNumber_IsNumeric_m4277004660 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber_IsNumeric_m4277004660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		// return value is int || value is uint
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		G_B12_0 = ((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Byte_t1134296376_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B12_0 = 1;
	}

IL_007b:
	{
		V_0 = (bool)G_B12_0;
		goto IL_0081;
	}

IL_0081:
	{
		// }
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
extern "C"  bool JSONNumber_Equals_m3973864127 (JSONNumber_t4005729108 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNumber_Equals_m3973864127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	JSONNumber_t4005729108 * V_1 = NULL;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_006e;
	}

IL_000e:
	{
		// if (base.Equals(obj))
		RuntimeObject * L_1 = ___obj0;
		// if (base.Equals(obj))
		bool L_2 = JSONNode_Equals_m2449771842(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_006e;
	}

IL_0021:
	{
		// JSONNumber s2 = obj as JSONNumber;
		RuntimeObject * L_3 = ___obj0;
		V_1 = ((JSONNumber_t4005729108 *)IsInstClass((RuntimeObject*)L_3, JSONNumber_t4005729108_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONNumber_t4005729108 * L_4 = V_1;
		// if (s2 != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_5 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// return m_Data == s2.m_Data;
		double L_6 = __this->get_m_Data_6();
		JSONNumber_t4005729108 * L_7 = V_1;
		NullCheck(L_7);
		double L_8 = L_7->get_m_Data_6();
		V_0 = (bool)((((double)L_6) == ((double)L_8))? 1 : 0);
		goto IL_006e;
	}

IL_0048:
	{
		// if (IsNumeric(obj))
		RuntimeObject * L_9 = ___obj0;
		// if (IsNumeric(obj))
		bool L_10 = JSONNumber_IsNumeric_m4277004660(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// return Convert.ToDouble(obj) == m_Data;
		RuntimeObject * L_11 = ___obj0;
		// return Convert.ToDouble(obj) == m_Data;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_12 = Convert_ToDouble_m4025515304(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		double L_13 = __this->get_m_Data_6();
		V_0 = (bool)((((double)L_12) == ((double)L_13))? 1 : 0);
		goto IL_006e;
	}

IL_0067:
	{
		// return false;
		V_0 = (bool)0;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
extern "C"  int32_t JSONNumber_GetHashCode_m3097296321 (JSONNumber_t4005729108 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		double* L_0 = __this->get_address_of_m_Data_6();
		// return m_Data.GetHashCode();
		int32_t L_1 = Double_GetHashCode_m2295714610((double*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONNumber_SerializeBinary_m3816832386 (JSONNumber_t4005729108 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	{
		// aWriter.Write((byte)JSONNodeType.Number);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.Number);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)4);
		// aWriter.Write(m_Data);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		double L_2 = __this->get_m_Data_6();
		// aWriter.Write(m_Data);
		NullCheck(L_1);
		VirtActionInvoker1< double >::Invoke(14 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_1, L_2);
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
// System.Void SimpleJSON.JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m3280371024 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject__ctor_m3280371024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, JSONNode> m_Dict = new Dictionary<string, JSONNode>();
		Dictionary_2_t2731313296 * L_0 = (Dictionary_2_t2731313296 *)il2cpp_codegen_object_new(Dictionary_2_t2731313296_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2635188939(L_0, /*hidden argument*/Dictionary_2__ctor_m2635188939_RuntimeMethod_var);
		__this->set_m_Dict_6(L_0);
		// private bool inline = false;
		__this->set_inline_7((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject::get_Inline()
extern "C"  bool JSONObject_get_Inline_m2403600368 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return inline; }
		bool L_0 = __this->get_inline_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return inline; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::set_Inline(System.Boolean)
extern "C"  void JSONObject_set_Inline_m4054308852 (JSONObject_t4158403488 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->set_inline_7(L_0);
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONObject::get_Tag()
extern "C"  int32_t JSONObject_get_Tag_m261683132 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Object; } }
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Object; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m1629897578 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsObject { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsObject { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONObject::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONObject_GetEnumerator_m3719468439 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_GetEnumerator_m3719468439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Dictionary_2_t2731313296 * L_0 = __this->get_m_Dict_6();
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		NullCheck(L_0);
		Enumerator_t390528775  L_1 = Dictionary_2_GetEnumerator_m502378881(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Enumerator_t1513288951  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Enumerator__ctor_m2905563300((&L_2), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Enumerator_t1513288951  L_3 = V_0;
		return L_3;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONObject_get_Item_m2254947377 (JSONObject_t4158403488 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_get_Item_m2254947377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t2731313296 * L_0 = __this->get_m_Dict_6();
		String_t* L_1 = ___aKey0;
		// if (m_Dict.ContainsKey(aKey))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m217107153(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return m_Dict[aKey];
		Dictionary_2_t2731313296 * L_3 = __this->get_m_Dict_6();
		String_t* L_4 = ___aKey0;
		// return m_Dict[aKey];
		NullCheck(L_3);
		JSONNode_t2946056997 * L_5 = Dictionary_2_get_Item_m3745523859(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0031;
	}

IL_0024:
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_6 = ___aKey0;
		// return new JSONLazyCreator(this, aKey);
		JSONLazyCreator_t3621052039 * L_7 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m1713835880(L_7, __this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		JSONNode_t2946056997 * L_8 = V_0;
		return L_8;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONObject_set_Item_m3512362680 (JSONObject_t4158403488 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_set_Item_m3512362680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t2946056997 * L_0 = ___value1;
		// if (value == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0014:
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t2731313296 * L_3 = __this->get_m_Dict_6();
		String_t* L_4 = ___aKey0;
		// if (m_Dict.ContainsKey(aKey))
		NullCheck(L_3);
		bool L_5 = Dictionary_2_ContainsKey_m217107153(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// m_Dict[aKey] = value;
		Dictionary_2_t2731313296 * L_6 = __this->get_m_Dict_6();
		String_t* L_7 = ___aKey0;
		JSONNode_t2946056997 * L_8 = ___value1;
		// m_Dict[aKey] = value;
		NullCheck(L_6);
		Dictionary_2_set_Item_m1416072037(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0037:
	{
		// m_Dict.Add(aKey, value);
		Dictionary_2_t2731313296 * L_9 = __this->get_m_Dict_6();
		String_t* L_10 = ___aKey0;
		JSONNode_t2946056997 * L_11 = ___value1;
		// m_Dict.Add(aKey, value);
		NullCheck(L_9);
		Dictionary_2_Add_m4017966756(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONObject_get_Item_m2688448103 (JSONObject_t4158403488 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_get_Item_m2688448103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t2731313296 * L_2 = __this->get_m_Dict_6();
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}

IL_0019:
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_003a;
	}

IL_0020:
	{
		// return m_Dict.ElementAt(aIndex).Value;
		Dictionary_2_t2731313296 * L_4 = __this->get_m_Dict_6();
		int32_t L_5 = ___aIndex0;
		// return m_Dict.ElementAt(aIndex).Value;
		KeyValuePair_2_t834018167  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_1 = L_6;
		// return m_Dict.ElementAt(aIndex).Value;
		JSONNode_t2946056997 * L_7 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		JSONNode_t2946056997 * L_8 = V_0;
		return L_8;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONObject_set_Item_m1156855828 (JSONObject_t4158403488 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_set_Item_m1156855828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (value == null)
		JSONNode_t2946056997 * L_0 = ___value1;
		// if (value == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0014:
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		Dictionary_2_t2731313296 * L_5 = __this->get_m_Dict_6();
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		NullCheck(L_5);
		int32_t L_6 = Dictionary_2_get_Count_m3623399773(L_5, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}

IL_002c:
	{
		// return;
		goto IL_0053;
	}

IL_0031:
	{
		// string key = m_Dict.ElementAt(aIndex).Key;
		Dictionary_2_t2731313296 * L_7 = __this->get_m_Dict_6();
		int32_t L_8 = ___aIndex0;
		// string key = m_Dict.ElementAt(aIndex).Key;
		KeyValuePair_2_t834018167  L_9 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_1 = L_9;
		// string key = m_Dict.ElementAt(aIndex).Key;
		String_t* L_10 = KeyValuePair_2_get_Key_m3658972889((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		V_0 = L_10;
		// m_Dict[key] = value;
		Dictionary_2_t2731313296 * L_11 = __this->get_m_Dict_6();
		String_t* L_12 = V_0;
		JSONNode_t2946056997 * L_13 = ___value1;
		// m_Dict[key] = value;
		NullCheck(L_11);
		Dictionary_2_set_Item_m1416072037(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m2164742813 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_get_Count_m2164742813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return m_Dict.Count; }
		Dictionary_2_t2731313296 * L_0 = __this->get_m_Dict_6();
		// get { return m_Dict.Count; }
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m3623399773(L_0, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// get { return m_Dict.Count; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONObject::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONObject_Add_m742236942 (JSONObject_t4158403488 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_Add_m742236942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (aItem == null)
		JSONNode_t2946056997 * L_0 = ___aItem1;
		// if (aItem == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_t1736727710_il2cpp_TypeInfo_var);
		JSONNull_t1736727710 * L_2 = JSONNull_CreateOrGet_m3773723069(NULL /*static, unused*/, /*hidden argument*/NULL);
		___aItem1 = L_2;
	}

IL_0014:
	{
		// if (!string.IsNullOrEmpty(aKey))
		String_t* L_3 = ___aKey0;
		// if (!string.IsNullOrEmpty(aKey))
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t2731313296 * L_5 = __this->get_m_Dict_6();
		String_t* L_6 = ___aKey0;
		// if (m_Dict.ContainsKey(aKey))
		NullCheck(L_5);
		bool L_7 = Dictionary_2_ContainsKey_m217107153(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// m_Dict[aKey] = aItem;
		Dictionary_2_t2731313296 * L_8 = __this->get_m_Dict_6();
		String_t* L_9 = ___aKey0;
		JSONNode_t2946056997 * L_10 = ___aItem1;
		// m_Dict[aKey] = aItem;
		NullCheck(L_8);
		Dictionary_2_set_Item_m1416072037(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
		goto IL_0050;
	}

IL_0043:
	{
		// m_Dict.Add(aKey, aItem);
		Dictionary_2_t2731313296 * L_11 = __this->get_m_Dict_6();
		String_t* L_12 = ___aKey0;
		JSONNode_t2946056997 * L_13 = ___aItem1;
		// m_Dict.Add(aKey, aItem);
		NullCheck(L_11);
		Dictionary_2_Add_m4017966756(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_0050:
	{
		goto IL_0075;
	}

IL_0056:
	{
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		Dictionary_2_t2731313296 * L_14 = __this->get_m_Dict_6();
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_15 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_15;
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		String_t* L_16 = Guid_ToString_m3279186591((Guid_t *)(&V_0), /*hidden argument*/NULL);
		JSONNode_t2946056997 * L_17 = ___aItem1;
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		NullCheck(L_14);
		Dictionary_2_Add_m4017966756(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_0075:
	{
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.String)
extern "C"  JSONNode_t2946056997 * JSONObject_Remove_m2603736413 (JSONObject_t4158403488 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_Remove_m2603736413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	{
		// if (!m_Dict.ContainsKey(aKey))
		Dictionary_2_t2731313296 * L_0 = __this->get_m_Dict_6();
		String_t* L_1 = ___aKey0;
		// if (!m_Dict.ContainsKey(aKey))
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m217107153(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_003a;
	}

IL_0019:
	{
		// JSONNode tmp = m_Dict[aKey];
		Dictionary_2_t2731313296 * L_3 = __this->get_m_Dict_6();
		String_t* L_4 = ___aKey0;
		// JSONNode tmp = m_Dict[aKey];
		NullCheck(L_3);
		JSONNode_t2946056997 * L_5 = Dictionary_2_get_Item_m3745523859(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
		V_1 = L_5;
		// m_Dict.Remove(aKey);
		Dictionary_2_t2731313296 * L_6 = __this->get_m_Dict_6();
		String_t* L_7 = ___aKey0;
		// m_Dict.Remove(aKey);
		NullCheck(L_6);
		Dictionary_2_Remove_m2771669071(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		// return tmp;
		JSONNode_t2946056997 * L_8 = V_1;
		V_0 = L_8;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		JSONNode_t2946056997 * L_9 = V_0;
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONObject_Remove_m4286821291 (JSONObject_t4158403488 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_Remove_m4286821291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t2731313296 * L_2 = __this->get_m_Dict_6();
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}

IL_0019:
	{
		// return null;
		V_0 = (JSONNode_t2946056997 *)NULL;
		goto IL_004d;
	}

IL_0020:
	{
		// var item = m_Dict.ElementAt(aIndex);
		Dictionary_2_t2731313296 * L_4 = __this->get_m_Dict_6();
		int32_t L_5 = ___aIndex0;
		// var item = m_Dict.ElementAt(aIndex);
		KeyValuePair_2_t834018167  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_1 = L_6;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t2731313296 * L_7 = __this->get_m_Dict_6();
		// m_Dict.Remove(item.Key);
		String_t* L_8 = KeyValuePair_2_get_Key_m3658972889((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		// m_Dict.Remove(item.Key);
		NullCheck(L_7);
		Dictionary_2_Remove_m2771669071(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		// return item.Value;
		// return item.Value;
		JSONNode_t2946056997 * L_9 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		V_0 = L_9;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		JSONNode_t2946056997 * L_10 = V_0;
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONObject_Remove_m780311716 (JSONObject_t4158403488 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_Remove_m780311716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRemoveU3Ec__AnonStorey1_t2292622994 * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	JSONNode_t2946056997 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// {
		U3CRemoveU3Ec__AnonStorey1_t2292622994 * L_0 = (U3CRemoveU3Ec__AnonStorey1_t2292622994 *)il2cpp_codegen_object_new(U3CRemoveU3Ec__AnonStorey1_t2292622994_il2cpp_TypeInfo_var);
		U3CRemoveU3Ec__AnonStorey1__ctor_m2434442688(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRemoveU3Ec__AnonStorey1_t2292622994 * L_1 = V_0;
		JSONNode_t2946056997 * L_2 = ___aNode0;
		NullCheck(L_1);
		L_1->set_aNode_0(L_2);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		Dictionary_2_t2731313296 * L_3 = __this->get_m_Dict_6();
		U3CRemoveU3Ec__AnonStorey1_t2292622994 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CRemoveU3Ec__AnonStorey1_U3CU3Em__0_m3600785454_RuntimeMethod_var;
		Func_2_t3505375296 * L_6 = (Func_2_t3505375296 *)il2cpp_codegen_object_new(Func_2_t3505375296_il2cpp_TypeInfo_var);
		Func_2__ctor_m1138704236(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m1138704236_RuntimeMethod_var);
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		RuntimeObject* L_7 = Enumerable_Where_TisKeyValuePair_2_t834018167_m3569154686(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_TisKeyValuePair_2_t834018167_m3569154686_RuntimeMethod_var);
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		KeyValuePair_2_t834018167  L_8 = Enumerable_First_TisKeyValuePair_2_t834018167_m2250935909(NULL /*static, unused*/, L_7, /*hidden argument*/Enumerable_First_TisKeyValuePair_2_t834018167_m2250935909_RuntimeMethod_var);
		V_1 = L_8;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t2731313296 * L_9 = __this->get_m_Dict_6();
		// m_Dict.Remove(item.Key);
		String_t* L_10 = KeyValuePair_2_get_Key_m3658972889((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		// m_Dict.Remove(item.Key);
		NullCheck(L_9);
		Dictionary_2_Remove_m2771669071(L_9, L_10, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		// return aNode;
		U3CRemoveU3Ec__AnonStorey1_t2292622994 * L_11 = V_0;
		NullCheck(L_11);
		JSONNode_t2946056997 * L_12 = L_11->get_aNode_0();
		V_2 = L_12;
		goto IL_0054;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004b;
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Object)
		// catch
		// return null;
		V_2 = (JSONNode_t2946056997 *)NULL;
		goto IL_0054;
	} // end catch (depth: 1)

IL_0054:
	{
		// }
		JSONNode_t2946056997 * L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject::get_Children()
extern "C"  RuntimeObject* JSONObject_get_Children_m3987237774 (JSONObject_t4158403488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_get_Children_m3987237774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2553288236 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__Iterator0_t2553288236 * L_0 = (U3CU3Ec__Iterator0_t2553288236 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2553288236_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m3323659225(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t2553288236 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CU3Ec__Iterator0_t2553288236 * L_2 = V_0;
		U3CU3Ec__Iterator0_t2553288236 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_5(((int32_t)-2));
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void SimpleJSON.JSONObject::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONObject_WriteToStringBuilder_m4047663162 (JSONObject_t4158403488 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_WriteToStringBuilder_m4047663162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t390528775  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// aSB.Append('{');
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append('{');
		NullCheck(L_0);
		StringBuilder_Append_m2383614642(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// if (inline)
		bool L_1 = __this->get_inline_7();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_001a:
	{
		// foreach (var k in m_Dict)
		Dictionary_2_t2731313296 * L_2 = __this->get_m_Dict_6();
		// foreach (var k in m_Dict)
		NullCheck(L_2);
		Enumerator_t390528775  L_3 = Dictionary_2_GetEnumerator_m502378881(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_002c:
		{
			// foreach (var k in m_Dict)
			// foreach (var k in m_Dict)
			KeyValuePair_2_t834018167  L_4 = Enumerator_get_Current_m416358542((Enumerator_t390528775 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			V_1 = L_4;
			// if (!first)
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0044;
			}
		}

IL_003b:
		{
			// aSB.Append(',');
			StringBuilder_t * L_6 = ___aSB0;
			// aSB.Append(',');
			NullCheck(L_6);
			StringBuilder_Append_m2383614642(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0044:
		{
			// first = false;
			V_0 = (bool)0;
			// if (aMode == JSONTextMode.Indent)
			int32_t L_7 = ___aMode3;
			if ((!(((uint32_t)L_7) == ((uint32_t)1))))
			{
				goto IL_0055;
			}
		}

IL_004e:
		{
			// aSB.AppendLine();
			StringBuilder_t * L_8 = ___aSB0;
			// aSB.AppendLine();
			NullCheck(L_8);
			StringBuilder_AppendLine_m2783356575(L_8, /*hidden argument*/NULL);
		}

IL_0055:
		{
			// if (aMode == JSONTextMode.Indent)
			int32_t L_9 = ___aMode3;
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0069;
			}
		}

IL_005d:
		{
			// aSB.Append(' ', aIndent + aIndentInc);
			StringBuilder_t * L_10 = ___aSB0;
			int32_t L_11 = ___aIndent1;
			int32_t L_12 = ___aIndentInc2;
			// aSB.Append(' ', aIndent + aIndentInc);
			NullCheck(L_10);
			StringBuilder_Append_m2180175564(L_10, ((int32_t)32), ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		}

IL_0069:
		{
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			StringBuilder_t * L_13 = ___aSB0;
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			NullCheck(L_13);
			StringBuilder_t * L_14 = StringBuilder_Append_m2383614642(L_13, ((int32_t)34), /*hidden argument*/NULL);
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			String_t* L_15 = KeyValuePair_2_get_Key_m3658972889((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
			String_t* L_16 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			NullCheck(L_14);
			StringBuilder_t * L_17 = StringBuilder_Append_m1965104174(L_14, L_16, /*hidden argument*/NULL);
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			NullCheck(L_17);
			StringBuilder_Append_m2383614642(L_17, ((int32_t)34), /*hidden argument*/NULL);
			// if (aMode == JSONTextMode.Compact)
			int32_t L_18 = ___aMode3;
			if (L_18)
			{
				goto IL_009f;
			}
		}

IL_0091:
		{
			// aSB.Append(':');
			StringBuilder_t * L_19 = ___aSB0;
			// aSB.Append(':');
			NullCheck(L_19);
			StringBuilder_Append_m2383614642(L_19, ((int32_t)58), /*hidden argument*/NULL);
			goto IL_00ab;
		}

IL_009f:
		{
			// aSB.Append(" : ");
			StringBuilder_t * L_20 = ___aSB0;
			// aSB.Append(" : ");
			NullCheck(L_20);
			StringBuilder_Append_m1965104174(L_20, _stringLiteral3787497674, /*hidden argument*/NULL);
		}

IL_00ab:
		{
			// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
			// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
			JSONNode_t2946056997 * L_21 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
			StringBuilder_t * L_22 = ___aSB0;
			int32_t L_23 = ___aIndent1;
			int32_t L_24 = ___aIndentInc2;
			int32_t L_25 = ___aIndentInc2;
			int32_t L_26 = ___aMode3;
			// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
			NullCheck(L_21);
			VirtActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_21, L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)), L_25, L_26);
		}

IL_00bf:
		{
			// foreach (var k in m_Dict)
			bool L_27 = Enumerator_MoveNext_m347499449((Enumerator_t390528775 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_002c;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{ // begin finally (depth: 1)
		// foreach (var k in m_Dict)
		Enumerator_Dispose_m1765329307((Enumerator_t390528775 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(208)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00de:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_28 = ___aMode3;
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_00f5;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t * L_29 = ___aSB0;
		// aSB.AppendLine().Append(' ', aIndent);
		NullCheck(L_29);
		StringBuilder_t * L_30 = StringBuilder_AppendLine_m2783356575(L_29, /*hidden argument*/NULL);
		int32_t L_31 = ___aIndent1;
		// aSB.AppendLine().Append(' ', aIndent);
		NullCheck(L_30);
		StringBuilder_Append_m2180175564(L_30, ((int32_t)32), L_31, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		// aSB.Append('}');
		StringBuilder_t * L_32 = ___aSB0;
		// aSB.Append('}');
		NullCheck(L_32);
		StringBuilder_Append_m2383614642(L_32, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONObject::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONObject_SerializeBinary_m2078857922 (JSONObject_t4158403488 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONObject_SerializeBinary_m2078857922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t2913490280  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		// aWriter.Write((byte)JSONNodeType.Object);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.Object);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)2);
		// aWriter.Write(m_Dict.Count);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		Dictionary_2_t2731313296 * L_2 = __this->get_m_Dict_6();
		// aWriter.Write(m_Dict.Count);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		// aWriter.Write(m_Dict.Count);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// foreach (string K in m_Dict.Keys)
		Dictionary_2_t2731313296 * L_4 = __this->get_m_Dict_6();
		// foreach (string K in m_Dict.Keys)
		NullCheck(L_4);
		KeyCollection_t2920988767 * L_5 = Dictionary_2_get_Keys_m3940207030(L_4, /*hidden argument*/Dictionary_2_get_Keys_m3940207030_RuntimeMethod_var);
		// foreach (string K in m_Dict.Keys)
		NullCheck(L_5);
		Enumerator_t2913490280  L_6 = KeyCollection_GetEnumerator_m2653291907(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m2653291907_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0030:
		{
			// foreach (string K in m_Dict.Keys)
			// foreach (string K in m_Dict.Keys)
			String_t* L_7 = Enumerator_get_Current_m3970196056((Enumerator_t2913490280 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3970196056_RuntimeMethod_var);
			V_0 = L_7;
			// aWriter.Write(K);
			BinaryWriter_t3992595042 * L_8 = ___aWriter0;
			String_t* L_9 = V_0;
			// aWriter.Write(K);
			NullCheck(L_8);
			VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
			// m_Dict[K].SerializeBinary(aWriter);
			Dictionary_2_t2731313296 * L_10 = __this->get_m_Dict_6();
			String_t* L_11 = V_0;
			// m_Dict[K].SerializeBinary(aWriter);
			NullCheck(L_10);
			JSONNode_t2946056997 * L_12 = Dictionary_2_get_Item_m3745523859(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
			BinaryWriter_t3992595042 * L_13 = ___aWriter0;
			// m_Dict[K].SerializeBinary(aWriter);
			NullCheck(L_12);
			VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(41 /* System.Void SimpleJSON.JSONNode::SerializeBinary(System.IO.BinaryWriter) */, L_12, L_13);
		}

IL_0053:
		{
			// foreach (string K in m_Dict.Keys)
			bool L_14 = Enumerator_MoveNext_m1781309907((Enumerator_t2913490280 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1781309907_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0030;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		// foreach (string K in m_Dict.Keys)
		Enumerator_Dispose_m3927693234((Enumerator_t2913490280 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3927693234_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
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
// System.Void SimpleJSON.JSONObject/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m3323659225 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m785944640 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_MoveNext_m785944640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_00b9;
	}

IL_0023:
	{
		// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
		JSONObject_t4158403488 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		Dictionary_2_t2731313296 * L_3 = L_2->get_m_Dict_6();
		// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
		NullCheck(L_3);
		Enumerator_t390528775  L_4 = Dictionary_2_GetEnumerator_m502378881(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0087;
				}
			}
		}

IL_004a:
		{
			goto IL_0087;
		}

IL_004f:
		{
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			Enumerator_t390528775 * L_6 = __this->get_address_of_U24locvar0_0();
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			KeyValuePair_2_t834018167  L_7 = Enumerator_get_Current_m416358542((Enumerator_t390528775 *)L_6, /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			__this->set_U3CNU3E__1_1(L_7);
			// yield return N.Value;
			KeyValuePair_2_t834018167 * L_8 = __this->get_address_of_U3CNU3E__1_1();
			// yield return N.Value;
			JSONNode_t2946056997 * L_9 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)L_8, /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
			__this->set_U24current_3(L_9);
			bool L_10 = __this->get_U24disposing_4();
			if (L_10)
			{
				goto IL_0080;
			}
		}

IL_0079:
		{
			__this->set_U24PC_5(1);
		}

IL_0080:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xBB, FINALLY_009c);
		}

IL_0087:
		{
			Enumerator_t390528775 * L_11 = __this->get_address_of_U24locvar0_0();
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			bool L_12 = Enumerator_MoveNext_m347499449((Enumerator_t390528775 *)L_11, /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_004f;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(156)
		}

IL_00a0:
		{
			Enumerator_t390528775 * L_14 = __this->get_address_of_U24locvar0_0();
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			Enumerator_Dispose_m1765329307((Enumerator_t390528775 *)L_14, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
			IL2CPP_END_FINALLY(156)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b2:
	{
		// }
		__this->set_U24PC_5((-1));
	}

IL_00b9:
	{
		return (bool)0;
	}

IL_00bb:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m85917598 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	JSONNode_t2946056997 * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		JSONNode_t2946056997 * L_1 = V_0;
		return L_1;
	}
}
// System.Object SimpleJSON.JSONObject/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1186073173 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m1565699041 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Dispose_m1565699041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t390528775 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m1765329307((Enumerator_t390528775 *)L_2, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONObject/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m2072516878 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m2072516878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CU3Ec__Iterator0_Reset_m2072516878_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONObject/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m1052793092 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4281407763(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4281407763 (U3CU3Ec__Iterator0_t2553288236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m4281407763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2553288236 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_5();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, (int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t2553288236 * L_2 = (U3CU3Ec__Iterator0_t2553288236 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2553288236_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m3323659225(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator0_t2553288236 * L_3 = V_0;
		JSONObject_t4158403488 * L_4 = __this->get_U24this_2();
		NullCheck(L_3);
		L_3->set_U24this_2(L_4);
		U3CU3Ec__Iterator0_t2553288236 * L_5 = V_0;
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
// System.Void SimpleJSON.JSONObject/<Remove>c__AnonStorey1::.ctor()
extern "C"  void U3CRemoveU3Ec__AnonStorey1__ctor_m2434442688 (U3CRemoveU3Ec__AnonStorey1_t2292622994 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<Remove>c__AnonStorey1::<>m__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
extern "C"  bool U3CRemoveU3Ec__AnonStorey1_U3CU3Em__0_m3600785454 (U3CRemoveU3Ec__AnonStorey1_t2292622994 * __this, KeyValuePair_2_t834018167  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRemoveU3Ec__AnonStorey1_U3CU3Em__0_m3600785454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		JSONNode_t2946056997 * L_0 = KeyValuePair_2_get_Value_m1737997693((KeyValuePair_2_t834018167 *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		JSONNode_t2946056997 * L_1 = __this->get_aNode_0();
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_2 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_3 = V_0;
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
// System.Void SimpleJSON.JSONString::.ctor(System.String)
extern "C"  void JSONString__ctor_m562445776 (JSONString_t3803360443 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONString__ctor_m562445776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONString(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		String_t* L_0 = ___aData0;
		__this->set_m_Data_6(L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
extern "C"  int32_t JSONString_get_Tag_m1567615018 (JSONString_t3803360443 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		V_0 = 3;
		goto IL_0008;
	}

IL_0008:
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONString::get_IsString()
extern "C"  bool JSONString_get_IsString_m3002040072 (JSONString_t3803360443 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool IsString { get { return true; } }
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// public override bool IsString { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONString::GetEnumerator()
extern "C"  Enumerator_t1513288951  JSONString_GetEnumerator_m1879902094 (JSONString_t3803360443 * __this, const RuntimeMethod* method)
{
	Enumerator_t1513288951  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_t1513288951  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t1513288951 ));
		Enumerator_t1513288951  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		Enumerator_t1513288951  L_1 = V_1;
		return L_1;
	}
}
// System.String SimpleJSON.JSONString::get_Value()
extern "C"  String_t* JSONString_get_Value_m4255042093 (JSONString_t3803360443 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_Data; }
		String_t* L_0 = __this->get_m_Data_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return m_Data; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::set_Value(System.String)
extern "C"  void JSONString_set_Value_m129092943 (JSONString_t3803360443 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// m_Data = value;
		String_t* L_0 = ___value0;
		__this->set_m_Data_6(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
extern "C"  void JSONString_WriteToStringBuilder_m1475190596 (JSONString_t3803360443 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONString_WriteToStringBuilder_m1475190596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		StringBuilder_t * L_0 = ___aSB0;
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		NullCheck(L_0);
		StringBuilder_t * L_1 = StringBuilder_Append_m2383614642(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_2 = __this->get_m_Data_6();
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		String_t* L_3 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		NullCheck(L_1);
		StringBuilder_t * L_4 = StringBuilder_Append_m1965104174(L_1, L_3, /*hidden argument*/NULL);
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		NullCheck(L_4);
		StringBuilder_Append_m2383614642(L_4, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
extern "C"  bool JSONString_Equals_m2864760385 (JSONString_t3803360443 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONString_Equals_m2864760385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	JSONString_t3803360443 * V_2 = NULL;
	{
		// if (base.Equals(obj))
		RuntimeObject * L_0 = ___obj0;
		// if (base.Equals(obj))
		bool L_1 = JSONNode_Equals_m2449771842(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0064;
	}

IL_0014:
	{
		// string s = obj as string;
		RuntimeObject * L_2 = ___obj0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// if (s != null)
		String_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// return m_Data == s;
		String_t* L_4 = __this->get_m_Data_6();
		String_t* L_5 = V_1;
		// return m_Data == s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0064;
	}

IL_0033:
	{
		// JSONString s2 = obj as JSONString;
		RuntimeObject * L_7 = ___obj0;
		V_2 = ((JSONString_t3803360443 *)IsInstClass((RuntimeObject*)L_7, JSONString_t3803360443_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONString_t3803360443 * L_8 = V_2;
		// if (s2 != null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t2946056997_il2cpp_TypeInfo_var);
		bool L_9 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_8, NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// return m_Data == s2.m_Data;
		String_t* L_10 = __this->get_m_Data_6();
		JSONString_t3803360443 * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_m_Data_6();
		// return m_Data == s2.m_Data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0064;
	}

IL_005d:
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Int32 SimpleJSON.JSONString::GetHashCode()
extern "C"  int32_t JSONString_GetHashCode_m1151196332 (JSONString_t3803360443 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return m_Data.GetHashCode();
		String_t* L_0 = __this->get_m_Data_6();
		// return m_Data.GetHashCode();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONString::SerializeBinary(System.IO.BinaryWriter)
extern "C"  void JSONString_SerializeBinary_m2906924898 (JSONString_t3803360443 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	{
		// aWriter.Write((byte)JSONNodeType.String);
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		// aWriter.Write((byte)JSONNodeType.String);
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)3);
		// aWriter.Write(m_Data);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		String_t* L_2 = __this->get_m_Data_6();
		// aWriter.Write(m_Data);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_1, L_2);
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
