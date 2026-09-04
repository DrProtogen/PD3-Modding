#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIDataProvider_PreferredRange.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_PreferredRange : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMultiplier;
    
    USBZAIDataProvider_PreferredRange();

};

