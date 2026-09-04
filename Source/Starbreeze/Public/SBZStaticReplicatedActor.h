#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZStaticReplicatedActor.generated.h"

UCLASS(Blueprintable)
class ASBZStaticReplicatedActor : public AActor {
    GENERATED_BODY()
public:
    ASBZStaticReplicatedActor(const FObjectInitializer& ObjectInitializer);

};

