#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "SBZPostProcessSettingsPresetDataAsset.generated.h"

UCLASS(Blueprintable, Const)
class USBZPostProcessSettingsPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    USBZPostProcessSettingsPresetDataAsset();

};

