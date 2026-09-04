#include "SBZGameSpectatorPawn.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpringArmComponent.h"

ASBZGameSpectatorPawn::ASBZGameSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpringArm = CreateDefaultSubobject<USBZSpringArmComponent>(TEXT("SpringArm"));
    this->SpectateCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SpectateCamera"));
    this->ControllerDeadZone = 0.20f;
    this->AttachSocket = TEXT("Neck");
    this->DeadTargetDelay = 4.00f;
    this->DeadTargetFollowTime = 0.20f;
    this->SpectateTarget = NULL;
    this->SpectateCamera->SetupAttachment(SpringArm);
    this->SpringArm->SetupAttachment(RootComponent);
}


