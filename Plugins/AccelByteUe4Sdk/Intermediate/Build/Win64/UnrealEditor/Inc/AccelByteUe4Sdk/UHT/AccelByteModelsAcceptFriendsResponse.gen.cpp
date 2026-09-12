// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptFriendsResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptFriendsResponse() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAcceptFriendsResponse
static_assert(std::is_polymorphic<FAccelByteModelsAcceptFriendsResponse>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsAcceptFriendsResponse cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse;
class UScriptStruct* FAccelByteModelsAcceptFriendsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptFriendsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptFriendsResponse>()
{
	return FAccelByteModelsAcceptFriendsResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendsResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptFriendsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendsResponse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptFriendsResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::NewProp_FriendId = { "FriendId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptFriendsResponse, FriendId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendId_MetaData), NewProp_FriendId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::NewProp_FriendId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
	&NewStructOps,
	"AccelByteModelsAcceptFriendsResponse",
	Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::PropPointers),
	sizeof(FAccelByteModelsAcceptFriendsResponse),
	alignof(FAccelByteModelsAcceptFriendsResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAcceptFriendsResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAcceptFriendsResponse::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsResponse_Statics::NewStructOps, TEXT("AccelByteModelsAcceptFriendsResponse"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAcceptFriendsResponse), 1649668786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsResponse_h_2046013853(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
