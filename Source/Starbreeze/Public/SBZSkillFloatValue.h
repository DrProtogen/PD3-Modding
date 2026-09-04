#pragma once
#include "CoreMinimal.h"
#include "SBZSkillNumberValue.h"
#include "SBZSkillFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillFloatValue : public FSBZSkillNumberValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZSkillFloatValue();
};

