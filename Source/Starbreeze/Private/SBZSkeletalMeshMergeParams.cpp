#include "SBZSkeletalMeshMergeParams.h"

FSBZSkeletalMeshMergeParams::FSBZSkeletalMeshMergeParams() {
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bSkeletonBefore = false;
    this->Skeleton = NULL;
}

