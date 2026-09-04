#include "SBZCreditUserWalletRequest.h"

FSBZCreditUserWalletRequest::FSBZCreditUserWalletRequest() {
    this->Amount = 0;
    this->Source = ESBZCreditUserWalletSource::PURCHASE;
    this->Origin = ESBZWalletTable::Playstation;
}

