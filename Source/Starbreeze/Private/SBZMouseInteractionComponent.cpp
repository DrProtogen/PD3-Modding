#include "SBZMouseInteractionComponent.h"

USBZMouseInteractionComponent::USBZMouseInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = true;
    this->HoverStickyPadding = 10.00f;
    this->CachedController = NULL;
}

void USBZMouseInteractionComponent::SetInteractionEnabled(bool bInEnabled) {
}

bool USBZMouseInteractionComponent::IsHovered() const {
    return false;
}


