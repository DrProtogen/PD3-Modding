#pragma once
#include "CoreMinimal.h"
#include "SBZSPayedWeaponPartAttachmentItemSkuArray.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSPayedWeaponPartAttachmentItemSkuArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PayedWeaponPartAttachmentItemSkuArray;
    
    FSBZSPayedWeaponPartAttachmentItemSkuArray();
};

