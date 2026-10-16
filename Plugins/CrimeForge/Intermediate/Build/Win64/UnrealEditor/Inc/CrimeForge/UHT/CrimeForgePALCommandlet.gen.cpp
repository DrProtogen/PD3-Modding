// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForge/Public/CrimeForgePALCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgePALCommandlet() {}

// Begin Cross Module References
CRIMEFORGE_API UClass* Z_Construct_UClass_UCrimeForgePALCommandlet();
CRIMEFORGE_API UClass* Z_Construct_UClass_UCrimeForgePALCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_CrimeForge();
// End Cross Module References

// Begin Class UCrimeForgePALCommandlet
void UCrimeForgePALCommandlet::StaticRegisterNativesUCrimeForgePALCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgePALCommandlet);
UClass* Z_Construct_UClass_UCrimeForgePALCommandlet_NoRegister()
{
	return UCrimeForgePALCommandlet::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgePALCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runs the same PAL validation and manifest generation as the packaging UI. */" },
#endif
		{ "IncludePath", "CrimeForgePALCommandlet.h" },
		{ "ModuleRelativePath", "Public/CrimeForgePALCommandlet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs the same PAL validation and manifest generation as the packaging UI." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgePALCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::ClassParams = {
	&UCrimeForgePALCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgePALCommandlet()
{
	if (!Z_Registration_Info_UClass_UCrimeForgePALCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgePALCommandlet.OuterSingleton, Z_Construct_UClass_UCrimeForgePALCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgePALCommandlet.OuterSingleton;
}
template<> CRIMEFORGE_API UClass* StaticClass<UCrimeForgePALCommandlet>()
{
	return UCrimeForgePALCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgePALCommandlet);
UCrimeForgePALCommandlet::~UCrimeForgePALCommandlet() {}
// End Class UCrimeForgePALCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_PD3_Modkit_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgePALCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgePALCommandlet, UCrimeForgePALCommandlet::StaticClass, TEXT("UCrimeForgePALCommandlet"), &Z_Registration_Info_UClass_UCrimeForgePALCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgePALCommandlet), 93051995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PD3_Modkit_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgePALCommandlet_h_3044734953(TEXT("/Script/CrimeForge"),
	Z_CompiledInDeferFile_FID_PD3_Modkit_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgePALCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PD3_Modkit_Plugins_CrimeForge_Source_CrimeForge_Public_CrimeForgePALCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
