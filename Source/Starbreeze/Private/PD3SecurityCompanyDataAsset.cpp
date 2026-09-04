#include "PD3SecurityCompanyDataAsset.h"

UPD3SecurityCompanyDataAsset::UPD3SecurityCompanyDataAsset() {
    this->SecurityCompanyLogo = NULL;
    this->SecurityCompany = ESBZSecurityCompany::None;
}

FText UPD3SecurityCompanyDataAsset::GetFormattedDescriptionText() const {
    return FText::GetEmpty();
}


