// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteGetSystemMessageStatsRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetSystemMessageStatsRequest() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteGetSystemMessageStatsRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest;
class UScriptStruct* FAccelByteGetSystemMessageStatsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteGetSystemMessageStatsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteGetSystemMessageStatsRequest>()
{
	return FAccelByteGetSystemMessageStatsRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsRequest.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetSystemMessageStatsRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteGetSystemMessageStatsRequest",
	nullptr,
	0,
	sizeof(FAccelByteGetSystemMessageStatsRequest),
	alignof(FAccelByteGetSystemMessageStatsRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest.InnerSingleton;
}
// End ScriptStruct FAccelByteGetSystemMessageStatsRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteGetSystemMessageStatsRequest::StaticStruct, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsRequest_Statics::NewStructOps, TEXT("AccelByteGetSystemMessageStatsRequest"), &Z_Registration_Info_UScriptStruct_AccelByteGetSystemMessageStatsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteGetSystemMessageStatsRequest), 2879518826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsRequest_h_3294812497(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteGetSystemMessageStatsRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
