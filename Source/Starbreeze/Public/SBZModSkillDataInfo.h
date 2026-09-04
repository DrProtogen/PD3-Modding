#pragma once
#include "CoreMinimal.h"
#include "SBZModSkillDataInfo.generated.h"

class USBZSkillData;

USTRUCT(BlueprintType)
struct FSBZModSkillDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EquippableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSkillData* SkillData;
    
    STARBREEZE_API FSBZModSkillDataInfo();
};

