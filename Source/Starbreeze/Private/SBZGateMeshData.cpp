#include "SBZGateMeshData.h"

FSBZGateMeshData::FSBZGateMeshData() {
    this->bIsHingedRight = false;
    this->LocalBoundBox = FBox(ForceInit);
    this->LocalActorBoundBox = FBox(ForceInit);
}

