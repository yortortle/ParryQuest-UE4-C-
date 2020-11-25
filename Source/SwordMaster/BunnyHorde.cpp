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
	PrimaryActorTick.bCanEverTick = true;
	GameInstance = Cast<USwordGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	
	//AAIController::MoveToLocation
	//AddMovementInput(GameInstance->SwordManLocation, 3.0f);
	//GetWorld();
	//if (ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	{
		//debugPrint("CHARACTER FOUND I GUESS");
	}
	//FLatentActionInfo LatentInfo;
	//ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	//GetSprite()->Set

	//ASwordMan* mySwordMan =
	//UGameplayStatics::Actor
	debugPrint("BunnyHorde");
	

	//CurrentLocation.X -= speed * DeltaTime;
	//SetActorLocation(CurrentLocation);
	
}

void ABunnyHorde::Tick(float DeltaTime)
{
	//this is an insane of the always updated FVector location that swordman puts out when he moves around.
	FVector NewLocation = GameInstance->SwordManLocation;
	CurrentLocation = this->GetActorLocation();

	//how to determine the bunnies movement being tracked to the play.


	if (CurrentLocation.X < NewLocation.X)
	{
		CurrentLocation.X += 20 * DeltaTime;
		one = NewLocation.X - CurrentLocation.X;
	}
	if (CurrentLocation.X > NewLocation.X)
	{
		//debugPrint("X is different");
		CurrentLocation.X -= 20 * DeltaTime;
		two = NewLocation.X + CurrentLocation.X;
	}
	if (CurrentLocation.Z < NewLocation.Z)
	{
		//debugPrint("Z is different");
		CurrentLocation.Z += 20 * DeltaTime;
		three = NewLocation.Z - CurrentLocation.Z;
	}
	if (CurrentLocation.Z > NewLocation.Z)
	{
		CurrentLocation.Z -= 20 * DeltaTime;
		three = NewLocation.Z + CurrentLocation.Z;
	}


	//CurrentLocation.X += 50 * DeltaTime;
	SetActorLocation(CurrentLocation);

	//CurrentLocation.X = (NewLocation.X * DeltaTime);
	//CurrentLocation.Z
	//FVector MovementVector = (NewLocation - CurrentLocation) * DeltaTime;
	//CurrentLocation.X = NewLocation.X * DeltaTime;
	//bool test = false;
	//FString test1 = GameInstance->SwordManLocation.ToString();
	//debugPrintFString("",test1);

	//UE_LOG(LogTemp, Warning, TEXT("%s"), test1)
	bool test = false;
	//if (test == false)
	{
		//debugPrint("False");
		//AddMovementInput(GameInstance->SwordManLocation, 3.0f);
		//ConsumeMovementInputVector();
	}
	test = true;
	//AddMovementInput(GameInstance->SwordManLocation, 3.0f);



	//if (GetWorldTimerManager().IsTimerActive(ABunnyTrigger().GetTimer()))
	{
		//debugPrint("Bunny Trigger Time Is Active");
	}
}