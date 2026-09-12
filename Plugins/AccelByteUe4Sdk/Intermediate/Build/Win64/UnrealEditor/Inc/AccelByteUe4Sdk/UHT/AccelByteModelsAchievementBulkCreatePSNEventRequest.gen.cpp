// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAchievementBulkCreatePSNEventRequest.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAchievementPSNEventCreate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAchievementBulkCreatePSNEventRequest() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAchievementPSNEventCreate();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAchievementBulkCreatePSNEventRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest;
class UScriptStruct* FAccelByteModelsAchievementBulkCreatePSNEventRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAchievementBulkCreatePSNEventRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAchievementBulkCreatePSNEventRequest>()
{
	return FAccelByteModelsAchievementBulkCreatePSNEventRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAchievementBulkCreatePSNEventRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAchievementBulkCreatePSNEventRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAchievementBulkCreatePSNEventRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAchievementBulkCreatePSNEventRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsAchievementPSNEventCreate, METADATA_PARAMS(0, nullptr) }; // 531339888
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAchievementBulkCreatePSNEventRequest, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 531339888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelsAchievementBulkCreatePSNEventRequest",
	Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::PropPointers),
	sizeof(FAccelByteModelsAchievementBulkCreatePSNEventRequest),
	alignof(FAccelByteModelsAchievementBulkCreatePSNEventRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAchievementBulkCreatePSNEventRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAchievementBulkCreatePSNEventRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAchievementBulkCreatePSNEventRequest::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAchievementBulkCreatePSNEventRequest_Statics::NewStructOps, TEXT("AccelByteModelsAchievementBulkCreatePSNEventRequest"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAchievementBulkCreatePSNEventRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAchievementBulkCreatePSNEventRequest), 4144899044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAchievementBulkCreatePSNEventRequest_h_4253207573(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAchievementBulkCreatePSNEventRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAchievementBulkCreatePSNEventRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
