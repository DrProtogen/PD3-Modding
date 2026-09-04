#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "SBZRefPoseConstraint.generated.h"

USTRUCT(BlueprintType)
struct FSBZRefPoseConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference TargetBone;
    
    STARBREEZE_API FSBZRefPoseConstraint();
};

