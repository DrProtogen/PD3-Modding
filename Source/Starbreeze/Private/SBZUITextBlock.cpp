#include "SBZUITextBlock.h"
#include "SBZTextStyle.h"
#include "SBZColorStyle.h"

USBZUITextBlock::USBZUITextBlock() {
    this->ColorStyle = NULL;
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->bIsScrollingEnabled = false;
    this->bEnableHideTextOnEmpty = false;
    this->OnEmptyVisibility = ESlateVisibility::Collapsed;
    this->OnNotEmptyVisbility = ESlateVisibility::SelfHitTestInvisible;
}

void USBZUITextBlock::SetWrapTextWidth(int32 InWrapTextAt) {
}

void USBZUITextBlock::SetStyle(USBZTextStyle* InStyle) {
    this->Style = InStyle;
}

USBZTextStyle* USBZUITextBlock::GetStyle() {
    return this->Style;
}

void USBZUITextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled) {
    this->bIsScrollingEnabled = bInIsScrollingEnabled;
}

void USBZUITextBlock::SetColorStyle(USBZColorStyle* InStyle) {
    this->ColorStyle = InStyle;
}

USBZColorStyle* USBZUITextBlock::GetColorStyle() {
    return this->ColorStyle;
}

void USBZUITextBlock::ResetScrollState() {
}

#if WITH_EDITORONLY_DATA
void USBZUITextBlock::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
    this->UpdateTextProperties();
    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

TSharedRef<SWidget> USBZUITextBlock::RebuildWidget() {
    this->UpdateTextProperties();
    return Super::RebuildWidget();
}

void USBZUITextBlock::UpdateTextProperties() {
    if (GetStyle()) {
        this->SetFont(FSlateFontInfo(GetStyle()->Font));
    }
    if (GetColorStyle()) {
        this->SetColorAndOpacity(GetColorStyle()->Value);
    }
}