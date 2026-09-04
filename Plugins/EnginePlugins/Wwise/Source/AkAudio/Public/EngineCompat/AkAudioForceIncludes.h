#pragma once
// Force-included (via ModuleRules.ForceIncludeFiles) for every translation unit in the AkAudio
// module. Same rationale as Source/Starbreeze/Public/EngineCompat/StarbreezeForceIncludes.h: this
// source was reconstructed from a UHT reflection dump that captures class/property declarations
// but not the original per-file #include lists, so base classes/interfaces used without their own
// #include are covered here instead of patching every file individually.

#include "Kismet/BlueprintAsyncActionBase.h"
#include "Components/Widget.h"
#include "Components/ContentWidget.h"
#include "MovieSceneTrack.h"
#include "MovieSceneSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
