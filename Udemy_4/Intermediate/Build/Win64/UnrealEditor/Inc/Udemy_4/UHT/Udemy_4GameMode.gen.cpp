// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Udemy_4/Udemy_4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemy_4GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UDEMY_4_API UClass* Z_Construct_UClass_AUdemy_4GameMode();
UDEMY_4_API UClass* Z_Construct_UClass_AUdemy_4GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Udemy_4();
// End Cross Module References

// Begin Class AUdemy_4GameMode
void AUdemy_4GameMode::StaticRegisterNativesAUdemy_4GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemy_4GameMode);
UClass* Z_Construct_UClass_AUdemy_4GameMode_NoRegister()
{
	return AUdemy_4GameMode::StaticClass();
}
struct Z_Construct_UClass_AUdemy_4GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Udemy_4GameMode.h" },
		{ "ModuleRelativePath", "Udemy_4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemy_4GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUdemy_4GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Udemy_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_4GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemy_4GameMode_Statics::ClassParams = {
	&AUdemy_4GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemy_4GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUdemy_4GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUdemy_4GameMode()
{
	if (!Z_Registration_Info_UClass_AUdemy_4GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemy_4GameMode.OuterSingleton, Z_Construct_UClass_AUdemy_4GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUdemy_4GameMode.OuterSingleton;
}
template<> UDEMY_4_API UClass* StaticClass<AUdemy_4GameMode>()
{
	return AUdemy_4GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemy_4GameMode);
AUdemy_4GameMode::~AUdemy_4GameMode() {}
// End Class AUdemy_4GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUdemy_4GameMode, AUdemy_4GameMode::StaticClass, TEXT("AUdemy_4GameMode"), &Z_Registration_Info_UClass_AUdemy_4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemy_4GameMode), 874461362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4GameMode_h_3517173014(TEXT("/Script/Udemy_4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Udemy_4GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS