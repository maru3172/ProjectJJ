// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrototypeCharacter.h"

#ifdef PROTOTYPE_PrototypeCharacter_generated_h
#error "PrototypeCharacter.generated.h already included, missing '#pragma once' in PrototypeCharacter.h"
#endif
#define PROTOTYPE_PrototypeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APrototypeCharacter ******************************************************
#define FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeCharacter_NoRegister();

#define FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeCharacter(); \
	friend struct Z_Construct_UClass_APrototypeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROTOTYPE_API UClass* Z_Construct_UClass_APrototypeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APrototypeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), Z_Construct_UClass_APrototypeCharacter_NoRegister) \
	DECLARE_SERIALIZER(APrototypeCharacter)


#define FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APrototypeCharacter(APrototypeCharacter&&) = delete; \
	APrototypeCharacter(const APrototypeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APrototypeCharacter) \
	NO_API virtual ~APrototypeCharacter();


#define FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_21_PROLOG
#define FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APrototypeCharacter;

// ********** End Class APrototypeCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_myeos_Documents_GitHub_unreal_Prototype_Source_Prototype_PrototypeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
