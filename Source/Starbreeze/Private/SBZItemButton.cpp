#include "SBZItemButton.h"
#include "Templates/SubclassOf.h"

USBZItemButton::USBZItemButton() {
    this->Ovl_Appendages = NULL;
}

void USBZItemButton::SetItemDecorator(USBZInventoryItemDecorator* InventoryItemDecorator) {
}

void USBZItemButton::ResetVisualState() {
}


USBZButtonAppendage* USBZItemButton::GetAppendageByClass(TSubclassOf<USBZButtonAppendage> AppendageClass) {
    return NULL;
}

USBZButtonAppendage* USBZItemButton::AddAppendage(TSubclassOf<USBZButtonAppendage> AppendageClass) {
    return NULL;
}


