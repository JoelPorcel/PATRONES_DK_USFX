// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/BarrilComun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrilComun() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABarrilComun_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABarrilComun();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_ABarril();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void ABarrilComun::StaticRegisterNativesABarrilComun()
	{
	}
	UClass* Z_Construct_UClass_ABarrilComun_NoRegister()
	{
		return ABarrilComun::StaticClass();
	}
	struct Z_Construct_UClass_ABarrilComun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrilComun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarril,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrilComun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BarrilComun.h" },
		{ "ModuleRelativePath", "BarrilComun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrilComun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrilComun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrilComun_Statics::ClassParams = {
		&ABarrilComun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarrilComun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrilComun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrilComun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrilComun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrilComun, 1041972588);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<ABarrilComun>()
	{
		return ABarrilComun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrilComun(Z_Construct_UClass_ABarrilComun, &ABarrilComun::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("ABarrilComun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrilComun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif