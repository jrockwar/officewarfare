// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJam/CodePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodePlayerController() {}
// Cross Module References
	GAMEJAM_API UClass* Z_Construct_UClass_ACodePlayerController_NoRegister();
	GAMEJAM_API UClass* Z_Construct_UClass_ACodePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GameJam();
	GAMEJAM_API UFunction* Z_Construct_UFunction_ACodePlayerController_NextCharacter();
	GAMEJAM_API UClass* Z_Construct_UClass_AGameJamCharacter_NoRegister();
// End Cross Module References
	static FName NAME_ACodePlayerController_NextCharacter = FName(TEXT("NextCharacter"));
	void ACodePlayerController::NextCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACodePlayerController_NextCharacter),NULL);
	}
	void ACodePlayerController::StaticRegisterNativesACodePlayerController()
	{
	}
	struct Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "CodePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodePlayerController, nullptr, "NextCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodePlayerController_NextCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodePlayerController_NextCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodePlayerController_NoRegister()
	{
		return ACodePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACodePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodePlayerController_NextCharacter, "NextCharacter" }, // 4137154930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CodePlayerController.h" },
		{ "ModuleRelativePath", "CodePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodePlayerController_Statics::NewProp_CurrentChar_MetaData[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "CodePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACodePlayerController_Statics::NewProp_CurrentChar = { "CurrentChar", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodePlayerController, CurrentChar), METADATA_PARAMS(Z_Construct_UClass_ACodePlayerController_Statics::NewProp_CurrentChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodePlayerController_Statics::NewProp_CurrentChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "CodePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodePlayerController, Team), METADATA_PARAMS(Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team_Inner = { "Team", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGameJamCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodePlayerController_Statics::NewProp_CurrentChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodePlayerController_Statics::NewProp_Team_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodePlayerController_Statics::ClassParams = {
		&ACodePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACodePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodePlayerController, 1956246380);
	template<> GAMEJAM_API UClass* StaticClass<ACodePlayerController>()
	{
		return ACodePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodePlayerController(Z_Construct_UClass_ACodePlayerController, &ACodePlayerController::StaticClass, TEXT("/Script/GameJam"), TEXT("ACodePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
