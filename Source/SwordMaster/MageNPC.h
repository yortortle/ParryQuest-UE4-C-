// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"
#include "PaperFlipbookComponent.h"
#include "Kismet/GameplayStatics.h"

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FTimerHandle WalkTimer;

	float speed;
	void FWalk();
	FVector CurrentLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString MageTalk = "TESTchange";

	enum MoveDirection { U, D, L, R };
	int MoveDirection = 3;

	//UMyGameInstance* GI;


	bool IsMoving = false;
};
