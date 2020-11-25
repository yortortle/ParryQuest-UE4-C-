// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "SwordGameInstance.h"
//#include "BunnyTrigger.h"

#include "BunnyHorde.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API ABunnyHorde : public APaperCharacter
{
	GENERATED_BODY()

public:
	ABunnyHorde();
	ABunnyHorde(float speed);

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> spawnActor;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"))
		//APaperCharacter* BunnyTrigger;

	USwordGameInstance* GameInstance;
	FTimerHandle GameTime;

	float speed = 0.0f;
	bool test;
	FVector CurrentLocation;
	FVector NextLocation;
	//virtual void Tick(float DeltaTime) override;
};
