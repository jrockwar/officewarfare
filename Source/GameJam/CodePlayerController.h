// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameJamCharacter.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CodePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAM_API ACodePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	TArray<AGameJamCharacter*> Team;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	int CurrentChar;


public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  NextCharacter();



};
