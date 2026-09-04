#pragma once
#include "CoreMinimal.h"
#include "SBZDeveloperSettings.h"
#include "SBZShadowSettings.generated.h"

class USBZCascadedShadowMapDefaults;

UCLASS(Blueprintable, Config=Game)
class USBZShadowSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZCascadedShadowMapDefaults> CascadedShadowMapDefaults;
    
    USBZShadowSettings();

};

