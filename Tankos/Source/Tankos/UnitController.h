// Aleksey Dugin

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UnitController.generated.h"

class APlayerUnit;

UCLASS()
class TANKOS_API AUnitController : public APlayerController
{
	GENERATED_BODY()

protected:
    UPROPERTY() APlayerUnit* PlayerUnit;
	
public:
    AUnitController();
    
    virtual void SetupInputComponent() override;
    
protected:
    virtual void BeginPlay() override;
    
    void MoveForward(float AxisValue);
};

