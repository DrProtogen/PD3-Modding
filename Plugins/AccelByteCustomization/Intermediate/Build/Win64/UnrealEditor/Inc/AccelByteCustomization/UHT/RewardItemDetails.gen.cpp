// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/RewardItemDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardItemDetails() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FRewardItemDetails
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RewardItemDetails;
class UScriptStruct* FRewardItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RewardItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RewardItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardItemDetails, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("RewardItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_RewardItemDetails.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FRewardItemDetails>()
{
	return FRewardItemDetails::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRewardItemDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardItemDetails" },
		{ "ModuleRelativePath", "Public/RewardItemDetails.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sku;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_IsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardItemDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRewardItemDetails, Sku), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sku_MetaData), NewProp_Sku_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRewardItemDetails, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRewardItemDetails, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_SetBit(void* Obj)
{
	((FRewardItemDetails*)Obj)->IsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRewardItemDetails), &Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActive_MetaData), NewProp_IsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Sku,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewProp_IsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardItemDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"RewardItemDetails",
	Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::PropPointers),
	sizeof(FRewardItemDetails),
	alignof(FRewardItemDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRewardItemDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails()
{
	if (!Z_Registration_Info_UScriptStruct_RewardItemDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RewardItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FRewardItemDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RewardItemDetails.InnerSingleton;
}
// End ScriptStruct FRewardItemDetails

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RewardItemDetails_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRewardItemDetails::StaticStruct, Z_Construct_UScriptStruct_FRewardItemDetails_Statics::NewStructOps, TEXT("RewardItemDetails"), &Z_Registration_Info_UScriptStruct_RewardItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRewardItemDetails), 1170928534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RewardItemDetails_h_1773478837(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RewardItemDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_RewardItemDetails_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
