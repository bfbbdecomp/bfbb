#include "iFMV.h"

#include "../x/xPar.h"

#include <types.h>
#include <dolphin.h>

extern uint32 Bink_surface_type[5];
extern volatile uint32 frame_num;

void* iFMVmalloc(size_t size)
{
    return RwMalloc(size);
}

void iFMVfree(void* mem)
{
    RwFree(mem);
}

#ifdef NON_MATCHING
// For some reason, the check for frame_num is always optimized to true.
uint32 iFMVPlay(char* filename, uint32 buttons, float32 time, bool skippable, bool lockController)
{
    if (filename == NULL)
    {
        return 1;
    }
    else
    {
        frame_num = 0;
        while (frame_num >= 0)
        {
            PlayFMV(filename, buttons, time);
        }
        return 0;
    }
}

#endif

static void Setup_surface_array()
{
    Bink_surface_type[0] = BINKSURFACE32;
    Bink_surface_type[1] = BINKSURFACE32A;
    Bink_surface_type[2] = BINKSURFACE565;
    Bink_surface_type[3] = BINKSURFACE4444;
    Bink_surface_type[4] = BINKSURFACEYUY2;
}

#if 0
// WIP.
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, int64 flags)
{
    BinkDoFrame(bnk);
    int32 code = Lock_RAD_3D_image(rad_image, dfgdfgdfgdfg);
    if (code != 0)
    {
        BinkCopyToBuffer(wefwefewfew);
        Unlock_RAD_3D_image(rad_image);
    }
}

#endif

void arammalloc(size_t size)
{
    ARAlloc(size);
}

#ifdef NON_MATCHING
// Something weird is going on here...
void aramfree(void* mem)
{
    ARFree(mem);
}
#endif

#if 0
// WIP.
void iFMV::InitVI()
{
    VISetNextFrameBuffer(FWFWEFEWFWEF);
    EWDEWDEWDEWD = WEDEDWEWDE;
    VIFlush();
    VIWaitForRetrace();
    if (*WEFWEFEWEF & 1)
    {
        VIWaitForRetrace();
    }
}

#endif

void iFMV::Suspend()
{
}

void iFMV::Resume()
{
}
