#include "SBZShape.h"

FSBZShape::FSBZShape() {
    this->Type = ESBZShapeType::Box;
    this->Rotation = FQuat::Identity;
    this->Center = FVector::ZeroVector;
}

