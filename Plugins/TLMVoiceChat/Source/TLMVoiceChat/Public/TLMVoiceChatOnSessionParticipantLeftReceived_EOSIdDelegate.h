#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnSessionParticipantLeftReceived_EOSIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTLMVoiceChatOnSessionParticipantLeftReceived_EOSId, const FString&, EOSId, int32, LeftReason);

