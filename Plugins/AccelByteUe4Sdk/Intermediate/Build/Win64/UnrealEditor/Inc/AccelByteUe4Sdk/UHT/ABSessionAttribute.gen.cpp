// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSessionAttribute.h"
#include "AccelByteUe4Sdk/Public/GetSessionAttributeRequest.h"
#include "AccelByteUe4Sdk/Public/SetSessionAttributeRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSessionAttribute() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionAttribute();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionAttribute_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllSessionAttributeResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetSessionAttributeResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetSessionAttributeResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetSessionAttributeRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetSessionAttributeRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABSessionAttribute Function GetAllSessionAttribute
struct Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics
{
	struct ABSessionAttribute_eventGetAllSessionAttribute_Parms
	{
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2827062971
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetAllSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "GetAllSessionAttribute", nullptr, nullptr, Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::ABSessionAttribute_eventGetAllSessionAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::ABSessionAttribute_eventGetAllSessionAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionAttribute::execGetAllSessionAttribute)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAllSessionAttribute(FDGetAllSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABSessionAttribute Function GetAllSessionAttribute

// Begin Class UABSessionAttribute Function GetSessionAttribute
struct Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics
{
	struct ABSessionAttribute_eventGetSessionAttribute_Parms
	{
		FGetSessionAttributeRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, Request), Z_Construct_UScriptStruct_FGetSessionAttributeRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2037561820
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2085279794
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventGetSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "GetSessionAttribute", nullptr, nullptr, Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::ABSessionAttribute_eventGetSessionAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::ABSessionAttribute_eventGetSessionAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionAttribute::execGetSessionAttribute)
{
	P_GET_STRUCT_REF(FGetSessionAttributeRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSessionAttribute(Z_Param_Out_Request,FDGetSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABSessionAttribute Function GetSessionAttribute

// Begin Class UABSessionAttribute Function SetSessionAttribute
struct Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics
{
	struct ABSessionAttribute_eventSetSessionAttribute_Parms
	{
		FSetSessionAttributeRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, Request), Z_Construct_UScriptStruct_FSetSessionAttributeRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 913654051
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetSessionAttributeResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2752587346
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSessionAttribute_eventSetSessionAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSessionAttribute, nullptr, "SetSessionAttribute", nullptr, nullptr, Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::ABSessionAttribute_eventSetSessionAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::ABSessionAttribute_eventSetSessionAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSessionAttribute::execSetSessionAttribute)
{
	P_GET_STRUCT_REF(FSetSessionAttributeRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetSessionAttribute(Z_Param_Out_Request,FDSetSessionAttributeResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABSessionAttribute Function SetSessionAttribute

// Begin Class UABSessionAttribute
void UABSessionAttribute::StaticRegisterNativesUABSessionAttribute()
{
	UClass* Class = UABSessionAttribute::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllSessionAttribute", &UABSessionAttribute::execGetAllSessionAttribute },
		{ "GetSessionAttribute", &UABSessionAttribute::execGetSessionAttribute },
		{ "SetSessionAttribute", &UABSessionAttribute::execSetSessionAttribute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSessionAttribute);
UClass* Z_Construct_UClass_UABSessionAttribute_NoRegister()
{
	return UABSessionAttribute::StaticClass();
}
struct Z_Construct_UClass_UABSessionAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSessionAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSessionAttribute.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSessionAttribute_GetAllSessionAttribute, "GetAllSessionAttribute" }, // 1499935674
		{ &Z_Construct_UFunction_UABSessionAttribute_GetSessionAttribute, "GetSessionAttribute" }, // 2595485411
		{ &Z_Construct_UFunction_UABSessionAttribute_SetSessionAttribute, "SetSessionAttribute" }, // 2391622676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSessionAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABSessionAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSessionAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSessionAttribute_Statics::ClassParams = {
	&UABSessionAttribute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABSessionAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UABSessionAttribute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABSessionAttribute()
{
	if (!Z_Registration_Info_UClass_UABSessionAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSessionAttribute.OuterSingleton, Z_Construct_UClass_UABSessionAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABSessionAttribute.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSessionAttribute>()
{
	return UABSessionAttribute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABSessionAttribute);
UABSessionAttribute::~UABSessionAttribute() {}
// End Class UABSessionAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABSessionAttribute, UABSessionAttribute::StaticClass, TEXT("UABSessionAttribute"), &Z_Registration_Info_UClass_UABSessionAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSessionAttribute), 2339710983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_100491155(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
