#include "PD3WwiseRetailData.h"
#include "PD3WwiseRetailResources.h"
#include "AkAudioDevice.h"
#include "AkAudioType.h"
#include "AkAudioEvent.h"
#include "AkAuxBus.h"
#include "AkInitBank.h"
#include "AkRtpc.h"
#include "AkGroupValue.h"
#include "AkSwitchValue.h"
#include "AkStateValue.h"
#include "UObject/UnrealType.h"
#include "UObject/Package.h"
#include "Interfaces/ITargetPlatform.h"
#include "HAL/FileManager.h"
#include "Wwise/WwiseResourceLoader.h"

#if WITH_EDITORONLY_DATA
#if __has_include("Misc/PD3CookedEditor.h") && __has_include("UObject/PD3CookedPackage.h")
#include "Misc/PD3CookedEditor.h"
#include "UObject/PD3CookedPackage.h"
#define AK_PD3_COOKED_EDITOR 1
#else
#define AK_PD3_COOKED_EDITOR 0
#endif

namespace
{
	bool CompatibilityEnabled()
	{
#if AK_PD3_COOKED_EDITOR
		return UE::PD3CookedEditor::IsEnabled();
#else
		return false;
#endif
	}

	bool IsRetailLoad(const UAkAudioType* Asset, const FArchive& Ar)
	{
#if AK_PD3_COOKED_EDITOR
		return CompatibilityEnabled() && Ar.IsLoading() && Ar.IsPersistent() && Ar.IsFilterEditorOnly()
			&& UE::PD3CookedEditor::IsRetailPackage(Asset->GetPackage());
#else
		return false;
#endif
	}

	bool Valid(const FWwiseLocalizedEventCookedData& Data)
	{
		if (!Data.EventId || Data.EventLanguageMap.IsEmpty()) return false;
		for (const auto& Language : Data.EventLanguageMap)
		{
			if (Language.Value.EventId != Data.EventId) return false;
		}
		return true;
	}
	bool Valid(const FWwiseLocalizedAuxBusCookedData& Data)
	{
		if (!Data.AuxBusId || Data.AuxBusLanguageMap.IsEmpty()) return false;
		for (const auto& Language : Data.AuxBusLanguageMap)
			if (Language.Value.AuxBusId != Data.AuxBusId) return false;
		return true;
	}
	bool Valid(const FWwiseInitBankCookedData& Data) { return Data.SoundBankId && !Data.SoundBankPathName.IsNone(); }
	bool Valid(const FWwiseGameParameterCookedData& Data) { return Data.ShortId != 0; }
	bool Valid(const FWwiseGroupValueCookedData& Data) { return Data.Id && Data.GroupId && Data.Type != EWwiseGroupType::Unknown; }

	template<typename T>
	void MarkRetailResources(T& Data)
	{
		for (auto& Bank : Data.SoundBanks)
		{
			Bank.bPD3RetailResource = true;
			Bank.PD3RetailRootPath = PD3WwiseRetailResources::GetRoot(Bank.SoundBankPathName);
		}
		for (auto& Media : Data.Media)
		{
			Media.bPD3RetailResource = true;
			Media.PD3RetailRootPath = PD3WwiseRetailResources::GetRoot(Media.MediaPathName);
		}
	}

	template<typename T>
	void AppendResourcePaths(const T& Data, TSet<FName>& Paths)
	{
		for (const auto& Bank : Data.SoundBanks) Paths.Add(Bank.SoundBankPathName);
		for (const auto& Media : Data.Media) Paths.Add(Media.MediaPathName);
	}
}

FString UAkAudioType::GetPD3WwiseIdentity() const
{
	// Compare the complete reflected editor info, including event policy and group ID.
	// FWwiseObjectInfo::operator== deliberately treats missing fields as wildcards.
	for (const TCHAR* Name : {TEXT("EventInfo"), TEXT("AuxBusInfo"), TEXT("RtpcInfo"), TEXT("GroupValueInfo")})
	{
		if (const FStructProperty* Property = FindFProperty<FStructProperty>(GetClass(), Name))
		{
			FString Result;
			Property->ExportTextItem_Direct(Result, Property->ContainerPtrToValuePtr<void>(this), nullptr, nullptr, PPF_None);
			return Result;
		}
	}
	return GetClass()->GetPathName();
}

bool UAkAudioType::CanPreservePD3WwiseData() const
{
	if (!CompatibilityEnabled() || bPD3RegenerateFromProject || PD3RetailData.SourceObjectPath != GetPathName()
		|| PD3RetailData.Identity != GetPD3WwiseIdentity()) return false;
	if (IsA<UAkAudioEvent>()) return Valid(PD3RetailData.Event);
	if (IsA<UAkAuxBus>()) return Valid(PD3RetailData.AuxBus);
	if (IsA<UAkInitBank>()) return Valid(PD3RetailData.InitBank);
	if (IsA<UAkRtpc>()) return Valid(PD3RetailData.GameParameter);
	if (IsA<UAkGroupValue>()) return Valid(PD3RetailData.GroupValue);
	return false;
}

