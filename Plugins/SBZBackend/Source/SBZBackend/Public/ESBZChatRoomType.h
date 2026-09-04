#pragma once
#include "CoreMinimal.h"
#include "ESBZChatRoomType.generated.h"

UENUM(BlueprintType)
enum class ESBZChatRoomType : uint8 {
    NORMAL,
    PERSONAL,
    PARTY_V2,
    PARTY_V1,
    SESSION_V2,
};

