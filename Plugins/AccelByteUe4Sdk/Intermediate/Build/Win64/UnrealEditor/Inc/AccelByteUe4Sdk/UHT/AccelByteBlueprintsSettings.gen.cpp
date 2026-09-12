// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteBlueprintsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBlueprintsSettings() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsSettings();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UAccelByteBlueprintsSettings Function GetNamespace
struct Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics
{
	struct AccelByteBlueprintsSettings_eventGetNamespace_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteBlueprintsSettings_eventGetNamespace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsSettings, nullptr, "GetNamespace", nullptr, nullptr, Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::AccelByteBlueprintsSettings_eventGetNamespace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::AccelByteBlueprintsSettings_eventGetNamespace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteBlueprintsSettings::execGetNamespace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAccelByteBlueprintsSettings::GetNamespace();
	P_NATIVE_END;
}
// End Class UAccelByteBlueprintsSettings Function GetNamespace

// Begin Class UAccelByteBlueprintsSettings Function GetSettingsEnvironment
struct Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics
{
	struct AccelByteBlueprintsSettings_eventGetSettingsEnvironment_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AccelByteBlueprintsSettings_eventGetSettingsEnvironment_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsSettings, nullptr, "GetSettingsEnvironment", nullptr, nullptr, Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::AccelByteBlueprintsSettings_eventGetSettingsEnvironment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::AccelByteBlueprintsSettings_eventGetSettingsEnvironment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAccelByteBlueprintsSettings::execGetSettingsEnvironment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAccelByteBlueprintsSettings::GetSettingsEnvironment();
	P_NATIVE_END;
}
// End Class UAccelByteBlueprintsSettings Function GetSettingsEnvironment

// Begin Class UAccelByteBlueprintsSettings
void UAccelByteBlueprintsSettings::StaticRegisterNativesUAccelByteBlueprintsSettings()
{
	UClass* Class = UAccelByteBlueprintsSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNamespace", &UAccelByteBlueprintsSettings::execGetNamespace },
		{ "GetSettingsEnvironment", &UAccelByteBlueprintsSettings::execGetSettingsEnvironment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAccelByteBlueprintsSettings);
UClass* Z_Construct_UClass_UAccelByteBlueprintsSettings_NoRegister()
{
	return UAccelByteBlueprintsSettings::StaticClass();
}
struct Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteBlueprintsSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetNamespace, "GetNamespace" }, // 368174461
		{ &Z_Construct_UFunction_UAccelByteBlueprintsSettings_GetSettingsEnvironment, "GetSettingsEnvironment" }, // 1512931701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteBlueprintsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::ClassParams = {
	&UAccelByteBlueprintsSettings::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAccelByteBlueprintsSettings()
{
	if (!Z_Registration_Info_UClass_UAccelByteBlueprintsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAccelByteBlueprintsSettings.OuterSingleton, Z_Construct_UClass_UAccelByteBlueprintsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAccelByteBlueprintsSettings.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteBlueprintsSettings>()
{
	return UAccelByteBlueprintsSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteBlueprintsSettings);
UAccelByteBlueprintsSettings::~UAccelByteBlueprintsSettings() {}
// End Class UAccelByteBlueprintsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAccelByteBlueprintsSettings, UAccelByteBlueprintsSettings::StaticClass, TEXT("UAccelByteBlueprintsSettings"), &Z_Registration_Info_UClass_UAccelByteBlueprintsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAccelByteBlueprintsSettings), 338999548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_1808471157(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
