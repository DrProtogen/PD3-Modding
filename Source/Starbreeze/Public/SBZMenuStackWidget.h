#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZWidgetBase.h"
#include "SBZMenuStackWidget.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuStackWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStackFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultStackVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility StackOnGainedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility StackOnLostVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackGainedCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuEnterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuExitEvent;
    
public:
    USBZMenuStackWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnStackLostOrRemoved(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovedFromStack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLostStackFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGainedStackFocused(const FName& PreviousValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedToStack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStackValue() const;
    
};

