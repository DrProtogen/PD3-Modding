// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerRecordSummary.h"
#include "AccelByteCustomization/Public/PlayerRecordSummaryData.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPaging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRecordSummary() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummary();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummaryData();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPaging();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FPlayerRecordSummary
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerRecordSummary;
class UScriptStruct* FPlayerRecordSummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordSummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerRecordSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRecordSummary, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerRecordSummary"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordSummary.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerRecordSummary>()
{
	return FPlayerRecordSummary::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummary" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummary" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Paging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRecordSummary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerRecordSummaryData, METADATA_PARAMS(0, nullptr) }; // 1891276666
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummary, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1891276666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Paging = { "Paging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRecordSummary, Paging), Z_Construct_UScriptStruct_FAccelByteModelsPaging, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paging_MetaData), NewProp_Paging_MetaData) }; // 472708890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewProp_Paging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"PlayerRecordSummary",
	Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::PropPointers),
	sizeof(FPlayerRecordSummary),
	alignof(FPlayerRecordSummary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummary()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRecordSummary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerRecordSummary.InnerSingleton, Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerRecordSummary.InnerSingleton;
}
// End ScriptStruct FPlayerRecordSummary

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerRecordSummary::StaticStruct, Z_Construct_UScriptStruct_FPlayerRecordSummary_Statics::NewStructOps, TEXT("PlayerRecordSummary"), &Z_Registration_Info_UScriptStruct_PlayerRecordSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerRecordSummary), 1153440077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummary_h_107400683(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerRecordSummary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
