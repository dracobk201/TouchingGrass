#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>
struct Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
// System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>
struct KeyCollection_t4EEF82D16025086C3E59199E5D415BDCC8A8ED0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct KeyCollection_tE9AC5F7BFA71AD32B3C09BFA088AA4BA6EE8613D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>
struct ValueCollection_tF8FDE74E8E6861A823329F130B350B828B8FBA1D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct ValueCollection_t2577CC584993ADC75878EE7A1FB656005AA10306;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>[]
struct EntryU5BU5D_t156A27B7E6145C1383AC9C9880E8147A90CCFB38;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>[]
struct EntryU5BU5D_t762C9873E03ABD2EAE235E73ECDBA51FCB9EFAD9;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer
struct Crc32cLayer_t799B2010955281BD2F31EBA62AF0091A14642304;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// FlyingWormConsole3.LiteNetLib.Utils.InvalidTypeException
struct InvalidTypeException_t79DD32863BA9B2D1CE6C8E068D8E97ADABA8C741;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// FlyingWormConsole3.LiteNetLib.Utils.NetDataReader
struct NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54;
// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter
struct NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA;
// FlyingWormConsole3.LiteNetLib.NetManager
struct NetManager_t8B66EC65CAFC8455974B02C8945955F328277191;
// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor
struct NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873;
// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer
struct NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9;
// FlyingWormConsole3.LiteNetLib.NetSocket
struct NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4;
// FlyingWormConsole3.LiteNetLib.Utils.NtpPacket
struct NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA;
// FlyingWormConsole3.LiteNetLib.Utils.NtpRequest
struct NtpRequest_tFFBFC24434D3C3F9B5A288721A636B37D4382399;
// FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase
struct PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6;
// FlyingWormConsole3.LiteNetLib.Utils.ParseException
struct ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer
struct XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198;
// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5;
// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_t4542089B28CECEEA8A877EDA8CE931EFE7ADB166;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32C_t2921A96AC4574713CE8C171FFC535DD602FDB34A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetDebug_t09498527952058773C46B5C4FD82F348EC77F7BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetUtils_tD42EC79AFBE1C8BD1B0E41B25106D1FB1433BDDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06C05B24B8AC51D50C3AA294D70C5E1E28E9A0E3;
IL2CPP_EXTERN_C String_t* _stringLiteral10F509F15EC5C6178F7787F554341A601F904E65;
IL2CPP_EXTERN_C String_t* _stringLiteral20578EED957D25675AEB69A727D4556E455C76A9;
IL2CPP_EXTERN_C String_t* _stringLiteral3B19916E896E08666992C24EA969EE6DE3B95722;
IL2CPP_EXTERN_C String_t* _stringLiteral49BEFE76EF933CC018C51D77F66B724C36F2CE09;
IL2CPP_EXTERN_C String_t* _stringLiteral54CC87BDCC203DBF3D08732C8F6B081BD50E7D62;
IL2CPP_EXTERN_C String_t* _stringLiteral6A616A2BD726354344808434F427B73FA98BDD24;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral868EE9733DC26168EACBAC88A44D9E3DE178486F;
IL2CPP_EXTERN_C String_t* _stringLiteral88F1D02FAC5553C102E3A23C9A363D07A9C89238;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FFA609F3AF81CBA0BEF31B92E98F7C0B64DA06;
IL2CPP_EXTERN_C String_t* _stringLiteralC90CADE37127E5B15A609569628F61937A864B5A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB77237BCD39404C795BCB8688C2D3153355EBA0;
IL2CPP_EXTERN_C String_t* _stringLiteralF39AFC06F0127ED41BF2DBB29047355062D8065C;
IL2CPP_EXTERN_C String_t* _stringLiteralF62357F27A8ABD4B2897C89CFE2ABB3A9468CB41;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB702FBA6DE5A2796549B6AB3BAB29390901942C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m18669342C6857F217E5625EA0AD8ED2DD525FBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetPacketProcessor_GetCallbackFromData_m4CA0F0219BE90B2EEBCED623E0B4F4A3066E8F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket_ValidateRequest_m6071DCC338700F7187D68393D565E6F73C366E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>
struct Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t156A27B7E6145C1383AC9C9880E8147A90CCFB38* ____entries_1;
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
	KeyCollection_t4EEF82D16025086C3E59199E5D415BDCC8A8ED0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF8FDE74E8E6861A823329F130B350B828B8FBA1D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>
struct Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t762C9873E03ABD2EAE235E73ECDBA51FCB9EFAD9* ____entries_1;
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
	KeyCollection_tE9AC5F7BFA71AD32B3C09BFA088AA4BA6EE8613D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2577CC584993ADC75878EE7A1FB656005AA10306* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// FlyingWormConsole3.LiteNetLib.Utils.NetDataReader
struct NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54  : public RuntimeObject
{
	// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_0;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::_position
	int32_t ____position_1;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::_dataSize
	int32_t ____dataSize_2;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::_offset
	int32_t ____offset_3;
};

// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter
struct NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA  : public RuntimeObject
{
	// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_0;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::_position
	int32_t ____position_1;
	// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::_autoResize
	bool ____autoResize_3;
};

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor
struct NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873  : public RuntimeObject
{
	// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::_netSerializer
	NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* ____netSerializer_0;
	// System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate> FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::_callbacks
	Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* ____callbacks_1;
	// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::_netDataWriter
	NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* ____netDataWriter_2;
};

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer
struct NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9  : public RuntimeObject
{
	// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::_writer
	NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* ____writer_0;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::_maxStringLength
	int32_t ____maxStringLength_1;
	// System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType> FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::_registeredTypes
	Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326* ____registeredTypes_2;
};

// FlyingWormConsole3.LiteNetLib.NetSocket
struct NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4  : public RuntimeObject
{
	// System.Net.Sockets.Socket FlyingWormConsole3.LiteNetLib.NetSocket::_udpSocketv4
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____udpSocketv4_1;
	// System.Net.Sockets.Socket FlyingWormConsole3.LiteNetLib.NetSocket::_udpSocketv6
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____udpSocketv6_2;
	// System.Threading.Thread FlyingWormConsole3.LiteNetLib.NetSocket::_threadv4
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____threadv4_3;
	// System.Threading.Thread FlyingWormConsole3.LiteNetLib.NetSocket::_threadv6
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____threadv6_4;
	// System.Net.IPEndPoint FlyingWormConsole3.LiteNetLib.NetSocket::_bufferEndPointv4
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ____bufferEndPointv4_5;
	// System.Net.IPEndPoint FlyingWormConsole3.LiteNetLib.NetSocket::_bufferEndPointv6
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ____bufferEndPointv6_6;
	// FlyingWormConsole3.LiteNetLib.NetManager FlyingWormConsole3.LiteNetLib.NetSocket::_listener
	NetManager_t8B66EC65CAFC8455974B02C8945955F328277191* ____listener_7;
	// System.Int32 FlyingWormConsole3.LiteNetLib.NetSocket::<LocalPort>k__BackingField
	int32_t ___U3CLocalPortU3Ek__BackingField_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) FlyingWormConsole3.LiteNetLib.NetSocket::IsRunning
	bool ___IsRunning_12;
};

// FlyingWormConsole3.LiteNetLib.Utils.NtpRequest
struct NtpRequest_tFFBFC24434D3C3F9B5A288721A636B37D4382399  : public RuntimeObject
{
	// System.Net.IPEndPoint FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::_ntpEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ____ntpEndPoint_3;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::_resendTime
	int32_t ____resendTime_4;
	// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::_killTime
	int32_t ____killTime_5;
};

// FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase
struct PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6  : public RuntimeObject
{
	// System.Int32 FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase::ExtraPacketSizeForLayer
	int32_t ___ExtraPacketSizeForLayer_0;
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

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType
struct CustomType_t4542089B28CECEEA8A877EDA8CE931EFE7ADB166  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer
struct Crc32cLayer_t799B2010955281BD2F31EBA62AF0091A14642304  : public PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6
{
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer
struct XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198  : public PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6
{
	// System.Byte[] FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::_byteKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteKey_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
	};
};

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble
struct ConverterHelperDouble_t96DC6EE768B7969E3AEA90AE956FA9641E1CF49D 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Along
			uint64_t ___Along_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Along_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble::Adouble
			double ___Adouble_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Adouble_1_forAlignmentOnly;
		};
	};
};

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat
struct ConverterHelperFloat_t32B37DDAF4EAE04DD7637BDA96DA12255B6D974C 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Aint
			int32_t ___Aint_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Aint_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat::Afloat
			float ___Afloat_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Afloat_1_forAlignmentOnly;
		};
	};
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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

// FlyingWormConsole3.LiteNetLib.Utils.NtpPacket
struct NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA  : public RuntimeObject
{
	// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::<Bytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBytesU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::<DestinationTimestamp>k__BackingField
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___U3CDestinationTimestampU3Ek__BackingField_2;
};

// FlyingWormConsole3.LiteNetLib.Utils.ParseException
struct ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
struct SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5  : public MulticastDelegate_t
{
};

// FlyingWormConsole3.LiteNetLib.Utils.InvalidTypeException
struct InvalidTypeException_t79DD32863BA9B2D1CE6C8E068D8E97ADABA8C741  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>

// System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>

// System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>

// System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.EndPoint

// System.Net.EndPoint

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// FlyingWormConsole3.LiteNetLib.Utils.NetDataReader

// FlyingWormConsole3.LiteNetLib.Utils.NetDataReader

// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter

// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer

// FlyingWormConsole3.LiteNetLib.NetSocket
struct NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4_StaticFields
{
	// System.Net.IPAddress FlyingWormConsole3.LiteNetLib.NetSocket::MulticastAddressV6
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___MulticastAddressV6_9;
	// System.Boolean FlyingWormConsole3.LiteNetLib.NetSocket::IPv6Support
	bool ___IPv6Support_10;
};

// FlyingWormConsole3.LiteNetLib.NetSocket

// FlyingWormConsole3.LiteNetLib.Utils.NtpRequest

// FlyingWormConsole3.LiteNetLib.Utils.NtpRequest

// FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase

// FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType

// FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer

// FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Net.IPEndPoint

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer

// FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperDouble

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat

// FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter/ConverterHelperFloat

// System.Nullable`1<System.DateTime>

// System.Nullable`1<System.DateTime>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::D79537A2F838755D540F3ECC461338CA43D2B18AEA28361726B8A7882AE00D99
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___D79537A2F838755D540F3ECC461338CA43D2B18AEA28361726B8A7882AE00D99_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.MulticastDelegate

// System.MulticastDelegate

// FlyingWormConsole3.LiteNetLib.Utils.NtpPacket
struct NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_StaticFields
{
	// System.DateTime FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::Epoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Epoch_0;
};

// FlyingWormConsole3.LiteNetLib.Utils.NtpPacket

// FlyingWormConsole3.LiteNetLib.Utils.ParseException

// FlyingWormConsole3.LiteNetLib.Utils.ParseException

// System.SystemException

// System.SystemException

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate

// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate

// FlyingWormConsole3.LiteNetLib.Utils.InvalidTypeException

// FlyingWormConsole3.LiteNetLib.Utils.InvalidTypeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
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


// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataWriter_get_Data_m57195A7D8184C5AFAE3D3DEF4069D8AD9A7390AD_inline (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m7947782000AC2E7C7B6152A12F4FCA2064948AEC_inline (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mBB8783DD38E3E8036B963E9DB1E9938BEB3016DB (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* ___0_dataWriter, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mF38EADB55AB83471FB3659699E2D72CB729F6EB2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mAE98AD0CF76E7AD14F84DBD771B680A060C27361 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_m001BD5F3E22403AF65DD828572FC45C5D1AE0410 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_maxSize, const RuntimeMethod* method) ;
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_m19541292BC49A3CE2F5A6EEE17B474171A6C63D5 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t ___0_maxLength, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Net.IPEndPoint FlyingWormConsole3.LiteNetLib.NetUtils::MakeEndPoint(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* NetUtils_MakeEndPoint_m1492198D9A8B27F17188F13F959508FCA7C7AF76 (String_t* ___0_hostStr, int32_t ___1_port, const RuntimeMethod* method) ;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_mE8A0E283EB6059B7D6449F895FB6AACF7A0C795C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Char System.BitConverter::ToChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitConverter_ToChar_m2D9C2CDBB4F3306BBE74D305B3B5A08D458A5670 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___0_array, ___1_offset, ___2_count, method);
}
// System.Byte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_GetByte_m06FB4658EC622986718080254ECFD259DD406BF6 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.SByte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_GetSByte_m06DBC7E501228FAD46AD4547131711438B10D650 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_GetBool_m0A6A345E1F2AC6472D3A454AEF7F9C87241C5F4C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Char FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_GetChar_mA1AAFAF04C9ACCF416B0EE481F6D7C6284DA2E03 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Int16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_GetShort_mE2FEF7B9AFA93170712E89277FE1C61C5D0FCAE8 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.UInt16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_GetUShort_m01E2634AB533AC3ED170991D133981BB0D000DC4 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_GetUInt_mDE5E7DFB66C920FA43257752522AD792CA8AA1E2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Int64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_GetLong_m1B2BE011BE6E224D9FAE094DC1EECE9C3B473259 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_GetULong_mEDAAFDA63ECC73E4FFFD0557116F0C80DE08C8A2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Single FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_GetFloat_m44A56D47D422411B6ED9B633BFA5A64AC3AFE570 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Double FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_GetDouble_m7F09CDB38083D759FF6E9EA5C572553FFE9B0055 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_PeekInt_m55892788150A79450F06BCF4B1D0C5182444AD51 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetUShort(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUShort_m45ED0659977BEA633E6E00C3CDCA9F74ECF92B53 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, uint16_t* ___0_result, const RuntimeMethod* method) ;
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetString_m7BB02F8DD26F7D8F32FCBD644B5DCE1C9CB557F1 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, String_t** ___0_result, const RuntimeMethod* method) ;
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataReader_GetBytesWithLength_m4B076429B78EDBEFB110F065B7024A4C147EB075 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, bool ___0_autoResize, int32_t ___1_initialSize, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m3D5E4569AAE00E996F2C31B62D003DE00D942184 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE912955AE675D8A7F03FEACAAA4F2E467DE3BED5 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m146E2C307B585380552FB2583AC8FFCE97CD9B71 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mCB88FC274D037CA1454EC1B65FA7E4DC05EA24B2 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::ResizeIfNeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m9E7337B6BB355BC2709EB94FA89CDBA53373C488 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, float ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m0348AB4C6BF62E5C7B694F32021D3E916AFDD5BF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, double ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m5AF14BD8B161587937F7531179879F184A00CB80 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, int64_t ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m59A64F0461706FC093C0D07BB72F5E73CD1A5355 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, uint64_t ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, int32_t ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m5D49922DCC201E5EAD09673049709C364D7F6C2B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, uint32_t ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_mAFEB08B4B83557A2DE56D0184BBD0502239F4432 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, uint16_t ___2_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.FastBitConverter::GetBytes(System.Byte[],System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBitConverter_GetBytes_m4994C17769ECC7FD88658603E04C5CB1FCFDB8E7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_startIndex, int16_t ___2_value, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, RuntimeArray* ___0_arr, int32_t ___1_sz, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0363C535F50B54ADE25B798FE915DD5F44C3E67E (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0D6FB9A38A8E3695AB15F993E07B15B059DCF1C4 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, String_t* ___0_value, int32_t ___1_maxLength, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>::.ctor()
inline void Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4 (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951*, const RuntimeMethod*))Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared)(__this, method);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mAA76478A51CF1FB20AC3BACE500372304165E227 (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mAF76FAA200E47115DA26D4557E06B4D886ED8439 (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* __this, int32_t ___0_maxStringLength, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB702FBA6DE5A2796549B6AB3BAB29390901942C2 (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* __this, uint64_t ___0_key, SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951*, uint64_t, SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5**, const RuntimeMethod*))Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.ParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseException__ctor_m8ED6DE7E0C569D47FFBCC0CEFB36054B89887A89 (ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadPacket(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m206C9605EF5B79980E88806C62B9EC7D5615F283 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadPacket(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m2B71725B7C1227473CF780FD9A915A2244FBC4CD (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::Invoke(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_inline (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType>::.ctor()
inline void Dictionary_2__ctor_m18669342C6857F217E5625EA0AD8ED2DD525FBB5 (Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_GetTimeSpan32_mB1470558FF64457DC2A58DEFA8316D51F191C7A2 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m46AA79D2DE54C64DE667B3CF89F5E6E4595B4780 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_m7BE5278F49B27CC52BDBB252ED4E24640A3BBB17 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___1_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_ReceiveTimestamp_m28518CC74140DFEDBA65A56700161E922AFF68B1 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared)(__this, method);
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_OriginTimestamp_m197B753E1FB93333A8C71E80FB00F5956A831934 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Addition_mD8B0E0E30595D82C7336CCCA411FE384441DE1A6 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_Mode(FlyingWormConsole3.LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m1B6AB1ECACD207C0CB5D7EF156D4A8C812C6461A (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_mCD751D64904F8310FA57DF1CA1FADB5459803694 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared)(__this, ___0_value, method);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_mAC3742940FC5B29A1890993B55B14A934774A70E (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_Bytes(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_Bytes_m5DB6D8A635A7BEBA520F0509B46508BB6C42BF37_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mAA50539DD3E9E8D85DEE9E64F3D153570F065FB1_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) ;
// FlyingWormConsole3.LiteNetLib.Utils.NtpMode FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_m87035DFF507EDCB50A20ACBED4E96C6B81685A82 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m347EE1EAF30F02BDEA43D5F8FBFEE852154894F8 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_mC9D6B92A3A8F7C614C6F516917C7465C962E2D57 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_mB909F1CBCCFB444CE0A51409253BA41B220EF087 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// FlyingWormConsole3.LiteNetLib.Utils.NtpLeapIndicator FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_mE780E5229CFAF4136F83BB6FE32C44F468F52F74 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m00F31C44FC7380393A61453B6B70FD7D3F387D42 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333 (double ___0_value, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___0_ticks, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m8C51AD1E162EAC585EF8A5D72ED494E24492F095 (double ___0_value, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_m455597219DFE9922931AF25FC972D7B59767BCAE (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, uint64_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m01746D745E6D9E3B705A31519FF451CFD10C09AD (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___0_value, const RuntimeMethod* method) ;
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_mEB6C67B77E6E27C8EBA34433A64AC157F9C75938 (uint64_t ___0_x, const RuntimeMethod* method) ;
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_m13BC6D34067775610DAFB9CAFF3E0D547ADED2AB (uint32_t ___0_x, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m443C2A6A5BA9A9172E59F1BC1B9C5DE485E5B2E7 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) ;
// System.Int32 FlyingWormConsole3.LiteNetLib.NetSocket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.IPEndPoint,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSocket_SendTo_mEBB7CBE898383F3C5E94F453005B7F3A68C1D469 (NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_size, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___3_remoteEndPoint, int32_t* ___4_errorCode, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketLayerBase__ctor_m8F0B3F00218E79F387DFD9B589BE5AE6FE460593 (PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6* __this, int32_t ___0_extraPacketSizeForLayer, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void FlyingWormConsole3.LiteNetLib.NetDebug::WriteError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDebug_WriteError_m62DA00E10D5835FA1AC29E89788C727754144A42 (String_t* ___0_str, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.CRC32C::Compute(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRC32C_Compute_m6CC796CCAA46C697A467ECD2A30F43DABC51C514 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m0DD3A792F23BE3D9F27897069BAB87EE13C744A0 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mC28876F5A98E49511AD705C719910983A1FE748A (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::SetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_m9DB3995363BB05B8A35B07BF208AD2F4A856E270 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, String_t* ___0_key, const RuntimeMethod* method) ;
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
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataReader_get_RawData_mFCC7E43438E4F27D39F13AC46C02BE2AE425FDAE (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _data; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		return L_0;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_RawDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_RawDataSize_m728651CF1102C180A126D99D000183887DED139E (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _dataSize; }
		int32_t L_0 = __this->____dataSize_2;
		return L_0;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_UserDataOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_UserDataOffset_m2F61D071F72CDAB002C687C1E1A0C68D1E1503C3 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _offset; }
		int32_t L_0 = __this->____offset_3;
		return L_0;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_UserDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_UserDataSize_m18C161D9128CE869A3A5B3C69BF2F022BC80D713 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _dataSize - _offset; }
		int32_t L_0 = __this->____dataSize_2;
		int32_t L_1 = __this->____offset_3;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_get_IsNull_m517ED57B80A4962D1895821C8E4D594E6EC824BB (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _data == null; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		return (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_Position_mB70C27C6303CE017D5212C0860B255CFAB581BEB (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _position; }
		int32_t L_0 = __this->____position_1;
		return L_0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_EndOfData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_get_EndOfData_m323973957764E0A87772EA0E727BA9E9CCDF6432 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _position == _dataSize; }
		int32_t L_0 = __this->____position_1;
		int32_t L_1 = __this->____dataSize_2;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// get { return _dataSize - _position; }
		int32_t L_0 = __this->____dataSize_2;
		int32_t L_1 = __this->____position_1;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SkipBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SkipBytes_m7259816B798B8C967B0C6F7F7691CF1E688C102A (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		// _position += count;
		int32_t L_0 = __this->____position_1;
		int32_t L_1 = ___0_count;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mBB8783DD38E3E8036B963E9DB1E9938BEB3016DB (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* ___0_dataWriter, const RuntimeMethod* method) 
{
	{
		// _data = dataWriter.Data;
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_0 = ___0_dataWriter;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = NetDataWriter_get_Data_m57195A7D8184C5AFAE3D3DEF4069D8AD9A7390AD_inline(L_0, NULL);
		__this->____data_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_1);
		// _position = 0;
		__this->____position_1 = 0;
		// _offset = 0;
		__this->____offset_3 = 0;
		// _dataSize = dataWriter.Length;
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_2 = ___0_dataWriter;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NetDataWriter_get_Length_m7947782000AC2E7C7B6152A12F4FCA2064948AEC_inline(L_2, NULL);
		__this->____dataSize_2 = L_3;
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mF38EADB55AB83471FB3659699E2D72CB729F6EB2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, const RuntimeMethod* method) 
{
	{
		// _data = source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		__this->____data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_0);
		// _position = 0;
		__this->____position_1 = 0;
		// _offset = 0;
		__this->____offset_3 = 0;
		// _dataSize = source.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_source;
		NullCheck(L_1);
		__this->____dataSize_2 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_mAE98AD0CF76E7AD14F84DBD771B680A060C27361 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		// _data = source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		__this->____data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_0);
		// _position = offset;
		int32_t L_1 = ___1_offset;
		__this->____position_1 = L_1;
		// _offset = offset;
		int32_t L_2 = ___1_offset;
		__this->____offset_3 = L_2;
		// _dataSize = source.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_source;
		NullCheck(L_3);
		__this->____dataSize_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::SetSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_SetSource_m001BD5F3E22403AF65DD828572FC45C5D1AE0410 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_maxSize, const RuntimeMethod* method) 
{
	{
		// _data = source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		__this->____data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_0);
		// _position = offset;
		int32_t L_1 = ___1_offset;
		__this->____position_1 = L_1;
		// _offset = offset;
		int32_t L_2 = ___1_offset;
		__this->____offset_3 = L_2;
		// _dataSize = maxSize;
		int32_t L_3 = ___2_maxSize;
		__this->____dataSize_2 = L_3;
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_mC18C3570B76F344A79A2CAF499A4596EC2DEDDC4 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// public NetDataReader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::.ctor(FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_m8117F7BAD8EDFD07314F8F7A87E93CC7ED182A6F (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* ___0_writer, const RuntimeMethod* method) 
{
	{
		// public NetDataReader(NetDataWriter writer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetSource(writer);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_0 = ___0_writer;
		NetDataReader_SetSource_mBB8783DD38E3E8036B963E9DB1E9938BEB3016DB(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_mFFF7A6517EC47CFE745479E10B4EF77FC00306E0 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, const RuntimeMethod* method) 
{
	{
		// public NetDataReader(byte[] source)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetSource(source);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		NetDataReader_SetSource_mF38EADB55AB83471FB3659699E2D72CB729F6EB2(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_mC2DED90CF11DE4518BB8A5506027478E0A06262C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, const RuntimeMethod* method) 
{
	{
		// public NetDataReader(byte[] source, int offset)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetSource(source, offset);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		int32_t L_1 = ___1_offset;
		NetDataReader_SetSource_mAE98AD0CF76E7AD14F84DBD771B680A060C27361(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader__ctor_m1AF4A3028552C2D5CDC0B3F904A2243543027E0E (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_maxSize, const RuntimeMethod* method) 
{
	{
		// public NetDataReader(byte[] source, int offset, int maxSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SetSource(source, offset, maxSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_maxSize;
		NetDataReader_SetSource_m001BD5F3E22403AF65DD828572FC45C5D1AE0410(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Net.IPEndPoint FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetNetEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* NetDataReader_GetNetEndPoint_m0DA1B4D9613C68CC247343D0F49987323F2100E6 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetUtils_tD42EC79AFBE1C8BD1B0E41B25106D1FB1433BDDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// string host = GetString(1000);
		String_t* L_0;
		L_0 = NetDataReader_GetString_m19541292BC49A3CE2F5A6EEE17B474171A6C63D5(__this, ((int32_t)1000), NULL);
		// int port = GetInt();
		int32_t L_1;
		L_1 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		V_0 = L_1;
		// return NetUtils.MakeEndPoint(host, port);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NetUtils_tD42EC79AFBE1C8BD1B0E41B25106D1FB1433BDDF_il2cpp_TypeInfo_var);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3;
		L_3 = NetUtils_MakeEndPoint_m1492198D9A8B27F17188F13F959508FCA7C7AF76(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Byte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_GetByte_m06FB4658EC622986718080254ECFD259DD406BF6 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// byte res = _data[_position];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position += 1;
		int32_t L_4 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// return res;
		return L_3;
	}
}
// System.SByte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_GetSByte_m06DBC7E501228FAD46AD4547131711438B10D650 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// var b = (sbyte)_data[_position];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position++;
		int32_t L_4 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// return b;
		return ((int8_t)L_3);
	}
}
// System.Boolean[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBoolArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* NetDataReader_GetBoolArray_m5D63E1C16153C7B111D7333929416DDA1D3C3CF1 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new bool[size];
		uint16_t L_4 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		// _position += size;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, (int32_t)L_11));
		// return arr;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = V_1;
		return L_12;
	}
}
// System.UInt16[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUShortArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* NetDataReader_GetUShortArray_m8F8A9423DCED64763AD8CA5D6BFC4E455F896D35 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new ushort[size];
		uint16_t L_4 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 2)), NULL);
		// _position += size * 2;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 2))));
		// return arr;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = V_1;
		return L_12;
	}
}
// System.Int16[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetShortArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* NetDataReader_GetShortArray_m142ADA2043A302BC6B0CA3F1838939DFEE5467A8 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new short[size];
		uint16_t L_4 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 2)), NULL);
		// _position += size * 2;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 2))));
		// return arr;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = V_1;
		return L_12;
	}
}
// System.Int64[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetLongArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* NetDataReader_GetLongArray_mA78C6F80AD823687EB8265390D0C8C8826A7189D (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new long[size];
		uint16_t L_4 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 8)), NULL);
		// _position += size * 8;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 8))));
		// return arr;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = V_1;
		return L_12;
	}
}
// System.UInt64[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetULongArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* NetDataReader_GetULongArray_mDAAE54AB0DC6308F3CBBB1D6E85C830A71F1B5C2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new ulong[size];
		uint16_t L_4 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 8)), NULL);
		// _position += size * 8;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 8))));
		// return arr;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_1;
		return L_12;
	}
}
// System.Int32[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetIntArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetDataReader_GetIntArray_m886CE6ED6B4384BDC2A54E6D4626D19116AF3DE5 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new int[size];
		uint16_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 4)), NULL);
		// _position += size * 4;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 4))));
		// return arr;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		return L_12;
	}
}
// System.UInt32[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUIntArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* NetDataReader_GetUIntArray_m491D896EA35FA673C7F3D463A86B6B6380E66179 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new uint[size];
		uint16_t L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 4)), NULL);
		// _position += size * 4;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 4))));
		// return arr;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		return L_12;
	}
}
// System.Single[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetFloatArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* NetDataReader_GetFloatArray_mAA70D51F37419419A22CC6B47D95E1DA501725AA (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new float[size];
		uint16_t L_4 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 4)), NULL);
		// _position += size * 4;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 4))));
		// return arr;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_1;
		return L_12;
	}
}
// System.Double[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetDoubleArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* NetDataReader_GetDoubleArray_mDC51865C0B49AE6CD01E2EED4CBA72ADCA2DE578 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new double[size];
		uint16_t L_4 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// Buffer.BlockCopy(_data, _position, arr, 0, size * 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = V_1;
		uint16_t L_9 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 8)), NULL);
		// _position += size * 8;
		int32_t L_10 = __this->____position_1;
		uint16_t L_11 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, 8))));
		// return arr;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = V_1;
		return L_12;
	}
}
// System.String[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetStringArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NetDataReader_GetStringArray_m11566DEBE91FF12AB1058AE08D8010990AEC7E17 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new string[size];
		uint16_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < size; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_002b:
	{
		// arr[i] = GetString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8;
		L_8 = NetDataReader_GetString_mE8A0E283EB6059B7D6449F895FB6AACF7A0C795C(__this, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_8);
		// for (int i = 0; i < size; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_2;
		uint16_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		// return arr;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		return L_12;
	}
}
// System.String[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetStringArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NetDataReader_GetStringArray_m443502EEC3059A7F76C6ED860D325AC44525A225 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t ___0_maxStringLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// ushort size = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		V_0 = L_2;
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// var arr = new string[size];
		uint16_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int i = 0; i < size; i++)
		V_2 = 0;
		goto IL_0039;
	}

