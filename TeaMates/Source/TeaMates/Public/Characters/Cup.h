// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Cup.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class TEAMATES_API ACup : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACup();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
        USpringArmComponent* springArmComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
        UCameraComponent* cameraComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
        UStaticMeshComponent* meshComp;

    void MoveHorizontal(float value);
    void MoveVertical(float value);

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
