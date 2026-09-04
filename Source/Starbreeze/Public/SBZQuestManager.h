#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/TimerHandle.h"
#include "ESBZQuestState.h"
#include "SBZOnQuestChallengeCompletedDelegate.h"
#include "SBZOnQuestChallengeUpdatedDelegate.h"
#include "SBZQuestChallenge.h"
#include "SBZQuestChallengeCompletedData.h"
#include "SBZUIQuestChallengeData.h"
#include "SBZUIQuestData.h"
#include "SBZQuestManager.generated.h"

class USBZProgressionSaveQuests;
class USBZQuestManager;

UCLASS(Blueprintable)
class USBZQuestManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnQuestChallengeCompleted OnQuestChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnQuestChallengeUpdated OnQuestChallengeUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> TimerHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> TimerInProgressForQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZUIQuestData> UIQuestDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZProgressionSaveQuests* LocalProgressionSaveQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestRewardArray;
    
public:
    USBZQuestManager();

private:
    UFUNCTION(BlueprintCallable)
    void ShowChallengeCompletionNotification(const FSBZQuestChallengeCompletedData& QuestChallengeCompletedData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetQuestState(const FName& QuestId, const ESBZQuestState QuestState);
    
private:
    UFUNCTION(BlueprintCallable)
    void QuestToUnlockByTimer(const FName& QuestId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetUIQuestChallengeData(const FName& QuestId, const FName& ChallengeId, FSBZUIQuestChallengeData& outUIQuestChallengeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQuestData(const FName& QuestId, FSBZUIQuestData& OutQuestData) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FSBZUIQuestData> GetAvailbleQuests();
    
    UFUNCTION(BlueprintCallable)
    void GetActiveChallenges(TArray<FSBZQuestChallenge>& OutQuestChallengeArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZQuestManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimQuestReward(const FName& QuestId);
    
};

