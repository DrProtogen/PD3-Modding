#include "SBZActorContainer.h"
#include "UObject/NoExportTypes.h"

USBZActorContainer::USBZActorContainer() {
    this->RestrictedObjectClass = AActor::StaticClass();
}

void USBZActorContainer::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


