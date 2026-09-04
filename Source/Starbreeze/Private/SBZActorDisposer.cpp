#include "SBZActorDisposer.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZActorDisposer::ASBZActorDisposer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->MaxNumberOfDisposedActors = 1;
    this->DisposedAmount = 0;
    this->LastCarryActor = NULL;
    this->AnimationAsset = NULL;
}

void ASBZActorDisposer::OnRep_DisposedAmount() {
}

void ASBZActorDisposer::OnPredictedEndInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZActorDisposer::OnAckRejectedInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZActorDisposer::OnAckInteractionComplete(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}


void ASBZActorDisposer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZActorDisposer, DisposedAmount);
}


