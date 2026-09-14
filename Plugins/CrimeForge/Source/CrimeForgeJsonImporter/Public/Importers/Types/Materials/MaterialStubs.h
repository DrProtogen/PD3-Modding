/* CREDITS!!
 * Function originally created by C0bra5.
 *
 * Fork can be seen here:
 * https://github.com/C0bra5/CrimeForge JSON Importer
 */

#pragma once

#if ENGINE_UE5
#if ENGINE_MINOR_VERSION >= 2
#include "MaterialDomain.h"
#include "Materials/MaterialAttributeDefinitionMap.h"
#endif

#include "Importers/Types/Materials/MaterialImporter.h"
#include "Importers/Types/Materials/MaterialParameterCompatibility.h"
#include "Engine/Package.h"
#include "Engine/Engine.h"
#include "Utilities/AssetPaths.h"
#include "Materials/MaterialExpressionAdd.h"
#include "Materials/MaterialExpressionClamp.h"
#include "Materials/MaterialExpressionConstant.h"
#include "Materials/MaterialExpressionConstant4Vector.h"
#include "Materials/MaterialExpressionScalarParameter.h"
#if UE5_5_BEYOND
#include "Materials/MaterialExpressionDoubleVectorParameter.h"
#include "Materials/MaterialExpressionTextureCollectionParameter.h"
#include "Materials/MaterialExpressionSparseVolumeTextureObject.h"
#include "Engine/TextureCollection.h"
#include "SparseVolumeTexture/SparseVolumeTexture.h"
#endif
#include "Materials/MaterialExpressionFontSampleParameter.h"
#include "Materials/MaterialExpressionRuntimeVirtualTextureSampleParameter.h"
#include "Engine/Font.h"
#include "VT/RuntimeVirtualTexture.h"
#include "Materials/MaterialExpressionSetMaterialAttributes.h"
#include "Materials/MaterialExpressionStaticSwitchParameter.h"
#include "Materials/MaterialExpressionStaticComponentMaskParameter.h"
#include "Materials/MaterialExpressionTextureSampleParameter.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Materials/MaterialExpressionTextureSampleParameterCube.h"
#include "Materials/MaterialExpressionTextureSampleParameterVolume.h"
#if !UE4_23_BELOW
#include "Materials/MaterialExpressionTextureSampleParameter2DArray.h"
#endif
#include "Materials/MaterialExpressionVectorParameter.h"
#include "Engine/TextureCube.h"
#include "Engine/VolumeTexture.h"
#if !UE4_23_BELOW
#include "Engine/Texture2DArray.h"
#endif
#if UE5_8_BEYOND
#include "Materials/MaterialExpressionUtils.h"
#endif

/* UMaterial only routes its expressions through an expression collection from 5.1 on;
 * before that they sit in the editor-only Expressions array directly */
inline void AddStubExpression(UMaterial* Material, UMaterialExpression* Expression) {
#if UE5_1_BEYOND
	Material->GetExpressionCollection().AddExpression(Expression);
#else
	Material->Expressions.Add(Expression);
#endif
}

inline void FinalizeStubParameter(UMaterial* Material, UMaterialExpression* Expression) {
	if (Material == nullptr || Expression == nullptr) {
		return;
	}

	Expression->UpdateMaterialExpressionGuid(true, false);
	Expression->UpdateParameterGuid(true, false);
#if UE5_1_BEYOND
	Material->AddExpressionParameter(Expression, Material->EditorParameters);
#endif
}

inline void ChainStubValue(
	UMaterial* Material,
	UMaterialExpression* ValueExpression,
	UMaterialExpressionClamp* Clamp,
	UMaterialExpressionAdd*& LastAdd,
	const int32 X,
	const int32 Y)
{
	UMaterialExpressionAdd* Add = NewObject<UMaterialExpressionAdd>(Material);
	AddStubExpression(Material, Add);
	Add->MaterialExpressionEditorX = X;
	Add->MaterialExpressionEditorY = Y;
	Add->ConstB = 0.0f;
	Add->A.Connect(0, ValueExpression);

	if (LastAdd == nullptr) {
		Clamp->Input.Connect(0, Add);
	} else {
		LastAdd->B.Connect(0, Add);
	}

	LastAdd = Add;
}

