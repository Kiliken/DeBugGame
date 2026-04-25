// Fill out your copyright notice in the Description page of Project Settings.


#include "MothCharacter.h"

// Sets default values
AMothCharacter::AMothCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMothCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMothCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMothCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

