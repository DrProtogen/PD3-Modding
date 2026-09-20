// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Serializers/ObjectSerializer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIMEFORGEJSONIMPORTER_ObjectSerializer_generated_h
#error "ObjectSerializer.generated.h already included, missing '#pragma once' in ObjectSerializer.h"
#endif
#define CRIMEFORGEJSONIMPORTER_ObjectSerializer_generated_h

#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectSerializer(); \
	friend struct Z_Construct_UClass_UObjectSerializer_Statics; \
public: \
	DECLARE_CLASS(UObjectSerializer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrimeForgeJsonImporter"), NO_API) \
	DECLARE_SERIALIZER(UObjectSerializer)


#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectSerializer(UObjectSerializer&&); \
	UObjectSerializer(const UObjectSerializer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectSerializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectSerializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectSerializer) \
	NO_API virtual ~UObjectSerializer();


#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_13_PROLOG
#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_15_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<class UObjectSerializer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Serializers_ObjectSerializer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
