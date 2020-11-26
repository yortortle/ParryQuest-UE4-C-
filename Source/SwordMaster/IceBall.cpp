#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))
#include "IceBall.h"

AIceBall::AIceBall()
{
	PrimaryActorTick.bCanEverTick = true;

	//creating the collision box for this iceball
	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxTrigger->AttachTo(RootComponent);
}

void AIceBall::BeginPlay()
{
	Super::BeginPlay();

	//delegate for overlap
	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &AIceBall::OnOverLapBegin);
}

void AIceBall::Tick(float DeltaTime)
{
	Speed = 150;
	
	CurrentLocation = this->GetActorLocation();
	CurrentLocation.Z -= Speed * DeltaTime;
	SetActorLocation(CurrentLocation);
}


void AIceBall::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//determined name of swordman actor
	FString name = "BP_SwordMan_C_0";

	//check to see if actor is self or a specific name
	if (OtherActor && (OtherActor != this) && *OtherActor->GetName() == name)
	{
		UGameplayStatics::OpenLevel(GetWorld(), "StartingArea");
		//debugPrintFString("Overlapped Actor = %s", *OtherActor->GetName());
	}
}

