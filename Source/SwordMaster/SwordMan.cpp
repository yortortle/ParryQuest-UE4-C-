// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordMan.h"
#include "DrawDebugHelpers.h"

ASwordMan::ASwordMan()
{
	PrimaryActorTick.bCanEverTick = true;

	HitDown1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Down Swing"));
	HitDown1->SetCollisionProfileName("Pawn");
	HitDown1->AttachTo(RootComponent);

	HitUp1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Up Swing"));
	HitUp1->SetCollisionProfileName("Pawn");
	HitUp1->AttachTo(RootComponent);

	HitRight1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Right Swing"));
	HitRight1->SetCollisionProfileName("Pawn");
	HitRight1->AttachTo(RootComponent);

	HitLeft1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Left Swing"));
	HitLeft1->SetCollisionProfileName("Pawn");
	HitLeft1->AttachTo(RootComponent);
}

void ASwordMan::BeginPlay()
{
	Super::BeginPlay();

	HitUp1->OnComponentBeginOverlap.AddDynamic(this, &ASwordMan::OnOverLapBegin);
	HitDown1->OnComponentBeginOverlap.AddDynamic(this, &ASwordMan::OnOverLapBegin);
	HitRight1->OnComponentBeginOverlap.AddDynamic(this, &ASwordMan::OnOverLapBegin);
	HitLeft1->OnComponentBeginOverlap.AddDynamic(this, &ASwordMan::OnOverLapBegin);
}

void ASwordMan::Tick(float DeltaTime)
{
	//Setting Vertical and Horizontal float values to the current Axis Values every tick. This is used in later logic to determine when to stop moving and which animations to run.
	Vertical = InputComponent->GetAxisValue(TEXT("UpDown"));
	Horizontal = InputComponent->GetAxisValue(TEXT("LeftRight"));
	//DrawDebugSphere(GetWorld(), GetActorLocation(), SphereRadius, 5, FColor::Purple, false, -1, 0, 1);

	/*if (GetSprite()->GetFlipbook()->GetFName() == "SwingUp")
	{
		HitUp1->OnComponentBeginOverlap.AddDynamic(this, &ASwordMan::OnOverLapBegin);
	}
	*/

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
	PlayerInputComponent->BindAction("Blink", IE_Pressed, this, &ASwordMan::Blink);
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
	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	if (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "IdleUp")
	{
		GetSprite()->SetFlipbook(SwingUp);

		if (GetSprite()->GetFlipbook()->GetFName() == "SwingUp")
		{
			////
			if (GetWorldTimerManager().IsTimerActive(Clock))
			{
				UE_LOG(LogTemp, Warning, TEXT("swing up world timer"));
				//LastFlipbook = CurrentFlipbook;
				GetSprite()->SetPlayRate(0.7);
				BlinkTimer();
				GetSprite()->SetPlayRate(1.0);
				//return;
			}
			else 
			{
				HitUp1->SetCollisionProfileName("OverlapOnlyPawn");
				HitUp1->SetCollisionProfileName("NoCollision");
			}
		}
	
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveDown" || CurrentFlipbook == "IdleDown")
	{
		GetSprite()->SetFlipbook(SwingDown);

		if (GetSprite()->GetFlipbook()->GetFName() == "SwingDown")
		{
			HitDown1->SetCollisionProfileName("OverlapOnlyPawn");
			HitDown1->SetCollisionProfileName("NoCollision");
		}
		
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveRight" || CurrentFlipbook == "IdleRight")
	{
		GetSprite()->SetFlipbook(SwingRight);

		if (GetSprite()->GetFlipbook()->GetFName() == "SwingRight")
		{
			HitLeft1->SetCollisionProfileName("OverlapOnlyPawn");
			consoleLog();
			HitLeft1->SetCollisionProfileName("NoCollision");
		}
		
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	else if (CurrentFlipbook == "MoveLeft" || CurrentFlipbook == "IdleLeft")
	{
		GetSprite()->SetFlipbook(SwingLeft);

		if (GetSprite()->GetFlipbook()->GetFName() == "SwingLeft")
		{
			HitRight1->SetCollisionProfileName("OverlapOnlyPawn");
			HitRight1->SetCollisionProfileName("NoCollision");
		}

		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::SwingTimer, GetSprite()->GetFlipbookLength(), false);
	}
	//CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();

}

//A simple function to put into my worldtimemanager and record the amount of time before the timer is over. Helps me see how accurate it is with the animation to some degree.
void ASwordMan::SwingTimer()
{
	UE_LOG(LogTemp, Warning, TEXT("Swing Is Complete"));
	GetSprite()->SetSpriteColor(FColor::White);
}

void ASwordMan::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Warning, TEXT("no actor present"));
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		UE_LOG(LogTemp, Warning, TEXT("destroying actor"));
		GetSprite()->SetSpriteColor(FColor::Cyan);
		OtherActor->Destroy();
	}
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

