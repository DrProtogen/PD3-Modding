// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerRecordSummaryData.h"
#include "AccelByteCustomization/Public/PlayerRecordProgressSummary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRecordSummaryData() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordProgressSummary();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummaryData();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FPlayerRecordSummaryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData;
class UScriptStruct* FPlayerRecordSummaryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRecordSummaryData, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerRecordSummaryData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerRecordSummaryData>()
{
	return FPlayerRecordSummaryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressSummary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressSummary_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProgressSummary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRecordSummaryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Namespace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Namespace_MetaData), NewProp_Namespace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Total), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Total_MetaData), NewProp_Total_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_Inner = { "ProgressSummary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerRecordProgressSummary, METADATA_PARAMS(0, nullptr) }; // 1269970618
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary = { "ProgressSummary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, ProgressSummary), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressSummary_MetaData), NewProp_ProgressSummary_MetaData) }; // 1269970618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"PlayerRecordSummaryData",
	Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers),
	sizeof(FPlayerRecordSummaryData),
	alignof(FPlayerRecordSummaryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummaryData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData.InnerSingleton;
}
// End ScriptStruct FPlayerRecordSummaryData

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummaryData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerRecordSummaryData::StaticStruct, Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewStructOps, TEXT("PlayerRecordSummaryData"), &Z_Registration_Info_UScriptStruct_PlayerRecordSummaryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerRecordSummaryData), 1891276666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummaryData_h_410227767(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummaryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummaryData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
