// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/CompleteChallenge.h"
#include "AccelByteCustomization/Public/ChallengeErrorResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteChallenge() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse();
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteChallenge();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FCompleteChallenge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompleteChallenge;
class UScriptStruct* FCompleteChallenge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteChallenge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompleteChallenge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteChallenge, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("CompleteChallenge"));
	}
	return Z_Registration_Info_UScriptStruct_CompleteChallenge.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FCompleteChallenge>()
{
	return FCompleteChallenge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompleteChallenge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteChallenge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteChallenge, Error), Z_Construct_UScriptStruct_FChallengeErrorResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) }; // 2404015138
void Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FCompleteChallenge*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCompleteChallenge), &Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompleteChallenge, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"CompleteChallenge",
	Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers),
	sizeof(FCompleteChallenge),
	alignof(FCompleteChallenge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompleteChallenge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompleteChallenge()
{
	if (!Z_Registration_Info_UScriptStruct_CompleteChallenge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompleteChallenge.InnerSingleton, Z_Construct_UScriptStruct_FCompleteChallenge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompleteChallenge.InnerSingleton;
}
// End ScriptStruct FCompleteChallenge

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_CompleteChallenge_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCompleteChallenge::StaticStruct, Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewStructOps, TEXT("CompleteChallenge"), &Z_Registration_Info_UScriptStruct_CompleteChallenge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompleteChallenge), 3004008223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_CompleteChallenge_h_4017837147(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_CompleteChallenge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_CompleteChallenge_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
