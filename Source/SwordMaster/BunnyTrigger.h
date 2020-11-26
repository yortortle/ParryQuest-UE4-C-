// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "TimerManager.h"
#include "SwordGameInstance.h"
#include "Kismet/GameplayStatics.h"

#include "BunnyTrigger.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API ABunnyTrigger : public ATriggerBox
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	ABunnyTrigger();
	void BunnyTimer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> spawnActor;

	//declaring bunny object to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName LevelToLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimerHandle BunnyTimerSpawn;

	FTimerHandle GetTimer();

	USwordGameInstance* GameInstance;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
