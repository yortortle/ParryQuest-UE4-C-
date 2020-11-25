// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/World.h"
#include "BunnyHorde.h"
#include "BunnyTrigger.h"
#include "Kismet/GameplayStatics.h"
#include "SwordGameInstance.h"

#include "BunnySpawner.generated.h"

UCLASS()
class SWORDMASTER_API ABunnySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABunnySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USwordGameInstance* GameInstance;

	bool HasSpawnerRan = false;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABunnyHorde> ToSpawn;

	UFUNCTION(BlueprintCallable)
	void SpawnBunny();

};
