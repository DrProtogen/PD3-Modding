// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteGetSystemMessageStatsResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetSystemMessageStatsResponse() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteGetSystemMessageStatsResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse;
class UScriptStruct* FAccelByteGetSystemMessageStatsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteGetSystemMessageStatsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteGetSystemMessageStatsResponse>()
{
	return FAccelByteGetSystemMessageStatsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldestUnread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetSystemMessageStatsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetSystemMessageStatsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldestUnread;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Unread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetSystemMessageStatsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread = { "OldestUnread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteGetSystemMessageStatsResponse, OldestUnread), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldestUnread_MetaData), NewProp_OldestUnread_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread = { "Unread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteGetSystemMessageStatsResponse, Unread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unread_MetaData), NewProp_Unread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteGetSystemMessageStatsResponse",
	Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers),
	sizeof(FAccelByteGetSystemMessageStatsResponse),
	alignof(FAccelByteGetSystemMessageStatsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse.InnerSingleton;
}
// End ScriptStruct FAccelByteGetSystemMessageStatsResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteGetSystemMessageStatsResponse::StaticStruct, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewStructOps, TEXT("AccelByteGetSystemMessageStatsResponse"), &Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteGetSystemMessageStatsResponse), 3439396772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsResponse_h_3140250070(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
