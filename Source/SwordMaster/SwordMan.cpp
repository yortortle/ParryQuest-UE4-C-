// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordMan.h"

ASwordMan::ASwordMan()
{
	//PC = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipBook"));
	PrimaryActorTick.bCanEverTick = true;
	//GetSprite()->SetLooping(0);
	// where I would initliaize my component so that it's not null so that I can start calling methods on it
}

void ASwordMan::BeginPlay()
{
	Super::BeginPlay();
}

void ASwordMan::Tick(float DeltaTime)
{
	Vertical = InputComponent->GetAxisValue(TEXT("UpDown"));
	Horizontal = InputComponent->GetAxisValue(TEXT("LeftRight"));

	setFlip(Vertical, Horizontal);
}

void ASwordMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("UpDown", this, &ASwordMan::UpDown);
	PlayerInputComponent->BindAxis("LeftRight", this, &ASwordMan::LeftRight);

	PlayerInputComponent->BindAction("LeftMouse", IE_Pressed, this, &ASwordMan::Swing);
}

void ASwordMan::UpDown(float Axis)
{
	float movementValue = InputComponent->GetAxisValue(TEXT("LeftRight"));
	if (movementValue > 0.0f || movementValue < 0.0f)
	{
		return;
	}

	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Z);
	AddMovementInput(Direction, Axis);
}

void ASwordMan::LeftRight(float Axis)
{
	float movementValue = InputComponent->GetAxisValue(TEXT("UpDown"));
	if (movementValue > 0.0f || movementValue < 0.0f)
	{
		return;
	}

	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ASwordMan::setFlip(float f1, float f2)
{
	//This conditional immediately returns if my Sprite is null to avoid crashing UE4 directly.
	if (!GetSprite()) {
		return;
	}
	else
	{
		//consoleLog();
	}

	Vertical = f1;
	Horizontal = f2;
	//MoveDirection move;

	//Calling the MovementAnimations function, which contains most of the essential logic for switching between different run and idle flipbook states.
	MovementAnimations();

	return;
}

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("log test"));
}

void ASwordMan::Swing()
{
	UE_LOG(LogTemp, Warning, TEXT("swinging"));
	UE_LOG(LogTemp, Warning, TEXT("%f"), lastMove);
	//CurrentSwing = "Swung";
	if (GetSprite()->GetFlipbook()->GetFName() == "MoveUp")
	{
		GetSprite()->SetFlipbook(SwingUp);
		UE_LOG(LogTemp, Warning, TEXT("asdf"));
	}

}


void ASwordMan::MovementAnimations()
{
	//condition to determine if we're at a standstill or moving
	if (Vertical != 0.0f || Horizontal != 0.0f)
	{
		//UE_LOG(LogTemp, Warning, TEXT("%f, %f"), Vertical, Horizontal);

		//A set of conditions to determine whether the movement input is direct left, right, down, or up. If a condition is met it will set the sprite flipbook to the appropriate animation.
		if (Vertical > 0.0f && Horizontal == 0.0f)
		{

			/*
			if (CurrentSwing != "")
			{
				UE_LOG(LogTemp, Warning, TEXT("Swinging up"));
				GetSprite()->SetFlipbook(SwingUp);
				//GetSprite()->
				CurrentSwing = "";
				return;
			}
			*/
			//The lastMove integer is what I am using to record the last registered movement state, this is what I use to set idle states, as it reads from the current value of lastMove.


			lastMove = 1;
			GetSprite()->SetFlipbook(MoveUp);
		}
		else if (Vertical == 0.0f && Horizontal > 0.0f)
		{
			lastMove = 2;
			GetSprite()->SetFlipbook(MoveRight);
		}
		else if (Vertical == 0.0f && Horizontal < 0.0f)
		{
			lastMove = 3;
			GetSprite()->SetFlipbook(MoveLeft);
		}
		else if (Vertical < 0.0f && Horizontal == 0.0f)
		{
			lastMove = 4;
			GetSprite()->SetFlipbook(MoveDown);
		}
	}
	else
	{
		//If there is a tick that is read without any axis movement direction this switch statement is called. It compares the 4 different cases for the lastMove int, each corresponding to various movement inputs, and then
		//sets the flipbook to whatever idle animation is appropriate for that corresponding lastMove value.
		switch (lastMove) {
		case 1: GetSprite()->SetFlipbook(IdleUp);
			break;
		case 2: GetSprite()->SetFlipbook(IdleRight);
			break;
		case 3: GetSprite()->SetFlipbook(IdleLeft);
			break;
		case 4: GetSprite()->SetFlipbook(IdleDown);
			break;
		}
	}
}