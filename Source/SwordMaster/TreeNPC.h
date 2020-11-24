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
	virtual void BeginPlay() override;
protected:
	virtual void Tick(float DeltaTime) override;

public:
	FTimerHandle WalkTimer;
	FTimerHandle MovementTimer;

	void WalkF();
	void FMove();
	bool IsMoving = false;
	FVector CurrentLocation;
	float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpeechBubble = "Hey! I was wondering if you could head into my house over there to your right to let my friends know that i'm alright? Much appreciated.";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveUp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UPaperFlipbook* MoveDown;

};
