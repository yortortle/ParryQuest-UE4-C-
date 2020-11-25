// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "TimerManager.h"

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

	UPROPERTY(EditAnywhere)
		FName LevelToLoad;

	//UMyGameInstance* GI;

	UPROPERTY(EditAnywhere)
	FTimerHandle GameTime;

	FTimerHandle GetTimer();


	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	//void TriggerTimer();

	
};
