// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemPurchaseCondition.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemConditionGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemPurchaseCondition() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelItemPurchaseCondition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition;
class UScriptStruct* FAccelByteModelItemPurchaseCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemPurchaseCondition"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemPurchaseCondition>()
{
	return FAccelByteModelItemPurchaseCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemPurchaseCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemPurchaseCondition" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemPurchaseCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemPurchaseCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_Inner = { "ConditionGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup, METADATA_PARAMS(0, nullptr) }; // 2517006311
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups = { "ConditionGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemPurchaseCondition, ConditionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionGroups_MetaData), NewProp_ConditionGroups_MetaData) }; // 2517006311
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewProp_ConditionGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelItemPurchaseCondition",
	Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::PropPointers),
	sizeof(FAccelByteModelItemPurchaseCondition),
	alignof(FAccelByteModelItemPurchaseCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition.InnerSingleton;
}
// End ScriptStruct FAccelByteModelItemPurchaseCondition

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemPurchaseCondition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelItemPurchaseCondition::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition_Statics::NewStructOps, TEXT("AccelByteModelItemPurchaseCondition"), &Z_Registration_Info_UScriptStruct_AccelByteModelItemPurchaseCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelItemPurchaseCondition), 2548701214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemPurchaseCondition_h_2881547233(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemPurchaseCondition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemPurchaseCondition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
