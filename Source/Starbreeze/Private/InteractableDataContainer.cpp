#include "InteractableDataContainer.h"

FInteractableDataContainer::FInteractableDataContainer() {
    this->Interactable = NULL;
    this->InteractableOwner = 0;
    this->InteractionLocation = FVector::ZeroVector;
    this->MoveToLocation = FVector::ZeroVector;
}

