#include "zAssetTypes.h"

#include "xstransvc.h"
#include "xDebug.h"

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>

extern xJSPHeader* sTempJSP;
extern xJSPHeader sDummyEmptyJSP;

void zAssetShutdown()
{
    xSTShutdown();
}

#if 0
// Ghidra's output here is not helpful
void* BSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    RwMemory rwmem;
    RwChunkHeaderInfo chunkHeaderInfo;
    RpWorld* bsp;

    RwStream* stream = RwStreamOpen((RwStreamType)3, (RwStreamAccessType)1, indata);
    if (stream == 0)
    {
        xprintf("BSP_Read RwStreamOpen failed\n");
    }
    if (RwStreamFindChunk(stream, 0xb, 0, 0) == 0)
    {
        // damn
        // chunk header info is austack in ghidra :/
        RwStreamReadChunkHeaderInfo(stream, chunkHeaderInfo);
        *outsize = 0;
    }
    else
    {
        bsp = RpWorldStreamRead(stream);
        if (bsp == 0)
        {
            xprintf("BSP_Read RpWorldStreamRead failed\n");
        }
        RwStreamClose(stream, 0);
        *outsize = 4;
    }
    return bsp;
}
#endif

void* JSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    xJSPHeader* retjsp = &sDummyEmptyJSP;
    *outsize = 32;
    xJSP_MultiStreamRead(indata, insize, &sTempJSP);
    if (sTempJSP->jspNodeList != NULL)
    {
        retjsp = sTempJSP;
        sTempJSP = 0;
        *outsize = 4;
    }
    jsp_shadow_hack(retjsp);
    return retjsp;
}

void Anim_Unload(void*, U32)
{
}
