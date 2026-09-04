#include "SBZJoinableHeistData.h"

FSBZJoinableHeistData::FSBZJoinableHeistData() {
    this->Difficulty = ESBZDifficulty::Default;
    this->Tactic = ESBZOnlineTacticType::Default;
    this->LobbyType = ESBZOnlineJoinType::Debug_DEPRECATED;
    this->PeopleAmount = 0;
    this->bIsFriendSession = false;
    this->SubRegion = ESBZGeographicalSubRegion::Unknown;
    this->Region = ESBZGeographicalRegion::Unknown;
    this->bModded = false;
}

