#pragma once
#include "CoreMinimal.h"
#include "AccelByteId.h"
#include "AccelByteUserId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteUserId : public FAccelByteId {
    GENERATED_BODY()
public:
    FAccelByteUserId();
};