void ASwordMan::Blink()
{
	CurrentLocation = ASwordMan::GetActorLocation();
	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	//CurrentLocation.X = CurrentLocation.X + 15;
	//CurrentLocation. = CurrentLocation.X + 15;
	//CurrentLocation.Z = CurrentLocation.Z + 15;

	//consoleLog();

	if (GetWorldTimerManager().IsTimerActive(ParryTimer))
	{
		consoleLog();
		HitUp1->SetCollisionProfileName("OverlapOnlyPawn");
		CurrentLocation.Z = CurrentLocation.Z + 50;
		ASwordMan::TeleportTo(CurrentLocation, FRotator(0, 0, 0), false, false);
		HitUp1->SetCollisionProfileName("NoCollision");
		//GetSprite()->SetPlayRate(1.0);
		return;
	}

	if (CurrentFlipbook == "MoveUp")
	{
		//ASwordMan::GetActorLocation();
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::BlinkTimer, 0.15f, false);
		GetSprite()->SetSpriteColor(FColor::Green);
		//ASwordMan::TeleportTo(CurrentLocation, FRotator(0, 0, 0), false, false);
		UE_LOG(LogTemp, Warning, TEXT("Up"));
		//return;
	}
	else if (Vertical == 0.0f && Horizontal > 0.0f)
	{
		//lastMove = 2;
		UE_LOG(LogTemp, Warning, TEXT("right"));;
	}
	else if (Vertical == 0.0f && Horizontal < 0.0f)
	{
		lastMove = 3;
		UE_LOG(LogTemp, Warning, TEXT("left"));
	}
	else if (Vertical < 0.0f && Horizontal == 0.0f)
	{
		lastMove = 4;
		UE_LOG(LogTemp, Warning, TEXT("down"));
	}
}

void ASwordMan::BlinkTimer()
{
	/////
	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	if (CurrentFlipbook == "SwingUp")
	{
		//condition for if double press shift
		GetWorldTimerManager().SetTimer(ParryTimer, this, &ASwordMan::ParryCD, GetSprite()->GetFlipbookLength() - GetSprite()->GetPlaybackPosition(), false);
		GetSprite()->SetSpriteColor(FColor::Blue);

		//logic for parry goes here

		//PlayerInputComponent->BindAction("Blink", IE_Pressed, this, &ASwordMan::Blink);
		//LastFlipbook == CurrentFlipbook;
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Swing Regular Blink"));
	}

	//don't need to make different blink timers, check flipbook for each of them and use that to determine teleport location. refactor into seperate function
	CurrentLocation.Z = CurrentLocation.Z + 50;
	GetWorldTimerManager().SetTimer(BlinkFTimer, this, &ASwordMan::BlinkCoolDown, 0.2f, false);
	ASwordMan::TeleportTo(CurrentLocation, FRotator(0, 0, 0), false, false);
	GetSprite()->SetSpriteColor(FColor::White);
}

void ASwordMan::BlinkCoolDown()
{
	GetSprite()->SetSpriteColor(FColor::Red);
	consoleLog();
	//GetWorldTimerManager().SetTimer(BlinkFTimer, this, &ASwordMan::BlinkCoolDown, 0.2f, false);
	UE_LOG(LogTemp, Warning, TEXT("BLINK CD"));
}

void ASwordMan::ParryCD()
{
	UE_LOG(LogTemp, Warning, TEXT("PARRY CD"));
}

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("LOG"));
}
