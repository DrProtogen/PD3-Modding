#include "SBZActorRingBuffer.h"
#include "UObject/NoExportTypes.h"

USBZActorRingBuffer::USBZActorRingBuffer() {
    this->Objects.AddDefaulted(1);
    this->RestrictedObjectClass = AActor::StaticClass();
}

void USBZActorRingBuffer::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


