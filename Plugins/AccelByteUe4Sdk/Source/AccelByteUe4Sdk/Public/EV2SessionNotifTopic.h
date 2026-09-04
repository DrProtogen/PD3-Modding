#pragma once
#include "CoreMinimal.h"
#include "EV2SessionNotifTopic.generated.h"

UENUM(BlueprintType)
enum class EV2SessionNotifTopic : uint8 {
    Invalid,
    OnPartyInvited,
    OnPartyInviteTimeout,
    OnPartyMembersChanged,
    OnPartyJoined,
    OnPartyRejected,
    OnPartyKicked,
    OnPartyCreated,
    OnSessionInvited,
    OnGameSessionInviteTimeout,
    OnSessionJoined,
    OnSessionMembersChanged,
    OnSessionKicked,
    OnSessionRejected,
    OnDSStatusChanged,
    OnPartyUpdated,
    OnGameSessionUpdated,
    OnSessionNativePlatformSynced,
    OnSessionStorageChanged,
    OnSessionJoinedSecret,
    OnSessionEnded,
    OnGameSessionInviteCancelled,
    OnPartyCancelled,
    OnPartyStorageChanged,
};

