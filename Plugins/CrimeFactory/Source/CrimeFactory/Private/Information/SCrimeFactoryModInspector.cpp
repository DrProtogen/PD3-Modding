#include "Information/SCrimeFactoryModInspector.h"

#include "Packaging/CrimeFactoryPackagingUI.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Misc/PackageName.h"
#include "Styling/AppStyle.h"
#include "Styling/StyleColors.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "CrimeFactoryModInspector"

namespace
{
    TSharedRef<SWidget> SectionTitle(const FText& Text)
    {
        return SNew(STextBlock).Text(Text).Font(FAppStyle::GetFontStyle("BoldFont"));
    }

    FText GroupLabel(const TSharedPtr<FCrimeFactoryInspectionAssetGroup>& Group)
    {
        return FText::Format(LOCTEXT("GroupCount", "{0} ({1})"), Group->Name, FText::AsNumber(Group->Paths.Num()));
    }
}

void SCrimeFactoryModInspector::Construct(const FArguments& Args)
{
    bShowAssets = Args._ShowAssets;
    RefreshAction = Args._OnRefresh;
    FixAction = Args._OnFix;
    ViewAssetsAction = Args._OnViewAssets;
    CloseAction = Args._OnClose;
    LocateAction = Args._OnLocateAsset;
    SetData(Args._Data);
}

void SCrimeFactoryModInspector::SetData(TSharedPtr<const FCrimeFactoryModInspection> InData)
{
    Data = MoveTemp(InData);
    AssetFeedback = FText::GetEmpty();
    if (Data && !Data->Groups.ContainsByPredicate([this](const auto& Group) { return Group->Id == SelectedGroup; }))
        SelectedGroup = Data->Groups.IsEmpty() ? NAME_None : Data->Groups[0]->Id;
    Rebuild();
}

void SCrimeFactoryModInspector::Rebuild()
{
    AssetList.Reset();
    VisiblePaths.Reset();
    if (!Data)
    {
        ChildSlot[CrimeFactoryPackagingUI::MakeMessagePanel(TEXT("Inspector data is unavailable. Refresh the mod list and reopen Information."),
            ECrimeFactoryPreflightSeverity::Warning)];
        return;
    }
    const auto Status = Data->Issues.IsEmpty() ? ECrimeFactoryPreflightSeverity::Pass : ECrimeFactoryPreflightSeverity::Warning;
    const auto Card = [](const FText& Label, int32 Count)
    {
        return CrimeFactoryPackagingUI::MakeSummaryCard(Label, FText::AsNumber(Count), ECrimeFactoryPreflightSeverity::Pass);
    };
    ChildSlot
    [
        SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Panel).Padding(24)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight()
            [ CrimeFactoryPackagingUI::MakeHeader(Data->PluginName,
                bShowAssets ? LOCTEXT("AssetsSection", "CRIMEFACTORY  /  MOD ASSETS") : LOCTEXT("InfoSection", "CRIMEFACTORY  /  MOD INFORMATION"),
                Data->Issues.IsEmpty() ? LOCTEXT("Healthy", "No inspector issues found") :
                    FText::Format(LOCTEXT("IssueCount", "{0} issue(s) need attention"), FText::AsNumber(Data->Issues.Num())),
                bShowAssets ? LOCTEXT("AssetsHelp", "Browse configured asset groups. These lists are candidates; the final cooked package may differ.") :
                    LOCTEXT("InfoHelp", "Review the mod's asset label and packaging settings. Forge Selected! runs the full preflight checks."), Status) ]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 18)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)[Card(LOCTEXT("PluginAssets", "Plugin assets"), Data->PluginAssetCount)]
                + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)[Card(LOCTEXT("Managed", "Chunk candidates"), Data->ManagedAssetCount)]
                + SHorizontalBox::Slot().FillWidth(1)[Card(LOCTEXT("External", "External references"), Data->ExternalAssetCount)]
            ]
            + SVerticalBox::Slot().FillHeight(1)[bShowAssets ? MakeAssetsBody() : MakeInformationBody()]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 18, 0, 0)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().AutoWidth()
                [ CrimeFactoryPackagingUI::MakeCopyReportButton(bShowAssets ? Data->AssetsReport : Data->InformationReport) ]
                + SHorizontalBox::Slot().FillWidth(1)[SNullWidget::NullWidget]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton).Text(LOCTEXT("Fix", "Fix Issues"))
                    .Visibility(Data->Issues.IsEmpty() ? EVisibility::Collapsed : EVisibility::Visible)
                    .IsEnabled(Data->bCanFix && FixAction.IsBound())
                    .ToolTipText(LOCTEXT("FixHelp", "Repair safe PAL and Asset Manager configuration issues. Missing references require manual repair."))
                    .OnClicked_Lambda([this] { if (Data && Data->bCanFix) FixAction.ExecuteIfBound(); return FReply::Handled(); }) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton).Text(LOCTEXT("Refresh", "Refresh")).IsEnabled_Lambda([this] { return RefreshAction.IsBound(); })
                    .OnClicked_Lambda([this] { RefreshAction.ExecuteIfBound(); return FReply::Handled(); }) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton).Text(LOCTEXT("ViewAssets", "View Assets")).Visibility(bShowAssets ? EVisibility::Collapsed : EVisibility::Visible)
                    .IsEnabled_Lambda([this] { return ViewAssetsAction.IsBound(); })
                    .OnClicked_Lambda([this] { ViewAssetsAction.ExecuteIfBound(); return FReply::Handled(); }) ]
                + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
                [ SNew(SButton).ButtonStyle(FAppStyle::Get(), "PrimaryButton").Text(LOCTEXT("Close", "Close"))
                    .OnClicked_Lambda([this] { CloseAction.ExecuteIfBound(); return FReply::Handled(); }) ]
            ]
        ]
    ];
}

