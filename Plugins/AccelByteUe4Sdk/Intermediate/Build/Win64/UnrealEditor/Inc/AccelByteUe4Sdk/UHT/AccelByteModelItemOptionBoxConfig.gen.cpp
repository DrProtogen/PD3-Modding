// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemOptionBoxConfig.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemBoxItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemOptionBoxConfig() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelItemOptionBoxConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig;
class UScriptStruct* FAccelByteModelItemOptionBoxConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemOptionBoxConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemOptionBoxConfig>()
{
	return FAccelByteModelItemOptionBoxConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemOptionBoxConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemOptionBoxConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemOptionBoxConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemOptionBoxConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_Inner = { "BoxItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem, METADATA_PARAMS(0, nullptr) }; // 2500992744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems = { "BoxItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemOptionBoxConfig, BoxItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxItems_MetaData), NewProp_BoxItems_MetaData) }; // 2500992744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelItemOptionBoxConfig",
	Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers),
	sizeof(FAccelByteModelItemOptionBoxConfig),
	alignof(FAccelByteModelItemOptionBoxConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig.InnerSingleton;
}
// End ScriptStruct FAccelByteModelItemOptionBoxConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemOptionBoxConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelItemOptionBoxConfig::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewStructOps, TEXT("AccelByteModelItemOptionBoxConfig"), &Z_Registration_Info_UScriptStruct_AccelByteModelItemOptionBoxConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelItemOptionBoxConfig), 1647757006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemOptionBoxConfig_h_1299477272(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemOptionBoxConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemOptionBoxConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
