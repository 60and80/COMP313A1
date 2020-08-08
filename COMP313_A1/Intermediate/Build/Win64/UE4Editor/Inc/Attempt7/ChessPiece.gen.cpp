// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attempt7/ChessPiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChessPiece() {}
// Cross Module References
	ATTEMPT7_API UClass* Z_Construct_UClass_AChessPiece_NoRegister();
	ATTEMPT7_API UClass* Z_Construct_UClass_AChessPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Attempt7();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChessPiece::execgetIsKing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getIsKing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execsetIsKing)
	{
		P_GET_UBOOL(Z_Param_king);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setIsKing(Z_Param_king);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execgetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execsetLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setLocation(Z_Param_newLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execgetIsBlack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getIsBlack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessPiece::execsetIsBlack)
	{
		P_GET_UBOOL(Z_Param_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setIsBlack(Z_Param_newValue);
		P_NATIVE_END;
	}
	void AChessPiece::StaticRegisterNativesAChessPiece()
	{
		UClass* Class = AChessPiece::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getIsBlack", &AChessPiece::execgetIsBlack },
			{ "getIsKing", &AChessPiece::execgetIsKing },
			{ "getLocation", &AChessPiece::execgetLocation },
			{ "setIsBlack", &AChessPiece::execsetIsBlack },
			{ "setIsKing", &AChessPiece::execsetIsKing },
			{ "setLocation", &AChessPiece::execsetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChessPiece_getIsBlack_Statics
	{
		struct ChessPiece_eventgetIsBlack_Parms
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
	void Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChessPiece_eventgetIsBlack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChessPiece_eventgetIsBlack_Parms), &Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "getIsBlack", nullptr, nullptr, sizeof(ChessPiece_eventgetIsBlack_Parms), Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_getIsBlack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_getIsBlack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_getIsKing_Statics
	{
		struct ChessPiece_eventgetIsKing_Parms
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
	void Z_Construct_UFunction_AChessPiece_getIsKing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChessPiece_eventgetIsKing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChessPiece_getIsKing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChessPiece_eventgetIsKing_Parms), &Z_Construct_UFunction_AChessPiece_getIsKing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_getIsKing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_getIsKing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_getIsKing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_getIsKing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "getIsKing", nullptr, nullptr, sizeof(ChessPiece_eventgetIsKing_Parms), Z_Construct_UFunction_AChessPiece_getIsKing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getIsKing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_getIsKing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getIsKing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_getIsKing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_getIsKing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_getLocation_Statics
	{
		struct ChessPiece_eventgetLocation_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AChessPiece_getLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessPiece_eventgetLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_getLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_getLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_getLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_getLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "getLocation", nullptr, nullptr, sizeof(ChessPiece_eventgetLocation_Parms), Z_Construct_UFunction_AChessPiece_getLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_getLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_getLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_getLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_getLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_setIsBlack_Statics
	{
		struct ChessPiece_eventsetIsBlack_Parms
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
	void Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::NewProp_newValue_SetBit(void* Obj)
	{
		((ChessPiece_eventsetIsBlack_Parms*)Obj)->newValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChessPiece_eventsetIsBlack_Parms), &Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::NewProp_newValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//whether the piece is black or white\n" },
		{ "ModuleRelativePath", "ChessPiece.h" },
		{ "ToolTip", "whether the piece is black or white" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "setIsBlack", nullptr, nullptr, sizeof(ChessPiece_eventsetIsBlack_Parms), Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_setIsBlack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_setIsBlack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_setIsKing_Statics
	{
		struct ChessPiece_eventsetIsKing_Parms
		{
			bool king;
		};
		static void NewProp_king_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_king;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChessPiece_setIsKing_Statics::NewProp_king_SetBit(void* Obj)
	{
		((ChessPiece_eventsetIsKing_Parms*)Obj)->king = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChessPiece_setIsKing_Statics::NewProp_king = { "king", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChessPiece_eventsetIsKing_Parms), &Z_Construct_UFunction_AChessPiece_setIsKing_Statics::NewProp_king_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_setIsKing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_setIsKing_Statics::NewProp_king,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_setIsKing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_setIsKing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "setIsKing", nullptr, nullptr, sizeof(ChessPiece_eventsetIsKing_Parms), Z_Construct_UFunction_AChessPiece_setIsKing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setIsKing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_setIsKing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setIsKing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_setIsKing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_setIsKing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessPiece_setLocation_Statics
	{
		struct ChessPiece_eventsetLocation_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AChessPiece_setLocation_Statics::NewProp_newLocation = { "newLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessPiece_eventsetLocation_Parms, newLocation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessPiece_setLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessPiece_setLocation_Statics::NewProp_newLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessPiece_setLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessPiece_setLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessPiece, nullptr, "setLocation", nullptr, nullptr, sizeof(ChessPiece_eventsetLocation_Parms), Z_Construct_UFunction_AChessPiece_setLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessPiece_setLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessPiece_setLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessPiece_setLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessPiece_setLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChessPiece_NoRegister()
	{
		return AChessPiece::StaticClass();
	}
	struct Z_Construct_UClass_AChessPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isKing_MetaData[];
#endif
		static void NewProp_isKing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_darkKingMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_darkKingMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightKingMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lightKingMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_darkMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_darkMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lightMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBlack_MetaData[];
#endif
		static void NewProp_isBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBlack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pieceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChessPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Attempt7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChessPiece_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChessPiece_getIsBlack, "getIsBlack" }, // 528380584
		{ &Z_Construct_UFunction_AChessPiece_getIsKing, "getIsKing" }, // 660577871
		{ &Z_Construct_UFunction_AChessPiece_getLocation, "getLocation" }, // 3780841578
		{ &Z_Construct_UFunction_AChessPiece_setIsBlack, "setIsBlack" }, // 4240004877
		{ &Z_Construct_UFunction_AChessPiece_setIsKing, "setIsKing" }, // 730677651
		{ &Z_Construct_UFunction_AChessPiece_setLocation, "setLocation" }, // 2080079566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChessPiece.h" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing_MetaData[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	void Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing_SetBit(void* Obj)
	{
		((AChessPiece*)Obj)->isKing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing = { "isKing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChessPiece), &Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_darkKingMat_MetaData[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_darkKingMat = { "darkKingMat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, darkKingMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_darkKingMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_darkKingMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_lightKingMat_MetaData[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_lightKingMat = { "lightKingMat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, lightKingMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_lightKingMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_lightKingMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_darkMaterial_MetaData[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_darkMaterial = { "darkMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, darkMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_darkMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_darkMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_lightMaterial_MetaData[] = {
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_lightMaterial = { "lightMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, lightMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_lightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_lightMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceModel_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceModel = { "pieceModel", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, pieceModel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "Comment", "//What type of piece this is. Used for a hardcoded, hacky solution to moving\n" },
		{ "ModuleRelativePath", "ChessPiece.h" },
		{ "ToolTip", "What type of piece this is. Used for a hardcoded, hacky solution to moving" },
	};
#endif
	void Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack_SetBit(void* Obj)
	{
		((AChessPiece*)Obj)->isBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack = { "isBlack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChessPiece), &Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceType_MetaData[] = {
		{ "Category", "ChessPiece" },
		{ "ModuleRelativePath", "ChessPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceType = { "pieceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChessPiece, pieceType), METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChessPiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_isKing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_darkKingMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_lightKingMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_darkMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_lightMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_isBlack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessPiece_Statics::NewProp_pieceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChessPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChessPiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChessPiece_Statics::ClassParams = {
		&AChessPiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChessPiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChessPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChessPiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChessPiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChessPiece, 540374990);
	template<> ATTEMPT7_API UClass* StaticClass<AChessPiece>()
	{
		return AChessPiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChessPiece(Z_Construct_UClass_AChessPiece, &AChessPiece::StaticClass, TEXT("/Script/Attempt7"), TEXT("AChessPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChessPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
