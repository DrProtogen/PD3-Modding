#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZAssetDatabaseManagerInterface.h"
#include "SBZAssetDatabaseManager.generated.h"

class UPD3SecurityCompanyDataAsset;
class USBZArmorData;
class USBZBaseWeaponData;
class USBZEmoteCallAsset;
class USBZItemDataContainer;
class USBZMaskData;
class USBZNewsData;
class USBZPayDayCreditData;
class USBZPlayerCharacterData;
class USBZPreplanningAssetData;
class USBZQuestDataAsset;
class USBZSkillCategoryData;
class USBZSkillLineData;
class USBZSuitData;
class USBZVendorData;
class USBZWeaponCharmData;
class USBZWeaponStickerData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAssetDatabaseManager : public UObject, public ISBZAssetDatabaseManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZItemDataContainer*> AssetItemSkuMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, USBZItemDataContainer*> AssetItemIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillLineData*> SkillLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillCategoryData*> SkillCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPreplanningAssetData*> PreplanningAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZVendorData*> Vendors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMaskData* CustomizableMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSuitData* CustomizableSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseWeaponData*> AllPrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseWeaponData*> AllSecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseWeaponData*> AllOverkillWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZArmorData*> AllArmors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponCharmData*> AllWeaponCharms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponStickerData*> AllWeaponStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCharacterData*> AllPlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZEmoteCallAsset*> AllPlayerEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPayDayCreditData*> AllPayDayCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZNewsData*> NewsItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZQuestDataAsset*> QuestItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPD3SecurityCompanyDataAsset*> SecurityCompanyArray;
    
public:
    USBZAssetDatabaseManager();


    // Fix for true pure virtual functions not being implemented
};

