// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sliding/MyWorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWorldDataLayers() {}
// Cross Module References
	SLIDING_API UClass* Z_Construct_UClass_AMyWorldDataLayers_NoRegister();
	SLIDING_API UClass* Z_Construct_UClass_AMyWorldDataLayers();
	ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers();
	UPackage* Z_Construct_UPackage__Script_Sliding();
// End Cross Module References
	void AMyWorldDataLayers::StaticRegisterNativesAMyWorldDataLayers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyWorldDataLayers);
	UClass* Z_Construct_UClass_AMyWorldDataLayers_NoRegister()
	{
		return AMyWorldDataLayers::StaticClass();
	}
	struct Z_Construct_UClass_AMyWorldDataLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyWorldDataLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldDataLayers,
		(UObject* (*)())Z_Construct_UPackage__Script_Sliding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyWorldDataLayers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Actor HLOD Cooking Transform Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyWorldDataLayers.h" },
		{ "ModuleRelativePath", "MyWorldDataLayers.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyWorldDataLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyWorldDataLayers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyWorldDataLayers_Statics::ClassParams = {
		&AMyWorldDataLayers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyWorldDataLayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyWorldDataLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyWorldDataLayers()
	{
		if (!Z_Registration_Info_UClass_AMyWorldDataLayers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyWorldDataLayers.OuterSingleton, Z_Construct_UClass_AMyWorldDataLayers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyWorldDataLayers.OuterSingleton;
	}
	template<> SLIDING_API UClass* StaticClass<AMyWorldDataLayers>()
	{
		return AMyWorldDataLayers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWorldDataLayers);
	struct Z_CompiledInDeferFile_FID_Final_Source_Sliding_MyWorldDataLayers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Final_Source_Sliding_MyWorldDataLayers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyWorldDataLayers, AMyWorldDataLayers::StaticClass, TEXT("AMyWorldDataLayers"), &Z_Registration_Info_UClass_AMyWorldDataLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyWorldDataLayers), 989063661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Final_Source_Sliding_MyWorldDataLayers_h_2301071476(TEXT("/Script/Sliding"),
		Z_CompiledInDeferFile_FID_Final_Source_Sliding_MyWorldDataLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Final_Source_Sliding_MyWorldDataLayers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