inline UTexture* ResolveStubTexture(IMaterialImporter* MaterialImporter, const TSharedPtr<FJsonValue>& Value, const bool bNestedParameters) {
	if (!Value.IsValid() || Value->IsNull()) {
		return nullptr;
	}

	FString TextureAssetPath;
	FString TextureSubPath;

	if (Value->Type == EJson::Object) {
		const TSharedPtr<FJsonObject> TextureValue = Value->AsObject();
		if (!TextureValue.IsValid()) {
			return nullptr;
		}

		if (bNestedParameters) {
			TextureValue->TryGetStringField(TEXT("ObjectPath"), TextureAssetPath);
		} else {
			TextureValue->TryGetStringField(TEXT("AssetPathName"), TextureAssetPath);
			TextureValue->TryGetStringField(TEXT("SubPathString"), TextureSubPath);
		}
	} else if (Value->Type == EJson::String) {
		TextureAssetPath = Value->AsString();
	}

	if (TextureAssetPath.IsEmpty()) {
		return nullptr;
	}

	/* Package-index exports and soft object paths use slightly different spellings. Keep the
	 * object part when present because LoadObjectByPath and CrimeForge's download path both accept
	 * /Game/Foo/T.T. */
	TextureAssetPath = ToEditorPackagePath(TextureAssetPath);
	FSoftObjectPath SoftPath(TextureAssetPath);
	if (!TextureSubPath.IsEmpty()) {
		SoftPath.SetSubPathString(TextureSubPath);
	}

	if (UTexture* Existing = Cast<UTexture>(SoftPath.TryLoad())) {
		return Existing;
	}

	FString PackagePath;
	FString AssetName;
	if (!TextureAssetPath.Split(TEXT("."), &PackagePath, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd)) {
		PackagePath = TextureAssetPath;
		PackagePath.Split(TEXT("/"), nullptr, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	}

	if (PackagePath.IsEmpty() || AssetName.IsEmpty()) {
		return nullptr;
	}

	TObjectPtr<UTexture> ImportedTexture = nullptr;
	/* The concrete texture class is read from the asset backend response by FTextureImport, so Texture2D
	 * is only the request category here, not a forced output type. */
	ImportedTexture = IImporter::DownloadWrapper<UTexture>(ImportedTexture, TEXT("Texture2D"), AssetName, PackagePath);
	return ImportedTexture.Get();
}

template <typename TObjectType>
inline TObjectType* ResolveStubObject(const TSharedPtr<FJsonValue>& Value, const bool bNestedParameters, const FString& RequestType) {
	if (!Value.IsValid() || Value->IsNull()) {
		return nullptr;
	}

	FString AssetPath;
	FString SubPath;
	if (Value->Type == EJson::Object) {
		const TSharedPtr<FJsonObject> ObjectValue = Value->AsObject();
		if (!ObjectValue.IsValid()) {
			return nullptr;
		}

		if (bNestedParameters) {
			ObjectValue->TryGetStringField(TEXT("ObjectPath"), AssetPath);
		} else {
			ObjectValue->TryGetStringField(TEXT("AssetPathName"), AssetPath);
			ObjectValue->TryGetStringField(TEXT("SubPathString"), SubPath);
			if (AssetPath.IsEmpty()) {
				ObjectValue->TryGetStringField(TEXT("ObjectPath"), AssetPath);
			}
		}
	} else if (Value->Type == EJson::String) {
		AssetPath = Value->AsString();
	}

	if (AssetPath.IsEmpty()) {
		return nullptr;
	}

	AssetPath = ToEditorPackagePath(AssetPath);
	FSoftObjectPath SoftPath(AssetPath);
	if (!SubPath.IsEmpty()) {
		SoftPath.SetSubPathString(SubPath);
	}
	if (TObjectType* Existing = Cast<TObjectType>(SoftPath.TryLoad())) {
		return Existing;
	}

	FString PackagePath;
	FString AssetName;
	if (!AssetPath.Split(TEXT("."), &PackagePath, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd)) {
		PackagePath = AssetPath;
		PackagePath.Split(TEXT("/"), nullptr, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	}
	if (PackagePath.IsEmpty() || AssetName.IsEmpty()) {
		return nullptr;
	}

	// ConstructAsset is explicitly instantiated for UObject in the importer module, whereas
	// several UE5.5 material parameter object types are not. Import generically and cast the
	// result so this helper does not introduce unresolved template symbols at link time.
	TObjectPtr<UObject> Imported = nullptr;
	Imported = IImporter::DownloadWrapper<UObject>(Imported, RequestType, AssetName, PackagePath);
	return Cast<TObjectType>(Imported.Get());
}

inline UMaterialExpressionTextureSampleParameter* CreateStubTextureParameter(UMaterial* Material, UTexture* Texture) {
	UMaterialExpressionTextureSampleParameter* Parameter = nullptr;

	if (Texture != nullptr && Texture->IsA<UTextureCube>()) {
		Parameter = NewObject<UMaterialExpressionTextureSampleParameterCube>(Material);
	}
#if !UE4_23_BELOW
	else if (Texture != nullptr && Texture->IsA<UTexture2DArray>()) {
		Parameter = NewObject<UMaterialExpressionTextureSampleParameter2DArray>(Material);
	}
#endif
	else if (Texture != nullptr && Texture->IsA<UVolumeTexture>()) {
		Parameter = NewObject<UMaterialExpressionTextureSampleParameterVolume>(Material);
	}
	else {
		Parameter = NewObject<UMaterialExpressionTextureSampleParameter2D>(Material);
	}

	return Parameter;
}

/* The fallback graph is not pretending to be the source graph. Its job is to preserve every
 * parameter CrimeForge can recover from cooked cached-expression data, keep those parameter
 * names live in the parent material, and produce a compilable output for imported instances. */
inline bool CreateStubs(IMaterialImporter* MaterialImporter) {
	UMaterial* Material = MaterialImporter->GetTypedAsset<UMaterial>();
	if (Material == nullptr) {
		return false;
	}

	const TSharedPtr<FJsonObject> AssetData = MaterialImporter->GetAssetData();
	if (!AssetData.IsValid() || !AssetData->HasTypedField<EJson::Object>(TEXT("CachedExpressionData"))) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Cooked material %s has no CachedExpressionData to reconstruct parameters from"), *MaterialImporter->GetAssetName());
		return false;
	}

	int32 x = 0, y = 0;
	int32 ParameterCount = 0;
	int32 AssociatedParameterCount = 0;

	FExpressionInput* matInput;
	if (Material->bUseMaterialAttributes) {
		// for mats that use attribtues
		x -= 16*8*2;
		FExpressionInput* AttributeInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_MaterialAttributes);
		UMaterialExpressionSetMaterialAttributes* setAttrNode = NewObject<UMaterialExpressionSetMaterialAttributes>(Material);
		AddStubExpression(Material, setAttrNode);
		setAttrNode->MaterialExpressionEditorX = x;
		setAttrNode->MaterialExpressionEditorY = 0;
		AttributeInput->Expression = setAttrNode;

		// determine input type based on shading model.
		switch (Material->MaterialDomain) {
			case MD_Surface:
				if (Material->GetShadingModels().HasShadingModel(EMaterialShadingModel::MSM_Unlit)) {
					setAttrNode->AttributeSetTypes.Add(FMaterialAttributeDefinitionMap::GetID(EMaterialProperty::MP_EmissiveColor));
				} else {
					setAttrNode->AttributeSetTypes.Add(FMaterialAttributeDefinitionMap::GetID(EMaterialProperty::MP_BaseColor));
				}
				break;
			case MD_LightFunction:
			case MD_PostProcess:
			case MD_UI:
				setAttrNode->AttributeSetTypes.Add(FMaterialAttributeDefinitionMap::GetID(EMaterialProperty::MP_EmissiveColor));
				break;
			case MD_DeferredDecal:
				setAttrNode->AttributeSetTypes.Add(FMaterialAttributeDefinitionMap::GetID(EMaterialProperty::MP_WorldPositionOffset));
				break;
			case MD_Volume:
			default:
				setAttrNode->AttributeSetTypes.Add(FMaterialAttributeDefinitionMap::GetID(EMaterialProperty::MP_BaseColor));
				break;
		}
		setAttrNode->Inputs.Add(FExpressionInput());
		setAttrNode->Inputs.Last().InputName = FName(*FMaterialAttributeDefinitionMap::GetDisplayNameForMaterial(setAttrNode->AttributeSetTypes.Last(), Material).ToString());
		matInput = &setAttrNode->Inputs.Last();
	} else {
		// for mats that don't use attributes
		switch (Material->MaterialDomain) {
			case MD_Surface:
				if (Material->GetShadingModels().HasShadingModel(EMaterialShadingModel::MSM_Unlit)) {
					matInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_EmissiveColor);
				} else {
					matInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_BaseColor);
				}
				break;
			case MD_LightFunction:
			case MD_PostProcess:
			case MD_UI:
				matInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_EmissiveColor);
				break;
			case MD_DeferredDecal:
				matInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_WorldPositionOffset);
				break;
			case MD_Volume:
			default:
				matInput = Material->GetExpressionInputForProperty(EMaterialProperty::MP_BaseColor);
				break;
		}
	}

	x -= 16*8*2;
	UMaterialExpressionClamp* clamp = NewObject<UMaterialExpressionClamp>(Material);
	clamp->MaterialExpressionEditorX = x + 16*4;
	clamp->MaterialExpressionEditorY = 0;
	clamp->MinDefault = 0.0f;
	clamp->MaxDefault = 1.0f;
	AddStubExpression(Material, clamp);
	matInput->Expression = clamp;

	TSharedPtr<FJsonObject> CachedExpressionData = AssetData->GetObjectField(TEXT("CachedExpressionData"));
	UMaterialExpressionAdd* lastAdd = nullptr;

	/* Legacy (UE 4.2x-era) exports nest the cached entries under "Parameters" ("ParameterInfos",
	 * textures at RuntimeEntries[2]); UE 5.x keeps them flat ("ParameterInfoSet", [3]). */
	const bool bNestedParameters = CachedExpressionData->HasTypedField<EJson::Object>(TEXT("Parameters"));
	if (bNestedParameters) {
		CachedExpressionData = CachedExpressionData->GetObjectField(TEXT("Parameters"));
	}
	const FString ParameterInfosKey = bNestedParameters ? TEXT("ParameterInfos") : TEXT("ParameterInfoSet");
	const FString TextureEntriesKey = bNestedParameters ? TEXT("RuntimeEntries[2]") : TEXT("RuntimeEntries[3]");


	// map known scalar params
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries"))->HasTypedField<EJson::Array>(ParameterInfosKey)
		&& (bNestedParameters || CachedExpressionData->HasTypedField<EJson::Array>(TEXT("ScalarPrimitiveDataIndexValues")))
		&& CachedExpressionData->HasTypedField<EJson::Array>(TEXT("ScalarValues"))
		) {
		const TArray<TSharedPtr<FJsonValue>>
			paramsPtr = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries"))->GetArrayField(ParameterInfosKey),
			paramValuesPtr = CachedExpressionData->GetArrayField(TEXT("ScalarValues"));
		const TArray<TSharedPtr<FJsonValue>> EmptyIndexes;
		const TArray<TSharedPtr<FJsonValue>>& paramValueIndexesPtr = bNestedParameters
			? EmptyIndexes
			: CachedExpressionData->GetArrayField(TEXT("ScalarPrimitiveDataIndexValues"));
		if ((bNestedParameters || paramsPtr.Num() == paramValueIndexesPtr.Num()) && paramsPtr.Num() == paramValuesPtr.Num()) {
			int32 i = 0;
			y -= 0;
			x -= 16*8*3;
			for (const TSharedPtr<FJsonValue> paramVal : paramsPtr) {
				const FJsonObject* paramObj = paramVal->AsObject().Get();
				FString paramName;
				int32 index = -1;
				float value;
				const bool bHasValueIndex = bNestedParameters || paramValueIndexesPtr[i]->TryGetNumber(index);
				const int32 ValueIndex = bNestedParameters ? i : (index == -1 ? i : index);
				if (
					bHasValueIndex
					&& CrimeForgeMaterialCompatibility::GetFallbackParameterName(paramObj, paramName, nullptr)
					&& paramValuesPtr.IsValidIndex(ValueIndex)
					&& paramValuesPtr[ValueIndex]->TryGetNumber(value)
					) {
					if (paramName.StartsWith(TEXT("__CrimeForge_Layer_")) || paramName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
					UMaterialExpressionScalarParameter* param = NewObject<UMaterialExpressionScalarParameter>(Material);
					AddStubExpression(Material, param);
					param->ParameterName = FName(paramName);
					param->MaterialExpressionEditorX = x;
					param->MaterialExpressionEditorY = y;
					param->DefaultValue = value;
					FinalizeStubParameter(Material, param);
					++ParameterCount;

					UMaterialExpressionAdd* newAdd = NewObject<UMaterialExpressionAdd>(Material);
					AddStubExpression(Material, newAdd);
					newAdd->MaterialExpressionEditorX = x + 16 * 8 * 2;
					newAdd->MaterialExpressionEditorY = y;
					newAdd->ConstB = 0.0f;
					newAdd->A.Connect(0, param);
					if (lastAdd == NULL) {
						clamp->Input.Connect(0, newAdd);
					} else {
						lastAdd->B.Connect(0, newAdd);
					}
					lastAdd = newAdd;
				}
				y += 16 * 6;
				i++;
			}
		}
	}


	// map known vector params
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[1]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[1]"))->HasTypedField<EJson::Array>(ParameterInfosKey)
		&& (bNestedParameters || CachedExpressionData->HasTypedField<EJson::Array>(TEXT("VectorPrimitiveDataIndexValues")))
		&& CachedExpressionData->HasTypedField<EJson::Array>(TEXT("VectorValues"))
		) {
		const TArray<TSharedPtr<FJsonValue>>
			paramsPtr = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[1]"))->GetArrayField(ParameterInfosKey),
			paramValuesPtr = CachedExpressionData->GetArrayField(TEXT("VectorValues"));
		const TArray<TSharedPtr<FJsonValue>> EmptyIndexes;
		const TArray<TSharedPtr<FJsonValue>>& paramValueIndexesPtr = bNestedParameters
			? EmptyIndexes
			: CachedExpressionData->GetArrayField(TEXT("VectorPrimitiveDataIndexValues"));
		if ((bNestedParameters || paramsPtr.Num() == paramValueIndexesPtr.Num()) && paramsPtr.Num() == paramValuesPtr.Num()) {
			int32 i = 0;
			x -= 16*8*4;
			y = 0;
			for (const TSharedPtr<FJsonValue> paramVal : paramsPtr) {
				const FJsonObject* paramObj = paramVal->AsObject().Get();
				FString paramName;
				int32 index = -1;
				TSharedPtr<FJsonObject>* value;
				float r, g, b, a;
				const bool bHasValueIndex = bNestedParameters || paramValueIndexesPtr[i]->TryGetNumber(index);
				const int32 ValueIndex = bNestedParameters ? i : (index == -1 ? i : index);
				if (
					bHasValueIndex
					&& CrimeForgeMaterialCompatibility::GetFallbackParameterName(paramObj, paramName, nullptr)
					&& paramValuesPtr.IsValidIndex(ValueIndex)
					&& paramValuesPtr[ValueIndex]->TryGetObject(value)
					&& value->Get()->TryGetNumberField(TEXT("R"), r)
					&& value->Get()->TryGetNumberField(TEXT("G"), g)
					&& value->Get()->TryGetNumberField(TEXT("B"), b)
					&& value->Get()->TryGetNumberField(TEXT("A"), a)
					) {
					if (paramName.StartsWith(TEXT("__CrimeForge_Layer_")) || paramName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
					UMaterialExpressionVectorParameter* param = NewObject<UMaterialExpressionVectorParameter>(Material);
					AddStubExpression(Material, param);
					param->ParameterName = FName(paramName);
					param->MaterialExpressionEditorX = x;
					param->MaterialExpressionEditorY = y;
					param->DefaultValue = FLinearColor(r, g, b, a);
					FinalizeStubParameter(Material, param);
					++ParameterCount;

					UMaterialExpressionAdd* newAdd = NewObject<UMaterialExpressionAdd>(Material);
					AddStubExpression(Material, newAdd);
					newAdd->MaterialExpressionEditorX = x + 16 * 8 * 2;
					newAdd->MaterialExpressionEditorY = y;
					newAdd->ConstB = 0.0f;
					newAdd->A.Connect(0, param);
					if (lastAdd == NULL) {
						clamp->Input.Connect(0, newAdd);
					} else {
						lastAdd->B.Connect(0, newAdd);
					}
					lastAdd = newAdd;
				}
				y += 16 * 13;
				i++;
			}
		}
	}



#if UE5_5_BEYOND
	// UE5.5 added double-vector material parameters. Keep them in the editable parent even though
	// the fallback output chain stays float-based; registering the node is enough for MIC overrides.
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[2]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[2]"))->HasTypedField<EJson::Array>(ParameterInfosKey)
		&& CachedExpressionData->HasTypedField<EJson::Array>(TEXT("DoubleVectorValues"))
		) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[2]"))->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>> Values = CachedExpressionData->GetArrayField(TEXT("DoubleVectorValues"));
		const int32 Count = FMath::Min(Params.Num(), Values.Num());
		x -= 16 * 8 * 4;
		y = 0;

		for (int32 Index = 0; Index < Count; ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object || !Values[Index].IsValid() || Values[Index]->Type != EJson::Object) {
				continue;
			}

			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			const TSharedPtr<FJsonObject> ValueObject = Values[Index]->AsObject();
			FString ParamName;
			double X = 0.0, Y = 0.0, Z = 0.0, W = 0.0;

			if (!ParamObject.IsValid() || !ValueObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) {
				continue;
			}

			const bool bHasXYZW =
				ValueObject->TryGetNumberField(TEXT("X"), X)
				&& ValueObject->TryGetNumberField(TEXT("Y"), Y)
				&& ValueObject->TryGetNumberField(TEXT("Z"), Z)
				&& ValueObject->TryGetNumberField(TEXT("W"), W);
			const bool bHasRGBA = !bHasXYZW
				&& ValueObject->TryGetNumberField(TEXT("R"), X)
				&& ValueObject->TryGetNumberField(TEXT("G"), Y)
				&& ValueObject->TryGetNumberField(TEXT("B"), Z)
				&& ValueObject->TryGetNumberField(TEXT("A"), W);

			if (!bHasXYZW && !bHasRGBA) {
				continue;
			}

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionDoubleVectorParameter* Param = NewObject<UMaterialExpressionDoubleVectorParameter>(Material);
			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			Param->DefaultValue = FVector4d(X, Y, Z, W);
			FinalizeStubParameter(Material, Param);
			++ParameterCount;
			y += 16 * 13;
		}
	}
