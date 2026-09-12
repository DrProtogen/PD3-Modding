// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABServerEntitlement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABServerEntitlement() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerEntitlement();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerEntitlement_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementHistoryResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABServerEntitlement Function GetUserEntitlementHistory
struct Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics
{
	struct ABServerEntitlement_eventGetUserEntitlementHistory_Parms
	{
		FString UserId;
		FString EntitlementId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABServerEntitlement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerEntitlement_eventGetUserEntitlementHistory_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerEntitlement_eventGetUserEntitlementHistory_Parms, EntitlementId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitlementId_MetaData), NewProp_EntitlementId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerEntitlement_eventGetUserEntitlementHistory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccelByteModelsEntitlementHistoryResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 803066896
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABServerEntitlement_eventGetUserEntitlementHistory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_EntitlementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABServerEntitlement, nullptr, "GetUserEntitlementHistory", nullptr, nullptr, Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::ABServerEntitlement_eventGetUserEntitlementHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::ABServerEntitlement_eventGetUserEntitlementHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABServerEntitlement::execGetUserEntitlementHistory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_EntitlementId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEntitlementHistory(Z_Param_UserId,Z_Param_EntitlementId,FDAccelByteModelsEntitlementHistoryResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABServerEntitlement Function GetUserEntitlementHistory

// Begin Class UABServerEntitlement
void UABServerEntitlement::StaticRegisterNativesUABServerEntitlement()
{
	UClass* Class = UABServerEntitlement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserEntitlementHistory", &UABServerEntitlement::execGetUserEntitlementHistory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABServerEntitlement);
UClass* Z_Construct_UClass_UABServerEntitlement_NoRegister()
{
	return UABServerEntitlement::StaticClass();
}
struct Z_Construct_UClass_UABServerEntitlement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABServerEntitlement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABServerEntitlement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABServerEntitlement_GetUserEntitlementHistory, "GetUserEntitlementHistory" }, // 4228435451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABServerEntitlement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABServerEntitlement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerEntitlement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABServerEntitlement_Statics::ClassParams = {
	&UABServerEntitlement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABServerEntitlement_Statics::Class_MetaDataParams), Z_Construct_UClass_UABServerEntitlement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABServerEntitlement()
{
	if (!Z_Registration_Info_UClass_UABServerEntitlement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABServerEntitlement.OuterSingleton, Z_Construct_UClass_UABServerEntitlement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABServerEntitlement.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABServerEntitlement>()
{
	return UABServerEntitlement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABServerEntitlement);
UABServerEntitlement::~UABServerEntitlement() {}
// End Class UABServerEntitlement

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABServerEntitlement, UABServerEntitlement::StaticClass, TEXT("UABServerEntitlement"), &Z_Registration_Info_UClass_UABServerEntitlement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABServerEntitlement), 3467865457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_4291681265(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerEntitlement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
