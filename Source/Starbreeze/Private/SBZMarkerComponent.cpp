#include "SBZMarkerComponent.h"
#include "Net/UnrealNetwork.h"

USBZMarkerComponent::USBZMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarkerConfig = NULL;
    this->MarkerPriority[0] = 0;
    this->MarkerPriority[1] = 0;
    this->MarkerPriority[2] = 0;
    this->MarkerPriority[3] = 0;
    this->MarkerPriority[4] = 0;
    this->MarkerPriority[5] = 0;
    this->MarkerPriority[6] = 0;
    this->MarkerPriority[7] = 0;
    this->MarkerPriority[8] = 0;
    this->MarkerPriority[9] = 0;
    this->MarkerPriority[10] = 0;
    this->MarkerState = ESBZMarkerState::None;
    this->AttachComponent = NULL;
}

void USBZMarkerComponent::OnRep_MarkerState() {
}

void USBZMarkerComponent::Multicast_SetMarkerState_Implementation(ESBZMarkerState RepMarkerState) {
}

void USBZMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZMarkerComponent, MarkerState);
}