#endif

	// map known texture params
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(TextureEntriesKey)
		&& CachedExpressionData->GetObjectField(TextureEntriesKey)->HasTypedField<EJson::Array>(ParameterInfosKey)
		&& CachedExpressionData->HasTypedField<EJson::Array>(TEXT("TextureValues"))
		) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TextureEntriesKey)->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>> Values = CachedExpressionData->GetArrayField(TEXT("TextureValues"));
		const int32 Count = FMath::Min(Params.Num(), Values.Num());
		x -= 16 * 8 * 4;
		y = 0;

		for (int32 Index = 0; Index < Count; ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) {
				continue;
			}

			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) {
				continue;
			}

			UTexture* Texture = ResolveStubTexture(MaterialImporter, Values[Index], bNestedParameters);
			if (Texture == nullptr && GEngine != nullptr) {
				Texture = GEngine->DefaultTexture;
				UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Material %s could not resolve default texture for parameter %s; using engine default"), *MaterialImporter->GetAssetName(), *ParamName);
			}

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionTextureSampleParameter* Param = CreateStubTextureParameter(Material, Texture);
			if (Param == nullptr) {
				continue;
			}

			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			Param->Texture = Texture;
			if (Texture != nullptr) {
#if UE5_8_BEYOND
				Param->SamplerType = MaterialExpressionUtils::GetSamplerTypeForTexture(Texture);
#else
				Param->SamplerType = Param->GetSamplerTypeForTexture(Texture);
#endif
			}
			FinalizeStubParameter(Material, Param);
			++ParameterCount;

			ChainStubValue(Material, Param, clamp, lastAdd, x + 16 * 8 * 2, y);
			y += 16 * 8 * 2;
		}
	}


