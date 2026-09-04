#include "SBZGameRecordsManager.h"

USBZGameRecordsManager::USBZGameRecordsManager() {
}

FSBZTitleData USBZGameRecordsManager::GetTitleData() {
    return FSBZTitleData{};
}

TArray<FString> USBZGameRecordsManager::GetSharedProgressionStatArray() const {
    return TArray<FString>();
}

FSBZNewsFeedList USBZGameRecordsManager::GetNewsFeed() {
    return FSBZNewsFeedList{};
}

TArray<ESBZMetaEventType> USBZGameRecordsManager::GetMetaEventsDataRunning() const {
    return TArray<ESBZMetaEventType>();
}

TArray<FSBZMetaEventData> USBZGameRecordsManager::GetMetaEventsData() const {
    return TArray<FSBZMetaEventData>();
}

FSBZMatchmakingAndHostingData USBZGameRecordsManager::GetMatchmakingAndHostingData() {
    return FSBZMatchmakingAndHostingData{};
}

TArray<FSBZHeistModifierEventConfiguration> USBZGameRecordsManager::GetHeistModifierEventConfigurationArray() {
    return TArray<FSBZHeistModifierEventConfiguration>();
}

TArray<FSBZDifficultyConfiguration> USBZGameRecordsManager::GetDifficultyConfiguration() const {
    return TArray<FSBZDifficultyConfiguration>();
}

USBZGameRecordsManager* USBZGameRecordsManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void USBZGameRecordsManager::CacheNewsFeed(const FSBZNewsFeedList& inNewsFeed) {
}

void USBZGameRecordsManager::CacheDifficultyConfiguration(const TArray<FSBZDifficultyConfiguration>& InConfiguration) {
}


