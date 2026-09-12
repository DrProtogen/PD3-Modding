// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteBlueprintsCustomizationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBlueprintsCustomizationSettings() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings();
ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin Class UAccelByteBlueprintsCustomizationSettings Function GetChallengeServerUrl
struct Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics
{
	struct AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, nullptr, "GetChallengeServerUrl", nullptr, nullptr, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::AccelByteBlueprintsCustomizationSettings_eventGetChallengeServerUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteBlueprintsCustomizationSettings::execGetChallengeServerUrl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAccelByteBlueprintsCustomizationSettings::GetChallengeServerUrl();
	P_NATIVE_END;
}
// End Class UAccelByteBlueprintsCustomizationSettings Function GetChallengeServerUrl

// Begin Class UAccelByteBlueprintsCustomizationSettings Function SetChallengeServerUrl
struct Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics
{
	struct AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms
	{
		FString ChallengeServerUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeServerUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeServerUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl = { "ChallengeServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms, ChallengeServerUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeServerUrl_MetaData), NewProp_ChallengeServerUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::NewProp_ChallengeServerUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, nullptr, "SetChallengeServerUrl", nullptr, nullptr, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::AccelByteBlueprintsCustomizationSettings_eventSetChallengeServerUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteBlueprintsCustomizationSettings::execSetChallengeServerUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChallengeServerUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAccelByteBlueprintsCustomizationSettings::SetChallengeServerUrl(Z_Param_ChallengeServerUrl);
	P_NATIVE_END;
}
// End Class UAccelByteBlueprintsCustomizationSettings Function SetChallengeServerUrl

// Begin Class UAccelByteBlueprintsCustomizationSettings
void UAccelByteBlueprintsCustomizationSettings::StaticRegisterNativesUAccelByteBlueprintsCustomizationSettings()
{
	UClass* Class = UAccelByteBlueprintsCustomizationSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChallengeServerUrl", &UAccelByteBlueprintsCustomizationSettings::execGetChallengeServerUrl },
		{ "SetChallengeServerUrl", &UAccelByteBlueprintsCustomizationSettings::execSetChallengeServerUrl },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAccelByteBlueprintsCustomizationSettings);
UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_NoRegister()
{
	return UAccelByteBlueprintsCustomizationSettings::StaticClass();
}
struct Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteBlueprintsCustomizationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsCustomizationSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_GetChallengeServerUrl, "GetChallengeServerUrl" }, // 1229071492
		{ &Z_Construct_UFunction_UAccelByteBlueprintsCustomizationSettings_SetChallengeServerUrl, "SetChallengeServerUrl" }, // 1757639418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteBlueprintsCustomizationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::ClassParams = {
	&UAccelByteBlueprintsCustomizationSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings()
{
	if (!Z_Registration_Info_UClass_UAccelByteBlueprintsCustomizationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAccelByteBlueprintsCustomizationSettings.OuterSingleton, Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAccelByteBlueprintsCustomizationSettings.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UClass* StaticClass<UAccelByteBlueprintsCustomizationSettings>()
{
	return UAccelByteBlueprintsCustomizationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteBlueprintsCustomizationSettings);
UAccelByteBlueprintsCustomizationSettings::~UAccelByteBlueprintsCustomizationSettings() {}
// End Class UAccelByteBlueprintsCustomizationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteBlueprintsCustomizationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAccelByteBlueprintsCustomizationSettings, UAccelByteBlueprintsCustomizationSettings::StaticClass, TEXT("UAccelByteBlueprintsCustomizationSettings"), &Z_Registration_Info_UClass_UAccelByteBlueprintsCustomizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAccelByteBlueprintsCustomizationSettings), 2732164381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteBlueprintsCustomizationSettings_h_310414639(TEXT("/Script/AccelByteCustomization"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteBlueprintsCustomizationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteBlueprintsCustomizationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
