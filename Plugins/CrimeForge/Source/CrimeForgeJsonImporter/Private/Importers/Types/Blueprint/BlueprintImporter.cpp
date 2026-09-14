

#include "Importers/Types/Blueprint/BlueprintImporter.h"

#include "KismetCompilerModule.h"
#include "MovieScene.h"
#include "WidgetBlueprint.h"
#include "Animation/MovieScene2DTransformTrack.h"
#include "Animation/MovieSceneWidgetMaterialTrack.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/Log.h"
#include "UObject/UnrealType.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"

#include "Engine/SCS_Node.h"
#include "Importers/Types/Blueprint/BlueprintUtilities.h"
#include "Importers/Types/Blueprint/BlueprintVariables.h"
#include "Importers/Types/Blueprint/Graph/BlueprintGraphReconstructor.h"
#include "Importers/Types/Blueprint/Graph/CrimeForgeBlueprintAutoFormatter.h"
#include "Importers/Constructor/Asset.h"
#include "Importers/Constructor/ImportReader.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"

namespace {
	struct FBlueprintDependencyReference {
		FString PackagePath;
		FString ObjectPath;
		FString ClassType;
	};

	struct FBlueprintDependencyImportState {
		int32 Depth = 0;
		int32 SignatureOnlyDepth = 0;
		TSet<FString> ActivePackages;
		TSet<FString> ImportedPackages;
	};

	FBlueprintDependencyImportState GBlueprintDependencyImportState;

	class FBlueprintDependencySignatureOnlyScope {
	public:
		FBlueprintDependencySignatureOnlyScope() { ++GBlueprintDependencyImportState.SignatureOnlyDepth; }
		~FBlueprintDependencySignatureOnlyScope() { --GBlueprintDependencyImportState.SignatureOnlyDepth; }
	};

	bool IsDependencySignatureOnlyImport() {
		return GBlueprintDependencyImportState.SignatureOnlyDepth > 0;
	}

	FString StripExportIndexOrObjectName(const FString& InObjectPath) {
		FString Path = InObjectPath;
		if (Path.IsEmpty()) return Path;

		int32 DotIndex = INDEX_NONE;
		if (!Path.FindLastChar(TEXT('.'), DotIndex) || DotIndex == INDEX_NONE) return Path;

		const FString Suffix = Path.Mid(DotIndex + 1);
		bool bNumericSuffix = !Suffix.IsEmpty();
		for (const TCHAR Char : Suffix) {
			if (!FChar::IsDigit(Char)) {
				bNumericSuffix = false;
				break;
			}
		}

		/* FModel object references often end in an export index (Asset.22). A normal UObject path
		 * ends in the object name (Asset.Asset_C). Either way the package is the text before the
		 * final dot. */
		if (bNumericSuffix || Suffix.EndsWith(TEXT("_C"))) {
			return Path.Left(DotIndex);
		}

		return Path;
	}

	FString ExtractQuotedValue(const FString& In) {
		int32 FirstQuote = INDEX_NONE;
		int32 LastQuote = INDEX_NONE;
		if (!In.FindChar(TEXT('\''), FirstQuote) || !In.FindLastChar(TEXT('\''), LastQuote) || LastQuote <= FirstQuote) {
			return FString();
		}
		return In.Mid(FirstQuote + 1, LastQuote - FirstQuote - 1);
	}

	bool IsBlueprintGeneratedClassType(const FString& In) {
		/* Keep this prepass to ordinary Blueprints/Widget Blueprints. Animation Blueprint generated
		 * classes have a separate importer and should not be forced through IBlueprintImporter. */
		return In.StartsWith(TEXT("WidgetBlueprintGeneratedClass")) ||
			In.StartsWith(TEXT("BlueprintGeneratedClass"));
	}

