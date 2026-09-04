#include "PD3ActionNotificationWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ActionNotificationWidget::UPD3ActionNotificationWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
}


void UPD3ActionNotificationWidget::OnRevive(const FSBZReviveEvent& ReviveEventData) {
}


void UPD3ActionNotificationWidget::OnNegotiationEndTimeChanged(float OldTime, float NewTime) {
}

void UPD3ActionNotificationWidget::OnAICharacterKilled(ASBZCharacter* Character) {
}

void UPD3ActionNotificationWidget::NotifyFadeOutStarted() {
}

void UPD3ActionNotificationWidget::NotifyFadeOutFinished() {
}


void UPD3ActionNotificationWidget::AddNotification(const FSBZHUDNotificationData& HUDNotification) {
}


