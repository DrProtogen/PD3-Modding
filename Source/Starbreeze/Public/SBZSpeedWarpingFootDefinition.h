#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "SBZSpeedWarpingFootDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpeedWarpingFootDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference ThighBone;
    
    STARBREEZE_API FSBZSpeedWarpingFootDefinition();
};

