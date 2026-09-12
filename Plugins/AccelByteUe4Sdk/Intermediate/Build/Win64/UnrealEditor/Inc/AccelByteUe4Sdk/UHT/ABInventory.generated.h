// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteInventoryConfigurationSortBy : uint8;
enum class EAccelByteInventoryUtilitiesSortBy : uint8;
enum class EAccelByteUserInventoriesSortBy : uint8;
enum class EAccelByteUserItemsSortBy : uint8;
struct FAccelByteModelsConsumeUserItemsRequest;
struct FAccelByteModelsDeleteUserInventoryItemsRequest;
struct FAccelByteModelsMoveUserItemsBetweenInventoriesRequest;
struct FAccelByteModelsUpdateUserInventoryItemRequest;
#ifdef ACCELBYTEUE4SDK_ABInventory_generated_h
#error "ABInventory.generated.h already included, missing '#pragma once' in ABInventory.h"
#endif
#define ACCELBYTEUE4SDK_ABInventory_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulkDeleteInventoryItems); \
	DECLARE_FUNCTION(execBulkUpdateInventoryItems); \
	DECLARE_FUNCTION(execConsumeUserInventoryItem); \
	DECLARE_FUNCTION(execGetInventoryConfigurations); \
	DECLARE_FUNCTION(execGetInventoryTags); \
	DECLARE_FUNCTION(execGetItemTypes); \
	DECLARE_FUNCTION(execGetUserInventories); \
	DECLARE_FUNCTION(execGetUserInventoryAllItems); \
	DECLARE_FUNCTION(execGetUserInventoryItem); \
	DECLARE_FUNCTION(execMoveItemsBetweenInventories);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABInventory(); \
	friend struct Z_Construct_UClass_UABInventory_Statics; \
public: \
	DECLARE_CLASS(UABInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABInventory)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABInventory(UABInventory&&); \
	UABInventory(const UABInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABInventory) \
	NO_API virtual ~UABInventory();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_24_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
