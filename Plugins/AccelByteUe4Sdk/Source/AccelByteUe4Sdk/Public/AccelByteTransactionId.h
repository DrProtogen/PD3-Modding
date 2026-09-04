#pragma once
#include "CoreMinimal.h"
#include "AccelByteId.h"
#include "AccelByteTransactionId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteTransactionId : public FAccelByteId {
    GENERATED_BODY()
public:
    FAccelByteTransactionId();
};

