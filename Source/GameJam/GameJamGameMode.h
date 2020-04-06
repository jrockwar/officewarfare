// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CodePlayerController.h"
#include "Net/UnrealNetwork.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameJamGameMode.generated.h"

UCLASS(minimalapi)
class AGameJamGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	int TurnTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	TArray<ACodePlayerController*> RegisteredPlayers;

	AGameJamGameMode();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  NextCharacter();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  StartRound();

};



