#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))
// Fill out your copyright notice in the Description page of Project Settings.


#include "BunnyTrigger.h"
#include "DrawDebugHelpers.h"

ABunnyTrigger::ABunnyTrigger()
{
    //delegate functions for overlap
    OnActorBeginOverlap.AddDynamic(this, &ABunnyTrigger::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ABunnyTrigger::OnOverlapEnd);
}

void ABunnyTrigger::BeginPlay()
{
    Super::BeginPlay();

    //getting game instance
    GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

void ABunnyTrigger::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABunnyTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{

    //stops trigger from being re-activated
    if (GetWorldTimerManager().IsTimerActive(GameInstance->BunnySpawner))
    {
        return;
    }

    GetWorldTimerManager().SetTimer(GameInstance->BunnySpawner, this, &ABunnyTrigger::BunnyTimer, 15.f, false);
}

void ABunnyTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
}

void ABunnyTrigger::BunnyTimer()
{
    //debugPrint("Bunny timer end");
    GameInstance->bunnyCompleted = true;
    UGameplayStatics::OpenLevel(GetWorld(), "HubWorld");
}

FTimerHandle ABunnyTrigger::GetTimer()
{
    return BunnyTimerSpawn;
}