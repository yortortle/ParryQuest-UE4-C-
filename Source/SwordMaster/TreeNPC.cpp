// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeNPC.h"

void ATreeNPC::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("StartTree"));
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

void ATreeNPC::WalkF()
{
	UE_LOG(LogTemp, Warning, TEXT("timer"));

	if (IsMoving == false)
	{
		GetSprite()->SetFlipbook(MoveUp);
		GetSprite()->SetPlayRate(0.5);
		UE_LOG(LogTemp, Warning, TEXT("false"));
		IsMoving = true;
	}
	else
	{
		GetSprite()->SetPlayRate(1.0);
		GetSprite()->SetFlipbook(MoveDown);
		UE_LOG(LogTemp, Warning, TEXT("true"));
		IsMoving = false;
	}
}

void ATreeNPC::FMove()
{

}
