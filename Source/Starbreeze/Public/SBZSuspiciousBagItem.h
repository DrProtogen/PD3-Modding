#pragma once
#include "CoreMinimal.h"
#include "SBZAttractableBagItem.h"
#include "SBZSuspiciousBagItem.generated.h"

UCLASS(Blueprintable)
class ASBZSuspiciousBagItem : public ASBZAttractableBagItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDespawnedInLoud;
    
public:
    ASBZSuspiciousBagItem(const FObjectInitializer& ObjectInitializer);

};

