#include "AssetManagement/PD3WwiseValidateCommandlet.h"

#include "AkAudioType.h"
#include "AkAudioEvent.h"
#include "AkAudioDevice.h"
#include "WwiseInitBankLoader/WwiseInitBankLoader.h"
#include "HAL/IConsoleManager.h"
#include "Wwise/WwiseProjectDatabase.h"
#include "Wwise/WwiseResourceCooker.h"
#include "WwiseUnrealHelper.h"
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/PackageName.h"
#include "Misc/CommandLine.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/AsyncLoading2.h"
#include "UObject/SavePackage.h"
#include "UObject/UObjectIterator.h"

namespace
{
	// Executed in a normal editor session because commandlets deliberately have
	// no Wwise SoundEngine. Loads resources without posting an audible event.
	FAutoConsoleCommand RuntimeValidation(
		TEXT("PD3.Wwise.ValidateRuntime"),
		TEXT("Validate InitBank and event resource loading: <event object path> <report.json>"),
		FConsoleCommandWithArgsDelegate::CreateLambda([](const TArray<FString>& Args)
		{
			if (Args.Num() != 2) return;
			const bool bInitialized = FAkAudioDevice::IsInitialized();
			UAkInitBank* Init = FWwiseInitBankLoader::Get()->GetInitBankAsset();
			UAkAudioEvent* Event = LoadObject<UAkAudioEvent>(nullptr, *Args[0]);
			if (bInitialized && Init) Init->LoadInitBank();
			if (bInitialized && Event) Event->LoadData();
			const bool bSuccess = bInitialized && Init && Init->GetShortID() != 0
				&& Event && Event->IsLoaded() && Event->IsDataFullyLoaded();
			TSharedRef<FJsonObject> Result = MakeShared<FJsonObject>();
			Result->SetBoolField(TEXT("SoundEngineInitialized"), bInitialized);
			Result->SetBoolField(TEXT("EventLoaded"), Event && Event->IsLoaded());
			Result->SetBoolField(TEXT("EventDataFullyLoaded"), Event && Event->IsDataFullyLoaded());
			Result->SetNumberField(TEXT("InitBankId"), Init ? Init->GetShortID() : 0);
			Result->SetNumberField(TEXT("EventId"), Event ? Event->GetShortID() : 0);
			Result->SetBoolField(TEXT("Success"), bSuccess);
			FString Json;
			FJsonSerializer::Serialize(Result, TJsonWriterFactory<>::Create(&Json));
			FFileHelper::SaveStringToFile(Json, *Args[1]);
			UE_LOG(LogAkAudio, Display, TEXT("PD3 Wwise editor runtime validation: %s."), bSuccess ? TEXT("PASS") : TEXT("FAIL"));
			if (FParse::Param(FCommandLine::Get(), TEXT("PD3WwiseValidationExit"))) FPlatformMisc::RequestExit(false);
		}));

	/** Reads an extracted IoStore export using its package name map, never the editor's name indices. */
	class FPD3WwiseZenExportReader : public FMemoryReader
	{
	public:
		FPD3WwiseZenExportReader(const TArray<uint8>& Data, const FNameMap& InNames, uint32 PackageFlags)
			: FMemoryReader(Data, true), Names(InNames)
		{
			SetFilterEditorOnly(true);
			SetIsLoadingFromCookedPackage(true);
			ArMaxSerializeSize = Data.Num();
			SetUseUnversionedPropertySerialization((PackageFlags & PKG_UnversionedProperties) != 0);
		}
		using FMemoryReader::operator<<;
		virtual FArchive& operator<<(FName& Name) override
		{
			FMappedName Mapped;
			Serialize(&Mapped, sizeof(Mapped));
			if (Mapped.GetType() != FMappedName::EType::Package || !Names.TryGetName(Mapped, Name)) SetError();
			return *this;
		}
		virtual FArchive& operator<<(UObject*& Object) override
		{
			int32 Index = 0;
			*this << Index;
			Object = nullptr;
			// This focused export test supports dependency-free UObject fields only.
			// Wwise banks/media are typed native data, and are decoded in full below.
			if (Index != 0) SetError();
			return *this;
		}
	private:
		const FNameMap& Names;
	};

