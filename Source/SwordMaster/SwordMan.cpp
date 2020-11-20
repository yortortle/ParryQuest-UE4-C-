// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordMan.h"

ASwordMan::ASwordMan()
{
	PrimaryActorTick.bCanEverTick = true;

	//HitUp = CreateDefaultSubobject<UBoxComponent>(TEXT("HitUp"));
	//RootComponent = BodyComponent;

	//CannonComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CannonComponent"));
	//CannonComponent->AttachTo(BodyComponent);

}

void ASwordMan::BeginPlay()
{
	Super::BeginPlay();
}

void ASwordMan::Tick(float DeltaTime)
{
	//Setting Vertical and Horizontal float values to the current Axis Values every tick. This is used in later logic to determine when to stop moving and which animations to run.
	Vertical = InputComponent->GetAxisValue(TEXT("UpDown"));
	Horizontal = InputComponent->GetAxisValue(TEXT("LeftRight"));

	//Every tick it checks if FTimerHandle clock is actively on a timer or not. If it active, then it will return before running the setflip function to avoid movement conflicts while attempting to execute swing animation
	if (GetWorldTimerManager().IsTimerActive(Clock))
	{
		return;
	}

	//Every tick setflip is run, which holds most of the logic to determining which flipbook to apply to my paper character.
	setFlip(Vertical, Horizontal);
}

void ASwordMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("UpDown", this, &ASwordMan::UpDown);
	PlayerInputComponent->BindAxis("LeftRight", this, &ASwordMan::LeftRight);
	PlayerInputComponent->BindAction("LeftMouse", IE_Pressed, this, &ASwordMan::Swing);
}

//Function used in my PlayerInputComponent for when Up and Down axis values are pressed.
void ASwordMan::UpDown(float Axis)
{
	//Checks to see if the Clock timer is active, if it is it returns to avoid movement conflicts with the swing.
	if (GetWorldTimerManager().IsTimerActive(Clock))
	{
		return;
	}

	//Another check to determine whether the axis value is influenced for left or right. If there is any conflict here, it will immediately return.
	//This is how I removed diagonal movement, as if two conflicting axis values are present it will stop you. 
	float movementValue = InputComponent->GetAxisValue(TEXT("LeftRight"));
	if (movementValue > 0.0f || movementValue < 0.0f)
	{
		return;
	}

	//Logic for actual movement input, provided it makes it here.
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Z);
	AddMovementInput(Direction, Axis);
}

void ASwordMan::LeftRight(float Axis)
{
	
	if (GetWorldTimerManager().IsTimerActive(Clock))
	{
		return;
	}

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
	//Insurance that returns if Sprite is null.
	if (!GetSprite()) {
		return;
	}

	//Calling the MovementAnimations function, which contains the essential logic for switching between different run and idle flipbook states.
	MovementAnimations();

	return;
}

//Main swing function, it is executed every time you click with your character.
void ASwordMan::Swing()
{
	UE_LOG(LogTemp, Warning, TEXT("swinging"));
	
	//Main logic behind attacking with the sword. A series of conditionals which get the FName of the specific flipbook that is currently
	//attached to my Paper Character. If that FName is equal to certain strings, it will change the flipbook to the corresponding attack animation flipbook.
	FName CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	if (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "IdleUp")
	{
		GetSprite()->SetFlipbook(SwingUp);
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveDown" || CurrentFlipbook == "IdleDown")
	{
		GetSprite()->SetFlipbook(SwingDown);
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveRight" || CurrentFlipbook == "IdleRight")
	{
		GetSprite()->SetFlipbook(SwingRight);
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveLeft" || CurrentFlipbook == "IdleLeft")
	{
		GetSprite()->SetFlipbook(SwingLeft);
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}

}

//A simple function to put into my worldtimemanager and record the amount of time before the timer is over. Helps me see how accurate it is with the animation to some degree.
void ASwordMan::SwingTimer()
{
	UE_LOG(LogTemp, Warning, TEXT("Swing Is Complete"));
}


void ASwordMan::MovementAnimations()
{
	//condition to determine if we're at a standstill or moving
	if (Vertical != 0.0f || Horizontal != 0.0f)
	{
		//Conditionals to determine whether the movement axis input is left, right, down, or up. If a condition is met it will set the sprite flipbook to the appropriate animation for that direction. It will also update
		//the int lastMove which will later be used in assigning whichever idle flipbook is necessary.
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
			GetSprite()->SetFlipbook(MoveLeft);
		}
		else if (Vertical < 0.0f && Horizontal == 0.0f)
		{
			lastMove = 4;
			GetSprite()->SetFlipbook(MoveDown);
		}
	}
	//If there is no movement direction on either axis, this else statement will run.
	else
	{
		//If there is a tick that is read without any axis movement direction this switch statement is called. It compares the 4 different cases for the lastMove int, each corresponding to various movement inputs, and then
		//sets the flipbook to whatever idle animation is appropriate for that corresponding lastMove value. For example, if lastMove is currently set to 3 it will set the flipbook to IdleLeft.
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

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("log test"));
}
