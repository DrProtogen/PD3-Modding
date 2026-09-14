

#include "Importers/Types/Materials/MaterialInstanceConstantImporter.h"
#include "Importers/Types/Materials/MaterialParameterCompatibility.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Dom/JsonObject.h"
#include "RHIDefinitions.h"
#include "MaterialShared.h"
#include "Materials/MaterialInterface.h"
#include "Utilities/JsonHelpers.h"

namespace {
	bool UsesCrimeForgeCookedFallback(UMaterialInterface* Parent) {
		if (Parent == nullptr) {
			return false;
		}

		TArray<FMaterialParameterInfo> ParameterInfos;
		TArray<FGuid> ParameterIds;
		Parent->GetAllScalarParameterInfo(ParameterInfos, ParameterIds);
		for (const FMaterialParameterInfo& ParameterInfo : ParameterInfos) {
			if (ParameterInfo.Name == CrimeForgeMaterialCompatibility::GetFallbackMarkerName()) {
				return true;
			}
		}
		return false;
	}

	int32 RemapAssociatedParameterInfos(TArray<FUObjectJsonValueExport>& Parameters) {
		int32 RemappedCount = 0;
		for (FUObjectJsonValueExport& Parameter : Parameters) {
			if (!Parameter.Has(TEXT("ParameterInfo"))) {
				continue;
			}

			FUObjectJsonValueExport ParameterInfo = Parameter.GetObject(TEXT("ParameterInfo"));
			if (CrimeForgeMaterialCompatibility::RemapParameterInfoForFallback(ParameterInfo.JsonObject)) {
				++RemappedCount;
			}
		}
		return RemappedCount;
	}

	/* A material instance is only useful if its inheritance chain exists first. The generic
	 * property serializer can import object references while it is deserializing them, but by
	 * then the MIC already exists and half of its state may already have been applied. Resolve the
	 * Parent reference before creating this asset instead. Parent MICs recurse through this same
	 * importer, so an entire instance chain is rebuilt from the base material outward. */
	bool ResolveParentBeforeInstance(IMaterialInstanceConstantImporter* Importer, TObjectPtr<UMaterialInterface>& OutParent) {
		OutParent = nullptr;

		const TSharedPtr<FJsonObject> AssetData = Importer->GetAssetData();
		if (!AssetData.IsValid()) {
			return false;
		}

		const TSharedPtr<FJsonValue>* ParentValue = AssetData->Values.Find(TEXT("Parent"));
		if (ParentValue == nullptr || !ParentValue->IsValid() || (*ParentValue)->IsNull()) {
			return true;
		}

		if ((*ParentValue)->Type != EJson::Object) {
			UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Material instance %s has a Parent value CrimeForge cannot resolve"), *Importer->GetAssetName());
			return false;
		}

		TSharedPtr<FJsonObject> ParentReference = (*ParentValue)->AsObject();
		if (!ParentReference.IsValid()) {
			return false;
		}

		Importer->LoadExport<UMaterialInterface>(&ParentReference, OutParent);
		if (OutParent == nullptr) {
			FString ParentPath;
			ParentReference->TryGetStringField(TEXT("ObjectPath"), ParentPath);
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("Material instance %s could not import parent %s"), *Importer->GetAssetName(), *ParentPath);
			return false;
		}

		UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Material instance %s parent ready: %s"), *Importer->GetAssetName(), *OutParent->GetPathName());
		return true;
	}
}

UObject* IMaterialInstanceConstantImporter::CreateAsset(UObject* CreatedAsset) {
	return IImporter::CreateAsset(NewObject<UMaterialInstanceConstant>(GetPackage(), UMaterialInstanceConstant::StaticClass(), *GetAssetName(), RF_Public | RF_Standalone));
}

