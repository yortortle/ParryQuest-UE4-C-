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
    enum MoveDirection { Up, Down, Left, Righ };
    //consider diagonal angles

   
    //redundent code for now, use later for new minions
    //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
       // UPaperFlipbookComponent* PC;


    //Creating Blueprint editable UPaperFlipBooks to store the various flipbooks for different action states, to be later used with the getSprite()->SetFlipbook() function.
    //First set is for movement animations
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveLeft;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveRight;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveDown;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveUp;

    //Second set is for IDLE animations
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* IdleLeft;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* IdleRight;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* IdleDown;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* IdleUp;

    //Third set is for sword swing and parry animations
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* SwingLeft;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* SwingRight;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* SwingUp;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* SwingDown;


    float Vertical = 0.0f;
    float Horizontal = 0.0f;
    int lastMove = 0;


    UFUNCTION(blueprintcallable)
    void setFlip(float f1, float f2);
    void consoleLog();

    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
