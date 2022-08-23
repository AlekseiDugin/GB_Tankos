// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitBase.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AUnitBase::AUnitBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	M_BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = M_BoxCollision;

	M_UnitBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Unit body"));
	M_UnitBody->SetupAttachment(RootComponent);

	M_UnitTurret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Unit turret"));
	M_UnitTurret->SetupAttachment(M_UnitBody);

}



