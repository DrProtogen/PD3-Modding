#include "SBZEnvQueryGenerator_WorldRuntimeActors.h"
#include "UObject/NoExportTypes.h"

USBZEnvQueryGenerator_WorldRuntimeActors::USBZEnvQueryGenerator_WorldRuntimeActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->ActorSetting = 0;
}


