#include "SBZFeedContainer.h"

USBZFeedContainer::USBZFeedContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->Config = NULL;
    this->Container = NULL;
}

void USBZFeedContainer::RemoveEntry(UUserWidget* Widget) {
}

UUserWidget* USBZFeedContainer::CreateEntry(FName EntryType) {
    return NULL;
}

void USBZFeedContainer::Clear(bool bAnimate) {
}

bool USBZFeedContainer::AddEntry(UUserWidget* Widget) {
    return false;
}


