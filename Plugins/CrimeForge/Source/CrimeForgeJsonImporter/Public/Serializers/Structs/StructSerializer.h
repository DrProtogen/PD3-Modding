

#pragma once

#include "UObject/Object.h"

/** Handles struct serialization */
class CRIMEFORGEJSONIMPORTER_API FStructSerializer {
public:
	virtual ~FStructSerializer() = default;
	virtual void Deserialize(UScriptStruct* Struct, void* StructData, const TSharedPtr<FJsonObject> JsonValue, UObject* OptionalOuter) = 0;
};