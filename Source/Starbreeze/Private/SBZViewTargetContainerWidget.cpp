#include "SBZViewTargetContainerWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZViewTargetContainerWidget::USBZViewTargetContainerWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->ViewTargetWidgetClass = NULL;
    this->Panel_ViewTargetWidgets = NULL;
    this->CurrentIndex = -1;
    this->CurrentControlsReferenceID = -1;
    this->SkillPlayerState = NULL;
    this->SecurityCamera = NULL;
}

void USBZViewTargetContainerWidget::OnViewTargetChanged(ASBZPlayerController* InPlayerController, const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection) {
}



