// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AccelByteInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UABApiClient;
class UAccelByteInstance;
class UServerApiClient;
#ifdef ACCELBYTEUE4SDK_AccelByteInstance_generated_h
#error "AccelByteInstance.generated.h already included, missing '#pragma once' in AccelByteInstance.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteInstance_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateAccelByteInstance); \
	DECLARE_FUNCTION(execGetApiClient); \
	DECLARE_FUNCTION(execGetServerApiClient);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteInstance(); \
	friend struct Z_Construct_UClass_UAccelByteInstance_Statics; \
public: \
	DECLARE_CLASS(UAccelByteInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteInstance)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAccelByteInstance(UAccelByteInstance&&); \
	UAccelByteInstance(const UAccelByteInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteInstance) \
	NO_API virtual ~UAccelByteInstance();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_10_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
