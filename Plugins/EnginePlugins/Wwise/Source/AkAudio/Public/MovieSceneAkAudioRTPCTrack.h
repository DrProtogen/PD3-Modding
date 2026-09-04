#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneAkTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioRTPCTrack();


    // Fix for true pure virtual functions not being implemented
    // Returning a null template is documented as valid ("A template, or null").
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};

