#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAsyncActionTimerUpdateDelegate.h"
#include "SBZAsyncAction_Timer.generated.h"

class UObject;
class USBZAsyncAction_Timer;

UCLASS(Blueprintable)
class USBZAsyncAction_Timer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAsyncActionTimerUpdate OnUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAsyncActionTimerUpdate OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAsyncActionTimerUpdate OnFinished;
    
    USBZAsyncAction_Timer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable)
    void AsyncTimerUpdate();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZAsyncAction_Timer* AsyncTimer(UObject* WorldContextObject, float Duration, float UpdateRate);
    
};

