// Fill out your copyright notice in the Description page of Project Settings.


#include "MageNPC.h"

void AMageNPC::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("StartMage"));
	GetWorldTimerManager().SetTimer(WalkTimer, this, &AMageNPC::FWalk, 2.f, true);
}

void AMageNPC::Tick(float DeltaTime)
{
	if (GetWorldTimerManager().IsTimerActive(WalkTimer))
	{
		switch (MoveDirection)
		{
		case 0: {
				CurrentLocation = this->GetActorLocation();
				speed = 60;
				CurrentLocation.Z += speed * DeltaTime;
				SetActorLocation(CurrentLocation); 
				}
			  break;
		case 1:
				{CurrentLocation = this->GetActorLocation();
				speed = 60;
				CurrentLocation.Z -= speed * DeltaTime;
				SetActorLocation(CurrentLocation); }
				break;
		case 2:
				{CurrentLocation = this->GetActorLocation();
				speed = 60;
				CurrentLocation.X -= speed * DeltaTime;
				SetActorLocation(CurrentLocation); }
				break;
		case 3:
				{CurrentLocation = this->GetActorLocation();
				speed = 60;
				CurrentLocation.X += speed * DeltaTime;
				SetActorLocation(CurrentLocation); }
				break;
		}
	}
}

void AMageNPC::FWalk()
{
	UE_LOG(LogTemp, Warning, TEXT("Mage Changing Directions"));

	switch (MoveDirection)
		{
		case 0: 
		{GetSprite()->SetFlipbook(MoveUp); }
		MoveDirection = 2;
			  break;
		case 1:
		{GetSprite()->SetFlipbook(MoveDown); }
		MoveDirection = 3;
			break;
		case 2:
		{GetSprite()->SetFlipbook(MoveLeft); }
		MoveDirection = 1;
			break;
		case 3:
		{GetSprite()->SetFlipbook(MoveRight);
		MoveDirection = 0; }
			break;
		}
}
