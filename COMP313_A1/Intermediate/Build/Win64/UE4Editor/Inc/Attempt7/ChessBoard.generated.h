// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChessPiece;
#ifdef ATTEMPT7_ChessBoard_generated_h
#error "ChessBoard.generated.h already included, missing '#pragma once' in ChessBoard.h"
#endif
#define ATTEMPT7_ChessBoard_generated_h

#define Attempt7_Source_Attempt7_ChessBoard_h_13_SPARSE_DATA
#define Attempt7_Source_Attempt7_ChessBoard_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exectakePiece); \
	DECLARE_FUNCTION(execmovePiece);


#define Attempt7_Source_Attempt7_ChessBoard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exectakePiece); \
	DECLARE_FUNCTION(execmovePiece);


#define Attempt7_Source_Attempt7_ChessBoard_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChessBoard(); \
	friend struct Z_Construct_UClass_AChessBoard_Statics; \
public: \
	DECLARE_CLASS(AChessBoard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(AChessBoard)


#define Attempt7_Source_Attempt7_ChessBoard_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAChessBoard(); \
	friend struct Z_Construct_UClass_AChessBoard_Statics; \
public: \
	DECLARE_CLASS(AChessBoard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(AChessBoard)


#define Attempt7_Source_Attempt7_ChessBoard_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChessBoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChessBoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessBoard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessBoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessBoard(AChessBoard&&); \
	NO_API AChessBoard(const AChessBoard&); \
public:


#define Attempt7_Source_Attempt7_ChessBoard_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessBoard(AChessBoard&&); \
	NO_API AChessBoard(const AChessBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessBoard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChessBoard)


#define Attempt7_Source_Attempt7_ChessBoard_h_13_PRIVATE_PROPERTY_OFFSET
#define Attempt7_Source_Attempt7_ChessBoard_h_10_PROLOG
#define Attempt7_Source_Attempt7_ChessBoard_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_ChessBoard_h_13_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_ChessBoard_h_13_SPARSE_DATA \
	Attempt7_Source_Attempt7_ChessBoard_h_13_RPC_WRAPPERS \
	Attempt7_Source_Attempt7_ChessBoard_h_13_INCLASS \
	Attempt7_Source_Attempt7_ChessBoard_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Attempt7_Source_Attempt7_ChessBoard_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_ChessBoard_h_13_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_ChessBoard_h_13_SPARSE_DATA \
	Attempt7_Source_Attempt7_ChessBoard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_ChessBoard_h_13_INCLASS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_ChessBoard_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATTEMPT7_API UClass* StaticClass<class AChessBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Attempt7_Source_Attempt7_ChessBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
