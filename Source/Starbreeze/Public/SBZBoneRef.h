#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "SBZBoneRef.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    STARBREEZE_API FSBZBoneRef();
};

