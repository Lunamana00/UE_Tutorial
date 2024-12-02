// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "testing/lunamana.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelunamana() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TESTING_API UClass* Z_Construct_UClass_Alunamana();
TESTING_API UClass* Z_Construct_UClass_Alunamana_NoRegister();
UPackage* Z_Construct_UPackage__Script_testing();
// End Cross Module References

// Begin Class Alunamana
void Alunamana::StaticRegisterNativesAlunamana()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Alunamana);
UClass* Z_Construct_UClass_Alunamana_NoRegister()
{
	return Alunamana::StaticClass();
}
struct Z_Construct_UClass_Alunamana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "lunamana.h" },
		{ "ModuleRelativePath", "lunamana.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alunamana>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Alunamana_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_testing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alunamana_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Alunamana_Statics::ClassParams = {
	&Alunamana::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alunamana_Statics::Class_MetaDataParams), Z_Construct_UClass_Alunamana_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Alunamana()
{
	if (!Z_Registration_Info_UClass_Alunamana.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Alunamana.OuterSingleton, Z_Construct_UClass_Alunamana_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Alunamana.OuterSingleton;
}
template<> TESTING_API UClass* StaticClass<Alunamana>()
{
	return Alunamana::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Alunamana);
Alunamana::~Alunamana() {}
// End Class Alunamana

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_lunamana_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Alunamana, Alunamana::StaticClass, TEXT("Alunamana"), &Z_Registration_Info_UClass_Alunamana, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Alunamana), 1366883287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_lunamana_h_2712558195(TEXT("/Script/testing"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_lunamana_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_testing_Source_testing_lunamana_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
