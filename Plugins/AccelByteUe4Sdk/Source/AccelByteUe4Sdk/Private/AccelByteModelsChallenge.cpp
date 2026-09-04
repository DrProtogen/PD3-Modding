#include "AccelByteModelsChallenge.h"

FAccelByteModelsChallenge::FAccelByteModelsChallenge() {
    this->Status = EAccelByteModelsChallengeStatus::NONE;
    this->ActiveGoalsPerRotation = 0;
    this->Rotation = EAccelByteModelsChallengeRotation::NONE;
    this->AssignmentRule = EAccelByteModelsChallengeAssignmentRule::NONE;
    this->GoalsVisibility = EAccelByteModelsChallengeGoalsVisibility::NONE;
    this->EndAfter = 0;
    this->RepeatAfter = 0;
}

