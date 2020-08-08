// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attempt7/ChessBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChessBoard() {}
// Cross Module References
	ATTEMPT7_API UClass* Z_Construct_UClass_AChessBoard_NoRegister();
	ATTEMPT7_API UClass* Z_Construct_UClass_AChessBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Attempt7();
	ATTEMPT7_API UClass* Z_Construct_UClass_AChessPiece_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChessBoard::exectakePiece)
	{
		P_GET_OBJECT(AChessPiece,Z_Param_taker);
		P_GET_OBJECT(AChessPiece,Z_Param_takee);
		P_GET_PROPERTY(FIntProperty,Z_Param_destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->takePiece(Z_Param_taker,Z_Param_takee,Z_Param_destination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChessBoard::execmovePiece)
	{
		P_GET_OBJECT(AChessPiece,Z_Param_piece);
		P_GET_PROPERTY(FIntProperty,Z_Param_destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->movePiece(Z_Param_piece,Z_Param_destination);
		P_NATIVE_END;
	}
	void AChessBoard::StaticRegisterNativesAChessBoard()
	{
		UClass* Class = AChessBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "movePiece", &AChessBoard::execmovePiece },
			{ "takePiece", &AChessBoard::exectakePiece },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChessBoard_movePiece_Statics
	{
		struct ChessBoard_eventmovePiece_Parms
		{
			AChessPiece* piece;
			int32 destination;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_piece;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AChessBoard_movePiece_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessBoard_eventmovePiece_Parms, destination), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChessBoard_movePiece_Statics::NewProp_piece = { "piece", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessBoard_eventmovePiece_Parms, piece), Z_Construct_UClass_AChessPiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessBoard_movePiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessBoard_movePiece_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessBoard_movePiece_Statics::NewProp_piece,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessBoard_movePiece_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessBoard_movePiece_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessBoard, nullptr, "movePiece", nullptr, nullptr, sizeof(ChessBoard_eventmovePiece_Parms), Z_Construct_UFunction_AChessBoard_movePiece_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessBoard_movePiece_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessBoard_movePiece_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessBoard_movePiece_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessBoard_movePiece()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessBoard_movePiece_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChessBoard_takePiece_Statics
	{
		struct ChessBoard_eventtakePiece_Parms
		{
			AChessPiece* taker;
			AChessPiece* takee;
			int32 destination;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_takee;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_taker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessBoard_eventtakePiece_Parms, destination), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_takee = { "takee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessBoard_eventtakePiece_Parms, takee), Z_Construct_UClass_AChessPiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_taker = { "taker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChessBoard_eventtakePiece_Parms, taker), Z_Construct_UClass_AChessPiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChessBoard_takePiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_takee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChessBoard_takePiece_Statics::NewProp_taker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChessBoard_takePiece_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChessBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChessBoard_takePiece_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChessBoard, nullptr, "takePiece", nullptr, nullptr, sizeof(ChessBoard_eventtakePiece_Parms), Z_Construct_UFunction_AChessBoard_takePiece_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessBoard_takePiece_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChessBoard_takePiece_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChessBoard_takePiece_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChessBoard_takePiece()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChessBoard_takePiece_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChessBoard_NoRegister()
	{
		return AChessBoard::StaticClass();
	}
	struct Z_Construct_UClass_AChessBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pieces_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pieces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChessBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Attempt7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChessBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChessBoard_movePiece, "movePiece" }, // 3313525060
		{ &Z_Construct_UFunction_AChessBoard_takePiece, "takePiece" }, // 3394576370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChessBoard.h" },
		{ "ModuleRelativePath", "ChessBoard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChessBoard_Statics::NewProp_pieces_MetaData[] = {
		{ "ModuleRelativePath", "ChessBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessBoard_Statics::NewProp_pieces = { "pieces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(pieces, AChessBoard), STRUCT_OFFSET(AChessBoard, pieces), Z_Construct_UClass_AChessPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChessBoard_Statics::NewProp_pieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChessBoard_Statics::NewProp_pieces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChessBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessBoard_Statics::NewProp_pieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChessBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChessBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChessBoard_Statics::ClassParams = {
		&AChessBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChessBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChessBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChessBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChessBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChessBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChessBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChessBoard, 2063670311);
	template<> ATTEMPT7_API UClass* StaticClass<AChessBoard>()
	{
		return AChessBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChessBoard(Z_Construct_UClass_AChessBoard, &AChessBoard::StaticClass, TEXT("/Script/Attempt7"), TEXT("AChessBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChessBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
