#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZFullBodyEmote.h"
#include "SBZPingCallAsset.h"
#include "Templates/SubclassOf.h"
#include "SBZEmoteCallAsset.generated.h"

class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZEmoteCallAsset : public USBZPingCallAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFullBodyEmote FullBodyEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetriggerSameEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetriggerDifferentEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedToDefault;
    
    USBZEmoteCallAsset();

};