bool UAkAudioType::RestorePD3WwiseData()
{
	if (!CanPreservePD3WwiseData()) return false;
	if (auto* Event = Cast<UAkAudioEvent>(this))
	{
		Event->EventCookedData = PD3RetailData.Event;
		for (auto& Language : Event->EventCookedData.EventLanguageMap)
		{
			MarkRetailResources(Language.Value);
			for (auto& Leaf : Language.Value.SwitchContainerLeaves) MarkRetailResources(Leaf);
		}
		Event->MaximumDuration = PD3RetailData.MaximumDuration;
		Event->MinimumDuration = PD3RetailData.MinimumDuration;
		Event->IsInfinite = PD3RetailData.IsInfinite;
		Event->MaxAttenuationRadius = PD3RetailData.MaxAttenuationRadius;
	}
	else if (auto* AuxBus = Cast<UAkAuxBus>(this))
	{
		AuxBus->AuxBusCookedData = PD3RetailData.AuxBus;
		for (auto& Language : AuxBus->AuxBusCookedData.AuxBusLanguageMap) MarkRetailResources(Language.Value);
		AuxBus->MaxAttenuationRadius = PD3RetailData.MaxAttenuationRadius;
	}
	else if (auto* InitBank = Cast<UAkInitBank>(this))
	{
		InitBank->InitBankCookedData = PD3RetailData.InitBank;
		InitBank->InitBankCookedData.bPD3RetailResource = true;
		InitBank->InitBankCookedData.PD3RetailRootPath = PD3WwiseRetailResources::GetRoot(InitBank->InitBankCookedData.SoundBankPathName);
		MarkRetailResources(InitBank->InitBankCookedData);
	}
	else if (auto* Rtpc = Cast<UAkRtpc>(this)) Rtpc->GameParameterCookedData = PD3RetailData.GameParameter;
	else if (auto* Group = Cast<UAkGroupValue>(this)) Group->GroupValueCookedData = PD3RetailData.GroupValue;
	return true;
}

bool UAkAudioType::ValidatePD3WwiseResources() const
{
	TSet<FName> Paths;
	if (IsA<UAkAudioEvent>())
	{
		for (const auto& Language : PD3RetailData.Event.EventLanguageMap)
		{
			AppendResourcePaths(Language.Value, Paths);
			for (const auto& Leaf : Language.Value.SwitchContainerLeaves) AppendResourcePaths(Leaf, Paths);
		}
	}
	else if (IsA<UAkAuxBus>())
	{
		for (const auto& Language : PD3RetailData.AuxBus.AuxBusLanguageMap) AppendResourcePaths(Language.Value, Paths);
	}
	else if (IsA<UAkInitBank>())
	{
		Paths.Add(PD3RetailData.InitBank.SoundBankPathName);
		AppendResourcePaths(PD3RetailData.InitBank, Paths);
	}
	bool bValid = true;
	for (const FName& Path : Paths)
	{
		const FString Root = PD3WwiseRetailResources::GetRoot(Path);
		if (Path.IsNone() || Root.IsEmpty() || !IFileManager::Get().FileExists(*(Root / Path.ToString())))
		{
			UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: %s requires missing retail resource %s. Check that the matching PAYDAY 3 containers are mounted and the Wwise staging directory is correct; regenerate intentionally replaced banks from project metadata."),
				*GetPathName(), *(Root / Path.ToString()));
			bValid = false;
			continue;
		}
		TUniquePtr<FArchive> File(IFileManager::Get().CreateFileReader(*(Root / Path.ToString())));
		uint8 Header[16] = {};
		if (File && File->TotalSize() >= sizeof(Header)) File->Serialize(Header, sizeof(Header));
		else File.Reset();
		if (!File || File->IsError())
		{
			UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: Cannot read referenced retail bank/media %s for %s. Check the mounted companion paks and configured key."), *Path.ToString(), *GetPathName());
			bValid = false;
		}
	}
	return bValid;
}

