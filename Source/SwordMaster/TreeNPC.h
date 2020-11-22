// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"
#include "PaperFlipbookComponent.h"


#include "TreeNPC.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API ATreeNPC : public APaperCharacter
{
	GENERATED_BODY()
	
public:

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	FTimerHandle WalkTimer;
	FTimerHandle MovementTimer;

	void WalkF();
	void FMove();
	bool IsMoving = false;
	FVector CurrentLocation;
	float speed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveUp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveDown;

};
