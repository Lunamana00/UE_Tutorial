// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "testing/testingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestingGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTING_API UClass* Z_Construct_UClass_AtestingGameMode();
TESTING_API UClass* Z_Construct_UClass_AtestingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_testing();
// End Cross Module References

// Begin Class AtestingGameMode
void AtestingGameMode::StaticRegisterNativesAtestingGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtestingGameMode);
UClass* Z_Construct_UClass_AtestingGameMode_NoRegister()
{
	return AtestingGameMode::StaticClass();
}
struct Z_Construct_UClass_AtestingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "testingGameMode.h" },
		{ "ModuleRelativePath", "testingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtestingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AtestingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_testing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AtestingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AtestingGameMode_Statics::ClassParams = {
	&AtestingGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AtestingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AtestingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AtestingGameMode()
{
	if (!Z_Registration_Info_UClass_AtestingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtestingGameMode.OuterSingleton, Z_Construct_UClass_AtestingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AtestingGameMode.OuterSingleton;
}
template<> TESTING_API UClass* StaticClass<AtestingGameMode>()
{
	return AtestingGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AtestingGameMode);
AtestingGameMode::~AtestingGameMode() {}
// End Class AtestingGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AtestingGameMode, AtestingGameMode::StaticClass, TEXT("AtestingGameMode"), &Z_Registration_Info_UClass_AtestingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtestingGameMode), 988952682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingGameMode_h_114168425(TEXT("/Script/testing"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_testingGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
