// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerDSM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UEnumServerType : uint8;
#ifdef ACCELBYTEUE4SDK_ABServerDSM_generated_h
#error "ABServerDSM.generated.h already included, missing '#pragma once' in ABServerDSM.h"
#endif
#define ACCELBYTEUE4SDK_ABServerDSM_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfigureAutoShutdown); \
	DECLARE_FUNCTION(execDeregisterLocalServerFromDSM); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetServerInfo); \
	DECLARE_FUNCTION(execGetSessionId); \
	DECLARE_FUNCTION(execRegisterLocalServerToDSM); \
	DECLARE_FUNCTION(execRegisterServerToDSM); \
	DECLARE_FUNCTION(execSendShutdownToDSM); \
	DECLARE_FUNCTION(execSetOnAutoShutdownErrorDelegate); \
	DECLARE_FUNCTION(execSetOnAutoShutdownResponse); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetServerType);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerDSM(); \
	friend struct Z_Construct_UClass_UABServerDSM_Statics; \
public: \
	DECLARE_CLASS(UABServerDSM, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerDSM)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerDSM(UABServerDSM&&); \
	UABServerDSM(const UABServerDSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerDSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerDSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerDSM) \
	NO_API virtual ~UABServerDSM();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_11_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerDSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerDSM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
