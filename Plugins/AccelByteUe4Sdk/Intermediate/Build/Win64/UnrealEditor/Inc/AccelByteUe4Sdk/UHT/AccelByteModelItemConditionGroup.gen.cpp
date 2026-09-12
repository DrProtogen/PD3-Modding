// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemConditionGroup.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemPredicate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemConditionGroup() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPredicate();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin ScriptStruct FAccelByteModelItemConditionGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup;
class UScriptStruct* FAccelByteModelItemConditionGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup, (UObject*)Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemConditionGroup"));
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemConditionGroup>()
{
	return FAccelByteModelItemConditionGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemConditionGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Predicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemConditionGroup" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemConditionGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemConditionGroup" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemConditionGroup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Predicates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Predicates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemConditionGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Predicates_Inner = { "Predicates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelItemPredicate, METADATA_PARAMS(0, nullptr) }; // 3274667850
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Predicates = { "Predicates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemConditionGroup, Predicates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Predicates_MetaData), NewProp_Predicates_MetaData) }; // 3274667850
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAccelByteModelItemConditionGroup, Operator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Predicates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Predicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewProp_Operator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	nullptr,
	&NewStructOps,
	"AccelByteModelItemConditionGroup",
	Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::PropPointers),
	sizeof(FAccelByteModelItemConditionGroup),
	alignof(FAccelByteModelItemConditionGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup()
{
	if (!Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.InnerSingleton, Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup.InnerSingleton;
}
// End ScriptStruct FAccelByteModelItemConditionGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemConditionGroup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAccelByteModelItemConditionGroup::StaticStruct, Z_Construct_UScriptStruct_FAccelByteModelItemConditionGroup_Statics::NewStructOps, TEXT("AccelByteModelItemConditionGroup"), &Z_Registration_Info_UScriptStruct_AccelByteModelItemConditionGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccelByteModelItemConditionGroup), 2517006311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemConditionGroup_h_4192846460(TEXT("/Script/AccelByteUe4Sdk"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemConditionGroup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteModelItemConditionGroup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
