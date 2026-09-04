#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZEquippablePartDataAsset.h"
#include "SBZModularMeshContainer.h"
#include "SBZModularMeshData.h"
#include "SBZWeaponPartDataAsset.generated.h"

class USBZModularPartSlotBase;
class USBZSkillData;
class USBZWeaponFireData;

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponPartDataAsset : public USBZEquippablePartDataAsset, public ISBZModularMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddTagToWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularMeshData> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZModularPartSlotBase*> UseDefaultPartsFromSlotsAndBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> SkillDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponFireData* FireData;
    
    USBZWeaponPartDataAsset();


    // Fix for true pure virtual functions not being implemented
};

