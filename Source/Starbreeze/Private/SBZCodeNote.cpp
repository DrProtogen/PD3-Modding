#include "SBZCodeNote.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"

ASBZCodeNote::ASBZCodeNote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->CodeWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("CodeWidget"));
    this->NumberOfCodes = 1;
    this->bForceShowTrueCode = false;
    this->CodeWidget->SetupAttachment(RootComponent);
}

void ASBZCodeNote::OnRep_CodeData() {
}

void ASBZCodeNote::OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled) {
}

void ASBZCodeNote::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZCodeNote, CodeData);
}


