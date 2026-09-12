// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteInventoriesSortBy : uint8;
enum class EAccelByteUserItemsSortBy : uint8;
struct FAccelByteModelsConsumeUserItemsRequest;
struct FAccelByteModelsCreateInventoryRequest;
struct FAccelByteModelsDeleteInventoryRequest;
struct FAccelByteModelsDeleteUserInventoryItemsRequest;
struct FAccelByteModelsSaveInventoryItemByInventoryIdRequest;
struct FAccelByteModelsSaveInventoryItemRequest;
struct FAccelByteModelsUpdateInventoryItemRequest;
struct FAccelByteModelsUpdateInventoryRequest;
#ifdef ACCELBYTEUE4SDK_ABServerInventory_generated_h
#error "ABServerInventory.generated.h already included, missing '#pragma once' in ABServerInventory.h"
#endif
#define ACCELBYTEUE4SDK_ABServerInventory_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkDeleteUserInventoryItems); \
	DECLARE_FUNCTION(execBulkSaveInventoryItems); \
	DECLARE_FUNCTION(execBulkSaveInventoryItemsByInventoryId); \
	DECLARE_FUNCTION(execBulkUpdateInventoryItems); \
	DECLARE_FUNCTION(execConsumeInventoryItem); \
	DECLARE_FUNCTION(execCreateInventory); \
	DECLARE_FUNCTION(execDeleteInventory); \
	DECLARE_FUNCTION(execGetInventories); \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execGetInventoryAllItems); \
	DECLARE_FUNCTION(execGetInventoryItem); \
	DECLARE_FUNCTION(execSaveInventoryItem); \
	DECLARE_FUNCTION(execSaveInventoryItemByInventoryId); \
	DECLARE_FUNCTION(execSyncUserEntitlement); \
	DECLARE_FUNCTION(execUpdateAllUserInventories); \
	DECLARE_FUNCTION(execUpdateInventory);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerInventory(); \
	friend struct Z_Construct_UClass_UABServerInventory_Statics; \
public: \
	DECLARE_CLASS(UABServerInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerInventory)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerInventory(UABServerInventory&&); \
	UABServerInventory(const UABServerInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerInventory) \
	NO_API virtual ~UABServerInventory();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_26_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
