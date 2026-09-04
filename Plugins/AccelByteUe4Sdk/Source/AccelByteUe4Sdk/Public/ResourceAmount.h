#pragma once
#include "CoreMinimal.h"
#include "BaseNumberData.h"
#include "ResourceAmount.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FResourceAmount : public FBaseNumberData {
    GENERATED_BODY()
public:
    FResourceAmount();
};

