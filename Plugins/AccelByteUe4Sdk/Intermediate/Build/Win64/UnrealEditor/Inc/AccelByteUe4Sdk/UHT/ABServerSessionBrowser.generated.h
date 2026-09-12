// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABServerSessionBrowser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteSessionType : uint8;
struct FAccelByteModelsSessionBrowserCreateRequest;
struct FAccelByteModelsSessionBrowserUpdateRequest;
struct FJsonObjectWrapper;
#ifdef ACCELBYTEUE4SDK_ABServerSessionBrowser_generated_h
#error "ABServerSessionBrowser.generated.h already included, missing '#pragma once' in ABServerSessionBrowser.h"
#endif
#define ACCELBYTEUE4SDK_ABServerSessionBrowser_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateGameSessionPrivate); \
	DECLARE_FUNCTION(execCreateGameSessionPublic); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecificByStruct); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByEnum); \
	DECLARE_FUNCTION(execCreateGameSessionTypeSpecifiedByString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnum); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeEnumAndMatchExist); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeString); \
	DECLARE_FUNCTION(execGetGameSessionsByTypeStringAndMatchExist); \
	DECLARE_FUNCTION(execGetRecentPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execRemoveGameSession); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execUpdateGameSession); \
	DECLARE_FUNCTION(execUpdateGameSessionByStruct);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABServerSessionBrowser(); \
	friend struct Z_Construct_UClass_UABServerSessionBrowser_Statics; \
public: \
	DECLARE_CLASS(UABServerSessionBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABServerSessionBrowser)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABServerSessionBrowser(UABServerSessionBrowser&&); \
	UABServerSessionBrowser(const UABServerSessionBrowser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABServerSessionBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABServerSessionBrowser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABServerSessionBrowser) \
	NO_API virtual ~UABServerSessionBrowser();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_15_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABServerSessionBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABServerSessionBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