IL_002b:
	{
		// arr[i] = GetString(maxStringLength);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = ___0_maxStringLength;
		String_t* L_9;
		L_9 = NetDataReader_GetString_m19541292BC49A3CE2F5A6EEE17B474171A6C63D5(__this, L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (String_t*)L_9);
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_11 = V_2;
		uint16_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_002b;
		}
	}
	{
		// return arr;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		return L_13;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_GetBool_m0A6A345E1F2AC6472D3A454AEF7F9C87241C5F4C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// bool res = _data[_position] > 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// _position += 1;
		int32_t L_4 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// return res;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Char FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_GetChar_mA1AAFAF04C9ACCF416B0EE481F6D7C6284DA2E03 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// char result = BitConverter.ToChar(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = BitConverter_ToChar_m2D9C2CDBB4F3306BBE74D305B3B5A08D458A5670(L_0, L_1, NULL);
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// return result;
		return L_2;
	}
}
// System.UInt16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_GetUShort_m01E2634AB533AC3ED170991D133981BB0D000DC4 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ushort result = BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// return result;
		return L_2;
	}
}
// System.Int16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_GetShort_mE2FEF7B9AFA93170712E89277FE1C61C5D0FCAE8 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// short result = BitConverter.ToInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_0, L_1, NULL);
		// _position += 2;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// return result;
		return L_2;
	}
}
// System.Int64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_GetLong_m1B2BE011BE6E224D9FAE094DC1EECE9C3B473259 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// long result = BitConverter.ToInt64(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0(L_0, L_1, NULL);
		// _position += 8;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// return result;
		return L_2;
	}
}
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_GetULong_mEDAAFDA63ECC73E4FFFD0557116F0C80DE08C8A2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ulong result = BitConverter.ToUInt64(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_0, L_1, NULL);
		// _position += 8;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// return result;
		return L_2;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int result = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_0, L_1, NULL);
		// _position += 4;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// return result;
		return L_2;
	}
}
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_GetUInt_mDE5E7DFB66C920FA43257752522AD792CA8AA1E2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uint result = BitConverter.ToUInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_0, L_1, NULL);
		// _position += 4;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// return result;
		return L_2;
	}
}
// System.Single FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_GetFloat_m44A56D47D422411B6ED9B633BFA5A64AC3AFE570 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float result = BitConverter.ToSingle(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_0, L_1, NULL);
		// _position += 4;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// return result;
		return L_2;
	}
}
// System.Double FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_GetDouble_m7F09CDB38083D759FF6E9EA5C572553FFE9B0055 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// double result = BitConverter.ToDouble(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8(L_0, L_1, NULL);
		// _position += 8;
		int32_t L_3 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_3, 8));
		// return result;
		return L_2;
	}
}
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_m19541292BC49A3CE2F5A6EEE17B474171A6C63D5 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t ___0_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = GetInt();
		int32_t L_0;
		L_0 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		V_0 = L_0;
		// if (bytesCount <= 0 || bytesCount > maxLength*2)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_maxLength;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, 2)))))
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_0017:
	{
		// int charCount = Encoding.UTF8.GetCharCount(_data, _position, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, L_8);
		// if (charCount > maxLength)
		int32_t L_10 = ___0_maxLength;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0037;
		}
	}
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_11;
	}

IL_0037:
	{
		// string result = Encoding.UTF8.GetString(_data, _position, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____data_0;
		int32_t L_14 = __this->____position_1;
		int32_t L_15 = V_0;
		NullCheck(L_12);
		String_t* L_16;
		L_16 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, L_14, L_15);
		// _position += bytesCount;
		int32_t L_17 = __this->____position_1;
		int32_t L_18 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		// return result;
		return L_16;
	}
}
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_GetString_mE8A0E283EB6059B7D6449F895FB6AACF7A0C795C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = GetInt();
		int32_t L_0;
		L_0 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		V_0 = L_0;
		// if (bytesCount <= 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0011:
	{
		// string result = Encoding.UTF8.GetString(_data, _position, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data_0;
		int32_t L_5 = __this->____position_1;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		// _position += bytesCount;
		int32_t L_8 = __this->____position_1;
		int32_t L_9 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		// return result;
		return L_7;
	}
}
// System.ArraySegment`1<System.Byte> FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetRemainingBytesSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 NetDataReader_GetRemainingBytesSegment_mA290387648946F3B8A8C3F8E61D0AF44BD74BDB2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArraySegment<byte> segment = new ArraySegment<byte>(_data, _position, AvailableBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		int32_t L_2;
		L_2 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_3), L_0, L_1, L_2, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// _position = _data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data_0;
		NullCheck(L_4);
		__this->____position_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// return segment;
		return L_3;
	}
}
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetRemainingBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataReader_GetRemainingBytes_m63080D2F8E6F8DDA65850045309E95F0D2A81A39 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] outgoingData = new byte[AvailableBytes];
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, AvailableBytes);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, L_5, NULL);
		// _position = _data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		NullCheck(L_6);
		__this->____position_1 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		// return outgoingData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_GetBytes_m772AAA86FA31E467C5F6089D68D5722AAB003F95 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_destination, int32_t ___1_start, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		// Buffer.BlockCopy(_data, _position, destination, start, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_destination;
		int32_t L_3 = ___1_start;
		int32_t L_4 = ___2_count;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		// _position += count;
		int32_t L_5 = __this->____position_1;
		int32_t L_6 = ___2_count;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBytes(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_GetBytes_mFE126307DEA5B8702FA50EB872E267A2AE28F6A7 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_destination, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		// Buffer.BlockCopy(_data, _position, destination, 0, count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_destination;
		int32_t L_3 = ___1_count;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, L_3, NULL);
		// _position += count;
		int32_t L_4 = __this->____position_1;
		int32_t L_5 = ___1_count;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