	void AddBlueprintDependency(
		TMap<FString, FBlueprintDependencyReference>& OutDependencies,
		const FString& ClassType,
		const FString& ObjectNameText,
		const FString& ObjectPathText,
		const FString& CurrentPackage)
	{
		if (!IsBlueprintGeneratedClassType(ClassType) && !IsBlueprintGeneratedClassType(ObjectNameText)) return;
		if (ObjectPathText.IsEmpty()) return;

		FString PackagePath = StripExportIndexOrObjectName(ObjectPathText);
		if (!PackagePath.StartsWith(TEXT("/Game/")) && !PackagePath.StartsWith(TEXT("/Plugins/"))) {
			/* Plugin content normally appears as /PluginName/... rather than /Plugins/... in editor
			 * package paths, so accept any non-native root except Engine/Script. */
			if (!PackagePath.StartsWith(TEXT("/")) || PackagePath.StartsWith(TEXT("/Engine/")) || PackagePath.StartsWith(TEXT("/Script/"))) {
				return;
			}
		}

		if (PackagePath == CurrentPackage) return;

		FString GeneratedClassName = ExtractQuotedValue(ObjectNameText);
		if (GeneratedClassName.Contains(TEXT("/"))) {
			/* A full class path was encoded in ObjectName rather than just WBP_Foo_C. */
			GeneratedClassName.Split(TEXT("."), nullptr, &GeneratedClassName, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		}
		if (GeneratedClassName.IsEmpty()) {
			FString AssetName;
			PackagePath.Split(TEXT("/"), nullptr, &AssetName, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
			GeneratedClassName = AssetName + TEXT("_C");
		}

		FBlueprintDependencyReference Ref;
		Ref.PackagePath = PackagePath;
		Ref.ObjectPath = PackagePath + TEXT(".") + GeneratedClassName;
		Ref.ClassType = ClassType.Contains(TEXT("WidgetBlueprintGeneratedClass")) || ObjectNameText.Contains(TEXT("WidgetBlueprintGeneratedClass"))
			? TEXT("WidgetBlueprintGeneratedClass")
			: TEXT("BlueprintGeneratedClass");

		OutDependencies.FindOrAdd(PackagePath) = Ref;
	}

	void CollectBlueprintDependenciesFromValue(
		const TSharedPtr<FJsonValue>& Value,
		TMap<FString, FBlueprintDependencyReference>& OutDependencies,
		const FString& CurrentPackage)
	{
		if (!Value.IsValid()) return;

		if (Value->Type == EJson::Object) {
			const TSharedPtr<FJsonObject> Object = Value->AsObject();
			if (!Object.IsValid()) return;

			FString ObjectName;
			FString ObjectPath;
			Object->TryGetStringField(TEXT("ObjectName"), ObjectName);
			Object->TryGetStringField(TEXT("ObjectPath"), ObjectPath);
			if (!ObjectName.IsEmpty() && !ObjectPath.IsEmpty() && IsBlueprintGeneratedClassType(ObjectName)) {
				FString ClassType;
				ObjectName.Split(TEXT("'"), &ClassType, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromStart);
				AddBlueprintDependency(OutDependencies, ClassType, ObjectName, ObjectPath, CurrentPackage);
			}

			for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : Object->Values) {
				const TSharedPtr<FJsonValue>& Child = Pair.Value;
				if (Child.IsValid() && Child->Type == EJson::String) {
					const FString StringValue = Child->AsString();
					if (IsBlueprintGeneratedClassType(StringValue)) {
						const FString FullReference = ExtractQuotedValue(StringValue);
						FString ClassType;
						StringValue.Split(TEXT("'"), &ClassType, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromStart);
						if (!FullReference.IsEmpty()) {
							AddBlueprintDependency(OutDependencies, ClassType, StringValue, FullReference, CurrentPackage);
						}
					}
				}
				CollectBlueprintDependenciesFromValue(Child, OutDependencies, CurrentPackage);
			}
		}
		else if (Value->Type == EJson::Array) {
			for (const TSharedPtr<FJsonValue>& Child : Value->AsArray()) {
				CollectBlueprintDependenciesFromValue(Child, OutDependencies, CurrentPackage);
			}
		}
	}

	class FBlueprintDependencyTreeScope {
	public:
		explicit FBlueprintDependencyTreeScope(const FString& InPackagePath)
			: PackagePath(InPackagePath)
			, bRoot(GBlueprintDependencyImportState.Depth == 0)
		{
			if (bRoot) {
				GBlueprintDependencyImportState.ActivePackages.Reset();
				GBlueprintDependencyImportState.ImportedPackages.Reset();
			}
			++GBlueprintDependencyImportState.Depth;
			if (!PackagePath.IsEmpty()) {
				GBlueprintDependencyImportState.ActivePackages.Add(PackagePath);
			}
		}

		~FBlueprintDependencyTreeScope() {
			if (!PackagePath.IsEmpty()) {
				GBlueprintDependencyImportState.ActivePackages.Remove(PackagePath);
			}
			--GBlueprintDependencyImportState.Depth;
			if (GBlueprintDependencyImportState.Depth == 0) {
				GBlueprintDependencyImportState.ActivePackages.Reset();
				GBlueprintDependencyImportState.ImportedPackages.Reset();
			}
		}

	private:
		FString PackagePath;
		bool bRoot;
	};

	int32 ImportBlueprintDependenciesFirst(FUObjectExportContainer* Container, const FString& CurrentPackage) {
		if (!Container) return 0;

		TMap<FString, FBlueprintDependencyReference> Dependencies;
		for (const TSharedPtr<FJsonValue>& RootValue : Container->JsonObjects) {
			CollectBlueprintDependenciesFromValue(RootValue, Dependencies, CurrentPackage);
		}

		TArray<FString> DependencyPackages;
		Dependencies.GetKeys(DependencyPackages);
		DependencyPackages.Sort();

		int32 ImportedCount = 0;
		for (const FString& PackagePath : DependencyPackages) {
			if (GBlueprintDependencyImportState.ActivePackages.Contains(PackagePath)) {
				UE_LOG(LogCrimeForgeJsonImporter, Verbose,
					TEXT("Blueprint dependency prepass: cycle/in-flight dependency %s skipped while importing %s"),
					*PackagePath, *CurrentPackage);
				continue;
			}
			if (GBlueprintDependencyImportState.ImportedPackages.Contains(PackagePath)) continue;

			const FBlueprintDependencyReference* Ref = Dependencies.Find(PackagePath);
			if (!Ref) continue;

			UE_LOG(LogCrimeForgeJsonImporter, Display,
				TEXT("Blueprint dependency prepass: importing %s before %s"),
				*Ref->ObjectPath, *CurrentPackage);

			/* Do not use FAssetUtilities::ConstructAsset here. That path is deliberately
			 * blocked for BlueprintGeneratedClass/WidgetBlueprintGeneratedClass in
			 * ImportTypes::Backend::Blacklisted, because it is intended for incidental
			 * property-reference imports. The dependency prepass, however, is an
			 * explicit Blueprint import and should use the same asset backend -> raw exports ->
			 * ReadExportsAndImport path as the Import From Path tool. */
			bool bImportSuccess = false;
			if (!AssetBackend::Status::IsOpened()) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Blueprint dependency prepass: the embedded PAYDAY 3 backend is not available; cannot fetch %s before %s"),
					*PackagePath, *CurrentPackage);
			} else {
				const TSharedPtr<FJsonObject> Response = AssetBackend::Export::GetRawBlocking(PackagePath);
				if (!Response.IsValid() || !Response->HasField(TEXT("exports"))) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Blueprint dependency prepass: AssetReader returned no exports for %s before %s"),
						*PackagePath, *CurrentPackage);
				} else {
					const TArray<TSharedPtr<FJsonValue>> Exports = Response->GetArrayField(TEXT("exports"));
					if (Exports.Num() == 0) {
						UE_LOG(LogCrimeForgeJsonImporter, Warning,
							TEXT("Blueprint dependency prepass: AssetReader returned an empty export list for %s before %s"),
							*PackagePath, *CurrentPackage);
					} else {
						IImporter* DependencyImporter = nullptr;
						// Dependencies only need their asset/class + callable/event declarations at this stage.
						// Building arbitrary dependency bodies here can recurse through compiler-temp expression
						// graphs before the complete dependency skeleton set exists. Keep the recursive prepass
						// declaration-only; the root Blueprint performs the normal full body pass afterwards.
						const FBlueprintDependencySignatureOnlyScope SignatureOnlyScope;
						bImportSuccess = IImportReader::ReadExportsAndImport(
							Exports, PackagePath, DependencyImporter, true, false) && DependencyImporter != nullptr;
					}
				}
			}

			if (bImportSuccess) {
				GBlueprintDependencyImportState.ImportedPackages.Add(PackagePath);
				++ImportedCount;
				UE_LOG(LogCrimeForgeJsonImporter, Display,
					TEXT("Blueprint dependency prepass: ready %s before %s"),
					*PackagePath, *CurrentPackage);
			} else {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Blueprint dependency prepass: could not import %s before %s"),
					*Ref->ObjectPath, *CurrentPackage);
			}
		}

		return ImportedCount;
	}
}

