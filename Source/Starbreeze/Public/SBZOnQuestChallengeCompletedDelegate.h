#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeCompletedData.h"
#include "SBZOnQuestChallengeCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnQuestChallengeCompleted, const FSBZQuestChallengeCompletedData&, QuestChallengeCompletedData);

