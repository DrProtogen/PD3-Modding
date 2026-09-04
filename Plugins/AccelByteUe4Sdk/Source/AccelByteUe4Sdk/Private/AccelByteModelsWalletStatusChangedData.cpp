#include "AccelByteModelsWalletStatusChangedData.h"

FAccelByteModelsWalletStatusChangedData::FAccelByteModelsWalletStatusChangedData() {
    this->Status = EAccelByteWalletStatus::NONE;
    this->PreviousStatus = EAccelByteWalletStatus::NONE;
}

