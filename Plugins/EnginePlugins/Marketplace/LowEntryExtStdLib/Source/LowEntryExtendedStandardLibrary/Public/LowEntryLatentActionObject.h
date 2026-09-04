#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionObject.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepAliveCount;
    
    ULowEntryLatentActionObject();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UObject*& Result_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(UObject*& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(UObject* Result_);
    
};

