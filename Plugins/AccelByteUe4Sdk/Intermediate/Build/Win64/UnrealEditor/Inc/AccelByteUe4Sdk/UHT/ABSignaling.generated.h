// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABSignaling.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSendSignalingMessageRequest;
#ifdef ACCELBYTEUE4SDK_ABSignaling_generated_h
#error "ABSignaling.generated.h already included, missing '#pragma once' in ABSignaling.h"
#endif
#define ACCELBYTEUE4SDK_ABSignaling_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendSignalingMessage); \
	DECLARE_FUNCTION(execSetSignalingP2PNotif);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABSignaling(); \
	friend struct Z_Construct_UClass_UABSignaling_Statics; \
public: \
	DECLARE_CLASS(UABSignaling, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABSignaling)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABSignaling(UABSignaling&&); \
	UABSignaling(const UABSignaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSignaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSignaling); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABSignaling) \
	NO_API virtual ~UABSignaling();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_8_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABSignaling>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSignaling_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
