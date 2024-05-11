// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSliding_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Sliding;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Sliding()
	{
		if (!Z_Registration_Info_UPackage__Script_Sliding.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Sliding",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1C0012F1,
				0x64C10CFB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Sliding.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Sliding.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Sliding(Z_Construct_UPackage__Script_Sliding, TEXT("/Script/Sliding"), Z_Registration_Info_UPackage__Script_Sliding, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C0012F1, 0x64C10CFB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
