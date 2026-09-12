// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerOauth2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerOauth2() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerOauth2();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerOauth2_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJwkSetDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerOauth2 Function ForgetAllCredentials
struct Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "ForgetAllCredentials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerOauth2::execForgetAllCredentials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForgetAllCredentials();
	P_NATIVE_END;
}
// End Class UABServerOauth2 Function ForgetAllCredentials

// Begin Class UABServerOauth2 Function GetJwks
struct Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics
{
	struct ABServerOauth2_eventGetJwks_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerOauth2_eventGetJwks_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DJwkSetDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 4138021011
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerOauth2_eventGetJwks_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "GetJwks", nullptr, nullptr, Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::ABServerOauth2_eventGetJwks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::ABServerOauth2_eventGetJwks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerOauth2_GetJwks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerOauth2_GetJwks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerOauth2::execGetJwks)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetJwks(FDJwkSetDelegate(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerOauth2 Function GetJwks

// Begin Class UABServerOauth2 Function LoginWithClientCredentials
struct Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics
{
	struct ABServerOauth2_eventLoginWithClientCredentials_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerOauth2_eventLoginWithClientCredentials_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerOauth2_eventLoginWithClientCredentials_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerOauth2, nullptr, "LoginWithClientCredentials", nullptr, nullptr, Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::ABServerOauth2_eventLoginWithClientCredentials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::ABServerOauth2_eventLoginWithClientCredentials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerOauth2::execLoginWithClientCredentials)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithClientCredentials(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerOauth2 Function LoginWithClientCredentials

// Begin Class UABServerOauth2
void UABServerOauth2::StaticRegisterNativesUABServerOauth2()
{
	UClass* Class = UABServerOauth2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForgetAllCredentials", &UABServerOauth2::execForgetAllCredentials },
		{ "GetJwks", &UABServerOauth2::execGetJwks },
		{ "LoginWithClientCredentials", &UABServerOauth2::execLoginWithClientCredentials },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerOauth2);
UClass* Z_Construct_UClass_UABServerOauth2_NoRegister()
{
	return UABServerOauth2::StaticClass();
}
struct Z_Construct_UClass_UABServerOauth2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerOauth2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerOauth2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerOauth2_ForgetAllCredentials, "ForgetAllCredentials" }, // 633218917
		{ &Z_Construct_UFunction_UABServerOauth2_GetJwks, "GetJwks" }, // 630689375
		{ &Z_Construct_UFunction_UABServerOauth2_LoginWithClientCredentials, "LoginWithClientCredentials" }, // 3126450732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerOauth2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerOauth2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerOauth2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerOauth2_Statics::ClassParams = {
	&UABServerOauth2::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerOauth2_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerOauth2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerOauth2()
{
	if (!Z_Registration_Info_UClass_UABServerOauth2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerOauth2.OuterSingleton, Z_Construct_UClass_UABServerOauth2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerOauth2.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerOauth2>()
{
	return UABServerOauth2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerOauth2);
UABServerOauth2::~UABServerOauth2() {}
// End Class UABServerOauth2

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerOauth2, UABServerOauth2::StaticClass, TEXT("UABServerOauth2"), &Z_Registration_Info_UClass_UABServerOauth2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerOauth2), 27629717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_3145866691(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerOauth2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
