// Aleksey Dugin

#pragma once
#include "UnitBase.h"

#include "CoreMinimal.h"

#include "PlayerUnit.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TANKOS_API APlayerUnit : public AUnitBase
{
	GENERATED_BODY()

public:
	APlayerUnit();
	
protected:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Components")  USpringArmComponent* M_SpringArm;	//Крепление для камеры
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly, Category = "Components")   UCameraComponent* M_Camera;		//Камера

	float M_TargetForwardAxisValue;	//Целевая точка движения оси вперед

	
protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaSeconds) override;
	
	//Двигаться вперёд
	UFUNCTION() void MoveForward(float AxisValue);
};
