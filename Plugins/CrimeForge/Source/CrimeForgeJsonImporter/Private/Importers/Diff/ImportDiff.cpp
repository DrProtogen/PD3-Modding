#include "Importers/Diff/ImportDiff.h"

#include "Containers/Export.h"
#include "Containers/ExportContainer.h"
#include "WidgetBlueprint.h"
#include "Blueprint/WidgetTree.h"
#include "Engine/Blueprint.h"
#include "Engine/Compatibility.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "Importers/Cache/ImportDependencyCache.h"
#include "Importers/Types/Blueprint/BlueprintVariables.h"
#include "Misc/SecureHash.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/ArchiveObjectCrc32.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Misc/PackageName.h"
#include "UObject/MetaData.h"
#include "UObject/UnrealType.h"

namespace {
	const FName HashKey(TEXT("CrimeForge.SourceHash"));
	const FName TypeKey(TEXT("CrimeForge.SourceType"));
	const FName StateCrcKey(TEXT("CrimeForge.AssetStateCrc"));

	FString HashText(const FString& Text) {
		FTCHARToUTF8 Utf8(*Text);
		uint8 Hash[FSHA1::DigestSize];
		FSHA1::HashBuffer(Utf8.Get(), Utf8.Length(), Hash);
		return BytesToHex(Hash, FSHA1::DigestSize);
	}


	UObject* GetPinSubCategoryObject(const FEdGraphPinType& PinType) {
#if ENGINE_UE5
		return PinType.PinSubCategoryObject.Get();
#else
		return PinType.PinSubCategoryObject;
#endif
	}

	void AppendBlueprintGraphState(const TArray<UEdGraph*>& Graphs, const TCHAR* Prefix, TArray<FString>& OutLines) {
		for (const UEdGraph* Graph : Graphs) {
			if (!Graph) continue;
			OutLines.Add(FString::Printf(TEXT("%s|Graph|%s"), Prefix, *Graph->GetName()));
			for (const UEdGraphNode* Node : Graph->Nodes) {
				if (!Node) continue;
				const FString NodeClass = Node->GetClass() ? Node->GetClass()->GetPathName() : FString();
				OutLines.Add(FString::Printf(TEXT("%s|Node|%s|%s|%s"), Prefix, *Graph->GetName(), *NodeClass, *Node->GetName()));
				for (const UEdGraphPin* Pin : Node->Pins) {
					if (!Pin) continue;
					const FString SubCategoryObject = GetPinSubCategoryObject(Pin->PinType) ? GetPinSubCategoryObject(Pin->PinType)->GetPathName() : FString();
					const FString DefaultObject = Pin->DefaultObject ? Pin->DefaultObject->GetPathName() : FString();
					TArray<FString> Links;
					for (const UEdGraphPin* Linked : Pin->LinkedTo) {
						if (!Linked || !Linked->GetOwningNode()) continue;
						Links.Add(Linked->GetOwningNode()->GetName() + TEXT(".") + Linked->PinName.ToString());
					}
					Links.Sort();
					OutLines.Add(FString::Printf(TEXT("%s|Pin|%s|%s|%s|%d|%s|%s|%s|%s|%s|%s"),
						Prefix, *Graph->GetName(), *Node->GetName(), *Pin->PinName.ToString(), static_cast<int32>(Pin->Direction),
						*Pin->PinType.PinCategory.ToString(), *Pin->PinType.PinSubCategory.ToString(), *SubCategoryObject,
						*Pin->DefaultValue, *DefaultObject, *FString::Join(Links, TEXT(","))));
				}
			}
		}
	}

