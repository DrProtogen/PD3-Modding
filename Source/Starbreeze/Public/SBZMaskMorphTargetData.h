#pragma once
#include "CoreMinimal.h"
#include "SBZMaskMorphTargetData.generated.h"

class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct FSBZMaskMorphTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZPlayerCharacter>, FName> EquipCharacterNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnequipName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASBZPlayerCharacter>, FName> UnequipCharacterNameMap;
    
    STARBREEZE_API FSBZMaskMorphTargetData();
};

