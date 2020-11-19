// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "SwordMan.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API ASwordMan : public APaperCharacter
{
	GENERATED_BODY()

public:
    ASwordMan();
    void UpDown(float Axis);
    void LeftRight(float Axis);

protected:
    virtual void BeginPlay() override;

public:

    //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    enum MoveDirection { Up, Down, Left, Right };
    //consider diagonal angles

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbookComponent* PC;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveLeft;

    float Vertical = 0.0f;
    float Horizontal = 0.0f;


    UFUNCTION(blueprintcallable)
    void setFlip(float f1, float f2);
    void consoleLog();

    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
