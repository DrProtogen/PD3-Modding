#include "CrimeForgeWidget.h"
#include "CrimeForge.h"
#include "CrimeForgeModEntryList.h"
#include "CrimeForgeSettings.h"
#include "DesktopPlatformModule.h"

#define LOCTEXT_NAMESPACE "CrimeForgeWidget"

void SCrimeForgeWidget::Construct(const FArguments& InArgs) {
    FDetailsViewArgs DetailsViewArgs;
    DetailsViewArgs.bAllowSearch = true;
    DetailsViewArgs.bHideSelectionTip = true;
    DetailsViewArgs.bLockable = false;
    DetailsViewArgs.bSearchInitialKeyFocus = true;
    DetailsViewArgs.bUpdatesFromSelection = false;
    DetailsViewArgs.bShowOptions = true;
    DetailsViewArgs.bShowModifiedPropertiesOption = true;
    DetailsViewArgs.bShowObjectLabel = false;
    DetailsViewArgs.bCustomNameAreaLocation = true;
    DetailsViewArgs.bCustomFilterAreaLocation = true;
    DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
    DetailsViewArgs.bAllowMultipleTopLevelObjects = true;
    DetailsViewArgs.bShowScrollBar = false;

    FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));
    DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
    DetailsView->SetObject(UCrimeForgeSettings::Get());
    DetailsView->OnFinishedChangingProperties().AddLambda([this](const FPropertyChangedEvent&) {
        UCrimeForgeSettings::Get()->SaveSettings();
    });
    
    ChildSlot[
        SNew(SVerticalBox)
        +SVerticalBox::Slot().AutoHeight()[
            DetailsView.ToSharedRef()
        ]
        +SVerticalBox::Slot().AutoHeight()[
            SNew(SHorizontalBox)
            +SHorizontalBox::Slot().FillWidth(1)[
                SNew(SEditableTextBox)
                .HintText(LOCTEXT("SearchHint", "Search Plugin..."))
                .OnTextChanged_Lambda([this](const FText& InText) {
                    this->ModList->Filter(InText.ToString());
                })
            ]
            +SHorizontalBox::Slot().AutoWidth()[
                SNew(SSpacer)
                .Size(FVector2D(20.0f, 10.0f))
            ]
            +SHorizontalBox::Slot().AutoWidth()[
                SNew(SCheckBox)
                .Content()[
                    SNew(STextBlock)
                    .Text(LOCTEXT("ShowEnginePlugins", "Show Engine Plugins"))
                ]
                .OnCheckStateChanged_Lambda([this](ECheckBoxState InState) {
                    this->ModList->SetShowEngine(InState == ECheckBoxState::Checked);
                })
            ]
            +SHorizontalBox::Slot().AutoWidth()[
                SNew(SSpacer)
                .Size(FVector2D(10.0f, 10.0f))
            ]
            +SHorizontalBox::Slot().AutoWidth()[
              SNew(SCheckBox)
              .Content()[
                  SNew(STextBlock)
                  .Text(LOCTEXT("ShowProjectPlugins", "Show Project Plugins"))
              ]
              .OnCheckStateChanged_Lambda([this](ECheckBoxState InState) {
                  this->ModList->SetShowProject(InState == ECheckBoxState::Checked);
              })
          ]
        ]
        +SVerticalBox::Slot().FillHeight(1).Padding(3)[
            SAssignNew(ModList, SCrimeForgeModEntryList)
        ]
    ];
}

#undef LOCTEXT_NAMESPACE
