#include "SBZItemRecurring.h"

FSBZItemRecurring::FSBZItemRecurring() {
    this->Cycle = ESBZCycle::DAILY;
    this->FixedFreeDays = 0;
    this->FixedTrialCycles = 0;
    this->GraceDays = 0;
}