	FString AssetStateFingerprint(UObject* Object) {
		if (!Object) return FString();
		FArchiveObjectCrc32 CrcArchive;
		TArray<FString> Lines;

		if (const UBlueprint* Blueprint = Cast<UBlueprint>(Object)) {
			/* UBlueprint itself carries editor/session bookkeeping that can change simply by opening or
			 * compiling the asset. Fingerprint authored structure plus the generated CDO instead so
			 * 'modified since import' means an actual content change rather than editor churn. */
			Lines.Add(TEXT("Parent|") + (Blueprint->ParentClass ? Blueprint->ParentClass->GetPathName() : FString()));
			if (Blueprint->GeneratedClass && Blueprint->GeneratedClass->GetDefaultObject(false)) {
				Lines.Add(FString::Printf(TEXT("CDOCRC|%08X"), CrcArchive.Crc32(Blueprint->GeneratedClass->GetDefaultObject(false))));
			}
			for (const FBPVariableDescription& Variable : Blueprint->NewVariables) {
				const FString SubObj = GetPinSubCategoryObject(Variable.VarType) ? GetPinSubCategoryObject(Variable.VarType)->GetPathName() : FString();
				Lines.Add(FString::Printf(TEXT("Var|%s|%s|%s|%s"), *Variable.VarName.ToString(), *Variable.VarType.PinCategory.ToString(), *Variable.VarType.PinSubCategory.ToString(), *SubObj));
			}
			if (Blueprint->SimpleConstructionScript) {
				for (const USCS_Node* Node : Blueprint->SimpleConstructionScript->GetAllNodes()) {
					if (!Node) continue;
					const FString ComponentClass = Node->ComponentClass ? Node->ComponentClass->GetPathName() : FString();
					Lines.Add(FString::Printf(TEXT("SCS|%s|%s"), *Node->GetVariableName().ToString(), *ComponentClass));
					if (Node->ComponentTemplate) {
						Lines.Add(FString::Printf(TEXT("SCSCRC|%s|%08X"), *Node->GetVariableName().ToString(), CrcArchive.Crc32(Node->ComponentTemplate)));
					}
				}
			}
			if (const UWidgetBlueprint* WidgetBlueprint = Cast<UWidgetBlueprint>(Blueprint)) {
				if (WidgetBlueprint->WidgetTree) Lines.Add(FString::Printf(TEXT("WidgetTreeCRC|%08X"), CrcArchive.Crc32(WidgetBlueprint->WidgetTree)));
			}
			AppendBlueprintGraphState(Blueprint->FunctionGraphs, TEXT("Function"), Lines);
			AppendBlueprintGraphState(Blueprint->UbergraphPages, TEXT("Event"), Lines);
			AppendBlueprintGraphState(Blueprint->MacroGraphs, TEXT("Macro"), Lines);
		}
		else {
			Lines.Add(FString::Printf(TEXT("ObjectCRC|%08X"), CrcArchive.Crc32(Object)));
		}
		Lines.Sort();
		return HashText(FString::Join(Lines, TEXT("\n")));
	}

