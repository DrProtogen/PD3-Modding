#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ESBZItemCategory.h"
#include "SBZMaskMouldStoreItem.h"
#include "SBZPayDayCreditStoreItem.h"
#include "SBZPlayerStoreItemData.h"
#include "SBZStoreBaseItem.h"
#include "SBZStoreItemArray.h"
#include "SBZStoreManager.generated.h"

class USBZStoreManager;

UCLASS(Blueprintable)
class USBZStoreManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZStoreBaseItem> WeaponPartCostMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZStoreBaseItem> PreplanningAssetCostMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AccelByteItemTitleToIdString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> VendorPermissionOverrideMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerStoreItemData AllVendorsItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPayDayCreditStoreItem> PayDayCreditMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, FSBZStoreItemArray> AllItemsPerCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, FSBZStoreItemArray> OwningItemsPerCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESBZItemCategory, FSBZStoreItemArray> NotOwningItemsPerCategoryMap;
    
public:
    USBZStoreManager();

    UFUNCTION(BlueprintCallable)
    void OpenDlcInFirstPartyStore(const FString& ProductId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZStoreManager* GetStoreManagerChecked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZStoreManager* GetStoreManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPriceProgressionLevel(const FString& PriceProgressionGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfamyLevelItemUnlockCount(int32 InfamyLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZMaskMouldStoreItem GetCurrentMaskOfTheWeekStoreItem() const;
    
};

