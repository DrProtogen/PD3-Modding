#include "Packaging/CrimeFactoryUpdaterUI.h"

#include "Framework/Application/SlateApplication.h"
#include "Misc/App.h"
#include "Styling/AppStyle.h"
#include "Styling/StyleColors.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"

FString FCrimeFactoryUpdatePresentation::BuildReport() const
{
    return FString::Printf(TEXT("PD3 Modkit Updater\n\n%s\n\n%s\n\nBranch: %s\nRepository: %s\nCurrent: %s\nLatest: %s\nLatest commit: %s\nUpdates: %d\nLocal commits: %d\nLocal changes: %d"),
        *Status, *Detail, *Branch, *Repository, *CurrentCommit, *LatestCommit, *LatestSubject, CommitsBehind, CommitsAhead, LocalChanges);
}

TSharedRef<SWidget> CrimeFactoryUpdaterUI::MakeContent(const FCrimeFactoryUpdatePresentation& Data,
    const FSimpleDelegate& OnUpdate, const FSimpleDelegate& OnClose)
{
    const TSharedRef<SVerticalBox> Body = SNew(SVerticalBox);
    Body->AddSlot().AutoHeight().Padding(0, 0, 0, 14)
        [CrimeFactoryPackagingUI::MakeMessagePanel(Data.Detail, Data.Severity)];
    for (const auto& Field : TArray<TPair<FString, FString>>{{TEXT("Branch"), Data.Branch}, {TEXT("Current commit"), Data.CurrentCommit},
        {TEXT("Latest commit"), Data.LatestCommit}, {TEXT("Latest change"), Data.LatestSubject}, {TEXT("Repository"), Data.Repository}})
    {
        if (Field.Value.IsEmpty()) continue;
        Body->AddSlot().AutoHeight().Padding(0, 0, 0, 8)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight()[SNew(STextBlock).Text(FText::FromString(Field.Key)).Font(FAppStyle::GetFontStyle("BoldFont"))]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 3)[SNew(STextBlock).Text(FText::FromString(Field.Value)).AutoWrapText(true)]
        ];
    }
    return SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Panel).Padding(24)
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()
        [CrimeFactoryPackagingUI::MakeHeader(TEXT("PD3 Modkit"), NSLOCTEXT("CrimeFactory", "UpdateSection", "CRIMEFACTORY  /  MODKIT UPDATE"),
            FText::FromString(Data.Status), NSLOCTEXT("CrimeFactory", "UpdateHelp", "Review the update status and local changes before continuing."), Data.Severity)]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 18)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
            [CrimeFactoryPackagingUI::MakeSummaryCard(NSLOCTEXT("CrimeFactory", "UpdateBehind", "Updates to pull"), FText::AsNumber(Data.CommitsBehind), Data.Severity)]
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
            [CrimeFactoryPackagingUI::MakeSummaryCard(NSLOCTEXT("CrimeFactory", "UpdateChanges", "Local file changes"), FText::AsNumber(Data.LocalChanges), Data.Severity)]
            + SHorizontalBox::Slot().FillWidth(1)
            [CrimeFactoryPackagingUI::MakeSummaryCard(NSLOCTEXT("CrimeFactory", "UpdateAhead", "Local commits"), FText::AsNumber(Data.CommitsAhead), Data.Severity)]
        ]
        + SVerticalBox::Slot().FillHeight(1)[SNew(SScrollBox) + SScrollBox::Slot()[Body]]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 18, 0, 0)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth()[CrimeFactoryPackagingUI::MakeCopyReportButton(Data.BuildReport())]
            + SHorizontalBox::Slot().FillWidth(1)[SNullWidget::NullWidget]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0)
            [SNew(SButton).Text(Data.bCanUpdate ? NSLOCTEXT("CrimeFactory", "UpdateLater", "Later") : NSLOCTEXT("CrimeFactory", "UpdateClose", "Close"))
                .OnClicked_Lambda([OnClose] { OnClose.ExecuteIfBound(); return FReply::Handled(); })]
            + SHorizontalBox::Slot().AutoWidth()
            [SNew(SButton).ButtonStyle(FAppStyle::Get(), "PrimaryButton").Text(NSLOCTEXT("CrimeFactory", "UpdateNow", "Update now"))
                .Visibility(Data.bCanUpdate ? EVisibility::Visible : EVisibility::Collapsed)
                .OnClicked_Lambda([OnUpdate, bAllowed = Data.bCanUpdate] { if (bAllowed) OnUpdate.ExecuteIfBound(); return FReply::Handled(); })]
        ]
    ];
}

bool CrimeFactoryUpdaterUI::Present(const FCrimeFactoryUpdatePresentation& Data)
{
    if (IsRunningCommandlet() || FApp::IsUnattended() || !FSlateApplication::IsInitialized() || !FSlateApplication::Get().CanDisplayWindows()) return false;
    const auto Decision = MakeShared<bool>(false);
    const auto Window = SNew(SWindow).Title(NSLOCTEXT("CrimeFactory", "UpdaterTitle", "CrimeFactory · PD3 Modkit Updater"))
        .ClientSize(FVector2D(820, 700)).MinWidth(620).MinHeight(440).SupportsMaximize(true).SupportsMinimize(false);
    const TWeakPtr<SWindow> WeakWindow = Window;
    const auto Close = FSimpleDelegate::CreateLambda([WeakWindow] { if (const auto Pinned = WeakWindow.Pin()) Pinned->RequestDestroyWindow(); });
    Window->SetContent(MakeContent(Data, FSimpleDelegate::CreateLambda([Decision, Close, bAllowed = Data.bCanUpdate]
    {
        *Decision = bAllowed;
        Close.ExecuteIfBound();
    }), Close));
    FSlateApplication::Get().AddModalWindow(Window, FSlateApplication::Get().GetActiveTopLevelWindow());
    return *Decision;
}
