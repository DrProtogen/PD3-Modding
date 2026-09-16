

#include "Importers/Types/Blueprint/Graph/BlueprintGraphReconstructor.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"

#include "Containers/ExportContainer.h"
#include "Engine/EngineUtilities.h"
#include "Engine/Log.h"
#include "Importers/Types/Blueprint/BlueprintVariables.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_CallFunction.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_FunctionResult.h"
#include "K2Node_Select.h"
#include "K2Node_Self.h"
#include "K2Node_VariableGet.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "UObject/UnrealType.h"

namespace {
	// The declaration/body reconstruction is intentionally split by a skeleton compile. Do not
	// infer whether a graph belongs to this import by inspecting its nodes after that compile:
	// AddFunctionGraph()/the compiler may insert override scaffolding. Track the exact function
	// graphs CrimeForge JSON Importer declared and consume this set during the body pass instead.
	TMap<const UBlueprint*, TSet<FName>> GCrimeForgeJsonImporterDeclaredFunctionGraphs;
	bool HasFlagToken(const FString& Flags, const TCHAR* WantedFlag) {
		TArray<FString> Parts;
		Flags.ParseIntoArray(Parts, TEXT("|"), true);

		for (FString& Part : Parts) {
			Part.TrimStartAndEndInline();
			if (Part.Equals(WantedFlag, ESearchCase::CaseSensitive)) {
				return true;
			}
		}

		return false;
	}

