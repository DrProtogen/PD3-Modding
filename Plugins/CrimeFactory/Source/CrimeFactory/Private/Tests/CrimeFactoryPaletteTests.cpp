#if WITH_DEV_AUTOMATION_TESTS

#include "AssetPalette/CrimeFactoryAssetPalette.h"
#include "AssetPalette/CrimeFactoryPaletteModel.h"
#include "AssetPalette/SCrimeFactoryAssetPalette.h"
#include "CrimeFactoryPaletteSettings.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "DragAndDrop/ClassDragDropOp.h"
#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Curves/CurveFloat.h"
#include "Engine/StaticMeshActor.h"
#include "EngineUtils.h"
#include "Framework/Docking/TabManager.h"
#include "ISettingsContainer.h"
#include "ISettingsCategory.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "LevelEditor.h"
#include "LevelEditorViewport.h"
#include "Misc/AutomationTest.h"
#include "Misc/CommandLine.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/ScopeExit.h"
#include "SLevelViewport.h"
#include "UObject/UnrealType.h"
#include "Widgets/Docking/SDockTab.h"

namespace
{
    void Changed(UCrimeFactoryPaletteSettings* Settings)
    {
        FPropertyChangedEvent Event(FindFProperty<FProperty>(Settings->GetClass(), TEXT("Categories")));
        Settings->PostEditChangeProperty(Event);
    }

    FCrimeFactoryPaletteAssetEntry CubeEntry()
    {
        FCrimeFactoryPaletteAssetEntry Entry;
        Entry.Asset = TSoftObjectPtr<UObject>(FSoftObjectPath(TEXT("/Engine/BasicShapes/Cube.Cube")));
        return Entry;
    }

