// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"
#include "PaperFlipbookComponent.h"

#include "MageNPC.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API AMageNPC : public APaperCharacter
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

protected:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveUp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveDown;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveRight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveLeft;

	FTimerHandle WalkTimer;
	float speed;
	void FWalk();
	FVector CurrentLocation;

	enum MoveDirection { U, D, L, R };
	int MoveDirection = 3;

	bool IsMoving = false;
};
