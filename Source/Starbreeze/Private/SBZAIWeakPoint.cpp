#include "SBZAIWeakPoint.h"
#include "Net/UnrealNetwork.h"

USBZAIWeakPoint::USBZAIWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->WeakPointHealth[0] = 0.00f;
    this->WeakPointHealth[1] = 0.00f;
    this->WeakPointHealth[2] = 0.00f;
    this->WeakPointHealth[3] = 0.00f;
    this->DestroyedEffect = NULL;
    this->DestroyedEvent = NULL;
    this->WeakPointAttributeSet = NULL;
    this->DestroyedInstigator = NULL;
    this->WeakPointType = ESBZAIWeakPointType::None;
    this->bIsDestroyed = false;
}

void USBZAIWeakPoint::OnRep_IsDestroyed() {
}

void USBZAIWeakPoint::Multicast_OnWeakPointDestroyed_Implementation() {
}

void USBZAIWeakPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIWeakPoint, bIsDestroyed);
}


