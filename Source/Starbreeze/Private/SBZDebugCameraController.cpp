#include "SBZDebugCameraController.h"
#include "SBZCheatManager.h"

ASBZDebugCameraController::ASBZDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = USBZCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->SpeedScaleAdjustment = 0.50f;
    this->MinSpeedScale = 0.05f;
}

void ASBZDebugCameraController::OnOriginalControllerDestroyed(AActor* DestroyedActor) {
}


