#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIDataProvider_DefensePointAngle.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USBZAIDataProvider_DefensePointAngle : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    USBZAIDataProvider_DefensePointAngle();

};

