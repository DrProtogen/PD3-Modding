// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABLobby.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRefreshTokenRequest;
struct FRequestDSModel;
struct FSetRetryParametersRequest;
#ifdef ACCELBYTEUE4SDK_ABLobby_generated_h
#error "ABLobby.generated.h already included, missing '#pragma once' in ABLobby.h"
#endif
#define ACCELBYTEUE4SDK_ABLobby_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execRefreshToken); \
	DECLARE_FUNCTION(execRequestDS); \
	DECLARE_FUNCTION(execSetOnConnected); \
	DECLARE_FUNCTION(execSetOnConnectFailed); \
	DECLARE_FUNCTION(execSetOnConnectionClosed); \
	DECLARE_FUNCTION(execSetOnDisconnect); \
	DECLARE_FUNCTION(execSetOnErrorNotification); \
	DECLARE_FUNCTION(execSetRetryParameters); \
	DECLARE_FUNCTION(execUnbindEvent);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABLobby(); \
	friend struct Z_Construct_UClass_UABLobby_Statics; \
public: \
	DECLARE_CLASS(UABLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABLobby)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABLobby(UABLobby&&); \
	UABLobby(const UABLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABLobby) \
	NO_API virtual ~UABLobby();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_14_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
