#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)

#include "IceBall.h"

AIceBall::AIceBall()
{
	OnActorBeginOverlap.AddDynamic(this, &AIceBall::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AIceBall::OnOverlapEnd);
}

void AIceBall::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("StartIceBall"));
}

void AIceBall::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	debugPrint("overlap fireball");
}

void AIceBall::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	debugPrint("overlap ends");
}
