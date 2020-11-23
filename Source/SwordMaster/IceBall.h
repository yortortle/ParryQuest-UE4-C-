#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PaperCharacter.h"
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
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

};