	FString GetInsideQuotes(const FString& In) {
		const int32 First = In.Find(TEXT("'"));
		const int32 Last = In.Find(TEXT("'"), ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		if (First != INDEX_NONE && Last > First) {
			return In.Mid(First + 1, Last - First - 1);
		}

		return In;
	}

	FString GetReferenceMemberName(const TSharedPtr<FJsonObject>& Reference) {
		if (!Reference.IsValid()) return FString();

		FString ObjectName;
		if (!Reference->TryGetStringField(TEXT("ObjectName"), ObjectName)) return FString();

		ObjectName = GetInsideQuotes(ObjectName);
		if (ObjectName.Contains(TEXT(":"))) {
			ObjectName.Split(TEXT(":"), nullptr, &ObjectName, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		}

		return ObjectName;
	}

	FString GetReferenceOwnerName(const TSharedPtr<FJsonObject>& Reference) {
		if (!Reference.IsValid()) return FString();

		FString ObjectName;
		if (!Reference->TryGetStringField(TEXT("ObjectName"), ObjectName)) return FString();

		ObjectName = GetInsideQuotes(ObjectName);
		if (ObjectName.Contains(TEXT(":"))) {
			ObjectName.Split(TEXT(":"), &ObjectName, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
		}

		return ObjectName;
	}

	UClass* ResolveOwnerClass(const TSharedPtr<FJsonObject>& Reference, UBlueprint* Blueprint) {
		if (!Reference.IsValid() || !Blueprint) return nullptr;

		const FString OwnerName = GetReferenceOwnerName(Reference);
		if (OwnerName.IsEmpty()) return nullptr;

		if ((Blueprint->GeneratedClass && Blueprint->GeneratedClass->GetName() == OwnerName) ||
			(Blueprint->SkeletonGeneratedClass && Blueprint->SkeletonGeneratedClass->GetName() == OwnerName)) {
			return Blueprint->GeneratedClass ? Blueprint->GeneratedClass : Blueprint->SkeletonGeneratedClass;
		}

		FString ObjectPath;
		Reference->TryGetStringField(TEXT("ObjectPath"), ObjectPath);

		if (ObjectPath.Contains(TEXT("/Script/"))) {
			if (UClass* Loaded = LoadObject<UClass>(nullptr, *(ObjectPath + TEXT(".") + OwnerName))) {
				return Loaded;
			}
		}

		if (ObjectPath.StartsWith(TEXT("/Game/"))) {
			int32 DotIndex = INDEX_NONE;
			if (ObjectPath.FindLastChar(TEXT('.'), DotIndex)) {
				ObjectPath.LeftInline(DotIndex);
			}

			if (UClass* Loaded = LoadObject<UClass>(nullptr, *(ObjectPath + TEXT(".") + OwnerName))) {
				return Loaded;
			}
		}

#if UE5_1_BEYOND
		return FindFirstObject<UClass>(*OwnerName);
#else
		return FindObject<UClass>(ANY_PACKAGE, *OwnerName);
#endif
	}

	UFunction* ResolveFunctionReference(const TSharedPtr<FJsonObject>& Reference, UBlueprint* Blueprint) {
		if (!Reference.IsValid() || !Blueprint) return nullptr;

		const FName FunctionName(*GetReferenceMemberName(Reference));
		if (FunctionName.IsNone()) return nullptr;

		if (UClass* OwnerClass = ResolveOwnerClass(Reference, Blueprint)) {
			if (UFunction* Function = OwnerClass->FindFunctionByName(FunctionName)) {
				return Function;
			}
		}

		if (Blueprint->GeneratedClass) {
			if (UFunction* Function = Blueprint->GeneratedClass->FindFunctionByName(FunctionName)) return Function;
		}
		if (Blueprint->SkeletonGeneratedClass) {
			if (UFunction* Function = Blueprint->SkeletonGeneratedClass->FindFunctionByName(FunctionName)) return Function;
		}
		if (Blueprint->ParentClass) {
			return Blueprint->ParentClass->FindFunctionByName(FunctionName);
		}

		return nullptr;
	}

	UClass* GetClassFromPin(const UEdGraphPin* Pin) {
		if (!Pin) return nullptr;
#if ENGINE_UE5
		return Cast<UClass>(Pin->PinType.PinSubCategoryObject.Get());
#else
		return Cast<UClass>(Pin->PinType.PinSubCategoryObject);
#endif
	}

	UFunction* FindFunctionIncludingBlueprintSkeleton(UClass* ScopeClass, const FName FunctionName) {
		if (!ScopeClass || FunctionName.IsNone()) return nullptr;

		if (UFunction* Function = ScopeClass->FindFunctionByName(FunctionName)) return Function;

		// Referenced Widget Blueprint classes can be loaded while their editor-side callable
		// functions only exist on the skeleton class at this point in CrimeForge JSON Importer's import pass.
		// UK2Node calls created from EX_LocalVirtualFunction still need that signature, so look
		// through the generating Blueprint as well as the runtime generated class.
		if (UBlueprint* GeneratingBlueprint = Cast<UBlueprint>(ScopeClass->ClassGeneratedBy)) {
			if (GeneratingBlueprint->SkeletonGeneratedClass) {
				if (UFunction* Function = GeneratingBlueprint->SkeletonGeneratedClass->FindFunctionByName(FunctionName)) return Function;
			}
			if (GeneratingBlueprint->GeneratedClass && GeneratingBlueprint->GeneratedClass != ScopeClass) {
				if (UFunction* Function = GeneratingBlueprint->GeneratedClass->FindFunctionByName(FunctionName)) return Function;
			}
		}

		for (UClass* SuperClass = ScopeClass->GetSuperClass(); SuperClass; SuperClass = SuperClass->GetSuperClass()) {
			if (UFunction* Function = SuperClass->FindFunctionByName(FunctionName)) return Function;
		}

		return nullptr;
	}

	template <typename T>
	T* AddNode(UEdGraph* Graph, const int32 X, const int32 Y) {
		if (!Graph) return nullptr;

		T* Node = NewObject<T>(Graph);
		Graph->AddNode(Node, false, false);
		Node->CreateNewGuid();
		Node->PostPlacedNewNode();
		Node->NodePosX = X;
		Node->NodePosY = Y;
		return Node;
	}

	UK2Node_FunctionEntry* FindEntryNode(UEdGraph* Graph) {
		if (!Graph) return nullptr;
		for (UEdGraphNode* Node : Graph->Nodes) {
			if (UK2Node_FunctionEntry* Entry = Cast<UK2Node_FunctionEntry>(Node)) return Entry;
		}
		return nullptr;
	}

	UK2Node_FunctionResult* FindResultNode(UEdGraph* Graph) {
		if (!Graph) return nullptr;
		for (UEdGraphNode* Node : Graph->Nodes) {
			if (UK2Node_FunctionResult* Result = Cast<UK2Node_FunctionResult>(Node)) return Result;
		}
		return nullptr;
	}

	UEdGraph* FindFunctionGraph(UBlueprint* Blueprint, const FName Name) {
		if (!Blueprint) return nullptr;
		for (UEdGraph* Graph : Blueprint->FunctionGraphs) {
			if (Graph && Graph->GetFName() == Name) return Graph;
		}
		return nullptr;
	}

	UEdGraphPin* FindExecInput(UEdGraphNode* Node) {
		if (!Node) return nullptr;
		return Node->FindPin(UEdGraphSchema_K2::PN_Execute, EGPD_Input);
	}

	UEdGraphPin* FindExecOutput(UEdGraphNode* Node) {
		if (!Node) return nullptr;
		return Node->FindPin(UEdGraphSchema_K2::PN_Then, EGPD_Output);
	}

	bool IsUbergraphForwarder(const FUObjectExport* FunctionExport) {
		if (!FunctionExport || !FunctionExport->IsJsonValid()) return false;

		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		if (!FunctionExport->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) || !Bytecode) {
			return false;
		}

		for (const TSharedPtr<FJsonValue>& Value : *Bytecode) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Statement = Value->AsObject();

			FString Token;
			Statement->TryGetStringField(TEXT("Token"), Token);
			if (Token != TEXT("EX_LocalFinalFunction") && Token != TEXT("EX_FinalFunction")) continue;

			const TSharedPtr<FJsonObject>* FunctionRef = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Function"), FunctionRef)) continue;

			FString ObjectName;
			if ((*FunctionRef)->TryGetStringField(TEXT("ObjectName"), ObjectName) && ObjectName.Contains(TEXT("ExecuteUbergraph_"))) {
				return true;
			}
		}

		return false;
	}

	bool ShouldReconstructFunction(const FUObjectExport* Export, const FName GeneratedClassName) {
		if (!Export || !Export->IsJsonValid() || Export->GetType() != TEXT("Function")) return false;
		if (Export->GetOuter() != GeneratedClassName) return false;

		const FString Name = Export->GetName().ToString();
		if (Name.StartsWith(TEXT("ExecuteUbergraph_")) || Name.StartsWith(TEXT("BndEvt__"))) return false;
		if (IsUbergraphForwarder(Export)) return false;

		const TArray<TSharedPtr<FJsonValue>>* Bytecode = nullptr;
		return Export->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), Bytecode) && Bytecode && Bytecode->Num() > 0;
	}

	bool AddSignaturePins(const FUObjectExport* FunctionExport, UK2Node_FunctionEntry* Entry, UK2Node_FunctionResult* Result) {
		if (!FunctionExport || !Entry) return false;

		const TArray<TSharedPtr<FJsonValue>>* ChildProperties = nullptr;
		if (!FunctionExport->JsonObject->TryGetArrayField(TEXT("ChildProperties"), ChildProperties) || !ChildProperties) {
			return true;
		}

		for (const TSharedPtr<FJsonValue>& Value : *ChildProperties) {
			if (!Value.IsValid() || Value->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> Property = Value->AsObject();

			FString Flags;
			if (!Property->TryGetStringField(TEXT("PropertyFlags"), Flags) || !HasFlagToken(Flags, TEXT("Parm"))) continue;

			FString Name;
			if (!Property->TryGetStringField(TEXT("Name"), Name) || Name.IsEmpty()) continue;

			FEdGraphPinType PinType;
			if (!FBlueprintVariables::GetPinType(Property, PinType)) {
				const FString Detail = FString::Printf(TEXT("Unsupported signature pin %s.%s"), *FunctionExport->GetName().ToString(), *Name);
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: %s"), *Detail);
				FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Blueprint signature pin"), Detail);
				continue;
			}

			const bool bOutput = HasFlagToken(Flags, TEXT("OutParm")) || HasFlagToken(Flags, TEXT("ReturnParm"));
			if (bOutput) {
				if (Result && !Result->FindPin(FName(*Name), EGPD_Input)) {
					Result->CreateUserDefinedPin(FName(*Name), PinType, EGPD_Input, false);
				}
			} else if (!Entry->FindPin(FName(*Name), EGPD_Output)) {
				Entry->CreateUserDefinedPin(FName(*Name), PinType, EGPD_Output, false);
			}
		}

		return true;
	}

	int32 FunctionFlagsFromExport(const FUObjectExport* FunctionExport) {
		if (!FunctionExport || !FunctionExport->IsJsonValid()) return 0;
		FString Flags;
		FunctionExport->JsonObject->TryGetStringField(TEXT("FunctionFlags"), Flags);

		int32 Result = 0;
		if (HasFlagToken(Flags, TEXT("FUNC_BlueprintPure"))) Result |= FUNC_BlueprintPure;
		if (HasFlagToken(Flags, TEXT("FUNC_BlueprintCallable"))) Result |= FUNC_BlueprintCallable;
		if (HasFlagToken(Flags, TEXT("FUNC_Const"))) Result |= FUNC_Const;
		if (HasFlagToken(Flags, TEXT("FUNC_Protected"))) Result |= FUNC_Protected;
		if (HasFlagToken(Flags, TEXT("FUNC_Public"))) Result |= FUNC_Public;
		if (HasFlagToken(Flags, TEXT("FUNC_Private"))) Result |= FUNC_Private;
		return Result;
	}

	bool IsFunctionGraphSignatureOnly(UEdGraph* Graph) {
		if (!Graph) return false;
		for (UEdGraphNode* Node : Graph->Nodes) {
			if (!Node) continue;
			if (Cast<UK2Node_FunctionEntry>(Node) || Cast<UK2Node_FunctionResult>(Node)) continue;
			return false;
		}
		return FindEntryNode(Graph) != nullptr;
	}

	struct FConditionalReturn {
		TSharedPtr<FJsonObject> Condition;
		TSharedPtr<FJsonObject> TrueExpression;
	};

	class FFunctionBodyBuilder {
	public:
		FFunctionBodyBuilder(UBlueprint* InBlueprint, FUObjectExport* InExport, UEdGraph* InGraph)
			: Blueprint(InBlueprint), FunctionExport(InExport), Graph(InGraph), Schema(GetDefault<UEdGraphSchema_K2>()) {
			Entry = FindEntryNode(Graph);
			Result = FindResultNode(Graph);
			if (!Result && Entry) {
				Result = FBlueprintEditorUtils::FindOrCreateFunctionResultNode(Entry);
			}
			NextExecX = 320;
			NextDataY = -220;
		}

		bool Build() {
			if (!Blueprint || !FunctionExport || !Graph || !Entry || !Result || !Schema) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Graph body pass: cannot build %s (Blueprint=%s Graph=%s Entry=%s Result=%s Schema=%s)"),
					FunctionExport ? *FunctionExport->GetName().ToString() : TEXT("<null>"),
					Blueprint ? TEXT("ok") : TEXT("null"), Graph ? TEXT("ok") : TEXT("null"),
					Entry ? TEXT("ok") : TEXT("null"), Result ? TEXT("ok") : TEXT("null"), Schema ? TEXT("ok") : TEXT("null"));
				return false;
			}

			const TArray<TSharedPtr<FJsonValue>>* BytecodePtr = nullptr;
			if (!FunctionExport->JsonObject->TryGetArrayField(TEXT("ScriptBytecode"), BytecodePtr) || !BytecodePtr) return false;
			Bytecode = *BytecodePtr;

			IndexProperties();
			IndexExpressionsAndConditionalReturns();

			ExecTail = FindExecOutput(Entry);
			bool bUnsupportedExecControlFlow = false;

			for (int32 Index = 0; Index < Bytecode.Num(); ++Index) {
				if (SkipStatements.Contains(Index)) continue;
				const TSharedPtr<FJsonObject> Statement = GetStatement(Index);
				if (!Statement.IsValid()) continue;

				FString Token;
				Statement->TryGetStringField(TEXT("Token"), Token);

				if (Token.StartsWith(TEXT("EX_Let"))) {
					// Pure compiler temporaries remain lazy expressions, but an impure call stored
					// into CallFunc_* executes at this statement and must be part of the exec chain.
					BuildExecutableLocalAssignment(Statement);
					continue;
				}

				if (Token == TEXT("EX_Context")) {
					if (!BuildExecutableContext(Statement)) {
						UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: %s could not reconstruct context statement at %d"),
							*FunctionExport->GetName().ToString(), GetStatementIndex(Statement));
					}
					continue;
				}

				if (Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") ||
					Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
					if (!BuildExecutableCall(Statement, nullptr)) {
						UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: %s could not reconstruct call at %d"),
							*FunctionExport->GetName().ToString(), GetStatementIndex(Statement));
					}
					continue;
				}

				if (Token == TEXT("EX_JumpIfNot")) {
					// The only forward conditionals accepted in the standalone pass are compiler-generated
					// conditional return assignments, which IndexExpressionsAndConditionalReturns folded into
					// a Select expression. Any remaining jump controls executable statements and belongs to
					// the CFG/event-graph pass.
					bUnsupportedExecControlFlow = true;
					continue;
				}

				if (Token == TEXT("EX_Jump") || Token == TEXT("EX_PushExecutionFlow") || Token == TEXT("EX_PopExecutionFlow")) {
					bUnsupportedExecControlFlow = true;
					continue;
				}

				if (Token == TEXT("EX_Return")) {
					ApplyReturn(Statement);
					continue;
				}
			}

			if (bUnsupportedExecControlFlow) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Graph reconstruction: %s contains executable jump/control-flow bytecode not handled by the standalone-function pass; graph may be partial"),
					*FunctionExport->GetName().ToString());
			}

			// A void function may have had an EX_Return we could not meaningfully process; make sure the
			// execution chain still reaches the function result.
			if (ExecTail) {
				if (UEdGraphPin* ResultExec = FindExecInput(Result)) {
					Schema->TryCreateConnection(ExecTail, ResultExec);
					ExecTail = nullptr;
				}
			}

			return true;
		}

	private:
		UBlueprint* Blueprint = nullptr;
		FUObjectExport* FunctionExport = nullptr;
		UEdGraph* Graph = nullptr;
		const UEdGraphSchema_K2* Schema = nullptr;
		UK2Node_FunctionEntry* Entry = nullptr;
		UK2Node_FunctionResult* Result = nullptr;
		UEdGraphPin* ExecTail = nullptr;
		int32 NextExecX = 320;
		int32 NextDataY = -220;
		TArray<TSharedPtr<FJsonValue>> Bytecode;
		TMap<FName, TSharedPtr<FJsonObject>> LocalExpressions;
		TMap<FName, UEdGraphPin*> BuiltLocalPins;
		TSet<FName> LocalsBeingResolved;
		TMap<FName, FConditionalReturn> ConditionalReturns;
		TMap<FName, TSharedPtr<FJsonObject>> PropertiesByName;
		TSet<int32> SkipStatements;

		TSharedPtr<FJsonObject> GetStatement(const int32 Index) const {
			if (!Bytecode.IsValidIndex(Index) || !Bytecode[Index].IsValid() || Bytecode[Index]->Type != EJson::Object) return nullptr;
			return Bytecode[Index]->AsObject();
		}

		int32 GetStatementIndex(const TSharedPtr<FJsonObject>& Statement) const {
			return Statement.IsValid() && Statement->HasField(TEXT("StatementIndex"))
				? static_cast<int32>(Statement->GetNumberField(TEXT("StatementIndex"))) : INDEX_NONE;
		}

		int32 FindStatementArrayIndex(const int32 StatementIndex) const {
			for (int32 Index = 0; Index < Bytecode.Num(); ++Index) {
				if (GetStatementIndex(GetStatement(Index)) == StatementIndex) return Index;
			}
			return INDEX_NONE;
		}

		void IndexProperties() {
			const TArray<TSharedPtr<FJsonValue>>* ChildProperties = nullptr;
			if (!FunctionExport->JsonObject->TryGetArrayField(TEXT("ChildProperties"), ChildProperties) || !ChildProperties) return;

			for (const TSharedPtr<FJsonValue>& Value : *ChildProperties) {
				if (!Value.IsValid() || Value->Type != EJson::Object) continue;
				const TSharedPtr<FJsonObject> Property = Value->AsObject();
				FString Name;
				if (Property->TryGetStringField(TEXT("Name"), Name)) PropertiesByName.Add(FName(*Name), Property);
			}
		}

		FName GetDestinationName(const TSharedPtr<FJsonObject>& Statement) const {
			if (!Statement.IsValid()) return NAME_None;

			const TSharedPtr<FJsonObject>* Variable = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Variable"), Variable)) return NAME_None;

			const TSharedPtr<FJsonObject>* InnerVariable = nullptr;
			const TSharedPtr<FJsonObject>* Property = nullptr;
			const TSharedPtr<FJsonObject> Holder = ((*Variable)->TryGetObjectField(TEXT("Variable"), InnerVariable)) ? *InnerVariable : *Variable;
			if (!Holder.IsValid() || !Holder->TryGetObjectField(TEXT("Property"), Property)) return NAME_None;

			FString Name;
			return (*Property)->TryGetStringField(TEXT("Name"), Name) ? FName(*Name) : NAME_None;
		}

		bool IsReturnProperty(const FName Name) const {
			const TSharedPtr<FJsonObject>* Property = PropertiesByName.Find(Name);
			if (!Property || !Property->IsValid()) return false;
			FString Flags;
			(*Property)->TryGetStringField(TEXT("PropertyFlags"), Flags);
			return HasFlagToken(Flags, TEXT("ReturnParm"));
		}

		void IndexExpressionsAndConditionalReturns() {
			// First collect every compiler-temp assignment. They are expression SSA slots in cooked
			// bytecode; rebuilding them as locals would make the graph much noisier than the source.
			for (int32 Index = 0; Index < Bytecode.Num(); ++Index) {
				const TSharedPtr<FJsonObject> Statement = GetStatement(Index);
				if (!Statement.IsValid()) continue;
				FString Token;
				Statement->TryGetStringField(TEXT("Token"), Token);
				if (!Token.StartsWith(TEXT("EX_Let"))) continue;

				const FName Destination = GetDestinationName(Statement);
				const TSharedPtr<FJsonObject>* Expression = nullptr;
				if (!Destination.IsNone() && Statement->TryGetObjectField(TEXT("Expression"), Expression)) {
					LocalExpressions.Add(Destination, *Expression);
				}
			}

			// Cooked functions such as NavigateToNews compile a tiny "if condition then ReturnValue=X"
			// into JumpIfNot + an assignment + the common return. Fold that compiler control flow back
			// into a Select so the recreated function stays readable and does not need a synthetic local.
			for (int32 Index = 0; Index < Bytecode.Num(); ++Index) {
				const TSharedPtr<FJsonObject> Jump = GetStatement(Index);
				if (!Jump.IsValid()) continue;
				FString Token;
				Jump->TryGetStringField(TEXT("Token"), Token);
				if (Token != TEXT("EX_JumpIfNot") || !Jump->HasField(TEXT("CodeOffset"))) continue;

				const int32 TargetOffset = static_cast<int32>(Jump->GetNumberField(TEXT("CodeOffset")));
				const int32 TargetArrayIndex = FindStatementArrayIndex(TargetOffset);
				if (TargetArrayIndex == INDEX_NONE || TargetArrayIndex <= Index + 1) continue;

				const TSharedPtr<FJsonObject>* Condition = nullptr;
				if (!Jump->TryGetObjectField(TEXT("BooleanExpression"), Condition)) continue;

				bool bOnlyReturnAssignments = true;
				TArray<int32> CandidateAssignments;
				for (int32 BodyIndex = Index + 1; BodyIndex < TargetArrayIndex; ++BodyIndex) {
					const TSharedPtr<FJsonObject> Body = GetStatement(BodyIndex);
					if (!Body.IsValid()) continue;
					FString BodyToken;
					Body->TryGetStringField(TEXT("Token"), BodyToken);
					if (!BodyToken.StartsWith(TEXT("EX_Let"))) {
						bOnlyReturnAssignments = false;
						break;
					}

					const FName Destination = GetDestinationName(Body);
					if (!IsReturnProperty(Destination)) {
						bOnlyReturnAssignments = false;
						break;
					}
					CandidateAssignments.Add(BodyIndex);
				}

				if (!bOnlyReturnAssignments || CandidateAssignments.Num() == 0) continue;

				for (const int32 BodyIndex : CandidateAssignments) {
					const TSharedPtr<FJsonObject> Body = GetStatement(BodyIndex);
					const FName Destination = GetDestinationName(Body);
					const TSharedPtr<FJsonObject>* TrueExpression = nullptr;
					if (!Body->TryGetObjectField(TEXT("Expression"), TrueExpression)) continue;

					ConditionalReturns.Add(Destination, FConditionalReturn{ *Condition, *TrueExpression });
					SkipStatements.Add(BodyIndex);
				}
				SkipStatements.Add(Index);
			}
		}

		int32 AllocateExecX() {
			const int32 X = NextExecX;
			NextExecX += 360;
			return X;
		}

		int32 AllocateDataY() {
			const int32 Y = NextDataY;
			NextDataY -= 180;
			return Y;
		}

		void ChainExec(UEdGraphNode* Node) {
			if (!Node) return;
			UEdGraphPin* Input = FindExecInput(Node);
			UEdGraphPin* Output = FindExecOutput(Node);
			if (ExecTail && Input) Schema->TryCreateConnection(ExecTail, Input);
			if (Output) ExecTail = Output;
		}

		UClass* ResolvePropertyOwnerClass(const TSharedPtr<FJsonObject>& VariableObject) const {
			if (!VariableObject.IsValid()) return nullptr;
			const TSharedPtr<FJsonObject>* Owner = nullptr;
			if (!VariableObject->TryGetObjectField(TEXT("Owner"), Owner)) return nullptr;
			return ResolveOwnerClass(*Owner, Blueprint);
		}

		UEdGraphPin* BuildVariableGet(const TSharedPtr<FJsonObject>& VariableObject, UEdGraphPin* TargetObject = nullptr) {
			if (!VariableObject.IsValid()) return nullptr;

			const TSharedPtr<FJsonObject>* PropertyJson = nullptr;
			if (!VariableObject->TryGetObjectField(TEXT("Property"), PropertyJson)) return nullptr;

			FString PropertyName;
			if (!(*PropertyJson)->TryGetStringField(TEXT("Name"), PropertyName)) return nullptr;
			const FName Name(*PropertyName);

			// Parameters and cached compiler temporaries live on the function, not the object.
			FString PropertyFlags;
			(*PropertyJson)->TryGetStringField(TEXT("PropertyFlags"), PropertyFlags);
			if (HasFlagToken(PropertyFlags, TEXT("Parm"))) {
				return Entry->FindPin(Name, EGPD_Output);
			}

			if (UEdGraphPin** Cached = BuiltLocalPins.Find(Name)) return *Cached;
			if (const TSharedPtr<FJsonObject>* CachedExpression = LocalExpressions.Find(Name)) {
				if (LocalsBeingResolved.Contains(Name)) {
					UE_LOG(LogCrimeForgeJsonImporter, Warning,
						TEXT("Graph reconstruction: detected cyclic compiler-local expression '%s' while rebuilding %s; leaving this value unresolved instead of recursing"),
						*Name.ToString(), *FunctionExport->GetName().ToString());
					return nullptr;
				}
				LocalsBeingResolved.Add(Name);
				UEdGraphPin* Built = BuildDataSource(*CachedExpression);
				LocalsBeingResolved.Remove(Name);
				if (Built) BuiltLocalPins.Add(Name, Built);
				return Built;
			}

			UClass* OwnerClass = ResolvePropertyOwnerClass(VariableObject);
			if (!OwnerClass) OwnerClass = Blueprint->GeneratedClass;
			if (!OwnerClass) return nullptr;

			FProperty* Property = FindFProperty<FProperty>(OwnerClass, Name);
			if (!Property && Blueprint->SkeletonGeneratedClass) {
				Property = FindFProperty<FProperty>(Blueprint->SkeletonGeneratedClass, Name);
			}
			if (!Property) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: variable %s.%s could not resolve a property"),
					*OwnerClass->GetName(), *PropertyName);
				return nullptr;
			}

			UK2Node_VariableGet* GetNode = AddNode<UK2Node_VariableGet>(Graph, FMath::Max(80, NextExecX - 260), AllocateDataY());
			const bool bSelfContext = TargetObject == nullptr && (OwnerClass == Blueprint->GeneratedClass ||
				OwnerClass == Blueprint->SkeletonGeneratedClass || (Blueprint->GeneratedClass && Blueprint->GeneratedClass->IsChildOf(OwnerClass)));
			GetNode->SetFromProperty(Property, bSelfContext, OwnerClass);
			GetNode->AllocateDefaultPins();

			if (TargetObject) {
				if (UEdGraphPin* SelfPin = GetNode->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input)) {
					Schema->TryCreateConnection(TargetObject, SelfPin);
				}
			}

			return GetNode->GetValuePin();
		}

		UClass* ResolveExpressionObjectClass(const TSharedPtr<FJsonObject>& Expression) const {
			if (!Expression.IsValid()) return nullptr;

			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_Self")) {
				return Blueprint->GeneratedClass ? Blueprint->GeneratedClass : Blueprint->SkeletonGeneratedClass;
			}

			if (Token == TEXT("EX_InstanceVariable") || Token == TEXT("EX_LocalVariable") || Token == TEXT("EX_LocalOutVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				const TSharedPtr<FJsonObject>* Property = nullptr;
				const TSharedPtr<FJsonObject>* PropertyClass = nullptr;
				if (Expression->TryGetObjectField(TEXT("Variable"), Variable) && Variable && Variable->IsValid() &&
					(*Variable)->TryGetObjectField(TEXT("Property"), Property) && Property && Property->IsValid() &&
					(*Property)->TryGetObjectField(TEXT("PropertyClass"), PropertyClass) && PropertyClass && PropertyClass->IsValid()) {
					if (UClass* Resolved = ResolveOwnerClass(*PropertyClass, Blueprint)) return Resolved;
				}
			}

			if (Token == TEXT("EX_Context")) {
				const TSharedPtr<FJsonObject>* RValuePointer = nullptr;
				const TSharedPtr<FJsonObject>* Property = nullptr;
				const TSharedPtr<FJsonObject>* PropertyClass = nullptr;
				if (Expression->TryGetObjectField(TEXT("RValuePointer"), RValuePointer) && RValuePointer && RValuePointer->IsValid() &&
					(*RValuePointer)->TryGetObjectField(TEXT("Property"), Property) && Property && Property->IsValid() &&
					(*Property)->TryGetObjectField(TEXT("PropertyClass"), PropertyClass) && PropertyClass && PropertyClass->IsValid()) {
					if (UClass* Resolved = ResolveOwnerClass(*PropertyClass, Blueprint)) return Resolved;
				}
				const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
				if (Expression->TryGetObjectField(TEXT("ContextExpression"), ContextExpression) && ContextExpression && ContextExpression->IsValid()) {
					if (UClass* Resolved = ResolveExpressionObjectClass(*ContextExpression)) return Resolved;
				}
			}

			return nullptr;
		}

		UFunction* ResolveCallFunction(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetObject, UClass* ExplicitScopeClass = nullptr) const {
			if (!Expression.IsValid()) return nullptr;
			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);

			const TSharedPtr<FJsonObject>* FunctionRef = nullptr;
			if (Expression->TryGetObjectField(TEXT("Function"), FunctionRef)) {
				return ResolveFunctionReference(*FunctionRef, Blueprint);
			}

			FString FunctionName;
			if (Expression->TryGetStringField(TEXT("Function"), FunctionName)) {
				const FName RequestedFunctionName(*FunctionName);
				UClass* ScopeClass = ExplicitScopeClass ? ExplicitScopeClass : GetClassFromPin(TargetObject);
				if (!ScopeClass) ScopeClass = Blueprint->GeneratedClass;
				if (UFunction* Function = FindFunctionIncludingBlueprintSkeleton(ScopeClass, RequestedFunctionName)) return Function;
				if (UFunction* Function = FindFunctionIncludingBlueprintSkeleton(Blueprint->ParentClass, RequestedFunctionName)) return Function;
			}

			if (ExplicitScopeClass) {
				FString MissingName;
				Expression->TryGetStringField(TEXT("Function"), MissingName);
				UE_LOG(LogCrimeForgeJsonImporter, Display,
					TEXT("Graph reconstruction: local virtual '%s' not found on explicit FModel target class %s while rebuilding %s"),
					*MissingName, *ExplicitScopeClass->GetName(), *FunctionExport->GetName().ToString());
			}

			return nullptr;
		}

		UK2Node_CallFunction* BuildCallNode(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetObject, UClass* ExplicitScopeClass = nullptr) {
			UFunction* Function = ResolveCallFunction(Expression, TargetObject, ExplicitScopeClass);
			if (!Function) {
				FString FunctionName;
				if (Expression.IsValid()) {
					if (const TSharedPtr<FJsonObject>* Ref = nullptr; Expression->TryGetObjectField(TEXT("Function"), Ref)) {
						FunctionName = GetReferenceMemberName(*Ref);
					} else {
						Expression->TryGetStringField(TEXT("Function"), FunctionName);
					}
				}
				const FString TargetClassName = ExplicitScopeClass ? ExplicitScopeClass->GetName() : (GetClassFromPin(TargetObject) ? GetClassFromPin(TargetObject)->GetName() : TEXT("<null>"));
				const FString Detail = FString::Printf(TEXT("Function '%s' could not be resolved (target class=%s) while rebuilding %s"), *FunctionName, *TargetClassName, *FunctionExport->GetName().ToString());
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: %s"), *Detail);
				FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Blueprint function call"), Detail);
				return nullptr;
			}

			const bool bPure = Function->HasAnyFunctionFlags(FUNC_BlueprintPure);
			UK2Node_CallFunction* Node = AddNode<UK2Node_CallFunction>(Graph,
				bPure ? FMath::Max(80, NextExecX - 260) : AllocateExecX(),
				bPure ? AllocateDataY() : 0);
			Node->SetFromFunction(Function);
			Node->AllocateDefaultPins();

			if (TargetObject && !Function->HasAnyFunctionFlags(FUNC_Static)) {
				if (UEdGraphPin* SelfPin = Node->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input)) {
					Schema->TryCreateConnection(TargetObject, SelfPin);
				}
			}

			const TArray<TSharedPtr<FJsonValue>>* Parameters = nullptr;
			Expression->TryGetArrayField(TEXT("Parameters"), Parameters);
			int32 JsonParameterIndex = 0;

			for (TFieldIterator<FProperty> It(Function); It; ++It) {
				FProperty* Parameter = *It;
				if (!Parameter->HasAnyPropertyFlags(CPF_Parm) || Parameter->HasAnyPropertyFlags(CPF_ReturnParm)) continue;
				if (Parameter->HasAnyPropertyFlags(CPF_OutParm) && !Parameter->HasAnyPropertyFlags(CPF_ReferenceParm)) continue;

				if (!Parameters || !Parameters->IsValidIndex(JsonParameterIndex)) break;
				UEdGraphPin* ParameterPin = Node->FindPin(Parameter->GetFName(), EGPD_Input);
				if (ParameterPin && (*Parameters)[JsonParameterIndex].IsValid() && (*Parameters)[JsonParameterIndex]->Type == EJson::Object) {
					const TSharedPtr<FJsonObject> ParameterExpression = (*Parameters)[JsonParameterIndex]->AsObject();
					if (!ApplyExpression(ParameterExpression, ParameterPin)) {
						FString ParameterToken;
						ParameterExpression->TryGetStringField(TEXT("Token"), ParameterToken);
						UE_LOG(LogCrimeForgeJsonImporter, Warning,
							TEXT("Graph reconstruction: unsupported parameter expression %s for %s.%s in %s"),
							*ParameterToken, *Function->GetName(), *Parameter->GetName(), *FunctionExport->GetName().ToString());
					}
				}
				++JsonParameterIndex;
			}

			return Node;
		}

		UEdGraphPin* BuildContextDataSource(const TSharedPtr<FJsonObject>& Expression) {
			const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
			const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
			if (!Expression->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) ||
				!Expression->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return nullptr;

			UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression);
			if (!ObjectPin) return nullptr;
			UClass* ExplicitScopeClass = ResolveExpressionObjectClass(*ObjectExpression);

			FString ContextToken;
			(*ContextExpression)->TryGetStringField(TEXT("Token"), ContextToken);
			if (ContextToken == TEXT("EX_InstanceVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				return (*ContextExpression)->TryGetObjectField(TEXT("Variable"), Variable)
					? BuildVariableGet(*Variable, ObjectPin) : nullptr;
			}

			if (ContextToken == TEXT("EX_FinalFunction") || ContextToken == TEXT("EX_LocalFinalFunction") ||
				ContextToken == TEXT("EX_VirtualFunction") || ContextToken == TEXT("EX_LocalVirtualFunction")) {
				if (UK2Node_CallFunction* Call = BuildCallNode(*ContextExpression, ObjectPin, ExplicitScopeClass)) return Call->GetReturnValuePin();
			}

			return nullptr;
		}

		UEdGraphPin* BuildDataSource(const TSharedPtr<FJsonObject>& Expression) {
			if (!Expression.IsValid()) return nullptr;
			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);

			if (Token == TEXT("EX_LocalVariable") || Token == TEXT("EX_LocalOutVariable") || Token == TEXT("EX_InstanceVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				return Expression->TryGetObjectField(TEXT("Variable"), Variable) ? BuildVariableGet(*Variable) : nullptr;
			}

			if (Token == TEXT("EX_Context")) return BuildContextDataSource(Expression);

			if (Token == TEXT("EX_CallMath") || Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") ||
				Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
				if (UK2Node_CallFunction* Call = BuildCallNode(Expression, nullptr)) return Call->GetReturnValuePin();
			}

			if (Token == TEXT("EX_Self")) {
				UK2Node_Self* Self = AddNode<UK2Node_Self>(Graph, FMath::Max(80, NextExecX - 260), AllocateDataY());
				Self->AllocateDefaultPins();
				for (UEdGraphPin* Pin : Self->Pins) if (Pin && Pin->Direction == EGPD_Output) return Pin;
			}

			return nullptr;
		}

		bool ApplySwitchValue(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetPin) {
			if (!Expression.IsValid() || !TargetPin) return false;

			const TSharedPtr<FJsonObject>* IndexTerm = nullptr;
			if (!Expression->TryGetObjectField(TEXT("IndexTerm"), IndexTerm) || !IndexTerm || !IndexTerm->IsValid()) return false;

			// Match the Blueprint editor's Select-node specialization order: connect the wildcard
			// ReturnValue to its typed consumer first, then connect the index. This lets the K2
			// schema/node own all wildcard propagation rather than hand-editing PinType/SetEnum.
			UK2Node_Select* Select = AddNode<UK2Node_Select>(Graph, FMath::Max(80, NextExecX - 260), AllocateDataY());
			Select->AllocateDefaultPins();

			UEdGraphPin* ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin || !Schema->TryCreateConnection(ReturnPin, TargetPin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Graph reconstruction: could not specialize Select output from consumer pin %s in %s"),
					*TargetPin->PinName.ToString(), *FunctionExport->GetName().ToString());
				return false;
			}
			Select->NotifyPinConnectionListChanged(ReturnPin);

			// UE5.5 does not reliably regenerate enum Select options from a programmatic Index
			// connection alone. Specialize the value type first (above), then recover the cooked
			// enum metadata and force SetEnum to rebuild the option pins.
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
				const FString EnumName = GetInsideQuotes(ObjectName);
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

			ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin) return false;
			if (!ReturnPin->LinkedTo.Contains(TargetPin) && !Schema->TryCreateConnection(ReturnPin, TargetPin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Graph reconstruction: Select lost typed output while generating enum options for %s in %s"),
					*TargetPin->PinName.ToString(), *FunctionExport->GetName().ToString());
				return false;
			}
			Select->NotifyPinConnectionListChanged(ReturnPin);

			UEdGraphPin* IndexPin = Select->GetIndexPin();
			if (!IndexPin || !ApplyExpression(*IndexTerm, IndexPin)) return false;
			if (UEdGraphPin* CurrentIndexPin = Select->GetIndexPin()) {
				Select->NotifyPinConnectionListChanged(CurrentIndexPin);
			}

			ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin) return false;
			if (!ReturnPin->LinkedTo.Contains(TargetPin) && !Schema->TryCreateConnection(ReturnPin, TargetPin)) {
				UE_LOG(LogCrimeForgeJsonImporter, Warning,
					TEXT("Graph reconstruction: Select lost typed output connection to %s after index specialization in %s"),
					*TargetPin->PinName.ToString(), *FunctionExport->GetName().ToString());
				return false;
			}
			Select->NotifyPinConnectionListChanged(ReturnPin);

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
						ApplyExpression(*CaseTerm, Options[OptionIndex]);
						Populated[OptionIndex] = true;
					}
				}
			}

			const TSharedPtr<FJsonObject>* DefaultTerm = nullptr;
			if (Expression->TryGetObjectField(TEXT("DefaultTerm"), DefaultTerm) && DefaultTerm && DefaultTerm->IsValid()) {
				for (int32 OptionIndex = 0; OptionIndex < Options.Num(); ++OptionIndex) {
					if (!Populated.IsValidIndex(OptionIndex) || !Populated[OptionIndex]) ApplyExpression(*DefaultTerm, Options[OptionIndex]);
				}
			}

			return true;
		}

		bool ApplyConditionalReturn(const FConditionalReturn& Conditional, UEdGraphPin* TargetPin) {
			if (!Conditional.Condition.IsValid() || !Conditional.TrueExpression.IsValid() || !TargetPin) return false;

			FString TrueToken;
			Conditional.TrueExpression->TryGetStringField(TEXT("Token"), TrueToken);
			if (TrueToken == TEXT("EX_NoObject") || TrueToken == TEXT("EX_Nothing")) {
				return true;
			}

			UK2Node_Select* Select = AddNode<UK2Node_Select>(Graph, FMath::Max(80, NextExecX - 260), AllocateDataY());
			Select->AllocateDefaultPins();
			UEdGraphPin* ReturnPin = Select->GetReturnValuePin();
			if (!ReturnPin || !Schema->TryCreateConnection(ReturnPin, TargetPin)) return false;
			Select->NotifyPinConnectionListChanged(ReturnPin);

			UEdGraphPin* IndexPin = Select->GetIndexPin();
			if (!IndexPin || !ApplyExpression(Conditional.Condition, IndexPin)) return false;
			if (UEdGraphPin* CurrentIndexPin = Select->GetIndexPin()) Select->NotifyPinConnectionListChanged(CurrentIndexPin);

			ReturnPin = Select->GetReturnValuePin();
			if (ReturnPin && !ReturnPin->LinkedTo.Contains(TargetPin)) Schema->TryCreateConnection(ReturnPin, TargetPin);

			TArray<UEdGraphPin*> Options;
			Select->GetOptionPins(Options);
			if (Options.Num() >= 2) ApplyExpression(Conditional.TrueExpression, Options[1]);
			return true;
		}

		bool ApplyExpression(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetPin) {
			if (!Expression.IsValid() || !TargetPin) return false;
			FString Token;
			Expression->TryGetStringField(TEXT("Token"), Token);

			if (Token == TEXT("EX_LocalVariable") || Token == TEXT("EX_LocalOutVariable")) {
				const TSharedPtr<FJsonObject>* Variable = nullptr;
				if (!Expression->TryGetObjectField(TEXT("Variable"), Variable)) return false;
				const TSharedPtr<FJsonObject>* Property = nullptr;
				if (!(*Variable)->TryGetObjectField(TEXT("Property"), Property)) return false;
				FString Name;
				if (!(*Property)->TryGetStringField(TEXT("Name"), Name)) return false;
				const FName LocalName(*Name);

				if (UEdGraphPin** ExistingPin = BuiltLocalPins.Find(LocalName)) {
					if (*ExistingPin && Schema->TryCreateConnection(*ExistingPin, TargetPin)) return true;
				}
				if (const FConditionalReturn* Conditional = ConditionalReturns.Find(LocalName)) {
					return ApplyConditionalReturn(*Conditional, TargetPin);
				}
				if (const TSharedPtr<FJsonObject>* Cached = LocalExpressions.Find(LocalName)) {
					if (LocalsBeingResolved.Contains(LocalName)) {
						UE_LOG(LogCrimeForgeJsonImporter, Warning,
							TEXT("Graph reconstruction: detected cyclic compiler-local expression '%s' while rebuilding %s; leaving this pin unresolved instead of recursing"),
							*LocalName.ToString(), *FunctionExport->GetName().ToString());
						return false;
					}
					LocalsBeingResolved.Add(LocalName);
					const bool bApplied = ApplyExpression(*Cached, TargetPin);
					LocalsBeingResolved.Remove(LocalName);
					return bApplied;
				}
			}

			if (Token == TEXT("EX_ObjectConst")) {
				const TSharedPtr<FJsonObject>* Value = nullptr;
				if (!Expression->TryGetObjectField(TEXT("Value"), Value) || !Value || !Value->IsValid()) return false;

				FString ObjectName;
				FString ObjectPath;
				(*Value)->TryGetStringField(TEXT("ObjectName"), ObjectName);
				(*Value)->TryGetStringField(TEXT("ObjectPath"), ObjectPath);
				const FString ResolvedName = GetInsideQuotes(ObjectName);

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
						TEXT("Graph reconstruction: could not resolve EX_ObjectConst %s (%s) for pin %s in %s"),
						*ObjectName, *ObjectPath, *TargetPin->PinName.ToString(), *FunctionExport->GetName().ToString());
					return false;
				}
				Schema->TrySetDefaultObject(*TargetPin, Object, true);
				return true;
			}

			if (Token == TEXT("EX_SwitchValue")) return ApplySwitchValue(Expression, TargetPin);

			if (Token == TEXT("EX_True")) { Schema->TrySetDefaultValue(*TargetPin, TEXT("true"), true); return true; }
			if (Token == TEXT("EX_False")) { Schema->TrySetDefaultValue(*TargetPin, TEXT("false"), true); return true; }
			if (Token == TEXT("EX_NoObject") || Token == TEXT("EX_Nothing")) {
				Schema->TrySetDefaultObject(*TargetPin, nullptr, true);
				return true;
			}

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

			if (UEdGraphPin* Source = BuildDataSource(Expression)) {
				return Schema->TryCreateConnection(Source, TargetPin);
			}

			const FString Detail = FString::Printf(TEXT("Unsupported expression token %s in %s"), *Token, *FunctionExport->GetName().ToString());
			UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph reconstruction: %s"), *Detail);
			FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Blueprint expression token"), Detail, Token);
			return false;
		}

		bool BuildExecutableLocalAssignment(const TSharedPtr<FJsonObject>& Statement) {
			if (!Statement.IsValid()) return false;
			const FName Destination = GetDestinationName(Statement);
			if (Destination.IsNone()) return false;

			const TSharedPtr<FJsonObject>* Expression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Expression"), Expression)) return false;

			FString ExpressionToken;
			(*Expression)->TryGetStringField(TEXT("Token"), ExpressionToken);
			UK2Node_CallFunction* Call = nullptr;

			if (ExpressionToken == TEXT("EX_CallMath") || ExpressionToken == TEXT("EX_FinalFunction") ||
				ExpressionToken == TEXT("EX_LocalFinalFunction") || ExpressionToken == TEXT("EX_VirtualFunction") ||
				ExpressionToken == TEXT("EX_LocalVirtualFunction")) {
				UFunction* Function = ResolveCallFunction(*Expression, nullptr);
				if (!Function || Function->HasAnyFunctionFlags(FUNC_BlueprintPure)) return false;
				Call = BuildCallNode(*Expression, nullptr);
			} else if (ExpressionToken == TEXT("EX_Context")) {
				const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
				const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
				if (!(*Expression)->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) ||
					!(*Expression)->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return false;
				UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression);
				if (!ObjectPin) return false;
				UClass* ExplicitScopeClass = ResolveExpressionObjectClass(*ObjectExpression);
				UFunction* Function = ResolveCallFunction(*ContextExpression, ObjectPin, ExplicitScopeClass);
				if (!Function || Function->HasAnyFunctionFlags(FUNC_BlueprintPure)) return false;
				Call = BuildCallNode(*ContextExpression, ObjectPin, ExplicitScopeClass);
			}

			if (!Call) return false;
			ChainExec(Call);
			if (UEdGraphPin* ReturnPin = Call->GetReturnValuePin()) {
				BuiltLocalPins.Add(Destination, ReturnPin);
				LocalExpressions.Remove(Destination);
			}
			return true;
		}

		bool BuildExecutableCall(const TSharedPtr<FJsonObject>& Expression, UEdGraphPin* TargetObject, UClass* ExplicitScopeClass = nullptr) {
			UK2Node_CallFunction* Call = BuildCallNode(Expression, TargetObject, ExplicitScopeClass);
			if (!Call) return false;
			if (!Call->GetTargetFunction() || !Call->GetTargetFunction()->HasAnyFunctionFlags(FUNC_BlueprintPure)) ChainExec(Call);
			return true;
		}

		bool BuildExecutableContext(const TSharedPtr<FJsonObject>& Statement) {
			const TSharedPtr<FJsonObject>* ObjectExpression = nullptr;
			const TSharedPtr<FJsonObject>* ContextExpression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("ObjectExpression"), ObjectExpression) ||
				!Statement->TryGetObjectField(TEXT("ContextExpression"), ContextExpression)) return false;

			UEdGraphPin* ObjectPin = BuildDataSource(*ObjectExpression);
			if (!ObjectPin) return false;
			UClass* ExplicitScopeClass = ResolveExpressionObjectClass(*ObjectExpression);

			FString Token;
			(*ContextExpression)->TryGetStringField(TEXT("Token"), Token);
			if (Token == TEXT("EX_FinalFunction") || Token == TEXT("EX_LocalFinalFunction") ||
				Token == TEXT("EX_VirtualFunction") || Token == TEXT("EX_LocalVirtualFunction")) {
				return BuildExecutableCall(*ContextExpression, ObjectPin, ExplicitScopeClass);
			}

			return BuildContextDataSource(Statement) != nullptr;
		}

		void ApplyReturn(const TSharedPtr<FJsonObject>& Statement) {
			const TSharedPtr<FJsonObject>* ReturnExpression = nullptr;
			if (!Statement->TryGetObjectField(TEXT("Expression"), ReturnExpression)) return;

			FString ReturnToken;
			(*ReturnExpression)->TryGetStringField(TEXT("Token"), ReturnToken);

			if (ReturnToken != TEXT("EX_Nothing")) {
				// The bytecode return expression normally identifies ReturnValue. Use its name when present;
				// otherwise fall back to the first non-exec result pin.
				UEdGraphPin* ReturnPin = nullptr;
				if (ReturnToken == TEXT("EX_LocalOutVariable") || ReturnToken == TEXT("EX_LocalVariable")) {
					const TSharedPtr<FJsonObject>* Variable = nullptr;
					const TSharedPtr<FJsonObject>* Property = nullptr;
					FString Name;
					if ((*ReturnExpression)->TryGetObjectField(TEXT("Variable"), Variable) &&
						(*Variable)->TryGetObjectField(TEXT("Property"), Property) &&
						(*Property)->TryGetStringField(TEXT("Name"), Name)) {
						ReturnPin = Result->FindPin(FName(*Name), EGPD_Input);
					}
				}

				if (!ReturnPin) {
					for (UEdGraphPin* Pin : Result->Pins) {
						if (Pin && Pin->Direction == EGPD_Input && Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec) {
							ReturnPin = Pin;
							break;
						}
					}
				}

				if (ReturnPin) ApplyExpression(*ReturnExpression, ReturnPin);
			}

			if (ExecTail) {
				if (UEdGraphPin* ResultExec = FindExecInput(Result)) {
					Schema->TryCreateConnection(ExecTail, ResultExec);
					ExecTail = nullptr;
				}
			}
		}
	};
}

