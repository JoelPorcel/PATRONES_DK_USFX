// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DONKEYKONG_USFX_IProyectil_generated_h
#error "IProyectil.generated.h already included, missing '#pragma once' in IProyectil.h"
#endif
#define DONKEYKONG_USFX_IProyectil_generated_h

#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_SPARSE_DATA
#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_RPC_WRAPPERS
#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_USFX_API UIProyectil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIProyectil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_USFX_API, UIProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIProyectil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_USFX_API UIProyectil(UIProyectil&&); \
	DONKEYKONG_USFX_API UIProyectil(const UIProyectil&); \
public:


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DONKEYKONG_USFX_API UIProyectil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DONKEYKONG_USFX_API UIProyectil(UIProyectil&&); \
	DONKEYKONG_USFX_API UIProyectil(const UIProyectil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DONKEYKONG_USFX_API, UIProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIProyectil); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIProyectil)


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIProyectil(); \
	friend struct Z_Construct_UClass_UIProyectil_Statics; \
public: \
	DECLARE_CLASS(UIProyectil, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonkeyKong_USFX"), DONKEYKONG_USFX_API) \
	DECLARE_SERIALIZER(UIProyectil)


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_GENERATED_UINTERFACE_BODY() \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_GENERATED_UINTERFACE_BODY() \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIProyectil() {} \
public: \
	typedef UIProyectil UClassType; \
	typedef IIProyectil ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIProyectil() {} \
public: \
	typedef UIProyectil UClassType; \
	typedef IIProyectil ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_10_PROLOG
#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_RPC_WRAPPERS \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_SPARSE_DATA \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	STRATEGY_Source_DonkeyKong_USFX_IProyectil_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_USFX_API UClass* StaticClass<class UIProyectil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STRATEGY_Source_DonkeyKong_USFX_IProyectil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
