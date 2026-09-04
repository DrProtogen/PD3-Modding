#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZOverskillLoadoutStoreItem.generated.h"

class USBZBaseWeaponData;

USTRUCT(BlueprintType)
struct FSBZOverskillLoadoutStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* WeaponData;
    
    STARBREEZE_API FSBZOverskillLoadoutStoreItem();
};

