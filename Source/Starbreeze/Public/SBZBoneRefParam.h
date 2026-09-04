#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "SBZBoneRefParam.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneRefParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneRef;
    
    STARBREEZE_API FSBZBoneRefParam();
};

