// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestingGrounds/TestingGroundsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGroundsHUD() {}
// Cross Module References
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsHUD_NoRegister();
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds();
// End Cross Module References
	void ATestingGroundsHUD::StaticRegisterNativesATestingGroundsHUD()
	{
	}
	UClass* Z_Construct_UClass_ATestingGroundsHUD_NoRegister()
	{
		return ATestingGroundsHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATestingGroundsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestingGroundsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestingGroundsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TestingGroundsHUD.h" },
		{ "ModuleRelativePath", "TestingGroundsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestingGroundsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestingGroundsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestingGroundsHUD_Statics::ClassParams = {
		&ATestingGroundsHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATestingGroundsHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestingGroundsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestingGroundsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestingGroundsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGroundsHUD, 680800496);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGroundsHUD(Z_Construct_UClass_ATestingGroundsHUD, &ATestingGroundsHUD::StaticClass, TEXT("/Script/TestingGrounds"), TEXT("ATestingGroundsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGroundsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