int32 FBlueprintGraphReconstructor::DeclareFunctions(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	if (!Blueprint || !Container) return 0;

	TSet<FName>& DeclaredThisPass = GCrimeForgeJsonImporterDeclaredFunctionGraphs.FindOrAdd(Blueprint);
	DeclaredThisPass.Reset();

	const FName GeneratedClassName = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetFName() : NAME_None;
	if (GeneratedClassName.IsNone()) return 0;

	int32 SignaturesCreated = 0;
	for (FUObjectExport* FunctionExport : Container->Exports) {
		if (!ShouldReconstructFunction(FunctionExport, GeneratedClassName)) continue;

		const FName FunctionName = FunctionExport->GetName();
		if (FindFunctionGraph(Blueprint, FunctionName)) {
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Graph declaration pass: keeping existing function graph %s.%s"),
				*Blueprint->GetName(), *FunctionName.ToString());
			continue;
		}

		UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(
			Blueprint,
			FunctionName,
			UEdGraph::StaticClass(),
			UEdGraphSchema_K2::StaticClass());
		if (!Graph) continue;

		UFunction* ParentSignature = Blueprint->ParentClass ? Blueprint->ParentClass->FindFunctionByName(FunctionName) : nullptr;
		if (ParentSignature && ParentSignature->HasAnyFunctionFlags(FUNC_BlueprintEvent)) {
			FBlueprintEditorUtils::AddFunctionGraph<UFunction>(Blueprint, Graph, false, ParentSignature);
		} else {
			FBlueprintEditorUtils::AddFunctionGraph<UFunction>(Blueprint, Graph, true, nullptr);
		}

		UK2Node_FunctionEntry* Entry = FindEntryNode(Graph);
		UK2Node_FunctionResult* Result = FindResultNode(Graph);
		if (!Entry) {
			UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph declaration pass: function %s has no entry node after AddFunctionGraph"), *FunctionName.ToString());
			continue;
		}

		// UE may omit the result node for some inherited/override signatures until the graph is
		// edited. The bytecode body pass always needs a deterministic terminator, so create it now.
		if (!Result) {
			Result = FBlueprintEditorUtils::FindOrCreateFunctionResultNode(Entry);
		}

		if (!ParentSignature) AddSignaturePins(FunctionExport, Entry, Result);
		Entry->AddExtraFlags(FunctionFlagsFromExport(FunctionExport));
		Entry->NodePosX = 0;
		Entry->NodePosY = 0;
		if (Result) {
			Result->NodePosX = 1400;
			Result->NodePosY = 0;
			// Keep the declaration-only graph compilable until the global body pass.
			if (UEdGraphPin* EntryExec = FindExecOutput(Entry)) {
				if (UEdGraphPin* ResultExec = FindExecInput(Result)) {
					GetDefault<UEdGraphSchema_K2>()->TryCreateConnection(EntryExec, ResultExec);
				}
			}
		}

		DeclaredThisPass.Add(FunctionName);
		++SignaturesCreated;
	}

	if (SignaturesCreated > 0) FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Graph declaration pass: %s created %d standalone function signature(s)"),
		*Blueprint->GetName(), SignaturesCreated);
	return SignaturesCreated;
}

