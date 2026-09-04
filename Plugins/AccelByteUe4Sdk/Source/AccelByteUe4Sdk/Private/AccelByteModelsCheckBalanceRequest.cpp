#include "AccelByteModelsCheckBalanceRequest.h"

FAccelByteModelsCheckBalanceRequest::FAccelByteModelsCheckBalanceRequest() {
    this->Amount = 0;
    this->WalletPlatform = EAccelByteWalletPlatform::NONE;
    this->DebitBalanceSource = EAccelByteDebitUserWalletSource::OTHER;
}

