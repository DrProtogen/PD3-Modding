#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWeaponSwayDataStruct.h"
#include "SBZWeaponSwayData.generated.h"

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZWeaponSwayData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSwayDataStruct Hip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSwayDataStruct Target;
    
    USBZWeaponSwayData();

};

