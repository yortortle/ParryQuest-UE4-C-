// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"

#include "BunnyHorde.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API ABunnyHorde : public APaperCharacter
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> spawnActor;

	FTimerHandle GameTime;

	virtual void Tick(float DeltaTime) override;
};
