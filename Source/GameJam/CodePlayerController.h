// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameJamCharacter.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CodePlayerController.generated.h"


USTRUCT(BlueprintType)
struct FTeamDeptData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	TArray<FName> Characters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	TMap<FName, float> PropertyMods;

};


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Office War")
	FName TeamDept;

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  NextCharacter();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  LockAndLoad();


};
