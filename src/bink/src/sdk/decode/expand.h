#ifndef BINK_SDK_DECODE_EXPAND_H
#define BINK_SDK_DECODE_EXPAND_H

#include "bink.h"

enum BINKBUNDLETYPE
{
    /* Bink video keeps each coded value source in a separate decoded bundle. */
    BINK_BUNDLE_BLOCK_TYPES,
    BINK_BUNDLE_SUBBLOCK_TYPES,
    BINK_BUNDLE_COLORS,
    BINK_BUNDLE_PATTERNS,
    BINK_BUNDLE_X_OFFSETS,
    BINK_BUNDLE_Y_OFFSETS,
    BINK_BUNDLE_INTRA_DC,
    BINK_BUNDLE_INTER_DC,
    BINK_BUNDLE_RUNS,
    BINK_BUNDLE_COUNT
};

void ExpandBundleSizes(u32 PTR4* sizes, u32 rows);
void ExpandBink(u8 PTR4* yout, u8 PTR4* yprev, u8 PTR4* aout, u8 PTR4* aprev,
                u8 PTR4* work, u32 width, u32 height, u32 pitch, u32 uvpitch,
                u32 PTR4* bundles, u32 key_frame, BUNDLEPOINTERS PTR4* table, u32 yflags,
                u32 aflags);

#endif
