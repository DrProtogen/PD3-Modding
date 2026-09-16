

#include "Importers/Types/Blueprint/Graph/BlueprintGraphReconstructor.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"

#include "Containers/ExportContainer.h"
#include "Engine/Log.h"
#include "Importers/Types/Blueprint/BlueprintVariables.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_AddDelegate.h"
#include "K2Node_CallFunction.h"
#include "K2Node_ComponentBoundEvent.h"
#include "K2Node_CreateDelegate.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_Event.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_Select.h"
#include "K2Node_Self.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "UObject/UnrealType.h"

namespace {
	bool EventHasFlagToken(const FString& Flags, const TCHAR* WantedFlag) {
		TArray<FString> Parts;
		Flags.ParseIntoArray(Parts, TEXT("|"), true);
		for (FString& Part : Parts) {
			Part.TrimStartAndEndInline();
			if (Part.Equals(WantedFlag, ESearchCase::CaseSensitive)) return true;
		}
		return false;
	}

	FString EventGetInsideQuotes(const FString& In) {
		const int32 First = In.Find(TEXT("'"));
		const int32 Last = In.Find(TEXT("'"), ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		return (First != INDEX_NONE && Last > First) ? In.Mid(First + 1, Last - First - 1) : In;
	}

	FString EventGetReferenceMemberName(const TSharedPtr<FJsonObject>& Reference) {
		if (!Reference.IsValid()) return FString();
		FString ObjectName;
		if (!Reference->TryGetStringField(TEXT("ObjectName"), ObjectName)) return FString();
		ObjectName = EventGetInsideQuotes(ObjectName);
		if (ObjectName.Contains(TEXT(":"))) {
			ObjectName.Split(TEXT(":"), nullptr, &ObjectName, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		}
		return ObjectName;
	}

	FString EventGetReferenceOwnerName(const TSharedPtr<FJsonObject>& Reference) {
		if (!Reference.IsValid()) return FString();
		FString ObjectName;
		if (!Reference->TryGetStringField(TEXT("ObjectName"), ObjectName)) return FString();
		ObjectName = EventGetInsideQuotes(ObjectName);
		if (ObjectName.Contains(TEXT(":"))) {
			ObjectName.Split(TEXT(":"), &ObjectName, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		}
		return ObjectName;
	}

	UClass* EventResolveOwnerClass(const TSharedPtr<FJsonObject>& Reference, UBlueprint* Blueprint) {
		if (!Reference.IsValid() || !Blueprint) return nullptr;
		const FString OwnerName = EventGetReferenceOwnerName(Reference);
		if (OwnerName.IsEmpty()) return nullptr;

		if ((Blueprint->GeneratedClass && Blueprint->GeneratedClass->GetName() == OwnerName) ||
			(Blueprint->SkeletonGeneratedClass && Blueprint->SkeletonGeneratedClass->GetName() == OwnerName)) {
			return Blueprint->GeneratedClass ? Blueprint->GeneratedClass : Blueprint->SkeletonGeneratedClass;
		}

		FString ObjectPath;
		Reference->TryGetStringField(TEXT("ObjectPath"), ObjectPath);
		if (ObjectPath.Contains(TEXT("/Script/"))) {
			if (UClass* Loaded = LoadObject<UClass>(nullptr, *(ObjectPath + TEXT(".") + OwnerName))) return Loaded;
		}

		if (ObjectPath.StartsWith(TEXT("/Game/"))) {
			int32 DotIndex = INDEX_NONE;
			if (ObjectPath.FindLastChar(TEXT('.'), DotIndex)) ObjectPath.LeftInline(DotIndex);
			if (UClass* Loaded = LoadObject<UClass>(nullptr, *(ObjectPath + TEXT(".") + OwnerName))) return Loaded;
		}

#if UE5_1_BEYOND
		return FindFirstObject<UClass>(*OwnerName);
#else
		return FindObject<UClass>(ANY_PACKAGE, *OwnerName);
#endif
	}

	UFunction* EventResolveFunctionReference(const TSharedPtr<FJsonObject>& Reference, UBlueprint* Blueprint) {
		if (!Reference.IsValid() || !Blueprint) return nullptr;
		const FName FunctionName(*EventGetReferenceMemberName(Reference));
		if (FunctionName.IsNone()) return nullptr;

		if (UClass* OwnerClass = EventResolveOwnerClass(Reference, Blueprint)) {
			if (UFunction* Function = OwnerClass->FindFunctionByName(FunctionName)) return Function;
		}
		if (Blueprint->GeneratedClass) {
			if (UFunction* Function = Blueprint->GeneratedClass->FindFunctionByName(FunctionName)) return Function;
		}
		if (Blueprint->SkeletonGeneratedClass) {
			if (UFunction* Function = Blueprint->SkeletonGeneratedClass->FindFunctionByName(FunctionName)) return Function;
		}
		return Blueprint->ParentClass ? Blueprint->ParentClass->FindFunctionByName(FunctionName) : nullptr;
	}

	UClass* EventGetClassFromPin(const UEdGraphPin* Pin) {
		if (!Pin) return nullptr;
#if ENGINE_UE5
		return Cast<UClass>(Pin->PinType.PinSubCategoryObject.Get());
#else
		return Cast<UClass>(Pin->PinType.PinSubCategoryObject);
#endif
	}

	template <typename T>
	T* EventAddNode(UEdGraph* Graph, const int32 X, const int32 Y) {
		if (!Graph) return nullptr;
		T* Node = NewObject<T>(Graph);
		Graph->AddNode(Node, false, false);
		Node->CreateNewGuid();
		Node->PostPlacedNewNode();
		Node->NodePosX = X;
		Node->NodePosY = Y;
		return Node;
	}

	UEdGraphPin* EventFindExecInput(UEdGraphNode* Node) {
		if (!Node) return nullptr;
		if (UEdGraphPin* Pin = Node->FindPin(UEdGraphSchema_K2::PN_Execute, EGPD_Input)) return Pin;
		for (UEdGraphPin* Pin : Node->Pins) {
			if (Pin && Pin->Direction == EGPD_Input && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec) return Pin;
		}
		return nullptr;
	}

	UEdGraphPin* EventFindExecOutput(UEdGraphNode* Node) {
		if (!Node) return nullptr;
		if (UEdGraphPin* Pin = Node->FindPin(UEdGraphSchema_K2::PN_Then, EGPD_Output)) return Pin;
		for (UEdGraphPin* Pin : Node->Pins) {
			if (Pin && Pin->Direction == EGPD_Output && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec) return Pin;
		}
		return nullptr;
	}

	UEdGraph* GetOrCreateEventGraph(UBlueprint* Blueprint) {
		if (!Blueprint) return nullptr;
		for (UEdGraph* Graph : Blueprint->UbergraphPages) {
			if (Graph && Graph->GetFName() == UEdGraphSchema_K2::GN_EventGraph) return Graph;
		}

		UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(
			Blueprint,
			UEdGraphSchema_K2::GN_EventGraph,
			UEdGraph::StaticClass(),
			UEdGraphSchema_K2::StaticClass());
		if (Graph) FBlueprintEditorUtils::AddUbergraphPage(Blueprint, Graph);
		return Graph;
	}

	FUObjectExport* FindUbergraphExport(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
		if (!Blueprint || !Container) return nullptr;
		const FName GeneratedClassName = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetFName() : NAME_None;
		for (FUObjectExport* Export : Container->Exports) {
			if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function")) continue;
			if (!GeneratedClassName.IsNone() && Export->GetOuter() != GeneratedClassName) continue;
			if (Export->GetName().ToString().StartsWith(TEXT("ExecuteUbergraph_"))) return Export;
		}
		return nullptr;
	}

	bool TryGetUbergraphEntryOffset(const FUObjectExport* Wrapper, int32& OutOffset) {
		OutOffset = INDEX_NONE;
		if (!Wrapper || !Wrapper->IsJsonValid()) return false;
		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		if (!Wrapper->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) return false;

		for (const TSharedPtr<FJsonValue>& Value : *Bytecode) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Statement = Value->AsObject();
			FString Token;
			Statement->TryGetStringField(TEXT("Token"), Token);
			if (Token != TEXT("EX_LocalFinalFunction") && Token != TEXT("EX_FinalFunction")) continue;

			const TSharedPtr<FJsonObject>* FunctionRef = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Function"), FunctionRef)) continue;
			FString ObjectName;
			if (!(*FunctionRef)->TryGetStringField(TEXT("ObjectName"), ObjectName) || !ObjectName.Contains(TEXT("ExecuteUbergraph_"))) continue;

			const TArray<TSharedPtr<FJsonValue>>* Parameters = nullptr;
			if (!Statement->TryGetArrayField(TEXT("Parameters"), Parameters) || !Parameters || Parameters->Num() == 0) continue;
			if (!(*Parameters)[0].IsValid() || (*Parameters)[0]->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> EntryValue = (*Parameters)[0]->AsObject();
			FString EntryToken;
			EntryValue->TryGetStringField(TEXT("Token"), EntryToken);
			if (EntryToken != TEXT("EX_IntConst") || !EntryValue->HasField(TEXT("Value"))) continue;
			OutOffset = static_cast<int32>(EntryValue->GetNumberField(TEXT("Value")));
			return true;
		}
		return false;
	}

	TMap<int32, int32> BuildEventStatementIndexMap(const FUObjectExport* Ubergraph) {
		TMap<int32, int32> Result;
		if (!Ubergraph || !Ubergraph->IsJsonValid()) return Result;
		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		if (!Ubergraph->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) return Result;
		for (int32 ArrayIndex = 0; ArrayIndex < Bytecode->Num(); ++ArrayIndex) {
			const TSharedPtr<FJsonValue>& Value = (*Bytecode)[ArrayIndex];
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Statement = Value->AsObject();
			if (Statement.IsValid() && Statement->HasField(TEXT("StatementIndex"))) {
				Result.Add(static_cast<int32>(Statement->GetNumberField(TEXT("StatementIndex"))), ArrayIndex);
			}
		}
		return Result;
	}

	bool IsTrivialEventEntryAssignment(const TSharedPtr<FJsonObject>& Statement) {
		if (!Statement.IsValid()) return false;
		FString Token;
		Statement->TryGetStringField(TEXT("Token"), Token);
		if (!Token.StartsWith(TEXT("EX_Let"))) return false;

		const TSharedPtr<FJsonObject>* VariableExpression = nullptr;
		const TSharedPtr<FJsonObject>* Expression = nullptr;
		if (!Statement->TryGetObjectField(TEXT("Variable"), VariableExpression) ||
			!Statement->TryGetObjectField(TEXT("Expression"), Expression)) return false;

		FString VariableToken;
		(*VariableExpression)->TryGetStringField(TEXT("Token"), VariableToken);
		if (VariableToken != TEXT("EX_LocalVariable") && VariableToken != TEXT("EX_LocalOutVariable")) return false;

		FString ExpressionToken;
		(*Expression)->TryGetStringField(TEXT("Token"), ExpressionToken);
		return ExpressionToken == TEXT("EX_LocalVariable") ||
			ExpressionToken == TEXT("EX_LocalOutVariable") ||
			ExpressionToken == TEXT("EX_InstanceVariable") ||
			ExpressionToken == TEXT("EX_Self") ||
			ExpressionToken == TEXT("EX_NoObject") ||
			ExpressionToken == TEXT("EX_Nothing");
	}

	bool IsNoOpEventEntry(const FUObjectExport* Ubergraph, const int32 EntryOffset) {
		if (!Ubergraph || EntryOffset == INDEX_NONE) return false;
		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		if (!Ubergraph->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) return false;
		const TMap<int32, int32> StatementMap = BuildEventStatementIndexMap(Ubergraph);
		const int32* EntryArrayIndex = StatementMap.Find(EntryOffset);
		if (!EntryArrayIndex) return false;

		TSet<int32> Visited;
		int32 ArrayIndex = *EntryArrayIndex;
		int32 Safety = 0;
		while (Bytecode->IsValidIndex(ArrayIndex) && ++Safety < 128) {
			if (Visited.Contains(ArrayIndex)) return false;
			Visited.Add(ArrayIndex);
			const TSharedPtr<FJsonValue>& Value = (*Bytecode)[ArrayIndex];
			if (!Value.IsValid() || Value->Type != EJson::Object) { ++ArrayIndex; continue; }
			const TSharedPtr<FJsonObject> Statement = Value->AsObject();
			FString Token;
			Statement->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_Return") || Token == TEXT("EX_EndOfScript")) return true;
			if (Token == TEXT("EX_Jump")) {
				const int32 TargetOffset = Statement->HasField(TEXT("CodeOffset"))
					? static_cast<int32>(Statement->GetNumberField(TEXT("CodeOffset"))) : INDEX_NONE;
				const int32* TargetIndex = StatementMap.Find(TargetOffset);
				if (!TargetIndex) return false;
				ArrayIndex = *TargetIndex;
				continue;
			}
			if (IsTrivialEventEntryAssignment(Statement)) { ++ArrayIndex; continue; }
			return false;
		}
		return false;
	}

	TSet<FName> CollectDelegateReferencedEventNames(FUObjectExportContainer* Container, const FName GeneratedClassName) {
		TSet<FName> Result;
		if (!Container) return Result;
		for (FUObjectExport* Export : Container->Exports) {
			if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function")) continue;
			if (!GeneratedClassName.IsNone() && Export->GetOuter() != GeneratedClassName) continue;
			const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
			if (!Export->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) continue;
			for (const TSharedPtr<FJsonValue>& Value : *Bytecode) {
				if (!Value.IsValid() || Value->Type != EJson::Object) continue;
				const TSharedPtr<FJsonObject> Statement = Value->AsObject();
				FString Token;
				Statement->TryGetStringField(TEXT("Token"), Token);
				if (Token != TEXT("EX_BindDelegate")) continue;
				FString FunctionName;
				if (Statement->TryGetStringField(TEXT("FunctionName"), FunctionName) && !FunctionName.IsEmpty()) {
					Result.Add(FName(*FunctionName));
				}
			}
		}
		return Result;
	}

	struct FComponentBindingInfo {
		FName ComponentPropertyName;
		FName DelegatePropertyName;
	};

	TMap<FName, FComponentBindingInfo> BuildComponentBindingMap(FUObjectExportContainer* Container) {
		TMap<FName, FComponentBindingInfo> Result;
		if (!Container) return Result;
		for (FUObjectExport* Export : Container->Exports) {
			if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("ComponentDelegateBinding")) continue;
			const TSharedPtr<FJsonObject>& Properties = Export->GetProperties();
			if (!Properties.IsValid()) continue;
			const TArray<TSharedPtr<FJsonValue>>* Bindings = nullptr;
			if (!Properties->TryGetArrayField(TEXT("ComponentDelegateBindings"), Bindings) || !Bindings) continue;
			for (const TSharedPtr<FJsonValue>& Value : *Bindings) {
				if (!Value.IsValid() || Value->Type != EJson::Object) continue;
				const TSharedPtr<FJsonObject> Binding = Value->AsObject();
				FString ComponentName, DelegateName, FunctionName;
				if (!Binding->TryGetStringField(TEXT("ComponentPropertyName"), ComponentName) ||
					!Binding->TryGetStringField(TEXT("DelegatePropertyName"), DelegateName) ||
					!Binding->TryGetStringField(TEXT("FunctionNameToBind"), FunctionName)) continue;
				Result.Add(FName(*FunctionName), FComponentBindingInfo{ FName(*ComponentName), FName(*DelegateName) });
			}
		}
		return Result;
	}


	bool NodeHasLinkedExecOutput(UEdGraphNode* Node) {
		if (!Node) return false;
		for (UEdGraphPin* Pin : Node->Pins) {
			if (Pin && Pin->Direction == EGPD_Output && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec && Pin->LinkedTo.Num() > 0) {
				return true;
			}
		}
		return false;
	}

	int32 RemoveUnusedTemplateWidgetEvents(UEdGraph* Graph) {
		if (!Graph) return 0;
		static const TSet<FName> TemplateEventNames = {
			FName(TEXT("PreConstruct")),
			FName(TEXT("Construct")),
			FName(TEXT("Tick"))
		};

		TArray<UK2Node_Event*> ToRemove;
		for (UEdGraphNode* GraphNode : Graph->Nodes) {
			UK2Node_Event* EventNode = Cast<UK2Node_Event>(GraphNode);
			if (!EventNode) continue;
			const FName EventName = EventNode->EventReference.GetMemberName();
			if (!TemplateEventNames.Contains(EventName) || NodeHasLinkedExecOutput(EventNode)) continue;
			ToRemove.Add(EventNode);
		}

		for (UK2Node_Event* EventNode : ToRemove) {
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event graph reconstruction: removing unused template event %s"),
				*EventNode->EventReference.GetMemberName().ToString());
			EventNode->DestroyNode();
		}
		return ToRemove.Num();
	}

	void BuildPersistentParameterMap(const FUObjectExport* Wrapper, TMap<FName, FName>& OutMap) {
		OutMap.Empty();
		if (!Wrapper || !Wrapper->IsJsonValid()) return;
		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		if (!Wrapper->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) return;
		for (const TSharedPtr<FJsonValue>& Value : *Bytecode) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Statement = Value->AsObject();
			FString Token;
			Statement->TryGetStringField(TEXT("Token"), Token);
			if (Token != TEXT("EX_LetValueOnPersistentFrame")) continue;

			const TSharedPtr<FJsonObject>* Destination = nullptr;
			const TSharedPtr<FJsonObject>* DestinationProperty = nullptr;
			const TSharedPtr<FJsonObject>* Assignment = nullptr;
			const TSharedPtr<FJsonObject>* SourceVariable = nullptr;
			const TSharedPtr<FJsonObject>* SourceProperty = nullptr;
			if (!Statement->TryGetObjectField(TEXT("DestinationProperty"), Destination) ||
				!(*Destination)->TryGetObjectField(TEXT("Property"), DestinationProperty) ||
				!Statement->TryGetObjectField(TEXT("AssignmentExpression"), Assignment) ||
				!(*Assignment)->TryGetObjectField(TEXT("Variable"), SourceVariable) ||
				!(*SourceVariable)->TryGetObjectField(TEXT("Property"), SourceProperty)) continue;

			FString DestinationName, SourceName;
			if ((*DestinationProperty)->TryGetStringField(TEXT("Name"), DestinationName) &&
				(*SourceProperty)->TryGetStringField(TEXT("Name"), SourceName)) {
				OutMap.Add(FName(*DestinationName), FName(*SourceName));
			}
		}
	}

