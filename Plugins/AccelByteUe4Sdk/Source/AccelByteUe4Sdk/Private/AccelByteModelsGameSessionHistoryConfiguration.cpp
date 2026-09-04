#include "AccelByteModelsGameSessionHistoryConfiguration.h"

FAccelByteModelsGameSessionHistoryConfiguration::FAccelByteModelsGameSessionHistoryConfiguration() {
    this->Type = EAccelByteV2SessionConfigurationServerType::EMPTY;
    this->Joinability = EAccelByteV2SessionJoinability::EMPTY;
    this->MinPlayers = 0;
    this->MaxPlayers = 0;
    this->InactiveTimeout = 0;
    this->InviteTimeout = 0;
    this->Persistent = false;
}

