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

    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Black, true, -1, 0, 3);
    //AMageTrigger().GroupActor();
   // GetActorLocation();

}

void AMageTrigger::Tick(float DeltaTime)
{
    if (GetWorldTimerManager().IsTimerActive(GameTime))
    {
        
    }
    else
    {
        
    }
}

void AMageTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor enters trigger box
        
        GetWorldTimerManager().SetTimer(GameTime, this, &AMageTrigger::TriggerTimer, 1.f, false);
        debugPrint("Overlap Begin");
        debugPrintFString("Overlapped Actor = %s", *OverlappedActor->GetName());
    }
}

void AMageTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor leaves trigger box
        debugPrint("Overlap Ended");
        debugPrintFString("%s has left the Trigger Box", *OtherActor->GetName());
    }
}

void AMageTrigger::TriggerTimer()
{
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

        //UObject* Object = *ObjectItr;
        // ...
    }
}