	bool AddCustomEventPins(const FUObjectExport* Wrapper, UK2Node_CustomEvent* EventNode) {
		if (!Wrapper || !EventNode) return false;
		const TArray<TSharedPtr<FJsonValue>>* ChildProperties = nullptr;
		if (!Wrapper->JsonObject->TryGetArrayField(TEXT("ChildProperties"), ChildProperties) || !ChildProperties) return true;
		for (const TSharedPtr<FJsonValue>& Value : *ChildProperties) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Property = Value->AsObject();
			FString Flags, Name;
			if (!Property->TryGetStringField(TEXT("PropertyFlags"), Flags) || !EventHasFlagToken(Flags, TEXT("Parm")) ||
				EventHasFlagToken(Flags, TEXT("ReturnParm")) || !Property->TryGetStringField(TEXT("Name"), Name)) continue;
			FEdGraphPinType PinType;
			if (!FBlueprintVariables::GetPinType(Property, PinType)) continue;
			if (!EventNode->FindPin(FName(*Name), EGPD_Output)) {
				EventNode->CreateUserDefinedPin(FName(*Name), PinType, EGPD_Output, false);
			}
		}
		return true;
	}

	UEdGraphNode* CreateWrapperEventNode(
		UBlueprint* Blueprint,
		UEdGraph* Graph,
		FUObjectExport* Wrapper,
		const TMap<FName, FComponentBindingInfo>& ComponentBindings,
		const int32 X,
		const int32 Y) {
		if (!Blueprint || !Graph || !Wrapper) return nullptr;
		const FName WrapperName = Wrapper->GetName();

		if (const FComponentBindingInfo* Binding = ComponentBindings.Find(WrapperName)) {
			UClass* GeneratedClass = Blueprint->SkeletonGeneratedClass ? Blueprint->SkeletonGeneratedClass : Blueprint->GeneratedClass;
			FObjectProperty* ComponentProperty = GeneratedClass ? FindFProperty<FObjectProperty>(GeneratedClass, Binding->ComponentPropertyName) : nullptr;
			UClass* ComponentClass = ComponentProperty ? ComponentProperty->PropertyClass : nullptr;
			FMulticastDelegateProperty* DelegateProperty = ComponentClass
				? FindFProperty<FMulticastDelegateProperty>(ComponentClass, Binding->DelegatePropertyName)
				: nullptr;
			if (DelegateProperty) {
				UK2Node_ComponentBoundEvent* Node = EventAddNode<UK2Node_ComponentBoundEvent>(Graph, X, Y);
				Node->InitializeComponentBoundEventParams(ComponentProperty, DelegateProperty);
				Node->AllocateDefaultPins();
				return Node;
			}
			UE_LOG(LogCrimeForgeJsonImporter, Warning,
				TEXT("Event graph reconstruction: could not resolve component delegate %s.%s for %s; falling back to a custom event"),
				*Binding->ComponentPropertyName.ToString(), *Binding->DelegatePropertyName.ToString(), *WrapperName.ToString());
		}

		FString FunctionFlags;
		Wrapper->JsonObject->TryGetStringField(TEXT("FunctionFlags"), FunctionFlags);
		if (EventHasFlagToken(FunctionFlags, TEXT("FUNC_Event")) && Blueprint->ParentClass) {
			if (UFunction* ParentEvent = Blueprint->ParentClass->FindFunctionByName(WrapperName)) {
				UK2Node_Event* Node = EventAddNode<UK2Node_Event>(Graph, X, Y);
				Node->EventReference.SetExternalMember(WrapperName, ParentEvent->GetOwnerClass());
				Node->bOverrideFunction = true;
				Node->AllocateDefaultPins();
				return Node;
			}
		}

		UK2Node_CustomEvent* Node = EventAddNode<UK2Node_CustomEvent>(Graph, X, Y);
		Node->CustomFunctionName = WrapperName;
		Node->AllocateDefaultPins();
		AddCustomEventPins(Wrapper, Node);
		return Node;
	}

	struct FEventBuildState {
		// Compiler temporaries normally keep their source expression so pure values can be
		// folded back into wires. Impure calls are different: they must be emitted at the
		// EX_Let statement where they execute, then later reads of the temp must reuse the
		// already-created return pin rather than spawning an unconnected duplicate call.
		TMap<FName, TSharedPtr<FJsonObject>> LocalExpressions;
		TMap<FName, UEdGraphPin*> LocalValuePins;
		TMap<FName, FName> BoundDelegateFunctions;
	};

	class FEventBodyBuilder {
	public:
		FEventBodyBuilder(
			UBlueprint* InBlueprint,
			FUObjectExport* InUbergraph,
			FUObjectExport* InWrapper,
			UEdGraph* InGraph,
			UEdGraphNode* InEventNode,
			const int32 InEntryOffset,
			const int32 InBaseY)
			: Blueprint(InBlueprint), Ubergraph(InUbergraph), Wrapper(InWrapper), Graph(InGraph), EventNode(InEventNode),
			  EntryOffset(InEntryOffset), BaseY(InBaseY), Schema(GetDefault<UEdGraphSchema_K2>()) {
			BuildPersistentParameterMap(Wrapper, PersistentParameterNames);
		}

		bool Build() {
			if (!Blueprint || !Ubergraph || !Graph || !EventNode || !Schema) return false;
			const TArray<TSharedPtr<FJsonValue>>* BytecodePtr = nullptr;
			if (!Ubergraph->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), BytecodePtr) || !BytecodePtr) return false;
			Bytecode = *BytecodePtr;
			for (int32 Index = 0; Index < Bytecode.Num(); ++Index) {
				const TSharedPtr<FJsonObject> Statement = GetStatement(Index);
				if (!Statement.IsValid() || !Statement->HasField(TEXT("StatementIndex"))) continue;
				StatementIndexToArrayIndex.Add(static_cast<int32>(Statement->GetNumberField(TEXT("StatementIndex"))), Index);
			}

			const int32* EntryArrayIndex = StatementIndexToArrayIndex.Find(EntryOffset);
			if (!EntryArrayIndex) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: %s entry offset %d was not found in %s"),
					*Wrapper->GetName().ToString(), EntryOffset, *Ubergraph->GetName().ToString());
				return false;
			}

			UEdGraphPin* EventExec = EventFindExecOutput(EventNode);
			if (!EventExec) return false;
			FEventBuildState State;
			TSet<int32> Visited;
			return BuildFlow(*EntryArrayIndex, EventExec, State, Visited, 1, BaseY);
		}

	private:
		UBlueprint* Blueprint = nullptr;
		FUObjectExport* Ubergraph = nullptr;
		FUObjectExport* Wrapper = nullptr;
		UEdGraph* Graph = nullptr;
		UEdGraphNode* EventNode = nullptr;
		int32 EntryOffset = INDEX_NONE;
		int32 BaseY = 0;
		const UEdGraphSchema_K2* Schema = nullptr;
		TArray<TSharedPtr<FJsonValue>> Bytecode;
		TMap<int32, int32> StatementIndexToArrayIndex;
		TMap<FName, FName> PersistentParameterNames;
		int32 DataNodeSerial = 0;
		int32 ExecNodeSerial = 0;
		int32 ReconstructedDelegateOps = 0;
		int32 UnresolvedDelegateOps = 0;

		TSharedPtr<FJsonObject> GetStatement(const int32 Index) const {
			if (!Bytecode.IsValidIndex(Index) || !Bytecode[Index].IsValid() || Bytecode[Index]->Type != EJson::Object) return nullptr;
			return Bytecode[Index]->AsObject();
		}

		FName GetVariablePropertyName(const TSharedPtr<FJsonObject>& VariableExpression) const {
			if (!VariableExpression.IsValid()) return NAME_None;
			const TSharedPtr<FJsonObject>* Variable = nullptr;
			const TSharedPtr<FJsonObject>* Property = nullptr;
			if (!VariableExpression->TryGetObjectField(TEXT("Variable"), Variable) || !(*Variable)->TryGetObjectField(TEXT("Property"), Property)) return NAME_None;
			FString Name;
			return (*Property)->TryGetStringField(TEXT("Name"), Name) ? FName(*Name) : NAME_None;
		}

		int32 DataX(const int32 Depth) const { return 260 + Depth * 360; }
		int32 AllocateDataY(const int32 BranchY) { return BranchY - 220 - (DataNodeSerial++ % 6) * 140; }
		int32 ExecX(const int32 Depth) { return 300 + (Depth + ExecNodeSerial++) * 300; }

		bool ConnectExec(UEdGraphPin* From, UEdGraphNode* Node) {
			if (!From || !Node) return false;
			UEdGraphPin* To = EventFindExecInput(Node);
			return To ? Schema->TryCreateConnection(From, To) : false;
		}

		UClass* ResolveVariableOwnerClass(const TSharedPtr<FJsonObject>& VariableObject) const {
			if (!VariableObject.IsValid()) return nullptr;
			const TSharedPtr<FJsonObject>* Owner = nullptr;
			if (!VariableObject->TryGetObjectField(TEXT("Owner"), Owner)) return nullptr;
			return EventResolveOwnerClass(*Owner, Blueprint);
		}

		UEdGraphPin* EventParameterPinForPersistentName(const FName PersistentName) const {
			const FName* ParameterName = PersistentParameterNames.Find(PersistentName);
			return ParameterName ? EventNode->FindPin(*ParameterName, EGPD_Output) : nullptr;
		}

		UEdGraphPin* BuildVariableGet(const TSharedPtr<FJsonObject>& VariableObject, FEventBuildState& State, const int32 Depth, const int32 Y, UEdGraphPin* TargetObject = nullptr) {
			if (!VariableObject.IsValid()) return nullptr;
			const TSharedPtr<FJsonObject>* PropertyJson = nullptr;
			if (!VariableObject->TryGetObjectField(TEXT("Property"), PropertyJson)) return nullptr;
			FString PropertyName;
			if (!(*PropertyJson)->TryGetStringField(TEXT("Name"), PropertyName)) return nullptr;
			const FName Name(*PropertyName);

			if (const FName* CallbackFunctionName = State.BoundDelegateFunctions.Find(Name)) {
				if (UK2Node_CustomEvent* CallbackEvent = FindCallbackCustomEvent(*CallbackFunctionName)) {
					if (UEdGraphPin* DelegatePin = CallbackEvent->FindPin(TEXT("OutputDelegate"), EGPD_Output)) return DelegatePin;
					for (UEdGraphPin* Pin : CallbackEvent->Pins) {
						if (Pin && Pin->Direction == EGPD_Output && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Delegate) return Pin;
					}
				}
			}

			if (UEdGraphPin** ExistingValuePin = State.LocalValuePins.Find(Name)) {
				if (*ExistingValuePin) return *ExistingValuePin;
			}
			if (UEdGraphPin* EventPin = EventParameterPinForPersistentName(Name)) return EventPin;
			if (const TSharedPtr<FJsonObject>* CachedExpression = State.LocalExpressions.Find(Name)) {
				return BuildDataSource(*CachedExpression, State, Depth, Y);
			}

			UClass* OwnerClass = ResolveVariableOwnerClass(VariableObject);
			if (!OwnerClass) OwnerClass = Blueprint->SkeletonGeneratedClass ? Blueprint->SkeletonGeneratedClass : Blueprint->GeneratedClass;
			if (!OwnerClass) return nullptr;
			FProperty* Property = FindFProperty<FProperty>(OwnerClass, Name);
			if (!Property && Blueprint->GeneratedClass) Property = FindFProperty<FProperty>(Blueprint->GeneratedClass, Name);
			if (!Property) return nullptr;

			UK2Node_VariableGet* Node = EventAddNode<UK2Node_VariableGet>(Graph, DataX(Depth), AllocateDataY(Y));
			const bool bSelfContext = TargetObject == nullptr && (OwnerClass == Blueprint->GeneratedClass ||
				OwnerClass == Blueprint->SkeletonGeneratedClass || (Blueprint->GeneratedClass && Blueprint->GeneratedClass->IsChildOf(OwnerClass)));
			Node->SetFromProperty(Property, bSelfContext, OwnerClass);
			Node->AllocateDefaultPins();
			if (TargetObject) {
				if (UEdGraphPin* SelfPin = Node->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input)) Schema->TryCreateConnection(TargetObject, SelfPin);
			}
			return Node->GetValuePin();
		}

		UFunction* ResolveCallFunction(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetObject) const {
			if (!Expression.IsValid()) return nullptr;
			const TSharedPtr<FJsonObject>* FunctionRef = nullptr;
			if (Expression->TryGetObjectField(TEXT("Function"), FunctionRef)) return EventResolveFunctionReference(*FunctionRef, Blueprint);

			FString FunctionName;
			if (Expression->TryGetStringField(TEXT("Function"), FunctionName)) {
				UClass* Scope = EventGetClassFromPin(TargetObject);
				if (!Scope) Scope = Blueprint->GeneratedClass ? Blueprint->GeneratedClass : Blueprint->SkeletonGeneratedClass;
				if (Scope) {
					if (UFunction* Function = Scope->FindFunctionByName(FName(*FunctionName))) return Function;
				}
				if (Blueprint->ParentClass) return Blueprint->ParentClass->FindFunctionByName(FName(*FunctionName));
			}
			return nullptr;
		}

		UK2Node_CallFunction* BuildCallNode(const TSharedPtr<FJsonObject>& Expression, FEventBuildState& State, const int32 Depth, const int32 Y, UEdGraphPin* TargetObject) {
			UFunction* Function = ResolveCallFunction(Expression, TargetObject);
			if (!Function) {
				FString MissingFunctionName;
				if (Expression.IsValid()) {
					if (!Expression->TryGetStringField(TEXT("Function"), MissingFunctionName)) {
						const TSharedPtr<FJsonObject>* FunctionRef = nullptr;
						if (Expression->TryGetObjectField(TEXT("Function"), FunctionRef)) MissingFunctionName = EventGetReferenceMemberName(*FunctionRef);
					}
				}
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: could not resolve call %s while rebuilding %s"),
					*MissingFunctionName, *Wrapper->GetName().ToString());
				return nullptr;
			}
			const bool bPure = Function->HasAnyFunctionFlags(FUNC_BlueprintPure);
			UK2Node_CallFunction* Node = EventAddNode<UK2Node_CallFunction>(Graph,
				bPure ? DataX(Depth) : ExecX(Depth), bPure ? AllocateDataY(Y) : Y);
			Node->SetFromFunction(Function);
			Node->AllocateDefaultPins();
			if (TargetObject && !Function->HasAnyFunctionFlags(FUNC_Static)) {
				if (UEdGraphPin* SelfPin = Node->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input)) Schema->TryCreateConnection(TargetObject, SelfPin);
			}

			const TArray<TSharedPtr<FJsonValue>>* Parameters = nullptr;
			Expression->TryGetArrayField(TEXT("Parameters"), Parameters);
			int32 JsonParameterIndex = 0;
			for (TFieldIterator<FProperty> It(Function); It; ++It) {
				FProperty* Parameter = *It;
				if (!Parameter->HasAnyPropertyFlags(CPF_Parm) || Parameter->HasAnyPropertyFlags(CPF_ReturnParm)) continue;
				if (Parameter->HasAnyPropertyFlags(CPF_OutParm) && !Parameter->HasAnyPropertyFlags(CPF_ReferenceParm)) continue;
				if (!Parameters || !Parameters->IsValidIndex(JsonParameterIndex)) break;
				UEdGraphPin* Pin = Node->FindPin(Parameter->GetFName(), EGPD_Input);
				if (Pin && (*Parameters)[JsonParameterIndex].IsValid() && (*Parameters)[JsonParameterIndex]->Type == EJson::Object) {
					const TSharedPtr<FJsonObject> ParameterExpression = (*Parameters)[JsonParameterIndex]->AsObject();
					if (!ApplyExpression(ParameterExpression, Pin, State, Depth, Y)) {
						FString ParameterToken;
						ParameterExpression->TryGetStringField(TEXT("Token"), ParameterToken);
						UE_LOG(LogCrimeForgeJsonImporter, Warning,
							TEXT("Event graph reconstruction: unsupported parameter expression %s for %s.%s while rebuilding %s"),
							*ParameterToken, *Function->GetName(), *Parameter->GetName(), *Wrapper->GetName().ToString());
					}
				}
				++JsonParameterIndex;
			}
			return Node;
		}

		UEdGraphPin* BuildContextDataSource(const TSharedPtr<FJsonObject>& Expression, FEventBuildState& State, const int32 Depth, const int32 Y) {
			const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
			const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
			if (!Expression->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) ||
				!Expression->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return nullptr;
			UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression, State, Depth, Y);
			if (!ObjectPin) return nullptr;
			FString Token;
			(*ContextExpression)->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_InstanceVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				return (*ContextExpression)->TryGetObjectField(TEXT("Variable"), Variable)
					? BuildVariableGet(*Variable, State, Depth, Y, ObjectPin) : nullptr;
			}
			if (Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") ||
				Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
				if (UK2Node_CallFunction* Call = BuildCallNode(*ContextExpression, State, Depth, Y, ObjectPin)) return Call->GetReturnValuePin();
			}
			return nullptr;
		}

		UEdGraphPin* BuildDataSource(const TSharedPtr<FJsonObject>& Expression, FEventBuildState& State, const int32 Depth, const int32 Y) {
			if (!Expression.IsValid()) return nullptr;
			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_LocalVariable") || Token == TEXT("EX_LocalOutVariable") || Token == TEXT("EX_InstanceVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				return Expression->TryGetObjectField(TEXT("Variable"), Variable) ? BuildVariableGet(*Variable, State, Depth, Y) : nullptr;
			}
			if (Token == TEXT("EX_Context")) return BuildContextDataSource(Expression, State, Depth, Y);
			if (Token == TEXT("EX_CallMath") || Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") ||
				Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
				if (UK2Node_CallFunction* Call = BuildCallNode(Expression, State, Depth, Y, nullptr)) return Call->GetReturnValuePin();
			}
			if (Token == TEXT("EX_Self")) {
				UK2Node_Self* Node = EventAddNode<UK2Node_Self>(Graph, DataX(Depth), AllocateDataY(Y));
				Node->AllocateDefaultPins();
				for (UEdGraphPin* Pin : Node->Pins) if (Pin && Pin->Direction == EGPD_Output) return Pin;
			}
			return nullptr;
		}

		bool ApplySwitchValue(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetPin, FEventBuildState& State, const int32 Depth, const int32 Y) {
			if (!Expression.IsValid() || !TargetPin) return false;

			const TSharedPtr<FJsonObject>* IndexTerm = nullptr;
			if (!Expression->TryGetObjectField(TEXT("IndexTerm"), IndexTerm) || !IndexTerm || !IndexTerm->IsValid()) return false;

			// Reconstruct Select the same way it is authored in the Blueprint editor:
			//   1) create a wildcard Select,
			//   2) connect ReturnValue to its typed consumer so the option/result type specializes,
			//   3) connect the Index expression so UK2Node_Select selects bool/enum/int mode and
			//      regenerates the correct option pins,
			//   4) populate the cooked option values.
			//
			// Setting PinType/SetEnum by hand before these connections produces a node that can
			// look correct in the editor while its internal wildcard state remains unresolved.
			UK2Node_Select* Select = EventAddNode<UK2Node_Select>(Graph, DataX(Depth), AllocateDataY(Y));
			Select->AllocateDefaultPins();

			UEdGraphPin* ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin || !Schema->TryCreateConnection(ReturnPin, TargetPin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: could not specialize Select output from consumer pin %s while rebuilding %s"),
					*TargetPin->PinName.ToString(), *Wrapper->GetName().ToString());
				return false;
			}
			// TryCreateConnection normally notifies both nodes, but explicitly notify the Select
			// as well so its wildcard option pins are specialized before the index is attached.
			Select->PinConnectionListChanged(ReturnPin);

			// The editor normally infers enum Select mode when an enum wire is dropped on Index,
			// but programmatic schema connections in UE5.5 do not reliably trigger the internal
			// enum-option rebuild. Recover the cooked enum metadata *after* the output has been
			// specialized, then force the same option regeneration SetEnum performs in the editor.
			auto ResolveIndexEnum = [](const TSharedPtr<FJsonObject>& InExpression) -> UEnum* {
				if (!InExpression.IsValid()) return nullptr;
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				const TSharedPtr<FJsonObject>* Property = nullptr;
				const TSharedPtr<FJsonObject>* EnumRef = nullptr;
				if (!InExpression->TryGetObjectField(TEXT("Variable"), Variable) || !Variable || !Variable->IsValid() ||
					!(*Variable)->TryGetObjectField(TEXT("Property"), Property) || !Property || !Property->IsValid() ||
					!(*Property)->TryGetObjectField(TEXT("Enum"), EnumRef) || !EnumRef || !EnumRef->IsValid()) {
					return nullptr;
				}

				FString ObjectName;
				FString ObjectPath;
				(*EnumRef)->TryGetStringField(TEXT("ObjectName"), ObjectName);
				(*EnumRef)->TryGetStringField(TEXT("ObjectPath"), ObjectPath);
				const FString EnumName = EventGetInsideQuotes(ObjectName);
				if (EnumName.IsEmpty() || ObjectPath.IsEmpty()) return nullptr;

				FString PackagePath = ObjectPath;
				int32 DotIndex = INDEX_NONE;
				if (PackagePath.FindLastChar(TEXT('.'), DotIndex)) {
					const FString Suffix = PackagePath.Mid(DotIndex + 1);
					if (Suffix.IsNumeric()) PackagePath.LeftInline(DotIndex);
				}
				return LoadObject<UEnum>(nullptr, *(PackagePath + TEXT(".") + EnumName));
			};

			UEnum* CookedIndexEnum = ResolveIndexEnum(*IndexTerm);
			if (CookedIndexEnum) {
				Select->SetEnum(CookedIndexEnum, true);
			}

			// SetEnum reconstructs the node, so the output link may have been replaced. Reapply
			// the typed consumer connection before wiring Index. This preserves ESlateVisibility
			// (or whatever the consumer expects) across the enum-option reconstruction.
			ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin) return false;
			if (!ReturnPin->LinkedTo.Contains(TargetPin) && !Schema->TryCreateConnection(ReturnPin, TargetPin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: Select lost its typed output connection while generating enum options for %s in %s"),
					*TargetPin->PinName.ToString(), *Wrapper->GetName().ToString());
				return false;
			}
			Select->PinConnectionListChanged(ReturnPin);

			UEdGraphPin* IndexPin = Select->GetIndexPin();
			if (!IndexPin || !ApplyExpression(*IndexTerm, IndexPin, State, Depth, Y)) return false;
			if (UEdGraphPin* CurrentIndexPin = Select->GetIndexPin()) {
				Select->PinConnectionListChanged(CurrentIndexPin);
			}

			// Index reconstruction can replace ReturnValue. Restore the typed consumer link if
			// necessary; this second real schema connection is intentionally preferred over
			// manually assigning FEdGraphPinType.
			ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin) return false;
			if (!ReturnPin->LinkedTo.Contains(TargetPin)) {
				if (!Schema->TryCreateConnection(ReturnPin, TargetPin)) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Event graph reconstruction: Select lost its typed output connection to %s after index specialization in %s"),
						*TargetPin->PinName.ToString(), *Wrapper->GetName().ToString());
					return false;
				}
			}
			Select->PinConnectionListChanged(ReturnPin);

			const TArray<TSharedPtr<FJsonValue>>* Cases = nullptr;
			Expression->TryGetArrayField(TEXT("Cases"), Cases);

			TArray<UEdGraphPin*> Options;
			Select->GetOptionPins(Options);

			UEnum* IndexEnum = Select->GetEnum();
			if (!IndexEnum) {
				if (UEdGraphPin* CurrentIndexPin = Select->GetIndexPin()) {
#if ENGINE_UE5
					IndexEnum = Cast<UEnum>(CurrentIndexPin->PinType.PinSubCategoryObject.Get());
#else
					IndexEnum = Cast<UEnum>(CurrentIndexPin->PinType.PinSubCategoryObject);
#endif
				}
			}

			// Integer Selects do not automatically know how many cooked cases there were. Enum
			// and bool Selects are already rebuilt from their connected index type.
			if (!IndexEnum && Cases && Select->GetIndexPin() &&
				Select->GetIndexPin()->PinType.PinCategory != UEdGraphSchema_K2::PC_Boolean) {
				while (Options.Num() < Cases->Num() && Select->CanAddPin()) {
					Select->AddInputPin();
					Options.Reset();
					Select->GetOptionPins(Options);
				}
			}

			TArray<bool> Populated;
			Populated.Init(false, Options.Num());
			if (Cases) {
				for (int32 CaseArrayIndex = 0; CaseArrayIndex < Cases->Num(); ++CaseArrayIndex) {
					if (!(*Cases)[CaseArrayIndex].IsValid() || (*Cases)[CaseArrayIndex]->Type != EJson::Object) continue;
					const TSharedPtr<FJsonObject> Case = (*Cases)[CaseArrayIndex]->AsObject();
					const TSharedPtr<FJsonObject>* CaseTerm = nullptr;
					if (!Case->TryGetObjectField(TEXT("CaseTerm"), CaseTerm) || !CaseTerm || !CaseTerm->IsValid()) continue;

					int32 OptionIndex = CaseArrayIndex;
					const TSharedPtr<FJsonObject>* CaseIndexTerm = nullptr;
					if (Case->TryGetObjectField(TEXT("CaseIndexValueTerm"), CaseIndexTerm) && CaseIndexTerm && CaseIndexTerm->IsValid()) {
						FString IndexToken;
						(*CaseIndexTerm)->TryGetStringField(TEXT("Token"), IndexToken);
						if (IndexToken == TEXT("EX_False")) OptionIndex = 0;
						else if (IndexToken == TEXT("EX_True")) OptionIndex = 1;
						else if ((IndexToken == TEXT("EX_ByteConst") || IndexToken == TEXT("EX_IntConst") || IndexToken == TEXT("EX_Int64Const")) &&
							(*CaseIndexTerm)->HasField(TEXT("Value"))) {
							const int64 CaseValue = static_cast<int64>((*CaseIndexTerm)->GetNumberField(TEXT("Value")));
							OptionIndex = static_cast<int32>(CaseValue);
							if (IndexEnum) {
								const FString EnumEntry = IndexEnum->GetNameStringByValue(CaseValue);
								for (int32 PinIndex = 0; PinIndex < Options.Num(); ++PinIndex) {
									if (Options[PinIndex] && Options[PinIndex]->PinName.ToString().EndsWith(EnumEntry)) {
										OptionIndex = PinIndex;
										break;
									}
								}
							}
						}
					}

					if (Options.IsValidIndex(OptionIndex) && Options[OptionIndex]) {
						ApplyExpression(*CaseTerm, Options[OptionIndex], State, Depth, Y);
						Populated[OptionIndex] = true;
					}
				}
			}

			const TSharedPtr<FJsonObject>* DefaultTerm = nullptr;
			if (Expression->TryGetObjectField(TEXT("DefaultTerm"), DefaultTerm) && DefaultTerm && DefaultTerm->IsValid()) {
				for (int32 OptionIndex = 0; OptionIndex < Options.Num(); ++OptionIndex) {
					if (!Populated.IsValidIndex(OptionIndex) || !Populated[OptionIndex]) {
						ApplyExpression(*DefaultTerm, Options[OptionIndex], State, Depth, Y);
					}
				}
			}

			return true;
		}

		bool ApplyExpression(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetPin, FEventBuildState& State, const int32 Depth, const int32 Y) {
			if (!Expression.IsValid() || !TargetPin) return false;
			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_LocalVariable") || Token == TEXT("EX_LocalOutVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				const TSharedPtr<FJsonObject>* Property = nullptr;
				if (Expression->TryGetObjectField(TEXT("Variable"), Variable) && (*Variable)->TryGetObjectField(TEXT("Property"), Property)) {
					FString Name;
					if ((*Property)->TryGetStringField(TEXT("Name"), Name)) {
						const FName VariableName(*Name);
						if (UEdGraphPin** ExistingValuePin = State.LocalValuePins.Find(VariableName)) {
							if (*ExistingValuePin && Schema->TryCreateConnection(*ExistingValuePin, TargetPin)) return true;
						}
						if (const FName* CallbackFunctionName = State.BoundDelegateFunctions.Find(VariableName)) {
							if (TargetPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Delegate &&
								BuildCreateDelegateSource(*CallbackFunctionName, TargetPin, Depth, Y)) {
								return true;
							}
							// Fallback for unusual delegate-like pins that the CreateDelegate node cannot adopt.
							if (UK2Node_CustomEvent* CallbackEvent = FindCallbackCustomEvent(*CallbackFunctionName)) {
								UEdGraphPin* DelegatePin = CallbackEvent->FindPin(TEXT("OutputDelegate"), EGPD_Output);
								if (DelegatePin && Schema->TryCreateConnection(DelegatePin, TargetPin)) return true;
							}
						}
						if (UEdGraphPin* EventPin = EventParameterPinForPersistentName(VariableName)) return Schema->TryCreateConnection(EventPin, TargetPin);
						if (const TSharedPtr<FJsonObject>* Cached = State.LocalExpressions.Find(VariableName)) return ApplyExpression(*Cached, TargetPin, State, Depth, Y);
					}
				}
			}
			if (Token == TEXT("EX_ObjectConst")) {
				const TSharedPtr<FJsonObject>* Value = nullptr;
				if (!Expression->TryGetObjectField(TEXT("Value"), Value) || !Value || !Value->IsValid()) return false;

				FString ObjectName;
				FString ObjectPath;
				(*Value)->TryGetStringField(TEXT("ObjectName"), ObjectName);
				(*Value)->TryGetStringField(TEXT("ObjectPath"), ObjectPath);
				const FString ResolvedName = EventGetInsideQuotes(ObjectName);

				// UEParse/FModel references cooked exports as Package.AssetExportIndex (for
				// example WBP_LoadoutScreen.186). That is not a loadable editor object path.
				// Strip only a numeric export suffix, then rebuild Package.ObjectName.
				FString PackagePath = ObjectPath;
				int32 DotIndex = INDEX_NONE;
				if (PackagePath.FindLastChar(TEXT('.'), DotIndex)) {
					const FString Suffix = PackagePath.Mid(DotIndex + 1);
					if (Suffix.IsNumeric()) PackagePath.LeftInline(DotIndex);
				}

				FString LoadPath;
				if (PackagePath.StartsWith(TEXT("/Script/"))) {
					LoadPath = PackagePath + TEXT(".") + ResolvedName;
				} else if (PackagePath.StartsWith(TEXT("/Game/"))) {
					const FString ExpectedSuffix = TEXT(".") + ResolvedName;
					LoadPath = PackagePath.EndsWith(ExpectedSuffix) ? PackagePath : PackagePath + ExpectedSuffix;
				}

				UObject* Object = LoadPath.IsEmpty() ? nullptr : LoadObject<UObject>(nullptr, *LoadPath);
				if (!Object) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Event graph reconstruction: could not resolve EX_ObjectConst %s (%s) for pin %s while rebuilding %s"),
						*ObjectName, *ObjectPath, *TargetPin->PinName.ToString(), *Wrapper->GetName().ToString());
					return false;
				}

				Schema->TrySetDefaultObject(*TargetPin, Object, true);
				return true;
			}

			if (Token == TEXT("EX_SwitchValue")) return ApplySwitchValue(Expression, TargetPin, State, Depth, Y);
			if (Token == TEXT("EX_True")) { Schema->TrySetDefaultValue(*TargetPin, TEXT("true"), true); return true; }
			if (Token == TEXT("EX_False")) { Schema->TrySetDefaultValue(*TargetPin, TEXT("false"), true); return true; }
			if (Token == TEXT("EX_NoObject") || Token == TEXT("EX_Nothing")) { Schema->TrySetDefaultObject(*TargetPin, nullptr, true); return true; }
			if (Token == TEXT("EX_IntConst") || Token == TEXT("EX_Int64Const") || Token == TEXT("EX_ByteConst") ||
				Token == TEXT("EX_FloatConst") || Token == TEXT("EX_DoubleConst")) {
				if (!Expression->HasField(TEXT("Value"))) return false;
				const double Value = Expression->GetNumberField(TEXT("Value"));
				FString Default = FString::SanitizeFloat(Value);
				if (Token == TEXT("EX_IntConst") || Token == TEXT("EX_Int64Const") || Token == TEXT("EX_ByteConst")) {
					Default = FString::Printf(TEXT("%lld"), static_cast<long long>(Value));
				}
				if (Token == TEXT("EX_ByteConst")) {
#if ENGINE_UE5
					UEnum* Enum = Cast<UEnum>(TargetPin->PinType.PinSubCategoryObject.Get());
#else
					UEnum* Enum = Cast<UEnum>(TargetPin->PinType.PinSubCategoryObject);
#endif
					if (Enum) {
						const FString EnumName = Enum->GetNameStringByValue(static_cast<int64>(Value));
						if (!EnumName.IsEmpty()) Default = EnumName;
					}
				}
				Schema->TrySetDefaultValue(*TargetPin, Default, true);
				return true;
			}
			if (Token == TEXT("EX_NameConst") || Token == TEXT("EX_StringConst")) {
				FString Value;
				if (!Expression->TryGetStringField(TEXT("Value"), Value)) return false;
				Schema->TrySetDefaultValue(*TargetPin, Value, true);
				return true;
			}
			if (UEdGraphPin* Source = BuildDataSource(Expression, State, Depth, Y)) return Schema->TryCreateConnection(Source, TargetPin);
			return false;
		}

		bool BuildExecutableLocalAssignment(
			const TSharedPtr<FJsonObject>& Statement,
			UEdGraphPin*& ExecTail,
			FEventBuildState& State,
			const int32 Depth,
			const int32 Y) {
			if (!Statement.IsValid()) return false;
			const TSharedPtr<FJsonObject>* VariableExpression = nullptr;
			const TSharedPtr<FJsonObject>* Variable = nullptr;
			const TSharedPtr<FJsonObject>* Property = nullptr;
			const TSharedPtr<FJsonObject>* Expression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Variable"), VariableExpression) ||
				!Statement->TryGetObjectField(TEXT("Expression"), Expression)) return false;

			FString VariableToken;
			(*VariableExpression)->TryGetStringField(TEXT("Token"), VariableToken);
			if (VariableToken != TEXT("EX_LocalVariable") && VariableToken != TEXT("EX_LocalOutVariable")) return false;
			if (!(*VariableExpression)->TryGetObjectField(TEXT("Variable"), Variable) ||
				!(*Variable)->TryGetObjectField(TEXT("Property"), Property)) return false;

			FString VariableNameString;
			if (!(*Property)->TryGetStringField(TEXT("Name"), VariableNameString)) return false;
			const FName VariableName(*VariableNameString);

			FString ExpressionToken;
			(*Expression)->TryGetStringField(TEXT("Token"), ExpressionToken);
			UK2Node_CallFunction* Call = nullptr;

			if (ExpressionToken == TEXT("EX_CallMath") || ExpressionToken == TEXT("EX_FinalFunction") ||
				ExpressionToken == TEXT("EX_LocalFinalFunction") || ExpressionToken == TEXT("EX_VirtualFunction") ||
				ExpressionToken == TEXT("EX_LocalVirtualFunction")) {
				UFunction* Function = ResolveCallFunction(*Expression, nullptr);
				if (!Function || Function->HasAnyFunctionFlags(FUNC_BlueprintPure)) return false;
				Call = BuildCallNode(*Expression, State, Depth, Y, nullptr);
			} else if (ExpressionToken == TEXT("EX_Context")) {
				const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
				const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
				if (!(*Expression)->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) ||
					!(*Expression)->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return false;
				UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression, State, Depth, Y);
				if (!ObjectPin) return false;
				UFunction* Function = ResolveCallFunction(*ContextExpression, ObjectPin);
				if (!Function || Function->HasAnyFunctionFlags(FUNC_BlueprintPure)) return false;
				Call = BuildCallNode(*ContextExpression, State, Depth, Y, ObjectPin);
			}

			if (!Call) return false;
			if (!ConnectExec(ExecTail, Call)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: could not connect impure compiler-temp call %s while rebuilding %s"),
					*Call->GetName(), *Wrapper->GetName().ToString());
			}
			ExecTail = EventFindExecOutput(Call);
			if (UEdGraphPin* ReturnPin = Call->GetReturnValuePin()) {
				State.LocalValuePins.Add(VariableName, ReturnPin);
				State.LocalExpressions.Remove(VariableName);
			}
			return true;
		}

		bool CacheLocalAssignment(const TSharedPtr<FJsonObject>& Statement, FEventBuildState& State) {
			const TSharedPtr<FJsonObject>* VariableExpression = nullptr;
			const TSharedPtr<FJsonObject>* Variable = nullptr;
			const TSharedPtr<FJsonObject>* Property = nullptr;
			const TSharedPtr<FJsonObject>* Expression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Variable"), VariableExpression)) return false;
			FString VariableToken;
			(*VariableExpression)->TryGetStringField(TEXT("Token"), VariableToken);
			if (VariableToken != TEXT("EX_LocalVariable") && VariableToken != TEXT("EX_LocalOutVariable")) return false;
			if (!(*VariableExpression)->TryGetObjectField(TEXT("Variable"), Variable) || !(*Variable)->TryGetObjectField(TEXT("Property"), Property) ||
				!Statement->TryGetObjectField(TEXT("Expression"), Expression)) return false;
			FString Name;
			if (!(*Property)->TryGetStringField(TEXT("Name"), Name)) return false;
			State.LocalExpressions.Add(FName(*Name), *Expression);
			return true;
		}

		UK2Node_VariableSet* BuildMemberAssignment(const TSharedPtr<FJsonObject>& Statement, FEventBuildState& State, const int32 Depth, const int32 Y) {
			const TSharedPtr<FJsonObject>* VariableExpression = nullptr;
			const TSharedPtr<FJsonObject>* Variable = nullptr;
			const TSharedPtr<FJsonObject>* PropertyJson = nullptr;
			const TSharedPtr<FJsonObject>* Expression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Variable"), VariableExpression)) return nullptr;
			FString VariableToken;
			(*VariableExpression)->TryGetStringField(TEXT("Token"), VariableToken);
			if (VariableToken != TEXT("EX_InstanceVariable")) return nullptr;
			if (!(*VariableExpression)->TryGetObjectField(TEXT("Variable"), Variable) || !(*Variable)->TryGetObjectField(TEXT("Property"), PropertyJson) ||
				!Statement->TryGetObjectField(TEXT("Expression"), Expression)) return nullptr;
			FString PropertyName;
			if (!(*PropertyJson)->TryGetStringField(TEXT("Name"), PropertyName)) return nullptr;
			UClass* OwnerClass = ResolveVariableOwnerClass(*Variable);
			if (!OwnerClass) OwnerClass = Blueprint->GeneratedClass ? Blueprint->GeneratedClass : Blueprint->SkeletonGeneratedClass;
			FProperty* Property = OwnerClass ? FindFProperty<FProperty>(OwnerClass, FName(*PropertyName)) : nullptr;
			if (!Property) return nullptr;
			UK2Node_VariableSet* Node = EventAddNode<UK2Node_VariableSet>(Graph, ExecX(Depth), Y);
			Node->SetFromProperty(Property, true, OwnerClass);
			Node->AllocateDefaultPins();

			// UK2Node_Variable::GetValuePin() is the getter-oriented helper and
			// asserts that the resolved value pin is an output. VariableSet nodes
			// expose the property value as an input, so resolve it explicitly.
			if (UEdGraphPin* ValuePin = Node->FindPin(Property->GetFName(), EGPD_Input)) {
				ApplyExpression(*Expression, ValuePin, State, Depth, Y);
			}
			return Node;
		}


		UK2Node_CustomEvent* FindCallbackCustomEvent(const FName FunctionName) const {
			if (!Graph || FunctionName.IsNone()) return nullptr;
			for (UEdGraphNode* Node : Graph->Nodes) {
				if (UK2Node_CustomEvent* CustomEvent = Cast<UK2Node_CustomEvent>(Node)) {
					if (CustomEvent->CustomFunctionName == FunctionName) return CustomEvent;
				}
			}
			return nullptr;
		}

		UEdGraphPin* BuildCreateDelegateSource(
			const FName CallbackFunctionName,
			UEdGraphPin* TargetDelegatePin,
			const int32 Depth,
			const int32 Y) {
			if (CallbackFunctionName.IsNone() || !TargetDelegatePin ||
				TargetDelegatePin->PinType.PinCategory != UEdGraphSchema_K2::PC_Delegate) return nullptr;

			// A cooked EX_BindDelegate is the compiler expansion of a Blueprint Create Event.
			// Recreate that node explicitly rather than wiring a CustomEvent.OutputDelegate pin
			// straight into an arbitrary delegate pin. The CreateDelegate node adopts the
			// target delegate signature and validates the selected callback function for us.
			UK2Node_CreateDelegate* CreateDelegate = EventAddNode<UK2Node_CreateDelegate>(
				Graph, DataX(Depth), AllocateDataY(Y));
			CreateDelegate->AllocateDefaultPins();

			UK2Node_Self* SelfNode = EventAddNode<UK2Node_Self>(Graph, DataX(Depth), AllocateDataY(Y));
			SelfNode->AllocateDefaultPins();
			UEdGraphPin* SelfOut = nullptr;
			for (UEdGraphPin* Pin : SelfNode->Pins) {
				if (Pin && Pin->Direction == EGPD_Output) { SelfOut = Pin; break; }
			}
			if (SelfOut && CreateDelegate->GetObjectInPin()) {
				Schema->TryCreateConnection(SelfOut, CreateDelegate->GetObjectInPin());
			}

			// Mimic the editor's Create Event workflow: the node first adopts the delegate
			// signature from the pin it is being connected to, and only then is a compatible
			// callback selected from the dropdown. Selecting the function while the output is
			// still an untyped delegate causes HandleAnyChange() to clear it again.
			UEdGraphPin* DelegateOut = CreateDelegate->GetDelegateOutPin();
			if (!DelegateOut) return nullptr;
			DelegateOut->PinType = TargetDelegatePin->PinType;
			if (!Schema->TryCreateConnection(DelegateOut, TargetDelegatePin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: Create Event for %s could not adopt delegate signature from pin %s while rebuilding %s"),
					*CallbackFunctionName.ToString(), *TargetDelegatePin->PinName.ToString(), *Wrapper->GetName().ToString());
				return nullptr;
			}
			CreateDelegate->HandleAnyChangeWithoutNotifying();

			CreateDelegate->SetFunction(CallbackFunctionName);
			if (UK2Node_CustomEvent* CallbackEvent = FindCallbackCustomEvent(CallbackFunctionName)) {
				CreateDelegate->SelectedFunctionGuid = CallbackEvent->NodeGuid;
			}
			CreateDelegate->HandleAnyChangeWithoutNotifying();

			// HandleAnyChange may reconstruct pins. Reacquire the object/output pins and
			// restore both connections if reconstruction replaced the original pin objects.
			if (SelfOut && CreateDelegate->GetObjectInPin() &&
				!CreateDelegate->GetObjectInPin()->LinkedTo.Contains(SelfOut)) {
				Schema->TryCreateConnection(SelfOut, CreateDelegate->GetObjectInPin());
			}
			DelegateOut = CreateDelegate->GetDelegateOutPin();
			if (!DelegateOut) return nullptr;
			DelegateOut->PinType = TargetDelegatePin->PinType;
			if (!DelegateOut->LinkedTo.Contains(TargetDelegatePin) &&
				!Schema->TryCreateConnection(DelegateOut, TargetDelegatePin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: Create Event for %s lost its delegate connection to pin %s while rebuilding %s"),
					*CallbackFunctionName.ToString(), *TargetDelegatePin->PinName.ToString(), *Wrapper->GetName().ToString());
				return nullptr;
			}

			if (CreateDelegate->SelectedFunctionName != CallbackFunctionName) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: Create Event signature rejected callback %s while rebuilding %s"),
					*CallbackFunctionName.ToString(), *Wrapper->GetName().ToString());
			}

			return DelegateOut;
		}

		FName GetContextDelegatePropertyName(const TSharedPtr<FJsonObject>& MulticastDelegateExpression, UClass*& OutOwnerClass) const {
			OutOwnerClass = nullptr;
			if (!MulticastDelegateExpression.IsValid()) return NAME_None;

			const TSharedPtr<FJsonObject>* RValuePointer = nullptr;
			if (MulticastDelegateExpression->TryGetObjectField(TEXT("RValuePointer"), RValuePointer)) {
				const TArray<TSharedPtr<FJsonValue>>* Path = nullptr;
				if ((*RValuePointer)->TryGetArrayField(TEXT("Path"), Path) && Path && Path->Num() > 0 && (*Path)[Path->Num() - 1].IsValid()) {
					const FString PropertyName = (*Path)[Path->Num() - 1]->AsString();
					const TSharedPtr<FJsonObject>* ResolvedOwner = nullptr;
					if ((*RValuePointer)->TryGetObjectField(TEXT("ResolvedOwner"), ResolvedOwner)) {
						OutOwnerClass = EventResolveOwnerClass(*ResolvedOwner, Blueprint);
					}
					return FName(*PropertyName);
				}
			}

			const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
			const TSharedPtr<FJsonObject>* Variable = nullptr;
			if (MulticastDelegateExpression->TryGetObjectField(TEXT("ContextExpression"), ContextExpression) &&
				(*ContextExpression)->TryGetObjectField(TEXT("Variable"), Variable)) {
				const TArray<TSharedPtr<FJsonValue>>* Path = nullptr;
				if ((*Variable)->TryGetArrayField(TEXT("Path"), Path) && Path && Path->Num() > 0 && (*Path)[Path->Num() - 1].IsValid()) {
					const FString PropertyName = (*Path)[Path->Num() - 1]->AsString();
					const TSharedPtr<FJsonObject>* ResolvedOwner = nullptr;
					if ((*Variable)->TryGetObjectField(TEXT("ResolvedOwner"), ResolvedOwner)) {
						OutOwnerClass = EventResolveOwnerClass(*ResolvedOwner, Blueprint);
					}
					return FName(*PropertyName);
				}
			}
			return NAME_None;
		}

		bool RecordBoundDelegate(const TSharedPtr<FJsonObject>& Statement, FEventBuildState& State) {
			FString FunctionName;
			const TSharedPtr<FJsonObject>* DelegateExpression = nullptr;
			if (!Statement->TryGetStringField(TEXT("FunctionName"), FunctionName) ||
				!Statement->TryGetObjectField(TEXT("Delegate"), DelegateExpression)) return false;
			const FName DelegateTempName = GetVariablePropertyName(*DelegateExpression);
			if (DelegateTempName.IsNone()) return false;
			State.BoundDelegateFunctions.Add(DelegateTempName, FName(*FunctionName));
			return true;
		}

		UK2Node_AddDelegate* BuildAddMulticastDelegate(
			const TSharedPtr<FJsonObject>& Statement,
			FEventBuildState& State,
			const int32 Depth,
			const int32 Y) {
			const TSharedPtr<FJsonObject>* DelegateExpression = nullptr;
			const TSharedPtr<FJsonObject>* MulticastDelegate = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Delegate"), DelegateExpression) ||
				!Statement->TryGetObjectField(TEXT("MulticastDelegate"), MulticastDelegate)) return nullptr;

			const FName DelegateTempName = GetVariablePropertyName(*DelegateExpression);
			const FName* CallbackFunctionName = State.BoundDelegateFunctions.Find(DelegateTempName);
			if (!CallbackFunctionName) return nullptr;

			FString MulticastToken;
			(*MulticastDelegate)->TryGetStringField(TEXT("Token"), MulticastToken);
			if (MulticastToken != TEXT("EX_Context")) return nullptr;

			const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
			if (!(*MulticastDelegate)->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression)) return nullptr;
			UEdGraphPin* TargetObject = BuildDataSource(*ObjectExpression, State, Depth, Y);
			if (!TargetObject) return nullptr;

			UClass* DelegateOwnerClass = nullptr;
			const FName DelegatePropertyName = GetContextDelegatePropertyName(*MulticastDelegate, DelegateOwnerClass);
			if (DelegatePropertyName.IsNone()) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: could not determine multicast delegate property for callback %s in %s"),
					*CallbackFunctionName->ToString(), *Wrapper->GetName().ToString());
				return nullptr;
			}

			UClass* TargetClass = EventGetClassFromPin(TargetObject);
			if (!DelegateOwnerClass) DelegateOwnerClass = TargetClass;
			FMulticastDelegateProperty* DelegateProperty = DelegateOwnerClass
				? FindFProperty<FMulticastDelegateProperty>(DelegateOwnerClass, DelegatePropertyName)
				: nullptr;
			// Some native proxy subclasses expose the property through the actual target pin class even
			// when FModel's ResolvedOwner names a base/generated owner. Try the target class as fallback.
			if (!DelegateProperty && TargetClass && TargetClass != DelegateOwnerClass) {
				DelegateProperty = FindFProperty<FMulticastDelegateProperty>(TargetClass, DelegatePropertyName);
				if (DelegateProperty) DelegateOwnerClass = TargetClass;
			}
			if (!DelegateProperty) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Event graph reconstruction: delegate property %s was not found on %s while binding callback %s in %s"),
					*DelegatePropertyName.ToString(), DelegateOwnerClass ? *DelegateOwnerClass->GetName() : TEXT("<null>"),
					*CallbackFunctionName->ToString(), *Wrapper->GetName().ToString());
				return nullptr;
			}

			UK2Node_AddDelegate* AddDelegate = EventAddNode<UK2Node_AddDelegate>(Graph, ExecX(Depth), Y);
			AddDelegate->SetFromProperty(DelegateProperty, false, DelegateOwnerClass);
			AddDelegate->AllocateDefaultPins();
			if (UEdGraphPin* SelfPin = AddDelegate->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input)) {
				if (!Schema->TryCreateConnection(TargetObject, SelfPin)) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: could not connect target object to Bind Event to %s in %s"),
						*DelegatePropertyName.ToString(), *Wrapper->GetName().ToString());
				}
			}

			UEdGraphPin* DelegatePin = AddDelegate->GetDelegatePin();
			if (!DelegatePin || !BuildCreateDelegateSource(*CallbackFunctionName, DelegatePin, Depth, Y)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: could not create callback delegate %s for Bind Event to %s in %s"),
					*CallbackFunctionName->ToString(), *DelegatePropertyName.ToString(), *Wrapper->GetName().ToString());
			}
			return AddDelegate;
		}

		bool BuildExecutableContext(const TSharedPtr<FJsonObject>& Statement, UEdGraphPin*& ExecTail, FEventBuildState& State, const int32 Depth, const int32 Y) {
			const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
			const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) || !Statement->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return false;
			UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression, State, Depth, Y);
			if (!ObjectPin) return false;
			FString Token;
			(*ContextExpression)->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") || Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
				UK2Node_CallFunction* Call = BuildCallNode(*ContextExpression, State, Depth, Y, ObjectPin);
				if (!Call) return false;
				if (!Call->GetTargetFunction() || !Call->GetTargetFunction()->HasAnyFunctionFlags(FUNC_BlueprintPure)) {
					ConnectExec(ExecTail, Call);
					ExecTail = EventFindExecOutput(Call);
				}
				return true;
			}
			return BuildContextDataSource(Statement, State, Depth, Y) != nullptr;
		}

		bool BuildFlow(
			int32 ArrayIndex,
			UEdGraphPin* ExecTail,
			FEventBuildState State,
			TSet<int32> Visited,
			int32 Depth,
			int32 Y) {
			int32 Safety = 0;
			while (Bytecode.IsValidIndex(ArrayIndex) && ++Safety < 512) {
				if (Visited.Contains(ArrayIndex)) {
					UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event graph reconstruction: stopped cyclic flow in %s at statement array index %d"),
						*Wrapper->GetName().ToString(), ArrayIndex);
					return true;
				}
				Visited.Add(ArrayIndex);
				const TSharedPtr<FJsonObject> Statement = GetStatement(ArrayIndex);
				if (!Statement.IsValid()) { ++ArrayIndex; continue; }
				FString Token;
				Statement->TryGetStringField(TEXT("Token"), Token);

				if (Token.StartsWith(TEXT("EX_Let"))) {
					// A local compiler temp can hold the return value of an impure call. The
					// call still executes here, so emit it into the exec chain now and cache
					// its return pin for later reads of CallFunc_* instead of treating it as
					// a pure expression.
					if (BuildExecutableLocalAssignment(Statement, ExecTail, State, Depth, Y)) {
						++Depth;
						++ArrayIndex;
						continue;
					}
					if (CacheLocalAssignment(Statement, State)) { ++ArrayIndex; continue; }
					if (UK2Node_VariableSet* SetNode = BuildMemberAssignment(Statement, State, Depth, Y)) {
						ConnectExec(ExecTail, SetNode);
						ExecTail = EventFindExecOutput(SetNode);
						++Depth;
					}
					++ArrayIndex;
					continue;
				}

				if (Token == TEXT("EX_Context")) {
					BuildExecutableContext(Statement, ExecTail, State, Depth, Y);
					++Depth;
					++ArrayIndex;
					continue;
				}

				if (Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") || Token == TEXT("EX_VirtualFunction") ||
					Token == TEXT("EX_LocalVirtualFunction") || Token == TEXT("EX_CallMath")) {
					if (UK2Node_CallFunction* Call = BuildCallNode(Statement, State, Depth, Y, nullptr)) {
						if (!Call->GetTargetFunction() || !Call->GetTargetFunction()->HasAnyFunctionFlags(FUNC_BlueprintPure)) {
							ConnectExec(ExecTail, Call);
							ExecTail = EventFindExecOutput(Call);
						}
					}
					++Depth;
					++ArrayIndex;
					continue;
				}

				if (Token == TEXT("EX_JumpIfNot")) {
					UK2Node_IfThenElse* Branch = EventAddNode<UK2Node_IfThenElse>(Graph, ExecX(Depth), Y);
					Branch->AllocateDefaultPins();
					ConnectExec(ExecTail, Branch);
					const TSharedPtr<FJsonObject>* Condition = nullptr;
					if (Statement->TryGetObjectField(TEXT("BooleanExpression"), Condition)) ApplyExpression(*Condition, Branch->GetConditionPin(), State, Depth, Y);
					const int32 TargetOffset = Statement->HasField(TEXT("CodeOffset")) ? static_cast<int32>(Statement->GetNumberField(TEXT("CodeOffset"))) : INDEX_NONE;
					const int32* FalseArrayIndex = StatementIndexToArrayIndex.Find(TargetOffset);
					FEventBuildState TrueState = State;
					FEventBuildState FalseState = State;
					BuildFlow(ArrayIndex + 1, Branch->GetThenPin(), TrueState, Visited, Depth + 1, Y - 260);
					if (FalseArrayIndex) BuildFlow(*FalseArrayIndex, Branch->GetElsePin(), FalseState, Visited, Depth + 1, Y + 260);
					return true;
				}

				if (Token == TEXT("EX_Jump")) {
					const int32 TargetOffset = Statement->HasField(TEXT("CodeOffset")) ? static_cast<int32>(Statement->GetNumberField(TEXT("CodeOffset"))) : INDEX_NONE;
					const int32* TargetArrayIndex = StatementIndexToArrayIndex.Find(TargetOffset);
					return TargetArrayIndex ? BuildFlow(*TargetArrayIndex, ExecTail, State, Visited, Depth + 1, Y) : false;
				}

				if (Token == TEXT("EX_BindDelegate")) {
					if (!RecordBoundDelegate(Statement, State)) ++UnresolvedDelegateOps;
					++ArrayIndex;
					continue;
				}

				if (Token == TEXT("EX_AddMulticastDelegate")) {
					if (UK2Node_AddDelegate* AddDelegate = BuildAddMulticastDelegate(Statement, State, Depth, Y)) {
						ConnectExec(ExecTail, AddDelegate);
						ExecTail = EventFindExecOutput(AddDelegate);
						++ReconstructedDelegateOps;
						++Depth;
					} else {
						++UnresolvedDelegateOps;
					}
					++ArrayIndex;
					continue;
				}

				if (Token == TEXT("EX_Return") || Token == TEXT("EX_EndOfScript")) {
					if (ReconstructedDelegateOps > 0 || UnresolvedDelegateOps > 0) {
						UE_LOG(LogCrimeForgeJsonImporter, Display,
							TEXT("Event graph reconstruction: %s restored %d delegate binding(s), %d unresolved"),
							*Wrapper->GetName().ToString(), ReconstructedDelegateOps, UnresolvedDelegateOps);
					}
					return true;
				}

				if (Token == TEXT("EX_ComputedJump")) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Event graph reconstruction: computed jump encountered inside %s; stopping this path"),
						*Wrapper->GetName().ToString());
					return true;
				}

				const FString Detail = FString::Printf(TEXT("%s skipped unsupported statement token %s"), *Wrapper->GetName().ToString(), *Token);
				UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event graph reconstruction: %s"), *Detail);
				FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Blueprint event statement"), Detail, Token);
				++ArrayIndex;
			}
			return true;
		}
	};

	UEdGraphNode* FindExistingWrapperEventNode(UEdGraph* Graph, const FName WrapperName, const FComponentBindingInfo* ComponentBinding) {
		if (!Graph) return nullptr;
		for (UEdGraphNode* Node : Graph->Nodes) {
			if (UK2Node_CustomEvent* Custom = Cast<UK2Node_CustomEvent>(Node)) {
				if (Custom->CustomFunctionName == WrapperName) return Custom;
			}
			if (UK2Node_Event* Event = Cast<UK2Node_Event>(Node)) {
				if (Event->EventReference.GetMemberName() == WrapperName) return Event;
			}
			if (ComponentBinding) {
				if (UK2Node_ComponentBoundEvent* Bound = Cast<UK2Node_ComponentBoundEvent>(Node)) {
					if (Bound->ComponentPropertyName == ComponentBinding->ComponentPropertyName &&
						Bound->DelegatePropertyName == ComponentBinding->DelegatePropertyName) return Bound;
				}
			}
		}
		return nullptr;
	}
}

