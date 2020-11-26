// Fill out your copyright notice in the Description page of Project Settings.


#include "MageNPC.h"

void AMageNPC::BeginPlay()
{

	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("StartMage"));
	GetWorldTimerManager().SetTimer(WalkTimer, this, &AMageNPC::FWalk, 1.f, true);

	GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}

void AMageNPC::Tick(float DeltaTime)
{
	//if walk timer is active it'll run a switch statement to determine direction
	if (GetWorldTimerManager().IsTimerActive(WalkTimer))
	{
		switch (MoveDirection)
		{
		case 0: {
				//moves you with a certain value for speed
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
		{GetSprite()->SetFlipbook(MoveLeft); }
		MoveDirection = 2;
			  break;
		case 1:
		{GetSprite()->SetFlipbook(MoveRight); }
		MoveDirection = 3;
			break;
		case 2:
		{GetSprite()->SetFlipbook(MoveDown); }
		MoveDirection = 1;
			break;
		case 3:
		{GetSprite()->SetFlipbook(MoveUp);
		MoveDirection = 0; }
			break;
		}
}
