#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBundleLayoutSlot.h"
#include "SBZBundleLayoutTemplate.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBundleLayoutTemplate : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TilePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBundleLayoutSlot> Slots;
    
    USBZBundleLayoutTemplate();

};

