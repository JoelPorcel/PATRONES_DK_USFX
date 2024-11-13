// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_USFX/MuroEspinoso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroEspinoso() {}
// Cross Module References
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroEspinoso_NoRegister();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuroEspinoso();
	DONKEYKONG_USFX_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_USFX();
// End Cross Module References
	void AMuroEspinoso::StaticRegisterNativesAMuroEspinoso()
	{
	}
	UClass* Z_Construct_UClass_AMuroEspinoso_NoRegister()
	{
		return AMuroEspinoso::StaticClass();
	}
	struct Z_Construct_UClass_AMuroEspinoso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroEspinoso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroEspinoso_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroEspinoso.h" },
		{ "ModuleRelativePath", "MuroEspinoso.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroEspinoso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroEspinoso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroEspinoso_Statics::ClassParams = {
		&AMuroEspinoso::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroEspinoso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroEspinoso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroEspinoso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroEspinoso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroEspinoso, 3971079356);
	template<> DONKEYKONG_USFX_API UClass* StaticClass<AMuroEspinoso>()
	{
		return AMuroEspinoso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroEspinoso(Z_Construct_UClass_AMuroEspinoso, &AMuroEspinoso::StaticClass, TEXT("/Script/DonkeyKong_USFX"), TEXT("AMuroEspinoso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroEspinoso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
