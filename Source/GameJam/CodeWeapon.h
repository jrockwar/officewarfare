// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeWeapon.generated.h"

UCLASS()
class GAMEJAM_API ACodeWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Office War")
	//;
	


	// Sets default values for this actor's properties
	ACodeWeapon();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  PrimaryFunction();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Office War")
	void  SecondaryFunction();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
