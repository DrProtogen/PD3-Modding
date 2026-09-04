#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFulfillRewards.h"
#include "SBZRewardManager.generated.h"

class USBZRewardManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZRewardManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZFulfillRewards ModelsFulfillRewards;
    
public:
    USBZRewardManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZRewardManager* GetRewardManager(const UObject* WorldContextObject);
    
};

