#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "MageNPC.h"
#include "Kismet/GameplayStatics.h"
#include "SwordMan.h"
//#include "MyGameInstance.h"

#include "MageTrigger.generated.h"
 
UCLASS()
class SWORDMASTER_API AMageTrigger : public ATriggerBox
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	AMageTrigger();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isLevelComplete = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> targetActor;

	UPROPERTY(EditAnywhere)
	FName LevelToLoad;

	FTimerHandle GameTime;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	void TriggerTimer();
};