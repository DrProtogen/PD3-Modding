// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/AccelByteCustomizationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteCustomizationSettings() {}

// Begin Cross Module References
ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteCustomizationSettings();
ACCELBYTECUSTOMIZATION_API UClass* Z_Construct_UClass_UAccelByteCustomizationSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References

// Begin Class UAccelByteCustomizationSettings
void UAccelByteCustomizationSettings::StaticRegisterNativesUAccelByteCustomizationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAccelByteCustomizationSettings);
UClass* Z_Construct_UClass_UAccelByteCustomizationSettings_NoRegister()
{
	return UAccelByteCustomizationSettings::StaticClass();
}
struct Z_Construct_UClass_UAccelByteCustomizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteCustomizationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteCustomizationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeServerUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteCustomizationSettings" },
		{ "ModuleRelativePath", "Public/AccelByteCustomizationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChallengeServerUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteCustomizationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl = { "ChallengeServerUrl", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAccelByteCustomizationSettings, ChallengeServerUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeServerUrl_MetaData), NewProp_ChallengeServerUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::NewProp_ChallengeServerUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::ClassParams = {
	&UAccelByteCustomizationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAccelByteCustomizationSettings()
{
	if (!Z_Registration_Info_UClass_UAccelByteCustomizationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAccelByteCustomizationSettings.OuterSingleton, Z_Construct_UClass_UAccelByteCustomizationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAccelByteCustomizationSettings.OuterSingleton;
}
template<> ACCELBYTECUSTOMIZATION_API UClass* StaticClass<UAccelByteCustomizationSettings>()
{
	return UAccelByteCustomizationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteCustomizationSettings);
UAccelByteCustomizationSettings::~UAccelByteCustomizationSettings() {}
// End Class UAccelByteCustomizationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteCustomizationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAccelByteCustomizationSettings, UAccelByteCustomizationSettings::StaticClass, TEXT("UAccelByteCustomizationSettings"), &Z_Registration_Info_UClass_UAccelByteCustomizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAccelByteCustomizationSettings), 1632759342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteCustomizationSettings_h_1393318856(TEXT("/Script/AccelByteCustomization"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteCustomizationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteCustomization_Source_AccelByteCustomization_Public_AccelByteCustomizationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