int32 FBlueprintGraphReconstructor::BuildFunctionBodies(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	if (!Blueprint || !Container) return 0;
	const FName GeneratedClassName = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetFName() : NAME_None;
	if (GeneratedClassName.IsNone()) return 0;

	const TSet<FName>* DeclaredNamesPtr = GCrimeForgeJsonImporterDeclaredFunctionGraphs.Find(Blueprint);
	if (!DeclaredNamesPtr || DeclaredNamesPtr->Num() == 0) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning,
			TEXT("Graph body pass: %s has no CrimeForgeJsonImporter-declared function graphs recorded; skipping to protect existing authored graphs"),
			*Blueprint->GetName());
		return 0;
	}
	const TSet<FName> DeclaredNames = *DeclaredNamesPtr;

	int32 BodiesBuilt = 0;
	for (FUObjectExport* FunctionExport : Container->Exports) {
		if (!ShouldReconstructFunction(FunctionExport, GeneratedClassName)) continue;
		const FName FunctionName = FunctionExport->GetName();
		if (!DeclaredNames.Contains(FunctionName)) continue;

		UEdGraph* Graph = FindFunctionGraph(Blueprint, FunctionName);
		if (!Graph) {
			UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Graph body pass: declared function graph %s.%s disappeared before body reconstruction"),
				*Blueprint->GetName(), *FunctionName.ToString());
			continue;
		}

		// This graph is known to have been created by CrimeForge JSON Importer in pass 1, so everything except
		// FunctionEntry/FunctionResult is compiler/editor declaration scaffolding. Remove it
		// unconditionally rather than trying to identify every scaffold node class UE may insert.
		TArray<UEdGraphNode*> DeclarationScaffold;
		for (UEdGraphNode* Node : Graph->Nodes) {
			if (!Node) continue;
			if (Cast<UK2Node_FunctionEntry>(Node) || Cast<UK2Node_FunctionResult>(Node)) continue;
			DeclarationScaffold.Add(Node);
		}
		for (UEdGraphNode* Node : DeclarationScaffold) Node->DestroyNode();

		UK2Node_FunctionEntry* Entry = FindEntryNode(Graph);
		UK2Node_FunctionResult* Result = FindResultNode(Graph);
		if (Entry && !Result) Result = FBlueprintEditorUtils::FindOrCreateFunctionResultNode(Entry);
		if (Entry) {
			if (UEdGraphPin* EntryExec = FindExecOutput(Entry)) EntryExec->BreakAllPinLinks();
		}
		if (Result) {
			if (UEdGraphPin* ResultExec = FindExecInput(Result)) ResultExec->BreakAllPinLinks();
			Result->NodePosX = 1400;
			Result->NodePosY = 0;
		}

		const int32 NodesBefore = Graph->Nodes.Num();
		FFunctionBodyBuilder Builder(Blueprint, FunctionExport, Graph);
		if (Builder.Build()) {
			++BodiesBuilt;
			UE_LOG(LogCrimeForgeJsonImporter, Display,
				TEXT("Graph body pass: rebuilt function %s.%s from ScriptBytecode (nodes %d -> %d)"),
				*Blueprint->GetName(), *FunctionName.ToString(), NodesBefore, Graph->Nodes.Num());
		} else {
			UE_LOG(LogCrimeForgeJsonImporter, Warning,
				TEXT("Graph body pass: FAILED to rebuild function %s.%s from ScriptBytecode"),
				*Blueprint->GetName(), *FunctionName.ToString());
		}
	}

	GCrimeForgeJsonImporterDeclaredFunctionGraphs.Remove(Blueprint);
	if (BodiesBuilt > 0) FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	return BodiesBuilt;
}

int32 FBlueprintGraphReconstructor::ReconstructFunctions(UBlueprint* Blueprint, FUObjectExportContainer* Container) {
	const int32 Declared = DeclareFunctions(Blueprint, Container);
	if (Declared > 0) {
		FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipGarbageCollection);
	}
	const int32 Bodies = BuildFunctionBodies(Blueprint, Container);
	if (Bodies > 0) {
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
		FKismetEditorUtilities::CompileBlueprint(Blueprint, EBlueprintCompileOptions::SkipGarbageCollection);
	}
	return Bodies;
}

