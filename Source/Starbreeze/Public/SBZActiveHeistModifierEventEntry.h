#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZActiveHeistModifierEventEntry.generated.h"

class UPD3SecurityCompanyDataAsset;

USTRUCT(BlueprintType)
struct FSBZActiveHeistModifierEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPD3SecurityCompanyDataAsset> HeistEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    STARBREEZE_API FSBZActiveHeistModifierEventEntry();
};

