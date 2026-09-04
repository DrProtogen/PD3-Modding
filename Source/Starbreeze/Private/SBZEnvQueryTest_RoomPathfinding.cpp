#include "SBZEnvQueryTest_RoomPathfinding.h"
#include "UObject/NoExportTypes.h"

USBZEnvQueryTest_RoomPathfinding::USBZEnvQueryTest_RoomPathfinding() {
    this->Detail = ESBZEnvTestPathfindingDetail::Rough;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->RoomContext = NULL;
    this->bIsLockedExpensive = false;
}


