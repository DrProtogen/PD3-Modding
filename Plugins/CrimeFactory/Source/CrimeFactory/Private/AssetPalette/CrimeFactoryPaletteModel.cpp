#include "AssetPalette/CrimeFactoryPaletteModel.h"

#include "AssetRegistry/IAssetRegistry.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "DragAndDrop/ClassDragDropOp.h"
#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Engine/Texture.h"
#include "Factories/AssetFactoryInterface.h"
#include "Materials/MaterialInterface.h"
#include "Subsystems/PlacementSubsystem.h"

#define LOCTEXT_NAMESPACE "CrimeFactoryAssetPalette"

bool FCrimeFactoryPaletteItem::MatchesSearch(const FString& Search) const
{
    return Search.IsEmpty() || Label.ToString().Contains(Search) || Path.ToString().Contains(Search);
}

FText FCrimeFactoryPaletteItem::GetTooltip() const
{
    return FText::Format(LOCTEXT("AssetTooltip", "{0}\nAsset: {1}\nType: {2}\n{3}{4}"),
        Label, FText::FromString(Path.GetAssetName()), TypeLabel, FText::FromString(Path.ToString()),
        Problem.IsEmpty() ? FText::GetEmpty() : FText::Format(LOCTEXT("ProblemTooltip", "\n{0}"), Problem));
}

FText CrimeFactoryPalette::CategoryLabel(const FCrimeFactoryPaletteCategory& Category, int32 Index)
{
    return Category.CategoryName.IsNone()
        ? FText::Format(LOCTEXT("UnnamedCategory", "Category {0}"), FText::AsNumber(Index + 1))
        : FText::FromName(Category.CategoryName);
}

FCrimeFactoryPaletteItem CrimeFactoryPalette::Resolve(const FCrimeFactoryPaletteAssetEntry& Entry, IAssetRegistry& Registry)
{
    FCrimeFactoryPaletteItem Item;
    Item.Entry = Entry;
    Item.bClassEntry = !Entry.ActorClass.IsNull();
    Item.Path = Item.bClassEntry ? Entry.ActorClass.ToSoftObjectPath() : Entry.Asset.ToSoftObjectPath();
    if (Item.Path.IsValid())
    {
        Item.Path.FixupCoreRedirects();
        Item.Path = Registry.GetRedirectedObjectPath(Item.Path);
    }
    FString DefaultName = Item.Path.GetAssetName();
    if (Item.bClassEntry) DefaultName.RemoveFromEnd(TEXT("_C"));
    const FString Override = Entry.DisplayName.TrimStartAndEnd();
    Item.Label = FText::FromString(Override.IsEmpty()
        ? (DefaultName.IsEmpty() ? LOCTEXT("Unassigned", "Unassigned asset").ToString() : DefaultName) : Override);
    Item.TypeLabel = Item.bClassEntry ? LOCTEXT("ActorClass", "Actor Class") : LOCTEXT("UnknownType", "Unknown type");
    if (!Entry.Asset.IsNull() && Item.bClassEntry)
        Item.Problem = LOCTEXT("AmbiguousEntry", "Select either Asset or Actor Class in Project Settings, not both.");
    else if (Item.Path.IsNull() || !Item.Path.IsValid())
        Item.Problem = LOCTEXT("InvalidReference", "No valid asset reference. Choose an asset in Project Settings.");
    else if (Item.bClassEntry)
    {
        // Class assets are not always registered (notably /Script native classes).
        // ResolveObject only finds already loaded objects; class loading is deferred to drag.
        if (UObject* Existing = Item.Path.ResolveObject()) Item.AssetData = FAssetData(Existing);
        else
        {
            FString BlueprintPath = Item.Path.ToString();
            if (BlueprintPath.RemoveFromEnd(TEXT("_C")))
                Item.AssetData = Registry.GetAssetByObjectPath(FSoftObjectPath(BlueprintPath));
            if (!Item.AssetData.IsValid() && !Item.Path.GetLongPackageName().StartsWith(TEXT("/Script/")))
                Item.Problem = LOCTEXT("MissingClass", "Actor class is missing or not yet indexed. Reselect it in Project Settings.");
        }
    }
    else
    {
        Item.AssetData = Registry.GetAssetByObjectPath(Item.Path);
        if (Item.AssetData.IsValid()) Item.TypeLabel = FText::FromName(Item.AssetData.AssetClassPath.GetAssetName());
        else Item.Problem = LOCTEXT("MissingAsset", "Asset is missing or not yet indexed. Reselect it in Project Settings.");
    }
    return Item;
}

TSharedPtr<FDragDropOperation> CrimeFactoryPalette::CreateDrag(const FCrimeFactoryPaletteItem& Item,
    IAssetRegistry& Registry, FText& Error)
{
    Error = FText::GetEmpty();
    const FCrimeFactoryPaletteItem Current = Resolve(Item.Entry, Registry);
    if (!Current.Problem.IsEmpty()) { Error = Current.Problem; return nullptr; }
    // Loading here is intentional: the user has started a placement operation.
    UObject* Object = Current.bClassEntry ? Current.Path.TryLoad() : Current.AssetData.GetAsset();
    if (!Object)
    {
        Error = LOCTEXT("LoadFailed", "The asset could not be loaded. Check its dependencies and the Output Log.");
        return nullptr;
    }
    UClass* ActorClass = Cast<UClass>(Object);
    if (UBlueprint* Blueprint = Cast<UBlueprint>(Object))
    {
        ActorClass = Blueprint->GeneratedClass;
        if (!ActorClass)
        {
            Error = LOCTEXT("NoGeneratedClass", "This Blueprint has no generated class. Compile it, or restore its valid cooked original.");
            return nullptr;
        }
    }
    if (ActorClass && (!ActorClass->IsChildOf(AActor::StaticClass())
        || ActorClass->HasAnyClassFlags(CLASS_Abstract | CLASS_NotPlaceable | CLASS_Deprecated | CLASS_NewerVersionExists)))
    {
        Error = LOCTEXT("NotPlaceable", "This class cannot be placed in a level. Choose a concrete, placeable Actor class.");
        return nullptr;
    }
    if (Cast<UClass>(Object)) return FClassDragDropOp::New(ActorClass);
    UPlacementSubsystem* Placement = GEditor ? GEditor->GetEditorSubsystem<UPlacementSubsystem>() : nullptr;
    if (Placement && Placement->FindAssetFactoryFromAssetData(Current.AssetData))
        return FAssetDragDropOp::New(Current.AssetData);
    // Native viewport handling also supports applying these to compatible existing actors.
    if (Object->IsA<UMaterialInterface>() || Object->IsA<UTexture>()) return FAssetDragDropOp::New(Current.AssetData);
    Error = LOCTEXT("UnsupportedAsset", "No registered editor placement factory supports this asset. Use Open/Edit, or choose a placeable asset.");
    return nullptr;
}

#undef LOCTEXT_NAMESPACE
