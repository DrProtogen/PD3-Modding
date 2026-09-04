#pragma once
#include "CoreMinimal.h"
#include "ESBZBundleMannequinContext.h"
#include "ESBZBundleMannequinState.h"
#include "ESBZMainMenuAnimationName.h"
#include "SBZBundleMannequinEntry.h"
#include "SBZMainMenuPlayerCharacter.h"
#include "SBZBundleMannequin.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBundleMannequin : public ASBZMainMenuPlayerCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowDetailedView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZBundleMannequinContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZBundleMannequinState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBundleMannequinEntry LastDressedEntry;
    
public:
    ASBZBundleMannequin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMannequin();
    
    UFUNCTION(BlueprintCallable)
    void SetShowDetailedView(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMannequinEntry(const FSBZBundleMannequinEntry& InEntry);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PollForReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayPose(ESBZMainMenuAnimationName MontageName, float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable)
    void HideMannequin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESBZMainMenuAnimationName GetPoseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZBundleMannequinEntry GetLastDressedEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZBundleMannequinContext GetContext() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZBundleMannequinState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMannequinReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLoadingChanged(bool bInIsLoading);
    
};

