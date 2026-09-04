#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZVisualAttachment.generated.h"

UCLASS(Blueprintable)
class USBZVisualAttachment : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContentAnchor;
    
    USBZVisualAttachment();

};

