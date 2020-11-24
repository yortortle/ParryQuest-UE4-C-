#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "MageTrigger.h"
#include "DrawDebugHelpers.h"

AMageTrigger::AMageTrigger()
{
    PrimaryActorTick.bCanEverTick = true;

    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &AMageTrigger::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &AMageTrigger::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AMageTrigger::BeginPlay()
{
    Super::BeginPlay();

    //DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Black, true, -1, 0, 3);
}

void AMageTrigger::Tick(float DeltaTime)
{

}

void AMageTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
        
    if (GetWorldTimerManager().IsTimerActive(GameTime))
    {
        return;
    }

    //check if other actor is valid and if they're identical to themselves
    if (OtherActor && (OtherActor != this)) {
        GetWorldTimerManager().SetTimer(GameTime, this, &AMageTrigger::TriggerTimer, 15.f, false);
        //this->Destroy();
        if (GetWorldTimerManager().IsTimerActive(GameTime))
        {
            debugPrint("Overlap Begin");
            debugPrintFString("Overlapped Actor = %s", *OverlappedActor->GetName());

            //iterator to delete mage actor
            for (TObjectIterator<AMageNPC> ObjectItr; ObjectItr; ++ObjectItr)
            {
                // skip if this object is not associated with our current game world
                if (ObjectItr->GetWorld() != GetWorld())
                {
                    continue;
                }

                debugPrint("test");

                Cast<AMageNPC>(*ObjectItr)->Destroy();
                AActor* foundActor = Cast<AMageNPC>(*ObjectItr);
                //foundActor->Destroy();

                UObject* Object = *ObjectItr;
                // ...
            }

            FVector SpawnLocation = this->GetActorLocation();
            SpawnLocation.Z += 150;
            SpawnLocation.X += 100;
            FActorSpawnParameters SpawnParams;
            GetWorld()->SpawnActor<AActor>(targetActor, SpawnLocation, this->GetActorRotation(), SpawnParams);
        }

    }
}

void AMageTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
}

void AMageTrigger::TriggerTimer()
{
    UE_LOG(LogTemp, Warning, TEXT("My Name: %s"), *LevelToLoad.ToString());

  //  GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
   // GI->test = 2.0;
   // GI->mageCompleted = true;

    FLatentActionInfo LatentInfo;
    UGameplayStatics::OpenLevel(GetWorld(), "HubWorld");
}
