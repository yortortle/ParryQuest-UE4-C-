// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordMan.h"

ASwordMan::ASwordMan()
{
	PC = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipBook"));
	PrimaryActorTick.bCanEverTick = true;
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

	PlayerInputComponent->BindAction("LeftMouse", IE_Pressed, this, &ASwordMan::consoleLog);
}

void ASwordMan::UpDown(float Axis)
{
	float movementValue = InputComponent->GetAxisValue(TEXT("LeftRight"));
	if (movementValue > 0.0f || movementValue < 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("LeftOrRight conflict"));
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
		UE_LOG(LogTemp, Warning, TEXT("UpOrDown conflict"));
		return;
	}

	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ASwordMan::setFlip(float f1, float f2)
{
	//This conditional immediately returns if PC, my PaperFlipBookComponent, is null to avoid crashing UE4 directly.
	if (!PC) {
		return;
	}
	else
	{
		//consoleLog();
	}

	float Vertical = f1;
	float Horizontal = f2;
	MoveDirection move;

	if (Vertical != 0.0f || Horizontal != 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("%f, %f"), Vertical, Horizontal);
		if (Vertical > 0.0f && Horizontal == 0.0f)
		{
			move = Up;

			//PC->SetFlipbook(UPaperFlipbook* MoveUp);
			//UE_LOG(LogTemp, Warning, TEXT("up"));
		}
		else if (Vertical == 0.0f && Horizontal > 0.0f)
		{
			move = Right;
		}
		else if (Vertical == 0.0f && Horizontal < 0.0f)
		{
			move = Left;
			UE_LOG(LogTemp, Warning, TEXT("setting flipbook left"));
			PC->SetFlipbook(MoveLeft);
		}
		else if (Vertical < 0.0f && Horizontal == 0.0f)
		{
			move = Down;
		}
	}
	else
	{
	}

	return;
}

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("Log Test"));
}