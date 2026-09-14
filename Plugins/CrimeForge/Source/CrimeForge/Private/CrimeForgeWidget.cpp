#include "CrimeForgeWidget.h"
#include "CrimeForgeModEntryList.h"
#include "ISettingsModule.h"
#include "Modules/ModuleManager.h"
#include "Styling/AppStyle.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"

#define LOCTEXT_NAMESPACE "CrimeForgeWidget"

void SCrimeForgeWidget::Construct(const FArguments& InArgs)
{
    ChildSlot
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(0.0f, 2.0f, 0.0f, 0.0f)
        [
            SNew(SBorder)
            .Padding(FMargin(6.0f, 3.0f))
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .FillWidth(1.0f)
                .VAlign(VAlign_Center)
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("ModsSectionHeader", "Mods"))
                    .Font(FCoreStyle::GetDefaultFontStyle(TEXT("Bold"), 9))
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .VAlign(VAlign_Center)
                [
                    SNew(SButton)
                    .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                    .ContentPadding(FMargin(6.0f, 2.0f))
                    .ToolTipText(LOCTEXT("OpenCrimeForgeSettingsTooltip", "Open Project Settings to CrimeForge settings."))
                    .OnClicked_Lambda([]()
                    {
                        FModuleManager::LoadModuleChecked<ISettingsModule>(TEXT("Settings"))
                            .ShowViewer(TEXT("Project"), TEXT("Plugins"), TEXT("CrimeForge"));
                        return FReply::Handled();
                    })
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        .Padding(FMargin(0.0f, 0.0f, 4.0f, 0.0f))
                        [
                            SNew(SImage)
                            .Image(FAppStyle::Get().GetBrush("Icons.Settings"))
                        ]
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        [
                            SNew(STextBlock)
                            .Text(LOCTEXT("OpenCrimeForgeSettings", "Settings"))
                        ]
                    ]
                ]
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(5.0f, 4.0f, 5.0f, 3.0f))
        [
            SNew(SEditableTextBox)
            .HintText(LOCTEXT("SearchHint", "Search Mods..."))
            .OnTextChanged_Lambda([this](const FText& InText)
            {
                this->ModList->Filter(InText.ToString());
            })
        ]
        + SVerticalBox::Slot()
        .FillHeight(1.0f)
        .Padding(FMargin(5.0f, 2.0f, 5.0f, 5.0f))
        [
            SAssignNew(ModList, SCrimeForgeModEntryList)
        ]
    ];
}

#undef LOCTEXT_NAMESPACE
