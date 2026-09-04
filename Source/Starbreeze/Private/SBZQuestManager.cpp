#include "SBZQuestManager.h"

USBZQuestManager::USBZQuestManager() {
    this->LocalProgressionSaveQuests = NULL;
}

void USBZQuestManager::ShowChallengeCompletionNotification(const FSBZQuestChallengeCompletedData& QuestChallengeCompletedData) {
}

void USBZQuestManager::SetQuestState(const FName& QuestId, const ESBZQuestState QuestState) {
}

void USBZQuestManager::QuestToUnlockByTimer(const FName& QuestId) {
}

bool USBZQuestManager::GetUIQuestChallengeData(const FName& QuestId, const FName& ChallengeId, FSBZUIQuestChallengeData& outUIQuestChallengeData) {
    return false;
}

bool USBZQuestManager::GetQuestData(const FName& QuestId, FSBZUIQuestData& OutQuestData) const {
    return false;
}

TArray<FSBZUIQuestData> USBZQuestManager::GetAvailbleQuests() {
    return TArray<FSBZUIQuestData>();
}

void USBZQuestManager::GetActiveChallenges(TArray<FSBZQuestChallenge>& OutQuestChallengeArray) {
}

USBZQuestManager* USBZQuestManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool USBZQuestManager::ClaimQuestReward(const FName& QuestId) {
    return false;
}


