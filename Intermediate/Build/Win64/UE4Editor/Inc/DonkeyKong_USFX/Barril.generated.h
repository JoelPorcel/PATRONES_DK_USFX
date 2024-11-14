// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DONKEYKONG_USFX_Barril_generated_h
#error "Barril.generated.h already included, missing '#pragma once' in Barril.h"
#endif
#define DONKEYKONG_USFX_Barril_generated_h

#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_SPARSE_DATA
#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarril(); \
	friend struct Z_Construct_UClass_ABarril_Statics; \
public: \
	DECLARE_CLASS(ABarril, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(ABarril)


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABarril(); \
	friend struct Z_Construct_UClass_ABarril_Statics; \
public: \
	DECLARE_CLASS(ABarril, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(ABarril)


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarril(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarril) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarril); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarril); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarril(ABarril&&); \
	NO_API ABarril(const ABarril&); \
public:


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarril(ABarril&&); \
	NO_API ABarril(const ABarril&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarril); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarril); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarril)


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_PRIVATE_PROPERTY_OFFSET
#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_9_PROLOG
#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_PRIVATE_PROPERTY_OFFSET \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_RPC_WRAPPERS \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_INCLASS \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_PRIVATE_PROPERTY_OFFSET \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_INCLASS_NO_PURE_DECLS \
	STRATEGY_Source_DonkeyKong_USFX_Barril_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class ABarril>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STRATEGY_Source_DonkeyKong_USFX_Barril_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
