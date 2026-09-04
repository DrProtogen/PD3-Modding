#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWorldEventData.generated.h"

class USBZWorldEventBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWorldEventData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWorldEventBase* Event;
    
    USBZWorldEventData();

};

