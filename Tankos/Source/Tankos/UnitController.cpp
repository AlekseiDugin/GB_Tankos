// Aleksey Dugin


#include "UnitController.h"

#include "PlayerUnit.h"

AUnitController::AUnitController()
{
}

void AUnitController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &AUnitController::MoveForward);
}

void AUnitController::BeginPlay()
{
	Super::BeginPlay();

	PlayerUnit = Cast<APlayerUnit>(GetPawn());
}

void AUnitController::MoveForward(float AxisValue)
{
	PlayerUnit->MoveForward(AxisValue);
}

