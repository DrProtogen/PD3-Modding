#include "SBZWalletInfo.h"

FSBZWalletInfo::FSBZWalletInfo() {
    this->Balance = 0;
    this->TotalPermanentBalance = 0;
    this->TotalTimeLimitedBalance = 0;
    this->Status = ESBZItemStatus::NONE;
}

