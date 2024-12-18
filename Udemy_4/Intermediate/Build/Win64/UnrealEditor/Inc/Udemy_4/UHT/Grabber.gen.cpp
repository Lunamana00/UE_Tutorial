// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Udemy_4/Grabber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UDEMY_4_API UClass* Z_Construct_UClass_UGrabber();
UDEMY_4_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
UPackage* Z_Construct_UPackage__Script_Udemy_4();
// End Cross Module References

// Begin Class UGrabber
void UGrabber::StaticRegisterNativesUGrabber()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrabber);
UClass* Z_Construct_UClass_UGrabber_NoRegister()
{
	return UGrabber::StaticClass();
}
struct Z_Construct_UClass_UGrabber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[] = {
		{ "Category", "Grabber" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabber, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrabber, GrabRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabRadius_MetaData), NewProp_GrabRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_GrabRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Udemy_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
	&UGrabber::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGrabber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrabber()
{
	if (!Z_Registration_Info_UClass_UGrabber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrabber.OuterSingleton, Z_Construct_UClass_UGrabber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrabber.OuterSingleton;
}
template<> UDEMY_4_API UClass* StaticClass<UGrabber>()
{
	return UGrabber::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
UGrabber::~UGrabber() {}
// End Class UGrabber

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Grabber_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrabber, UGrabber::StaticClass, TEXT("UGrabber"), &Z_Registration_Info_UClass_UGrabber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrabber), 1181239602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Grabber_h_2929352367(TEXT("/Script/Udemy_4"),
	Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Grabber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kth00_Documents_GitHub_UE_Tutorial_Udemy_4_Source_Udemy_4_Grabber_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
