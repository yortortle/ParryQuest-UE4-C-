// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SwordGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API USwordGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool mageCompleted;
		bool treeCompleted;
		bool bunnyCompleted;

		FVector SwordManLocation;
		FTimerHandle BunnySpawner;
};
