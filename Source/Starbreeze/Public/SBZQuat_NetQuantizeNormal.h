#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZQuat_NetQuantizeNormal.generated.h"

USTRUCT(BlueprintType)
struct FSBZQuat_NetQuantizeNormal : public FQuat4f {
    GENERATED_BODY()
public:
    STARBREEZE_API FSBZQuat_NetQuantizeNormal();
};

