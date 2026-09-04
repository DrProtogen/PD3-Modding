#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWindVolume.generated.h"

class USBZWindEmitterComponent;

UCLASS(Blueprintable)
class ASBZWindVolume : public AVolume {
    GENERATED_BODY()
public:
    // Plain (non-UPROPERTY) member dropped by the UHT-dump reconstruction; restored from its
    // constructor usage.
    bool bNetLoadOnServer = false;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWindEmitterComponent* EmitterComponent;
    
public:
    ASBZWindVolume(const FObjectInitializer& ObjectInitializer);

};

