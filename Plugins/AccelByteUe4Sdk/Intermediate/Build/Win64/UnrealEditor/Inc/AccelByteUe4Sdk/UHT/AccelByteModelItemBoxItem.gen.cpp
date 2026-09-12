// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemBoxItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemBoxItem() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelItemBoxItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem;
class UScriptStruct* FAccelByteModelItemBoxItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemBoxItem"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemBoxItem>()
{
	return FAccelByteModelItemBoxItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemBoxItem" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemBoxItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemSku;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemBoxItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, ItemSku), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSku_MetaData), NewProp_ItemSku_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDate_MetaData), NewProp_EndDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemBoxItem, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemSku,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelItemBoxItem",
	Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::PropPointers),
	sizeof(FAccelByteModelItemBoxItem),
	alignof(FAccelByteModelItemBoxItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem.InnerSingleton;
}
// End ScriptStruct FAccelByteModelItemBoxItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemBoxItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelItemBoxItem::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem_Statics::NewStructOps, TEXT("AccelByteModelItemBoxItem"), &Z_Registration_Info_UScriptStruct_AccelByteModelItemBoxItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelItemBoxItem), 2500992744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemBoxItem_h_3201006002(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemBoxItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemBoxItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