bool IMaterialInstanceConstantImporter::Import() {
	TObjectPtr<UMaterialInterface> ResolvedParent = nullptr;
	if (!ResolveParentBeforeInstance(this, ResolvedParent)) {
		return false;
	}
	const bool bParentUsesCookedFallback = UsesCrimeForgeCookedFallback(ResolvedParent);
	int32 RemappedAssociatedParameterCount = 0;

	UMaterialInstanceConstant* MaterialInstanceConstant = Create<UMaterialInstanceConstant>();
	if (MaterialInstanceConstant == nullptr) {
		return false;
	}

	/* Specific fix for 4.16 engines */
	const TArray<FString> ParameterFields = {
		TEXT("ScalarParameterValues"),
		TEXT("TextureParameterValues"),
		TEXT("VectorParameterValues"),
		TEXT("DoubleVectorParameterValues"),
		TEXT("TextureCollectionParameterValues"),
		TEXT("FontParameterValues"),
		TEXT("RuntimeVirtualTextureParameterValues"),
		TEXT("SparseVolumeTextureParameterValues")
	};

	for (const FString& FieldName : ParameterFields) {
		if (GetAssetDataAsValue().Has(FieldName)) {
			TArray<FUObjectJsonValueExport> Params = GetAssetDataAsValue().GetArray(FieldName);
			
			ConvertParameterNamesToInfos(Params);
			if (bParentUsesCookedFallback) {
				RemappedAssociatedParameterCount += RemapAssociatedParameterInfos(Params);
			}
			GetAssetDataAsValue().SetArray(FieldName, Params);
		}
	}
	
	GetObjectSerializer()->DeserializeObjectProperties(RemovePropertiesShared(GetAssetData(),
	{
		"CachedReferencedTextures"
	}), MaterialInstanceConstant);

	TArray<FUObjectJsonValueExport> StaticSwitchParametersObjects;
	TArray<FUObjectJsonValueExport> StaticComponentMaskParametersObjects;
	
	/* Optional Editor Data [contains static switch parameters] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	if (FUObjectExport* EditorOnlyData = GetContainer()->FindByType(FString("MaterialInstanceEditorOnlyData"))) {
		if (EditorOnlyData->GetPropertiesAsValue().Has("StaticParameters")) {
			ReadStaticParameters(EditorOnlyData->GetPropertiesAsValue().GetObject("StaticParameters"), StaticSwitchParametersObjects, StaticComponentMaskParametersObjects);
		}
	}

	/* Read from potential properties inside of asset data */
	if (GetAssetDataAsValue().Has("StaticParametersRuntime")) {
		ReadStaticParameters(GetAssetDataAsValue().GetObject("StaticParametersRuntime"), StaticSwitchParametersObjects, StaticComponentMaskParametersObjects);
	}
	if (GetAssetDataAsValue().Has(TEXT("StaticParameters"))) {
		ReadStaticParameters(GetAssetDataAsValue().GetObject("StaticParameters"), StaticSwitchParametersObjects, StaticComponentMaskParametersObjects);
	}

	if (bParentUsesCookedFallback) {
		RemappedAssociatedParameterCount += RemapAssociatedParameterInfos(StaticSwitchParametersObjects);
		RemappedAssociatedParameterCount += RemapAssociatedParameterInfos(StaticComponentMaskParametersObjects);
		if (RemappedAssociatedParameterCount > 0) {
			UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Material instance %s remapped %d layer/blend parameter override(s) to cooked-parent compatibility identities"), *GetAssetName(), RemappedAssociatedParameterCount);
		}
	}

	/* ~~~~~~~~~ STATIC PARAMETERS ~~~~~~~~~~~ */
/* 5.1 is the one version that hangs the static parameter set off editor-only data. Every other
 * version - 5.0 included, which has no GetEditorOnlyData at all - builds a set up front and
 * pushes it through UpdateStaticPermutation. */
#define MIC_STATICS_VIA_EDITOR_ONLY (UE5_1_BEYOND && !UE5_2_BEYOND)

#if !MIC_STATICS_VIA_EDITOR_ONLY
	FStaticParameterSet NewStaticParameterSet; /* Unreal Engine 5.2/4.26 and beyond have a different method */
#endif

	TArray<FStaticSwitchParameter> StaticSwitchParameters;
	for (FUObjectJsonValueExport& StaticParameter : StaticSwitchParametersObjects) {
		auto ParameterInfo = StaticParameter.GetObject("ParameterInfo");

		/* Create Material Parameter Info */
		FMaterialParameterInfo MaterialParameterParameterInfo = FMaterialParameterInfo(
			StringToName(ParameterInfo.GetString("Name")),
			static_cast<EMaterialParameterAssociation>(StaticEnum<EMaterialParameterAssociation>()->GetValueByNameString(ParameterInfo.GetString("Association"))),
			ParameterInfo.GetInteger("Index")
		);

		/* Now, create the actual switch parameter */
		FStaticSwitchParameter Parameter = FStaticSwitchParameter(
			MaterialParameterParameterInfo,
			StaticParameter.GetBool(TEXT("Value")),
			StaticParameter.GetBool("bOverride"),
			StringToGuid(StaticParameter.GetString("ExpressionGUID"))
		);

		StaticSwitchParameters.Add(Parameter);
#if MIC_STATICS_VIA_EDITOR_ONLY
		MaterialInstanceConstant->GetEditorOnlyData()->StaticParameters.StaticSwitchParameters.Add(Parameter);
#else
		/* Unreal Engine 5.2/4.26 and beyond have a different method */
		NewStaticParameterSet.StaticSwitchParameters.Add(Parameter);
#endif
	}

	TArray<FStaticComponentMaskParameter> StaticSwitchMaskParameters;
	
	for (FUObjectJsonValueExport& StaticParameter : StaticComponentMaskParametersObjects) {
		auto ParameterInfo = StaticParameter.GetObject("ParameterInfo");

		/* Create Material Parameter Info */
		FMaterialParameterInfo MaterialParameterParameterInfo = FMaterialParameterInfo(
			StringToName(ParameterInfo.GetString("Name")),
			static_cast<EMaterialParameterAssociation>(StaticEnum<EMaterialParameterAssociation>()->GetValueByNameString(ParameterInfo.GetString("Association"))),
			ParameterInfo.GetInteger("Index")
		);

		FStaticComponentMaskParameter Parameter = FStaticComponentMaskParameter(
			MaterialParameterParameterInfo,
			StaticParameter.GetBool("R"),
			StaticParameter.GetBool("G"),
			StaticParameter.GetBool("B"),
			StaticParameter.GetBool("A"),
			StaticParameter.GetBool("bOverride"),
			StringToGuid(StaticParameter.GetString("ExpressionGUID"))
		);

		StaticSwitchMaskParameters.Add(Parameter);
#if MIC_STATICS_VIA_EDITOR_ONLY
		MaterialInstanceConstant->GetEditorOnlyData()->StaticParameters.StaticComponentMaskParameters.Add(Parameter);
#else
		NewStaticParameterSet.
		/* EditorOnly is needed on 5.2+ */
		#if UE5_2_BEYOND
			EditorOnly.
		#endif
		StaticComponentMaskParameters.Add(Parameter);
#endif
	}

#if !MIC_STATICS_VIA_EDITOR_ONLY
	FMaterialUpdateContext MaterialUpdateContext(FMaterialUpdateContext::EOptions::Default & ~FMaterialUpdateContext::EOptions::RecreateRenderStates);

	MaterialInstanceConstant->UpdateStaticPermutation(NewStaticParameterSet, &MaterialUpdateContext);
	MaterialInstanceConstant->InitStaticPermutation();
#endif

	return OnAssetCreation(MaterialInstanceConstant);
}