// System.SByte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetSBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* NetDataReader_GetSBytesWithLength_mA2AE6EC54D99D8A3B6F5B98462B0402AF24F6E8C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	{
		// int length = GetInt();
		int32_t L_0;
		L_0 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		V_0 = L_0;
		// sbyte[] outgoingData = new sbyte[length];
		int32_t L_1 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
		// _position += length;
		int32_t L_7 = __this->____position_1;
		int32_t L_8 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// return outgoingData;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::GetBytesWithLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataReader_GetBytesWithLength_m4B076429B78EDBEFB110F065B7024A4C147EB075 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// int length = GetInt();
		int32_t L_0;
		L_0 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		V_0 = L_0;
		// byte[] outgoingData = new byte[length];
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		// Buffer.BlockCopy(_data, _position, outgoingData, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
		// _position += length;
		int32_t L_7 = __this->____position_1;
		int32_t L_8 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// return outgoingData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		return L_9;
	}
}
// System.Byte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetDataReader_PeekByte_m39F9AE86F18E463265455B985CB5D2B4372C2798 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// return _data[_position];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.SByte FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t NetDataReader_PeekSByte_mC017D7C50F1AFC9B6737294182EF64C1966695EA (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// return (sbyte)_data[_position];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int8_t)L_3);
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_PeekBool_m085B3F33F20971F064B41D45666D1A56A8BBDB6F (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// return _data[_position] > 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Char FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar NetDataReader_PeekChar_m67F83E25FF22E5EBFC41F9F84F85223C1C5F3D92 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToChar(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = BitConverter_ToChar_m2D9C2CDBB4F3306BBE74D305B3B5A08D458A5670(L_0, L_1, NULL);
		return L_2;
	}
}
// System.UInt16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekUShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetDataReader_PeekUShort_m9CEFE3BA45F909836556A50A1DFFCA5883915089 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = BitConverter_ToUInt16_m1B08C19B8743A604FBC3807C22A831BD8DA5819D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int16 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetDataReader_PeekShort_m33D468D061BA6E27D1EE0416E7CAC91EB7C964A6 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt16(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = BitConverter_ToInt16_m13F278223B819C82CC647398B22C125B02FA2E61(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetDataReader_PeekLong_m0FA8048A1EC852A431F94F1E3B0C0933169AD941 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt64(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = BitConverter_ToInt64_mA375995608A3E81761CCA7776461290AC5B262F0(L_0, L_1, NULL);
		return L_2;
	}
}
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetDataReader_PeekULong_m318A757B809660F1A2D7CCCA352498C6AFF6102C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt64(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataReader_PeekInt_m55892788150A79450F06BCF4B1D0C5182444AD51 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekUInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetDataReader_PeekUInt_m696B0CAD1C471715698AE543609456FD210FBA53 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToUInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetDataReader_PeekFloat_m1BE3A8482ECA0D534ACEAA46377786CD2E6A7E51 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToSingle(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Double FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetDataReader_PeekDouble_m3A6016CBEB7E5AF7C7D00646EA76185C410959B2 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BitConverter.ToDouble(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = BitConverter_ToDouble_m2F701E24FFE424C6EBDA6CD76CCA029947A535A8(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_PeekString_m6A4A2B2F712A071B0871811F1BB383812056631C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t ___0_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_0, L_1, NULL);
		V_0 = L_2;
		// if (bytesCount <= 0 || bytesCount > maxLength * 2)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_maxLength;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_5, 2)))))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		// return string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_6;
	}

IL_0022:
	{
		// int charCount = Encoding.UTF8.GetCharCount(_data, _position + 4, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____data_0;
		int32_t L_9 = __this->____position_1;
		int32_t L_10 = V_0;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(20 /* System.Int32 System.Text.Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, ((int32_t)il2cpp_codegen_add(L_9, 4)), L_10);
		// if (charCount > maxLength)
		int32_t L_12 = ___0_maxLength;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		// return string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_13;
	}

IL_0044:
	{
		// string result = Encoding.UTF8.GetString(_data, _position + 4, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____data_0;
		int32_t L_16 = __this->____position_1;
		int32_t L_17 = V_0;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, ((int32_t)il2cpp_codegen_add(L_16, 4)), L_17);
		// return result;
		return L_18;
	}
}
// System.String FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::PeekString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetDataReader_PeekString_m323E1AF0864CD0DB6F8997DFEAB82416A60DA0B1 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bytesCount = BitConverter.ToInt32(_data, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		int32_t L_1 = __this->____position_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_0, L_1, NULL);
		V_0 = L_2;
		// if (bytesCount <= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001c:
	{
		// string result = Encoding.UTF8.GetString(_data, _position + 4, bytesCount);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____data_0;
		int32_t L_7 = __this->____position_1;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		String_t* L_9;
		L_9 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), L_8);
		// return result;
		return L_9;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetByte(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetByte_m4FBA7C7EC51A11D1C6A49D4325543FBC2BCE99C7 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, uint8_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetByte();
		uint8_t* L_1 = ___0_result;
		uint8_t L_2;
		L_2 = NetDataReader_GetByte_m06FB4658EC622986718080254ECFD259DD406BF6(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint8_t* L_3 = ___0_result;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetSByte(System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetSByte_m7F0D8794955535086C9591EAFC625F6896B849B1 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int8_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetSByte();
		int8_t* L_1 = ___0_result;
		int8_t L_2;
		L_2 = NetDataReader_GetSByte_m06DBC7E501228FAD46AD4547131711438B10D650(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int8_t* L_3 = ___0_result;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetBool(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetBool_m10FD2921CED664DE167E38CD1A47CCDEBB24F584 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 1)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetBool();
		bool* L_1 = ___0_result;
		bool L_2;
		L_2 = NetDataReader_GetBool_m0A6A345E1F2AC6472D3A454AEF7F9C87241C5F4C(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = false;
		bool* L_3 = ___0_result;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetChar(System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetChar_mE9D6909ED4DF517DAAB793786D6EDA8492CB5567 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, Il2CppChar* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetChar();
		Il2CppChar* L_1 = ___0_result;
		Il2CppChar L_2;
		L_2 = NetDataReader_GetChar_mA1AAFAF04C9ACCF416B0EE481F6D7C6284DA2E03(__this, NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = '\0';
		Il2CppChar* L_3 = ___0_result;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetShort(System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetShort_m8738B9CEFEFBAF2701681B34C3B58946D25EF4D6 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int16_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetShort();
		int16_t* L_1 = ___0_result;
		int16_t L_2;
		L_2 = NetDataReader_GetShort_mE2FEF7B9AFA93170712E89277FE1C61C5D0FCAE8(__this, NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int16_t* L_3 = ___0_result;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetUShort(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUShort_m45ED0659977BEA633E6E00C3CDCA9F74ECF92B53 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, uint16_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 2)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetUShort();
		uint16_t* L_1 = ___0_result;
		uint16_t L_2;
		L_2 = NetDataReader_GetUShort_m01E2634AB533AC3ED170991D133981BB0D000DC4(__this, NULL);
		*((int16_t*)L_1) = (int16_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint16_t* L_3 = ___0_result;
		*((int16_t*)L_3) = (int16_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetInt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetInt_m936AFD7080C992EF857D8A225133E88DE25305C8 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetInt();
		int32_t* L_1 = ___0_result;
		int32_t L_2;
		L_2 = NetDataReader_GetInt_m92B368B698EC12119AC71237D7ADC180941F471A(__this, NULL);
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int32_t* L_3 = ___0_result;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetUInt(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetUInt_m1FEAE461137E72D14D34E13C500E1D34EAADBD00 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetUInt();
		uint32_t* L_1 = ___0_result;
		uint32_t L_2;
		L_2 = NetDataReader_GetUInt_mDE5E7DFB66C920FA43257752522AD792CA8AA1E2(__this, NULL);
		*((int32_t*)L_1) = (int32_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint32_t* L_3 = ___0_result;
		*((int32_t*)L_3) = (int32_t)0;
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetLong(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetLong_m8242FE142740363F0022C2F7AEEE5AFC4F16A169 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, int64_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetLong();
		int64_t* L_1 = ___0_result;
		int64_t L_2;
		L_2 = NetDataReader_GetLong_m1B2BE011BE6E224D9FAE094DC1EECE9C3B473259(__this, NULL);
		*((int64_t*)L_1) = (int64_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		int64_t* L_3 = ___0_result;
		*((int64_t*)L_3) = (int64_t)((int64_t)0);
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetULong(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetULong_mA1D3E2C607CE45C543653F52C6376A021AF17616 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, uint64_t* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetULong();
		uint64_t* L_1 = ___0_result;
		uint64_t L_2;
		L_2 = NetDataReader_GetULong_mEDAAFDA63ECC73E4FFFD0557116F0C80DE08C8A2(__this, NULL);
		*((int64_t*)L_1) = (int64_t)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		uint64_t* L_3 = ___0_result;
		*((int64_t*)L_3) = (int64_t)((int64_t)0);
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetFloat_m4FA9FFE94224703E10C124A3B8643DADAFD68186 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, float* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 4)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetFloat();
		float* L_1 = ___0_result;
		float L_2;
		L_2 = NetDataReader_GetFloat_m44A56D47D422411B6ED9B633BFA5A64AC3AFE570(__this, NULL);
		*((float*)L_1) = (float)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		float* L_3 = ___0_result;
		*((float*)L_3) = (float)(0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetDouble(System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetDouble_m3053A50734B00F3AF8CD420820DB130CD1BB822C (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, double* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (AvailableBytes >= 8)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0013;
		}
	}
	{
		// result = GetDouble();
		double* L_1 = ___0_result;
		double L_2;
		L_2 = NetDataReader_GetDouble_m7F09CDB38083D759FF6E9EA5C572553FFE9B0055(__this, NULL);
		*((double*)L_1) = (double)L_2;
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// result = 0;
		double* L_3 = ___0_result;
		*((double*)L_3) = (double)(0.0);
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetString(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetString_m7BB02F8DD26F7D8F32FCBD644B5DCE1C9CB557F1 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, String_t** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (AvailableBytes >= 4)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0025;
		}
	}
	{
		// var bytesCount = PeekInt();
		int32_t L_1;
		L_1 = NetDataReader_PeekInt_m55892788150A79450F06BCF4B1D0C5182444AD51(__this, NULL);
		V_0 = L_1;
		// if (AvailableBytes >= bytesCount + 4)
		int32_t L_2;
		L_2 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_add(L_3, 4)))))
		{
			goto IL_0025;
		}
	}
	{
		// result = GetString();
		String_t** L_4 = ___0_result;
		String_t* L_5;
		L_5 = NetDataReader_GetString_mE8A0E283EB6059B7D6449F895FB6AACF7A0C795C(__this, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_5);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// result = null;
		String_t** L_6 = ___0_result;
		*((RuntimeObject**)L_6) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetStringArray(System.String[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetStringArray_m5C4300A39FD28E623AA3D3F215B808EDC927621A (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!TryGetUShort(out size))
		bool L_0;
		L_0 = NetDataReader_TryGetUShort_m45ED0659977BEA633E6E00C3CDCA9F74ECF92B53(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// result = null;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_1 = ___0_result;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// result = new string[size];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_2 = ___0_result;
		uint16_t L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		// for (int i = 0; i < size; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		// if (!TryGetString(out result[i]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_5 = ___0_result;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = *((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = NetDataReader_TryGetString_m7BB02F8DD26F7D8F32FCBD644B5DCE1C9CB557F1(__this, ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		// result = null;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_9 = ___0_result;
		*((RuntimeObject**)L_9) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}

IL_0030:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_11 = V_1;
		uint16_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::TryGetBytesWithLength(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetDataReader_TryGetBytesWithLength_m4559B25C4CA80ED02AAEE765F8DABBCC30CECD27 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (AvailableBytes >= 4)
		int32_t L_0;
		L_0 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_0029;
		}
	}
	{
		// var length = PeekInt();
		int32_t L_1;
		L_1 = NetDataReader_PeekInt_m55892788150A79450F06BCF4B1D0C5182444AD51(__this, NULL);
		V_0 = L_1;
		// if (length >= 0 && AvailableBytes >= length + 4)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3;
		L_3 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, 4)))))
		{
			goto IL_0029;
		}
	}
	{
		// result = GetBytesWithLength();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_5 = ___0_result;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = NetDataReader_GetBytesWithLength_m4B076429B78EDBEFB110F065B7024A4C147EB075(__this, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// result = null;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_7 = ___0_result;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataReader::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataReader_Clear_mD4D12B8F7FD6D59D8E38C748FC4D6855A25512C3 (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* __this, const RuntimeMethod* method) 
{
	{
		// _position = 0;
		__this->____position_1 = 0;
		// _dataSize = 0;
		__this->____dataSize_2 = 0;
		// _data = null;
		__this->____data_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
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
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Capacity_m86DDB76FC043CF64BF06D9D413F2A12B0A5D83AB (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _data.Length; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m146E2C307B585380552FB2583AC8FFCE97CD9B71 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// public NetDataWriter() : this(true, InitialSize)
		NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24(__this, (bool)1, ((int32_t)64), NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m40FACC9C433123C2F55D55F113C3E111B3496B78 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, bool ___0_autoResize, const RuntimeMethod* method) 
{
	{
		// public NetDataWriter(bool autoResize) : this(autoResize, InitialSize)
		bool L_0 = ___0_autoResize;
		NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24(__this, L_0, ((int32_t)64), NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, bool ___0_autoResize, int32_t ___1_initialSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NetDataWriter(bool autoResize, int initialSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _data = new byte[initialSize];
		int32_t L_0 = ___1_initialSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____data_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_0), (void*)L_1);
		// _autoResize = autoResize;
		bool L_2 = ___0_autoResize;
		__this->____autoResize_3 = L_2;
		// }
		return;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::FromBytes(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* NetDataWriter_FromBytes_mEC8EE8F6968BB420427031D6FB7FD377C30A4E6A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, bool ___1_copy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (copy)
		bool L_0 = ___1_copy;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// var netDataWriter = new NetDataWriter(true, bytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_2 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24(L_2, (bool)1, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// netDataWriter.Put(bytes);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bytes;
		NullCheck(L_3);
		NetDataWriter_Put_m3D5E4569AAE00E996F2C31B62D003DE00D942184(L_3, L_4, NULL);
		// return netDataWriter;
		return L_3;
	}

IL_0014:
	{
		// return new NetDataWriter(true, 0) {_data = bytes, _position = bytes.Length};
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_5 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24(L_5, (bool)1, 0, NULL);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_6 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_bytes;
		NullCheck(L_6);
		L_6->____data_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____data_0), (void*)L_7);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_8 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bytes;
		NullCheck(L_9);
		NullCheck(L_8);
		L_8->____position_1 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		return L_8;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::FromBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* NetDataWriter_FromBytes_mF6E5D32C1DF771BB906EB1C66A2BBECA9DA7EB09 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var netDataWriter = new NetDataWriter(true, bytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		NullCheck(L_0);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_1 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetDataWriter__ctor_m4693B3955597A9E39B4BE364F76A0499DDEAED24(L_1, (bool)1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		// netDataWriter.Put(bytes, offset, length);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bytes;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_length;
		NullCheck(L_2);
		NetDataWriter_Put_mE912955AE675D8A7F03FEACAAA4F2E467DE3BED5(L_2, L_3, L_4, L_5, NULL);
		// return netDataWriter;
		return L_2;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* NetDataWriter_FromString_m1B2E88BFAA8E0377E7FF0295446A1C79746C4E6C (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var netDataWriter = new NetDataWriter();
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_0 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetDataWriter__ctor_m146E2C307B585380552FB2583AC8FFCE97CD9B71(L_0, NULL);
		// netDataWriter.Put(value);
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_1 = L_0;
		String_t* L_2 = ___0_value;
		NullCheck(L_1);
		NetDataWriter_Put_mCB88FC274D037CA1454EC1B65FA7E4DC05EA24B2(L_1, L_2, NULL);
		// return netDataWriter;
		return L_1;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::ResizeIfNeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int len = _data.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// if (len < newSize)
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_newSize;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0013;
	}

IL_000f:
	{
		// len *= 2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, 2));
	}

IL_0013:
	{
		// while (len < newSize)
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_newSize;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000f;
		}
	}
	{
		// Array.Resize(ref _data, len);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = (&__this->____data_0);
		int32_t L_7 = V_0;
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_6, L_7, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Reset_m938B4ED7D460121D58BC7F19262C16E8DE7419CD (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// ResizeIfNeed(size);
		int32_t L_0 = ___0_size;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, L_0, NULL);
		// _position = 0;
		__this->____position_1 = 0;
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Reset_m69EA7248D68C44F08DDBE5FAAE5F87A369923C36 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// _position = 0;
		__this->____position_1 = 0;
		// }
		return;
	}
}
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::CopyData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataWriter_CopyData_m77CE8981C270E0C07B88A13E717DB34BC1FBB8F2 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] resultData = new byte[_position];
		int32_t L_0 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Buffer.BlockCopy(_data, 0, resultData, 0, _position);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = __this->____position_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		// return resultData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataWriter_get_Data_m57195A7D8184C5AFAE3D3DEF4069D8AD9A7390AD (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _data; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		return L_0;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m7947782000AC2E7C7B6152A12F4FCA2064948AEC (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _position; }
		int32_t L_0 = __this->____position_1;
		return L_0;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::SetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetDataWriter_SetPosition_m7542764C9E5AAE8BA3566CE2C4AF8653EE75E247 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		// int prevPosition = _position;
		int32_t L_0 = __this->____position_1;
		// _position = position;
		int32_t L_1 = ___0_position;
		__this->____position_1 = L_1;
		// return prevPosition;
		return L_0;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mC931B541169C156FDB3A27F61F9C0BA067346BDC (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 4)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		float L_4 = ___0_value;
		FastBitConverter_GetBytes_m9E7337B6BB355BC2709EB94FA89CDBA53373C488(L_2, L_3, L_4, NULL);
		// _position += 4;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mB4C6F3D165CB5BAFA9BD933217652F5FCA89BBF6 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 8)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		double L_4 = ___0_value;
		FastBitConverter_GetBytes_m0348AB4C6BF62E5C7B694F32021D3E916AFDD5BF(L_2, L_3, L_4, NULL);
		// _position += 8;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE720A5F532ABBD0999BC34E28D8422DA6CEDF630 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 8)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		int64_t L_4 = ___0_value;
		FastBitConverter_GetBytes_m5AF14BD8B161587937F7531179879F184A00CB80(L_2, L_3, L_4, NULL);
		// _position += 8;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m24A30EF5965AF5AD9A5D03733606467660ACAC1B (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 8);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 8)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		uint64_t L_4 = ___0_value;
		FastBitConverter_GetBytes_m59A64F0461706FC093C0D07BB72F5E73CD1A5355(L_2, L_3, L_4, NULL);
		// _position += 8;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 4)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		int32_t L_4 = ___0_value;
		FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF(L_2, L_3, L_4, NULL);
		// _position += 4;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mD2E88613FB5DE7AA25A9EF7B3F5ABC07A56032EE (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 4);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 4)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		uint32_t L_4 = ___0_value;
		FastBitConverter_GetBytes_m5D49922DCC201E5EAD09673049709C364D7F6C2B(L_2, L_3, L_4, NULL);
		// _position += 4;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m6C6521251F58F8AD04437F9E4452B45ACA9B5F7A (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 2)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		Il2CppChar L_4 = ___0_value;
		FastBitConverter_GetBytes_mAFEB08B4B83557A2DE56D0184BBD0502239F4432(L_2, L_3, L_4, NULL);
		// _position += 2;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0363C535F50B54ADE25B798FE915DD5F44C3E67E (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 2)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		uint16_t L_4 = ___0_value;
		FastBitConverter_GetBytes_mAFEB08B4B83557A2DE56D0184BBD0502239F4432(L_2, L_3, L_4, NULL);
		// _position += 2;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE287F34D5347D70F4056DE096641AB9FA559F059 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 2);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 2)), NULL);
	}

IL_0016:
	{
		// FastBitConverter.GetBytes(_data, _position, value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		int16_t L_4 = ___0_value;
		FastBitConverter_GetBytes_m4994C17769ECC7FD88658603E04C5CB1FCFDB8E7(L_2, L_3, L_4, NULL);
		// _position += 2;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m5CDEB2E053C7F06868CDDA4057010515B769AE52 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
	}

IL_0016:
	{
		// _data[_position] = (byte)value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		int8_t L_4 = ___0_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		// _position++;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m5FACE51BA7FB5127D677EC985ADAB8F96EA7AF28 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
	}

IL_0016:
	{
		// _data[_position] = value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		uint8_t L_4 = ___0_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// _position++;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mE912955AE675D8A7F03FEACAAA4F2E467DE3BED5 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + length);
		int32_t L_1 = __this->____position_1;
		int32_t L_2 = ___2_length;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
	}

IL_0016:
	{
		// Buffer.BlockCopy(data, offset, _data, _position, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		int32_t L_4 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____data_0;
		int32_t L_6 = __this->____position_1;
		int32_t L_7 = ___2_length;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, L_6, L_7, NULL);
		// _position += length;
		int32_t L_8 = __this->____position_1;
		int32_t L_9 = ___2_length;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m3D5E4569AAE00E996F2C31B62D003DE00D942184 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length);
		int32_t L_1 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)))), NULL);
	}

IL_0018:
	{
		// Buffer.BlockCopy(data, 0, _data, _position, data.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____data_0;
		int32_t L_5 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		NullCheck(L_6);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		// _position += data.Length;
		int32_t L_7 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_data;
		NullCheck(L_8);
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutSBytesWithLength(System.SByte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutSBytesWithLength_m0A97B2590F3B9EDD8A610F0161A474391952435F (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_data, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + length + 4);
		int32_t L_1 = __this->____position_1;
		int32_t L_2 = ___2_length;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 4)), NULL);
	}

IL_0018:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		int32_t L_5 = ___2_length;
		FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF(L_3, L_4, L_5, NULL);
		// Buffer.BlockCopy(data, offset, _data, _position + 4, length);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ___0_data;
		int32_t L_7 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____data_0;
		int32_t L_9 = __this->____position_1;
		int32_t L_10 = ___2_length;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_add(L_9, 4)), L_10, NULL);
		// _position += length + 4;
		int32_t L_11 = __this->____position_1;
		int32_t L_12 = ___2_length;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_add(L_12, 4))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutSBytesWithLength(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutSBytesWithLength_m9363A1C76EC7AEE397F394B2FF1BA201F212F918 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length + 4);
		int32_t L_1 = __this->____position_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___0_data;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)))), 4)), NULL);
	}

IL_001a:
	{
		// FastBitConverter.GetBytes(_data, _position, data.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = ___0_data;
		NullCheck(L_5);
		FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// Buffer.BlockCopy(data, 0, _data, _position + 4, data.Length);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____data_0;
		int32_t L_8 = __this->____position_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___0_data;
		NullCheck(L_9);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 4)), ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		// _position += data.Length + 4;
		int32_t L_10 = __this->____position_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = ___0_data;
		NullCheck(L_11);
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_11)->max_length)), 4))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutBytesWithLength(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutBytesWithLength_m5A8C52CF6AD80BBEE97B890B01F87726DC2C5F54 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ResizeIfNeed(_position + length + 4);
		int32_t L_1 = __this->____position_1;
		int32_t L_2 = ___2_length;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 4)), NULL);
	}

IL_0018:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		int32_t L_5 = ___2_length;
		FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF(L_3, L_4, L_5, NULL);
		// Buffer.BlockCopy(data, offset, _data, _position + 4, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		int32_t L_7 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____data_0;
		int32_t L_9 = __this->____position_1;
		int32_t L_10 = ___2_length;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_add(L_9, 4)), L_10, NULL);
		// _position += length + 4;
		int32_t L_11 = __this->____position_1;
		int32_t L_12 = ___2_length;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_add(L_12, 4))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutBytesWithLength(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutBytesWithLength_m86C50373E6DD7EAA604BB28AB8720B818EF5350E (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ResizeIfNeed(_position + data.Length + 4);
		int32_t L_1 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_2);
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)))), 4)), NULL);
	}

IL_001a:
	{
		// FastBitConverter.GetBytes(_data, _position, data.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____data_0;
		int32_t L_4 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		NullCheck(L_5);
		FastBitConverter_GetBytes_mFD42D8CB55EEAC59EC3AC9AF768F2BBCC3836FBF(L_3, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// Buffer.BlockCopy(data, 0, _data, _position + 4, data.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____data_0;
		int32_t L_8 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_data;
		NullCheck(L_9);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 4)), ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		// _position += data.Length + 4;
		int32_t L_10 = __this->____position_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_data;
		NullCheck(L_11);
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_11)->max_length)), 4))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m8894FF29DBD7FC3952A0D82437C4C701D9F66C16 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_2 = NULL;
	{
		// if (_autoResize)
		bool L_0 = __this->____autoResize_3;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// ResizeIfNeed(_position + 1);
		int32_t L_1 = __this->____position_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
	}

IL_0016:
	{
		// _data[_position] = (byte)(value ? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____data_0;
		int32_t L_3 = __this->____position_1;
		bool L_4 = ___0_value;
		G_B3_0 = L_3;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_2;
			goto IL_0028;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0029:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (uint8_t)((int32_t)(uint8_t)G_B5_0));
		// _position++;
		int32_t L_5 = __this->____position_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, RuntimeArray* ___0_arr, int32_t ___1_sz, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort length = arr == null ? (ushort) 0 : (ushort)arr.Length;
		RuntimeArray* L_0 = ___0_arr;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeArray* L_1 = ___0_arr;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_1, NULL);
		G_B3_0 = ((int32_t)(uint16_t)L_2);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		V_0 = (uint16_t)G_B3_0;
		// sz *= length;
		int32_t L_3 = ___1_sz;
		uint16_t L_4 = V_0;
		___1_sz = ((int32_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4));
		// if (_autoResize)
		bool L_5 = __this->____autoResize_3;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// ResizeIfNeed(_position + sz + 2);
		int32_t L_6 = __this->____position_1;
		int32_t L_7 = ___1_sz;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, L_7)), 2)), NULL);
	}

IL_002b:
	{
		// FastBitConverter.GetBytes(_data, _position, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____data_0;
		int32_t L_9 = __this->____position_1;
		uint16_t L_10 = V_0;
		FastBitConverter_GetBytes_mAFEB08B4B83557A2DE56D0184BBD0502239F4432(L_8, L_9, L_10, NULL);
		// if (arr != null)
		RuntimeArray* L_11 = ___0_arr;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// Buffer.BlockCopy(arr, 0, _data, _position + 2, sz);
		RuntimeArray* L_12 = ___0_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____data_0;
		int32_t L_14 = __this->____position_1;
		int32_t L_15 = ___1_sz;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358(L_12, 0, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 2)), L_15, NULL);
	}

IL_0056:
	{
		// _position += sz + 2;
		int32_t L_16 = __this->____position_1;
		int32_t L_17 = ___1_sz;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_add(L_17, 2))));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mFA146DC79274C928663816F1815AB1A829743338 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 4, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m91953037F031D128B93BC7D510B1137CC84F9575 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 8);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 8, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mDD88A14061674394B97D0789BB4AF69407700568 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 8);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 8, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m11AE1967E091E2BFD027B0F3C8AD167861ECA1C4 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 8, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mD0AEC64ED0D3596F065CBAA668DEF2C024B8B6BA (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 4, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m1BF7F1BEA8D99EC75DC773CDC8432E1744186E90 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 4, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mC52D2476414A01E71239B205F41686EF63DA09A5 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m15BF14BE1DF89D62B34A238AB64CD48972438289 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m5125ECBD28AB78315EC12615315DBBFD3257AFD4 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_value, const RuntimeMethod* method) 
{
	{
		// PutArray(value, 1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_value;
		NetDataWriter_PutArray_m48347B1BD5A82113D78A2F53F26B14D533DBCC4C(__this, (RuntimeArray*)L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_m2E6E707D514F6B051E9EC14B3B44C5FF6524524F (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort len = value == null ? (ushort)0 : (ushort)value.Length;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_value;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(uint16_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 0;
	}

IL_000a:
	{
		V_0 = (uint16_t)G_B3_0;
		// Put(len);
		uint16_t L_2 = V_0;
		NetDataWriter_Put_m0363C535F50B54ADE25B798FE915DD5F44C3E67E(__this, L_2, NULL);
		// for (int i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_0016:
	{
		// Put(value[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_value;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NetDataWriter_Put_mCB88FC274D037CA1454EC1B65FA7E4DC05EA24B2(__this, L_6, NULL);
		// for (int i = 0; i < len; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_8 = V_1;
		uint16_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::PutArray(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_PutArray_mD42EE0E16121942D9C21EDCA451FE09BEB124169 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, int32_t ___1_maxLength, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// ushort len = value == null ? (ushort)0 : (ushort)value.Length;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_value;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(uint16_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 0;
	}

IL_000a:
	{
		V_0 = (uint16_t)G_B3_0;
		// Put(len);
		uint16_t L_2 = V_0;
		NetDataWriter_Put_m0363C535F50B54ADE25B798FE915DD5F44C3E67E(__this, L_2, NULL);
		// for (int i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0024;
	}

IL_0016:
	{
		// Put(value[i], maxLength);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_value;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___1_maxLength;
		NetDataWriter_Put_m0D6FB9A38A8E3695AB15F993E07B15B059DCF1C4(__this, L_6, L_7, NULL);
		// for (int i = 0; i < len; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0024:
	{
		// for (int i = 0; i < len; i++)
		int32_t L_9 = V_1;
		uint16_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m75186052A5590B811EEA68219743DEF8F8C8DA4B (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, const RuntimeMethod* method) 
{
	{
		// Put(endPoint.Address.ToString());
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___0_endPoint;
		NullCheck(L_0);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NetDataWriter_Put_mCB88FC274D037CA1454EC1B65FA7E4DC05EA24B2(__this, L_2, NULL);
		// Put(endPoint.Port);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = ___0_endPoint;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_3, NULL);
		NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_mCB88FC274D037CA1454EC1B65FA7E4DC05EA24B2 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// Put(0);
		NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008(__this, 0, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int bytesCount = Encoding.UTF8.GetByteCount(value);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___0_value;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(10 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_2, L_3);
		V_0 = L_4;
		// if (_autoResize)
		bool L_5 = __this->____autoResize_3;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// ResizeIfNeed(_position + bytesCount + 4);
		int32_t L_6 = __this->____position_1;
		int32_t L_7 = V_0;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, L_7)), 4)), NULL);
	}

IL_0034:
	{
		// Put(bytesCount);
		int32_t L_8 = V_0;
		NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008(__this, L_8, NULL);
		// Encoding.UTF8.GetBytes(value, 0, value.Length, _data, _position);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
		L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_10 = ___0_value;
		String_t* L_11 = ___0_value;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____data_0;
		int32_t L_14 = __this->____position_1;
		NullCheck(L_9);
		int32_t L_15;
		L_15 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_9, L_10, 0, L_12, L_13, L_14);
		// _position += bytesCount;
		int32_t L_16 = __this->____position_1;
		int32_t L_17 = V_0;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetDataWriter::Put(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetDataWriter_Put_m0D6FB9A38A8E3695AB15F993E07B15B059DCF1C4 (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, String_t* ___0_value, int32_t ___1_maxLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		// if (string.IsNullOrEmpty(value))
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// Put(0);
		NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008(__this, 0, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int length = value.Length > maxLength ? maxLength : value.Length;
		String_t* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4 = ___1_maxLength;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = ___0_value;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		G_B5_0 = L_6;
		goto IL_0022;
	}

IL_0021:
	{
		int32_t L_7 = ___1_maxLength;
		G_B5_0 = L_7;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		// int bytesCount = Encoding.UTF8.GetByteCount(value);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_9 = ___0_value;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(10 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_8, L_9);
		V_1 = L_10;
		// if (_autoResize)
		bool L_11 = __this->____autoResize_3;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// ResizeIfNeed(_position + bytesCount + 4);
		int32_t L_12 = __this->____position_1;
		int32_t L_13 = V_1;
		NetDataWriter_ResizeIfNeed_m96E42C2BACA605D53DBE8296693F137276E920FC(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), 4)), NULL);
	}

IL_0047:
	{
		// Put(bytesCount);
		int32_t L_14 = V_1;
		NetDataWriter_Put_m8E5EC9D4DC507B28075C5BCCD2C6E182761BD008(__this, L_14, NULL);
		// Encoding.UTF8.GetBytes(value, 0, length, _data, _position);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_16 = ___0_value;
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____data_0;
		int32_t L_19 = __this->____position_1;
		NullCheck(L_15);
		int32_t L_20;
		L_20 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_15, L_16, 0, L_17, L_18, L_19);
		// _position += bytesCount;
		int32_t L_21 = __this->____position_1;
		int32_t L_22 = V_1;
		__this->____position_1 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor__ctor_m113956990D1B8056DCD1473668423D843058F103 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<ulong, SubscribeDelegate> _callbacks = new Dictionary<ulong, SubscribeDelegate>();
		Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* L_0 = (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951*)il2cpp_codegen_object_new(Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4(L_0, Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4_RuntimeMethod_var);
		__this->____callbacks_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbacks_1), (void*)L_0);
		// private readonly NetDataWriter _netDataWriter = new NetDataWriter();
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_1 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetDataWriter__ctor_m146E2C307B585380552FB2583AC8FFCE97CD9B71(L_1, NULL);
		__this->____netDataWriter_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____netDataWriter_2), (void*)L_1);
		// public NetPacketProcessor()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _netSerializer = new NetSerializer();
		NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* L_2 = (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9*)il2cpp_codegen_object_new(NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NetSerializer__ctor_mAA76478A51CF1FB20AC3BACE500372304165E227(L_2, NULL);
		__this->____netSerializer_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____netSerializer_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor__ctor_m16CD843F8B8DF5401B56F1A99A911247EEFDE241 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, int32_t ___0_maxStringLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<ulong, SubscribeDelegate> _callbacks = new Dictionary<ulong, SubscribeDelegate>();
		Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* L_0 = (Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951*)il2cpp_codegen_object_new(Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4(L_0, Dictionary_2__ctor_m8EB72C4EC23EFF571DFEDF3AA392DF7D38CB64B4_RuntimeMethod_var);
		__this->____callbacks_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbacks_1), (void*)L_0);
		// private readonly NetDataWriter _netDataWriter = new NetDataWriter();
		NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* L_1 = (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA*)il2cpp_codegen_object_new(NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetDataWriter__ctor_m146E2C307B585380552FB2583AC8FFCE97CD9B71(L_1, NULL);
		__this->____netDataWriter_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____netDataWriter_2), (void*)L_1);
		// public NetPacketProcessor(int maxStringLength)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _netSerializer = new NetSerializer(maxStringLength);
		int32_t L_2 = ___0_maxStringLength;
		NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* L_3 = (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9*)il2cpp_codegen_object_new(NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NetSerializer__ctor_mAF76FAA200E47115DA26D4557E06B4D886ED8439(L_3, L_2, NULL);
		__this->____netSerializer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____netSerializer_0), (void*)L_3);
		// }
		return;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::GetCallbackFromData(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* NetPacketProcessor_GetCallbackFromData_m4CA0F0219BE90B2EEBCED623E0B4F4A3066E8F8B (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB702FBA6DE5A2796549B6AB3BAB29390901942C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* V_1 = NULL;
	{
		// var hash = reader.GetULong();
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_0 = ___0_reader;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = NetDataReader_GetULong_mEDAAFDA63ECC73E4FFFD0557116F0C80DE08C8A2(L_0, NULL);
		V_0 = L_1;
		// if (!_callbacks.TryGetValue(hash, out action))
		Dictionary_2_t6807DB8035F7D75619945D5CF2CA9EB20F27B951* L_2 = __this->____callbacks_1;
		uint64_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mB702FBA6DE5A2796549B6AB3BAB29390901942C2(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mB702FBA6DE5A2796549B6AB3BAB29390901942C2_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// throw new ParseException("Undefined packet in NetDataReader");
		ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261* L_5 = (ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ParseException__ctor_m8ED6DE7E0C569D47FFBCC0CEFB36054B89887A89(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral54CC87BDCC203DBF3D08732C8F6B081BD50E7D62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetPacketProcessor_GetCallbackFromData_m4CA0F0219BE90B2EEBCED623E0B4F4A3066E8F8B_RuntimeMethod_var)));
	}

IL_0022:
	{
		// return action;
		SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* L_6 = V_1;
		return L_6;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadAllPackets(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadAllPackets_m6A24CA979A47DDF737D3220340C32F7677C2E852 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, const RuntimeMethod* method) 
{
	{
		goto IL_0009;
	}

IL_0002:
	{
		// ReadPacket(reader);
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_0 = ___0_reader;
		NetPacketProcessor_ReadPacket_m206C9605EF5B79980E88806C62B9EC7D5615F283(__this, L_0, NULL);
	}

IL_0009:
	{
		// while (reader.AvailableBytes > 0)
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_1 = ___0_reader;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(L_1, NULL);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadAllPackets(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadAllPackets_m1E94D90E81D38972B4370BBC4A166F53247C7A54 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_0002:
	{
		// ReadPacket(reader, userData);
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_0 = ___0_reader;
		RuntimeObject* L_1 = ___1_userData;
		NetPacketProcessor_ReadPacket_m2B71725B7C1227473CF780FD9A915A2244FBC4CD(__this, L_0, L_1, NULL);
	}

IL_000a:
	{
		// while (reader.AvailableBytes > 0)
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_2 = ___0_reader;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NetDataReader_get_AvailableBytes_mEAD8A8298CE466798B70127938933B28C2613A9D(L_2, NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadPacket(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m206C9605EF5B79980E88806C62B9EC7D5615F283 (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, const RuntimeMethod* method) 
{
	{
		// ReadPacket(reader, null);
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_0 = ___0_reader;
		NetPacketProcessor_ReadPacket_m2B71725B7C1227473CF780FD9A915A2244FBC4CD(__this, L_0, NULL, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::ReadPacket(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetPacketProcessor_ReadPacket_m2B71725B7C1227473CF780FD9A915A2244FBC4CD (NetPacketProcessor_tC008551263AC0F46812FF0AE3127ABF0D975E873* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) 
{
	{
		// GetCallbackFromData(reader)(reader, userData);
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_0 = ___0_reader;
		SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* L_1;
		L_1 = VirtualFuncInvoker1< SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5*, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* >::Invoke(5 /* FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor::GetCallbackFromData(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader) */, __this, L_0);
		NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* L_2 = ___0_reader;
		RuntimeObject* L_3 = ___1_userData;
		NullCheck(L_1);
		SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_inline(L_1, L_2, L_3, NULL);
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
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_Multicast(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* currentDelegate = reinterpret_cast<SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_reader, ___1_userData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenInst(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	NullCheck(___0_reader);
	typedef void (*FunctionPointerType) (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_reader, ___1_userData, method);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenStatic(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_reader, ___1_userData, method);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenStaticInvoker(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	InvokerActionInvoker2< NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_reader, ___1_userData);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_ClosedStaticInvoker(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_reader, ___1_userData);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenVirtual(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	NullCheck(___0_reader);
	VirtualActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_reader, ___1_userData);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenInterface(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	NullCheck(___0_reader);
	InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_reader, ___1_userData);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenGenericVirtual(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	NullCheck(___0_reader);
	GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(method, ___0_reader, ___1_userData);
}
void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenGenericInterface(SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method)
{
	NullCheck(___0_reader);
	GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(method, ___0_reader, ___1_userData);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate__ctor_mB394EE9493ADC094238BB62095FD734D396046E6 (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_Multicast;
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::Invoke(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1 (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_reader, ___1_userData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::BeginInvoke(FlyingWormConsole3.LiteNetLib.Utils.NetDataReader,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubscribeDelegate_BeginInvoke_m0C85520AA276CC7C68D6E45EF7609882772D92DF (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_reader;
	__d_args[1] = ___1_userData;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscribeDelegate_EndInvoke_m05546105A4D521DA0FD773C281126284A36B89D9 (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.InvalidTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidTypeException__ctor_m42C7AA991086D3DBE7EB38972E7141F55C4F10DA (InvalidTypeException_t79DD32863BA9B2D1CE6C8E068D8E97ADABA8C741* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public InvalidTypeException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(__this, L_0, NULL);
		// public InvalidTypeException(string message) : base(message) { }
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.ParseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseException__ctor_m8ED6DE7E0C569D47FFBCC0CEFB36054B89887A89 (ParseException_tE9D15FFE30722D3687DD4C6333903C530E2D0261* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ParseException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public ParseException(string message) : base(message) { }
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mAA76478A51CF1FB20AC3BACE500372304165E227 (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* __this, const RuntimeMethod* method) 
{
	{
		// public NetSerializer() : this(0)
		NetSerializer__ctor_mAF76FAA200E47115DA26D4557E06B4D886ED8439(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetSerializer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSerializer__ctor_mAF76FAA200E47115DA26D4557E06B4D886ED8439 (NetSerializer_t2896D72EDD6FC4CDBA25C7662518425CA25035F9* __this, int32_t ___0_maxStringLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m18669342C6857F217E5625EA0AD8ED2DD525FBB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<Type, CustomType> _registeredTypes = new Dictionary<Type, CustomType>();
		Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326* L_0 = (Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326*)il2cpp_codegen_object_new(Dictionary_2_t5EE36A10F9DEF39A9016F3998D768275F9B3C326_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m18669342C6857F217E5625EA0AD8ED2DD525FBB5(L_0, Dictionary_2__ctor_m18669342C6857F217E5625EA0AD8ED2DD525FBB5_RuntimeMethod_var);
		__this->____registeredTypes_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registeredTypes_2), (void*)L_0);
		// public NetSerializer(int maxStringLength)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _maxStringLength = maxStringLength;
		int32_t L_1 = ___0_maxStringLength;
		__this->____maxStringLength_1 = L_1;
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NetSerializer/CustomType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomType__ctor_mE990ECEC41503B4B32919261DCDEBA2EF042635C (CustomType_t4542089B28CECEEA8A877EDA8CE931EFE7ADB166* __this, const RuntimeMethod* method) 
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
// System.Byte[] FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_Bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Bytes_m5DB6D8A635A7BEBA520F0509B46508BB6C42BF37 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NtpLeapIndicator FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_LeapIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_LeapIndicator_mE780E5229CFAF4136F83BB6FE32C44F468F52F74 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NtpLeapIndicator)((Bytes[0] & 0xC0) >> 6); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)(((int32_t)((int32_t)L_2&((int32_t)192)))>>6)));
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_VersionNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_VersionNumber_m347EE1EAF30F02BDEA43D5F8FBFEE852154894F8 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (Bytes[0] & 0x38) >> 3; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int32_t)(((int32_t)((int32_t)L_2&((int32_t)56)))>>3));
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_VersionNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_VersionNumber_mCD751D64904F8310FA57DF1CA1FADB5459803694 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { Bytes[0] = (byte)((Bytes[0] & ~0x38) | value << 3); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)-57)))|((int32_t)(L_4<<3))))));
		// private set { Bytes[0] = (byte)((Bytes[0] & ~0x38) | value << 3); }
		return;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NtpMode FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Mode_m87035DFF507EDCB50A20ACBED4E96C6B81685A82 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (NtpMode)(Bytes[0] & 0x07); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (int32_t)(((int32_t)((int32_t)L_2&7)));
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_Mode(FlyingWormConsole3.LiteNetLib.Utils.NtpMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_Mode_m1B6AB1ECACD207C0CB5D7EF156D4A8C812C6461A (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { Bytes[0] = (byte)((Bytes[0] & ~0x07) | (int)value); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)-8)))|(int32_t)L_4))));
		// private set { Bytes[0] = (byte)((Bytes[0] & ~0x07) | (int)value); }
		return;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Stratum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Stratum_mC9D6B92A3A8F7C614C6F516917C7465C962E2D57 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public int Stratum { get { return Bytes[1]; } }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 1;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Poll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Poll_m49BBA6896D3252B38DCA3F01CD37B36BDCFEF586 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public int Poll { get { return Bytes[2]; } }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_Precision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_get_Precision_m9C4DF408DECF06DD0655C4DA2FA7AE0B60A54913 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public int Precision { get { return (sbyte)Bytes[3]; } }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 3;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int8_t)L_2);
	}
}
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_RootDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_get_RootDelay_m76DB4CCC656A3A1251ED2F73F6A3A174F5FE9374 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public TimeSpan RootDelay { get { return GetTimeSpan32(4); } }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = NtpPacket_GetTimeSpan32_mB1470558FF64457DC2A58DEFA8316D51F191C7A2(__this, 4, NULL);
		return L_0;
	}
}
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_RootDispersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_get_RootDispersion_m9D5701246E59CB86C0618224C0856C3413400B27 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public TimeSpan RootDispersion { get { return GetTimeSpan32(8); } }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = NtpPacket_GetTimeSpan32_mB1470558FF64457DC2A58DEFA8316D51F191C7A2(__this, 8, NULL);
		return L_0;
	}
}
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_ReferenceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_get_ReferenceId_mB909F1CBCCFB444CE0A51409253BA41B220EF087 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public uint ReferenceId { get { return GetUInt32BE(12); } }
		uint32_t L_0;
		L_0 = NtpPacket_GetUInt32BE_m46AA79D2DE54C64DE667B3CF89F5E6E4595B4780(__this, ((int32_t)12), NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_ReferenceTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_ReferenceTimestamp_m8FE7074B76FE59BA6BD430D2E0DDFCBEF3F06682 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? ReferenceTimestamp { get { return GetDateTime64(16); } }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214(__this, ((int32_t)16), NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_OriginTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_OriginTimestamp_m197B753E1FB93333A8C71E80FB00F5956A831934 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? OriginTimestamp { get { return GetDateTime64(24); } }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214(__this, ((int32_t)24), NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_ReceiveTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_ReceiveTimestamp_m28518CC74140DFEDBA65A56700161E922AFF68B1 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? ReceiveTimestamp { get { return GetDateTime64(32); } }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214(__this, ((int32_t)32), NULL);
		return L_0;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_TransmitTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214(__this, ((int32_t)40), NULL);
		return L_0;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_TransmitTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_TransmitTimestamp_mAC3742940FC5B29A1890993B55B14A934774A70E (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___0_value;
		NtpPacket_SetDateTime64_m7BE5278F49B27CC52BDBB252ED4E24640A3BBB17(__this, ((int32_t)40), L_0, NULL);
		// public DateTime? TransmitTimestamp { get { return GetDateTime64(40); } private set { SetDateTime64(40, value); } }
		return;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_DestinationTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CDestinationTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::set_DestinationTimestamp(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mAA50539DD3E9E8D85DEE9E64F3D153570F065FB1 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___0_value;
		__this->___U3CDestinationTimestampU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_get_RoundTripTime_mE164C1B4D76144D37802CD43AB2A5001624D08E7 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4(__this, NULL);
		// return (ReceiveTimestamp.Value - OriginTimestamp.Value) + (DestinationTimestamp.Value - TransmitTimestamp.Value);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_get_ReceiveTimestamp_m28518CC74140DFEDBA65A56700161E922AFF68B1(__this, NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2;
		L_2 = NtpPacket_get_OriginTimestamp_m197B753E1FB93333A8C71E80FB00F5956A831934(__this, NULL);
		V_0 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_3, NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_5;
		L_5 = NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F_inline(__this, NULL);
		V_0 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_7;
		L_7 = NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B(__this, NULL);
		V_0 = L_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_10;
		L_10 = TimeSpan_op_Addition_mD8B0E0E30595D82C7336CCCA411FE384441DE1A6(L_4, L_9, NULL);
		return L_10;
	}
}
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::get_CorrectionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_get_CorrectionOffset_mB935614AA9CFA7665C1C20C98E94CADC5005B0C0 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4(__this, NULL);
		// return TimeSpan.FromTicks(((ReceiveTimestamp.Value - OriginTimestamp.Value) - (DestinationTimestamp.Value - TransmitTimestamp.Value)).Ticks / 2);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_get_ReceiveTimestamp_m28518CC74140DFEDBA65A56700161E922AFF68B1(__this, NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2;
		L_2 = NtpPacket_get_OriginTimestamp_m197B753E1FB93333A8C71E80FB00F5956A831934(__this, NULL);
		V_0 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_3, NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_5;
		L_5 = NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F_inline(__this, NULL);
		V_0 = L_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_7;
		L_7 = NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B(__this, NULL);
		V_0 = L_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_0), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_10;
		L_10 = TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7(L_4, L_9, NULL);
		V_1 = L_10;
		int64_t L_11;
		L_11 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_1), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(((int64_t)(L_11/((int64_t)2))), NULL);
		return L_12;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m443C2A6A5BA9A9172E59F1BC1B9C5DE485E5B2E7 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NtpPacket() : this(new byte[48])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31(__this, L_0, NULL);
		// Mode = NtpMode.Client;
		NtpPacket_set_Mode_m1B6AB1ECACD207C0CB5D7EF156D4A8C812C6461A(__this, 3, NULL);
		// VersionNumber = 4;
		NtpPacket_set_VersionNumber_mCD751D64904F8310FA57DF1CA1FADB5459803694(__this, 4, NULL);
		// TransmitTimestamp = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		NtpPacket_set_TransmitTimestamp_mAC3742940FC5B29A1890993B55B14A934774A70E(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	{
		// internal NtpPacket(byte[] bytes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (bytes.Length < 48)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)((int32_t)48))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new ArgumentException("SNTP reply packet must be at least 48 bytes long.", "bytes");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A616A2BD726354344808434F427B73FA98BDD24)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31_RuntimeMethod_var)));
	}

