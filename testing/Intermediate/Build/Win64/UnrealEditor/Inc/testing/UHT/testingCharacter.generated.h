// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "testingCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTING_testingCharacter_generated_h
#error "testingCharacter.generated.h already included, missing '#pragma once' in testingCharacter.h"
#endif
#define TESTING_testingCharacter_generated_h

#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestingCharacter(); \
	friend struct Z_Construct_UClass_AtestingCharacter_Statics; \
public: \
	DECLARE_CLASS(AtestingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testing"), NO_API) \
	DECLARE_SERIALIZER(AtestingCharacter)


#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AtestingCharacter(AtestingCharacter&&); \
	AtestingCharacter(const AtestingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestingCharacter) \
	NO_API virtual ~AtestingCharacter();


#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_18_PROLOG
#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTING_API UClass* StaticClass<class AtestingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
