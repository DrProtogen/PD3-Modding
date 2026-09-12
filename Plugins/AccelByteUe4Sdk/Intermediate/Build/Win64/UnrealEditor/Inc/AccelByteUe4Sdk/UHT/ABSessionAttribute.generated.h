// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABSessionAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetSessionAttributeRequest;
struct FSetSessionAttributeRequest;
#ifdef ACCELBYTEUE4SDK_ABSessionAttribute_generated_h
#error "ABSessionAttribute.generated.h already included, missing '#pragma once' in ABSessionAttribute.h"
#endif
#define ACCELBYTEUE4SDK_ABSessionAttribute_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllSessionAttribute); \
	DECLARE_FUNCTION(execGetSessionAttribute); \
	DECLARE_FUNCTION(execSetSessionAttribute);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABSessionAttribute(); \
	friend struct Z_Construct_UClass_UABSessionAttribute_Statics; \
public: \
	DECLARE_CLASS(UABSessionAttribute, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABSessionAttribute)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABSessionAttribute(UABSessionAttribute&&); \
	UABSessionAttribute(const UABSessionAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABSessionAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABSessionAttribute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABSessionAttribute) \
	NO_API virtual ~UABSessionAttribute();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_12_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABSessionAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABSessionAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
