// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework//Actor.h"
#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"


#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"

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

    //Creating Blueprint editable UPaperFlipBooks to store the various flipbooks for different action states, to be later used with the getSprite()->SetFlipbook() function.
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) //movement animations
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



   // Collision box components for swing animation collisions.
    UPROPERTY(VisibleAnywhere)
        UBoxComponent* HitUp1;
    UPROPERTY(VisibleAnywhere)
        UBoxComponent* HitDown1;
    UPROPERTY(VisibleAnywhere)
        UBoxComponent* HitLeft1;
    UPROPERTY(VisibleAnywhere)
        UBoxComponent* HitRight1;

    UPROPERTY(VisibleAnywhere)
        UBoxComponent* InteractBox;



    UPROPERTY(EditAnywhere)
        UStaticMeshComponent* MeshComp;

    UPROPERTY(VisibleAnywhere)
        USphereComponent* MyCollisionSphere;

    UFUNCTION()
        void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    float SphereRadius;


    float Vertical = 0.0f;
    float Horizontal = 0.0f;
    int lastMove = 0;
    FName CurrentFlipbook;
    FName LastFlipbook;
    FVector CurrentLocation;
    FVector NewLocation;
    UBoxComponent* NewBox;
    float blinkDistance = 50.f;

    UFUNCTION(blueprintcallable)
    void OnOverLapNPC(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MovementAnimations();

    void setFlip(float f1, float f2);
    void consoleLog();
    void Swing();
    void Blink();
    void Interact();
    void SwingTimer();
    void BlinkTimer();
    void BlinkCoolDown();
    void ParryCD();
    void ReverseSword();

    void DetermineSwing(UBoxComponent* Box);


    //void checkBlinkCollision();
    FVector DetermineBlinkVector(FVector Location);
    //void ParryTeleport();


    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
    FTimerHandle Clock;
    FTimerHandle BlinkFTimer;
    FTimerHandle ParryTimer;
    FTimerHandle BlinkCDFTimer;
    FTimerHandle BlinkClock;

	
};
