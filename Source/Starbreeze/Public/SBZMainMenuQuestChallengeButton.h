#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZChallengeData.h"
#include "SBZMenuButton.h"
#include "SBZUIQuestChallengeData.h"
#include "SBZMainMenuQuestChallengeButton.generated.h"

class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuQuestChallengeButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIQuestChallengeData QuestChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZChallengeData ChallengeData;
    
public:
    USBZMainMenuQuestChallengeButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeDataInititalized(const FSBZUIQuestChallengeData& InQuestChallengeData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeChallengeData(const FSBZUIQuestChallengeData& InQuestChallengeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZUIQuestChallengeData GetQuestChallengeData();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetPaperSpriteSourceSize(UPaperSprite* Sprite);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZChallengeData GetChallengeData();
    
};

