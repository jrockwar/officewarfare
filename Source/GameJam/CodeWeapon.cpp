// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeWeapon.h"

// Sets default values
ACodeWeapon::ACodeWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACodeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

