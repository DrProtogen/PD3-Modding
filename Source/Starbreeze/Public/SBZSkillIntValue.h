#pragma once
#include "CoreMinimal.h"
#include "SBZSkillNumberValue.h"
#include "SBZSkillIntValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillIntValue : public FSBZSkillNumberValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    STARBREEZE_API FSBZSkillIntValue();
};

