#include "iSystem.h"

#include "dolphin/dvd/dvd.h"
#include "dolphin/gx/GXFrameBuffer.h"
#include "dolphin/gx/GXManage.h"
#include "dolphin/gx/GXStruct.h"
#include "dolphin/hio.h"
#include "dolphin/os/OSError.h"
#include "dolphin/vi.h"
#include "rpcollis.h"
#include "rphanim.h"
#include "rpmatfx.h"
#include "rpptank.h"
#include "rpskin.h"
#include "rpusrdat.h"
#include "rpworld.h"
#include "rwplcore.h"
#include "xBase.h"
#include "xFX.h"
#include "xShadow.h"
#include "xstransvc.h"
#include <stdio.h>
#include <types.h>

#include <rwcore.h>

#include "xDebug.h"
#include "xMath.h"
#include "xSnd.h"
#include "xPad.h"
#include "xMemMgr.h"

#include "iMemMgr.h"
#include "iSystem.h"
#include "iFile.h"
#include "iFMV.h"
#include "iTime.h"
#include "iTRC.h"

struct
{
    GXRenderModeObj* renderMode;
    U32 unk_4;
    U32 unk_8;
} deviceConfig;
RwVideoMode sVideoMode;

GXDrawSyncCallback old_dsc;
U16 last_error;
OSContext* last_context;
U32 size;
U32 add;
S32 gEmergencyMemLevel;
void* bad_val = (void*)0x81abcaa0;
U32 test_alloc_val = 0x210A;

static RwMemoryFunctions MemoryFunctions;

static const char* __deadstripped()
{
    return "Level %d, Warning $03d: %s\n";
}

RwMemoryFunctions* psGetMemoryFunctions()
{
    return &MemoryFunctions;
}

void iVSync()
{
    VIWaitForRetrace();
}

void my_dsc(u16 dsc)
{
}

static void FloatingPointErrorHandler(U16 last, OSContext* ctxt, u32 unk1, u32 unk2)
{
    U32 uVar2 = ctxt->fpscr;
    uVar2 &= ((uVar2 & 0xf8) << 0x16 | 0x1f80700);
    if ((uVar2 & 0x20000000) != 0)
    {
        OSReport("FPE: Invalid operation: ");

        if ((uVar2 & 0x1000000) != 0)
        {
            OSReport("SNaN\n");
        }
        if ((uVar2 & 0x800000) != 0)
        {
            OSReport("Infinity - Infinity\n");
        }
        if ((uVar2 & 0x400000) != 0)
        {
            OSReport("Infinity / Infinity\n");
        }
        if ((uVar2 & 0x200000) != 0)
        {
            OSReport("0 / 0\n");
        }
        if ((uVar2 & 0x100000) != 0)
        {
            OSReport("Infinity * 0\n");
        }
        if ((uVar2 & 0x80000) != 0)
        {
            OSReport("Invalid compare\n");
        }
        if ((uVar2 & 0x400) != 0)
        {
            OSReport("Software request\n");
        }
        if ((uVar2 & 0x200) != 0)
        {
            OSReport("Invalid square root\n");
        }
        if ((uVar2 & 0x100) != 0)
        {
            OSReport("Invalid integer convert\n");
        }
    }
    if ((uVar2 & 0x10000000) != 0)
    {
        OSReport("FPE: Overflow\n");
    }
    if ((uVar2 & 0x8000000) != 0)
    {
        OSReport("FPE: Underflow\n");
    }
    if ((uVar2 & 0x4000000) != 0)
    {
        OSReport("FPE: Zero division\n");
    }
    if ((uVar2 & 0x2000000) != 0)
    {
        OSReport("FPE: Inexact result\n");
    }
    ctxt->srr0 = ctxt->srr0 + 4;
}

static void MemoryProtectionErrorHandler(u16 last, OSContext* ctx, u32 unk1, u32 unk2)
{
    last_error = last;
    last_context = ctx;
    if (ctx->fpscr)
    {
        null_func();
    }
}

