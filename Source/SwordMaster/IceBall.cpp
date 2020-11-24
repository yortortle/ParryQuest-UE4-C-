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

void AIceBall::Tick(float DeltaTime)
{
	Speed = 200;
	
	CurrentLocation = this->GetActorLocation();
	CurrentLocation.Z -= Speed * DeltaTime;
	//CurrentLocationTwo.X -= speed * DeltaTime;
	//SetActorLocation(CurrentLocation);
}


void AIceBall::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	debugPrint("iceball killed you");
}