	FString NormalizeObjectRef(FString Value) {
		if (Value.Contains(TEXT("'"))) {
			const int32 First = Value.Find(TEXT("'"));
			const int32 Last = Value.Find(TEXT("'"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
			if (First != INDEX_NONE && Last > First) Value = Value.Mid(First + 1, Last - First - 1);
		}
		return Value;
	}

	bool CompareSimpleProperty(UObject* Existing, FProperty* Property, const TSharedPtr<FJsonValue>& Incoming, bool& OutComparable) {
		OutComparable = true;
		void* Ptr = Property->ContainerPtrToValuePtr<void>(Existing);
		if (const FBoolProperty* P = CastField<FBoolProperty>(Property)) return Incoming.IsValid() && Incoming->Type == EJson::Boolean && P->GetPropertyValue(Ptr) == Incoming->AsBool();
		if (const FNumericProperty* P = CastField<FNumericProperty>(Property)) {
			if (!Incoming.IsValid() || Incoming->Type != EJson::Number) return false;
			return P->IsInteger() ? static_cast<double>(P->GetSignedIntPropertyValue(Ptr)) == Incoming->AsNumber() : FMath::IsNearlyEqual(P->GetFloatingPointPropertyValue(Ptr), Incoming->AsNumber());
		}
		if (const FStrProperty* P = CastField<FStrProperty>(Property)) return Incoming.IsValid() && Incoming->Type == EJson::String && P->GetPropertyValue(Ptr) == Incoming->AsString();
		if (const FNameProperty* P = CastField<FNameProperty>(Property)) return Incoming.IsValid() && Incoming->Type == EJson::String && P->GetPropertyValue(Ptr).ToString() == Incoming->AsString();
		if (const FTextProperty* P = CastField<FTextProperty>(Property)) return Incoming.IsValid() && Incoming->Type == EJson::String && P->GetPropertyValue(Ptr).ToString() == Incoming->AsString();
		if (const FObjectPropertyBase* P = CastField<FObjectPropertyBase>(Property)) {
			UObject* Obj = P->GetObjectPropertyValue(Ptr);
			FString IncomingPath;
			if (!Incoming.IsValid() || Incoming->IsNull()) return Obj == nullptr;
			if (Incoming->Type == EJson::String) IncomingPath = NormalizeObjectRef(Incoming->AsString());
			else if (Incoming->Type == EJson::Object) {
				const TSharedPtr<FJsonObject> J = Incoming->AsObject();
				J->TryGetStringField(TEXT("ObjectPath"), IncomingPath);
				if (IncomingPath.IsEmpty()) J->TryGetStringField(TEXT("ObjectName"), IncomingPath);
				IncomingPath = NormalizeObjectRef(IncomingPath);
			}
			else { OutComparable = false; return false; }
			if (!Obj) return IncomingPath.IsEmpty() || IncomingPath.Equals(TEXT("None"), ESearchCase::IgnoreCase);
			return Obj->GetPathName().Equals(IncomingPath, ESearchCase::IgnoreCase) || Obj->GetName().Equals(FPackageName::ObjectPathToObjectName(IncomingPath), ESearchCase::IgnoreCase);
		}
		if (const FArrayProperty* P = CastField<FArrayProperty>(Property)) {
			if (!Incoming.IsValid() || Incoming->Type != EJson::Array) return false;
			FScriptArrayHelper Helper(P, Ptr);
			return Helper.Num() == Incoming->AsArray().Num();
		}
		OutComparable = false;
		return false;
	}

	int32 CountIncomingSCSNodes(FUObjectExportContainer* Container) {
		if (!Container) return INDEX_NONE;
		int32 Count = 0;
		for (FUObjectExport* Export : Container->Exports) if (Export && Export->GetType() == TEXT("SCS_Node")) ++Count;
		return Count;
	}

	TSet<FString> CollectIncomingUserVariableNames(FUObjectExport* IncomingExport) {
		TSet<FString> Names;
		if (!IncomingExport || !IncomingExport->JsonObject.IsValid()) return Names;
		const TArray<TSharedPtr<FJsonValue>>* Children = nullptr;
		if (!IncomingExport->JsonObject->TryGetArrayField(TEXT("ChildProperties"), Children) || !Children) return Names;
		for (const TSharedPtr<FJsonValue>& Value : *Children) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Property = Value->AsObject();
			if (!FBlueprintVariables::IsUserVariable(Property)) continue;
			FString Name;
			if (Property->TryGetStringField(TEXT("Name"), Name) && !Name.IsEmpty()) Names.Add(Name);
		}
		return Names;
	}

	TSet<FString> CollectExistingVariableNames(const UBlueprint* Blueprint) {
		TSet<FString> Names;
		if (!Blueprint) return Names;
		for (const FBPVariableDescription& Variable : Blueprint->NewVariables) Names.Add(Variable.VarName.ToString());
		return Names;
	}

	TSet<FString> CollectIncomingFunctionNames(FUObjectExportContainer* Container, const FName GeneratedClassName) {
		TSet<FString> Names;
		if (!Container) return Names;
		for (FUObjectExport* Export : Container->Exports) {
			if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function") || Export->GetOuter() != GeneratedClassName) continue;
			const FString Name = Export->GetName().ToString();
			if (Name.StartsWith(TEXT("ExecuteUbergraph_")) || Name.StartsWith(TEXT("BndEvt__"))) continue;
			const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
			if (!Export->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode || Bytecode->Num() == 0) continue;
			Names.Add(Name);
		}
		return Names;
	}

	TSet<FString> CollectExistingFunctionNames(const UBlueprint* Blueprint) {
		TSet<FString> Names;
		if (!Blueprint) return Names;
		for (const UEdGraph* Graph : Blueprint->FunctionGraphs) if (Graph) Names.Add(Graph->GetName());
		return Names;
	}

	void AppendNamedSetDiff(const TCHAR* Label, const TSet<FString>& Existing, const TSet<FString>& Incoming, TArray<FString>& Parts, bool& bOutDifferent) {
		TArray<FString> Added;
		TArray<FString> Removed;
		for (const FString& Name : Incoming) if (!Existing.Contains(Name)) Added.Add(Name);
		for (const FString& Name : Existing) if (!Incoming.Contains(Name)) Removed.Add(Name);
		if (Added.Num() == 0 && Removed.Num() == 0) return;
		bOutDifferent = true;
		Added.Sort(); Removed.Sort();
		auto Compact = [](TArray<FString> Values) {
			const int32 Total = Values.Num();
			if (Values.Num() > 5) Values.SetNum(5);
			FString Text = FString::Join(Values, TEXT(", "));
			if (Total > Values.Num()) Text += FString::Printf(TEXT(" (+%d more)"), Total - Values.Num());
			return Text;
		};
		if (Added.Num() > 0) Parts.Add(FString::Printf(TEXT("%s added: %s"), Label, *Compact(Added)));
		if (Removed.Num() > 0) Parts.Add(FString::Printf(TEXT("%s removed: %s"), Label, *Compact(Removed)));
	}

}

FString FCrimeForgeImportDiff::ComputeSourceHash(FUObjectExportContainer* Container) {
	if (!Container) return FString();
	FString Combined;
	for (const TSharedPtr<FJsonValue>& Value : Container->JsonObjects) {
		if (!Value.IsValid() || Value->Type != EJson::Object) continue;
		Combined += FCrimeForgeImportDependencyCache::HashJson(Value->AsObject());
		Combined += TEXT("|");
	}
	return HashText(Combined);
}

FString FCrimeForgeImportDiff::ReadStoredSourceHash(UObject* ExistingAsset) {
	if (!ExistingAsset || !ExistingAsset->GetOutermost()) return FString();
	if (UMetaData* Meta = ExistingAsset->GetOutermost()->GetMetaData()) return Meta->GetValue(ExistingAsset, HashKey);
	return FString();
}

void FCrimeForgeImportDiff::StoreProvenance(UObject* Asset, const FString& SourceHash, const FString& SourceType) {
	if (!Asset || !Asset->GetOutermost()) return;
	UMetaData* Meta = Asset->GetOutermost()->GetMetaData();
	if (!Meta) return;
	Meta->SetValue(Asset, HashKey, *SourceHash);
	Meta->SetValue(Asset, TypeKey, *SourceType);
	Meta->SetValue(Asset, StateCrcKey, *AssetStateFingerprint(Asset));
	Meta->SetValue(Asset, FName(TEXT("CrimeForge.ImportedAtUtc")), *FDateTime::UtcNow().ToIso8601());
}

FCrimeForgeImportDiffResult FCrimeForgeImportDiff::Compare(const FString& ObjectPath, const FString& Type, FUObjectExport* IncomingExport, FUObjectExportContainer* Container) {
	FCrimeForgeImportDiffResult Result;
	UObject* Existing = LoadObject<UObject>(nullptr, *ObjectPath);
	Result.bHasExistingAsset = Existing != nullptr;
	Result.SourceHash = ComputeSourceHash(Container);
	if (!Existing) { Result.bHasMeaningfulDifference = true; Result.Summary = TEXT("New asset"); return Result; }

	const FString StoredHash = ReadStoredSourceHash(Existing);
	FString StoredStateCrc;
	if (UMetaData* Meta = Existing->GetOutermost()->GetMetaData()) StoredStateCrc = Meta->GetValue(Existing, StateCrcKey);
	Result.bModifiedSinceLastImport = !StoredStateCrc.IsEmpty() && !StoredStateCrc.Equals(AssetStateFingerprint(Existing), ESearchCase::CaseSensitive);
	Result.bSourceHashMatches = !StoredHash.IsEmpty() && StoredHash.Equals(Result.SourceHash, ESearchCase::CaseSensitive);
	if (Result.bSourceHashMatches && !Result.bModifiedSinceLastImport) {
		Result.bHasMeaningfulDifference = false;
		Result.Summary = TEXT("Source data matches the last CrimeForge import exactly and the asset has not changed since that import.");
		return Result;
	}

	if (IncomingExport && IncomingExport->JsonObject.IsValid()) {
		const TSharedPtr<FJsonObject>* Properties = nullptr;
		if (IncomingExport->JsonObject->TryGetObjectField(TEXT("Properties"), Properties) && Properties && Properties->IsValid()) {
			for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : (*Properties)->Values) {
				FProperty* Property = FindFProperty<FProperty>(Existing->GetClass(), *Pair.Key);
				if (!Property) { ++Result.ComplexProperties; continue; }
				bool bComparable = false;
				const bool bSame = CompareSimpleProperty(Existing, Property, Pair.Value, bComparable);
				if (bComparable) { ++Result.ComparedProperties; if (!bSame) ++Result.ChangedProperties; }
				else ++Result.ComplexProperties;
			}
		}
	}

