#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZTileView.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZTileView : public UTileView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* EquippedItem;
    
public:
    USBZTileView(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEquippedItem(const UObject* InEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetEquippedItem() const;
    
};

