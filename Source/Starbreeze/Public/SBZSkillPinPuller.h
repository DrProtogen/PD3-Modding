#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "SBZSkillPinPuller.generated.h"

class USBZGrenadeData;

UCLASS(Abstract, Blueprintable)
class USBZSkillPinPuller : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGrenadeData* GrenadeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrenadeAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashBangDelay;
    
    USBZSkillPinPuller();

};

