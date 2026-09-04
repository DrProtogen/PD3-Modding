#include "AccelByteModelsThirdPartySubscriptionTransactionInfo.h"

FAccelByteModelsThirdPartySubscriptionTransactionInfo::FAccelByteModelsThirdPartySubscriptionTransactionInfo() {
    this->Platform = EAccelBytePlatformSync::STEAM;
    this->Active = false;
    this->Status = EAccelByteSubscriptionStatus::ACTIVE;
}

