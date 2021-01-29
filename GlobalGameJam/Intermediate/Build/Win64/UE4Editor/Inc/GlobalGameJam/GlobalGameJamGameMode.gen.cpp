// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlobalGameJam/GlobalGameJamGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalGameJamGameMode() {}
// Cross Module References
	GLOBALGAMEJAM_API UClass* Z_Construct_UClass_AGlobalGameJamGameMode_NoRegister();
	GLOBALGAMEJAM_API UClass* Z_Construct_UClass_AGlobalGameJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GlobalGameJam();
// End Cross Module References
	void AGlobalGameJamGameMode::StaticRegisterNativesAGlobalGameJamGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGlobalGameJamGameMode_NoRegister()
	{
		return AGlobalGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGlobalGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlobalGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GlobalGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlobalGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GlobalGameJamGameMode.h" },
		{ "ModuleRelativePath", "GlobalGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlobalGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalGameJamGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGlobalGameJamGameMode_Statics::ClassParams = {
		&AGlobalGameJamGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGlobalGameJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGlobalGameJamGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGlobalGameJamGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGlobalGameJamGameMode, 605133887);
	template<> GLOBALGAMEJAM_API UClass* StaticClass<AGlobalGameJamGameMode>()
	{
		return AGlobalGameJamGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGlobalGameJamGameMode(Z_Construct_UClass_AGlobalGameJamGameMode, &AGlobalGameJamGameMode::StaticClass, TEXT("/Script/GlobalGameJam"), TEXT("AGlobalGameJamGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalGameJamGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
