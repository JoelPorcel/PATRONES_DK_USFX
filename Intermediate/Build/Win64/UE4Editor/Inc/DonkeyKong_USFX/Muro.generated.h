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
#ifdef DONKEYKONG_USFX_Muro_generated_h
#error "Muro.generated.h already included, missing '#pragma once' in Muro.h"
#endif
#define DONKEYKONG_USFX_Muro_generated_h

#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_SPARSE_DATA
#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMuro(); \
	friend struct Z_Construct_UClass_AMuro_Statics; \
public: \
	DECLARE_CLASS(AMuro, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AMuro)


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMuro(); \
	friend struct Z_Construct_UClass_AMuro_Statics; \
public: \
	DECLARE_CLASS(AMuro, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), NO_API) \
	DECLARE_SERIALIZER(AMuro)


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMuro(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMuro) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuro); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuro(AMuro&&); \
	NO_API AMuro(const AMuro&); \
public:


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuro(AMuro&&); \
	NO_API AMuro(const AMuro&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuro); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMuro)


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MuroMesh() { return STRUCT_OFFSET(AMuro, MuroMesh); } \
	FORCEINLINE static uint32 __PPO__MuroCollision() { return STRUCT_OFFSET(AMuro, MuroCollision); }


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_10_PROLOG
#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_PRIVATE_PROPERTY_OFFSET \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_RPC_WRAPPERS \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_INCLASS \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_PRIVATE_PROPERTY_OFFSET \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_INCLASS_NO_PURE_DECLS \
	STRATEGY_Source_DonkeyKong_USFX_Muro_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class AMuro>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STRATEGY_Source_DonkeyKong_USFX_Muro_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
