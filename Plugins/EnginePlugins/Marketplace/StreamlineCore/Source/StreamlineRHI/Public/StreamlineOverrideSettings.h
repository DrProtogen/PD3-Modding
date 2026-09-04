#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStreamlineSettingOverride.h"
#include "StreamlineOverrideSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, ProjectUserConfig, Config=Engine)
class UStreamlineOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride LoadDebugOverlayOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride AllowOTAUpdateOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride UseSlSetTagOverride;
    
    UStreamlineOverrideSettings();

};

