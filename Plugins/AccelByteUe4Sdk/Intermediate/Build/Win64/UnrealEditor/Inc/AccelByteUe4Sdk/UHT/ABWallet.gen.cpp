// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABWallet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWallet() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABWallet();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABWallet_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfosResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABWallet Function GetWalletInfoByCurrencyCode
struct Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics
{
	struct ABWallet_eventGetWalletInfoByCurrencyCode_Parms
	{
		FString CurrencyCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, CurrencyCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyCode_MetaData), NewProp_CurrencyCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2448932079
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_CurrencyCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABWallet, nullptr, "GetWalletInfoByCurrencyCode", nullptr, nullptr, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::ABWallet_eventGetWalletInfoByCurrencyCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::ABWallet_eventGetWalletInfoByCurrencyCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABWallet::execGetWalletInfoByCurrencyCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetWalletInfoByCurrencyCode(Z_Param_CurrencyCode,FDAccelByteModelsWalletInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABWallet Function GetWalletInfoByCurrencyCode

// Begin Class UABWallet Function GetWalletInfoByCurrencyCodeV2
struct Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics
{
	struct ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms
	{
		FString CurrencyCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, CurrencyCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrencyCode_MetaData), NewProp_CurrencyCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsWalletInfosResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2275805306
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_CurrencyCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABWallet, nullptr, "GetWalletInfoByCurrencyCodeV2", nullptr, nullptr, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::ABWallet_eventGetWalletInfoByCurrencyCodeV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABWallet::execGetWalletInfoByCurrencyCodeV2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetWalletInfoByCurrencyCodeV2(Z_Param_CurrencyCode,FDAccelByteModelsWalletInfosResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABWallet Function GetWalletInfoByCurrencyCodeV2

// Begin Class UABWallet
void UABWallet::StaticRegisterNativesUABWallet()
{
	UClass* Class = UABWallet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWalletInfoByCurrencyCode", &UABWallet::execGetWalletInfoByCurrencyCode },
		{ "GetWalletInfoByCurrencyCodeV2", &UABWallet::execGetWalletInfoByCurrencyCodeV2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABWallet);
UClass* Z_Construct_UClass_UABWallet_NoRegister()
{
	return UABWallet::StaticClass();
}
struct Z_Construct_UClass_UABWallet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABWallet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABWallet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCode, "GetWalletInfoByCurrencyCode" }, // 4256831385
		{ &Z_Construct_UFunction_UABWallet_GetWalletInfoByCurrencyCodeV2, "GetWalletInfoByCurrencyCodeV2" }, // 1369773463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABWallet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABWallet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABWallet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABWallet_Statics::ClassParams = {
	&UABWallet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABWallet_Statics::Class_MetaDataParams), Z_Construct_UClass_UABWallet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABWallet()
{
	if (!Z_Registration_Info_UClass_UABWallet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABWallet.OuterSingleton, Z_Construct_UClass_UABWallet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABWallet.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABWallet>()
{
	return UABWallet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABWallet);
UABWallet::~UABWallet() {}
// End Class UABWallet

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABWallet, UABWallet::StaticClass, TEXT("UABWallet"), &Z_Registration_Info_UClass_UABWallet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABWallet), 2711122070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_3817764530(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABWallet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
