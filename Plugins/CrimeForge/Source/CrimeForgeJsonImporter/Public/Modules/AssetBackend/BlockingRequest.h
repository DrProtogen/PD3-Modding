

#pragma once

#include "CoreMinimal.h"

/* Marks a stretch of work that may block on the embedded PAYDAY 3 data backend.
 *
 * The importer resolves asset references recursively while deserializing properties. Those calls
 * have no continuation to hand a callback to, so a scope keeps the editor painting and gives the
 * user a visible progress surface while CUE4Parse is doing synchronous work on a worker thread.
 */
class CRIMEFORGEJSONIMPORTER_API FBlockingRequestScope {
public:
    explicit FBlockingRequestScope(const FText& Description);
    ~FBlockingRequestScope();

    FBlockingRequestScope(const FBlockingRequestScope&) = delete;
    FBlockingRequestScope& operator=(const FBlockingRequestScope&) = delete;

    static bool IsActive();

    /* Repaints the editor and reports whether Cancel was pressed. Backend package reads are not
     * interrupted mid-read, but callers can stop the surrounding batch once the current read ends. */
    static bool Pump();

private:
    bool bTracked = false;
    bool bOwnsProgress = false;
};
