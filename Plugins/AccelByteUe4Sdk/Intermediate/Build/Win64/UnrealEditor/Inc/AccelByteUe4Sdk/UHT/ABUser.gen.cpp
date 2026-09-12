// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABUser.h"
#include "AccelByteUe4Sdk/Public/PlatformAccountInfoRequest.h"
#include "AccelByteUe4Sdk/Public/RegisterRequestv3.h"
#include "AccelByteUe4Sdk/Public/UpdateEmailRequest.h"
#include "AccelByteUe4Sdk/Public/UserInputValidationRequest.h"
#include "AccelByteUe4Sdk/Public/UserUpdateRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABUser() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUser();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUser_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchPlatformType();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchType();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserPlatformInfosResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBooleanResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkPlatformUserIdResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCountryInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPlatformLinksResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSimpleUserDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserInputValidationResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformAccountInfoRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FRegisterRequestv3();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateEmailRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserInputValidationRequest();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUserUpdateRequest();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABUser Function BulkGetUserByOtherPlatformUserIds
struct Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics
{
	struct ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms
	{
		EAccelBytePlatformType PlatformType;
		TArray<FString> OtherPlatformUserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlatformUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OtherPlatformUserId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherPlatformUserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_Inner = { "OtherPlatformUserId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId = { "OtherPlatformUserId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OtherPlatformUserId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPlatformUserId_MetaData), NewProp_OtherPlatformUserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkPlatformUserIdResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3059015850
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OtherPlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "BulkGetUserByOtherPlatformUserIds", nullptr, nullptr, Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::ABUser_eventBulkGetUserByOtherPlatformUserIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execBulkGetUserByOtherPlatformUserIds)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OtherPlatformUserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulkGetUserByOtherPlatformUserIds(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Out_OtherPlatformUserId,FDBulkPlatformUserIdResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function BulkGetUserByOtherPlatformUserIds

// Begin Class UABUser Function ForcedLinkOtherPlatform
struct Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics
{
	struct ABUser_eventForcedLinkOtherPlatform_Parms
	{
		EAccelBytePlatformType PlatformType;
		FString PlatformUserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, PlatformUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUserId_MetaData), NewProp_PlatformUserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventForcedLinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3935799973
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_PlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ForcedLinkOtherPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::ABUser_eventForcedLinkOtherPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::ABUser_eventForcedLinkOtherPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execForcedLinkOtherPlatform)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformUserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForcedLinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_PlatformUserId,FDHandler(Z_Param_OnSuccess),FDAccountLinkConflictErrorJsonResponse(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function ForcedLinkOtherPlatform

// Begin Class UABUser Function ForgetAllCredentials
struct Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ForgetAllCredentials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UABUser_ForgetAllCredentials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_ForgetAllCredentials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execForgetAllCredentials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForgetAllCredentials();
	P_NATIVE_END;
}
// End Class UABUser Function ForgetAllCredentials

// Begin Class UABUser Function GetCountryFromIP
struct Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics
{
	struct ABUser_eventGetCountryFromIP_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetCountryFromIP_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCountryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2782635122
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetCountryFromIP_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetCountryFromIP", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::ABUser_eventGetCountryFromIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::ABUser_eventGetCountryFromIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetCountryFromIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetCountryFromIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetCountryFromIP)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCountryFromIP(FDCountryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetCountryFromIP

// Begin Class UABUser Function GetData
struct Z_Construct_UFunction_UABUser_GetData_Statics
{
	struct ABUser_eventGetData_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetData_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetData_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetData_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetData_Statics::ABUser_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetData_Statics::ABUser_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetData)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetData(FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetData

// Begin Class UABUser Function GetDataWithLinkedPlatform
struct Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics
{
	struct ABUser_eventGetDataWithLinkedPlatform_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetDataWithLinkedPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetDataWithLinkedPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetDataWithLinkedPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::ABUser_eventGetDataWithLinkedPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::ABUser_eventGetDataWithLinkedPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetDataWithLinkedPlatform)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDataWithLinkedPlatform(FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetDataWithLinkedPlatform

// Begin Class UABUser Function GetPlatformLinks
struct Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics
{
	struct ABUser_eventGetPlatformLinks_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetPlatformLinks_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPlatformLinksResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 861796224
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetPlatformLinks_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetPlatformLinks", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::ABUser_eventGetPlatformLinks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::ABUser_eventGetPlatformLinks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetPlatformLinks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetPlatformLinks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetPlatformLinks)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlatformLinks(FDPagedPlatformLinksResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetPlatformLinks

// Begin Class UABUser Function GetUserByUserId
struct Z_Construct_UFunction_UABUser_GetUserByUserId_Statics
{
	struct ABUser_eventGetUserByUserId_Parms
	{
		FString UserId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, UserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSimpleUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 101609472
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserByUserId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserByUserId", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::ABUser_eventGetUserByUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::ABUser_eventGetUserByUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetUserByUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetUserByUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetUserByUserId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserByUserId(Z_Param_UserId,FDSimpleUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetUserByUserId

// Begin Class UABUser Function GetUserEligibleToPlay
struct Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics
{
	struct ABUser_eventGetUserEligibleToPlay_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserEligibleToPlay_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBooleanResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1724569771
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserEligibleToPlay_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserEligibleToPlay", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::ABUser_eventGetUserEligibleToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::ABUser_eventGetUserEligibleToPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetUserEligibleToPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetUserEligibleToPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetUserEligibleToPlay)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserEligibleToPlay(FDBooleanResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetUserEligibleToPlay

// Begin Class UABUser Function GetUserOtherPlatformBasicPublicInfo
struct Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics
{
	struct ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms
	{
		FPlatformAccountInfoRequest Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms, Request), Z_Construct_UScriptStruct_FPlatformAccountInfoRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 3867710682
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserPlatformInfosResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3052923301
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "GetUserOtherPlatformBasicPublicInfo", nullptr, nullptr, Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::ABUser_eventGetUserOtherPlatformBasicPublicInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execGetUserOtherPlatformBasicPublicInfo)
{
	P_GET_STRUCT_REF(FPlatformAccountInfoRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserOtherPlatformBasicPublicInfo(Z_Param_Out_Request,FDAccountUserPlatformInfosResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function GetUserOtherPlatformBasicPublicInfo

// Begin Class UABUser Function LinkOtherPlatform
struct Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics
{
	struct ABUser_eventLinkOtherPlatform_Parms
	{
		EAccelBytePlatformType PlatformType;
		FString Ticket;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, Ticket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ticket_MetaData), NewProp_Ticket_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountLinkConflictErrorJsonResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3935799973
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LinkOtherPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::ABUser_eventLinkOtherPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::ABUser_eventLinkOtherPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LinkOtherPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LinkOtherPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLinkOtherPlatform)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ticket);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_Ticket,FDHandler(Z_Param_OnSuccess),FDAccountLinkConflictErrorJsonResponse(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LinkOtherPlatform

// Begin Class UABUser Function LoginByExchangeCodeForToken
struct Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics
{
	struct ABUser_eventLoginByExchangeCodeForToken_Parms
	{
		FString Code;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginByExchangeCodeForToken", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::ABUser_eventLoginByExchangeCodeForToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::ABUser_eventLoginByExchangeCodeForToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginByExchangeCodeForToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Code);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginByExchangeCodeForToken(Z_Param_Code,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginByExchangeCodeForToken

// Begin Class UABUser Function LoginByExchangeCodeForTokenV4
struct Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics
{
	struct ABUser_eventLoginByExchangeCodeForTokenV4_Parms
	{
		FString Code;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForTokenV4_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Code_MetaData), NewProp_Code_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForTokenV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginByExchangeCodeForTokenV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_Code,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginByExchangeCodeForTokenV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::ABUser_eventLoginByExchangeCodeForTokenV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::ABUser_eventLoginByExchangeCodeForTokenV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginByExchangeCodeForTokenV4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Code);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginByExchangeCodeForTokenV4(Z_Param_Code,FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginByExchangeCodeForTokenV4

// Begin Class UABUser Function LoginWithDeviceId
struct Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics
{
	struct ABUser_eventLoginWithDeviceId_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithDeviceId", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::ABUser_eventLoginWithDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::ABUser_eventLoginWithDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithDeviceId)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithDeviceId(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithDeviceId

// Begin Class UABUser Function LoginWithDeviceIdV4
struct Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics
{
	struct ABUser_eventLoginWithDeviceIdV4_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceIdV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithDeviceIdV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithDeviceIdV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::ABUser_eventLoginWithDeviceIdV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::ABUser_eventLoginWithDeviceIdV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithDeviceIdV4)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithDeviceIdV4(FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithDeviceIdV4

// Begin Class UABUser Function LoginWithLauncher
struct Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics
{
	struct ABUser_eventLoginWithLauncher_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncher_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncher_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithLauncher", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::ABUser_eventLoginWithLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::ABUser_eventLoginWithLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithLauncher)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithLauncher(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithLauncher

// Begin Class UABUser Function LoginWithLauncherV4
struct Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics
{
	struct ABUser_eventLoginWithLauncherV4_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncherV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithLauncherV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithLauncherV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::ABUser_eventLoginWithLauncherV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::ABUser_eventLoginWithLauncherV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithLauncherV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithLauncherV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithLauncherV4)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithLauncherV4(FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithLauncherV4

// Begin Class UABUser Function LoginWithOtherPlatform
struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics
{
	struct ABUser_eventLoginWithOtherPlatform_Parms
	{
		EAccelBytePlatformType PlatformType;
		FString PlatformToken;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		bool bCreateHeadless;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static void NewProp_bCreateHeadless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, PlatformToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformToken_MetaData), NewProp_PlatformToken_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
void Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
{
	((ABUser_eventLoginWithOtherPlatform_Parms*)Obj)->bCreateHeadless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatform_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_PlatformToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::NewProp_bCreateHeadless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::ABUser_eventLoginWithOtherPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::ABUser_eventLoginWithOtherPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatform)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_UBOOL(Z_Param_bCreateHeadless);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_PlatformToken,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithOtherPlatform

// Begin Class UABUser Function LoginWithOtherPlatformId
struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics
{
	struct ABUser_eventLoginWithOtherPlatformId_Parms
	{
		FString PlatformId;
		FString PlatformToken;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		bool bCreateHeadless;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static void NewProp_bCreateHeadless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, PlatformToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformToken_MetaData), NewProp_PlatformToken_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
void Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
{
	((ABUser_eventLoginWithOtherPlatformId_Parms*)Obj)->bCreateHeadless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatformId_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_PlatformToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::NewProp_bCreateHeadless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatformId", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::ABUser_eventLoginWithOtherPlatformId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::ABUser_eventLoginWithOtherPlatformId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatformId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_UBOOL(Z_Param_bCreateHeadless);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithOtherPlatformId(Z_Param_PlatformId,Z_Param_PlatformToken,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithOtherPlatformId

// Begin Class UABUser Function LoginWithOtherPlatformIdV4
struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics
{
	struct ABUser_eventLoginWithOtherPlatformIdV4_Parms
	{
		FString PlatformId;
		FString PlatformToken;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		bool bCreateHeadless;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static void NewProp_bCreateHeadless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformIdV4_Parms, PlatformId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformIdV4_Parms, PlatformToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformToken_MetaData), NewProp_PlatformToken_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformIdV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformIdV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
void Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
{
	((ABUser_eventLoginWithOtherPlatformIdV4_Parms*)Obj)->bCreateHeadless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatformIdV4_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_PlatformToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::NewProp_bCreateHeadless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatformIdV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::ABUser_eventLoginWithOtherPlatformIdV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::ABUser_eventLoginWithOtherPlatformIdV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatformIdV4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_UBOOL(Z_Param_bCreateHeadless);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithOtherPlatformIdV4(Z_Param_PlatformId,Z_Param_PlatformToken,FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithOtherPlatformIdV4

// Begin Class UABUser Function LoginWithOtherPlatformV4
struct Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics
{
	struct ABUser_eventLoginWithOtherPlatformV4_Parms
	{
		EAccelBytePlatformType PlatformType;
		FString PlatformToken;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
		bool bCreateHeadless;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformToken;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static void NewProp_bCreateHeadless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateHeadless;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformV4_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformToken = { "PlatformToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformV4_Parms, PlatformToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformToken_MetaData), NewProp_PlatformToken_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithOtherPlatformV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
void Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_bCreateHeadless_SetBit(void* Obj)
{
	((ABUser_eventLoginWithOtherPlatformV4_Parms*)Obj)->bCreateHeadless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_bCreateHeadless = { "bCreateHeadless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABUser_eventLoginWithOtherPlatformV4_Parms), &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_bCreateHeadless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_PlatformToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_OnError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::NewProp_bCreateHeadless,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithOtherPlatformV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::ABUser_eventLoginWithOtherPlatformV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::ABUser_eventLoginWithOtherPlatformV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithOtherPlatformV4)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformToken);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_GET_UBOOL(Z_Param_bCreateHeadless);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithOtherPlatformV4(EAccelBytePlatformType(Z_Param_PlatformType),Z_Param_PlatformToken,FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError),Z_Param_bCreateHeadless);
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithOtherPlatformV4

// Begin Class UABUser Function LoginWithRefreshToken
struct Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics
{
	struct ABUser_eventLoginWithRefreshToken_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshToken_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshToken_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithRefreshToken", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::ABUser_eventLoginWithRefreshToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::ABUser_eventLoginWithRefreshToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithRefreshToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithRefreshToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithRefreshToken)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithRefreshToken(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithRefreshToken

// Begin Class UABUser Function LoginWithRefreshTokenV4
struct Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics
{
	struct ABUser_eventLoginWithRefreshTokenV4_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshTokenV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithRefreshTokenV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithRefreshTokenV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::ABUser_eventLoginWithRefreshTokenV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::ABUser_eventLoginWithRefreshTokenV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithRefreshTokenV4)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithRefreshTokenV4(FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithRefreshTokenV4

// Begin Class UABUser Function LoginWithUsername
struct Z_Construct_UFunction_UABUser_LoginWithUsername_Statics
{
	struct ABUser_eventLoginWithUsername_Parms
	{
		FString Username;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsername_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithUsername", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::ABUser_eventLoginWithUsername_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::ABUser_eventLoginWithUsername_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithUsername()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithUsername_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithUsername)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithUsername(Z_Param_Username,Z_Param_Password,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithUsername

// Begin Class UABUser Function LoginWithUsernameV4
struct Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics
{
	struct ABUser_eventLoginWithUsernameV4_Parms
	{
		FString Username;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsernameV4_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsernameV4_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsernameV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLoginWithUsernameV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "LoginWithUsernameV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::ABUser_eventLoginWithUsernameV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::ABUser_eventLoginWithUsernameV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_LoginWithUsernameV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_LoginWithUsernameV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLoginWithUsernameV4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginWithUsernameV4(Z_Param_Username,Z_Param_Password,FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function LoginWithUsernameV4

// Begin Class UABUser Function Logout
struct Z_Construct_UFunction_UABUser_Logout_Statics
{
	struct ABUser_eventLogout_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLogout_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventLogout_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Logout_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Logout_Statics::ABUser_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Logout_Statics::ABUser_eventLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execLogout)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Logout

// Begin Class UABUser Function Register
struct Z_Construct_UFunction_UABUser_Register_Statics
{
	struct ABUser_eventRegister_Parms
	{
		FString Username;
		FString Password;
		FString DisplayName;
		FString Country;
		FString DateOfBirth;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, DateOfBirth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateOfBirth_MetaData), NewProp_DateOfBirth_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3402417914
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegister_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Register_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_DateOfBirth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Register_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Register", nullptr, nullptr, Z_Construct_UFunction_UABUser_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Register_Statics::ABUser_eventRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Register_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Register_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Register_Statics::ABUser_eventRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Register()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Register_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execRegister)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Country);
	P_GET_PROPERTY(FStrProperty,Z_Param_DateOfBirth);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Register(Z_Param_Username,Z_Param_Password,Z_Param_DisplayName,Z_Param_Country,Z_Param_DateOfBirth,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Register

// Begin Class UABUser Function Registerv2
struct Z_Construct_UFunction_UABUser_Registerv2_Statics
{
	struct ABUser_eventRegisterv2_Parms
	{
		FString EmailAddress;
		FString Username;
		FString Password;
		FString DisplayName;
		FString Country;
		FString DateOfBirth;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Country;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DateOfBirth;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, Country), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Country_MetaData), NewProp_Country_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, DateOfBirth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateOfBirth_MetaData), NewProp_DateOfBirth_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3402417914
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_EmailAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_Country,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_DateOfBirth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Registerv2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Registerv2", nullptr, nullptr, Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Registerv2_Statics::ABUser_eventRegisterv2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Registerv2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Registerv2_Statics::ABUser_eventRegisterv2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Registerv2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Registerv2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execRegisterv2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Country);
	P_GET_PROPERTY(FStrProperty,Z_Param_DateOfBirth);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Registerv2(Z_Param_EmailAddress,Z_Param_Username,Z_Param_Password,Z_Param_DisplayName,Z_Param_Country,Z_Param_DateOfBirth,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Registerv2

// Begin Class UABUser Function Registerv3
struct Z_Construct_UFunction_UABUser_Registerv3_Statics
{
	struct ABUser_eventRegisterv3_Parms
	{
		FRegisterRequestv3 RegisterRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisterRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest = { "RegisterRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, RegisterRequest), Z_Construct_UScriptStruct_FRegisterRequestv3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterRequest_MetaData), NewProp_RegisterRequest_MetaData) }; // 3710935206
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DRegisterResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3402417914
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventRegisterv3_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_RegisterRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Registerv3_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Registerv3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Registerv3", nullptr, nullptr, Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Registerv3_Statics::ABUser_eventRegisterv3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Registerv3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Registerv3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Registerv3_Statics::ABUser_eventRegisterv3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Registerv3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Registerv3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execRegisterv3)
{
	P_GET_STRUCT_REF(FRegisterRequestv3,Z_Param_Out_RegisterRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Registerv3(Z_Param_Out_RegisterRequest,FDRegisterResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Registerv3

// Begin Class UABUser Function ResetPassword
struct Z_Construct_UFunction_UABUser_ResetPassword_Statics
{
	struct ABUser_eventResetPassword_Parms
	{
		FString VerificationCode;
		FString EmailAddress;
		FString NewPassword;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewPassword;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, VerificationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerificationCode_MetaData), NewProp_VerificationCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword = { "NewPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, NewPassword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPassword_MetaData), NewProp_NewPassword_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventResetPassword_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_VerificationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_EmailAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_NewPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ResetPassword_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ResetPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ResetPassword", nullptr, nullptr, Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_ResetPassword_Statics::ABUser_eventResetPassword_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ResetPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_ResetPassword_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_ResetPassword_Statics::ABUser_eventResetPassword_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_ResetPassword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_ResetPassword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execResetPassword)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewPassword);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPassword(Z_Param_VerificationCode,Z_Param_EmailAddress,Z_Param_NewPassword,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function ResetPassword

// Begin Class UABUser Function SearchUsers
struct Z_Construct_UFunction_UABUser_SearchUsers_Statics
{
	struct ABUser_eventSearchUsers_Parms
	{
		FString Query;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2222801598
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsers_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsers_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsers", nullptr, nullptr, Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SearchUsers_Statics::ABUser_eventSearchUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SearchUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SearchUsers_Statics::ABUser_eventSearchUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SearchUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSearchUsers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchUsers(Z_Param_Query,FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SearchUsers

// Begin Class UABUser Function SearchUsersByOtherPlatformId
struct Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics
{
	struct ABUser_eventSearchUsersByOtherPlatformId_Parms
	{
		FString Query;
		FString PlatformId;
		EAccelByteSearchPlatformType PlatformBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformId_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformBy = { "PlatformBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformId_Parms, PlatformBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchPlatformType, METADATA_PARAMS(0, nullptr) }; // 2944366886
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2222801598
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_PlatformBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsersByOtherPlatformId", nullptr, nullptr, Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::ABUser_eventSearchUsersByOtherPlatformId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::ABUser_eventSearchUsersByOtherPlatformId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSearchUsersByOtherPlatformId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
	P_GET_ENUM(EAccelByteSearchPlatformType,Z_Param_PlatformBy);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchUsersByOtherPlatformId(Z_Param_Query,Z_Param_PlatformId,EAccelByteSearchPlatformType(Z_Param_PlatformBy),FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SearchUsersByOtherPlatformId

// Begin Class UABUser Function SearchUsersByOtherPlatformType
struct Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics
{
	struct ABUser_eventSearchUsersByOtherPlatformType_Parms
	{
		FString Query;
		EAccelBytePlatformType PlatformType;
		EAccelByteSearchPlatformType PlatformBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformBy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformType_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformType_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformBy = { "PlatformBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformType_Parms, PlatformBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchPlatformType, METADATA_PARAMS(0, nullptr) }; // 2944366886
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformType_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2222801598
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByOtherPlatformType_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformBy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_PlatformBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsersByOtherPlatformType", nullptr, nullptr, Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::ABUser_eventSearchUsersByOtherPlatformType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::ABUser_eventSearchUsersByOtherPlatformType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSearchUsersByOtherPlatformType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_ENUM(EAccelByteSearchPlatformType,Z_Param_PlatformBy);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchUsersByOtherPlatformType(Z_Param_Query,EAccelBytePlatformType(Z_Param_PlatformType),EAccelByteSearchPlatformType(Z_Param_PlatformBy),FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SearchUsersByOtherPlatformType

// Begin Class UABUser Function SearchUsersByType
struct Z_Construct_UFunction_UABUser_SearchUsersByType_Statics
{
	struct ABUser_eventSearchUsersByType_Parms
	{
		FString Query;
		EAccelByteSearchType By;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FBytePropertyParams NewProp_By_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_By;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By = { "By", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, By), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSearchType, METADATA_PARAMS(0, nullptr) }; // 3545445363
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DPagedPublicUsersInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2222801598
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSearchUsersByType_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_By,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SearchUsersByType", nullptr, nullptr, Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::ABUser_eventSearchUsersByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::ABUser_eventSearchUsersByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SearchUsersByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SearchUsersByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSearchUsersByType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Query);
	P_GET_ENUM(EAccelByteSearchType,Z_Param_By);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchUsersByType(Z_Param_Query,EAccelByteSearchType(Z_Param_By),FDPagedPublicUsersInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SearchUsersByType

// Begin Class UABUser Function SendResetPasswordCode
struct Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics
{
	struct ABUser_eventSendResetPasswordCode_Parms
	{
		FString EmailAddress;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendResetPasswordCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_EmailAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendResetPasswordCode", nullptr, nullptr, Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::ABUser_eventSendResetPasswordCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::ABUser_eventSendResetPasswordCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SendResetPasswordCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SendResetPasswordCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSendResetPasswordCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendResetPasswordCode(Z_Param_EmailAddress,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SendResetPasswordCode

// Begin Class UABUser Function SendUpdateEmailVerificationCode
struct Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics
{
	struct ABUser_eventSendUpdateEmailVerificationCode_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendUpdateEmailVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendUpdateEmailVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendUpdateEmailVerificationCode", nullptr, nullptr, Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::ABUser_eventSendUpdateEmailVerificationCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::ABUser_eventSendUpdateEmailVerificationCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSendUpdateEmailVerificationCode)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendUpdateEmailVerificationCode(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SendUpdateEmailVerificationCode

// Begin Class UABUser Function SendUpgradeVerificationCode
struct Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics
{
	struct ABUser_eventSendUpgradeVerificationCode_Parms
	{
		FString EmailAddress;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendUpgradeVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_EmailAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendUpgradeVerificationCode", nullptr, nullptr, Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::ABUser_eventSendUpgradeVerificationCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::ABUser_eventSendUpgradeVerificationCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSendUpgradeVerificationCode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendUpgradeVerificationCode(Z_Param_EmailAddress,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SendUpgradeVerificationCode

// Begin Class UABUser Function SendVerificationCode
struct Z_Construct_UFunction_UABUser_SendVerificationCode_Statics
{
	struct ABUser_eventSendVerificationCode_Parms
	{
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendVerificationCode_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventSendVerificationCode_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "SendVerificationCode", nullptr, nullptr, Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::ABUser_eventSendVerificationCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::ABUser_eventSendVerificationCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_SendVerificationCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_SendVerificationCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execSendVerificationCode)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendVerificationCode(FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function SendVerificationCode

// Begin Class UABUser Function TryRelogin
struct Z_Construct_UFunction_UABUser_TryRelogin_Statics
{
	struct ABUser_eventTryRelogin_Parms
	{
		FString PlatformUserID;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformUserID;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID = { "PlatformUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, PlatformUserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUserID_MetaData), NewProp_PlatformUserID_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryRelogin_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_PlatformUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryRelogin_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_TryRelogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "TryRelogin", nullptr, nullptr, Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_TryRelogin_Statics::ABUser_eventTryRelogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryRelogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_TryRelogin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_TryRelogin_Statics::ABUser_eventTryRelogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_TryRelogin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_TryRelogin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execTryRelogin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformUserID);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryRelogin(Z_Param_PlatformUserID,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function TryRelogin

// Begin Class UABUser Function TryReloginV4
struct Z_Construct_UFunction_UABUser_TryReloginV4_Statics
{
	struct ABUser_eventTryReloginV4_Parms
	{
		FString PlatformUserID;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformUserID;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_PlatformUserID = { "PlatformUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryReloginV4_Parms, PlatformUserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformUserID_MetaData), NewProp_PlatformUserID_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryReloginV4_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DLoginQueueInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2855119192
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventTryReloginV4_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOAuthErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2568893252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_TryReloginV4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_PlatformUserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_TryReloginV4_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryReloginV4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_TryReloginV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "TryReloginV4", nullptr, nullptr, Z_Construct_UFunction_UABUser_TryReloginV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryReloginV4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_TryReloginV4_Statics::ABUser_eventTryReloginV4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_TryReloginV4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_TryReloginV4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_TryReloginV4_Statics::ABUser_eventTryReloginV4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_TryReloginV4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_TryReloginV4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execTryReloginV4)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformUserID);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryReloginV4(Z_Param_PlatformUserID,FDLoginQueueInfoResponse(Z_Param_OnSuccess),FDOAuthErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function TryReloginV4

// Begin Class UABUser Function UnlinkAllOtherPlatform
struct Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics
{
	struct ABUser_eventUnlinkAllOtherPlatform_Parms
	{
		EAccelBytePlatformType PlatformType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 102819601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkAllOtherPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::ABUser_eventUnlinkAllOtherPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::ABUser_eventUnlinkAllOtherPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUnlinkAllOtherPlatform)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkAllOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UnlinkAllOtherPlatform

// Begin Class UABUser Function UnlinkAllOtherPlatformId
struct Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics
{
	struct ABUser_eventUnlinkAllOtherPlatformId_Parms
	{
		FString PlatformId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkAllOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 102819601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkAllOtherPlatformId", nullptr, nullptr, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::ABUser_eventUnlinkAllOtherPlatformId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::ABUser_eventUnlinkAllOtherPlatformId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUnlinkAllOtherPlatformId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkAllOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UnlinkAllOtherPlatformId

// Begin Class UABUser Function UnlinkOtherPlatform
struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics
{
	struct ABUser_eventUnlinkOtherPlatform_Parms
	{
		EAccelBytePlatformType PlatformType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatform_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatform", nullptr, nullptr, Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::ABUser_eventUnlinkOtherPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::ABUser_eventUnlinkOtherPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatform)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkOtherPlatform(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UnlinkOtherPlatform

// Begin Class UABUser Function UnlinkOtherPlatformId
struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics
{
	struct ABUser_eventUnlinkOtherPlatformId_Parms
	{
		FString PlatformId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, PlatformId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformId_MetaData), NewProp_PlatformId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 102819601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_PlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatformId", nullptr, nullptr, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::ABUser_eventUnlinkOtherPlatformId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::ABUser_eventUnlinkOtherPlatformId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatformId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlatformId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkOtherPlatformId(Z_Param_PlatformId,FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UnlinkOtherPlatformId

// Begin Class UABUser Function UnlinkOtherPlatformWithCustomErrorHandler
struct Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics
{
	struct ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms
	{
		EAccelBytePlatformType PlatformType;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlatformType;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, PlatformType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(0, nullptr) }; // 2726526364
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DCustomErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 102819601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_PlatformType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UnlinkOtherPlatformWithCustomErrorHandler", nullptr, nullptr, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::ABUser_eventUnlinkOtherPlatformWithCustomErrorHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUnlinkOtherPlatformWithCustomErrorHandler)
{
	P_GET_ENUM(EAccelBytePlatformType,Z_Param_PlatformType);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType(Z_Param_PlatformType),FDHandler(Z_Param_OnSuccess),FDCustomErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UnlinkOtherPlatformWithCustomErrorHandler

// Begin Class UABUser Function UpdateEmail
struct Z_Construct_UFunction_UABUser_UpdateEmail_Statics
{
	struct ABUser_eventUpdateEmail_Parms
	{
		FUpdateEmailRequest UpdateEmailRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateEmailRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateEmailRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_UpdateEmailRequest = { "UpdateEmailRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, UpdateEmailRequest), Z_Construct_UScriptStruct_FUpdateEmailRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateEmailRequest_MetaData), NewProp_UpdateEmailRequest_MetaData) }; // 93521242
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateEmail_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_UpdateEmailRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateEmail_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpdateEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpdateEmail", nullptr, nullptr, Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::ABUser_eventUpdateEmail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UpdateEmail_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UpdateEmail_Statics::ABUser_eventUpdateEmail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UpdateEmail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UpdateEmail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUpdateEmail)
{
	P_GET_STRUCT_REF(FUpdateEmailRequest,Z_Param_Out_UpdateEmailRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateEmail(Z_Param_Out_UpdateEmailRequest,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UpdateEmail

// Begin Class UABUser Function UpdateUser
struct Z_Construct_UFunction_UABUser_UpdateUser_Statics
{
	struct ABUser_eventUpdateUser_Parms
	{
		FUserUpdateRequest UpdateRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_UpdateRequest = { "UpdateRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, UpdateRequest), Z_Construct_UScriptStruct_FUserUpdateRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRequest_MetaData), NewProp_UpdateRequest_MetaData) }; // 736389736
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpdateUser_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_UpdateRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpdateUser_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpdateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpdateUser", nullptr, nullptr, Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UpdateUser_Statics::ABUser_eventUpdateUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpdateUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UpdateUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UpdateUser_Statics::ABUser_eventUpdateUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UpdateUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UpdateUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUpdateUser)
{
	P_GET_STRUCT_REF(FUserUpdateRequest,Z_Param_Out_UpdateRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateUser(Z_Param_Out_UpdateRequest,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UpdateUser

// Begin Class UABUser Function Upgrade
struct Z_Construct_UFunction_UABUser_Upgrade_Statics
{
	struct ABUser_eventUpgrade_Parms
	{
		FString Username;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgrade_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgrade_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Upgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Upgrade", nullptr, nullptr, Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Upgrade_Statics::ABUser_eventUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Upgrade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Upgrade_Statics::ABUser_eventUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Upgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Upgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUpgrade)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Upgrade(Z_Param_Username,Z_Param_Password,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Upgrade

// Begin Class UABUser Function UpgradeAndVerify
struct Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics
{
	struct ABUser_eventUpgradeAndVerify_Parms
	{
		FString Username;
		FString Password;
		FString VerificationCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, VerificationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerificationCode_MetaData), NewProp_VerificationCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradeAndVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_VerificationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "UpgradeAndVerify", nullptr, nullptr, Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::ABUser_eventUpgradeAndVerify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::ABUser_eventUpgradeAndVerify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_UpgradeAndVerify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_UpgradeAndVerify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUpgradeAndVerify)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeAndVerify(Z_Param_Username,Z_Param_Password,Z_Param_VerificationCode,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function UpgradeAndVerify

// Begin Class UABUser Function Upgradev2
struct Z_Construct_UFunction_UABUser_Upgradev2_Statics
{
	struct ABUser_eventUpgradev2_Parms
	{
		FString EmailAddress;
		FString Username;
		FString Password;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, EmailAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmailAddress_MetaData), NewProp_EmailAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DAccountUserDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1749202574
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventUpgradev2_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_EmailAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Upgradev2_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Upgradev2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Upgradev2", nullptr, nullptr, Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Upgradev2_Statics::ABUser_eventUpgradev2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Upgradev2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Upgradev2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Upgradev2_Statics::ABUser_eventUpgradev2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Upgradev2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Upgradev2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execUpgradev2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EmailAddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Upgradev2(Z_Param_EmailAddress,Z_Param_Username,Z_Param_Password,FDAccountUserDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Upgradev2

// Begin Class UABUser Function ValidateUserInput
struct Z_Construct_UFunction_UABUser_ValidateUserInput_Statics
{
	struct ABUser_eventValidateUserInput_Parms
	{
		FUserInputValidationRequest UserInputValidationRequest;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInputValidationRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserInputValidationRequest;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_UserInputValidationRequest = { "UserInputValidationRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventValidateUserInput_Parms, UserInputValidationRequest), Z_Construct_UScriptStruct_FUserInputValidationRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInputValidationRequest_MetaData), NewProp_UserInputValidationRequest_MetaData) }; // 763511398
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventValidateUserInput_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DUserInputValidationResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3042563795
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventValidateUserInput_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_UserInputValidationRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "ValidateUserInput", nullptr, nullptr, Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::ABUser_eventValidateUserInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::ABUser_eventValidateUserInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_ValidateUserInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_ValidateUserInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execValidateUserInput)
{
	P_GET_STRUCT_REF(FUserInputValidationRequest,Z_Param_Out_UserInputValidationRequest);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateUserInput(Z_Param_Out_UserInputValidationRequest,FDUserInputValidationResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function ValidateUserInput

// Begin Class UABUser Function Verify
struct Z_Construct_UFunction_UABUser_Verify_Statics
{
	struct ABUser_eventVerify_Parms
	{
		FString VerificationCode;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, VerificationCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerificationCode_MetaData), NewProp_VerificationCode_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1718370036
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABUser_eventVerify_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_VerificationCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABUser_Verify_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABUser_Verify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABUser, nullptr, "Verify", nullptr, nullptr, Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABUser_Verify_Statics::ABUser_eventVerify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABUser_Verify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABUser_Verify_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABUser_Verify_Statics::ABUser_eventVerify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABUser_Verify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABUser_Verify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABUser::execVerify)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Verify(Z_Param_VerificationCode,FDHandler(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABUser Function Verify

// Begin Class UABUser
void UABUser::StaticRegisterNativesUABUser()
{
	UClass* Class = UABUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BulkGetUserByOtherPlatformUserIds", &UABUser::execBulkGetUserByOtherPlatformUserIds },
		{ "ForcedLinkOtherPlatform", &UABUser::execForcedLinkOtherPlatform },
		{ "ForgetAllCredentials", &UABUser::execForgetAllCredentials },
		{ "GetCountryFromIP", &UABUser::execGetCountryFromIP },
		{ "GetData", &UABUser::execGetData },
		{ "GetDataWithLinkedPlatform", &UABUser::execGetDataWithLinkedPlatform },
		{ "GetPlatformLinks", &UABUser::execGetPlatformLinks },
		{ "GetUserByUserId", &UABUser::execGetUserByUserId },
		{ "GetUserEligibleToPlay", &UABUser::execGetUserEligibleToPlay },
		{ "GetUserOtherPlatformBasicPublicInfo", &UABUser::execGetUserOtherPlatformBasicPublicInfo },
		{ "LinkOtherPlatform", &UABUser::execLinkOtherPlatform },
		{ "LoginByExchangeCodeForToken", &UABUser::execLoginByExchangeCodeForToken },
		{ "LoginByExchangeCodeForTokenV4", &UABUser::execLoginByExchangeCodeForTokenV4 },
		{ "LoginWithDeviceId", &UABUser::execLoginWithDeviceId },
		{ "LoginWithDeviceIdV4", &UABUser::execLoginWithDeviceIdV4 },
		{ "LoginWithLauncher", &UABUser::execLoginWithLauncher },
		{ "LoginWithLauncherV4", &UABUser::execLoginWithLauncherV4 },
		{ "LoginWithOtherPlatform", &UABUser::execLoginWithOtherPlatform },
		{ "LoginWithOtherPlatformId", &UABUser::execLoginWithOtherPlatformId },
		{ "LoginWithOtherPlatformIdV4", &UABUser::execLoginWithOtherPlatformIdV4 },
		{ "LoginWithOtherPlatformV4", &UABUser::execLoginWithOtherPlatformV4 },
		{ "LoginWithRefreshToken", &UABUser::execLoginWithRefreshToken },
		{ "LoginWithRefreshTokenV4", &UABUser::execLoginWithRefreshTokenV4 },
		{ "LoginWithUsername", &UABUser::execLoginWithUsername },
		{ "LoginWithUsernameV4", &UABUser::execLoginWithUsernameV4 },
		{ "Logout", &UABUser::execLogout },
		{ "Register", &UABUser::execRegister },
		{ "Registerv2", &UABUser::execRegisterv2 },
		{ "Registerv3", &UABUser::execRegisterv3 },
		{ "ResetPassword", &UABUser::execResetPassword },
		{ "SearchUsers", &UABUser::execSearchUsers },
		{ "SearchUsersByOtherPlatformId", &UABUser::execSearchUsersByOtherPlatformId },
		{ "SearchUsersByOtherPlatformType", &UABUser::execSearchUsersByOtherPlatformType },
		{ "SearchUsersByType", &UABUser::execSearchUsersByType },
		{ "SendResetPasswordCode", &UABUser::execSendResetPasswordCode },
		{ "SendUpdateEmailVerificationCode", &UABUser::execSendUpdateEmailVerificationCode },
		{ "SendUpgradeVerificationCode", &UABUser::execSendUpgradeVerificationCode },
		{ "SendVerificationCode", &UABUser::execSendVerificationCode },
		{ "TryRelogin", &UABUser::execTryRelogin },
		{ "TryReloginV4", &UABUser::execTryReloginV4 },
		{ "UnlinkAllOtherPlatform", &UABUser::execUnlinkAllOtherPlatform },
		{ "UnlinkAllOtherPlatformId", &UABUser::execUnlinkAllOtherPlatformId },
		{ "UnlinkOtherPlatform", &UABUser::execUnlinkOtherPlatform },
		{ "UnlinkOtherPlatformId", &UABUser::execUnlinkOtherPlatformId },
		{ "UnlinkOtherPlatformWithCustomErrorHandler", &UABUser::execUnlinkOtherPlatformWithCustomErrorHandler },
		{ "UpdateEmail", &UABUser::execUpdateEmail },
		{ "UpdateUser", &UABUser::execUpdateUser },
		{ "Upgrade", &UABUser::execUpgrade },
		{ "UpgradeAndVerify", &UABUser::execUpgradeAndVerify },
		{ "Upgradev2", &UABUser::execUpgradev2 },
		{ "ValidateUserInput", &UABUser::execValidateUserInput },
		{ "Verify", &UABUser::execVerify },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABUser);
UClass* Z_Construct_UClass_UABUser_NoRegister()
{
	return UABUser::StaticClass();
}
struct Z_Construct_UClass_UABUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABUser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABUser_BulkGetUserByOtherPlatformUserIds, "BulkGetUserByOtherPlatformUserIds" }, // 1610166048
		{ &Z_Construct_UFunction_UABUser_ForcedLinkOtherPlatform, "ForcedLinkOtherPlatform" }, // 4272147239
		{ &Z_Construct_UFunction_UABUser_ForgetAllCredentials, "ForgetAllCredentials" }, // 2942306050
		{ &Z_Construct_UFunction_UABUser_GetCountryFromIP, "GetCountryFromIP" }, // 2757777889
		{ &Z_Construct_UFunction_UABUser_GetData, "GetData" }, // 3870694748
		{ &Z_Construct_UFunction_UABUser_GetDataWithLinkedPlatform, "GetDataWithLinkedPlatform" }, // 2452060237
		{ &Z_Construct_UFunction_UABUser_GetPlatformLinks, "GetPlatformLinks" }, // 3389473475
		{ &Z_Construct_UFunction_UABUser_GetUserByUserId, "GetUserByUserId" }, // 2893388931
		{ &Z_Construct_UFunction_UABUser_GetUserEligibleToPlay, "GetUserEligibleToPlay" }, // 2063437081
		{ &Z_Construct_UFunction_UABUser_GetUserOtherPlatformBasicPublicInfo, "GetUserOtherPlatformBasicPublicInfo" }, // 1067131731
		{ &Z_Construct_UFunction_UABUser_LinkOtherPlatform, "LinkOtherPlatform" }, // 2156429239
		{ &Z_Construct_UFunction_UABUser_LoginByExchangeCodeForToken, "LoginByExchangeCodeForToken" }, // 26082375
		{ &Z_Construct_UFunction_UABUser_LoginByExchangeCodeForTokenV4, "LoginByExchangeCodeForTokenV4" }, // 1824443307
		{ &Z_Construct_UFunction_UABUser_LoginWithDeviceId, "LoginWithDeviceId" }, // 3612951401
		{ &Z_Construct_UFunction_UABUser_LoginWithDeviceIdV4, "LoginWithDeviceIdV4" }, // 356210193
		{ &Z_Construct_UFunction_UABUser_LoginWithLauncher, "LoginWithLauncher" }, // 3481435833
		{ &Z_Construct_UFunction_UABUser_LoginWithLauncherV4, "LoginWithLauncherV4" }, // 1523043053
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatform, "LoginWithOtherPlatform" }, // 3989140170
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformId, "LoginWithOtherPlatformId" }, // 3857041103
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformIdV4, "LoginWithOtherPlatformIdV4" }, // 1632806505
		{ &Z_Construct_UFunction_UABUser_LoginWithOtherPlatformV4, "LoginWithOtherPlatformV4" }, // 1229827518
		{ &Z_Construct_UFunction_UABUser_LoginWithRefreshToken, "LoginWithRefreshToken" }, // 2317035642
		{ &Z_Construct_UFunction_UABUser_LoginWithRefreshTokenV4, "LoginWithRefreshTokenV4" }, // 2848413547
		{ &Z_Construct_UFunction_UABUser_LoginWithUsername, "LoginWithUsername" }, // 1965347602
		{ &Z_Construct_UFunction_UABUser_LoginWithUsernameV4, "LoginWithUsernameV4" }, // 3553741514
		{ &Z_Construct_UFunction_UABUser_Logout, "Logout" }, // 2127083188
		{ &Z_Construct_UFunction_UABUser_Register, "Register" }, // 4279697475
		{ &Z_Construct_UFunction_UABUser_Registerv2, "Registerv2" }, // 2600614392
		{ &Z_Construct_UFunction_UABUser_Registerv3, "Registerv3" }, // 712950932
		{ &Z_Construct_UFunction_UABUser_ResetPassword, "ResetPassword" }, // 3322839606
		{ &Z_Construct_UFunction_UABUser_SearchUsers, "SearchUsers" }, // 800358899
		{ &Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformId, "SearchUsersByOtherPlatformId" }, // 2604737918
		{ &Z_Construct_UFunction_UABUser_SearchUsersByOtherPlatformType, "SearchUsersByOtherPlatformType" }, // 898082892
		{ &Z_Construct_UFunction_UABUser_SearchUsersByType, "SearchUsersByType" }, // 3856691293
		{ &Z_Construct_UFunction_UABUser_SendResetPasswordCode, "SendResetPasswordCode" }, // 432747964
		{ &Z_Construct_UFunction_UABUser_SendUpdateEmailVerificationCode, "SendUpdateEmailVerificationCode" }, // 3184237169
		{ &Z_Construct_UFunction_UABUser_SendUpgradeVerificationCode, "SendUpgradeVerificationCode" }, // 673848506
		{ &Z_Construct_UFunction_UABUser_SendVerificationCode, "SendVerificationCode" }, // 2165106047
		{ &Z_Construct_UFunction_UABUser_TryRelogin, "TryRelogin" }, // 1636746666
		{ &Z_Construct_UFunction_UABUser_TryReloginV4, "TryReloginV4" }, // 852899268
		{ &Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatform, "UnlinkAllOtherPlatform" }, // 3029535289
		{ &Z_Construct_UFunction_UABUser_UnlinkAllOtherPlatformId, "UnlinkAllOtherPlatformId" }, // 3888067846
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatform, "UnlinkOtherPlatform" }, // 105998211
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatformId, "UnlinkOtherPlatformId" }, // 4175751312
		{ &Z_Construct_UFunction_UABUser_UnlinkOtherPlatformWithCustomErrorHandler, "UnlinkOtherPlatformWithCustomErrorHandler" }, // 3266394127
		{ &Z_Construct_UFunction_UABUser_UpdateEmail, "UpdateEmail" }, // 2449030741
		{ &Z_Construct_UFunction_UABUser_UpdateUser, "UpdateUser" }, // 2218232960
		{ &Z_Construct_UFunction_UABUser_Upgrade, "Upgrade" }, // 1300408331
		{ &Z_Construct_UFunction_UABUser_UpgradeAndVerify, "UpgradeAndVerify" }, // 3988992230
		{ &Z_Construct_UFunction_UABUser_Upgradev2, "Upgradev2" }, // 3647575793
		{ &Z_Construct_UFunction_UABUser_ValidateUserInput, "ValidateUserInput" }, // 94395381
		{ &Z_Construct_UFunction_UABUser_Verify, "Verify" }, // 1121159581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABUser_Statics::ClassParams = {
	&UABUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UABUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABUser()
{
	if (!Z_Registration_Info_UClass_UABUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABUser.OuterSingleton, Z_Construct_UClass_UABUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABUser.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABUser>()
{
	return UABUser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABUser);
UABUser::~UABUser() {}
// End Class UABUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABUser, UABUser::StaticClass, TEXT("UABUser"), &Z_Registration_Info_UClass_UABUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABUser), 3615754101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_3564119986(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
