#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

// Fill out your copyright notice in the Description page of Project Settings.


#include "BunnySpawner.h"
#include "BunnyHorde.h"

// Sets default values
ABunnySpawner::ABunnySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABunnySpawner::BeginPlay()

{
	Super::BeginPlay();
	debugPrint("bunny begin play");
	GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	//GetWorld()->SpawnActor()
	//FVector SpawnLocation = this->GetActorLocation();
	//FActorSpawnParameters SpawnParams;

	//GetWorld()->SpawnActor<AActor>(ToSpawn, SpawnLocation, this->GetActorRotation(), SpawnParams);
	//debugPrint("Actor should be spawning lol");
	//if (GetWorldTimerManager().IsTimerActive(ABunnyTrigger().GetTimer()))
	{
		//debugPrint("Timer valid");
	}
}

// Called every frame
void ABunnySpawner::Tick(float DeltaTime)
{
	if (GetWorldTimerManager().IsTimerActive(GameInstance->BunnySpawner))
	{
		//debugPrint("Active");
		SpawnBunny();
		SpawnBunny();
		GetWorldTimerManager().PauseTimer(GameInstance->BunnySpawner);
	}
	else
	{
		//debugPrint("False");
	}
	Super::Tick(DeltaTime);
	//debugPrint("SpawnerTick");
	//if (GetWorldTimerManager().IsTimerActive(ABunnyTrigger().GetTimer()))
	{
		//debugPrint("Bunny Trigger Time Is Active");
	}

}

void ABunnySpawner::SpawnBunny()
{
	debugPrint("Actor should be spawning lol");
	FVector SpawnLocation = this->GetActorLocation();
	FActorSpawnParameters SpawnParams;
	GetWorld()->SpawnActor<AActor>(ToSpawn, SpawnLocation, this->GetActorRotation(), SpawnParams);
}