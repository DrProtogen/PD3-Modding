// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerCredentials.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerCredentials() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCredentials();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCredentials_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerCredentials Function GetAccessToken
struct Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics
{
	struct ABServerCredentials_eventGetAccessToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerCredentials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerCredentials_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerCredentials, nullptr, "GetAccessToken", nullptr, nullptr, Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::ABServerCredentials_eventGetAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::ABServerCredentials_eventGetAccessToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerCredentials_GetAccessToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerCredentials_GetAccessToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerCredentials::execGetAccessToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAccessToken();
	P_NATIVE_END;
}
// End Class UABServerCredentials Function GetAccessToken

// Begin Class UABServerCredentials
void UABServerCredentials::StaticRegisterNativesUABServerCredentials()
{
	UClass* Class = UABServerCredentials::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAccessToken", &UABServerCredentials::execGetAccessToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerCredentials);
UClass* Z_Construct_UClass_UABServerCredentials_NoRegister()
{
	return UABServerCredentials::StaticClass();
}
struct Z_Construct_UClass_UABServerCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerCredentials.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerCredentials_GetAccessToken, "GetAccessToken" }, // 461914577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerCredentials>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerCredentials_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerCredentials_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerCredentials_Statics::ClassParams = {
	&UABServerCredentials::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerCredentials_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerCredentials_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerCredentials()
{
	if (!Z_Registration_Info_UClass_UABServerCredentials.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerCredentials.OuterSingleton, Z_Construct_UClass_UABServerCredentials_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerCredentials.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerCredentials>()
{
	return UABServerCredentials::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerCredentials);
UABServerCredentials::~UABServerCredentials() {}
// End Class UABServerCredentials

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerCredentials, UABServerCredentials::StaticClass, TEXT("UABServerCredentials"), &Z_Registration_Info_UClass_UABServerCredentials, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerCredentials), 2099188448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_459378335(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerCredentials_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
