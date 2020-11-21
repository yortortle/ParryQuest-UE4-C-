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

	/*if (GetWorldTimerManager().IsTimerActive(ParryTimer))
	{
		GetSprite()->SetSpriteColor(FColor::Black);
	}*/

	/*
	if (!(FHitResult().IsValidBlockingHit()))
	{
		UE_LOG(LogTemp, Warning, TEXT("hit something"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("havent hit something"));
	}
	*/

	//ASWordMan.FHitResult

	//FHitResult().GetActor();

	if (GetWorldTimerManager().IsTimerActive(BlinkCDFTimer))
	{
		GetSprite()->SetSpriteColor(FColor::Black);
	}

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
				HitUp1->SetCollisionProfileName("OverlapOnlyPawn");
				UE_LOG(LogTemp, Warning, TEXT("swing up world timer"));

				//LastFlipbook = CurrentFlipbook;
				//GetSprite()->SetPlayRate(0.1);
				BlinkTimer();
				HitUp1->SetCollisionProfileName("NoCollision");
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

void ASwordMan::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Warning, TEXT("no actor present"));

	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	if (CurrentFlipbook == "SwingUp" || CurrentFlipbook == "SwingDown" || CurrentFlipbook == "SwingRight" || CurrentFlipbook == "SwingLeft")
	{
		if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
		{
			UE_LOG(LogTemp, Warning, TEXT("destroying actor"));
			GetSprite()->SetSpriteColor(FColor::Cyan);
			OtherActor->Destroy();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("collision without attacking"));
	}
	

	/* saving this code for later incase i need it
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		UE_LOG(LogTemp, Warning, TEXT("destroying actor"));
		GetSprite()->SetSpriteColor(FColor::Cyan);
		OtherActor->Destroy();
	}
	*/
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
	if (GetWorldTimerManager().IsTimerActive(ParryTimer))
	{
		//add function call here to determine which value to update 
		//NewLocation = CurrentLocation.Z = CurrentLocation.Z + 50;
		//CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
		//NewLocation = DetermineBlinkVector(ASwordMan::GetActorLocation());

		ASwordMan::TeleportTo(DetermineBlinkVector(CurrentLocation), FRotator(0, 0, 0), false, false);
		BlinkCoolDown();
		return;
	}

	if (GetWorldTimerManager().IsTimerActive(Clock))
	{
		return;
	}

	//This is how cooldown works, if there's an active cooldown timer it will simply return and not allow you to blink.
	if (GetWorldTimerManager().IsTimerActive(BlinkCDFTimer))
	{
		return;
	}

	CurrentLocation = ASwordMan::GetActorLocation();
	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();

	//a check if ParryTimer is active and blink has been cast again which will then run the double blink

	//This is what starts the actual blink animation and functionality
	if (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "IdleUp" || CurrentFlipbook == "MoveRight" || CurrentFlipbook == "IdleRight" || CurrentFlipbook == "MoveDown" || CurrentFlipbook == "IdleDown" || CurrentFlipbook == "MoveLeft" || "IdleLeft")
	{
		//This sets a timer which will execute the BlinkTimer in .15 seconds. This function maintains most of the blink mechanic main functionality.
		GetWorldTimerManager().SetTimer(Clock, this, &ASwordMan::BlinkTimer, 0.15f, false);
		GetSprite()->SetSpriteColor(FColor::Green);
	}
}


