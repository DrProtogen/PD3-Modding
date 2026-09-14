

#include "Modules/AssetBackend/BlockingRequest.h"

#include "Misc/ScopedSlowTask.h"

namespace {
    constexpr float BlockingProgressDelay = 0.4f;

    int32 GBlockingScopeDepth = 0;
    TUniquePtr<FScopedSlowTask> GBlockingProgress;
    TArray<FText> GDescriptionStack;
    bool GPumping = false;
}

FBlockingRequestScope::FBlockingRequestScope(const FText& Description) {
    bTracked = IsInGameThread();
    if (!bTracked) return;

    GDescriptionStack.Push(Description);
    bOwnsProgress = GBlockingScopeDepth++ == 0;

    if (bOwnsProgress) {
        GBlockingProgress = MakeUnique<FScopedSlowTask>(0.0f, Description);
        GBlockingProgress->MakeDialogDelayed(BlockingProgressDelay, true);
    }
}

FBlockingRequestScope::~FBlockingRequestScope() {
    if (!bTracked) return;

    GBlockingScopeDepth--;
    GDescriptionStack.Pop();

    if (bOwnsProgress) GBlockingProgress.Reset();
}

bool FBlockingRequestScope::IsActive() {
    return GBlockingScopeDepth > 0;
}

bool FBlockingRequestScope::Pump() {
    if (!GBlockingProgress.IsValid() || !IsInGameThread() || GPumping) return false;

    const FText CurrentDescription = GDescriptionStack.Num() > 0
        ? GDescriptionStack.Top()
        : FText::GetEmpty();

    GPumping = true;
    GBlockingProgress->EnterProgressFrame(0.0f, CurrentDescription);
    GPumping = false;

    return GBlockingProgress.IsValid() && GBlockingProgress->ShouldCancel();
}
