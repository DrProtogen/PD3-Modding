#include "SBZKeycardReader.h"
#include "UObject/NoExportTypes.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZKeycardReader::ASBZKeycardReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->AutoAimBoundsComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("AutoAimBoundsComponent"));
    this->AimAssistData = NULL;
    this->AutoAimBoundsComponent->SetupAttachment(RootComponent);
}

void ASBZKeycardReader::OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bInNewState) {
}

void ASBZKeycardReader::OnInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlled) {
}


