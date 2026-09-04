#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZNetworkDebug.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZNetworkDebug : public AHUD {
    GENERATED_BODY()
public:
    ASBZNetworkDebug(const FObjectInitializer& ObjectInitializer);

};

