#pragma once
#include "CoreMinimal.h"
#include "SBZPaydayBackendSettings.h"
#include "SBZPlatformsBackendSettingsInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlatformsBackendSettingsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPaydayBackendSettings> PlatformBackendSettings;
    
    FSBZPlatformsBackendSettingsInfo();
};

