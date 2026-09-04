#include "SBZActiveFeedEntry.h"

FSBZActiveFeedEntry::FSBZActiveFeedEntry() {
    this->Widget = NULL;
    this->RemainingLifetime = 0.00f;
    this->LastMergeTime = 0.00f;
    this->RemovalTimer = 0.00f;
    this->CurrentPosition = 0.00f;
    this->TargetPosition = 0.00f;
    this->AppearAlpha = 0.00f;
}

