

#include "Containers/Export.h"
#include "Engine/EngineUtilities.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"
#include "Settings/Runtime.h"
#include "Importers/Types/Blueprint/BlueprintUtilities.h"

FString ReadPathFromObject(const FUObjectJsonValueExport& PackageIndex) {
	FString ObjectType, ObjectName, ObjectPath, Outer;
	PackageIndex.GetString("ObjectName").Split("'", &ObjectType, &ObjectName);

	ObjectPath = PackageIndex.GetString("ObjectPath");
	ObjectPath.Split(".", &ObjectPath, nullptr);

	const FString& ProjectName = GCrimeForgeJsonImporterRuntime.Profile.ProjectName;

	if (!ProjectName.IsEmpty()) {
		ObjectPath = ObjectPath.Replace(*(ProjectName + "/Content"), TEXT("/Game"));
	}

	ObjectPath = ObjectPath.Replace(TEXT("Engine/Content"), TEXT("/Engine"));
	ObjectName = ObjectName.Replace(TEXT("'"), TEXT(""));

	if (ObjectName.Contains(".")) {
		ObjectName.Split(".", nullptr, &ObjectName);
	}

	if (ObjectName.Contains(".")) {
		ObjectName.Split(".", &Outer, &ObjectName);
	}

	return ObjectPath + "." + ObjectName;
}

UClass* FUObjectExport::GetClass() {
	if (Class) return Class;
	
	FString ClassName = GetString("Class");

	if (Has("Template")) {
		ClassName = ReadPathFromObject(GetObject("Template")).Replace(TEXT("Default__"), TEXT(""));
	}

	if (ClassName.Contains("'")) {
		ClassName.Split("'", nullptr, &ClassName, ESearchCase::IgnoreCase, ESearchDir::FromStart);
		ClassName.Split("'", &ClassName, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromStart);
	}

	UClass* OutClass = FindClassByType(ClassName);

	/*
	 * External Widget Blueprint children are commonly exported using their generated-class
	 * object path, for example:
	 *
	 *   /Game/UI/WBP_Button.WBP_Button_C
	 *
	 * FindClassByType() only searches objects that are already loaded.  During WidgetTree
	 * reconstruction a referenced Widget Blueprint often has not been loaded yet, so the class
	 * lookup fails and SpawnExport silently skips that widget.  Load the generated class from
	 * its object path before falling back to the short export Type.
	 */
	if (!OutClass && ClassName.Contains(TEXT("/")) && ClassName.Contains(TEXT("."))) {
		OutClass = LoadObject<UClass>(nullptr, *ClassName);
	}

	if (!OutClass) {
		OutClass = FindClassByType(GetType().ToString());
	}

	if (Has("Next") || Has("SuperStruct")) {
		OutClass = LoadClass(GetSuperStructJsonObject(GetProperties()));
	}

	if (!OutClass) return nullptr;

	Class = OutClass;
	return Class;
}
