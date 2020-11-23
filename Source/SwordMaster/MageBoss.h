// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"
#include "PaperFlipbookComponent.h"

#include "MageBoss.generated.h"

UCLASS()
class SWORDMASTER_API AMageBoss : public APaperCharacter
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	AMageBoss();

protected:
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveRight;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveLeft;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FTimerHandle WalkTimer;

	float speed;
	void BossWalk();
	FVector CurrentLocationTwo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString SpeechBubble = "MAGE BOSS";

	int MoveDirection = 0;
};
