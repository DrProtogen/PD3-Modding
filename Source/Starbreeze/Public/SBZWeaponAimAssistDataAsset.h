#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWeaponAimAssistData.h"
#include "SBZWeaponAimAssistDataAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponAimAssistDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponAimAssistData Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponAimAssistData Mouse;
    
    USBZWeaponAimAssistDataAsset();

};

