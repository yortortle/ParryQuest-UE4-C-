#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/TriggerBox.h"
#include "PaperCharacter.h"
#include "Components/BoxComponent.h"

#include "IceBall.generated.h"

/**
 * 
 */
UCLASS()
class SWORDMASTER_API AIceBall : public APaperCharacter
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	AIceBall();

	UFUNCTION()
	void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxTrigger;

	UPROPERTY(EditAnywhere)
	TSubclassOf<APaperCharacter> PaperMan;

	FVector CurrentLocation;
	FVector NewLocation;

	float Speed;
protected:
	virtual void Tick(float DeltaTime) override;

};
