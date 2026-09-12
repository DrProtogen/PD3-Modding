// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsAcceptFriendsNotif.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsAcceptFriendsNotif() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelsAcceptFriendsNotif
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif;
class UScriptStruct* FAccelByteModelsAcceptFriendsNotif::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsAcceptFriendsNotif"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsAcceptFriendsNotif>()
{
	return FAccelByteModelsAcceptFriendsNotif::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendsNotif.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_friendId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsAcceptFriendsNotif" },
		{ "ModuleRelativePath", "Public/AccelByteModelsAcceptFriendsNotif.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_friendId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsAcceptFriendsNotif>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::NewProp_friendId = { "friendId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelsAcceptFriendsNotif, friendId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_friendId_MetaData), NewProp_friendId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::NewProp_friendId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelsAcceptFriendsNotif",
	Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::PropPointers),
	sizeof(FAccelByteModelsAcceptFriendsNotif),
	alignof(FAccelByteModelsAcceptFriendsNotif),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif.InnerSingleton;
}
// End ScriptStruct FAccelByteModelsAcceptFriendsNotif

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsNotif_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelsAcceptFriendsNotif::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelsAcceptFriendsNotif_Statics::NewStructOps, TEXT("AccelByteModelsAcceptFriendsNotif"), &Z_Registration_Info_UScriptStruct_AccelByteModelsAcceptFriendsNotif, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelsAcceptFriendsNotif), 3503830154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsNotif_h_1905017205(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsNotif_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelsAcceptFriendsNotif_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
