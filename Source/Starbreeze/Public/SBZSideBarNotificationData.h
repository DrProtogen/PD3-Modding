#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZSideBarNotificationData.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZSideBarNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    STARBREEZE_API FSBZSideBarNotificationData();
};

