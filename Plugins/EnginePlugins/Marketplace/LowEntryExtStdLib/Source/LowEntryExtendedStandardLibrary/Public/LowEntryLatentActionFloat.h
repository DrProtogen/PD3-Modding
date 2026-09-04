#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionFloat.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionFloat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepAliveCount;
    
    ULowEntryLatentActionFloat();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Result_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(float& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(float Result_);
    
};

