#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SBZFullBodyEmote.generated.h"

class ASBZPlayerEmoteCamera;
class USBZEmoteAnimationCollection;

USTRUCT(BlueprintType)
struct FSBZFullBodyEmote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEmoteAnimationCollection* AnimationCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZPlayerEmoteCamera> SoftCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams TransitionParams;
    
    STARBREEZE_API FSBZFullBodyEmote();
};

