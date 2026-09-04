#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZOverkillWeaponStoreItem.generated.h"

class USBZBaseWeaponData;

USTRUCT(BlueprintType)
struct FSBZOverkillWeaponStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* WeaponData;
    
    STARBREEZE_API FSBZOverkillWeaponStoreItem();
};

