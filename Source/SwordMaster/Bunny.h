// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "AIController.h"
#include "TimerManager.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"


#include "Bunny.generated.h"


/**
 * 
 */
UCLASS()
class SWORDMASTER_API ABunny : public APaperCharacter
{
	GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveLeft;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveRight;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveDown;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UPaperFlipbook* MoveUp;

	FTimerHandle MovementTimer;
	void TimedMovement();
	FVector Direction;

protected:
	virtual void BeginPlay() override;
	 virtual void Tick(float DeltaTime) override;
};
