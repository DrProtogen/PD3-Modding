#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPlayerEmoteManager.generated.h"

class USBZEmoteCallAsset;

UCLASS(Blueprintable)
class USBZPlayerEmoteManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USBZPlayerEmoteManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotLocked(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZEmoteCallAsset* GetSlotDefaultData(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEquippedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZEmoteCallAsset* GetEquippedData(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedCount() const;
    
};

