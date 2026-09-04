#include "SBZConnectorDebugDrawingManager.h"
#include "UObject/NoExportTypes.h"

ASBZConnectorDebugDrawingManager::ASBZConnectorDebugDrawingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->LineBatchComponent = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatchComponent"));
}


