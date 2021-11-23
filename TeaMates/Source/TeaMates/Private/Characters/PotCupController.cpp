// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PotCupController.h"
#include "Characters/Cup.h"
#include "Characters/Pot.h"

// Sets default values
APotCupController::APotCupController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void APotCupController::MovePotHorizontal(float value)
{
    potCharacter->MoveHorizontal(value);
}

void APotCupController::MovePotVertical(float value)
{
    potCharacter->MoveVertical(value);
}

void APotCupController::MoveCupHorizontal(float value)
{
    cupCharacter->MoveHorizontal(value);
}

void APotCupController::MoveCupVertical(float value)
{
    cupCharacter->MoveVertical(value);
}

// Called to bind functionality to input
void APotCupController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

