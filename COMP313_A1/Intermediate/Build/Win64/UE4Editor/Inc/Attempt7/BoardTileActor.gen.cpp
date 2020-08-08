// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attempt7/BoardTileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardTileActor() {}
// Cross Module References
	ATTEMPT7_API UClass* Z_Construct_UClass_ABoardTileActor_NoRegister();
	ATTEMPT7_API UClass* Z_Construct_UClass_ABoardTileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Attempt7();
// End Cross Module References
	DEFINE_FUNCTION(ABoardTileActor::execgetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardTileActor::execsetLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setLocation(Z_Param_newLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardTileActor::execsetIsBlack)
	{
		P_GET_UBOOL(Z_Param_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setIsBlack(Z_Param_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardTileActor::execgetIsBlack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getIsBlack();
		P_NATIVE_END;
	}
	void ABoardTileActor::StaticRegisterNativesABoardTileActor()
	{
		UClass* Class = ABoardTileActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getIsBlack", &ABoardTileActor::execgetIsBlack },
			{ "getLocation", &ABoardTileActor::execgetLocation },
			{ "setIsBlack", &ABoardTileActor::execsetIsBlack },
			{ "setLocation", &ABoardTileActor::execsetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics
	{
		struct BoardTileActor_eventgetIsBlack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoardTileActor_eventgetIsBlack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardTileActor_eventgetIsBlack_Parms), &Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoardTileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardTileActor, nullptr, "getIsBlack", nullptr, nullptr, sizeof(BoardTileActor_eventgetIsBlack_Parms), Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardTileActor_getIsBlack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoardTileActor_getIsBlack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardTileActor_getLocation_Statics
	{
		struct BoardTileActor_eventgetLocation_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoardTileActor_eventgetLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoardTileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardTileActor, nullptr, "getLocation", nullptr, nullptr, sizeof(BoardTileActor_eventgetLocation_Parms), Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardTileActor_getLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoardTileActor_getLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics
	{
		struct BoardTileActor_eventsetIsBlack_Parms
		{
			bool newValue;
		};
		static void NewProp_newValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::NewProp_newValue_SetBit(void* Obj)
	{
		((BoardTileActor_eventsetIsBlack_Parms*)Obj)->newValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardTileActor_eventsetIsBlack_Parms), &Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::NewProp_newValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoardTileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardTileActor, nullptr, "setIsBlack", nullptr, nullptr, sizeof(BoardTileActor_eventsetIsBlack_Parms), Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardTileActor_setIsBlack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoardTileActor_setIsBlack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardTileActor_setLocation_Statics
	{
		struct BoardTileActor_eventsetLocation_Parms
		{
			int32 newLocation;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::NewProp_newLocation = { "newLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoardTileActor_eventsetLocation_Parms, newLocation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::NewProp_newLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoardTileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardTileActor, nullptr, "setLocation", nullptr, nullptr, sizeof(BoardTileActor_eventsetLocation_Parms), Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardTileActor_setLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoardTileActor_setLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoardTileActor_NoRegister()
	{
		return ABoardTileActor::StaticClass();
	}
	struct Z_Construct_UClass_ABoardTileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBlack_MetaData[];
#endif
		static void NewProp_isBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBlack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoardTileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Attempt7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoardTileActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardTileActor_getIsBlack, "getIsBlack" }, // 3582382840
		{ &Z_Construct_UFunction_ABoardTileActor_getLocation, "getLocation" }, // 2505726163
		{ &Z_Construct_UFunction_ABoardTileActor_setIsBlack, "setIsBlack" }, // 1881508895
		{ &Z_Construct_UFunction_ABoardTileActor_setLocation, "setLocation" }, // 422105445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardTileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoardTileActor.h" },
		{ "ModuleRelativePath", "BoardTileActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack_MetaData[] = {
		{ "Comment", "// Sets default values for this actor's properties\n" },
		{ "ModuleRelativePath", "BoardTileActor.h" },
		{ "ToolTip", "Sets default values for this actor's properties" },
	};
#endif
	void Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack_SetBit(void* Obj)
	{
		((ABoardTileActor*)Obj)->isBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack = { "isBlack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoardTileActor), &Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardTileActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardTileActor_Statics::NewProp_isBlack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoardTileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardTileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoardTileActor_Statics::ClassParams = {
		&ABoardTileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoardTileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTileActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoardTileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoardTileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoardTileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoardTileActor, 3501665671);
	template<> ATTEMPT7_API UClass* StaticClass<ABoardTileActor>()
	{
		return ABoardTileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoardTileActor(Z_Construct_UClass_ABoardTileActor, &ABoardTileActor::StaticClass, TEXT("/Script/Attempt7"), TEXT("ABoardTileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardTileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
