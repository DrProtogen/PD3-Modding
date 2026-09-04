#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionInteger.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionInteger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepAliveCount;
    
    ULowEntryLatentActionInteger();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32& Result_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(int32& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(int32 Result_);
    
};

