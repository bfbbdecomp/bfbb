#ifndef _BINKTEXTURES_H_
#define _BINKTEXTURES_H_
#include "bink.h"
#include "dolphin/gx.h"

/*
 * RAD's high level API for using 3D hardware to do color conversion.
 *
 * Playback allocates platform textures, registers the resulting
 * BINKFRAMEBUFFERS with Bink, waits for the GPU before decoding, syncs the
 * decoded texture memory after BinkDoFrame, and then draws the frame.
 */

typedef struct BINKFRAMETEXTURES {
    GXTexObj Ytexture;
    GXTexObj cRtexture;
    GXTexObj cBtexture;
    GXTexObj Atexture;
} BINKFRAMETEXTURES;

typedef struct BINKTEXTURESET {
    /* GPU texture resources for each Bink frame buffer. */
    BINKFRAMETEXTURES textures[BINKMAXFRAMEBUFFERS];

    /* Bink's view of the frame buffers backed by those textures. */
    BINKFRAMEBUFFERS bink_buffers;

    /* GameCube texture memory and deswizzle state. */
    void* base_ptr;
    u32 framesize;
    u32 YAdeswizzle_width;
    u32 YAdeswizzle_height;
    u32 cRcBdeswizzle_width;
    u32 cRcBdeswizzle_height;
    GXTexObj YAdeswizzle;
    GXTexObj cRcBdeswizzle;
    s32 drawing[BINKMAXFRAMEBUFFERS];
} BINKTEXTURESET;

#endif
