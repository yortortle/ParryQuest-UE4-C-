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
	//GetWorld()->SpawnActor()
	FVector SpawnLocation = this->GetActorLocation();
	FActorSpawnParameters SpawnParams;
	if (ToSpawn)
	{
		debugPrint("tospawn is a thing");
	}

	GetWorld()->SpawnActor<AActor>(ToSpawn, SpawnLocation, this->GetActorRotation(), SpawnParams);
	debugPrint("Actor should be spawning lol");

}

// Called every frame
void ABunnySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

