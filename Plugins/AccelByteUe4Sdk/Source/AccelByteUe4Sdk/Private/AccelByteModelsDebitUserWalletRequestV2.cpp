#include "AccelByteModelsDebitUserWalletRequestV2.h"

FAccelByteModelsDebitUserWalletRequestV2::FAccelByteModelsDebitUserWalletRequestV2() {
    this->BalanceSource = EAccelByteDebitUserWalletSource::OTHER;
    this->BalanceOrigin = EAccelBytePlatformBalanceOrigin::NONE;
    this->AllowOverdraft = false;
}

