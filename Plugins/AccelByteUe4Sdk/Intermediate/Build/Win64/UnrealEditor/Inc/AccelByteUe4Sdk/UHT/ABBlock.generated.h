// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlockPlayerRequest;
struct FUnblockPlayerRequest;
#ifdef ACCELBYTEUE4SDK_ABBlock_generated_h
#error "ABBlock.generated.h already included, missing '#pragma once' in ABBlock.h"
#endif
#define ACCELBYTEUE4SDK_ABBlock_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBlockPlayer); \
	DECLARE_FUNCTION(execGetListOfBlockedUsers); \
	DECLARE_FUNCTION(execGetListOfBlockers); \
	DECLARE_FUNCTION(execSetBlockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execSetUnblockPlayerNotifDelegate); \
	DECLARE_FUNCTION(execUnblockPlayer);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABBlock(); \
	friend struct Z_Construct_UClass_UABBlock_Statics; \
public: \
	DECLARE_CLASS(UABBlock, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABBlock)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABBlock(UABBlock&&); \
	UABBlock(const UABBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABBlock) \
	NO_API virtual ~UABBlock();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
