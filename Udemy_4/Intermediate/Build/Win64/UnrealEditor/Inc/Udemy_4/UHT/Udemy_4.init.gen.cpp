// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemy_4_init() {}
	UDEMY_4_API UFunction* Z_Construct_UDelegateFunction_Udemy_4_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Udemy_4;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Udemy_4()
	{
		if (!Z_Registration_Info_UPackage__Script_Udemy_4.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Udemy_4_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Udemy_4",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF423414B,
				0xE301C008,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Udemy_4.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Udemy_4.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Udemy_4(Z_Construct_UPackage__Script_Udemy_4, TEXT("/Script/Udemy_4"), Z_Registration_Info_UPackage__Script_Udemy_4, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF423414B, 0xE301C008));
PRAGMA_ENABLE_DEPRECATION_WARNINGS