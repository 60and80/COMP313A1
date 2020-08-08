// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attempt7/Attempt7GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttempt7GameModeBase() {}
// Cross Module References
	ATTEMPT7_API UClass* Z_Construct_UClass_AAttempt7GameModeBase_NoRegister();
	ATTEMPT7_API UClass* Z_Construct_UClass_AAttempt7GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Attempt7();
// End Cross Module References
	void AAttempt7GameModeBase::StaticRegisterNativesAAttempt7GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAttempt7GameModeBase_NoRegister()
	{
		return AAttempt7GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAttempt7GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttempt7GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Attempt7,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttempt7GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Attempt7GameModeBase.h" },
		{ "ModuleRelativePath", "Attempt7GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttempt7GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttempt7GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAttempt7GameModeBase_Statics::ClassParams = {
		&AAttempt7GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAttempt7GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAttempt7GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAttempt7GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAttempt7GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAttempt7GameModeBase, 2490399653);
	template<> ATTEMPT7_API UClass* StaticClass<AAttempt7GameModeBase>()
	{
		return AAttempt7GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAttempt7GameModeBase(Z_Construct_UClass_AAttempt7GameModeBase, &AAttempt7GameModeBase::StaticClass, TEXT("/Script/Attempt7"), TEXT("AAttempt7GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttempt7GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