UObject* IBlueprintImporter::CreateAsset(UObject* CreatedAsset) {
	UClass* Class = GetAssetClass();
	
	if (!Class) {
		AppendNotification(
			FText::FromString("Failed to Resolve Parent Class"),
			FText::FromString("The Blueprint's parent class could not be found or loaded. Verify that the class is defined and available when importing."),
			2.0f,
			SNotificationItem::CS_Fail,
			true,
			350.0f
		);
		
		return nullptr;
	}
	
	/* Find the blueprint class and generated class */
	UClass* BlueprintClass = nullptr, *GeneratedClass = nullptr;
	
	FModuleManager::LoadModuleChecked<IKismetCompilerInterface>
		("KismetCompiler")
			.GetBlueprintTypesForClass(
				Class,
				BlueprintClass,
				GeneratedClass
			);

	/* Propagate blueprint defaults if it already exists */
	if (const UBlueprint* ExistingBlueprint = LoadObject<UBlueprint>(nullptr, *GetPackage()->GetPathName())) {
		UBlueprintGeneratedClass* BlueprintGeneratedClass = Cast<UBlueprintGeneratedClass>(ExistingBlueprint->GeneratedClass);
		FBlueprintEditorUtils::PropagateParentBlueprintDefaults(BlueprintGeneratedClass);

		/* Return GeneratedClass instead of UBlueprint* */
		return IImporter::CreateAsset(BlueprintGeneratedClass);
	}

	const UBlueprint* CreatedBlueprint = FKismetEditorUtilities::CreateBlueprint(
		Class,
		GetPackage(),
		FName(*GetAssetName()),
		GetBlueprintType(Class),
		BlueprintClass,
		GeneratedClass
	);

	if (!CreatedBlueprint) return nullptr;

	/* Return GeneratedClass instead of UBlueprint* */
	return IImporter::CreateAsset(CreatedBlueprint->GeneratedClass);
}

