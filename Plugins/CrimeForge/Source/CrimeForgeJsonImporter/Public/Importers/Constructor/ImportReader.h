

#pragma once

#include "Importer.h"
#include "Dom/JsonValue.h"
#include "Containers/Export.h"

class CRIMEFORGEJSONIMPORTER_API IImportReader {
public:
	/* Accept both Reflection (Token) and native CUE4Parse (Inst) Kismet opcode JSON. */
	static void NormalizeBlueprintKismetAliases(const TArray<TSharedPtr<FJsonValue>>& Exports);
	static bool ReadExportsAndImport(const TArray<TSharedPtr<FJsonValue>>& Exports, const FString& File, IImporter*& OutImporter, bool HideNotifications = false, bool bUseRelativePath = true);
	static IImporter* ReadExportAndImport(FUObjectExportContainer* Container, FUObjectExport* Export, FString File, bool HideNotifications = false, bool bUseRelativePath = true);
	static IImporter* ImportReference(const FString& File);
};
