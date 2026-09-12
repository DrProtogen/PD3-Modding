// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptFriendRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptFriendRequest() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAcceptFriendRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest;
class UScriptStruct* FAccelByteModelsAcceptFriendRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptFriendRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptFriendRequest>()
{
	return FAccelByteModelsAcceptFriendRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendRequest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptFriendRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendRequest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptFriendRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::NewProp_FriendId = { "FriendId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptFriendRequest, FriendId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendId_MetaData), NewProp_FriendId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::NewProp_FriendId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelsAcceptFriendRequest",
	Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::PropPointers),
	sizeof(FAccelByteModelsAcceptFriendRequest),
	alignof(FAccelByteModelsAcceptFriendRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAcceptFriendRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAcceptFriendRequest::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendRequest_Statics::NewStructOps, TEXT("AccelByteModelsAcceptFriendRequest"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAcceptFriendRequest), 1192207719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendRequest_h_1488311307(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