bool IBlueprintImporter::Import() {
	const FString CurrentPackage = GetPackage() ? GetPackage()->GetName() : FString();
	const FBlueprintDependencyTreeScope DependencyTreeScope(CurrentPackage);
	if (GetSettings()->bImportBlueprintDependenciesBeforeGraphs) {
		const int32 DependencyCount = ImportBlueprintDependenciesFirst(GetContainer(), CurrentPackage);
		if (DependencyCount > 0) {
			UE_LOG(LogCrimeForgeJsonImporter, Display,
				TEXT("Blueprint dependency prepass: %s prepared %d Blueprint dependenc%s before its own reconstruction"),
				*CurrentPackage, DependencyCount, DependencyCount == 1 ? TEXT("y") : TEXT("ies"));
		}
	}

	const UBlueprintGeneratedClass* BlueprintGeneratedClass = Create<UBlueprintGeneratedClass>();
	if (!BlueprintGeneratedClass) return false;

	/* Update Blueprint Reference for sub functions */
	Blueprint = UBlueprint::GetBlueprintFromClass(BlueprintGeneratedClass);
	if (!Blueprint) return false;

	/* Deserialize Generated Class (blueprint defaults) */
	UBlueprintGeneratedClass* GeneratedClass = Cast<UBlueprintGeneratedClass>(Blueprint->GeneratedClass);
	FUObjectExport* ClassDefaultObjectExport = GetClassDefaultObject(GetContainer(), GetAssetDataAsValue());

	/* A blueprint with no class default object export has nothing to deserialize defaults from,
	 * and writing to what the lookup handed back would land on the shared empty export */
	if (ClassDefaultObjectExport->IsJsonInvalid()) return false;

	ClassDefaultObjectExport->Object = GeneratedClass;

	/* The variables have to exist before their defaults can land anywhere. A recreated blueprint
	 * only has what its parent class gave it, so any property the blueprint declared itself is
	 * missing, and deserializing the class default object over it would drop those values on the
	 * floor without complaining. */
	if (ConstructVariables() > 0) {
		/* Adding a variable only touches the blueprint, the generated class grows the property
		 * when it recompiles, and the default object below is the one that comes out of that */
		FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipGarbageCollection);

		GeneratedClass = Cast<UBlueprintGeneratedClass>(Blueprint->GeneratedClass);
		if (!GeneratedClass) return false;

		ClassDefaultObjectExport->Object = GeneratedClass;
	}

	GetObjectSerializer()->DeserializeObjectProperties(ClassDefaultObjectExport->GetProperties(), GeneratedClass->GetDefaultObject());

	/* Experimental (for now) spawning */
	GetObjectSerializer()->bUseExperimentalSpawning = true;

	ConstructScript();
	ConstructWidgetTree();

	/* FModel already exports structured Kismet ScriptBytecode for Blueprint functions. Rebuild the
	 * editable K2 function graphs after the component/widget tree exists so widget variables and
	 * referenced generated classes are available to variable/function node resolution. */
	ConstructBlueprintGraphs();

	const bool bCreated = OnAssetCreation(Blueprint);
	if (bCreated && GetSettings()->bAutoFormatBlueprintGraphs && !IsDependencySignatureOnlyImport()) {
		FCrimeForgeBlueprintAutoFormatter::Enqueue(Blueprint, GetSettings()->bSaveImportedAssets);
	}

	return bCreated;
}

