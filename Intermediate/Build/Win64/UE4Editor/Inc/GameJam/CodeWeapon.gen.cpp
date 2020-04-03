// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJam/CodeWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeWeapon() {}
// Cross Module References
	GAMEJAM_API UClass* Z_Construct_UClass_ACodeWeapon_NoRegister();
	GAMEJAM_API UClass* Z_Construct_UClass_ACodeWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameJam();
	GAMEJAM_API UFunction* Z_Construct_UFunction_ACodeWeapon_PrimaryFunction();
	GAMEJAM_API UFunction* Z_Construct_UFunction_ACodeWeapon_SecondaryFunction();
// End Cross Module References
	static FName NAME_ACodeWeapon_PrimaryFunction = FName(TEXT("PrimaryFunction"));
	void ACodeWeapon::PrimaryFunction()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACodeWeapon_PrimaryFunction),NULL);
	}
	static FName NAME_ACodeWeapon_SecondaryFunction = FName(TEXT("SecondaryFunction"));
	void ACodeWeapon::SecondaryFunction()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACodeWeapon_SecondaryFunction),NULL);
	}
	void ACodeWeapon::StaticRegisterNativesACodeWeapon()
	{
	}
	struct Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "CodeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodeWeapon, nullptr, "PrimaryFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodeWeapon_PrimaryFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodeWeapon_PrimaryFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "CodeWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodeWeapon, nullptr, "SecondaryFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodeWeapon_SecondaryFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodeWeapon_SecondaryFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodeWeapon_NoRegister()
	{
		return ACodeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACodeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodeWeapon_PrimaryFunction, "PrimaryFunction" }, // 1614342765
		{ &Z_Construct_UFunction_ACodeWeapon_SecondaryFunction, "SecondaryFunction" }, // 2171487710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodeWeapon.h" },
		{ "ModuleRelativePath", "CodeWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodeWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodeWeapon_Statics::ClassParams = {
		&ACodeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodeWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodeWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodeWeapon, 590271045);
	template<> GAMEJAM_API UClass* StaticClass<ACodeWeapon>()
	{
		return ACodeWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodeWeapon(Z_Construct_UClass_ACodeWeapon, &ACodeWeapon::StaticClass, TEXT("/Script/GameJam"), TEXT("ACodeWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