#if UE5_5_BEYOND
	/* UE5.5 has four additional runtime parameter categories between textures and static switches.
	 * They are kept as live parameter expressions even though they are deliberately not wired into
	 * the numeric fallback chain: a texture collection/object, font, RVT, or sparse-volume object is
	 * not safely addable to BaseColor without knowing the original sampling logic. Registering the
	 * correctly typed expression is what allows a reconstructed MIC override to bind by name/type. */
	// Texture collection parameters (slot 4 in UE5.5).
	if (CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[4]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[4]"))->HasTypedField<EJson::Array>(ParameterInfosKey)) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[4]"))->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("TextureCollectionValues"), Values);
		x -= 16 * 8 * 4;
		y = 0;
		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) continue;

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionTextureCollectionParameter* Param = NewObject<UMaterialExpressionTextureCollectionParameter>(Material);
			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			if (Values != nullptr && Values->IsValidIndex(Index)) {
				Param->TextureCollection = ResolveStubObject<UTextureCollection>((*Values)[Index], false, TEXT("TextureCollection"));
			}
			FinalizeStubParameter(Material, Param);
			++ParameterCount;
			y += 16 * 9;
		}
	}

	// Font parameters (slot 5 in UE5.5).
	if (CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[5]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[5]"))->HasTypedField<EJson::Array>(ParameterInfosKey)) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[5]"))->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		const TArray<TSharedPtr<FJsonValue>>* PageValues = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("FontValues"), Values);
		CachedExpressionData->TryGetArrayField(TEXT("FontPageValues"), PageValues);
		x -= 16 * 8 * 4;
		y = 0;
		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) continue;

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionFontSampleParameter* Param = NewObject<UMaterialExpressionFontSampleParameter>(Material);
			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			if (Values != nullptr && Values->IsValidIndex(Index)) {
				Param->Font = ResolveStubObject<UFont>((*Values)[Index], false, TEXT("Font"));
			}
			int32 FontPage = 0;
			if (PageValues != nullptr && PageValues->IsValidIndex(Index) && (*PageValues)[Index].IsValid()) {
				(*PageValues)[Index]->TryGetNumber(FontPage);
			}
			Param->FontTexturePage = FontPage;
			FinalizeStubParameter(Material, Param);
			++ParameterCount;
			y += 16 * 9;
		}
	}

	// Runtime virtual texture parameters (slot 6 in UE5.5).
	if (CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[6]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[6]"))->HasTypedField<EJson::Array>(ParameterInfosKey)) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[6]"))->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("RuntimeVirtualTextureValues"), Values);
		x -= 16 * 8 * 4;
		y = 0;
		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) continue;

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionRuntimeVirtualTextureSampleParameter* Param = NewObject<UMaterialExpressionRuntimeVirtualTextureSampleParameter>(Material);
			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			if (Values != nullptr && Values->IsValidIndex(Index)) {
				Param->VirtualTexture = ResolveStubObject<URuntimeVirtualTexture>((*Values)[Index], false, TEXT("RuntimeVirtualTexture"));
				if (Param->VirtualTexture != nullptr) {
					Param->InitVirtualTextureDependentSettings();
				}
			}
			FinalizeStubParameter(Material, Param);
			++ParameterCount;
			y += 16 * 9;
		}
	}

	// Sparse volume texture parameters (slot 7 in UE5.5).
	if (CachedExpressionData->HasTypedField<EJson::Object>(TEXT("RuntimeEntries[7]"))
		&& CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[7]"))->HasTypedField<EJson::Array>(ParameterInfosKey)) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(TEXT("RuntimeEntries[7]"))->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("SparseVolumeTextureValues"), Values);
		x -= 16 * 8 * 4;
		y = 0;
		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) continue;

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionSparseVolumeTextureObjectParameter* Param = NewObject<UMaterialExpressionSparseVolumeTextureObjectParameter>(Material);
			AddStubExpression(Material, Param);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x;
			Param->MaterialExpressionEditorY = y;
			if (Values != nullptr && Values->IsValidIndex(Index)) {
				Param->SparseVolumeTexture = ResolveStubObject<USparseVolumeTexture>((*Values)[Index], false, TEXT("SparseVolumeTexture"));
			}
			FinalizeStubParameter(Material, Param);
			++ParameterCount;
			y += 16 * 9;
		}
	}