void IBlueprintImporter::ConstructBlueprintGraphs() {
	// Global two-pass reconstruction. Every callable/event signature must exist in the skeleton class
	// before any bytecode body is decompiled; otherwise Create Event / Bind Event nodes can only see a
	// partially-built Blueprint and either clear their callback or collide with a temporary function graph.
	const int32 DeclaredFunctions = FBlueprintGraphReconstructor::DeclareFunctions(Blueprint, GetContainer());
	const int32 DeclaredEvents = FBlueprintGraphReconstructor::DeclareEventGraph(Blueprint, GetContainer());

	if (DeclaredFunctions > 0 || DeclaredEvents > 0) {
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
		FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipGarbageCollection);
	}

	if (IsDependencySignatureOnlyImport()) {
		UE_LOG(LogCrimeForgeJsonImporter, Display,
			TEXT("Blueprint dependency prepass: %s declaration-only graph pass complete (functions=%d events=%d); bodies deferred while preparing root dependencies"),
			*Blueprint->GetName(), DeclaredFunctions, DeclaredEvents);
		return;
	}

	const int32 BuiltFunctions = FBlueprintGraphReconstructor::BuildFunctionBodies(Blueprint, GetContainer());
	const int32 BuiltEvents = FBlueprintGraphReconstructor::BuildEventGraphBodies(Blueprint, GetContainer());
	if (BuiltFunctions > 0 || BuiltEvents > 0) {
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}

	UE_LOG(LogCrimeForgeJsonImporter, Display,
		TEXT("Blueprint graph reconstruction: %s declaration pass functions=%d events=%d; body pass functions=%d events=%d"),
		*Blueprint->GetName(), DeclaredFunctions, DeclaredEvents, BuiltFunctions, BuiltEvents);
}

int32 IBlueprintImporter::ConstructVariables() {
	const TArray<TSharedPtr<FJsonValue>>* ChildProperties;

	/* A blueprint that declared nothing of its own has no ChildProperties at all */
	if (!GetAssetExport()->TryGetArrayField(TEXT("ChildProperties"), ChildProperties)) {
		return 0;
	}

	return FBlueprintVariables::Construct(Blueprint, *ChildProperties);
}

