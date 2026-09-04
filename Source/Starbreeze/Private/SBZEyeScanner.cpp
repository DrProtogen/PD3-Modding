#include "SBZEyeScanner.h"
#include "AkComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"

ASBZEyeScanner::ASBZEyeScanner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ScannerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CurrentState = ESBZEyeScannerState::Idle;
    this->AccessDeniedDelay = 3.00f;
    this->bIsEnabledFromStart = true;
    this->ConnectedGate = NULL;
    this->TargetGateState = ESBZGateState::Closed;
    this->LifeActionVolume = NULL;
    this->LifeActionOrder = NULL;
    this->StartScanningComment = NULL;
    this->AccessGrantedEvent = NULL;
    this->AccessDeniedEvent = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
    this->ScannerMesh->SetupAttachment(RootComponent);
}

void ASBZEyeScanner::SetEnabled(bool bEnabled) {
}

void ASBZEyeScanner::OnRep_CurrentState(ESBZEyeScannerState OldState) {
}

void ASBZEyeScanner::OnLifeActionPushed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void ASBZEyeScanner::OnCharacterSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZEyeScanner::Multicast_SetState_Implementation(ESBZEyeScannerState NewState) {
}


void ASBZEyeScanner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEyeScanner, CurrentState);
}


