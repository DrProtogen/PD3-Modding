#pragma once
#include "CoreMinimal.h"
#include "SBZSkillValue.h"
#include "SBZSkillNumberValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillNumberValue : public FSBZSkillValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTreeSum;
    
    STARBREEZE_API FSBZSkillNumberValue();
};

