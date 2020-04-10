// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Net/UnrealNetwork.h"
#include "CodeWeapon.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameJamCharacter.generated.h"

USTRUCT(BlueprintType)
struct  FCharStats
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	float  MaxHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	float  MaxSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	float  MaxJump;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	FString  CharName;

};


UCLASS(config=Game)
class AGameJamCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	float  HP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	FCharStats  CharacterStats;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Office War")
	TArray<ACodeWeapon*>  Inventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	int  Equipped;


	AGameJamCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/*Once the item has reached it's handling vector. Regen a new handling target*/
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  ReboundHandling();

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:

	/*Working var for the Direction target vector for floating weapon aim.  This is the interp target for weapon handling.  */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated, Category = "Office War")
	FVector  HandlingTarget;

	//HandlingTargetUpdated

};

