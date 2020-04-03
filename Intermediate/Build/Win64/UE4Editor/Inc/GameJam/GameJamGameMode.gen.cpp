// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJam/GameJamGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJamGameMode() {}
// Cross Module References
	GAMEJAM_API UClass* Z_Construct_UClass_AGameJamGameMode_NoRegister();
	GAMEJAM_API UClass* Z_Construct_UClass_AGameJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameJam();
	GAMEJAM_API UFunction* Z_Construct_UFunction_AGameJamGameMode_NextCharacter();
// End Cross Module References
	static FName NAME_AGameJamGameMode_NextCharacter = FName(TEXT("NextCharacter"));
	void AGameJamGameMode::NextCharacter()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameJamGameMode_NextCharacter),NULL);
	}
	void AGameJamGameMode::StaticRegisterNativesAGameJamGameMode()
	{
	}
	struct Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "GameJamGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameJamGameMode, nullptr, "NextCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameJamGameMode_NextCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameJamGameMode_NextCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameJamGameMode_NoRegister()
	{
		return AGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TurnTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameJamGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameJamGameMode_NextCharacter, "NextCharacter" }, // 2224432674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameJamGameMode.h" },
		{ "ModuleRelativePath", "GameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameJamGameMode_Statics::NewProp_TurnTime_MetaData[] = {
		{ "Category", "Office War" },
		{ "ModuleRelativePath", "GameJamGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameJamGameMode_Statics::NewProp_TurnTime = { "TurnTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameJamGameMode, TurnTime), METADATA_PARAMS(Z_Construct_UClass_AGameJamGameMode_Statics::NewProp_TurnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameJamGameMode_Statics::NewProp_TurnTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameJamGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameJamGameMode_Statics::NewProp_TurnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameJamGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameJamGameMode_Statics::ClassParams = {
		&AGameJamGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameJamGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameJamGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameJamGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameJamGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameJamGameMode, 2579049932);
	template<> GAMEJAM_API UClass* StaticClass<AGameJamGameMode>()
	{
		return AGameJamGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameJamGameMode(Z_Construct_UClass_AGameJamGameMode, &AGameJamGameMode::StaticClass, TEXT("/Script/GameJam"), TEXT("AGameJamGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameJamGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
