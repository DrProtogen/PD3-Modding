

#include "Importers/Types/Materials/MaterialImporter.h"
#include "Importers/Types/Materials/MaterialStubs.h"
#include "Utilities/JsonHelpers.h"

/* Include Material.h (depends on UE Version) */
#if (ENGINE_UE5 && ENGINE_MINOR_VERSION < 3) || ENGINE_UE4
#include "Materials/Material.h"
#else
#include "MaterialDomain.h"
#endif

/* Cached expression data, and the header holding it, only exist from 4.25 on */
#if !UE4_24_BELOW
#include "MaterialCachedData.h"
#endif
#include "Factories/MaterialFactoryNew.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"

#if ENGINE_UE5
class UMaterialAccessor final : public UMaterial {
public:
	FMaterialCachedExpressionData* GetCachedExpressionDataRef() const {
		return CachedExpressionData.Get();
	}
};
#endif

UObject* IMaterialImporter::CreateAsset(UObject* CreatedAsset) {
	/* Create Material Factory (factory automatically creates the Material) */
	UMaterialFactoryNew* MaterialFactory = NewObject<UMaterialFactoryNew>();
	UMaterial* Material = Cast<UMaterial>(MaterialFactory->FactoryCreateNew(UMaterial::StaticClass(), GetPackage(), *GetAssetName(), RF_Standalone | RF_Public, nullptr, GWarn));

	return IImporter::CreateAsset(Material);
}

namespace {
	bool HasEditableRootData(const TSharedPtr<FJsonObject>& Props) {
		if (!Props.IsValid()) {
			return false;
		}

		/* UE5 moves these inputs into UMaterialEditorOnlyData. A normal shipping cook does not
		 * need them, so their presence is the signal that this package really has enough source
		 * graph data to restore connections instead of merely having runtime material properties. */
		static const TCHAR* RootFields[] = {
			TEXT("BaseColor"), TEXT("Metallic"), TEXT("Specular"), TEXT("Roughness"),
			TEXT("Anisotropy"), TEXT("EmissiveColor"), TEXT("Opacity"), TEXT("OpacityMask"),
			TEXT("Normal"), TEXT("Tangent"), TEXT("WorldPositionOffset"), TEXT("SubsurfaceColor"),
			TEXT("AmbientOcclusion"), TEXT("Refraction"), TEXT("PixelDepthOffset"),
			TEXT("ShadingModelFromMaterialExpression"), TEXT("MaterialAttributes"),
			TEXT("CustomizedUVs"), TEXT("ExpressionCollection")
		};

		for (const TCHAR* Field : RootFields) {
			if (Props->HasField(Field)) {
				return true;
			}
		}

		return false;
	}
}

