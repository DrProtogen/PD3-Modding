#include "SBZDoorBoxComponent.h"

USBZDoorBoxComponent::USBZDoorBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpenDirection = ESBZGateState::OpenForward;
}


