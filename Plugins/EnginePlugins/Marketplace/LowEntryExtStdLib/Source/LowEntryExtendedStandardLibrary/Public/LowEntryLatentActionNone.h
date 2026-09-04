#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionNone.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionNone : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepAliveCount;
    
    ULowEntryLatentActionNone();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable)
    void Done();
    
};

