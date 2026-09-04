#include "SBZSecurityRoom.h"

ASBZSecurityRoom::ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = true;
    this->bPlayCameraStatusVO = true;
    this->bPlayOnlyOnGuardDeathOrHumanShield = true;
    this->ShadeCameraDownVO = NULL;
    this->ShadeCameraUpVO = NULL;
    this->GuardRoomSpawner = NULL;
    this->FocusActor = NULL;
    this->bIsAIOrderEnabled = true;
    this->bIsValidHeistState = true;
    this->bIsEnabled = true;
    this->ActionOrder = NULL;
    this->AFKLifeActionData = NULL;
    this->AFKDoneLifeActionData = NULL;
    this->AFKLifeActionSlot = NULL;
    this->AFKDoneLifeActionSlot = NULL;
    this->bIsServerAFKLifeActionActive = false;
    this->bIsServerAFKLifeActionDoneActive = false;
    this->AFKMontage = NULL;
    this->DisabledAtCheckpointCounter = -1;
}

void ASBZSecurityRoom::ServerAFKLifeActionFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZSecurityRoom::ServerAFKDoneLifeActionFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZSecurityRoom::OnPlayableLevelInitialized(UWorld* World) {
}

void ASBZSecurityRoom::OnCameraDestroyed(AActor* DestroyedActor) {
}


