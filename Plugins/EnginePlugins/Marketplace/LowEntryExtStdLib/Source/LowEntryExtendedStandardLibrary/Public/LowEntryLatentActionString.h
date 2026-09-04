#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionString.generated.h"

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionString : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepAliveCount;
    
    ULowEntryLatentActionString();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& Result_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResult(FString& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(const FString& Result_);
    
};

