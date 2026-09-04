#include "SBZEnvQueryTest_SpawnScore.h"

USBZEnvQueryTest_SpawnScore::USBZEnvQueryTest_SpawnScore() {
    this->TestPurpose = EEnvTestPurpose::Score;
    this->FilterType = EEnvTestFilterType::Maximum;
    this->PreferredSpawnDistance = 2000.00f;
    this->PreferredSpawnTime = 120.00f;
    this->MaxNumberSpawnGroupsToDistanceCheck = 5;
    this->SpawnerTimeScoreWeight = 1.00f;
    this->SpawnerDistScoreWeight = 1.50f;
}


