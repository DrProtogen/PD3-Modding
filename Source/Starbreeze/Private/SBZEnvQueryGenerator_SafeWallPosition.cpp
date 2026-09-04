#include "SBZEnvQueryGenerator_SafeWallPosition.h"
#include "UObject/NoExportTypes.h"

USBZEnvQueryGenerator_SafeWallPosition::USBZEnvQueryGenerator_SafeWallPosition() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->SearchCenter = NULL;
    this->EnemyContext = NULL;
}


