#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))
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
	Speed = 150;
	
	CurrentLocation = this->GetActorLocation();
	CurrentLocation.Z -= Speed * DeltaTime;
	SetActorLocation(CurrentLocation);
}


void AIceBall::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//debugPrint("iceball killed you");
	
	//ActorCollide->Get
	//ActorCollide->GetDefaultObject

	//OtherActor->
	//ActorCollide.
	//AActor testactor = PaperMan;
	//APaperCharacter* test = OtherActor;
	FString name = "BP_SwordMan_C_0";

	if (OtherActor && (OtherActor != this) && *OtherActor->GetName() == name)
	{
		
		UGameplayStatics::OpenLevel(GetWorld(), "StartingArea");
		debugPrintFString("Overlapped Actor = %s", *OtherActor->GetName());
	}
}