void IBlueprintImporter::ConstructScript() const {
	if (!GetAssetDataAsValue().Has("SimpleConstructionScript")) return;
	
	UBlueprintGeneratedClass* GeneratedClass = Cast<UBlueprintGeneratedClass>(Blueprint->GeneratedClass);

	/* Destroy Construction Script */
	if (USimpleConstructionScript* PreviousSimpleConstructionScript = GeneratedClass->SimpleConstructionScript; PreviousSimpleConstructionScript != nullptr) {
		for (USCS_Node* Node : PreviousSimpleConstructionScript->GetAllNodes()) {
			MoveToTransientPackageAndRename(Node->ComponentTemplate);
		}
		
		MoveToTransientPackagesAndRename({
			PreviousSimpleConstructionScript,
			Blueprint->SimpleConstructionScript
		});
	}

	FUObjectExport* Export = GetContainer()->GetExportByObjectPath(GetAssetDataAsValue().GetObject("SimpleConstructionScript"));

	/* Spawn the new Construction Script */
	USimpleConstructionScript* SimpleConstructionScript =
		Cast<USimpleConstructionScript>(
			GetObjectSerializer()->SpawnExport(Export)
		);

	/* Update SimpleConstructionScript on the Blueprint */
	Blueprint->SimpleConstructionScript = SimpleConstructionScript;
	GeneratedClass->SimpleConstructionScript = SimpleConstructionScript;

	/* Engine Ensures */
	SimpleConstructionScript->FixupRootNodeParentReferences();
	SimpleConstructionScript->ValidateSceneRootNodes();
}

class UWidgetTreeAccessor final : public UWidgetTree {
public:

#if ENGINE_UE5
	TArray<TObjectPtr<UWidget>> GetWidgets() {
#else
	TArray<UWidget*> GetWidgets() {
#endif
		return AllWidgets;
	}
};

/**
 * Rebuild the named-slot relationships exported on child UUserWidget instances.
 *
 * FModel/UEParse exports these relationships through UUserWidget::NamedSlotBindings, e.g.:
 *
 *   ContentPanel
 *     NamedSlotBindings:
 *       Main     -> Main_O
 *       TopPanel -> Top_O
 *
 * The generic property deserializer can restore the backing array, but that is not sufficient for
 * reconstructed WidgetBlueprints: the content widgets may not have been reachable/spawned yet and
 * UMG's designer/compiler expects the relationship to have gone through the named-slot interface.
 * The result is an apparently empty named slot and orphaned widgets/animation bindings.
 *
 * Resolve each exported binding against the reconstructed export container and apply it through
 * UUserWidget::SetContentForSlot. The pass is iterative because attaching one named-slot subtree can
 * expose another UUserWidget with named-slot bindings of its own.
 */
static int32 ReconstructNamedSlotBindings(
	UWidgetBlueprint* WidgetBlueprint,
	FUObjectExportContainer* Container,
	UObjectSerializer* ObjectSerializer) {
	if (!WidgetBlueprint || !WidgetBlueprint->WidgetTree || !Container || !ObjectSerializer) {
		return 0;
	}

	int32 TotalBindingsApplied = 0;
	TSet<FString> ProcessedBindings;

	// Each successful pass can only make more of the tree reachable. The processed-key set makes
	// this terminate naturally; the pass cap is only a guard against malformed/cyclic exported data.
	for (int32 Pass = 0; Pass < 64; ++Pass) {
		TArray<UWidget*> Widgets;
		WidgetBlueprint->WidgetTree->GetAllWidgets(Widgets);

		int32 BindingsAppliedThisPass = 0;

		for (UWidget* Widget : Widgets) {
			UUserWidget* UserWidget = Cast<UUserWidget>(Widget);
			if (!UserWidget) {
				continue;
			}

			FUObjectExport* WidgetExport = Container->Find(UserWidget->GetFName());
			if (!WidgetExport || WidgetExport->IsJsonInvalid() || !WidgetExport->Has(TEXT("Properties"))) {
				continue;
			}

			const TSharedPtr<FJsonObject>& Properties = WidgetExport->GetProperties();
			if (!Properties.IsValid()) {
				continue;
			}

			const TArray<TSharedPtr<FJsonValue>>* NamedSlotBindings = nullptr;
			if (!Properties->TryGetArrayField(TEXT("NamedSlotBindings"), NamedSlotBindings) || !NamedSlotBindings) {
				continue;
			}

			for (const TSharedPtr<FJsonValue>& BindingValue : *NamedSlotBindings) {
				if (!BindingValue.IsValid() || BindingValue->Type != EJson::Object) {
					continue;
				}

				const TSharedPtr<FJsonObject> Binding = BindingValue->AsObject();
				if (!Binding.IsValid()) {
					continue;
				}

				FString SlotNameString;
				if (!Binding->TryGetStringField(TEXT("Name"), SlotNameString) || SlotNameString.IsEmpty()) {
					continue;
				}

				const TSharedPtr<FJsonValue>* ContentValue = Binding->Values.Find(TEXT("Content"));
				if (!ContentValue || !ContentValue->IsValid() || (*ContentValue)->Type != EJson::Object) {
					continue;
				}

				const TSharedPtr<FJsonObject> ContentReference = (*ContentValue)->AsObject();
				if (!ContentReference.IsValid()) {
					continue;
				}

				const FName SlotName(*SlotNameString);
				const FString BindingKey = UserWidget->GetPathName() + TEXT("|") + SlotNameString;
				if (ProcessedBindings.Contains(BindingKey)) {
					continue;
				}

				FUObjectExport* ContentExport = Container->GetExportByObjectPath(ContentReference);
				if (!ContentExport || ContentExport->IsJsonInvalid()) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Named slot '%s.%s' could not resolve its exported content"),
						*UserWidget->GetName(), *SlotNameString);
					ProcessedBindings.Add(BindingKey);
					continue;
				}

				if (!ContentExport->Object) {
					ObjectSerializer->SpawnExport(ContentExport);
				}

				UWidget* ContentWidget = Cast<UWidget>(ContentExport->Object);
				if (!ContentWidget) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Named slot '%s.%s' resolved '%s', but it is not a UWidget"),
						*UserWidget->GetName(), *SlotNameString, *ContentExport->GetName().ToString());
					ProcessedBindings.Add(BindingKey);
					continue;
				}