bool UAkAudioType::SerializePD3WwiseData(FArchive& Ar)
{
	const bool bRetailLoad = IsRetailLoad(this, Ar);
	const bool bCookedLoad = CompatibilityEnabled() && Ar.IsLoading() && Ar.IsPersistent() && Ar.IsFilterEditorOnly();
	const bool bPreservedCook = CompatibilityEnabled() && Ar.IsCooking() && Ar.IsSaving()
		&& !Ar.CookingTarget()->IsServerOnly() && CanPreservePD3WwiseData();
	if (!bCookedLoad && !bPreservedCook)
	{
		if (Ar.IsLoading() && !Ar.IsFilterEditorOnly()) RestorePD3WwiseData();
		return false;
	}
	if (bPreservedCook && Ar.CookingTarget()->IniPlatformName() != TEXT("Windows"))
	{
		UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: Cannot reuse Windows retail data for %s on %s. Generate SoundBanks for the target platform."),
			*GetPathName(), *Ar.CookingTarget()->IniPlatformName());
		Ar.SetError();
		return true;
	}
	if (bPreservedCook && !ValidatePD3WwiseResources())
	{
		Ar.SetError();
		return true;
	}
	if (bPreservedCook) RestorePD3WwiseData();

	// These are the same typed serializers and trailing scalar order as the runtime
	// paths below WITH_EDITORONLY_DATA. No export bytes or package-local FNames are copied.
	bool bValid = false;
	if (auto* Event = Cast<UAkAudioEvent>(this))
	{
		Event->EventCookedData.Serialize(Ar);
		Ar << Event->MaximumDuration << Event->MinimumDuration << Event->IsInfinite << Event->MaxAttenuationRadius;
		bValid = Valid(Event->EventCookedData);
		if (bRetailLoad && bValid && !Ar.IsError())
		{
			PD3RetailData.Event = Event->EventCookedData;
			PD3RetailData.MaximumDuration = Event->MaximumDuration;
			PD3RetailData.MinimumDuration = Event->MinimumDuration;
			PD3RetailData.IsInfinite = Event->IsInfinite;
			PD3RetailData.MaxAttenuationRadius = Event->MaxAttenuationRadius;
			Event->EventInfo.WwiseShortId = Event->EventCookedData.EventId;
			Event->EventInfo.WwiseName = Event->EventCookedData.DebugName;
			Event->EventInfo.DestroyOptions = Event->EventCookedData.EventLanguageMap.CreateConstIterator().Value().DestroyOptions;
		}
	}
	else if (auto* AuxBus = Cast<UAkAuxBus>(this))
	{
		AuxBus->AuxBusCookedData.Serialize(Ar);
		Ar << AuxBus->MaxAttenuationRadius;
		bValid = Valid(AuxBus->AuxBusCookedData);
		if (bRetailLoad && bValid && !Ar.IsError())
		{
			PD3RetailData.AuxBus = AuxBus->AuxBusCookedData;
			PD3RetailData.MaxAttenuationRadius = AuxBus->MaxAttenuationRadius;
			AuxBus->AuxBusInfo.WwiseShortId = AuxBus->AuxBusCookedData.AuxBusId;
			AuxBus->AuxBusInfo.WwiseName = AuxBus->AuxBusCookedData.DebugName;
		}
	}
	else if (auto* InitBank = Cast<UAkInitBank>(this))
	{
		InitBank->InitBankCookedData.Serialize(Ar);
		bValid = Valid(InitBank->InitBankCookedData);
		if (bRetailLoad && bValid && !Ar.IsError()) PD3RetailData.InitBank = InitBank->InitBankCookedData;
	}
	else if (auto* Rtpc = Cast<UAkRtpc>(this))
	{
		Rtpc->GameParameterCookedData.Serialize(Ar);
		bValid = Valid(Rtpc->GameParameterCookedData);
		if (bRetailLoad && bValid && !Ar.IsError())
		{
			PD3RetailData.GameParameter = Rtpc->GameParameterCookedData;
			Rtpc->RtpcInfo.WwiseShortId = Rtpc->GameParameterCookedData.ShortId;
			Rtpc->RtpcInfo.WwiseName = Rtpc->GameParameterCookedData.DebugName;
		}
	}
	else if (auto* Group = Cast<UAkGroupValue>(this))
	{
		Group->GroupValueCookedData.Serialize(Ar);
		bValid = Valid(Group->GroupValueCookedData)
			&& Group->GroupValueCookedData.Type == Group->GetGroupType();
		if (bRetailLoad && bValid && !Ar.IsError())
		{
			PD3RetailData.GroupValue = Group->GroupValueCookedData;
			Group->GroupValueInfo.WwiseShortId = Group->GroupValueCookedData.Id;
			Group->GroupValueInfo.GroupShortId = Group->GroupValueCookedData.GroupId;
			Group->GroupValueInfo.WwiseName = Group->GroupValueCookedData.DebugName;
		}
	}
	else return false;

	if (!bValid || Ar.IsError())
	{
		UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: Invalid decoded cooked data for %s. Restore the original retail asset; do not save an empty replacement."), *GetPathName());
		Ar.SetError();
	}
	else if (bRetailLoad)
	{
		PD3RetailData.SourceObjectPath = GetPathName();
		PD3RetailData.Identity = GetPD3WwiseIdentity();
		RestorePD3WwiseData();
		UE_LOG(LogAkAudio, Verbose, TEXT("PD3 Wwise: Decoded retail payload for %s (ID %u)."), *GetPathName(), GetShortID());
	}
	return true;
}

void UAkAudioType::ReportWwiseCookFailure(FArchive& Ar) const
{
	UE_LOG(LogAkAudio, Error, TEXT("Wwise cook failed for %s: no valid generated data or unchanged decoded retail payload. Check Root Output Path, ProjectInfo.json, platform JSON metadata and the asset's Wwise identity. If converted with an older modkit, restore the original retail asset before converting again."), *GetPathName());
	Ar.SetError();
}
#else
bool UAkAudioType::CanPreservePD3WwiseData() const { return false; }
#endif
