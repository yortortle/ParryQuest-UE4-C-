// Fill out your copyright notice in the Description page of Project Settings.


#include "MageBoss.h"

void AMageBoss::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("StartMageBoss"));
	GetWorldTimerManager().SetTimer(WalkTimer, this, &AMageBoss::BossWalk, 1.5, true);
}

void AMageBoss::Tick(float DeltaTime)
{
	if (GetWorldTimerManager().IsTimerActive(WalkTimer))
	{
		switch (MoveDirection)
		{
			case 0: 
			{
				CurrentLocation = this->GetActorLocation();
				speed = 200;
				CurrentLocation.X -= speed * DeltaTime;
				SetActorLocation(CurrentLocation);
			}
			break;
			case 1:
			{
				CurrentLocation = this->GetActorLocation();
				speed = 200;
				CurrentLocation.X -= speed * DeltaTime;
				SetActorLocation(CurrentLocation);
			}
			break;
		}
	}
}

void AMageBoss::BossWalk()
{
	UE_LOG(LogTemp, Warning, TEXT("Mage Changing Directions"));

	switch (MoveDirection)
	{
		case 0:
		{
			GetSprite()->SetFlipbook(MoveLeft);
			MoveDirection = 1;
		}
		break;
		case 1:
		{
			GetSprite()->SetFlipbook(MoveRight);
			MoveDirection = 0;
		}
		break;
	}
}