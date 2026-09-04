#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSendMfaEmailAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSendMfaEmailAction : uint8 {
    ChangePassword,
    DisableMFAEmail,
};