	TSet<FString> ExistingVariableNames;
	TSet<FString> IncomingVariableNames;
	TSet<FString> ExistingFunctionNames;
	TSet<FString> IncomingFunctionNames;
	if (Type.Contains(TEXT("BlueprintGeneratedClass"))) {
		UBlueprint* Blueprint = Cast<UBlueprint>(Existing);
		if (!Blueprint && Existing->IsA<UBlueprintGeneratedClass>()) Blueprint = UBlueprint::GetBlueprintFromClass(Cast<UClass>(Existing));
		if (Blueprint) {
			Result.ExistingComponents = Blueprint->SimpleConstructionScript ? Blueprint->SimpleConstructionScript->GetAllNodes().Num() : 0;
			Result.SourceComponents = CountIncomingSCSNodes(Container);
			ExistingVariableNames = CollectExistingVariableNames(Blueprint);
			IncomingVariableNames = CollectIncomingUserVariableNames(IncomingExport);
			Result.ExistingVariables = ExistingVariableNames.Num();
			Result.SourceVariables = IncomingVariableNames.Num();
			ExistingFunctionNames = CollectExistingFunctionNames(Blueprint);
			IncomingFunctionNames = CollectIncomingFunctionNames(Container, IncomingExport ? IncomingExport->GetName() : NAME_None);
			Result.ExistingFunctions = ExistingFunctionNames.Num();
			Result.SourceFunctions = IncomingFunctionNames.Num();
		}
	}