static void TRCInit()
{
    iTRCDisk::Init();
    iTRCDisk::SetPadStopRumblingFunction(iPadStopRumble);
    iTRCDisk::SetSndSuspendFunction(iSndSuspend);
    iTRCDisk::SetSndResumeFunction(iSndResume);
    iTRCDisk::SetSndKillFunction(iSndDIEDIEDIE);
    iTRCDisk::SetMovieSuspendFunction(iFMV::Suspend);
    iTRCDisk::SetMovieResumeFunction(iFMV::Resume);
    ResetButton::SetSndKillFunction(iSndDIEDIEDIE);
}

static S32 RenderWareExit();
S32 DolphinInitMemorySystem(RwMemoryFunctions*);
static S32 RenderWareInit();

//FIXME: This should be a dolphin header somewhere
extern "C" GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback cb);
void iSystemInit(U32 options)
{
    deviceConfig.renderMode = &GXNtsc480IntDf;
    deviceConfig.unk_4 = 0;
    deviceConfig.unk_8 = 0x40000;

    GXSetMisc(GX_MT_XF_FLUSH, 8);
    OSInit();
    DVDInit();
    VIInit();

    __OSFpscrEnableBits = FPSCR_ZE;
    OSSetErrorHandler(0x10, (OSErrorHandler)FloatingPointErrorHandler);
    OSSetErrorHandler(0xf, (OSErrorHandler)MemoryProtectionErrorHandler);

    if (!DolphinInitMemorySystem(&MemoryFunctions))
    {
        OSPanic(__FILE__, 0x1cc, "Unable to initialize memory system.\n");
    }
    xDebugInit();
    xMemInit();
    iFileInit();
    iTimeInit();
    xPadInit();
    xSndInit();
    TRCInit();
    RenderWareInit();
    xMathInit();
    xMath3Init();
    old_dsc = GXSetDrawSyncCallback(my_dsc);
}

void iSystemExit()
{
    xDebugExit();
    xMathExit();
    RenderWareExit();
    xSndExit();
    xPadKill();
    iFileExit();
    iTimeExit();
    xMemExit();
    OSPanic(__FILE__, 0x21d,
            "(With apologies to Jim Morrison) This the end, my only friend, The End.");
}

static U32 RWAttachPlugins()
{
    if (!RpWorldPluginAttach())
    {
        return true;
    }
    if (!RpCollisionPluginAttach())
    {
        return true;
    }
    if (!RpSkinPluginAttach())
    {
        return true;
    }
    if (!RpHAnimPluginAttach())
    {
        return true;
    }
    if (!RpMatFXPluginAttach())
    {
        return true;
    }
    if (!RpUserDataPluginAttach())
    {
        return true;
    }
    if (!RpPTankPluginAttach())
    {
        return true;
    }
    return false;
}

static S32 DolphinInstallFileSystem();
static RwTexture* TextureRead(const RwChar* name, const RwChar* maskName);

static S32 RenderWareInit()
{
    RwMemoryFunctions* memoryFns = psGetMemoryFunctions();
    if (!RwEngineInit(memoryFns, 0, 0x60000))
    {
        return TRUE;
    }
    RwResourcesSetArenaSize(0x60000);
    if (!DolphinInstallFileSystem())
    {
        return TRUE;
    }
    if (RWAttachPlugins())
    {
        return TRUE;
    }
    RwEngineOpenParams params;
    params.displayID = &deviceConfig;
    if (!RwEngineOpen(&params))
    {
        RwEngineTerm();
        return TRUE;
    }
    RwEngineGetVideoModeInfo(&sVideoMode, RwEngineGetCurrentVideoMode());
    if (!RwEngineStart())
    {
        RwEngineClose();
        RwEngineTerm();
        return TRUE;
    }
    RwTextureSetReadCallBack(TextureRead);
    RwRenderStateSet((RwRenderState)0x14, (void*)0x2); // RwRenderState 0x14 isn't defined??
    xShadowInit();
    xFXInit();
    RwTextureSetMipmapping(TRUE);
    RwTextureSetAutoMipmapping(TRUE);
    return FALSE;
}

static S32 RenderWareExit()
{
    RwEngineStop();
    RwEngineClose();
    return RwEngineTerm();
}

