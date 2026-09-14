#pragma once

#include "Dom/JsonObject.h"

namespace CrimeForgeMaterialCompatibility
{
	inline const FName& GetFallbackMarkerName()
	{
		static const FName MarkerName(TEXT("__CrimeForge_CookedFallback"));
		return MarkerName;
	}

	inline bool IsLayerAssociation(const FString& Association)
	{
		return Association.Contains(TEXT("LayerParameter"), ESearchCase::CaseSensitive);
	}

	inline bool IsBlendAssociation(const FString& Association)
	{
		return Association.Contains(TEXT("BlendParameter"), ESearchCase::CaseSensitive);
	}

	inline bool IsAssociatedParameter(const FString& Association)
	{
		return IsLayerAssociation(Association) || IsBlendAssociation(Association);
	}

	inline FString MakeFallbackParameterName(const FString& OriginalName, const FString& Association, const int32 Index)
	{
		if (IsLayerAssociation(Association))
		{
			return FString::Printf(TEXT("__CrimeForge_Layer_%d__%s"), Index, *OriginalName);
		}
		if (IsBlendAssociation(Association))
		{
			return FString::Printf(TEXT("__CrimeForge_Blend_%d__%s"), Index, *OriginalName);
		}
		return OriginalName;
	}

	inline bool GetFallbackParameterName(const FJsonObject* ParameterInfo, FString& OutName, bool* bOutAssociated = nullptr)
	{
		if (ParameterInfo == nullptr || !ParameterInfo->TryGetStringField(TEXT("Name"), OutName))
		{
			return false;
		}

		FString Association = TEXT("EMaterialParameterAssociation::GlobalParameter");
		ParameterInfo->TryGetStringField(TEXT("Association"), Association);
		int32 Index = INDEX_NONE;
		ParameterInfo->TryGetNumberField(TEXT("Index"), Index);

		const bool bAssociated = IsAssociatedParameter(Association);
		if (bOutAssociated != nullptr)
		{
			*bOutAssociated = bAssociated;
		}

		OutName = MakeFallbackParameterName(OutName, Association, Index);
		return true;
	}

	inline bool RemapParameterInfoForFallback(const TSharedPtr<FJsonObject>& ParameterInfo)
	{
		if (!ParameterInfo.IsValid())
		{
			return false;
		}

		FString OriginalName;
		if (!ParameterInfo->TryGetStringField(TEXT("Name"), OriginalName))
		{
			return false;
		}

		FString Association = TEXT("EMaterialParameterAssociation::GlobalParameter");
		ParameterInfo->TryGetStringField(TEXT("Association"), Association);
		int32 Index = INDEX_NONE;
		ParameterInfo->TryGetNumberField(TEXT("Index"), Index);
		if (!IsAssociatedParameter(Association))
		{
			return false;
		}

		ParameterInfo->SetStringField(TEXT("Name"), MakeFallbackParameterName(OriginalName, Association, Index));
		ParameterInfo->SetStringField(TEXT("Association"), TEXT("EMaterialParameterAssociation::GlobalParameter"));
		ParameterInfo->SetNumberField(TEXT("Index"), INDEX_NONE);
		return true;
	}
}
