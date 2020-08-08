// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATTEMPT7_BoardTileActor_generated_h
#error "BoardTileActor.generated.h already included, missing '#pragma once' in BoardTileActor.h"
#endif
#define ATTEMPT7_BoardTileActor_generated_h

#define Attempt7_Source_Attempt7_BoardTileActor_h_12_SPARSE_DATA
#define Attempt7_Source_Attempt7_BoardTileActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetLocation); \
	DECLARE_FUNCTION(execsetLocation); \
	DECLARE_FUNCTION(execsetIsBlack); \
	DECLARE_FUNCTION(execgetIsBlack);


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetLocation); \
	DECLARE_FUNCTION(execsetLocation); \
	DECLARE_FUNCTION(execsetIsBlack); \
	DECLARE_FUNCTION(execgetIsBlack);


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoardTileActor(); \
	friend struct Z_Construct_UClass_ABoardTileActor_Statics; \
public: \
	DECLARE_CLASS(ABoardTileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(ABoardTileActor)


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoardTileActor(); \
	friend struct Z_Construct_UClass_ABoardTileActor_Statics; \
public: \
	DECLARE_CLASS(ABoardTileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Attempt7"), NO_API) \
	DECLARE_SERIALIZER(ABoardTileActor)


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoardTileActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoardTileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardTileActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardTileActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoardTileActor(ABoardTileActor&&); \
	NO_API ABoardTileActor(const ABoardTileActor&); \
public:


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoardTileActor(ABoardTileActor&&); \
	NO_API ABoardTileActor(const ABoardTileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardTileActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardTileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoardTileActor)


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Attempt7_Source_Attempt7_BoardTileActor_h_9_PROLOG
#define Attempt7_Source_Attempt7_BoardTileActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_SPARSE_DATA \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_RPC_WRAPPERS \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_INCLASS \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Attempt7_Source_Attempt7_BoardTileActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_SPARSE_DATA \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_INCLASS_NO_PURE_DECLS \
	Attempt7_Source_Attempt7_BoardTileActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATTEMPT7_API UClass* StaticClass<class ABoardTileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Attempt7_Source_Attempt7_BoardTileActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