void IMaterialInstanceConstantImporter::ReadStaticParameters(const FUObjectJsonValueExport& StaticParameters, TArray<FUObjectJsonValueExport>& StaticSwitchParameters, TArray<FUObjectJsonValueExport>& StaticComponentMaskParameters) {
	if (StaticParameters.Has("StaticSwitchParameters")) {
		TArray<FUObjectJsonValueExport> Params = StaticParameters.GetArray("StaticSwitchParameters");
		ConvertParameterNamesToInfos(Params);
		
		for (FUObjectJsonValueExport& Parameter : Params) {
			StaticSwitchParameters.Add(Parameter);
		}
	}

	if (StaticParameters.Has("StaticComponentMaskParameters")) {
		TArray<FUObjectJsonValueExport> Params = StaticParameters.GetArray("StaticComponentMaskParameters");
		ConvertParameterNamesToInfos(Params);
		
		for (FUObjectJsonValueExport& Parameter : Params) {
			StaticComponentMaskParameters.Add(Parameter);
		}
	}
}

void IMaterialInstanceConstantImporter::ConvertParameterNamesToInfos(TArray<FUObjectJsonValueExport>& Input) {
	/* Convert ParameterName to be inside ParameterInfo */
	for (FUObjectJsonValueExport& Parameter : Input) {
		if (Parameter.Has("ParameterName")) {
			TSharedPtr<FJsonObject> ParameterInfo = MakeShared<FJsonObject>();
			
			ParameterInfo->SetStringField(TEXT("Name"), Parameter.GetString("ParameterName"));
			ParameterInfo->SetStringField(TEXT("Association"), TEXT("EMaterialParameterAssociation::GlobalParameter"));
			ParameterInfo->SetNumberField(TEXT("Index"), INDEX_NONE);
			Parameter.SetObject("ParameterInfo", ParameterInfo);

			/* Cleanup */
			Parameter.Remove("ParameterName");
		}
	}
}