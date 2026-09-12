// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABCatalog.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemCriteria.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCatalog() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCatalog();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCatalog_NoRegister();
ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsCategoryInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemDynamicDataResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPopulatedItemInfoResponse__DelegateSignature();
ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemCriteria();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABCatalog Function GetCategory
struct Z_Construct_UFunction_UABCatalog_GetCategory_Statics
{
	struct ABCatalog_eventGetCategory_Parms
	{
		FString CategoryPath;
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, CategoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryPath_MetaData), NewProp_CategoryPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1168461575
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetCategory_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_CategoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetCategory_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetCategory", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::ABCatalog_eventGetCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetCategory_Statics::ABCatalog_eventGetCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetCategory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCategory(Z_Param_CategoryPath,Z_Param_Language,FDModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetCategory

// Begin Class UABCatalog Function GetChildCategories
struct Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics
{
	struct ABCatalog_eventGetChildCategories_Parms
	{
		FString CategoryPath;
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, CategoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryPath_MetaData), NewProp_CategoryPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3397459090
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetChildCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_CategoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetChildCategories", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::ABCatalog_eventGetChildCategories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::ABCatalog_eventGetChildCategories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetChildCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetChildCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetChildCategories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChildCategories(Z_Param_CategoryPath,Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetChildCategories

// Begin Class UABCatalog Function GetDescendantCategories
struct Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics
{
	struct ABCatalog_eventGetDescendantCategories_Parms
	{
		FString CategoryPath;
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, CategoryPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryPath_MetaData), NewProp_CategoryPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3397459090
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetDescendantCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_CategoryPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetDescendantCategories", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::ABCatalog_eventGetDescendantCategories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::ABCatalog_eventGetDescendantCategories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetDescendantCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetDescendantCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetDescendantCategories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CategoryPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDescendantCategories(Z_Param_CategoryPath,Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetDescendantCategories

// Begin Class UABCatalog Function GetItemByAppId
struct Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics
{
	struct ABCatalog_eventGetItemByAppId_Parms
	{
		FString AppId;
		FString Language;
		FString Region;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 807885031
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemByAppId_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemByAppId", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::ABCatalog_eventGetItemByAppId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::ABCatalog_eventGetItemByAppId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetItemByAppId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemByAppId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetItemByAppId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemByAppId(Z_Param_AppId,Z_Param_Language,Z_Param_Region,FDModelsItemInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetItemByAppId

// Begin Class UABCatalog Function GetItemById
struct Z_Construct_UFunction_UABCatalog_GetItemById_Statics
{
	struct ABCatalog_eventGetItemById_Parms
	{
		FString ItemId;
		FString Language;
		FString Region;
		FString StoreId;
		bool bPopulateBundle;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StoreId;
	static void NewProp_bPopulateBundle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPopulateBundle;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId = { "StoreId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, StoreId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreId_MetaData), NewProp_StoreId_MetaData) };
void Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle_SetBit(void* Obj)
{
	((ABCatalog_eventGetItemById_Parms*)Obj)->bPopulateBundle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle = { "bPopulateBundle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABCatalog_eventGetItemById_Parms), &Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsPopulatedItemInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3321655411
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemById_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_StoreId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_bPopulateBundle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemById_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemById", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::ABCatalog_eventGetItemById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetItemById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetItemById_Statics::ABCatalog_eventGetItemById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetItemById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetItemById)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_GET_PROPERTY(FStrProperty,Z_Param_StoreId);
	P_GET_UBOOL(Z_Param_bPopulateBundle);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemById(Z_Param_ItemId,Z_Param_Language,Z_Param_Region,Z_Param_StoreId,Z_Param_bPopulateBundle,FDModelsPopulatedItemInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetItemById

// Begin Class UABCatalog Function GetItemDynamicData
struct Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics
{
	struct ABCatalog_eventGetItemDynamicData_Parms
	{
		FString ItemId;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemDynamicDataResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 722958044
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemDynamicData_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemDynamicData", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::ABCatalog_eventGetItemDynamicData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::ABCatalog_eventGetItemDynamicData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetItemDynamicData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemDynamicData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetItemDynamicData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemDynamicData(Z_Param_ItemId,FDModelsItemDynamicDataResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetItemDynamicData

// Begin Class UABCatalog Function GetItemsByCriteria
struct Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics
{
	struct ABCatalog_eventGetItemsByCriteria_Parms
	{
		FAccelByteModelsItemCriteria ItemCriteria;
		int32 Offset;
		int32 Limit;
		TArray<EAccelByteItemListSortBy> SortBy;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCriteria_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemCriteria;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortBy_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortBy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortBy;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria = { "ItemCriteria", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, ItemCriteria), Z_Construct_UScriptStruct_FAccelByteModelsItemCriteria, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCriteria_MetaData), NewProp_ItemCriteria_MetaData) }; // 1632686429
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner = { "SortBy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy, METADATA_PARAMS(0, nullptr) }; // 991299306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, SortBy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortBy_MetaData), NewProp_SortBy_MetaData) }; // 991299306
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1158322633
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetItemsByCriteria_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_ItemCriteria,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_SortBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetItemsByCriteria", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::ABCatalog_eventGetItemsByCriteria_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::ABCatalog_eventGetItemsByCriteria_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetItemsByCriteria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetItemsByCriteria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetItemsByCriteria)
{
	P_GET_STRUCT_REF(FAccelByteModelsItemCriteria,Z_Param_Out_ItemCriteria);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_TARRAY_REF(EAccelByteItemListSortBy,Z_Param_Out_SortBy);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetItemsByCriteria(Z_Param_Out_ItemCriteria,Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_Out_SortBy,FDModelsItemPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetItemsByCriteria

// Begin Class UABCatalog Function GetRootCategories
struct Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics
{
	struct ABCatalog_eventGetRootCategories_Parms
	{
		FString Language;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DArrayModelsCategoryInfoResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3397459090
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventGetRootCategories_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "GetRootCategories", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::ABCatalog_eventGetRootCategories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::ABCatalog_eventGetRootCategories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_GetRootCategories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_GetRootCategories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execGetRootCategories)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRootCategories(Z_Param_Language,FDArrayModelsCategoryInfoResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function GetRootCategories

// Begin Class UABCatalog Function SearchItem
struct Z_Construct_UFunction_UABCatalog_SearchItem_Statics
{
	struct ABCatalog_eventSearchItem_Parms
	{
		FString Language;
		FString Keyword;
		int32 Offset;
		int32 Limit;
		FString Region;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keyword;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Keyword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keyword_MetaData), NewProp_Keyword_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, OnSuccess), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DModelsItemPagingSlicedResultResponse__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1158322633
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABCatalog_eventSearchItem_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1576247813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Keyword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABCatalog_SearchItem_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UABCatalog_SearchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABCatalog, nullptr, "SearchItem", nullptr, nullptr, Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::ABCatalog_eventSearchItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UABCatalog_SearchItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UABCatalog_SearchItem_Statics::ABCatalog_eventSearchItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UABCatalog_SearchItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UABCatalog_SearchItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UABCatalog::execSearchItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Keyword);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Limit);
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SearchItem(Z_Param_Language,Z_Param_Keyword,Z_Param_Out_Offset,Z_Param_Out_Limit,Z_Param_Region,FDModelsItemPagingSlicedResultResponse(Z_Param_OnSuccess),FDErrorHandler(Z_Param_OnError));
	P_NATIVE_END;
}
// End Class UABCatalog Function SearchItem

// Begin Class UABCatalog
void UABCatalog::StaticRegisterNativesUABCatalog()
{
	UClass* Class = UABCatalog::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCategory", &UABCatalog::execGetCategory },
		{ "GetChildCategories", &UABCatalog::execGetChildCategories },
		{ "GetDescendantCategories", &UABCatalog::execGetDescendantCategories },
		{ "GetItemByAppId", &UABCatalog::execGetItemByAppId },
		{ "GetItemById", &UABCatalog::execGetItemById },
		{ "GetItemDynamicData", &UABCatalog::execGetItemDynamicData },
		{ "GetItemsByCriteria", &UABCatalog::execGetItemsByCriteria },
		{ "GetRootCategories", &UABCatalog::execGetRootCategories },
		{ "SearchItem", &UABCatalog::execSearchItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCatalog);
UClass* Z_Construct_UClass_UABCatalog_NoRegister()
{
	return UABCatalog::StaticClass();
}
struct Z_Construct_UClass_UABCatalog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABCatalog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABCatalog.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UABCatalog_GetCategory, "GetCategory" }, // 2126667995
		{ &Z_Construct_UFunction_UABCatalog_GetChildCategories, "GetChildCategories" }, // 3751605912
		{ &Z_Construct_UFunction_UABCatalog_GetDescendantCategories, "GetDescendantCategories" }, // 139271790
		{ &Z_Construct_UFunction_UABCatalog_GetItemByAppId, "GetItemByAppId" }, // 2826006369
		{ &Z_Construct_UFunction_UABCatalog_GetItemById, "GetItemById" }, // 821921280
		{ &Z_Construct_UFunction_UABCatalog_GetItemDynamicData, "GetItemDynamicData" }, // 3683989284
		{ &Z_Construct_UFunction_UABCatalog_GetItemsByCriteria, "GetItemsByCriteria" }, // 1061017310
		{ &Z_Construct_UFunction_UABCatalog_GetRootCategories, "GetRootCategories" }, // 759958055
		{ &Z_Construct_UFunction_UABCatalog_SearchItem, "SearchItem" }, // 2104469382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCatalog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UABCatalog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCatalog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCatalog_Statics::ClassParams = {
	&UABCatalog::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCatalog_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCatalog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABCatalog()
{
	if (!Z_Registration_Info_UClass_UABCatalog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCatalog.OuterSingleton, Z_Construct_UClass_UABCatalog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABCatalog.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABCatalog>()
{
	return UABCatalog::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABCatalog);
UABCatalog::~UABCatalog() {}
// End Class UABCatalog

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABCatalog, UABCatalog::StaticClass, TEXT("UABCatalog"), &Z_Registration_Info_UClass_UABCatalog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCatalog), 1680625417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_3155319216(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABCatalog_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
