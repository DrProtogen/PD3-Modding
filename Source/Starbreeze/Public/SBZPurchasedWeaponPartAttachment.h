#pragma once
#include "CoreMinimal.h"
#include "SBZPurchasedWeaponPartAttachment.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPurchasedWeaponPartAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponPartAttachmentSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseWeaponItemSku;
    
    FSBZPurchasedWeaponPartAttachment();
};

