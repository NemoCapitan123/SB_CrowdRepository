// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacterForCrowd.h"

// Sets default values
AAICharacterForCrowd::AAICharacterForCrowd()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAICharacterForCrowd::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacterForCrowd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacterForCrowd::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

