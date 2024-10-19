// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdemySection3/UdemySection3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemySection3GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UDEMYSECTION3_API UClass* Z_Construct_UClass_AUdemySection3GameMode();
UDEMYSECTION3_API UClass* Z_Construct_UClass_AUdemySection3GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UdemySection3();
// End Cross Module References

// Begin Class AUdemySection3GameMode
void AUdemySection3GameMode::StaticRegisterNativesAUdemySection3GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemySection3GameMode);
UClass* Z_Construct_UClass_AUdemySection3GameMode_NoRegister()
{
	return AUdemySection3GameMode::StaticClass();
}
struct Z_Construct_UClass_AUdemySection3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UdemySection3GameMode.h" },
		{ "ModuleRelativePath", "UdemySection3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemySection3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUdemySection3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UdemySection3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemySection3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemySection3GameMode_Statics::ClassParams = {
	&AUdemySection3GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUdemySection3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUdemySection3GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUdemySection3GameMode()
{
	if (!Z_Registration_Info_UClass_AUdemySection3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemySection3GameMode.OuterSingleton, Z_Construct_UClass_AUdemySection3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUdemySection3GameMode.OuterSingleton;
}
template<> UDEMYSECTION3_API UClass* StaticClass<AUdemySection3GameMode>()
{
	return AUdemySection3GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemySection3GameMode);
AUdemySection3GameMode::~AUdemySection3GameMode() {}
// End Class AUdemySection3GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_UdemySection3_Source_UdemySection3_UdemySection3GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUdemySection3GameMode, AUdemySection3GameMode::StaticClass, TEXT("AUdemySection3GameMode"), &Z_Registration_Info_UClass_AUdemySection3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemySection3GameMode), 4056916444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_UdemySection3_Source_UdemySection3_UdemySection3GameMode_h_283529232(TEXT("/Script/UdemySection3"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_UdemySection3_Source_UdemySection3_UdemySection3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_UdemySection3_Source_UdemySection3_UdemySection3GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
