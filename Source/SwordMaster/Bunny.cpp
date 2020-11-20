// Fill out your copyright notice in the Description page of Project Settings.


#include "Bunny.h"

void ABunny::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(MovementTimer, this, &ABunny::TimedMovement, 3.f, true);

	Direction = FVector(150, 0, 0);

	AddMovementInput(Direction, 20000);
}

void ABunny::Tick(float DeltaTime)
{

}

void ABunny::TimedMovement()
{
	if (Direction.Equals(FVector(1000, 0, 0)))
	{
		AddMovementInput(Direction, 3.0F);
		GetSprite()->SetFlipbook(MoveRight);
		Direction = FVector(150, 0, 0);
	}
	else if (Direction.Equals(FVector(150, 0, 0)))
	{
		GetSprite()->SetFlipbook(MoveUp);
		Direction = FVector(0, 0, 2000);
		AddMovementInput(Direction, 3.0F);

		UE_LOG(LogTemp, Warning, TEXT("log test"));
	}
	else if (Direction.Equals(FVector(0, 0, 2000)))
	{
		GetSprite()->SetFlipbook(MoveLeft);
		Direction = FVector(-1000, 0, 0);
		AddMovementInput(Direction, 3.0F);
	}
	else if (Direction.Equals(FVector(-1000, 0, 0)))
	{
		GetSprite()->SetFlipbook(MoveDown);
		Direction = FVector(0, 0, -2000);
		AddMovementInput(Direction, 3.0F);
		Direction = FVector(1000, 0, 0);
	}
}
