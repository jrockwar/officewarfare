// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAM_GameJamCharacter_generated_h
#error "GameJamCharacter.generated.h already included, missing '#pragma once' in GameJamCharacter.h"
#endif
#define GAMEJAM_GameJamCharacter_generated_h

#define officewarfare_Source_GameJam_GameJamCharacter_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharStats_Statics; \
	GAMEJAM_API static class UScriptStruct* StaticStruct();


template<> GAMEJAM_API UScriptStruct* StaticStruct<struct FCharStats>();

#define officewarfare_Source_GameJam_GameJamCharacter_h_32_SPARSE_DATA
#define officewarfare_Source_GameJam_GameJamCharacter_h_32_RPC_WRAPPERS
#define officewarfare_Source_GameJam_GameJamCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define officewarfare_Source_GameJam_GameJamCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameJamCharacter(); \
	friend struct Z_Construct_UClass_AGameJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamCharacter)


#define officewarfare_Source_GameJam_GameJamCharacter_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAGameJamCharacter(); \
	friend struct Z_Construct_UClass_AGameJamCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameJamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(AGameJamCharacter)


#define officewarfare_Source_GameJam_GameJamCharacter_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameJamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameJamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamCharacter(AGameJamCharacter&&); \
	NO_API AGameJamCharacter(const AGameJamCharacter&); \
public:


#define officewarfare_Source_GameJam_GameJamCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameJamCharacter(AGameJamCharacter&&); \
	NO_API AGameJamCharacter(const AGameJamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameJamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameJamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameJamCharacter)


#define officewarfare_Source_GameJam_GameJamCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGameJamCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGameJamCharacter, FollowCamera); }


#define officewarfare_Source_GameJam_GameJamCharacter_h_29_PROLOG
#define officewarfare_Source_GameJam_GameJamCharacter_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_SPARSE_DATA \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_RPC_WRAPPERS \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_INCLASS \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define officewarfare_Source_GameJam_GameJamCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_SPARSE_DATA \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_INCLASS_NO_PURE_DECLS \
	officewarfare_Source_GameJam_GameJamCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAM_API UClass* StaticClass<class AGameJamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID officewarfare_Source_GameJam_GameJamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
