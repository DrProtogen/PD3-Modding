#pragma once
#include "CoreMinimal.h"
#include "ESBZItemCategory.h"
#include "SBZUIDefaultSoundEvents.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZUIDefaultSoundEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonFocusedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonClickedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuEnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuExitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GenericEquipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, UAkAudioEvent*> ItemEquipEventMap;
    
    STARBREEZE_API FSBZUIDefaultSoundEvents();
};

