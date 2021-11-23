// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PotCupController.generated.h"

class ACup;
class APot;

UCLASS()
class TEAMATES_API APotCupController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APotCupController();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterController")
    ACup* cupCharacter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterController")
    APot* potCharacter;

protected:
    void MovePotHorizontal(float value);
    void MovePotVertical(float value);
    void MoveCupHorizontal(float value);
    void MoveCupVertical(float value);

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
