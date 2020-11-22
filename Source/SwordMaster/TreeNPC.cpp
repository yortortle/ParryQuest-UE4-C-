// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeNPC.h"

void ATreeNPC::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Start"));
	GetWorldTimerManager().SetTimer(WalkTimer, this, &ATreeNPC::WalkF, 4.f, true);
}

void ATreeNPC::WalkF()
{
	UE_LOG(LogTemp, Warning, TEXT("timer"));

	if (IsMoving == false)
	{
		GetSprite()->SetFlipbook(MoveUp);
		UE_LOG(LogTemp, Warning, TEXT("false"));
		IsMoving = true;
	}
	else
	{
		GetSprite()->SetFlipbook(MoveDown);
		UE_LOG(LogTemp, Warning, TEXT("true"));
		IsMoving = false;
	}
}
