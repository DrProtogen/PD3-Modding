#include "SBZDbgLineParams.h"

FSBZDbgLineParams::FSBZDbgLineParams() {
    this->Thickness = 0.00f;
    this->bPersistent = false;
    this->Life = 0.00f;
    this->Priority = 0;
    this->Start = FVector::ZeroVector;
    this->End = FVector::ZeroVector;
    this->Color = FColor::White;
}

