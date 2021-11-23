// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Cup.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
ACup::ACup()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("springArmComp"));
    springArmComp->SetupAttachment(RootComponent);

    cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("cameraComp"));
    cameraComp->SetupAttachment(springArmComp);

    meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshComp"));
    meshComp->SetupAttachment(RootComponent);
}

void ACup::MoveHorizontal(float value)
{
    if (Controller != NULL && value != 0.0f)
    {
        const FVector direction = FVector(0.0f, 1.0f, 0.0f);
        AddMovementInput(direction, value);
    }
}

void ACup::MoveVertical(float value)
{
    if (Controller != NULL && value != 0.0f)
    {
        const FVector direction = FVector(1.0f, 0.0f, 0.0f);
        AddMovementInput(direction, value);
    }
}

// Called to bind functionality to input
void ACup::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    
}

