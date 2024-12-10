// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Moonlight/MoonlightGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonlightGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MOONLIGHT_API UClass* Z_Construct_UClass_AMoonlightGameMode();
MOONLIGHT_API UClass* Z_Construct_UClass_AMoonlightGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Moonlight();
// End Cross Module References

// Begin Class AMoonlightGameMode
void AMoonlightGameMode::StaticRegisterNativesAMoonlightGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoonlightGameMode);
UClass* Z_Construct_UClass_AMoonlightGameMode_NoRegister()
{
	return AMoonlightGameMode::StaticClass();
}
struct Z_Construct_UClass_AMoonlightGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MoonlightGameMode.h" },
		{ "ModuleRelativePath", "MoonlightGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoonlightGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoonlightGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Moonlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoonlightGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoonlightGameMode_Statics::ClassParams = {
	&AMoonlightGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoonlightGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoonlightGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoonlightGameMode()
{
	if (!Z_Registration_Info_UClass_AMoonlightGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoonlightGameMode.OuterSingleton, Z_Construct_UClass_AMoonlightGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoonlightGameMode.OuterSingleton;
}
template<> MOONLIGHT_API UClass* StaticClass<AMoonlightGameMode>()
{
	return AMoonlightGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoonlightGameMode);
AMoonlightGameMode::~AMoonlightGameMode() {}
// End Class AMoonlightGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Moonlight_Moonlight_Source_Moonlight_MoonlightGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoonlightGameMode, AMoonlightGameMode::StaticClass, TEXT("AMoonlightGameMode"), &Z_Registration_Info_UClass_AMoonlightGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoonlightGameMode), 661956097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Moonlight_Moonlight_Source_Moonlight_MoonlightGameMode_h_447559083(TEXT("/Script/Moonlight"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Moonlight_Moonlight_Source_Moonlight_MoonlightGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Moonlight_Moonlight_Source_Moonlight_MoonlightGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
