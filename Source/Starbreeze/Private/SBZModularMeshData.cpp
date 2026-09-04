#include "SBZModularMeshData.h"

FSBZModularMeshData::FSBZModularMeshData() {
    this->SkeletalMeshClass = NULL;
    this->SpawnSlot = NULL;
    this->SpawnStep = ESBZModularMeshSpawnStep::Default;
    this->bModifiesBaseMesh = false;
    this->bNotAnimatedPart = false;
    this->bVisibilityTagState = false;
    this->OverridePlayerAnimationCollectionFP = NULL;
    this->OverrideEquippableAnimationCollection = NULL;
    this->ParentSlot = NULL;
    this->ParentPart = NULL;
}