bool IMaterialImporter::Import() {
	UMaterial* Material = Create<UMaterial>();
	if (Material == nullptr) {
		return false;
	}

	/* Clear any default expressions the factory adds. Either the recoverable source graph or the
	 * cooked fallback graph below owns the collection from this point on. */
#if UE5_1_BEYOND
	Material->GetExpressionCollection().Empty();
#else
	Material->Expressions.Empty();
#endif

	/* Runtime material state survives cooking and must be applied before building a fallback graph:
	 * domain, blend mode, bUseMaterialAttributes and shading model determine which material output
	 * is legal to feed. Do not deserialize the old cached-expression blob into the new material;
	 * it describes the cooked graph, while UpdateCachedExpressionData later rebuilds a cache for
	 * the editable graph CrimeForge creates. */
	GetObjectSerializer()->DeserializeObjectProperties(RemovePropertiesShared(GetAssetData(), {
		"CachedExpressionData",
		"CachedReferencedTextures"
	}), Material);

	const TSharedPtr<FJsonObject>* ShadingModelsPtr = nullptr;
	if (GetAssetData()->TryGetObjectField(TEXT("ShadingModels"), ShadingModelsPtr) && ShadingModelsPtr != nullptr && ShadingModelsPtr->IsValid()) {
		int32 ShadingModelField = 0;
		if ((*ShadingModelsPtr)->TryGetNumberField(TEXT("ShadingModelField"), ShadingModelField)) {
#if UE5_1_BEYOND
			Material->GetShadingModels().SetShadingModelField(ShadingModelField);
#endif
		}
	}

	FUObjectExportContainer* ExpressionContainer = new FUObjectExportContainer();
	const TSharedPtr<FJsonObject> Props = FindMaterialData(GetAssetType(), ExpressionContainer);
	const bool bRestoreSourceGraph = Props.IsValid() && ExpressionContainer->Num() > 0 && HasEditableRootData(Props);

#if UE5_1_BEYOND
	UMaterialEditorOnlyData* EditorOnlyData = Material->GetEditorOnlyData();
#else
	UMaterial* EditorOnlyData = Material;
#endif

	if (bRestoreSourceGraph) {
		/* This path is used when source/editor graph data genuinely survived, for example an
		 * uncooked/editor package or an optional editor-data companion. It remains the highest
		 * fidelity route, but is not required for a shipping PAYDAY 3 material. */
		ConstructExpressions(ExpressionContainer);
		PropagateExpressions(ExpressionContainer);

		const TArray<FString> IgnoredProperties = {
			TEXT("ParameterGroupData"),
			TEXT("ExpressionCollection"),
			TEXT("CustomizedUVs")
		};

		TSharedPtr<FJsonObject> RawConnectionData = MakeShared<FJsonObject>();
		RawConnectionData->Values = Props->Values;
		for (const FString& Property : IgnoredProperties) {
			RawConnectionData->RemoveField(Property);
		}

		GetObjectSerializer()->DeserializeObjectProperties(RawConnectionData, EditorOnlyData);

		const TArray<TSharedPtr<FJsonValue>>* InputsPtr = nullptr;
		if (Props->TryGetArrayField(TEXT("CustomizedUVs"), InputsPtr) && InputsPtr != nullptr) {
			int32 InputIndex = 0;
			for (const TSharedPtr<FJsonValue>& InputValue : *InputsPtr) {
				if (InputIndex >= UE_ARRAY_COUNT(EditorOnlyData->CustomizedUVs)) {
					break;
				}

				const TSharedPtr<FJsonObject> InputObject = InputValue.IsValid() && InputValue->Type == EJson::Object ? InputValue->AsObject() : nullptr;
				if (InputObject.IsValid()) {
					const FName ExpressionName = GetExpressionName(InputObject.Get());
					if (ExpressionContainer->Contains(ExpressionName)) {
						FExpressionInput Input = PopulateExpressionInput(InputObject.Get(), ExpressionContainer->Find<UMaterialExpression>(ExpressionName));
						RemapConvertOutput(Input);
						EditorOnlyData->CustomizedUVs[InputIndex] = *reinterpret_cast<FVector2MaterialInput*>(&Input);
					}
				}
				++InputIndex;
			}
		}

		const TArray<TSharedPtr<FJsonValue>>* ParameterGroups = nullptr;
		if (Props->TryGetArrayField(TEXT("ParameterGroupData"), ParameterGroups) && ParameterGroups != nullptr) {
			TArray<FParameterGroupData> GroupData;
			for (const TSharedPtr<FJsonValue>& GroupValue : *ParameterGroups) {
				if (!GroupValue.IsValid() || GroupValue->IsNull()) {
					continue;
				}

				if (GroupValue->Type != EJson::Object) {
					continue;
				}

				const TSharedPtr<FJsonObject> GroupObject = GroupValue->AsObject();
				if (!GroupObject.IsValid()) {
					continue;
				}

				FParameterGroupData Group;
				FString GroupName;
				if (GroupObject->TryGetStringField(TEXT("GroupName"), GroupName)) {
					Group.GroupName = GroupName;
				}
				int32 SortPriority = 0;
				if (GroupObject->TryGetNumberField(TEXT("GroupSortPriority"), SortPriority)) {
					Group.GroupSortPriority = SortPriority;
				}
				GroupData.Add(Group);
			}
			EditorOnlyData->ParameterGroupData = GroupData;
		}

		UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Material %s restored source graph with %d expression export(s)"), *GetAssetName(), ExpressionContainer->Num());
	}
	else {
#if ENGINE_UE5
		/* Normal shipping path. The original authoring graph is gone, but CachedExpressionData still
		 * exposes runtime parameter identities/defaults. Build one deterministic live chain from the
		 * recoverable parameters so MICs can bind to a real parent material. */
		const bool bCreatedFallback = CreateStubs(this);
		if (bCreatedFallback) {
			CreatedStubsNotification();
		} else {
			UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Material %s imported from cooked data, but no recoverable cached parameters were found"), *GetAssetName());
		}
#else
		SpawnMaterialDataMissingNotification();
		return false;
#endif
	}

	/* Move the result node next to whichever reconstructed input CrimeForge fed. */
	UMaterialExpression* PositionalExpression = EditorOnlyData->BaseColor.Expression;
	if (Material->bUseMaterialAttributes && EditorOnlyData->MaterialAttributes.Expression != nullptr) {
		PositionalExpression = EditorOnlyData->MaterialAttributes.Expression;
	}
	if (PositionalExpression == nullptr) {
		PositionalExpression = EditorOnlyData->EmissiveColor.Expression;
	}
	if (PositionalExpression != nullptr) {
		Material->EditorX = PositionalExpression->MaterialExpressionEditorX + PositionalExpression->GetWidth() * 2.5f;
		Material->EditorY = PositionalExpression->MaterialExpressionEditorY;
	}

#if !UE4_24_BELOW
	Material->UpdateCachedExpressionData();
#endif

	FMaterialUpdateContext MaterialUpdateContext;
	MaterialUpdateContext.AddMaterial(Material);
	Material->ForceRecompileForRendering();

	/* Register, PostEditChange and save only after the graph and runtime properties are complete. */
	return OnAssetCreation(Material);
}

