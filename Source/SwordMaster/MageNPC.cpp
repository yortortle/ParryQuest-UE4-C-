// Fill out your copyright notice in the Description page of Project Settings.


#include "MageNPC.h"

void ATreeNPC::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Start"));
	GetWorldTimerManager().SetTimer(WalkTimer, this, &ATreeNPC::WalkF, 3.f, true);
}

void ATreeNPC::Tick(float DeltaTime)
{
	if (GetWorldTimerManager().IsTimerActive(WalkTimer))
	{
		if (IsMoving == false)
		{
			//GetWorldTimerManager().SetTimer(MovementTimer, this, &ATreeNPC::FMove, 3.f, true);

			CurrentLocation = this->GetActorLocation();
			speed = 20;

			CurrentLocation.Z -= speed * DeltaTime;
			SetActorLocation(CurrentLocation);
		}
		else
		{
			CurrentLocation = this->GetActorLocation();
			speed = 20;

			CurrentLocation.Z += speed * DeltaTime;
			SetActorLocation(CurrentLocation);
		}
	}
}