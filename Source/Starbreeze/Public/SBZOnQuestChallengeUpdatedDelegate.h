#pragma once
#include "CoreMinimal.h"
#include "SBZQuestChallengeNotificationData.h"
#include "SBZOnQuestChallengeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnQuestChallengeUpdated, const FSBZQuestChallengeNotificationData&, QuestChallengeUpdatedData);

