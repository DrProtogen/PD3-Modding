// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeProgressItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeProgressItem() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressItem();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FChallengeProgressItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChallengeProgressItem;
class UScriptStruct* FChallengeProgressItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChallengeProgressItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeProgressItem, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeProgressItem"));
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressItem.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeProgressItem>()
{
	return FChallengeProgressItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChallengeProgressItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeProgressItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/ChallengeProgressItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/ChallengeProgressItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/ChallengeProgressItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentQuantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeProgressItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressItem, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_CurrentQuantity = { "CurrentQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressItem, CurrentQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentQuantity_MetaData), NewProp_CurrentQuantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_TargetQuantity = { "TargetQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChallengeProgressItem, TargetQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetQuantity_MetaData), NewProp_TargetQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_CurrentQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewProp_TargetQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ChallengeProgressItem",
	Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::PropPointers),
	sizeof(FChallengeProgressItem),
	alignof(FChallengeProgressItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChallengeProgressItem()
{
	if (!Z_Registration_Info_UScriptStruct_ChallengeProgressItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChallengeProgressItem.InnerSingleton, Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChallengeProgressItem.InnerSingleton;
}
// End ScriptStruct FChallengeProgressItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChallengeProgressItem::StaticStruct, Z_Construct_UScriptStruct_FChallengeProgressItem_Statics::NewStructOps, TEXT("ChallengeProgressItem"), &Z_Registration_Info_UScriptStruct_ChallengeProgressItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChallengeProgressItem), 895964844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressItem_h_1065446979(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ChallengeProgressItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
