// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/IpConnectionAccelByte.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpConnectionAccelByte() {}

// Begin Cross Module References
ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpConnectionAccelByte();
ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpConnectionAccelByte_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References

// Begin Class UIpConnectionAccelByte
void UIpConnectionAccelByte::StaticRegisterNativesUIpConnectionAccelByte()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIpConnectionAccelByte);
UClass* Z_Construct_UClass_UIpConnectionAccelByte_NoRegister()
{
	return UIpConnectionAccelByte::StaticClass();
}
struct Z_Construct_UClass_UIpConnectionAccelByte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IpConnectionAccelByte.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IpConnectionAccelByte.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpConnectionAccelByte>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIpConnectionAccelByte_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnectionAccelByte_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIpConnectionAccelByte_Statics::ClassParams = {
	&UIpConnectionAccelByte::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnectionAccelByte_Statics::Class_MetaDataParams), Z_Construct_UClass_UIpConnectionAccelByte_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIpConnectionAccelByte()
{
	if (!Z_Registration_Info_UClass_UIpConnectionAccelByte.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIpConnectionAccelByte.OuterSingleton, Z_Construct_UClass_UIpConnectionAccelByte_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIpConnectionAccelByte.OuterSingleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UClass* StaticClass<UIpConnectionAccelByte>()
{
	return UIpConnectionAccelByte::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIpConnectionAccelByte);
UIpConnectionAccelByte::~UIpConnectionAccelByte() {}
// End Class UIpConnectionAccelByte

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpConnectionAccelByte_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIpConnectionAccelByte, UIpConnectionAccelByte::StaticClass, TEXT("UIpConnectionAccelByte"), &Z_Registration_Info_UClass_UIpConnectionAccelByte, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIpConnectionAccelByte), 1972274555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpConnectionAccelByte_h_1683741049(TEXT("/Script/AccelByteNetworkUtilities"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpConnectionAccelByte_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteNetworkUtilities_Source_AccelByteNetworkUtilities_Public_IpConnectionAccelByte_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
