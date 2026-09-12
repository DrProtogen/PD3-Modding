// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABFulfillment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFulfillment() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFulfillment();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFulfillment_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsFulfillmentResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABFulfillment Function RedeemCode
struct Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics
{
	struct ABFulfillment_eventRedeemCode_Parms
	{
		FString Code;
		FString Region;
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABFulfillment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsFulfillmentResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1715572507
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABFulfillment_eventRedeemCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABFulfillment, nullptr, "RedeemCode", nullptr, nullptr, Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::ABFulfillment_eventRedeemCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::ABFulfillment_eventRedeemCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABFulfillment_RedeemCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABFulfillment_RedeemCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABFulfillment::execRedeemCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Code);
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RedeemCode(Z_Param_Code,Z_Param_Region,Z_Param_Language,FDAccelByteModelsFulfillmentResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABFulfillment Function RedeemCode

// Begin Class UABFulfillment
void UABFulfillment::StaticRegisterNativesUABFulfillment()
{
	UClass* Class = UABFulfillment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RedeemCode", &UABFulfillment::execRedeemCode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABFulfillment);
UClass* Z_Construct_UClass_UABFulfillment_NoRegister()
{
	return UABFulfillment::StaticClass();
}
struct Z_Construct_UClass_UABFulfillment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABFulfillment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABFulfillment.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABFulfillment_RedeemCode, "RedeemCode" }, // 2411156765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABFulfillment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABFulfillment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABFulfillment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABFulfillment_Statics::ClassParams = {
	&UABFulfillment::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABFulfillment_Statics::Class_MetaDataParams), Z_Construct_UClass_UABFulfillment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABFulfillment()
{
	if (!Z_Registration_Info_UClass_UABFulfillment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABFulfillment.OuterSingleton, Z_Construct_UClass_UABFulfillment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABFulfillment.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABFulfillment>()
{
	return UABFulfillment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABFulfillment);
UABFulfillment::~UABFulfillment() {}
// End Class UABFulfillment

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFulfillment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABFulfillment, UABFulfillment::StaticClass, TEXT("UABFulfillment"), &Z_Registration_Info_UClass_UABFulfillment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABFulfillment), 1348886117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFulfillment_h_1634670744(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFulfillment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABFulfillment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
