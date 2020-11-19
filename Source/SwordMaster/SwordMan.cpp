// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordMan.h"

ASwordMan::ASwordMan()
{
	//PC = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipBook"));
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

	if (Vertical != 0.0f || Horizontal != 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("%f, %f"), Vertical, Horizontal);

		if (Vertical > 0.0f && Horizontal == 0.0f)
		{
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
			UE_LOG(LogTemp, Warning, TEXT("setting flipbook left"));
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

	return;
}

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("log test"));
}