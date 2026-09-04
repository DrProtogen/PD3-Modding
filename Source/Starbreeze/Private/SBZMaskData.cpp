#include "SBZMaskData.h"

USBZMaskData::USBZMaskData() {
    this->AttachSocket1P = TEXT("RootCam");
    this->AttachSocket3P = TEXT("Head");
    this->Type = ESBZMaskType::Strap;
    this->Mould = NULL;
    this->Material = NULL;
    this->Pattern = NULL;
    this->VFX = NULL;
    this->bNeedCollisionWithCharacter = false;
}