IL_001d:
	{
		// Bytes = bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_bytes;
		NtpPacket_set_Bytes_m5DB6D8A635A7BEBA520F0509B46508BB6C42BF37_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// FlyingWormConsole3.LiteNetLib.Utils.NtpPacket FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::FromServerResponse(System.Byte[],System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* NtpPacket_FromServerResponse_mE52B20C1A7B5AE231A33539708A3B60D6C9EC722 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_destinationTimestamp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new NtpPacket(bytes) { DestinationTimestamp = destinationTimestamp };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_1 = (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA*)il2cpp_codegen_object_new(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NtpPacket__ctor_m960562C86ECE0569F0E3D017222FD6E8DC9AAD31(L_1, L_0, NULL);
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_2 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___1_destinationTimestamp;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		NullCheck(L_2);
		NtpPacket_set_DestinationTimestamp_mAA50539DD3E9E8D85DEE9E64F3D153570F065FB1_inline(L_2, L_4, NULL);
		return L_2;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::ValidateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateRequest_m6071DCC338700F7187D68393D565E6F73C366E2F (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Mode != NtpMode.Client)
		int32_t L_0;
		L_0 = NtpPacket_get_Mode_m87035DFF507EDCB50A20ACBED4E96C6B81685A82(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a request SNTP packet.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9FFA609F3AF81CBA0BEF31B92E98F7C0B64DA06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m6071DCC338700F7187D68393D565E6F73C366E2F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2;
		L_2 = NtpPacket_get_VersionNumber_m347EE1EAF30F02BDEA43D5F8FBFEE852154894F8(__this, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the request is not specified.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral868EE9733DC26168EACBAC88A44D9E3DE178486F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m6071DCC338700F7187D68393D565E6F73C366E2F_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_4;
		L_4 = NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B(__this, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_0), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// throw new InvalidOperationException("TransmitTimestamp must be set in request packet.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC90CADE37127E5B15A609569628F61937A864B5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateRequest_m6071DCC338700F7187D68393D565E6F73C366E2F_RuntimeMethod_var)));
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::ValidateReply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// if (Mode != NtpMode.Server)
		int32_t L_0;
		L_0 = NtpPacket_get_Mode_m87035DFF507EDCB50A20ACBED4E96C6B81685A82(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("This is not a reply SNTP packet.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06C05B24B8AC51D50C3AA294D70C5E1E28E9A0E3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (VersionNumber == 0)
		int32_t L_2;
		L_2 = NtpPacket_get_VersionNumber_m347EE1EAF30F02BDEA43D5F8FBFEE852154894F8(__this, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException("Protocol version of the reply is not specified.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88F1D02FAC5553C102E3A23C9A363D07A9C89238)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (Stratum == 0)
		int32_t L_4;
		L_4 = NtpPacket_get_Stratum_mC9D6B92A3A8F7C614C6F516917C7465C962E2D57(__this, NULL);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException(string.Format("Received Kiss-o'-Death SNTP packet with code 0x{0:x}.", ReferenceId));
		uint32_t L_5;
		L_5 = NtpPacket_get_ReferenceId_mB909F1CBCCFB444CE0A51409253BA41B220EF087(__this, NULL);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10F509F15EC5C6178F7787F554341A601F904E65)), L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (LeapIndicator == NtpLeapIndicator.AlarmCondition)
		int32_t L_10;
		L_10 = NtpPacket_get_LeapIndicator_mE780E5229CFAF4136F83BB6FE32C44F468F52F74(__this, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_005e;
		}
	}
	{
		// throw new InvalidOperationException("SNTP server has unsynchronized clock.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB77237BCD39404C795BCB8688C2D3153355EBA0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_ValidateReply_m15201D6A185C7D3C87594B52A742209DDA5D6366_RuntimeMethod_var)));
	}

IL_005e:
	{
		// CheckTimestamps();
		NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4(__this, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::CheckTimestamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OriginTimestamp == null)
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0;
		L_0 = NtpPacket_get_OriginTimestamp_m197B753E1FB93333A8C71E80FB00F5956A831934(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_0), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new InvalidOperationException("Origin timestamp is missing.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF39AFC06F0127ED41BF2DBB29047355062D8065C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (ReceiveTimestamp == null)
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3;
		L_3 = NtpPacket_get_ReceiveTimestamp_m28518CC74140DFEDBA65A56700161E922AFF68B1(__this, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_0), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		// throw new InvalidOperationException("Receive timestamp is missing.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF62357F27A8ABD4B2897C89CFE2ABB3A9468CB41)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (TransmitTimestamp == null)
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		L_6 = NtpPacket_get_TransmitTimestamp_m44347BB393BE6B6E0562BC198C467E2BBD1F458B(__this, NULL);
		V_0 = L_6;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_0), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		// throw new InvalidOperationException("Transmit timestamp is missing.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49BEFE76EF933CC018C51D77F66B724C36F2CE09)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4_RuntimeMethod_var)));
	}

IL_0051:
	{
		// if (DestinationTimestamp == null)
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_9;
		L_9 = NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F_inline(__this, NULL);
		V_0 = L_9;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_0), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		// throw new InvalidOperationException("Destination timestamp is missing.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B19916E896E08666992C24EA969EE6DE3B95722)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NtpPacket_CheckTimestamps_m3CCEBF5C7B0D0BCA9F164E284A27360D31FAF2A4_RuntimeMethod_var)));
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Nullable`1<System.DateTime> FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetDateTime64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_GetDateTime64_m0C883DDC0D399BA2A28321B6FF4B1490EF94C214 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var field = GetUInt64BE(offset);
		int32_t L_0 = ___0_offset;
		uint64_t L_1;
		L_1 = NtpPacket_GetUInt64BE_m00F31C44FC7380393A61453B6B70FD7D3F387D42(__this, L_0, NULL);
		V_0 = L_1;
		// if (field == 0)
		uint64_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3 = V_1;
		return L_3;
	}

IL_0015:
	{
		// return new DateTime(Epoch.Ticks + Convert.ToInt64(field * (1.0 / (1L << 32) * 10000000.0)));
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var))->___Epoch_0), NULL);
		uint64_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_6;
		L_6 = Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333(((double)il2cpp_codegen_multiply(((double)((double)(uint64_t)L_5)), (0.0023283064365386963))), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		memset((&L_7), 0, sizeof(L_7));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_7), ((int64_t)il2cpp_codegen_add(L_4, L_6)), /*hidden argument*/NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SetDateTime64(System.Int32,System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetDateTime64_m7BE5278F49B27CC52BDBB252ED4E24640A3BBB17 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* G_B1_1 = NULL;
	uint64_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* G_B3_2 = NULL;
	{
		// SetUInt64BE(offset, value == null ? 0 : Convert.ToUInt64((value.Value.Ticks - Epoch.Ticks) * (0.0000001 * (1L << 32))));
		int32_t L_0 = ___0_offset;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&___1_value), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0037;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&___1_value), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		V_0 = L_2;
		int64_t L_3;
		L_3 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var))->___Epoch_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = Convert_ToUInt64_m8C51AD1E162EAC585EF8A5D72ED494E24492F095(((double)il2cpp_codegen_multiply(((double)((int64_t)il2cpp_codegen_subtract(L_3, L_4))), (429.49672959999998))), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0039;
	}

IL_0037:
	{
		G_B3_0 = ((uint64_t)(((int64_t)0)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0039:
	{
		NullCheck(G_B3_2);
		NtpPacket_SetUInt64BE_m455597219DFE9922931AF25FC972D7B59767BCAE(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.TimeSpan FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetTimeSpan32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A NtpPacket_GetTimeSpan32_mB1470558FF64457DC2A58DEFA8316D51F191C7A2 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromSeconds(GetInt32BE(offset) / (double)(1 << 16));
		int32_t L_0 = ___0_offset;
		int32_t L_1;
		L_1 = NtpPacket_GetInt32BE_m01746D745E6D9E3B705A31519FF451CFD10C09AD(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F(((double)(((double)L_1)/(65536.0))), NULL);
		return L_2;
	}
}
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetUInt64BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_GetUInt64BE_m00F31C44FC7380393A61453B6B70FD7D3F387D42 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt64(Bytes, offset));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		int32_t L_1 = ___0_offset;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = NtpPacket_SwapEndianness_mEB6C67B77E6E27C8EBA34433A64AC157F9C75938(L_2, NULL);
		return L_3;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SetUInt64BE(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket_SetUInt64BE_m455597219DFE9922931AF25FC972D7B59767BCAE (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, uint64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FastBitConverter.GetBytes(Bytes, offset, SwapEndianness(value));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		int32_t L_1 = ___0_offset;
		uint64_t L_2 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = NtpPacket_SwapEndianness_mEB6C67B77E6E27C8EBA34433A64AC157F9C75938(L_2, NULL);
		FastBitConverter_GetBytes_m59A64F0461706FC093C0D07BB72F5E73CD1A5355(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Int32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NtpPacket_GetInt32BE_m01746D745E6D9E3B705A31519FF451CFD10C09AD (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	{
		// return (int)GetUInt32BE(offset);
		int32_t L_0 = ___0_offset;
		uint32_t L_1;
		L_1 = NtpPacket_GetUInt32BE_m46AA79D2DE54C64DE667B3CF89F5E6E4595B4780(__this, L_0, NULL);
		return L_1;
	}
}
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::GetUInt32BE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_GetUInt32BE_m46AA79D2DE54C64DE667B3CF89F5E6E4595B4780 (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SwapEndianness(BitConverter.ToUInt32(Bytes, offset));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(__this, NULL);
		int32_t L_1 = ___0_offset;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = NtpPacket_SwapEndianness_m13BC6D34067775610DAFB9CAFF3E0D547ADED2AB(L_2, NULL);
		return L_3;
	}
}
// System.UInt32 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NtpPacket_SwapEndianness_m13BC6D34067775610DAFB9CAFF3E0D547ADED2AB (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return ((x & 0xff) << 24) | ((x & 0xff00) << 8) | ((x & 0xff0000) >> 8) | ((x & 0xff000000) >> 24);
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___0_x;
		uint32_t L_2 = ___0_x;
		uint32_t L_3 = ___0_x;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&((int32_t)255)))<<((int32_t)24)))|((int32_t)(((int32_t)((int32_t)L_1&((int32_t)65280)))<<8))))|((int32_t)((uint32_t)((int32_t)((int32_t)L_2&((int32_t)16711680)))>>8))))|((int32_t)((uint32_t)((int32_t)((int32_t)L_3&((int32_t)-16777216)))>>((int32_t)24)))));
	}
}
// System.UInt64 FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::SwapEndianness(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NtpPacket_SwapEndianness_mEB6C67B77E6E27C8EBA34433A64AC157F9C75938 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((ulong)SwapEndianness((uint)x) << 32) | SwapEndianness((uint)(x >> 32));
		uint64_t L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = NtpPacket_SwapEndianness_m13BC6D34067775610DAFB9CAFF3E0D547ADED2AB(((int32_t)(uint32_t)L_0), NULL);
		uint64_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = NtpPacket_SwapEndianness_m13BC6D34067775610DAFB9CAFF3E0D547ADED2AB(((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))), NULL);
		return ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)32)))|((int64_t)(uint64_t)L_3)));
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpPacket::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpPacket__cctor_m5AC135A548EC9D09ACA5F91096F9803E02C4A00A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly DateTime Epoch = new DateTime(1900, 1, 1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_0), ((int32_t)1900), 1, 1, /*hidden argument*/NULL);
		((NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_StaticFields*)il2cpp_codegen_static_fields_for(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var))->___Epoch_0 = L_0;
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
// System.Void FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NtpRequest__ctor_mB15493F1A541CE4A7752FB5706C5D89269BFDD58 (NtpRequest_tFFBFC24434D3C3F9B5A288721A636B37D4382399* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, const RuntimeMethod* method) 
{
	{
		// private int _resendTime = ResendTimer;
		__this->____resendTime_4 = ((int32_t)1000);
		// public NtpRequest(IPEndPoint endPoint)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _ntpEndPoint = endPoint;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___0_endPoint;
		__this->____ntpEndPoint_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ntpEndPoint_3), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::get_NeedToKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_get_NeedToKill_m5D8DEDA5B5BC948A0640F68433A1B5DE549DBA29 (NtpRequest_tFFBFC24434D3C3F9B5A288721A636B37D4382399* __this, const RuntimeMethod* method) 
{
	{
		// get { return _killTime >= KillTimer; }
		int32_t L_0 = __this->____killTime_5;
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)10000)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean FlyingWormConsole3.LiteNetLib.Utils.NtpRequest::Send(FlyingWormConsole3.LiteNetLib.NetSocket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NtpRequest_Send_mAFBE58FA7A595A6578DE92C7F81B666951187189 (NtpRequest_tFFBFC24434D3C3F9B5A288721A636B37D4382399* __this, NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4* ___0_socket, int32_t ___1_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// _resendTime += time;
		int32_t L_0 = __this->____resendTime_4;
		int32_t L_1 = ___1_time;
		__this->____resendTime_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// _killTime += time;
		int32_t L_2 = __this->____killTime_5;
		int32_t L_3 = ___1_time;
		__this->____killTime_5 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// if (_resendTime < ResendTimer)
		int32_t L_4 = __this->____resendTime_4;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// SocketError errorCode = 0;
		V_0 = 0;
		// var packet = new NtpPacket();
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_5 = (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA*)il2cpp_codegen_object_new(NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NtpPacket__ctor_m443C2A6A5BA9A9172E59F1BC1B9C5DE485E5B2E7(L_5, NULL);
		V_1 = L_5;
		// var sendCount = socket.SendTo(packet.Bytes, 0, packet.Bytes.Length, _ntpEndPoint, ref errorCode);
		NetSocket_t6D6CAA3836008BA017A8BE4CF4F8FBBAAB4EA4F4* L_6 = ___0_socket;
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(L_7, NULL);
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(L_9, NULL);
		NullCheck(L_10);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = __this->____ntpEndPoint_3;
		NullCheck(L_6);
		int32_t L_12;
		L_12 = NetSocket_SendTo_mEBB7CBE898383F3C5E94F453005B7F3A68C1D469(L_6, L_8, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11, (&V_0), NULL);
		V_2 = L_12;
		// return errorCode == 0 && sendCount == packet.Bytes.Length;
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_2;
		NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* L_15 = V_1;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline(L_15, NULL);
		NullCheck(L_16);
		return (bool)((((int32_t)L_14) == ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
	}

IL_0060:
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
// System.Void FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32cLayer__ctor_m7083C80273D3BB9FAD87662B6594A663488DBF67 (Crc32cLayer_t799B2010955281BD2F31EBA62AF0091A14642304* __this, const RuntimeMethod* method) 
{
	{
		// public Crc32cLayer() : base(CRC32C.ChecksumSize)
		PacketLayerBase__ctor_m8F0B3F00218E79F387DFD9B589BE5AE6FE460593(__this, 4, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer::ProcessInboundPacket(System.Net.IPEndPoint,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32cLayer_ProcessInboundPacket_m8DD247F8B76BF7CA1CDB5A968B70B988DD9D4DBB (Crc32cLayer_t799B2010955281BD2F31EBA62AF0091A14642304* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_data, int32_t* ___2_offset, int32_t* ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32C_t2921A96AC4574713CE8C171FFC535DD602FDB34A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetDebug_t09498527952058773C46B5C4FD82F348EC77F7BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20578EED957D25675AEB69A727D4556E455C76A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (length < NetConstants.HeaderSize + CRC32C.ChecksumSize)
		int32_t* L_0 = ___3_length;
		int32_t L_1 = *((int32_t*)L_0);
		if ((((int32_t)L_1) >= ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		// NetDebug.WriteError("[NM] DataReceived size: bad!");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetDebug_t09498527952058773C46B5C4FD82F348EC77F7BB_il2cpp_TypeInfo_var);
		NetDebug_WriteError_m62DA00E10D5835FA1AC29E89788C727754144A42(_stringLiteral20578EED957D25675AEB69A727D4556E455C76A9, L_2, NULL);
		// length = 0;
		int32_t* L_3 = ___3_length;
		*((int32_t*)L_3) = (int32_t)0;
		// return;
		return;
	}

IL_001a:
	{
		// int checksumPoint = length - CRC32C.ChecksumSize;
		int32_t* L_4 = ___3_length;
		int32_t L_5 = *((int32_t*)L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 4));
		// if (CRC32C.Compute(data, offset, checksumPoint) != BitConverter.ToUInt32(data, checksumPoint))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_6);
		int32_t* L_8 = ___2_offset;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CRC32C_t2921A96AC4574713CE8C171FFC535DD602FDB34A_il2cpp_TypeInfo_var);
		uint32_t L_11;
		L_11 = CRC32C_Compute_m6CC796CCAA46C697A467ECD2A30F43DABC51C514(L_7, L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_12 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_12);
		int32_t L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_15;
		L_15 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_13, L_14, NULL);
		if ((((int32_t)L_11) == ((int32_t)L_15)))
		{
			goto IL_0039;
		}
	}
	{
		// length = 0;
		int32_t* L_16 = ___3_length;
		*((int32_t*)L_16) = (int32_t)0;
		// return;
		return;
	}

IL_0039:
	{
		// length -= CRC32C.ChecksumSize;
		int32_t* L_17 = ___3_length;
		int32_t* L_18 = ___3_length;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_19, 4));
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.Crc32cLayer::ProcessOutBoundPacket(System.Net.IPEndPoint,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32cLayer_ProcessOutBoundPacket_m91764D9F1F3237B1648CB78CAA4FF71E5B219CE9 (Crc32cLayer_t799B2010955281BD2F31EBA62AF0091A14642304* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_data, int32_t* ___2_offset, int32_t* ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32C_t2921A96AC4574713CE8C171FFC535DD602FDB34A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FastBitConverter.GetBytes(data, length, CRC32C.Compute(data, offset, length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		int32_t* L_2 = ___3_length;
		int32_t L_3 = *((int32_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_4 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_4);
		int32_t* L_6 = ___2_offset;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t* L_8 = ___3_length;
		int32_t L_9 = *((int32_t*)L_8);
		il2cpp_codegen_runtime_class_init_inline(CRC32C_t2921A96AC4574713CE8C171FFC535DD602FDB34A_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = CRC32C_Compute_m6CC796CCAA46C697A467ECD2A30F43DABC51C514(L_5, L_7, L_9, NULL);
		FastBitConverter_GetBytes_m5D49922DCC201E5EAD09673049709C364D7F6C2B(L_1, L_3, L_10, NULL);
		// length += CRC32C.ChecksumSize;
		int32_t* L_11 = ___3_length;
		int32_t* L_12 = ___3_length;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 4));
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
// System.Void FlyingWormConsole3.LiteNetLib.Layers.PacketLayerBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketLayerBase__ctor_m8F0B3F00218E79F387DFD9B589BE5AE6FE460593 (PacketLayerBase_t45CF70BC52F3CBAE7EC7F885A16F3FB7753C23C6* __this, int32_t ___0_extraPacketSizeForLayer, const RuntimeMethod* method) 
{
	{
		// protected PacketLayerBase(int extraPacketSizeForLayer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ExtraPacketSizeForLayer = extraPacketSizeForLayer;
		int32_t L_0 = ___0_extraPacketSizeForLayer;
		__this->___ExtraPacketSizeForLayer_0 = L_0;
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
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m0DD3A792F23BE3D9F27897069BAB87EE13C744A0 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, const RuntimeMethod* method) 
{
	{
		// public XorEncryptLayer() : base(0)
		PacketLayerBase__ctor_m8F0B3F00218E79F387DFD9B589BE5AE6FE460593(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_mCFE1DB9683F4A679572507AE6A79D99AF1906014 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	{
		// public XorEncryptLayer(byte[] key) : this()
		XorEncryptLayer__ctor_m0DD3A792F23BE3D9F27897069BAB87EE13C744A0(__this, NULL);
		// SetKey(key);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		XorEncryptLayer_SetKey_mC28876F5A98E49511AD705C719910983A1FE748A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer__ctor_m8D3622D26AA83F7E5D31A71ADC27AB9853147C29 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		// public XorEncryptLayer(string key) : this()
		XorEncryptLayer__ctor_m0DD3A792F23BE3D9F27897069BAB87EE13C744A0(__this, NULL);
		// SetKey(key);
		String_t* L_0 = ___0_key;
		XorEncryptLayer_SetKey_m9DB3995363BB05B8A35B07BF208AD2F4A856E270(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::SetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_m9DB3995363BB05B8A35B07BF208AD2F4A856E270 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		// _byteKey = Encoding.UTF8.GetBytes(key);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		__this->____byteKey_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteKey_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_SetKey_mC28876F5A98E49511AD705C719910983A1FE748A (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_byteKey == null || _byteKey.Length != key.Length)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteKey_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteKey_1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_key;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		// _byteKey = new byte[key.Length];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_key;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		__this->____byteKey_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteKey_1), (void*)L_4);
	}

IL_0023:
	{
		// Buffer.BlockCopy(key, 0, _byteKey, 0, key.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->____byteKey_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_key;
		NullCheck(L_7);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::ProcessInboundPacket(System.Net.IPEndPoint,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_ProcessInboundPacket_m3B18AEE11E0405495BA8C04CB44E4B62216CA396 (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_data, int32_t* ___2_offset, int32_t* ___3_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_byteKey == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteKey_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var cur = offset;
		int32_t* L_1 = ___2_offset;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		// for (var i = 0; i < length; i++, cur++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// data[cur] = (byte)(data[cur] ^ _byteKey[i % _byteKey.Length]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_3);
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____byteKey_1;
		int32_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____byteKey_1;
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length))));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15))));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0033:
	{
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_18 = V_1;
		int32_t* L_19 = ___3_length;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingWormConsole3.LiteNetLib.Layers.XorEncryptLayer::ProcessOutBoundPacket(System.Net.IPEndPoint,System.Byte[]&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XorEncryptLayer_ProcessOutBoundPacket_m927330C7BD6705CC171FA7F435CC910865403B7C (XorEncryptLayer_tD15F54FF937FBF86B6715067B7E19F9C42E2C198* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_data, int32_t* ___2_offset, int32_t* ___3_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_byteKey == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteKey_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var cur = offset;
		int32_t* L_1 = ___2_offset;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		// for (var i = 0; i < length; i++, cur++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0010:
	{
		// data[cur] = (byte)(data[cur] ^ _byteKey[i % _byteKey.Length]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_3 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_3);
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_6);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____byteKey_1;
		int32_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____byteKey_1;
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length))));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15))));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0033:
	{
		// for (var i = 0; i < length; i++, cur++)
		int32_t L_18 = V_1;
		int32_t* L_19 = ___3_length;
		int32_t L_20 = *((int32_t*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0010;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetDataWriter_get_Data_m57195A7D8184C5AFAE3D3DEF4069D8AD9A7390AD_inline (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _data; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetDataWriter_get_Length_m7947782000AC2E7C7B6152A12F4FCA2064948AEC_inline (NetDataWriter_tAC29FAA7BF8D757166CC36FC9F132B0DFFBFEEAA* __this, const RuntimeMethod* method) 
{
	{
		// get { return _position; }
		int32_t L_0 = __this->____position_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubscribeDelegate_Invoke_m2FA1DF158E1771AC7DCF970AF088A3666D99D3A1_inline (SubscribeDelegate_tA247CCC4CFF4353915E48E5EF727059782DC83B5* __this, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54* ___0_reader, RuntimeObject* ___1_userData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetDataReader_tC211E72AE62D3365739E7A7E2C748C86E5485C54*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_reader, ___1_userData, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NtpPacket_get_Bytes_m0ED5F79E0F0B39182A9632A055BC1C2C0ACC4E24_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CBytesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC NtpPacket_get_DestinationTimestamp_mE42F8228932E2256F3F9FF2181059183172B2A9F_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = __this->___U3CDestinationTimestampU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_Bytes_m5DB6D8A635A7BEBA520F0509B46508BB6C42BF37_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Bytes { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NtpPacket_set_DestinationTimestamp_mAA50539DD3E9E8D85DEE9E64F3D153570F065FB1_inline (NtpPacket_t22F9C624C19080E02CEA6536ACA65F9E2069FBDA* __this, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime? DestinationTimestamp { get; private set; }
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_0 = ___0_value;
		__this->___U3CDestinationTimestampU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
