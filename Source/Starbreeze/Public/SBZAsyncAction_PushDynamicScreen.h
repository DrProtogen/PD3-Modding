#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZAsyncActionPushDynamicScreenDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZAsyncAction_PushDynamicScreen.generated.h"

class UObject;
class USBZAsyncAction_PushDynamicScreen;
class USBZMenuStackScreenWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAsyncAction_PushDynamicScreen : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAsyncActionPushDynamicScreen PrePush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAsyncActionPushDynamicScreen PostPush;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMenuStackScreenWidget> MenuScreenClass;
    
public:
    USBZAsyncAction_PushDynamicScreen();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZAsyncAction_PushDynamicScreen* SBZAsyncAction_PushDynamicScreen(UObject* WorldContextObject, TSubclassOf<USBZMenuStackScreenWidget> NewMenuScreenClass);
    
};

