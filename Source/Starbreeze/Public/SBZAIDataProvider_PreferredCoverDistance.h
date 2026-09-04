#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIDataProvider_PreferredCoverDistance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_PreferredCoverDistance : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    USBZAIDataProvider_PreferredCoverDistance();

};

