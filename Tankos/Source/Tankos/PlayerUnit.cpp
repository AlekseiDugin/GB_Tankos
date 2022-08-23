// Aleksey Dugin


#include "PlayerUnit.h"

//#include "NavigationSystemTypes.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

APlayerUnit::APlayerUnit()
{
	PrimaryActorTick.bCanEverTick = true;

	M_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring arm"));
	M_SpringArm->SetupAttachment(M_UnitBody);

	M_SpringArm->bDoCollisionTest = false;
	M_SpringArm->bInheritPitch = false;
	M_SpringArm->bInheritYaw = false;
	M_SpringArm->bInheritRoll = false;

	M_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	M_Camera->SetupAttachment(M_SpringArm);
	
}

void APlayerUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Движение вперёд
	FVector MovePosition = GetActorLocation() + GetActorForwardVector() * M_TargetForwardAxisValue * M_MoveSpeed * DeltaTime;
	SetActorLocation(MovePosition, true);
}

void APlayerUnit::MoveForward(float AxisValue)
{
	M_TargetForwardAxisValue = AxisValue;
}
