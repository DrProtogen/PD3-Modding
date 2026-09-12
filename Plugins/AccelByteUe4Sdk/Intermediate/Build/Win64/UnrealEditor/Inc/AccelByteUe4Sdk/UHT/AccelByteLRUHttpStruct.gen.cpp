// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteLRUHttpStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteLRUHttpStruct() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteLRUHttpStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct;
class UScriptStruct* FAccelByteLRUHttpStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteLRUHttpStruct"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteLRUHttpStruct>()
{
	return FAccelByteLRUHttpStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestHeaders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseHeaders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponsePayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpireTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteLRUHttpStruct" },
		{ "ModuleRelativePath", "Public/AccelByteLRUHttpStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestHeaders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestHeaders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseHeaders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponseHeaders;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequestURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResponsePayload_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponsePayload;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpireTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteLRUHttpStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_Inner = { "RequestHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders = { "RequestHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, RequestHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestHeaders_MetaData), NewProp_RequestHeaders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_Inner = { "ResponseHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders = { "ResponseHeaders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponseHeaders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseHeaders_MetaData), NewProp_ResponseHeaders_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponseCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCode_MetaData), NewProp_ResponseCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL = { "RequestURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, RequestURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestURL_MetaData), NewProp_RequestURL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_Inner = { "ResponsePayload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload = { "ResponsePayload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ResponsePayload), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponsePayload_MetaData), NewProp_ResponsePayload_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime = { "ExpireTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteLRUHttpStruct, ExpireTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpireTime_MetaData), NewProp_ExpireTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseHeaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponseCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_RequestURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ResponsePayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewProp_ExpireTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteLRUHttpStruct",
	Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::PropPointers),
	sizeof(FAccelByteLRUHttpStruct),
	alignof(FAccelByteLRUHttpStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct.InnerSingleton;
}
// End ScriptStruct FAccelByteLRUHttpStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteLRUHttpStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteLRUHttpStruct::StaticStruct, Z_Construct_UScriptStruct_FAccelByteLRUHttpStruct_Statics::NewStructOps, TEXT("AccelByteLRUHttpStruct"), &Z_Registration_Info_UScriptStruct_AccelByteLRUHttpStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteLRUHttpStruct), 2505261121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteLRUHttpStruct_h_2555936176(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteLRUHttpStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteLRUHttpStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