int32 FBlueprintGraphReconstructor::DeclareEventGraph(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	if (!Blueprint || !Container) return 0;
	FUObjectExport* Ubergraph = FindUbergraphExport(Blueprint, Container);
	if (!Ubergraph) return 0;
	UEdGraph* EventGraph = GetOrCreateEventGraph(Blueprint);
	if (!EventGraph) return 0;

	const FName GeneratedClassName = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetFName() : NAME_None;
	const TMap<FName, FComponentBindingInfo> ComponentBindings = BuildComponentBindingMap(Container);
	const TSet<FName> DelegateReferencedEvents = CollectDelegateReferencedEventNames(Container, GeneratedClassName);

	struct FEntry { FUObjectExport* Wrapper = nullptr; int32 Offset = INDEX_NONE; };
	TArray<FEntry> Entries;
	for (FUObjectExport* Export : Container->Exports) {
		if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function") || Export == Ubergraph) continue;
		if (!GeneratedClassName.IsNone() && Export->GetOuter() != GeneratedClassName) continue;
		int32 EntryOffset = INDEX_NONE;
		if (TryGetUbergraphEntryOffset(Export, EntryOffset)) Entries.Add(FEntry{ Export, EntryOffset });
	}
	Entries.Sort([](const FEntry& A, const FEntry& B) { return A.Offset < B.Offset; });

	RemoveUnusedTemplateWidgetEvents(EventGraph);

	int32 EntryNodesCreated = 0;
	int32 EventIndex = 0;
	for (const FEntry& Entry : Entries) {
		const FName WrapperName = Entry.Wrapper->GetName();
		const FComponentBindingInfo* ComponentBinding = ComponentBindings.Find(WrapperName);
		if (FindExistingWrapperEventNode(EventGraph, WrapperName, ComponentBinding)) continue;

		// Preserve empty wrappers that are actual delegate targets or native overrides: Create Event needs
		// delegate-target UFunction signatures after the global declaration compile, and an intentionally
		// empty native override is still authored graph content. Only discard compiler leftovers that are
		// unreferenced custom wrappers and no-op.
		UFunction* ParentEvent = Blueprint->ParentClass ? Blueprint->ParentClass->FindFunctionByName(WrapperName) : nullptr;
		const bool bNativeEventOverride = ParentEvent && ParentEvent->HasAnyFunctionFlags(FUNC_BlueprintEvent);
		if (!ComponentBinding && !DelegateReferencedEvents.Contains(WrapperName) && !bNativeEventOverride && IsNoOpEventEntry(Ubergraph, Entry.Offset)) {
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event declaration pass: skipping unreferenced no-op wrapper %s at entry %d"),
				*WrapperName.ToString(), Entry.Offset);
			continue;
		}

		const int32 Column = EventIndex % 3;
		const int32 Row = EventIndex / 3;
		const int32 EventX = Column * 2200;
		const int32 EventY = Row * 1200;
		if (CreateWrapperEventNode(Blueprint, EventGraph, Entry.Wrapper, ComponentBindings, EventX, EventY)) {
			++EntryNodesCreated;
			++EventIndex;
		}
	}

	if (EntryNodesCreated > 0) FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event declaration pass: %s created %d event/custom/component signature node(s)"),
		*Blueprint->GetName(), EntryNodesCreated);
	return EntryNodesCreated;
}