#endif

	// FMaterialCachedParameterEntry changed when new parameter types were inserted. PAYDAY 3 is
	// UE5.5, where static switches are slot 8 and static component masks are slot 9.
#if UE5_5_BEYOND
	const FString StaticSwitchEntriesKey = TEXT("RuntimeEntries[8]");
	const FString StaticComponentMaskEntriesKey = TEXT("RuntimeEntries[9]");
#elif UE5_2_BEYOND
	const FString StaticSwitchEntriesKey = TEXT("RuntimeEntries[7]");
	const FString StaticComponentMaskEntriesKey = TEXT("RuntimeEntries[8]");
#else
	const FString StaticSwitchEntriesKey = TEXT("RuntimeEntries[6]");
	const FString StaticComponentMaskEntriesKey = TEXT("RuntimeEntries[7]");
#endif

	// map known static switch params
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(StaticSwitchEntriesKey)
		&& CachedExpressionData->GetObjectField(StaticSwitchEntriesKey)->HasTypedField<EJson::Array>(ParameterInfosKey)
		) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(StaticSwitchEntriesKey)->GetArrayField(ParameterInfosKey);
		const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("StaticSwitchValues"), Values);
		x -= 16 * 8 * 4;
		y = 0;

		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) {
				continue;
			}

			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) {
				continue;
			}

			bool DefaultValue = false;
			if (Values != nullptr && Values->IsValidIndex(Index)) {
				(*Values)[Index]->TryGetBool(DefaultValue);
			}

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionConstant* Constant = NewObject<UMaterialExpressionConstant>(Material);
			AddStubExpression(Material, Constant);
			Constant->MaterialExpressionEditorX = x;
			Constant->MaterialExpressionEditorY = y;
			Constant->R = 1.0f;

			UMaterialExpressionStaticSwitchParameter* Param = NewObject<UMaterialExpressionStaticSwitchParameter>(Material);
			AddStubExpression(Material, Param);
			Param->A.Connect(0, Constant);
			Param->B.Connect(0, Constant);
			Param->ParameterName = FName(*ParamName);
			Param->MaterialExpressionEditorX = x + 16 * 8;
			Param->MaterialExpressionEditorY = y;
			Param->DefaultValue = DefaultValue;
			FinalizeStubParameter(Material, Param);
			++ParameterCount;

			ChainStubValue(Material, Param, clamp, lastAdd, x + 16 * 8 * 3, y);
			y += 16 * 9;
		}
	}

	// Static-component-mask defaults are editor-only in modern UE, but the cooked cache still
	// carries the parameter identities. Recreate the node even when the original default mask was
	// stripped; an imported MIC's static mask override can then bind to the correct name.
	if (
		CachedExpressionData->HasTypedField<EJson::Object>(StaticComponentMaskEntriesKey)
		&& CachedExpressionData->GetObjectField(StaticComponentMaskEntriesKey)->HasTypedField<EJson::Array>(ParameterInfosKey)
		) {
		const TArray<TSharedPtr<FJsonValue>> Params = CachedExpressionData->GetObjectField(StaticComponentMaskEntriesKey)->GetArrayField(ParameterInfosKey);

		const TArray<TSharedPtr<FJsonValue>>* DirectMaskValues = nullptr;
		CachedExpressionData->TryGetArrayField(TEXT("StaticComponentMaskValues"), DirectMaskValues);
		const TArray<TSharedPtr<FJsonValue>>* EditorMaskValues = nullptr;
		if (CachedExpressionData->HasTypedField<EJson::Object>(TEXT("EditorOnlyData"))) {
			CachedExpressionData->GetObjectField(TEXT("EditorOnlyData"))->TryGetArrayField(TEXT("StaticComponentMaskValues"), EditorMaskValues);
		}
		const TArray<TSharedPtr<FJsonValue>>* MaskValues = EditorMaskValues != nullptr ? EditorMaskValues : DirectMaskValues;

		x -= 16 * 8 * 4;
		y = 0;
		for (int32 Index = 0; Index < Params.Num(); ++Index) {
			if (!Params[Index].IsValid() || Params[Index]->Type != EJson::Object) {
				continue;
			}

			const TSharedPtr<FJsonObject> ParamObject = Params[Index]->AsObject();
			FString ParamName;
			if (!ParamObject.IsValid() || !CrimeForgeMaterialCompatibility::GetFallbackParameterName(ParamObject.Get(), ParamName, nullptr)) {
				continue;
			}

			bool R = true, G = true, B = true, A = true;
			if (MaskValues != nullptr && MaskValues->IsValidIndex(Index) && (*MaskValues)[Index].IsValid() && (*MaskValues)[Index]->Type == EJson::Object) {
				const TSharedPtr<FJsonObject> MaskObject = (*MaskValues)[Index]->AsObject();
				if (MaskObject.IsValid()) {
					MaskObject->TryGetBoolField(TEXT("R"), R);
					MaskObject->TryGetBoolField(TEXT("G"), G);
					MaskObject->TryGetBoolField(TEXT("B"), B);
					MaskObject->TryGetBoolField(TEXT("A"), A);
				}
			}

			if (ParamName.StartsWith(TEXT("__CrimeForge_Layer_")) || ParamName.StartsWith(TEXT("__CrimeForge_Blend_"))) { ++AssociatedParameterCount; }
			UMaterialExpressionConstant4Vector* Constant = NewObject<UMaterialExpressionConstant4Vector>(Material);
			AddStubExpression(Material, Constant);
			Constant->Constant = FLinearColor::White;
			Constant->MaterialExpressionEditorX = x;
			Constant->MaterialExpressionEditorY = y;

			UMaterialExpressionStaticComponentMaskParameter* Param = NewObject<UMaterialExpressionStaticComponentMaskParameter>(Material);
			AddStubExpression(Material, Param);
			Param->Input.Connect(0, Constant);
			Param->ParameterName = FName(*ParamName);
			Param->DefaultR = R;
			Param->DefaultG = G;
			Param->DefaultB = B;
			Param->DefaultA = A;
			Param->MaterialExpressionEditorX = x + 16 * 8;
			Param->MaterialExpressionEditorY = y;
			FinalizeStubParameter(Material, Param);
			++ParameterCount;

			ChainStubValue(Material, Param, clamp, lastAdd, x + 16 * 8 * 3, y);
			y += 16 * 9;
		}
	}

	/* Marker used by the MIC importer to distinguish this compatibility parent from a genuine
	 * reconstructed material-layer graph. It is deliberately left disconnected. */
	UMaterialExpressionScalarParameter* FallbackMarker = NewObject<UMaterialExpressionScalarParameter>(Material);
	AddStubExpression(Material, FallbackMarker);
	FallbackMarker->ParameterName = CrimeForgeMaterialCompatibility::GetFallbackMarkerName();
	FallbackMarker->DefaultValue = 1.0f;
	FallbackMarker->MaterialExpressionEditorX = x - 16 * 8 * 2;
	FallbackMarker->MaterialExpressionEditorY = y + 16 * 8;
	FinalizeStubParameter(Material, FallbackMarker);

	UE_LOG(LogCrimeForgeJsonImporter, Display, TEXT("Cooked material %s fallback graph exposes %d parameter(s), including %d layer/blend compatibility parameter(s)"), *MaterialImporter->GetAssetName(), ParameterCount, AssociatedParameterCount);
	return ParameterCount > 0;

}
#endif
