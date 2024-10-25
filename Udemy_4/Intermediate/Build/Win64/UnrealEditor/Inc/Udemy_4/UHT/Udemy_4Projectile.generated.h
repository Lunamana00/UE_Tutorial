// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Udemy_4Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UDEMY_4_Udemy_4Projectile_generated_h
#error "Udemy_4Projectile.generated.h already included, missing '#pragma once' in Udemy_4Projectile.h"
#endif
#define UDEMY_4_Udemy_4Projectile_generated_h

#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUdemy_4Projectile(); \
	friend struct Z_Construct_UClass_AUdemy_4Projectile_Statics; \
public: \
	DECLARE_CLASS(AUdemy_4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Udemy_4"), NO_API) \
	DECLARE_SERIALIZER(AUdemy_4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUdemy_4Projectile(AUdemy_4Projectile&&); \
	AUdemy_4Projectile(const AUdemy_4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUdemy_4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUdemy_4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUdemy_4Projectile) \
	NO_API virtual ~AUdemy_4Projectile();


#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_12_PROLOG
#define FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDEMY_4_API UClass* StaticClass<class AUdemy_4Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
