// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/IpNetDriverAccelByte.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpNetDriverAccelByte() {}

// Begin Cross Module References
ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpNetDriverAccelByte();
ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpNetDriverAccelByte_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References

// Begin Class UIpNetDriverAccelByte
void UIpNetDriverAccelByte::StaticRegisterNativesUIpNetDriverAccelByte()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIpNetDriverAccelByte);
UClass* Z_Construct_UClass_UIpNetDriverAccelByte_NoRegister()
{
	return UIpNetDriverAccelByte::StaticClass();
}
struct Z_Construct_UClass_UIpNetDriverAccelByte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IpNetDriverAccelByte.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IpNetDriverAccelByte.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpNetDriverAccelByte>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIpNetDriverAccelByte_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriverAccelByte_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIpNetDriverAccelByte_Statics::ClassParams = {
	&UIpNetDriverAccelByte::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriverAccelByte_Statics::Class_MetaDataParams), Z_Construct_UClass_UIpNetDriverAccelByte_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIpNetDriverAccelByte()
{
	if (!Z_Registration_Info_UClass_UIpNetDriverAccelByte.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIpNetDriverAccelByte.OuterSingleton, Z_Construct_UClass_UIpNetDriverAccelByte_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIpNetDriverAccelByte.OuterSingleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UClass* StaticClass<UIpNetDriverAccelByte>()
{
	return UIpNetDriverAccelByte::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIpNetDriverAccelByte);
UIpNetDriverAccelByte::~UIpNetDriverAccelByte() {}
// End Class UIpNetDriverAccelByte

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpNetDriverAccelByte_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIpNetDriverAccelByte, UIpNetDriverAccelByte::StaticClass, TEXT("UIpNetDriverAccelByte"), &Z_Registration_Info_UClass_UIpNetDriverAccelByte, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIpNetDriverAccelByte), 340714108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpNetDriverAccelByte_h_1413607435(TEXT("/Script/AccelByteNetworkUtilities"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpNetDriverAccelByte_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpNetDriverAccelByte_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
