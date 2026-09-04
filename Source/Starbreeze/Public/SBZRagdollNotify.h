#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZRagdollNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZRagdollNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffsetBackward;
    
    USBZRagdollNotify();

};

