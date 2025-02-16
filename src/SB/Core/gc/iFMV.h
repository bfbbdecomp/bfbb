#ifndef IFMV_H
#define IFMV_H

#include <types.h>
#include <rwcore.h>
#include <bink.h>

#include <dolphin/gx/GXEnum.h>
#include <dolphin/gx/GXStruct.h>

struct iFMV
{
    static void* mXFBs[2];
    static void* mCurrentFrameBuffer;
    static GXRenderModeObj* mRenderMode; 
    static U8 mFirstFrame;

    static void InitDisplay(GXRenderModeObj*);
    static void InitGX();
    static void InitVI();
    static void Suspend();
    static void Resume();
};

void* iFMVmalloc(size_t size);
void iFMVfree(void* mem);
U32 iFMVPlay(char* filename, U32 buttons, F32 time, bool skippable, bool lockController);
static void Setup_surface_array();
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, long flags);
#endif
