#include "SBZHitResultLite.h"

FSBZHitResultLite::FSBZHitResultLite() {
    this->bBlockingHit = false;
    this->bRaycastHit = false;
    this->TraceStart = FVector::ZeroVector;
    this->TraceEnd = FVector::ZeroVector;
    this->ImpactPoint = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
}

