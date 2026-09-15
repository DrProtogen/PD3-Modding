// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrimeForgeBlueprintFormatter/Public/Misc/CrimeForgeGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrimeForgeGraphSchema() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CRIMEFORGEBLUEPRINTFORMATTER_API UClass* Z_Construct_UClass_UCrimeForgeGraphSchema();
CRIMEFORGEBLUEPRINTFORMATTER_API UClass* Z_Construct_UClass_UCrimeForgeGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter();
// End Cross Module References

// Begin Class UCrimeForgeGraphSchema
void UCrimeForgeGraphSchema::StaticRegisterNativesUCrimeForgeGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrimeForgeGraphSchema);
UClass* Z_Construct_UClass_UCrimeForgeGraphSchema_NoRegister()
{
	return UCrimeForgeGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UCrimeForgeGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint-only graph schema adapter used by CrimeForge. */" },
#endif
		{ "IncludePath", "Misc/CrimeForgeGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Misc/CrimeForgeGraphSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-only graph schema adapter used by CrimeForge." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrimeForgeGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CrimeForgeBlueprintFormatter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::ClassParams = {
	&UCrimeForgeGraphSchema::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCrimeForgeGraphSchema()
{
	if (!Z_Registration_Info_UClass_UCrimeForgeGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrimeForgeGraphSchema.OuterSingleton, Z_Construct_UClass_UCrimeForgeGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrimeForgeGraphSchema.OuterSingleton;
}
template<> CRIMEFORGEBLUEPRINTFORMATTER_API UClass* StaticClass<UCrimeForgeGraphSchema>()
{
	return UCrimeForgeGraphSchema::StaticClass();
}
UCrimeForgeGraphSchema::UCrimeForgeGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCrimeForgeGraphSchema);
UCrimeForgeGraphSchema::~UCrimeForgeGraphSchema() {}
// End Class UCrimeForgeGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_Misc_CrimeForgeGraphSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrimeForgeGraphSchema, UCrimeForgeGraphSchema::StaticClass, TEXT("UCrimeForgeGraphSchema"), &Z_Registration_Info_UClass_UCrimeForgeGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrimeForgeGraphSchema), 137702955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_Misc_CrimeForgeGraphSchema_h_3808153833(TEXT("/Script/CrimeForgeBlueprintFormatter"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_Misc_CrimeForgeGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_CrimeForge_Source_CrimeForgeBlueprintFormatter_Public_Misc_CrimeForgeGraphSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
