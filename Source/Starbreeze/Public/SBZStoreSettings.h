#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZStoreSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USBZStoreSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SBZSteamStorePriceURL;
    
    USBZStoreSettings();

};

