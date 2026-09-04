#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZTrafficVolume.generated.h"

class ASBZTrafficLights;

UCLASS(Blueprintable)
class ASBZTrafficVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZTrafficLights* TrafficLightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TrafficLightIndex;
    
    ASBZTrafficVolume(const FObjectInitializer& ObjectInitializer);

};