	UAkAudioType* ReadZenExport(const FString& HeaderFile, const FString& ExportsFile, UClass* ExpectedClass)
	{
		TArray<uint8> Header, Exports;
		if (!ExpectedClass || !ExpectedClass->IsChildOf<UAkAudioType>()
			|| !FFileHelper::LoadFileToArray(Header, *HeaderFile)
			|| !FFileHelper::LoadFileToArray(Exports, *ExportsFile)
			|| Header.Num() < sizeof(FZenPackageSummary)) return nullptr;
		const FZenPackageSummary& Summary = *reinterpret_cast<const FZenPackageSummary*>(Header.GetData());
		if (Summary.HeaderSize != Header.Num() || Summary.ExportMapOffset < sizeof(FZenPackageSummary)
			|| Summary.ExportBundleEntriesOffset > Header.Num()
			|| Summary.ExportBundleEntriesOffset - Summary.ExportMapOffset != sizeof(FExportMapEntry)) return nullptr;
		FMemoryReader HeaderReader(Header, true);
		HeaderReader.Seek(sizeof(FZenPackageSummary));
		FZenPackageVersioningInfo Version;
		if (Summary.bHasVersioningInfo) HeaderReader << Version;
		FNameMap Names;
		Names.Load(HeaderReader, FMappedName::EType::Package);
		if (HeaderReader.IsError()) return nullptr;
		const FExportMapEntry& Export = *reinterpret_cast<const FExportMapEntry*>(Header.GetData() + Summary.ExportMapOffset);
		if (Export.ClassIndex != FPackageObjectIndex::FromScriptPath(ExpectedClass->GetPathName())
			|| Export.CookedSerialOffset > uint64(Exports.Num())
			|| Export.CookedSerialSize > uint64(Exports.Num()) - Export.CookedSerialOffset) return nullptr;
		const TArray<uint8> Data(Exports.GetData() + Export.CookedSerialOffset, Export.CookedSerialSize);
		FPD3WwiseZenExportReader Reader(Data, Names, Summary.PackageFlags);
		if (Summary.bHasVersioningInfo)
		{
			Reader.SetUEVer(Version.PackageVersion);
			Reader.SetLicenseeUEVer(Version.LicenseeVersion);
			Reader.SetCustomVersions(Version.CustomVersions);
		}
		UAkAudioType* Asset = NewObject<UAkAudioType>(GetTransientPackage(), ExpectedClass);
		Asset->Serialize(Reader);
		if (Reader.IsError() || Reader.Tell() != Data.Num())
		{
			UE_LOG(LogAkAudio, Error, TEXT("Packaged Wwise export validation failed: %lld/%d bytes decoded in %s."), Reader.Tell(), Data.Num(), *ExportsFile);
			return nullptr;
		}
		return Asset;
	}
}

UPD3WwiseValidateCommandlet::UPD3WwiseValidateCommandlet()
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}

