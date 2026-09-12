// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABMatchmaking.h"
#include "AccelByteUe4Sdk/Public/CancelMatchmakingRequest.h"
#include "AccelByteUe4Sdk/Public/SetReadyConsentRequest.h"
#include "AccelByteUe4Sdk/Public/SetRejectConsentRequest.h"
#include "AccelByteUe4Sdk/Public/StartMatchmakingRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABMatchmaking() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMatchmaking();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMatchmaking_NoRegister();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelMatchmakingResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDsNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRematchmakingNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentNotif__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DStartMatchmakingResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FCancelMatchmakingRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetReadyConsentRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetRejectConsentRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FStartMatchmakingRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABMatchmaking Function CancelMatchmaking
struct Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics
{
	struct ABMatchmaking_eventCancelMatchmaking_Parms
	{
		FCancelMatchmakingRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, Request), Z_Construct_UScriptStruct_FCancelMatchmakingRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 4273326746
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCancelMatchmakingResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1468390611
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventCancelMatchmaking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "CancelMatchmaking", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::ABMatchmaking_eventCancelMatchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::ABMatchmaking_eventCancelMatchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execCancelMatchmaking)
{
	P_GET_STRUCT_REF(FCancelMatchmakingRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelMatchmaking(Z_Param_Out_Request,FDCancelMatchmakingResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function CancelMatchmaking

// Begin Class UABMatchmaking Function SetOnDs
struct Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics
{
	struct ABMatchmaking_eventSetOnDs_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnDs_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DDsNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2664016363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnDs", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::ABMatchmaking_eventSetOnDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::ABMatchmaking_eventSetOnDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetOnDs)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnDs(FDDsNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetOnDs

// Begin Class UABMatchmaking Function SetOnMatchmaking
struct Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics
{
	struct ABMatchmaking_eventSetOnMatchmaking_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnMatchmaking_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DMatchmakingNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1642602103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnMatchmaking", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::ABMatchmaking_eventSetOnMatchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::ABMatchmaking_eventSetOnMatchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetOnMatchmaking)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnMatchmaking(FDMatchmakingNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetOnMatchmaking

// Begin Class UABMatchmaking Function SetOnRematchmaking
struct Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics
{
	struct ABMatchmaking_eventSetOnRematchmaking_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnRematchmaking_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRematchmakingNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2049088963
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnRematchmaking", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::ABMatchmaking_eventSetOnRematchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::ABMatchmaking_eventSetOnRematchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetOnRematchmaking)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnRematchmaking(FDRematchmakingNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetOnRematchmaking

// Begin Class UABMatchmaking Function SetOnSetReadyConsent
struct Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics
{
	struct ABMatchmaking_eventSetOnSetReadyConsent_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnSetReadyConsent_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2245975060
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnSetReadyConsent", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::ABMatchmaking_eventSetOnSetReadyConsent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::ABMatchmaking_eventSetOnSetReadyConsent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetOnSetReadyConsent)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnSetReadyConsent(FDSetReadyConsentNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetOnSetReadyConsent

// Begin Class UABMatchmaking Function SetOnSetRejectConsent
struct Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics
{
	struct ABMatchmaking_eventSetOnSetRejectConsent_Parms
	{
		FScriptDelegate OnNotif;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetOnSetRejectConsent_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentNotif__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3060399665
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::NewProp_OnNotif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetOnSetRejectConsent", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::ABMatchmaking_eventSetOnSetRejectConsent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::ABMatchmaking_eventSetOnSetRejectConsent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetOnSetRejectConsent)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnSetRejectConsent(FDSetRejectConsentNotif(Z_Param_OnNotif));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetOnSetRejectConsent

// Begin Class UABMatchmaking Function SetReadyConsent
struct Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics
{
	struct ABMatchmaking_eventSetReadyConsent_Parms
	{
		FSetReadyConsentRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, Request), Z_Construct_UScriptStruct_FSetReadyConsentRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 2493377271
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetReadyConsentResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 127971830
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetReadyConsent_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetReadyConsent", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::ABMatchmaking_eventSetReadyConsent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::ABMatchmaking_eventSetReadyConsent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetReadyConsent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetReadyConsent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetReadyConsent)
{
	P_GET_STRUCT_REF(FSetReadyConsentRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReadyConsent(Z_Param_Out_Request,FDSetReadyConsentResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetReadyConsent

// Begin Class UABMatchmaking Function SetRejectConsent
struct Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics
{
	struct ABMatchmaking_eventSetRejectConsent_Parms
	{
		FSetRejectConsentRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, Request), Z_Construct_UScriptStruct_FSetRejectConsentRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 4276111550
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSetRejectConsentResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 489553904
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventSetRejectConsent_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "SetRejectConsent", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::ABMatchmaking_eventSetRejectConsent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::ABMatchmaking_eventSetRejectConsent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_SetRejectConsent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_SetRejectConsent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execSetRejectConsent)
{
	P_GET_STRUCT_REF(FSetRejectConsentRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRejectConsent(Z_Param_Out_Request,FDSetRejectConsentResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function SetRejectConsent

// Begin Class UABMatchmaking Function StartMatchmaking
struct Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics
{
	struct ABMatchmaking_eventStartMatchmaking_Parms
	{
		FStartMatchmakingRequest Request;
		FScriptDelegate OnResponse;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, Request), Z_Construct_UScriptStruct_FStartMatchmakingRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 367063578
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DStartMatchmakingResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2006671671
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABMatchmaking_eventStartMatchmaking_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABMatchmaking, nullptr, "StartMatchmaking", nullptr, nullptr, Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::ABMatchmaking_eventStartMatchmaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::ABMatchmaking_eventStartMatchmaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABMatchmaking_StartMatchmaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABMatchmaking_StartMatchmaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABMatchmaking::execStartMatchmaking)
{
	P_GET_STRUCT_REF(FStartMatchmakingRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMatchmaking(Z_Param_Out_Request,FDStartMatchmakingResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABMatchmaking Function StartMatchmaking

// Begin Class UABMatchmaking
void UABMatchmaking::StaticRegisterNativesUABMatchmaking()
{
	UClass* Class = UABMatchmaking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelMatchmaking", &UABMatchmaking::execCancelMatchmaking },
		{ "SetOnDs", &UABMatchmaking::execSetOnDs },
		{ "SetOnMatchmaking", &UABMatchmaking::execSetOnMatchmaking },
		{ "SetOnRematchmaking", &UABMatchmaking::execSetOnRematchmaking },
		{ "SetOnSetReadyConsent", &UABMatchmaking::execSetOnSetReadyConsent },
		{ "SetOnSetRejectConsent", &UABMatchmaking::execSetOnSetRejectConsent },
		{ "SetReadyConsent", &UABMatchmaking::execSetReadyConsent },
		{ "SetRejectConsent", &UABMatchmaking::execSetRejectConsent },
		{ "StartMatchmaking", &UABMatchmaking::execStartMatchmaking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABMatchmaking);
UClass* Z_Construct_UClass_UABMatchmaking_NoRegister()
{
	return UABMatchmaking::StaticClass();
}
struct Z_Construct_UClass_UABMatchmaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABMatchmaking.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABMatchmaking_CancelMatchmaking, "CancelMatchmaking" }, // 2478583404
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnDs, "SetOnDs" }, // 3914765287
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnMatchmaking, "SetOnMatchmaking" }, // 4029439331
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnRematchmaking, "SetOnRematchmaking" }, // 1191742424
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnSetReadyConsent, "SetOnSetReadyConsent" }, // 1656749083
		{ &Z_Construct_UFunction_UABMatchmaking_SetOnSetRejectConsent, "SetOnSetRejectConsent" }, // 2405983299
		{ &Z_Construct_UFunction_UABMatchmaking_SetReadyConsent, "SetReadyConsent" }, // 2303821500
		{ &Z_Construct_UFunction_UABMatchmaking_SetRejectConsent, "SetRejectConsent" }, // 3884162369
		{ &Z_Construct_UFunction_UABMatchmaking_StartMatchmaking, "StartMatchmaking" }, // 257441737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABMatchmaking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABMatchmaking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABMatchmaking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABMatchmaking_Statics::ClassParams = {
	&UABMatchmaking::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABMatchmaking_Statics::Class_MetaDataParams), Z_Construct_UClass_UABMatchmaking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABMatchmaking()
{
	if (!Z_Registration_Info_UClass_UABMatchmaking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABMatchmaking.OuterSingleton, Z_Construct_UClass_UABMatchmaking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABMatchmaking.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABMatchmaking>()
{
	return UABMatchmaking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABMatchmaking);
UABMatchmaking::~UABMatchmaking() {}
// End Class UABMatchmaking

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABMatchmaking, UABMatchmaking::StaticClass, TEXT("UABMatchmaking"), &Z_Registration_Info_UClass_UABMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABMatchmaking), 2697252854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_3699137284(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABMatchmaking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