				// Use UUserWidget's named-slot API instead of only restoring the raw
				// NamedSlotBindings array. This is the equivalent of assigning slot content in UMG.
				UserWidget->Modify();
				ContentWidget->Modify();
				UserWidget->SetContentForSlot(SlotName, ContentWidget);
				ProcessedBindings.Add(BindingKey);
				++BindingsAppliedThisPass;
				++TotalBindingsApplied;

				UE_LOG(LogCrimeForgeJsonImporter, Display,
					TEXT("Named slot restored: %s.%s -> %s"),
					*UserWidget->GetName(), *SlotNameString, *ContentWidget->GetName());
			}
		}

		if (BindingsAppliedThisPass == 0) {
			break;
		}
	}

	return TotalBindingsApplied;
}

/**
 * A WidgetBlueprint is allowed to contain a widget whose name matches a property declared by
 * its native/Blueprint parent (the usual BindWidget pattern). In that case the widget must not
 * also ask the WidgetBlueprint compiler to generate a new member property with the same name.
 *
 * CrimeForge JSON Importer reconstructs widgets generically, including UWidget::bIsVariable. Depending on the
 * exported data (or the widget class default when the field is absent), that flag can be true even
 * when the parent class already owns the property. The UMG compiler then tries to create a second
 * property and fails with an Internal Compiler Error.
 *
 * Match the result of manually unchecking "Is Variable" in the designer: keep the widget in the
 * tree, but let the inherited property own the binding.
 */
static int32 ClearInheritedWidgetVariableCollisions(UWidgetBlueprint* WidgetBlueprint) {
	if (!WidgetBlueprint || !WidgetBlueprint->WidgetTree || !WidgetBlueprint->ParentClass) {
		return 0;
	}

	TArray<UWidget*> Widgets;
	WidgetBlueprint->WidgetTree->GetAllWidgets(Widgets);

	int32 Cleared = 0;
	for (UWidget* Widget : Widgets) {
		if (!Widget || !Widget->bIsVariable) {
			continue;
		}

		// Search the parent class (and its superclasses), not the class currently being generated.
		// Any inherited field with this name would collide with a generated widget variable.
		if (FindFProperty<FProperty>(WidgetBlueprint->ParentClass, Widget->GetFName()) != nullptr) {
			Widget->Modify();
			Widget->bIsVariable = false;
			++Cleared;

			UE_LOG(LogCrimeForgeJsonImporter, Display,
				TEXT("Widget variable disabled for %s.%s because parent class %s already declares that property"),
				*WidgetBlueprint->GetName(),
				*Widget->GetName(),
				*WidgetBlueprint->ParentClass->GetName());
		}
	}

	return Cleared;
}

