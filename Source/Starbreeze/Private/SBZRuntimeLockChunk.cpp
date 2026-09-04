#include "SBZRuntimeLockChunk.h"

FSBZRuntimeLockChunk::FSBZRuntimeLockChunk() {
    this->StartPos = 0.00f;
    this->AnimTime = 0.00f;
    this->State = ESBZLockChunkState::Uninitialized;
    this->Image = NULL;
}

