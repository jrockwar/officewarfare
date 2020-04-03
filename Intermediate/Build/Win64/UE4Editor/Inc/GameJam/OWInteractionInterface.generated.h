// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAM_OWInteractionInterface_generated_h
#error "OWInteractionInterface.generated.h already included, missing '#pragma once' in OWInteractionInterface.h"
#endif
#define GAMEJAM_OWInteractionInterface_generated_h

#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_SPARSE_DATA
#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_RPC_WRAPPERS
#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEJAM_API UOWInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEJAM_API, UOWInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEJAM_API UOWInteractionInterface(UOWInteractionInterface&&); \
	GAMEJAM_API UOWInteractionInterface(const UOWInteractionInterface&); \
public:


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEJAM_API UOWInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEJAM_API UOWInteractionInterface(UOWInteractionInterface&&); \
	GAMEJAM_API UOWInteractionInterface(const UOWInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEJAM_API, UOWInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWInteractionInterface)


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOWInteractionInterface(); \
	friend struct Z_Construct_UClass_UOWInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UOWInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameJam"), GAMEJAM_API) \
	DECLARE_SERIALIZER(UOWInteractionInterface)


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOWInteractionInterface() {} \
public: \
	typedef UOWInteractionInterface UClassType; \
	typedef IOWInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define officewarfare_Source_GameJam_OWInteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IOWInteractionInterface() {} \
public: \
	typedef UOWInteractionInterface UClassType; \
	typedef IOWInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define officewarfare_Source_GameJam_OWInteractionInterface_h_10_PROLOG
#define officewarfare_Source_GameJam_OWInteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_SPARSE_DATA \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_RPC_WRAPPERS \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define officewarfare_Source_GameJam_OWInteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_SPARSE_DATA \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	officewarfare_Source_GameJam_OWInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAM_API UClass* StaticClass<class UOWInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID officewarfare_Source_GameJam_OWInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
