// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABOrder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsOrderCreate;
struct FAccelByteModelsUserPreviewOrderRequest;
#ifdef ACCELBYTEUE4SDK_ABOrder_generated_h
#error "ABOrder.generated.h already included, missing '#pragma once' in ABOrder.h"
#endif
#define ACCELBYTEUE4SDK_ABOrder_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelOrder); \
	DECLARE_FUNCTION(execCreateNewOrder); \
	DECLARE_FUNCTION(execGetUserOrder); \
	DECLARE_FUNCTION(execGetUserOrderHistory); \
	DECLARE_FUNCTION(execGetUserOrders); \
	DECLARE_FUNCTION(execPreviewUserOrder);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABOrder(); \
	friend struct Z_Construct_UClass_UABOrder_Statics; \
public: \
	DECLARE_CLASS(UABOrder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABOrder)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABOrder(UABOrder&&); \
	UABOrder(const UABOrder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABOrder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABOrder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABOrder) \
	NO_API virtual ~UABOrder();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_13_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABOrder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