extern U32 _RwGameCubeRasterExtOffset;
struct RwGameCubeRasterExt
{
    U8 pad[0xc];
    U32 unk_c;
};

static RwTexture* TextureRead(const RwChar* name, const RwChar* maskName)
{
    char buf[0x100];
    sprintf(buf, "%s.rw3", name);

    U32 assetSize;
    RwTexture* asset = (RwTexture*)xSTFindAsset(xStrHash(buf), &assetSize);
    if (asset != NULL)
    {
        if (asset->raster != NULL && asset->raster->depth < 8)
        {
            RwGameCubeRasterExt* ext =
                (RwGameCubeRasterExt*)((U32)asset->raster + _RwGameCubeRasterExtOffset);
            if (ext == NULL || ext->unk_c != 14)
            {
                asset = NULL;
            }
        }
    }

    if (asset != NULL)
    {
        strcpy(asset->name, name);
        strcpy(asset->mask, maskName);
    }
    return asset;
}

void null_func()
{
    mem_base_alloc += 4;
}

extern "C" {
void mem_null(U32 param_1, U32 param_2)
{
    add = param_1;
    size = param_2;
}

void* malloc(U32 __size)
{
    if ((S32)__size <= 0)
    {
        return NULL;
    }

    void* result = OSAllocFromHeap(the_heap, __size);

    if (result == NULL)
    {
        null_func();
    }

    return result;
}

void free(void* __ptr)
{
    if (__ptr != NULL)
    {
        OSFreeToHeap(the_heap, __ptr);
    }
}
}

void _rwDolphinHeapFree(void* __ptr)
{
    if (__ptr == bad_val)
    {
        mem_null(0, 0);
    }
    if (__ptr != NULL)
    {
        if (*(S32*)((S32)__ptr - 4) == 0xDEADBEEF)
        {
            free((void*)((S32)__ptr - 32));
        }
        else
        {
            null_func();
            if (gEmergencyMemLevel != 0)
            {
                xMemPopBase(gEmergencyMemLevel);
                gEmergencyMemLevel = 0;
            }
        }
    }
}

void* _rwDolphinHeapAlloc(u32 size)
{
    static u32 alloc_num = 0;
    U32 alloc = (U32)malloc(size + 0x20);
    if (alloc != NULL)
    {
        *(U32*)((U8*)alloc + 0x0) = size;
        *(U32*)((U8*)alloc + 0x4) = alloc_num;
        u32 this_alloc = alloc_num;
        alloc_num++;
        if (this_alloc >= test_alloc_val - 0xa)
        {
            null_func();
            *(U32*)((U8*)alloc + 0x8) = 0x1EE7D00D;
            alloc = alloc + 0xc;
        }
        else
        {
            *(U32*)((U8*)alloc + 0x8) = 0xDEADBEEF;
            alloc = alloc + 0xc;
        }

        *(U32*)((U8*)alloc + 0x0) = 0xDEADBEEF;
        *(U32*)((U8*)alloc + 0x4) = 0xDEADBEEF;
        *(U32*)((U8*)alloc + 0x8) = 0xDEADBEEF;
        *(U32*)((U8*)alloc + 0xc) = 0xDEADBEEF;
        *(U32*)((U8*)alloc + 0x10) = 0xDEADBEEF;
        alloc = alloc + 0x14;
    }

    return (void*)alloc;
}

S32 iGetMinute()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.min;
}

S32 iGetHour()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.hour;
}

S32 iGetDay()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mday;
}

S32 iGetMonth()
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    return td.mon + 1;
}

// Template for future use. TODO
char* iGetCurrFormattedDate(char* input)
{
    return NULL;
}

// WIP.
char* iGetCurrFormattedTime(char* input)
{
    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);
    bool pm = false;
    // STUFF.
    char* ret = input;
    // STUFF.
    if (pm)
    {
        ret[8] = 'P';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    else
    {
        ret[8] = 'A';
        ret[9] = '.';
        ret[10] = 'M';
        ret[11] = '.';
    }
    ret[12] = '\0';
    return ret + (0xd - (S32)input);
}
