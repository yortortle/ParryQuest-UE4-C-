#define debugPrint(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define debugPrintFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))
// Fill out your copyright notice in the Description page of Project Settings.


#include "BunnyHorde.h"

ABunnyHorde::ABunnyHorde()
{

}

ABunnyHorde::ABunnyHorde(float s1)
{
	speed = s1;
}

void ABunnyHorde::BeginPlay()
{
	Super::BeginPlay();
	//GetSprite()->Set
	debugPrint("BunnyHorde");

	//CurrentLocation.X -= speed * DeltaTime;
	//SetActorLocation(CurrentLocation);

}

void ABunnyHorde::Tick(float DeltaTime)
{
	//debugPrint("TICK");
	CurrentLocation = this->GetActorLocation();
	CurrentLocation.X += 50 * DeltaTime;

	SetActorLocation(CurrentLocation);


	//if (GetWorldTimerManager().IsTimerActive(ABunnyTrigger().GetTimer()))
	{
		//debugPrint("Bunny Trigger Time Is Active");
	}
}