	bool bNamedBlueprintDifference = false;
	TArray<FString> NamedParts;
	AppendNamedSetDiff(TEXT("variables"), ExistingVariableNames, IncomingVariableNames, NamedParts, bNamedBlueprintDifference);
	AppendNamedSetDiff(TEXT("functions"), ExistingFunctionNames, IncomingFunctionNames, NamedParts, bNamedBlueprintDifference);

	Result.bHasMeaningfulDifference = Result.ChangedProperties > 0 || bNamedBlueprintDifference ||
		(Result.SourceComponents != INDEX_NONE && Result.ExistingComponents != INDEX_NONE && Result.SourceComponents != Result.ExistingComponents) ||
		(Result.SourceVariables != INDEX_NONE && Result.ExistingVariables != INDEX_NONE && Result.SourceVariables != Result.ExistingVariables) ||
		(Result.SourceFunctions != INDEX_NONE && Result.ExistingFunctions != INDEX_NONE && Result.SourceFunctions != Result.ExistingFunctions) ||
		StoredHash.IsEmpty() || Result.bModifiedSinceLastImport;

	TArray<FString> Parts;
	if (Result.ComparedProperties > 0) Parts.Add(FString::Printf(TEXT("properties changed %d/%d"), Result.ChangedProperties, Result.ComparedProperties));
	if (Result.ComplexProperties > 0) Parts.Add(FString::Printf(TEXT("%d complex field(s) not directly comparable"), Result.ComplexProperties));
	if (Result.SourceComponents != INDEX_NONE) Parts.Add(FString::Printf(TEXT("components %d -> %d"), Result.ExistingComponents, Result.SourceComponents));
	if (Result.SourceVariables != INDEX_NONE) Parts.Add(FString::Printf(TEXT("variables %d -> %d"), Result.ExistingVariables, Result.SourceVariables));
	if (Result.SourceFunctions != INDEX_NONE) Parts.Add(FString::Printf(TEXT("functions %d -> %d"), Result.ExistingFunctions, Result.SourceFunctions));
	Parts.Append(NamedParts);
	if (Result.bModifiedSinceLastImport) Parts.Add(TEXT("asset was modified after its last CrimeForge import"));
	if (StoredHash.IsEmpty()) Parts.Add(TEXT("no prior CrimeForge source fingerprint"));
	Result.Summary = FString::Join(Parts, TEXT("; "));
	if (Result.Summary.IsEmpty()) Result.Summary = TEXT("No directly comparable differences were found, but this asset has a different/unknown source fingerprint.");
	return Result;
}
