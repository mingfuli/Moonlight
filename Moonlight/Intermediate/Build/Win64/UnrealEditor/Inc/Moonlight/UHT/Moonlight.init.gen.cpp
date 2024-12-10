// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonlight_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Moonlight;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Moonlight()
	{
		if (!Z_Registration_Info_UPackage__Script_Moonlight.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Moonlight",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7D6AB3C3,
				0x1E1DF2C9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Moonlight.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Moonlight.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Moonlight(Z_Construct_UPackage__Script_Moonlight, TEXT("/Script/Moonlight"), Z_Registration_Info_UPackage__Script_Moonlight, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D6AB3C3, 0x1E1DF2C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
