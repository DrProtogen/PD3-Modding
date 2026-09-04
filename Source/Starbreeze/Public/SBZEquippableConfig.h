#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfigGroup.h"
#include "SBZEquippableConfig.generated.h"

class USBZEquippableAnimationCollection;
class USBZEquippableData;
class USBZEquippablePartDataAsset;
class USBZModularPartSlotBase;
class USBZPlayerAnimationCollectionFPP;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZEquippableConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippableData* EquippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableData* OriginalEquippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartDataAsset*> ModDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZEquippablePartConfigGroup> ModDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerAnimationCollectionFPP* LoadedAnimationCollectionFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableAnimationCollection* LoadedEquippableAnimationCollection;
    
    FSBZEquippableConfig();
};