TSharedRef<SWidget> SCrimeFactoryModInspector::MakeInformationBody()
{
    const TSharedRef<SVerticalBox> Body = SNew(SVerticalBox);
    Body->AddSlot().AutoHeight().Padding(0, 0, 0, 6)[SectionTitle(LOCTEXT("Packaging", "Packaging overview"))];
    Body->AddSlot().AutoHeight().Padding(0, 0, 0, 14)
        [ CrimeFactoryPackagingUI::MakeMessagePanel(FString::Printf(TEXT("%s  |  Chunk: %s"), *Data->PackagingMode, *Data->Chunk),
            Data->Issues.IsEmpty() ? ECrimeFactoryPreflightSeverity::Pass : ECrimeFactoryPreflightSeverity::Warning) ];
    if (!Data->Issues.IsEmpty())
    {
        Body->AddSlot().AutoHeight().Padding(0, 0, 0, 6)[SectionTitle(LOCTEXT("Issues", "Issues to review"))];
        for (const FString& Issue : Data->Issues)
            Body->AddSlot().AutoHeight().Padding(0, 0, 0, 6)
                [CrimeFactoryPackagingUI::MakeMessagePanel(Issue, ECrimeFactoryPreflightSeverity::Warning)];
    }
    Body->AddSlot().AutoHeight().Padding(0, 10, 0, 8)[SectionTitle(LOCTEXT("Settings", "Asset label and registration"))];
    for (const auto& Field : Data->Fields)
    {
        Body->AddSlot().AutoHeight().Padding(0, 0, 0, 4)
        [
            SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Recessed).Padding(10)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(0.35f).Padding(0, 0, 12, 0)
                [ SNew(STextBlock).Text(Field.Key).Font(FAppStyle::GetFontStyle("BoldFont")).AutoWrapText(true) ]
                + SHorizontalBox::Slot().FillWidth(0.65f)
                [ SNew(STextBlock).Text(FText::FromString(Field.Value)).AutoWrapText(true)
                    .WrappingPolicy(ETextWrappingPolicy::AllowPerCharacterWrapping) ]
            ]
        ];
    }
    return SNew(SScrollBox) + SScrollBox::Slot()[Body];
}

