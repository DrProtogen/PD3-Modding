#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnGroupQueryMemory.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSpawnGroupQueryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    STARBREEZE_API FSBZSpawnGroupQueryMemory();
};

