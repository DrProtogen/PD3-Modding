#include "PD3PawnSpawnGroup.h"

APD3PawnSpawnGroup::APD3PawnSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CooldownDuration = 0.00f;
    this->bIsEnabledForAssault = true;
    this->bIsEnabledForCivilians = false;
}

void APD3PawnSpawnGroup::SetEnabledForCivilians(bool bInIsEnabledForCivilians) {
}

void APD3PawnSpawnGroup::SetEnabledForAssault(bool bInIsEnabledForAssault) {
}

void APD3PawnSpawnGroup::OnSpawnFinished(const FSBZPawnSpawnRequestHandle& Handle, APawn* Pawn, ASBZPawnSpawnBase* Spawner) {
}


