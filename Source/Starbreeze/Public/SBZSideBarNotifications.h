#pragma once
#include "CoreMinimal.h"
#include "SBZSideBarNotificationData.h"
#include "SBZWidgetBase.h"
#include "SBZSideBarNotifications.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class USBZSideBarNotifications : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisplaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation_OpenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation_CloseWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisplayTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSideBarNotificationData> SideBarNotifications;
    
public:
    USBZSideBarNotifications();

    UFUNCTION(BlueprintCallable)
    void RemoveNotification(const FSBZSideBarNotificationData& InSideBarNotificationData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotificationDisplayed(FSBZSideBarNotificationData InNotificationToDisplay);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNewNotification(const FSBZSideBarNotificationData& InSideBarNotificationData);
    
};

