#include "SBZBundleMannequin.h"

ASBZBundleMannequin::ASBZBundleMannequin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowDetailedView = false;
    this->Context = ESBZBundleMannequinContext::None;
    this->CurrentProgress = 0;
    this->TargetProgress = 0;
    this->State = ESBZBundleMannequinState::Idle;
}

void ASBZBundleMannequin::ShowMannequin() {
}

void ASBZBundleMannequin::SetShowDetailedView(bool bShow) {
}

void ASBZBundleMannequin::SetMannequinEntry_Implementation(const FSBZBundleMannequinEntry& InEntry) {
}

void ASBZBundleMannequin::PollForReady() {
}

void ASBZBundleMannequin::PlayPose(ESBZMainMenuAnimationName MontageName, float Offset) {
}

bool ASBZBundleMannequin::IsReady() const {
    return false;
}

void ASBZBundleMannequin::HideMannequin() {
}

ESBZMainMenuAnimationName ASBZBundleMannequin::GetPoseName_Implementation() const {
    return ESBZMainMenuAnimationName::IdleSequence;
}

FSBZBundleMannequinEntry ASBZBundleMannequin::GetLastDressedEntry() const {
    return FSBZBundleMannequinEntry{};
}

ESBZBundleMannequinContext ASBZBundleMannequin::GetContext() const {
    return ESBZBundleMannequinContext::None;
}





