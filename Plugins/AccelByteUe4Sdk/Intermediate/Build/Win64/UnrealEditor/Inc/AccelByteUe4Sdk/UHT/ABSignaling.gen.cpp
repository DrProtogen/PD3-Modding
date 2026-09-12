// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSignaling.h"
#include "AccelByteUe4Sdk/Public/SendSignalingMessageRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSignaling() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSignaling();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSignaling_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSignalingP2PNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendSignalingMessageRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABSignaling Function SendSignalingMessage
struct Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics
{
	struct ABSignaling_eventSendSignalingMessage_Parms
	{
		FSendSignalingMessageRequest Request;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSignaling_eventSendSignalingMessage_Parms, Request), Z_Construct_UScriptStruct_FSendSignalingMessageRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3600886326
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSignaling_eventSendSignalingMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSignaling, nullptr, "SendSignalingMessage", nullptr, nullptr, Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::ABSignaling_eventSendSignalingMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::ABSignaling_eventSendSignalingMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSignaling_SendSignalingMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSignaling::execSendSignalingMessage)
{
	P_GET_STRUCT_REF(FSendSignalingMessageRequest,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SendSignalingMessage(Z_Param_Out_Request);
	P_NATIVE_END;
}
// End Class UABSignaling Function SendSignalingMessage

// Begin Class UABSignaling Function SetSignalingP2PNotif
struct Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics
{
	struct ABSignaling_eventSetSignalingP2PNotif_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSignaling_eventSetSignalingP2PNotif_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSignalingP2PNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2386670183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSignaling, nullptr, "SetSignalingP2PNotif", nullptr, nullptr, Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::ABSignaling_eventSetSignalingP2PNotif_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::ABSignaling_eventSetSignalingP2PNotif_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABSignaling::execSetSignalingP2PNotif)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSignalingP2PNotif(FDSignalingP2PNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABSignaling Function SetSignalingP2PNotif

// Begin Class UABSignaling
void UABSignaling::StaticRegisterNativesUABSignaling()
{
	UClass* Class = UABSignaling::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendSignalingMessage", &UABSignaling::execSendSignalingMessage },
		{ "SetSignalingP2PNotif", &UABSignaling::execSetSignalingP2PNotif },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSignaling);
UClass* Z_Construct_UClass_UABSignaling_NoRegister()
{
	return UABSignaling::StaticClass();
}
struct Z_Construct_UClass_UABSignaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSignaling.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSignaling_SendSignalingMessage, "SendSignalingMessage" }, // 2075677144
		{ &Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif, "SetSignalingP2PNotif" }, // 906438833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSignaling>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABSignaling_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABSignaling_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSignaling_Statics::ClassParams = {
	&UABSignaling::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABSignaling_Statics::Class_MetaDataParams), Z_Construct_UClass_UABSignaling_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABSignaling()
{
	if (!Z_Registration_Info_UClass_UABSignaling.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSignaling.OuterSingleton, Z_Construct_UClass_UABSignaling_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABSignaling.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSignaling>()
{
	return UABSignaling::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABSignaling);
UABSignaling::~UABSignaling() {}
// End Class UABSignaling

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABSignaling, UABSignaling::StaticClass, TEXT("UABSignaling"), &Z_Registration_Info_UClass_UABSignaling, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSignaling), 3942485495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_2446428157(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
