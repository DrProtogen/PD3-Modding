#pragma once
#include "CoreMinimal.h"
#include "ESBZBundleMannequinState.h"
#include "ESBZMainMenuAnimationName.h"
#include "PD3PlayerLoadout.h"
#include "SBZBundleMannequinEntry.generated.h"

class USBZPlayerCharacterData;

USTRUCT(BlueprintType)
struct FSBZBundleMannequinEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPlayerCharacterData> CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3PlayerLoadout PreviewLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZBundleMannequinState, ESBZMainMenuAnimationName> Poses;
    
    STARBREEZE_API FSBZBundleMannequinEntry();
};