int32 UPD3WwiseValidateCommandlet::Main(const FString& Params)
{
	FString Assets, Output, CookedFile, SaveEditorCopy;
	FParse::Value(*Params, TEXT("Assets="), Assets);
	FParse::Value(*Params, TEXT("Output="), Output);
	FParse::Value(*Params, TEXT("CookedFile="), CookedFile);
	FParse::Value(*Params, TEXT("SaveEditorCopy="), SaveEditorCopy);
	TSharedRef<FJsonObject> Report = MakeShared<FJsonObject>();
	Report->SetStringField(TEXT("WwiseProjectPath"), WwiseUnrealHelper::GetWwiseProjectPath());
	Report->SetStringField(TEXT("RootOutputPath"), WwiseUnrealHelper::GetSoundBankDirectory());
	auto* Database = FWwiseProjectDatabase::Get();
	const bool bDatabaseParsed = Database && Database->IsProjectDatabaseParsed();
	Report->SetBoolField(TEXT("DatabaseParsed"), bDatabaseParsed);
	bool bSuccess = !FParse::Param(*Params, TEXT("CheckDatabase")) || bDatabaseParsed;

	uint32 AuthoringEventId = 0;
	if (FParse::Value(*Params, TEXT("AuthoringEventId="), AuthoringEventId))
	{
		FWwiseLocalizedEventCookedData Data;
		auto* Cooker = FWwiseResourceCooker::GetDefault();
		const bool bPrepared = Cooker && Cooker->PrepareCookedData(Data, FWwiseEventInfo(AuthoringEventId));
		bSuccess &= bPrepared && Data.EventId == AuthoringEventId && !Data.EventLanguageMap.IsEmpty();
		Report->SetObjectField(TEXT("AuthoringEvent"), FJsonObjectConverter::UStructToJsonObject(Data));
		FString SaveAuthoredCopy, AuthoringAssetPath;
		if (FParse::Value(*Params, TEXT("SaveAuthoredCopy="), SaveAuthoredCopy))
		{
			if (!bPrepared || !FParse::Value(*Params, TEXT("AuthoringAssetPath="), AuthoringAssetPath)) return 1;
			UPackage* Package = CreatePackage(*FPackageName::ObjectPathToPackageName(AuthoringAssetPath));
			UAkAudioEvent* Event = NewObject<UAkAudioEvent>(Package, *FPackageName::ObjectPathToObjectName(AuthoringAssetPath), RF_Public | RF_Standalone);
			Event->EventInfo.WwiseShortId = AuthoringEventId;
			Event->FillInfo();
			Event->FillMetadata(Database);
			FSavePackageArgs Args;
			Args.TopLevelFlags = RF_Public | RF_Standalone;
			Args.SaveFlags = SAVE_NoError;
			bSuccess &= Event->EventInfo.WwiseGuid.IsValid() && !Event->CanPreservePD3WwiseData()
				&& UPackage::SavePackage(Package, Event, *SaveAuthoredCopy, Args);
		}
	}

	TArray<UAkAudioType*> Objects;
	FString ZenHeader, ZenExports, ZenClass;
	if (FParse::Value(*Params, TEXT("ZenHeader="), ZenHeader))
	{
		FParse::Value(*Params, TEXT("ZenExports="), ZenExports);
		FParse::Value(*Params, TEXT("ZenClass="), ZenClass);
		UAkAudioType* Asset = ReadZenExport(ZenHeader, ZenExports, LoadObject<UClass>(nullptr, *ZenClass));
		if (Asset) Objects.Add(Asset);
		else
		{
			UE_LOG(LogAkAudio, Error, TEXT("Could not decode the single Wwise export in %s as %s."), *ZenHeader, *ZenClass);
			bSuccess = false;
		}
	}
	TArray<FString> Paths;
	Assets.ParseIntoArray(Paths, TEXT("+"), true);
	for (const auto& Path : Paths)
	{
		UAkAudioType* Asset = LoadObject<UAkAudioType>(nullptr, *Path);
		if (Asset) Objects.Add(Asset);
		else
		{
			UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise validation: Could not load %s"), *Path);
			bSuccess = false;
		}
	}
	if (!CookedFile.IsEmpty())
	{
		UPackage* Package = LoadPackage(nullptr, *CookedFile, LOAD_None);
		if (!Package) bSuccess = false;
		else
		{
			for (TObjectIterator<UAkAudioType> It; It; ++It)
				if (It->GetPackage() == Package) Objects.Add(*It);
		}
	}

	TArray<TSharedPtr<FJsonValue>> AssetReports;
	for (UAkAudioType* Asset : Objects)
	{
		TSharedRef<FJsonObject> Item = MakeShared<FJsonObject>();
		Item->SetStringField(TEXT("Path"), Asset->GetPathName());
		Item->SetStringField(TEXT("Class"), Asset->GetClass()->GetName());
		Item->SetNumberField(TEXT("ShortId"), Asset->GetShortID());
		Item->SetBoolField(TEXT("CanPreserve"), Asset->CanPreservePD3WwiseData());
		if (FParse::Param(*Params, TEXT("CheckResources")))
		{
			const bool bResourcesValid = Asset->CanPreservePD3WwiseData() && Asset->ValidatePD3WwiseResources();
			Item->SetBoolField(TEXT("ResourcesValid"), bResourcesValid);
			bSuccess &= bResourcesValid;
		}
		bSuccess &= Asset->GetShortID() != 0;
		for (const TCHAR* Field : {TEXT("EventCookedData"), TEXT("InitBankCookedData"), TEXT("AuxBusCookedData"), TEXT("GameParameterCookedData"), TEXT("GroupValueCookedData")})
		{
			if (const FStructProperty* Property = FindFProperty<FStructProperty>(Asset->GetClass(), Field))
			{
				TSharedRef<FJsonObject> Data = MakeShared<FJsonObject>();
				bSuccess &= FJsonObjectConverter::UStructToJsonObject(Property->Struct,
					Property->ContainerPtrToValuePtr<void>(Asset), Data, 0, 0);
				Item->SetObjectField(Field, Data);
			}
		}
		AssetReports.Add(MakeShared<FJsonValueObject>(Item));
		if (FParse::Param(*Params, TEXT("CheckPreservation")))
		{
			bSuccess &= Asset->CanPreservePD3WwiseData();
			Asset->bPD3RegenerateFromProject = true;
			bSuccess &= !Asset->CanPreservePD3WwiseData();
			Asset->bPD3RegenerateFromProject = false;
			if (auto* Event = Cast<UAkAudioEvent>(Asset))
			{
				const auto OriginalInfo = Event->EventInfo;
				Event->EventInfo.WwiseShortId ^= 1;
				bSuccess &= !Event->CanPreservePD3WwiseData();
				Event->EventInfo = OriginalInfo;
				Event->EventInfo.DestroyOptions = OriginalInfo.DestroyOptions == EWwiseEventDestroyOptions::StopEventOnDestroy
					? EWwiseEventDestroyOptions::WaitForEventEnd : EWwiseEventDestroyOptions::StopEventOnDestroy;
				bSuccess &= !Event->CanPreservePD3WwiseData();
				Event->EventInfo = OriginalInfo;
				bSuccess &= Event->CanPreservePD3WwiseData();
			}
			UAkAudioType* Duplicate = DuplicateObject<UAkAudioType>(Asset, GetTransientPackage());
			bSuccess &= !Duplicate->CanPreservePD3WwiseData();
		}
	}
	Report->SetArrayField(TEXT("Assets"), AssetReports);

	if (!SaveEditorCopy.IsEmpty())
	{
		if (Objects.Num() != 1 || !Objects[0]->CanPreservePD3WwiseData()) return 1;
		// Preserve the original path while creating a fresh, non-retail package instance.
		// Write only the caller-specified test file; never overwrite Content implicitly.
		UAkAudioType* Source = Objects[0];
		const FString PackageName = Source->GetPackage()->GetName();
		Source->GetPackage()->Rename(*MakeUniqueObjectName(nullptr, UPackage::StaticClass(), TEXT("/Temp/PD3WwiseValidationSource")).ToString(), nullptr, REN_DontCreateRedirectors | REN_NonTransactional);
		UPackage* CopyPackage = CreatePackage(*PackageName);
		UAkAudioType* Copy = DuplicateObject<UAkAudioType>(Source, CopyPackage, Source->GetFName());
		Copy->SetFlags(RF_Public | RF_Standalone);
		FSavePackageArgs Args;
		Args.TopLevelFlags = RF_Public | RF_Standalone;
		Args.SaveFlags = SAVE_NoError;
		bSuccess &= Copy->CanPreservePD3WwiseData() && UPackage::SavePackage(CopyPackage, Copy, *SaveEditorCopy, Args);
	}

	Report->SetBoolField(TEXT("Success"), bSuccess);
	if (!Output.IsEmpty())
	{
		FString Json;
		FJsonSerializer::Serialize(Report, TJsonWriterFactory<>::Create(&Json));
		bSuccess &= FFileHelper::SaveStringToFile(Json, *Output);
	}
	UE_LOG(LogAkAudio, Display, TEXT("PD3 Wwise validation: %s (%d assets)."), bSuccess ? TEXT("PASS") : TEXT("FAIL"), Objects.Num());
	return bSuccess ? 0 : 1;
}
