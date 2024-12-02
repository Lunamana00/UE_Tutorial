// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetesting_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_testing;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_testing()
	{
		if (!Z_Registration_Info_UPackage__Script_testing.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/testing",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x060690BF,
				0x9C7AFC36,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_testing.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_testing.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_testing(Z_Construct_UPackage__Script_testing, TEXT("/Script/testing"), Z_Registration_Info_UPackage__Script_testing, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x060690BF, 0x9C7AFC36));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
