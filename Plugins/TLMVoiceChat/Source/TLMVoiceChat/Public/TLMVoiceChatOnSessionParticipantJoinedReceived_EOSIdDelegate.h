#pragma once
#include "CoreMinimal.h"
#include "TLMVoiceChatOnSessionParticipantJoinedReceived_EOSIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTLMVoiceChatOnSessionParticipantJoinedReceived_EOSId, const FString&, EOSId);

