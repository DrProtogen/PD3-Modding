#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZInventoryEquipmentType.h"
#include "SBZBundleMannequinEntry.h"
#include "SBZEquippableConfig.h"
#include "SBZMannequinLibrary.generated.h"

class ASBZBundleMannequin;
class ASBZMainMenuPlayerCharacter;
class UAnimSequenceBase;
class UObject;

UCLASS(Blueprintable)
class USBZMannequinLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMannequinLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPartyVisible(const UObject* WorldContextObject, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinPose(const UObject* WorldContextObject, UAnimSequenceBase* Pose);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinLoadout(const UObject* WorldContextObject, const FSBZEquippableConfig& EquippableConfig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuMannequinEquipment(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBundleMannequins(const UObject* WorldContextObject, const TArray<FSBZBundleMannequinEntry>& Entries);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshMainMenuMannequin(const UObject* WorldContextObject, const ESBZInventoryEquipmentType EquipmentType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZMainMenuPlayerCharacter* GetMultiplayerMannequin(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZMainMenuPlayerCharacter* GetMainMenuMannequin(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZBundleMannequin* GetBundleMannequin(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearBundleMannequins(const UObject* WorldContextObject);
    
};

