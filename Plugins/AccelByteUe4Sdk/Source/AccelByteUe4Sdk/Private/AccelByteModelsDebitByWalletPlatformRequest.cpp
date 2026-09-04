#include "AccelByteModelsDebitByWalletPlatformRequest.h"

FAccelByteModelsDebitByWalletPlatformRequest::FAccelByteModelsDebitByWalletPlatformRequest() {
    this->Amount = 0;
    this->WalletPlatform = EAccelByteWalletPlatform::NONE;
    this->DebitBalanceSource = EAccelByteDebitUserWalletSource::OTHER;
}