TSharedRef<SWidget> SCrimeFactoryModInspector::MakeAssetsBody()
{
    TSharedPtr<FCrimeFactoryInspectionAssetGroup> Initial;
    for (const auto& Group : Data->Groups) if (Group->Id == SelectedGroup) Initial = Group;
    FilterAssets();
    return SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()
        [
            SNew(SComboBox<TSharedPtr<FCrimeFactoryInspectionAssetGroup>>).OptionsSource(&Data->Groups)
                .InitiallySelectedItem(Initial)
                // Keep the options snapshot alive if another inspector refreshes while this popup is open.
                .OnGenerateWidget_Lambda([Snapshot = Data](auto Group) { return SNew(STextBlock).Text(GroupLabel(Group)); })
                .OnSelectionChanged_Lambda([this](auto Group, ESelectInfo::Type) { if (Group) SelectGroup(Group->Id); })
                [ SNew(STextBlock).Text_Lambda([this]
                    {
                        for (const auto& Group : Data->Groups) if (Group->Id == SelectedGroup) return GroupLabel(Group);
                        return LOCTEXT("NoGroups", "No asset groups");
                    }) ]
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 8, 0, 10)
        [ SNew(STextBlock).AutoWrapText(true).Text_Lambda([this]
            {
                for (const auto& Group : Data->Groups) if (Group->Id == SelectedGroup) return Group->Description;
                return FText::GetEmpty();
            }) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 8)
        [ SNew(SSearchBox).HintText(LOCTEXT("SearchHelp", "Search asset names or paths…"))
            .InitialText(FText::FromString(SearchText)).OnTextChanged(this, &SCrimeFactoryModInspector::SetSearchText) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 8)
        [ SNew(STextBlock).Text_Lambda([this]
            {
                return VisiblePaths.IsEmpty() ? LOCTEXT("NoAssets", "No assets match this group and search.") :
                    FText::Format(LOCTEXT("VisibleCount", "{0} asset(s) shown · Double-click to find an asset in the Content Browser."), FText::AsNumber(VisiblePaths.Num()));
            }) ]
        + SVerticalBox::Slot().FillHeight(1)
        [
            SAssignNew(AssetList, SListView<TSharedPtr<FString>>).ListItemsSource(&VisiblePaths).SelectionMode(ESelectionMode::Single)
            .OnMouseButtonDoubleClick_Lambda([this](TSharedPtr<FString> Path) { LocateAsset(Path); })
            .OnGenerateRow_Lambda([this](TSharedPtr<FString> Path, const TSharedRef<STableViewBase>& Owner)
            {
                const bool bMissing = Data->MissingPaths.Contains(*Path);
                return SNew(STableRow<TSharedPtr<FString>>, Owner).Padding(FMargin(8, 6))
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot().AutoHeight()
                    [ SNew(STextBlock).Text(FText::FromString(FPackageName::ObjectPathToObjectName(*Path)))
                        .Font(FAppStyle::GetFontStyle("BoldFont")).ColorAndOpacity(bMissing ? FStyleColors::Warning : FStyleColors::Foreground) ]
                    + SVerticalBox::Slot().AutoHeight().Padding(0, 3, 0, 0)
                    [ SNew(STextBlock).Text(FText::FromString(*Path)).AutoWrapText(true)
                        .WrappingPolicy(ETextWrappingPolicy::AllowPerCharacterWrapping) ]
                    + SVerticalBox::Slot().AutoHeight().Padding(0, 3, 0, 0)
                    [ SNew(STextBlock).Text(LOCTEXT("Missing", "Missing package — manual repair required"))
                        .ColorAndOpacity(FStyleColors::Warning).Visibility(bMissing ? EVisibility::Visible : EVisibility::Collapsed) ]
                ];
            })
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 8, 0, 0)
        [ SNew(STextBlock).Text_Lambda([this] { return AssetFeedback; }).AutoWrapText(true).ColorAndOpacity(FStyleColors::Warning) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 8, 0, 0)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth()
            [ SNew(SButton).Text(LOCTEXT("CopyPath", "Copy asset path"))
                .IsEnabled_Lambda([this] { return AssetList && !AssetList->GetSelectedItems().IsEmpty(); })
                .OnClicked_Lambda([this]
                {
                    const auto Selected = AssetList->GetSelectedItems();
                    if (!Selected.IsEmpty()) FPlatformApplicationMisc::ClipboardCopy(**Selected[0]);
                    return FReply::Handled();
                }) ]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
            [ SNew(SButton).Text(LOCTEXT("FindAsset", "Find in Content Browser"))
                .IsEnabled_Lambda([this] { return LocateAction.IsBound() && AssetList && !AssetList->GetSelectedItems().IsEmpty(); })
                .OnClicked_Lambda([this]
                {
                    const auto Selected = AssetList->GetSelectedItems();
                    if (!Selected.IsEmpty()) LocateAsset(Selected[0]);
                    return FReply::Handled();
                }) ]
        ];
}

void SCrimeFactoryModInspector::SetSearchText(const FText& Text)
{
    SearchText = Text.ToString();
    FilterAssets();
}

void SCrimeFactoryModInspector::SelectGroup(FName Id)
{
    SelectedGroup = Id;
    FilterAssets();
}

void SCrimeFactoryModInspector::FilterAssets()
{
    VisiblePaths.Reset();
    AssetFeedback = FText::GetEmpty();
    if (Data)
        for (const auto& Group : Data->Groups)
            if (Group->Id == SelectedGroup)
                for (const FString& Path : Group->Paths)
                    if (SearchText.IsEmpty() || Path.Contains(SearchText)) VisiblePaths.Add(MakeShared<FString>(Path));
    if (AssetList)
    {
        AssetList->ClearSelection();
        AssetList->RequestListRefresh();
    }
}

void SCrimeFactoryModInspector::LocateAsset(const TSharedPtr<FString>& Path)
{
    if (!Path) return;
    if (Data->MissingPaths.Contains(*Path))
        AssetFeedback = LOCTEXT("MissingFeedback", "This reference points to a missing package. Restore it or repair the PAL reference manually.");
    else if (!LocateAction.IsBound() || !LocateAction.Execute(*Path))
        AssetFeedback = LOCTEXT("LocateFailed", "This asset is not available in the Asset Registry. Refresh the inspector and check the reference path.");
    else AssetFeedback = FText::GetEmpty();
}

#undef LOCTEXT_NAMESPACE
