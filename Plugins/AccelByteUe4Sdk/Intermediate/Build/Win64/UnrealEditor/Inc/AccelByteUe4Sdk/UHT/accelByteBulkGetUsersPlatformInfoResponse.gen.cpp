// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/accelByteBulkGetUsersPlatformInfoResponse.h"
#include "AccelByteUe4Sdk/Public/accelByteUserPlatformInfoData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeaccelByteBulkGetUsersPlatformInfoResponse() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FaccelByteBulkGetUsersPlatformInfoResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse;
class UScriptStruct* FaccelByteBulkGetUsersPlatformInfoResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("accelByteBulkGetUsersPlatformInfoResponse"));
	}
	return Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FaccelByteBulkGetUsersPlatformInfoResponse>()
{
	return FaccelByteBulkGetUsersPlatformInfoResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/accelByteBulkGetUsersPlatformInfoResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "accelByteBulkGetUsersPlatformInfoResponse" },
		{ "ModuleRelativePath", "Public/accelByteBulkGetUsersPlatformInfoResponse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FaccelByteBulkGetUsersPlatformInfoResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FaccelByteUserPlatformInfoData, METADATA_PARAMS(0, nullptr) }; // 2232688177
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FaccelByteBulkGetUsersPlatformInfoResponse, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2232688177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"accelByteBulkGetUsersPlatformInfoResponse",
	Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::PropPointers),
	sizeof(FaccelByteBulkGetUsersPlatformInfoResponse),
	alignof(FaccelByteBulkGetUsersPlatformInfoResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse()
{
	if (!Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.InnerSingleton, Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse.InnerSingleton;
}
// End ScriptStruct FaccelByteBulkGetUsersPlatformInfoResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_accelByteBulkGetUsersPlatformInfoResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FaccelByteBulkGetUsersPlatformInfoResponse::StaticStruct, Z_Construct_UScriptStruct_FaccelByteBulkGetUsersPlatformInfoResponse_Statics::NewStructOps, TEXT("accelByteBulkGetUsersPlatformInfoResponse"), &Z_Registration_Info_UScriptStruct_accelByteBulkGetUsersPlatformInfoResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FaccelByteBulkGetUsersPlatformInfoResponse), 3877149186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_accelByteBulkGetUsersPlatformInfoResponse_h_4093759541(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_accelByteBulkGetUsersPlatformInfoResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_accelByteBulkGetUsersPlatformInfoResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
