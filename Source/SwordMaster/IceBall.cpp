#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)

#include "IceBall.h"

AIceBall::AIceBall()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxTrigger->AttachTo(RootComponent);
}

void AIceBall::BeginPlay()
{
	Super::BeginPlay();
	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &AIceBall::OnOverLapBegin);
	UE_LOG(LogTemp, Warning, TEXT("StartIceBall"));
}

void AIceBall::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("overlapiceball"));
	debugPrint("asdfasdf");
}

