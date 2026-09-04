#include "SBZEnvQueryGenerator_PerceivedActors.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"

USBZEnvQueryGenerator_PerceivedActors::USBZEnvQueryGenerator_PerceivedActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->PerceiverContext = UEnvQueryContext_Querier::StaticClass();
    this->bHostilesOnly = true;
    this->bOnlyVisualGenerators = false;
    this->bCurrentlySensed = true;
}


