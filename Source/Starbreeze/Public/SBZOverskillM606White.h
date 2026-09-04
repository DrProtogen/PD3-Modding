#pragma once
#include "CoreMinimal.h"
#include "SBZSkillData.h"
#include "Templates/SubclassOf.h"
#include "SBZOverskillM606White.generated.h"

class USBZM606WhiteEffect;

UCLASS(Blueprintable)
class USBZOverskillM606White : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZM606WhiteEffect> M606WhiteEffect;
    
    USBZOverskillM606White();

};