void IBlueprintImporter::ConstructWidgetTree() {
	if (!GetAssetDataAsValue().Has("WidgetTree")) return;

	UWidgetBlueprint* WidgetBlueprint = Cast<UWidgetBlueprint>(Blueprint);
	
	for (UWidget* Widget : Cast<UWidgetTreeAccessor>(WidgetBlueprint->WidgetTree)->GetWidgets()) {
		MoveToTransientPackageAndRename(Widget);
	}

	WidgetBlueprint->WidgetTree->PostLoad();

	for (UWidgetAnimation* WidgetAnimation : WidgetBlueprint->Animations) {
		MoveToTransientPackageAndRename(WidgetAnimation);
	}

	WidgetBlueprint->Animations.Empty();
	
	FUObjectExport* ClassDefaultObjectExport = GetClassDefaultObject(GetContainer(), GetAssetDataAsValue());

	/* Same as above: the empty export is shared, so a miss here must not be written to */
	if (ClassDefaultObjectExport->IsJsonValid()) {
		ClassDefaultObjectExport->Object = WidgetBlueprint;
	}

	SetAsset(WidgetBlueprint);

	MoveToTransientPackageAndRename(WidgetBlueprint->WidgetTree->RootWidget);
	WidgetBlueprint->WidgetTree->RootWidget = nullptr;

	FUObjectExport* Export;

	if (GetAssetDataAsValue().Has("TemplateAsset")) {
		FUObjectExport* TemplateAsset = GetContainer()->GetExportByObjectPath(GetAssetDataAsValue().GetObject("TemplateAsset"));
		Export = GetContainer()->GetExportByObjectPath(TemplateAsset->GetPropertiesAsValue().GetObject("WidgetTree"));
	} else {
		Export = GetContainer()->GetExportByObjectPath(GetAssetDataAsValue().GetObject("WidgetTree"));
	}
	
	Export->Object = WidgetBlueprint->WidgetTree;
	GetObjectSerializer()->SpawnExport(Export, true);

	// Named-slot content is exported as references on child UUserWidget instances. Reapply those
	// references through UUserWidget's named-slot API so the content is actually attached to the
	// reconstructed WidgetTree before variable collision checks and animation reconstruction run.
	ReconstructNamedSlotBindings(WidgetBlueprint, GetContainer(), GetObjectSerializer());

	// The generic widget deserializer restores bIsVariable, but an inherited/native property with
	// the same name already provides the Blueprint-visible reference (e.g. BindWidget fields).
	// Leaving bIsVariable enabled makes the UMG compiler attempt to create a duplicate property.
	ClearInheritedWidgetVariableCollisions(WidgetBlueprint);

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(WidgetBlueprint);

	GetContainer()->ExportsLoop(GetAssetDataAsValue().GetArray("Animations"), [this, WidgetBlueprint](FUObjectExport* DirectExport) {
		if (UObject* Object = GetObjectSerializer()->SpawnExport(DirectExport)) {
			UWidgetAnimation* WidgetAnimation = Cast<UWidgetAnimation>(Object);
		
			WidgetBlueprint->Animations.Add(WidgetAnimation);

			for (int32 Index = 0; Index < WidgetAnimation->MovieScene->GetPossessableCount(); ++Index) {
				FMovieScenePossessable& Possessable = WidgetAnimation->MovieScene->GetPossessable(Index);

				TArray<UWidget*> Widgets;
				WidgetBlueprint->WidgetTree->GetAllWidgets(Widgets);

				for (UWidget* Widget : Widgets) {
					if (Widget->GetName() == Possessable.GetName()) {
#if ENGINE_UE5
						Possessable.SetPossessedObjectClass(Widget->GetClass());
#endif
					}
				}
			}
			
			const UMovieScene* MovieScene = WidgetAnimation->MovieScene;
			for (const FMovieSceneBinding& Binding : MovieScene->GetBindings()) {
				for (UMovieSceneTrack* Track : Binding.GetTracks()) {
					Track->Modify();
					Track->MarkAsChanged();

					if (UMovieSceneWidgetMaterialTrack* MaterialTrack = Cast<UMovieSceneWidgetMaterialTrack>(Track)) {
						MaterialTrack->SetDisplayName(FText::FromString(MaterialTrack->GetBrushPropertyNamePath()[0].ToString()));
					}
				}
			}
		}
	});
}