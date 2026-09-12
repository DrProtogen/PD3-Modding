// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerEligibilityResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEligibilityResponse() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerEligibilityResponse();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin ScriptStruct FPlayerEligibilityResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse;
class UScriptStruct* FPlayerEligibilityResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerEligibilityResponse, (UObject*)Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerEligibilityResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerEligibilityResponse>()
{
	return FPlayerEligibilityResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerEligibilityResponse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsComply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerEligibilityResponse" },
		{ "ModuleRelativePath", "Public/PlayerEligibilityResponse.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsComply_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsComply;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerEligibilityResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_SetBit(void* Obj)
{
	((FPlayerEligibilityResponse*)Obj)->IsComply = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply = { "IsComply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerEligibilityResponse), &Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsComply_MetaData), NewProp_IsComply_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
	nullptr,
	&NewStructOps,
	"PlayerEligibilityResponse",
	Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers),
	sizeof(FPlayerEligibilityResponse),
	alignof(FPlayerEligibilityResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerEligibilityResponse()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.InnerSingleton, Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse.InnerSingleton;
}
// End ScriptStruct FPlayerEligibilityResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerEligibilityResponse_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerEligibilityResponse::StaticStruct, Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewStructOps, TEXT("PlayerEligibilityResponse"), &Z_Registration_Info_UScriptStruct_PlayerEligibilityResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerEligibilityResponse), 929737221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerEligibilityResponse_h_3403193944(TEXT("/Script/AccelByteCustomization"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerEligibilityResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_PlayerEligibilityResponse_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
