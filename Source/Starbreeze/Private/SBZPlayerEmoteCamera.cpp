#include "SBZPlayerEmoteCamera.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZSpringArmComponent.h"

ASBZPlayerEmoteCamera::ASBZPlayerEmoteCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationYaw = true;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->SpringArm = CreateDefaultSubobject<USBZSpringArmComponent>(TEXT("SpringArm"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->CurrentPlayerController = NULL;
    this->CameraComponent->SetupAttachment(SpringArm);
    this->SpringArm->SetupAttachment(RootComponent);
}


