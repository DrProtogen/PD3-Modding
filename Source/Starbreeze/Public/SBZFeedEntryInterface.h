#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZFeedEntryInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USBZFeedEntryInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZFeedEntryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMergeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDisappearAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAppearAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetEntryType();
    
};

