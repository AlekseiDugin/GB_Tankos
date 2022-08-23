// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UnitBase.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TANKOS_API AUnitBase : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Components")  UBoxComponent* M_BoxCollision;			//Бокс коллизии
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Components")  UStaticMeshComponent* M_UnitBody;		//Тело юнита(корпус)
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Components")  UStaticMeshComponent* M_UnitTurret;	//Башня юнита

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Movement|Speed") float M_MoveSpeed = 200.0f;			//Скорость движения
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Movement|Speed") float M_RotateSpeed = 60.0f;			//Скорость поворота

public:
	// Sets default values for this pawn's properties
	AUnitBase();
	
};
