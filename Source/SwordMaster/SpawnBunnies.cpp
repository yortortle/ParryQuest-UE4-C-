#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))


// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnBunnies.h"

// Sets default values
ASpawnBunnies::ASpawnBunnies()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnBunnies::BeginPlay()
{
	Super::BeginPlay();
	//debugPrint("REWARD");

	GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	FVector SpawnLocation = this->GetActorLocation();
	FActorSpawnParameters SpawnParams;
	if (GameInstance->bunnyCompleted == true)
	{
		GetWorld()->SpawnActor<AActor>(spawnActor, SpawnLocation, this->GetActorRotation(), SpawnParams);
	}
}

// Called every frame
void ASpawnBunnies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