    TArray<FCrimeFactoryPaletteCategory> Fixture()
    {
        FCrimeFactoryPaletteCategory A, B;
        A.CategoryName = TEXT("Palette Regression A");
        B.CategoryName = TEXT("Palette Regression B");
        A.Assets.Add(CubeEntry());
        auto Duplicate = CubeEntry();
        Duplicate.DisplayName = TEXT("Second Cube");
        A.Assets.Add(Duplicate);
        FCrimeFactoryPaletteAssetEntry Missing;
        Missing.Asset = TSoftObjectPtr<UObject>(FSoftObjectPath(TEXT("/Game/CrimeFactoryPaletteMissing.Asset")));
        A.Assets.Add(Missing);
        return {A, B};
    }
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryPaletteConfigurationTest,
    "CrimeFactory.AssetPalette.ConfigurationAndLiveView",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryPaletteConfigurationTest::RunTest(const FString& Parameters)
{
    auto* Settings = GetMutableDefault<UCrimeFactoryPaletteSettings>();
    const auto Original = Settings->Categories;
    const bool bPersist = FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPalettePersistFixture"));
    ON_SCOPE_EXIT
    {
        Settings->Categories = bPersist ? Fixture() : Original;
        Changed(Settings);
        if (bPersist) TestTrue(TEXT("Save shared fixture for the next editor process"), Settings->TryUpdateDefaultConfigFile());
    };
    if (FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPaletteExpectFixture")))
    {
        TestEqual(TEXT("Categories survived an editor restart"), Original.Num(), 2);
        if (Original.Num() == 2)
        {
            TestEqual(TEXT("Restart retained category order"), Original[0].CategoryName, FName(TEXT("Palette Regression A")));
            TestEqual(TEXT("Restart retained asset order/count"), Original[0].Assets.Num(), 3);
            if (Original[0].Assets.Num() == 3)
                TestEqual(TEXT("Restart retained overrides and duplicates"), Original[0].Assets[1].DisplayName, FString(TEXT("Second Cube")));
        }
    }
    TestTrue(TEXT("Project source config, not per-user config"), Settings->GetClass()->HasAnyClassFlags(CLASS_DefaultConfig));
    TestEqual(TEXT("Shared source filename"), FPaths::GetCleanFilename(Settings->GetDefaultConfigFilename()), FString(TEXT("DefaultEditor.ini")));
    auto Container = FModuleManager::LoadModuleChecked<ISettingsModule>("Settings").GetContainer("Project");
    auto Category = Container ? Container->GetCategory("CrimeFactory") : nullptr;
    TestTrue(TEXT("Project Settings page registered"), Category && Category->GetSection("AssetPalette").IsValid());
    TestTrue(TEXT("Dockable palette spawner registered"), FGlobalTabmanager::Get()->HasTabSpawner(CrimeFactoryAssetPalette::TabName));
    Settings->Categories = Fixture();
    Changed(Settings);
    auto Tab = FGlobalTabmanager::Get()->TryInvokeTab(CrimeFactoryAssetPalette::TabName);
    if (!TestTrue(TEXT("Palette window opens"), Tab.IsValid())) return false;
    ON_SCOPE_EXIT { Tab->RequestCloseTab(); };
    TestTrue(TEXT("Palette uses the editor docking system"), Tab->GetTabRole() == ETabRole::NomadTab && Tab->GetParentDockTabStack().IsValid());
    TSharedPtr<SCrimeFactoryAssetPalette> View = StaticCastSharedRef<SCrimeFactoryAssetPalette>(Tab->GetContent());
    TestEqual(TEXT("Initial category"), View->GetSelectedCategory(), 0);
    TestEqual(TEXT("Duplicates and missing entries remain visible"), View->GetVisibleItems().Num(), 3);
    TestEqual(TEXT("Default asset label"), View->GetVisibleItems()[0]->Label.ToString(), FString(TEXT("Cube")));
    TestFalse(TEXT("Missing entry has actionable feedback"), View->GetVisibleItems()[2]->Problem.IsEmpty());
    View->SetSearchText(FText::FromString(TEXT("cUbE")));
    TestEqual(TEXT("Search matches names and is case-insensitive"), View->GetVisibleItems().Num(), 2);
    View->SetSearchText(FText::FromString(TEXT("no matches")));
    TestEqual(TEXT("No matches is safe"), View->GetVisibleItems().Num(), 0);
    View->SetSearchText(FText::GetEmpty());
    View->SelectCategory(1);
    TestEqual(TEXT("Empty category is selectable"), View->GetSelectedCategory(), 1);
    TestEqual(TEXT("Empty category has no rows"), View->GetVisibleItems().Num(), 0);
    Settings->Categories[1].Assets.Add(CubeEntry());
    Changed(Settings);
    TestEqual(TEXT("Adding an asset refreshes an open palette"), View->GetVisibleItems().Num(), 1);
    Settings->Categories.Swap(0, 1);
    Changed(Settings);
    TestEqual(TEXT("Reordering keeps the selected category"), View->GetSelectedCategory(), 0);
    Settings->Categories[0].CategoryName = TEXT("Renamed Category");
    Changed(Settings);
    TestEqual(TEXT("Renaming keeps the current position"), View->GetSelectedCategory(), 0);
    Settings->Categories[0].Assets.Add(CubeEntry());
    Settings->Categories[0].Assets[1].DisplayName = TEXT("First in order");
    Settings->Categories[0].Assets.Swap(0, 1);
    Changed(Settings);
    TestEqual(TEXT("Asset reordering updates the grid"), View->GetVisibleItems()[0]->Label.ToString(), FString(TEXT("First in order")));
    Settings->Categories.RemoveAt(0);
    Changed(Settings);
    TestEqual(TEXT("Removing the selected category selects a valid remaining category"), View->GetSelectedCategory(), 0);
    auto* RenamePackage = CreatePackage(*(TEXT("/Temp/CrimeFactoryPaletteRename_") + FGuid::NewGuid().ToString(EGuidFormats::Digits)));
    auto* Renamed = NewObject<UCurveFloat>(RenamePackage, TEXT("BeforeRename"), RF_Public | RF_Standalone);
    FAssetRegistryModule::AssetCreated(Renamed);
    bool bRenameRegistered = true;
    ON_SCOPE_EXIT
    {
        if (bRenameRegistered) FAssetRegistryModule::AssetDeleted(Renamed);
        Renamed->ClearFlags(RF_Standalone);
        RenamePackage->SetFlags(RF_Transient);
    };
    Settings->Categories = Fixture();
    Settings->Categories[0].Assets.Reset();
    FCrimeFactoryPaletteAssetEntry RenameEntry;
    RenameEntry.Asset = Renamed;
    Settings->Categories[0].Assets.Add(RenameEntry);
    Changed(Settings);
    View->SelectCategory(1); // Renames must also reach categories that are not currently displayed.
    for (const TCHAR* NewName : {TEXT("FirstRename"), TEXT("SecondRename")})
    {
        const FString OldPath = Renamed->GetPathName();
        Renamed->Rename(NewName, RenamePackage, REN_DontCreateRedirectors | REN_NonTransactional);
        FAssetRegistryModule::AssetRenamed(Renamed, OldPath);
    }
    View->SelectCategory(0);
    TestEqual(TEXT("Repeated renames in an inactive category resolve without loading redirectors"),
        View->GetVisibleItems()[0]->Path, FSoftObjectPath(Renamed));
    FAssetRegistryModule::AssetDeleted(Renamed);
    bRenameRegistered = false;
    // Asset deletion also removes the UObject from its former path; merely deleting
    // registry metadata leaves a live object discoverable by native registry queries.
    Renamed->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors | REN_NonTransactional);
    View->RefreshFromSettings();
    TestFalse(TEXT("Deleted reference becomes a visible warning"), View->GetVisibleItems()[0]->Problem.IsEmpty());
    Settings->Categories.Reset();
    Changed(Settings);
    TestEqual(TEXT("Removing all categories is safe"), View->GetSelectedCategory(), INDEX_NONE);
    TestEqual(TEXT("All entries removed"), View->GetVisibleItems().Num(), 0);
    View.Reset();
    CrimeFactoryAssetPalette::Unregister();
    TestFalse(TEXT("Shutdown removes the tab spawner"), FGlobalTabmanager::Get()->HasTabSpawner(CrimeFactoryAssetPalette::TabName));
    TestFalse(TEXT("Shutdown removes the settings page"), Category->GetSection("AssetPalette").IsValid());
    Changed(Settings); // No callbacks into a closed palette.
    CrimeFactoryAssetPalette::Register();
    auto Reopened = FGlobalTabmanager::Get()->TryInvokeTab(CrimeFactoryAssetPalette::TabName);
    TestTrue(TEXT("Palette can be registered and reopened"), Reopened.IsValid());
    if (Reopened) Reopened->RequestCloseTab();
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryPaletteDragTest,
    "CrimeFactory.AssetPalette.NativeDragAndViewportPlacement",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryPaletteDragTest::RunTest(const FString& Parameters)
{
    IAssetRegistry& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
    auto Mesh = CrimeFactoryPalette::Resolve(CubeEntry(), Registry);
    if (!TestTrue(TEXT("Engine mesh is indexed"), Mesh.AssetData.IsValid())) return false;
    const bool bWasLoaded = Mesh.AssetData.IsAssetLoaded();
    for (int32 Index = 0; Index < 1000; ++Index) CrimeFactoryPalette::Resolve(CubeEntry(), Registry);
    TestEqual(TEXT("Browsing metadata does not load the mesh"), Mesh.AssetData.IsAssetLoaded(), bWasLoaded);
    FText Error;
    auto MeshDrag = CrimeFactoryPalette::CreateDrag(Mesh, Registry, Error);
    if (!TestTrue(TEXT("Static mesh produces a native asset operation"), MeshDrag && MeshDrag->IsOfType<FAssetDragDropOp>())) return false;
    auto* MeshObject = Mesh.AssetData.GetAsset();
    const bool bMeshDirty = MeshObject->GetPackage()->IsDirty();
    TestEqual(TEXT("Native operation carries the original asset"), StaticCastSharedPtr<FAssetDragDropOp>(MeshDrag)->GetAssets()[0].GetSoftObjectPath(), Mesh.Path);
    FCrimeFactoryPaletteAssetEntry NativeEntry;
    NativeEntry.ActorClass = AStaticMeshActor::StaticClass();
    auto NativeDrag = CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(NativeEntry, Registry), Registry, Error);
    TestTrue(TEXT("Native actor class uses native class drag"), NativeDrag && NativeDrag->IsOfType<FClassDragDropOp>());
    NativeEntry.ActorClass = TSoftClassPtr<AActor>(FSoftObjectPath(UObject::StaticClass()));
    TestFalse(TEXT("Non-actor class is rejected"), CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(NativeEntry, Registry), Registry, Error).IsValid());
    TestFalse(TEXT("Rejected class has feedback"), Error.IsEmpty());
    auto Package = CreatePackage(*(TEXT("/Temp/CrimeFactoryPaletteTest_") + FGuid::NewGuid().ToString(EGuidFormats::Digits)));
    UBlueprint* Blueprint = FKismetEditorUtilities::CreateBlueprint(AActor::StaticClass(), Package, TEXT("PaletteActor"),
        BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
    if (!TestNotNull(TEXT("Temporary actor Blueprint"), Blueprint)) return false;
    FAssetRegistryModule::AssetCreated(Blueprint);
    auto* Unsupported = NewObject<UCurveFloat>(Package, TEXT("NotPlaceable"), RF_Public | RF_Standalone);
    FAssetRegistryModule::AssetCreated(Unsupported);
    ON_SCOPE_EXIT
    {
        FAssetRegistryModule::AssetDeleted(Blueprint);
        FAssetRegistryModule::AssetDeleted(Unsupported);
        Blueprint->ClearFlags(RF_Standalone);
        Unsupported->ClearFlags(RF_Standalone);
        Package->SetFlags(RF_Transient);
    };
    FCrimeFactoryPaletteAssetEntry BlueprintEntry;
    BlueprintEntry.Asset = Blueprint;
    auto BlueprintDrag = CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(BlueprintEntry, Registry), Registry, Error);
    if (!TestTrue(TEXT("Actor Blueprint produces native asset drag"), BlueprintDrag && BlueprintDrag->IsOfType<FAssetDragDropOp>())) return false;
    FCrimeFactoryPaletteAssetEntry Invalid;
    Invalid.Asset = Unsupported;
    TestFalse(TEXT("Unsupported type is rejected"), CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(Invalid, Registry), Registry, Error).IsValid());
    TestFalse(TEXT("Unsupported type has feedback"), Error.IsEmpty());
    Invalid.Asset.Reset();
    TestFalse(TEXT("Empty reference is rejected"), CrimeFactoryPalette::CreateDrag(CrimeFactoryPalette::Resolve(Invalid, Registry), Registry, Error).IsValid());
    if (!FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPaletteViewportTest")))
    {
        AddInfo(TEXT("Native drag operations tested. Run the validation script in an isolated editor to exercise viewport drop and undo/redo."));
        return true;
    }
    auto Viewport = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor").GetFirstActiveLevelViewport();
    if (!TestTrue(TEXT("Level viewport is available"), Viewport.IsValid())) return false;
    TSharedRef<SWidget> Target = Viewport.ToSharedRef();
    const FGeometry Geometry = Target->GetTickSpaceGeometry();
    if (!TestTrue(TEXT("Viewport has usable geometry"), Geometry.GetLocalSize().X > 10 && Geometry.GetLocalSize().Y > 10)) return false;
    UWorld* World = Viewport->GetLevelViewportClient().GetWorld();
    const bool bWorldDirty = World->GetPackage()->IsDirty();
    ON_SCOPE_EXIT { World->GetPackage()->SetDirtyFlag(bWorldDirty); };
    const FVector2D Position = Geometry.LocalToAbsolute(Geometry.GetLocalSize() * 0.5f);
    TSet<FKey> Buttons{EKeys::LeftMouseButton};
    const FPointerEvent Pointer(0, Position, Position, Buttons, EKeys::LeftMouseButton, 0.0f, FModifierKeysState());
    for (const auto& Drag : {MeshDrag, BlueprintDrag})
    {
        const FDragDropEvent Event(Pointer, Drag.ToSharedRef());
        Target->OnDragEnter(Geometry, Event);
        TSet<AActor*> Previous;
        for (TActorIterator<AActor> Actor(World); Actor; ++Actor) Previous.Add(*Actor);
        const FReply Reply = Target->OnDrop(Geometry, Event);
        TestTrue(TEXT("Native viewport accepted the drop"), Reply.IsEventHandled());
        AActor* Placed = nullptr;
        for (TActorIterator<AActor> Actor(World); Actor; ++Actor)
            if (!Previous.Contains(*Actor) && IsValid(*Actor) && !Actor->IsActorBeingDestroyed()
                && !Actor->HasAnyFlags(RF_Transient)) { Placed = *Actor; break; }
        if (!TestNotNull(TEXT("Native viewport placed an actor"), Placed)) return false;
        TestTrue(TEXT("Native placement transaction can be undone"), GEditor->UndoTransaction());
        TestFalse(TEXT("Undo removes the actor from its level"), World->GetCurrentLevel()->Actors.Contains(Placed));
        TestTrue(TEXT("Native placement transaction can be redone"), GEditor->RedoTransaction());
        TestTrue(TEXT("Redo restores the actor"), World->GetCurrentLevel()->Actors.Contains(Placed));
        GEditor->SelectActor(Placed, false, true);
        World->EditorDestroyActor(Placed, true);
    }
    TestEqual(TEXT("Placement leaves the original mesh package unchanged"), MeshObject->GetPackage()->IsDirty(), bMeshDirty);
    return true;
}

#endif
