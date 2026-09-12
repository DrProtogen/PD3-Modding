// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ProgressCompletedChallenge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressCompletedChallenge() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FProgressCompletedChallenge();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FProgressCompletedChallenge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge;
class UScriptStruct* FProgressCompletedChallenge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressCompletedChallenge, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ProgressCompletedChallenge"));
	}
	return Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FProgressCompletedChallenge>()
{
	return FProgressCompletedChallenge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProgressCompletedChallenge" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProgressCompletedChallenge" },
		{ "ModuleRelativePath", "Public/ProgressCompletedChallenge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeId;
	static void NewProp_IsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressCompletedChallenge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProgressCompletedChallenge, ChallengeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeId_MetaData), NewProp_ChallengeId_MetaData) };
void Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_SetBit(void* Obj)
{
	((FProgressCompletedChallenge*)Obj)->IsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted = { "IsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProgressCompletedChallenge), &Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCompleted_MetaData), NewProp_IsCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_ChallengeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewProp_IsCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"ProgressCompletedChallenge",
	Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::PropPointers),
	sizeof(FProgressCompletedChallenge),
	alignof(FProgressCompletedChallenge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProgressCompletedChallenge()
{
	if (!Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.InnerSingleton, Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge.InnerSingleton;
}
// End ScriptStruct FProgressCompletedChallenge

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ProgressCompletedChallenge_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProgressCompletedChallenge::StaticStruct, Z_Construct_UScriptStruct_FProgressCompletedChallenge_Statics::NewStructOps, TEXT("ProgressCompletedChallenge"), &Z_Registration_Info_UScriptStruct_ProgressCompletedChallenge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgressCompletedChallenge), 665011534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ProgressCompletedChallenge_h_3955782128(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ProgressCompletedChallenge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_ProgressCompletedChallenge_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
