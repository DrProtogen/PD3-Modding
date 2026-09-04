#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaEventType.h"
#include "SBZActorSpawnTransforms.h"
#include "SBZSeasonalEventItemSpawner.generated.h"

class USBZActorSpawnRequestData;

UCLASS(Blueprintable)
class ASBZSeasonalEventItemSpawner : public ASBZActorSpawnTransforms {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActorSpawnRequestData* SpawnRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMetaEventType EventType;
    
public:
    ASBZSeasonalEventItemSpawner(const FObjectInitializer& ObjectInitializer);

};

