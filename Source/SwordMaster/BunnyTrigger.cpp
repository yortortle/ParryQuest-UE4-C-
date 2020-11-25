#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))
// Fill out your copyright notice in the Description page of Project Settings.


#include "BunnyTrigger.h"
#include "DrawDebugHelpers.h"

ABunnyTrigger::ABunnyTrigger()
{
    OnActorBeginOverlap.AddDynamic(this, &ABunnyTrigger::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ABunnyTrigger::OnOverlapEnd);
}

void ABunnyTrigger::BeginPlay()
{
    Super::BeginPlay();
    GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

    debugPrint("Trigger is here");
    //GetWorldTimerManager().SetTimer(BunnyTimerSpawn, this, &ABunnyTrigger::BunnyTimer, 15.f, false);

    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Black, true, -1, 0, 3);
}

void ABunnyTrigger::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    debugPrint("yes");
    if (GetWorldTimerManager().IsTimerActive(BunnyTimerSpawn))
    {
        debugPrint("yes");
    }
}

void ABunnyTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    debugPrint("Actor overlap");
   // &ABunnySpawner::SpawnBunny;

    GetWorldTimerManager().SetTimer(GameInstance->BunnySpawner, this, &ABunnyTrigger::BunnyTimer, 5.f, false);

    if (OtherActor && (OtherActor != this)) {
        debugPrint("Actor overlap");
    }
}

void ABunnyTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
}

void ABunnyTrigger::BunnyTimer()
{
    debugPrint("Bunny timer end");
}

FTimerHandle ABunnyTrigger::GetTimer()
{
    return BunnyTimerSpawn;
}