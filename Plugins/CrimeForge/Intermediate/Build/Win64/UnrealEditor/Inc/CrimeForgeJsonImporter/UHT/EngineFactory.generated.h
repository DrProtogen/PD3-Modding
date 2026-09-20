// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modules/EngineFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIMEFORGEJSONIMPORTER_EngineFactory_generated_h
#error "EngineFactory.generated.h already included, missing '#pragma once' in EngineFactory.h"
#endif
#define CRIMEFORGEJSONIMPORTER_EngineFactory_generated_h

#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUREngineImplementation(); \
	friend struct Z_Construct_UClass_UREngineImplementation_Statics; \
public: \
	DECLARE_CLASS(UREngineImplementation, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrimeForgeJsonImporter"), NO_API) \
	DECLARE_SERIALIZER(UREngineImplementation)


#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UREngineImplementation(UREngineImplementation&&); \
	UREngineImplementation(const UREngineImplementation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UREngineImplementation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UREngineImplementation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UREngineImplementation) \
	NO_API virtual ~UREngineImplementation();


#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_10_PROLOG
#define FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIMEFORGEJSONIMPORTER_API UClass* StaticClass<class UREngineImplementation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Source_Plugins_CrimeForge_Source_CrimeForgeJsonImporter_Public_Modules_EngineFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
