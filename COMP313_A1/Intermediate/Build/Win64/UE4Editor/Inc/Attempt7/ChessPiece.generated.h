// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATTEMPT7_ChessPiece_generated_h
#error "ChessPiece.generated.h already included, missing '#pragma once' in ChessPiece.h"
#endif
#define ATTEMPT7_ChessPiece_generated_h

#define Attempt7_Source_Attempt7_ChessPiece_h_13_SPARSE_DATA
#define Attempt7_Source_Attempt7_ChessPiece_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetIsKing); \
	DECLARE_FUNCTION(execsetIsKing); \
	DECLARE_FUNCTION(execgetLocation); \
	DECLARE_FUNCTION(execsetLocation); \
	DECLARE_FUNCTION(execgetIsBlack); \
	DECLARE_FUNCTION(execsetIsBlack);


#define Attempt7_Source_Attempt7_ChessPiece_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetIsKing); \
	DECLARE_FUNCTION(execsetIsKing); \
	DECLARE_FUNCTION(execgetLocation); \
	DECLARE_FUNCTION(execsetLocation); \
	DECLARE_FUNCTION(execgetIsBlack); \
	DECLARE_FUNCTION(execsetIsBlack);


#define Attempt7_Source_Attempt7_ChessPiece_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChessPiece(); \
	friend struct Z_Construct_UClass_AChessPiece_Statics; \
public: \
	DECLARE_CLASS(AChessPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(AChessPiece)


#define Attempt7_Source_Attempt7_ChessPiece_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAChessPiece(); \
	friend struct Z_Construct_UClass_AChessPiece_Statics; \
public: \
	DECLARE_CLASS(AChessPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(AChessPiece)


#define Attempt7_Source_Attempt7_ChessPiece_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChessPiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChessPiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessPiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessPiece(AChessPiece&&); \
	NO_API AChessPiece(const AChessPiece&); \
public:


#define Attempt7_Source_Attempt7_ChessPiece_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessPiece(AChessPiece&&); \
	NO_API AChessPiece(const AChessPiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessPiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChessPiece)


#define Attempt7_Source_Attempt7_ChessPiece_h_13_PRIVATE_PROPERTY_OFFSET
#define Attempt7_Source_Attempt7_ChessPiece_h_10_PROLOG
#define Attempt7_Source_Attempt7_ChessPiece_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_ChessPiece_h_13_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_ChessPiece_h_13_SPARSE_DATA \
	Attempt7_Source_Attempt7_ChessPiece_h_13_RPC_WRAPPERS \
	Attempt7_Source_Attempt7_ChessPiece_h_13_INCLASS \
	Attempt7_Source_Attempt7_ChessPiece_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Attempt7_Source_Attempt7_ChessPiece_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_ChessPiece_h_13_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_ChessPiece_h_13_SPARSE_DATA \
	Attempt7_Source_Attempt7_ChessPiece_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_ChessPiece_h_13_INCLASS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_ChessPiece_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATTEMPT7_API UClass* StaticClass<class AChessPiece>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Attempt7_Source_Attempt7_ChessPiece_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
