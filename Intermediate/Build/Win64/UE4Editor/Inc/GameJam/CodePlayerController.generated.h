// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAM_CodePlayerController_generated_h
#error "CodePlayerController.generated.h already included, missing '#pragma once' in CodePlayerController.h"
#endif
#define GAMEJAM_CodePlayerController_generated_h

#define officewarfare_Source_GameJam_CodePlayerController_h_17_SPARSE_DATA
#define officewarfare_Source_GameJam_CodePlayerController_h_17_RPC_WRAPPERS
#define officewarfare_Source_GameJam_CodePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define officewarfare_Source_GameJam_CodePlayerController_h_17_EVENT_PARMS
#define officewarfare_Source_GameJam_CodePlayerController_h_17_CALLBACK_WRAPPERS
#define officewarfare_Source_GameJam_CodePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodePlayerController(); \
	friend struct Z_Construct_UClass_ACodePlayerController_Statics; \
public: \
	DECLARE_CLASS(ACodePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(ACodePlayerController)


#define officewarfare_Source_GameJam_CodePlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACodePlayerController(); \
	friend struct Z_Construct_UClass_ACodePlayerController_Statics; \
public: \
	DECLARE_CLASS(ACodePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJam"), NO_API) \
	DECLARE_SERIALIZER(ACodePlayerController)


#define officewarfare_Source_GameJam_CodePlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodePlayerController(ACodePlayerController&&); \
	NO_API ACodePlayerController(const ACodePlayerController&); \
public:


#define officewarfare_Source_GameJam_CodePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodePlayerController(ACodePlayerController&&); \
	NO_API ACodePlayerController(const ACodePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodePlayerController)


#define officewarfare_Source_GameJam_CodePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Team() { return STRUCT_OFFSET(ACodePlayerController, Team); } \
	FORCEINLINE static uint32 __PPO__CurrentChar() { return STRUCT_OFFSET(ACodePlayerController, CurrentChar); }


#define officewarfare_Source_GameJam_CodePlayerController_h_14_PROLOG \
	officewarfare_Source_GameJam_CodePlayerController_h_17_EVENT_PARMS


#define officewarfare_Source_GameJam_CodePlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_CodePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	officewarfare_Source_GameJam_CodePlayerController_h_17_SPARSE_DATA \
	officewarfare_Source_GameJam_CodePlayerController_h_17_RPC_WRAPPERS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_CALLBACK_WRAPPERS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_INCLASS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define officewarfare_Source_GameJam_CodePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_CodePlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	officewarfare_Source_GameJam_CodePlayerController_h_17_SPARSE_DATA \
	officewarfare_Source_GameJam_CodePlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_CALLBACK_WRAPPERS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	officewarfare_Source_GameJam_CodePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAM_API UClass* StaticClass<class ACodePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID officewarfare_Source_GameJam_CodePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
