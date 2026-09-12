// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerLobby.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef ACCELBYTEUE4SDK_ABServerLobby_generated_h
#error "ABServerLobby.generated.h already included, missing '#pragma once' in ABServerLobby.h"
#endif
#define ACCELBYTEUE4SDK_ABServerLobby_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetListOfBlockedUsers); \
	DECLARE_FUNCTION(execGetListOfBlockers); \
	DECLARE_FUNCTION(execGetPartyDataByUserId); \
	DECLARE_FUNCTION(execGetPartyStorage); \
	DECLARE_FUNCTION(execGetSessionAttribute); \
	DECLARE_FUNCTION(execGetSessionAttributeAll); \
	DECLARE_FUNCTION(execSetSessionAttribute); \
	DECLARE_FUNCTION(execSetSessionAttributeString); \
	DECLARE_FUNCTION(execWritePartyStorage);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerLobby(); \
	friend struct Z_Construct_UClass_UABServerLobby_Statics; \
public: \
	DECLARE_CLASS(UABServerLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerLobby)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerLobby(UABServerLobby&&); \
	UABServerLobby(const UABServerLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerLobby) \
	NO_API virtual ~UABServerLobby();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
