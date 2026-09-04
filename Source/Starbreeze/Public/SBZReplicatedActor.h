#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZReplicatedActor.generated.h"

UCLASS(Blueprintable)
class ASBZReplicatedActor : public AActor {
    GENERATED_BODY()
public:
    ASBZReplicatedActor(const FObjectInitializer& ObjectInitializer);

};

