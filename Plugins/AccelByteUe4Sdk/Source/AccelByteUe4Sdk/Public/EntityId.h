#pragma once
#include "CoreMinimal.h"
#include "AccelByteId.h"
#include "EntityId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FEntityId : public FAccelByteId {
    GENERATED_BODY()
public:
    FEntityId();
};