int32 FBlueprintGraphReconstructor::BuildEventGraphBodies(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	if (!Blueprint || !Container) return 0;
	FUObjectExport* Ubergraph = FindUbergraphExport(Blueprint, Container);
	if (!Ubergraph) return 0;
	UEdGraph* EventGraph = GetOrCreateEventGraph(Blueprint);
	if (!EventGraph) return 0;

	const FName GeneratedClassName = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetFName() : NAME_None;
	const TMap<FName, FComponentBindingInfo> ComponentBindings = BuildComponentBindingMap(Container);

	struct FEntry { FUObjectExport* Wrapper = nullptr; int32 Offset = INDEX_NONE; };
	TArray<FEntry> Entries;
	for (FUObjectExport* Export : Container->Exports) {
		if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function") || Export == Ubergraph) continue;
		if (!GeneratedClassName.IsNone() && Export->GetOuter() != GeneratedClassName) continue;
		int32 EntryOffset = INDEX_NONE;
		if (TryGetUbergraphEntryOffset(Export, EntryOffset)) Entries.Add(FEntry{ Export, EntryOffset });
	}
	Entries.Sort([](const FEntry& A, const FEntry& B) { return A.Offset < B.Offset; });

	int32 Rebuilt = 0;
	for (const FEntry& Entry : Entries) {
		const FName WrapperName = Entry.Wrapper->GetName();
		const FComponentBindingInfo* ComponentBinding = ComponentBindings.Find(WrapperName);
		UEdGraphNode* EventNode = FindExistingWrapperEventNode(EventGraph, WrapperName, ComponentBinding);
		if (!EventNode) continue; // intentionally skipped unreferenced no-op wrapper

		UEdGraphPin* ExistingExec = EventFindExecOutput(EventNode);
		if (ExistingExec && ExistingExec->LinkedTo.Num() > 0) {
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event body pass: keeping existing body for %s"), *WrapperName.ToString());
			continue;
		}

		FEventBodyBuilder Builder(Blueprint, Ubergraph, Entry.Wrapper, EventGraph, EventNode, Entry.Offset, EventNode->NodePosY);
		if (Builder.Build()) {
			++Rebuilt;
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event body pass: rebuilt %s at ubergraph entry %d"),
				*WrapperName.ToString(), Entry.Offset);
		}
	}

	if (Rebuilt > 0) FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Event body pass: %s rebuilt %d event/custom/component body path(s) from %s"),
		*Blueprint->GetName(), Rebuilt, *Ubergraph->GetName().ToString());
	return Rebuilt;
}

int32 FBlueprintGraphReconstructor::ReconstructEventGraph(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	const int32 Declared = DeclareEventGraph(Blueprint, Container);
	if (Declared > 0) {
		FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipGarbageCollection);
	}
	return BuildEventGraphBodies(Blueprint, Container);
}

