#include "SBZOrderInfo.h"

FSBZOrderInfo::FSBZOrderInfo() {
    this->Sandbox = false;
    this->Quantity = 0;
    this->Price = 0;
    this->DiscountedPrice = 0;
    this->Vat = 0;
    this->SalesTax = 0;
    this->PaymentProvider = ESBZPaymentProvider::NONE;
    this->PaymentProviderFee = 0;
    this->PaymentMethodFee = 0;
    this->Status = ESBZOrderStatus::NONE;
    this->PaymentRemainSeconds = 0;
    this->TotalTax = 0;
    this->TotalPrice = 0;
    this->SubtotalPrice = 0;
}