//This function provides the main functionality for the double tap sword blink / parry mechanic
void ASwordMan::BlinkTimer()
{
	//This function happens if you decide to perform a swing while the charge up animation for blink is happening. This starts up a slower swing animation which will be a parry mechanic, 
	//you're able to press shift again to cancel and blink out of this dash as well for increased mobility.
	CurrentFlipbook = GetSprite()->GetFlipbook()->GetFName();
	if (CurrentFlipbook == "SwingUp" || CurrentFlipbook == "SwingDown" || CurrentFlipbook == "SwingRight" || CurrentFlipbook == "SwingLeft")
	{
		HitUp1->SetCollisionProfileName("OverlapOnlyPawn");

		//*Here we set another timer during which you can press shift again to dash, once this function is called after the timer ends the playrate of your flipbook is reset so the slower attack does not remain.
		//The timer for this function lasts exactly as long as the animation for your swing, as it has a duration of the length of the flipbook minus the starting time in the flipbook.
		GetWorldTimerManager().SetTimer(ParryTimer, this, &ASwordMan::ParryCD, GetSprite()->GetFlipbookLength() - GetSprite()->GetPlaybackPosition(), false);
		GetSprite()->SetSpriteColor(FColor::Blue);
		GetSprite()->SetPlayRate(0.7);

		HitUp1->SetCollisionProfileName("NoCollision");
		//logic for parry goes here

		//PlayerInputComponent->BindAction("Blink", IE_Pressed, this, &ASwordMan::Blink);
		//LastFlipbook == CurrentFlipbook;
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Swing Regular Blink"));
	}

	NewLocation = DetermineBlinkVector(CurrentLocation);
	BlinkCoolDown();
	ASwordMan::TeleportTo(NewLocation, FRotator(0, 0, 0), false, false);
	GetSprite()->SetSpriteColor(FColor::White);
}


void ASwordMan::BlinkCoolDown()
{
	GetWorldTimerManager().SetTimer(BlinkCDFTimer, this, &ASwordMan::ReverseSword, 0.5f, false);
	UE_LOG(LogTemp, Warning, TEXT("BLINK CD"));
}

//This function is what's called after the timer for the parry mechanic ends. Currently this is used to carry the hitbox forward as I blink a second time.
void ASwordMan::ParryCD()
{
	//During the special swing animation, I decrease its speed to give more time to decide and parry - this is the functionality that returns sword swings to their usual speed.
	GetSprite()->SetPlayRate(1.0);
	UE_LOG(LogTemp, Warning, TEXT("PARRY CD"));
	HitUp1->SetCollisionProfileName("OverlapOnlyPawn");
	HitUp1->SetCollisionProfileName("NoCollision");
}

//This function is what runs right after the blink cooldown is over, currently only used for changing color and printing a confirmation message
void ASwordMan::ReverseSword()
{
	UE_LOG(LogTemp, Warning, TEXT("blink is on cd"));
	GetSprite()->SetSpriteColor(FColor::White);
}

//function that determines the updated blink vector location after you press shift
FVector ASwordMan::DetermineBlinkVector(FVector Location)
{

	//if (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "IdleUp" || ((CurrentFlipbook == "SwingUp") && (GetWorldTimerManager().IsTimerActive(ParryTimer))))

	// (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "SwingUp")

	if (CurrentFlipbook == "MoveUp" || CurrentFlipbook == "IdleUp" || ((CurrentFlipbook == "SwingUp") && (GetWorldTimerManager().IsTimerActive(ParryTimer))))
	{
		Location.Z += blinkDistance;
	}
	else if (CurrentFlipbook == "MoveLeft" || CurrentFlipbook == "IdleLeft")
	{
		Location.X -= blinkDistance;
	}
	else if (CurrentFlipbook == "MoveRight" || CurrentFlipbook == "IdleRight")
	{
		Location.X += blinkDistance;
	}
	else if (CurrentFlipbook == "MoveDown" || CurrentFlipbook == "IdleDown")
	{
		Location.Z -= blinkDistance;
	}
	return Location;
}

//A simple function to put into my worldtimemanager and record the amount of time before the timer is over. Helps me see how accurate it is with the animation to some degree.
void ASwordMan::SwingTimer()
{
	UE_LOG(LogTemp, Warning, TEXT("Swing Is Complete"));
	GetSprite()->SetSpriteColor(FColor::White);
}

void ASwordMan::consoleLog()
{
	UE_LOG(LogTemp, Warning, TEXT("asdf"));
}
