// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCurrency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCurrency() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCurrency();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCurrency_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCurrencyListResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABCurrency Function GetCurrencyList
struct Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics
{
	struct ABCurrency_eventGetCurrencyList_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		EAccelByteCurrencyType CurrencyType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCurrency.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCurrencyListResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3389216162
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCurrency_eventGetCurrencyList_Parms, CurrencyType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteCurrencyType, METADATA_PARAMS(0, nullptr) }; // 1564416609
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::NewProp_CurrencyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCurrency, nullptr, "GetCurrencyList", nullptr, nullptr, Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::ABCurrency_eventGetCurrencyList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::ABCurrency_eventGetCurrencyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCurrency_GetCurrencyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCurrency_GetCurrencyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCurrency::execGetCurrencyList)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_ENUM(EAccelByteCurrencyType,Z_Param_CurrencyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrencyList(FDArrayModelsCurrencyListResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),EAccelByteCurrencyType(Z_Param_CurrencyType));
	P_NATIVE_END;
}
// End Class UABCurrency Function GetCurrencyList

// Begin Class UABCurrency
void UABCurrency::StaticRegisterNativesUABCurrency()
{
	UClass* Class = UABCurrency::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrencyList", &UABCurrency::execGetCurrencyList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCurrency);
UClass* Z_Construct_UClass_UABCurrency_NoRegister()
{
	return UABCurrency::StaticClass();
}
struct Z_Construct_UClass_UABCurrency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCurrency.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCurrency.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCurrency_GetCurrencyList, "GetCurrencyList" }, // 615539201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCurrency>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCurrency_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCurrency_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCurrency_Statics::ClassParams = {
	&UABCurrency::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCurrency_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCurrency_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCurrency()
{
	if (!Z_Registration_Info_UClass_UABCurrency.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCurrency.OuterSingleton, Z_Construct_UClass_UABCurrency_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCurrency.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCurrency>()
{
	return UABCurrency::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCurrency);
UABCurrency::~UABCurrency() {}
// End Class UABCurrency

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCurrency, UABCurrency::StaticClass, TEXT("UABCurrency"), &Z_Registration_Info_UClass_UABCurrency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCurrency), 3562768363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_492120325(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCurrency_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
