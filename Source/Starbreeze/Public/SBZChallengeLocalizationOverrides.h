#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZObjectiveKeysOverrides.h"
#include "SBZChallengeLocalizationOverrides.generated.h"

UCLASS(Blueprintable)
class USBZChallengeLocalizationOverrides : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZObjectiveKeysOverrides> ObjectiveKeysOverrides;
    
    USBZChallengeLocalizationOverrides();

};

