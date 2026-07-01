#include "iSystem.h"

#include <stdio.h>

#include <rwcore.h>

#include "rpmatfx.h"
#include "rpptank.h"
#include "rpskin.h"
#include "rpusrdat.h"

#include "xDebug.h"
#include "xSnd.h"
#include "xFX.h"
#include "xShadow.h"
#include "xstransvc.h"

#include "iMemMgr.h"
#include "iSystem.h"
#include "iFMV.h"
#include "iTRC.h"

// .bss
static RwMemoryFunctions MemoryFunctions;

// .comm
struct
{
    GXRenderModeObj* renderMode;
    U32 unk_4;
    U32 unk_8;
} deviceConfig;
RwVideoMode sVideoMode;

// .sbss
GXDrawSyncCallback old_dsc;
U16 last_error;
OSContext* last_context;
U32 add;
U32 size;
S32 gEmergencyMemLevel;

// .sdata
void* bad_val = (void*)0x81abcaa0;
U32 test_alloc_val = 0x210A;
static S32 rwID_DOLPHINDEVICEMODULE = 0x430;

static RwTexture* TextureRead(const RwChar* name, const RwChar* maskName);
static void* _rwDolphinFSOpen(void*, int, int);
static void* _rwDolphinFSClose(void*, int, int);
static S32 DolphinInstallFileSystem();

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
        return TRUE;
    }
    if (!RpCollisionPluginAttach())
    {
        return TRUE;
    }
    if (!RpSkinPluginAttach())
    {
        return TRUE;
    }
    if (!RpHAnimPluginAttach())
    {
        return TRUE;
    }
    if (!RpMatFXPluginAttach())
    {
        return TRUE;
    }
    if (!RpUserDataPluginAttach())
    {
        return TRUE;
    }
    if (!RpPTankPluginAttach())
    {
        return TRUE;
    }
    return FALSE;
}

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
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
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
                RWPLUGINOFFSET(RwGameCubeRasterExt, asset->raster, _RwGameCubeRasterExtOffset);
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
static void mem_null(U32 param_1, U32 param_2)
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

static void _rwDolphinHeapFree(void* __ptr)
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

// non-matching: sda scheduling
static void* _rwDolphinHeapAlloc(u32 size)
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

static void* _rwDolphinHeapCalloc(u32 p1, u32 p2)
{
    void* __s = _rwDolphinHeapAlloc(p1 * p2);
    if (__s != NULL)
    {
        memset(__s, 0, p1 * p2);
    }
    return __s;
}

static void* _rwDolphinHeapRealloc(void* p1, u32 p2)
{
    u32 __n;
    void* __dest;

    if (p1 != NULL)
        __n = *(u32*)((u8*)p1 - 0x20);
    else
        __n = 0;

    if (p2 < __n)
        return p1;

    __dest = _rwDolphinHeapAlloc(p2);
    if (__dest != NULL)
    {
        if (__n < p2)
            memcpy(__dest, p1, __n);
        else
            memcpy(__dest, p1, p2);
        _rwDolphinHeapFree(p1);
    }
    return __dest;
}

S32 DolphinInitMemorySystem(RwMemoryFunctions* memoryFuncs)
{
    memoryFuncs->rwmalloc = _rwDolphinHeapAlloc;
    memoryFuncs->rwcalloc = _rwDolphinHeapCalloc;
    memoryFuncs->rwrealloc = _rwDolphinHeapRealloc;
    memoryFuncs->rwfree = _rwDolphinHeapFree;

    return 1;
}

static S32 dlAccessToMode(const char* mode)
{
    char c;
    S32 ret = 0;

    if (mode == 0)
    {
        return 0;
    }

    c = mode[0];

    if (c == 'r' && (mode[1] == '\0' || (mode[1] == 'b' && mode[2] == '\0')))
    {
        ret = 1;
    }
    else if (c == 'w' && (mode[1] == '\0' || (mode[1] == 'b' && mode[2] == '\0')))
    {
        ret = 0xe;
    }
    else if (c == 'a' && (mode[1] == '\0' || (mode[1] == 'b' && mode[2] == '\0')))
    {
        ret = 6;
    }
    else if (c == 'r' && mode[1] == '+' && (mode[2] == '\0' || (mode[2] == 'b' && mode[3] == '\0')))
    {
        ret = 3;
    }
    else if (c == 'w' && mode[1] == '+' && (mode[2] == '\0' || (mode[2] == 'b' && mode[3] == '\0')))
    {
        ret = 0xf;
    }
    else if (c == 'a' && mode[1] == '+' && (mode[2] == '\0' || (mode[2] == 'b' && mode[3] == '\0')))
    {
        ret = 7;
    }

    return ret;
}

// both need to be after alloc_num from _rwDolphinHeapAlloc
static S32 FSOpenFiles;
struct RwModuleInfo
{
    s32 globalsOffset;
    s32 numInstances;
};
static RwModuleInfo FSModuleInfo; // Type only exists in PS2 dwarf, symbol only exists on GC

void* dlFopen(const char* name, const char* access)
{
    U32 mode = dlAccessToMode(access);
    if (mode == 0)
    {
        return NULL;
    }

    dlFile* fp = (dlFile*)RwEngineInstance->memoryAlloc(
        RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C);
    if (fp == NULL)
    {
        return NULL;
    }

    fp->accessMode = 0;
    if (mode == 1)
    {
        fp->accessMode = 1;
    }

    if (fp->accessMode == 0)
    {
        RwEngineInstance->memoryFree(
            RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C,
            fp);
        return NULL;
    }

    if (DVDOpen(name, &fp->fileInfo) == 0)
    {
        RwEngineInstance->memoryFree(
            RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C,
            fp);
        return NULL;
    }

    fp->SOF = fp->fileInfo.length;
    fp->POS = 0;
    fp->bufferPos = DLFILE_BUF_SIZE;
    FSOpenFiles++;
    return fp;
}

static S32 dlFclose(void* fptr)
{
    dlFile* fp = (dlFile*)fptr;

    if (fp != NULL && FSOpenFiles != 0 && DVDClose(&fp->fileInfo) != 0)
    {
        RwEngineInstance->memoryFree(
            RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C,
            fp);

        FSOpenFiles--;
        return 0;
    }
    return -1;
}

static RwBool dlFexist(const char* name)
{
    void* fp;

    fp = ((void* (*)(const char*, const char*))((void**)RwOsGetFileInterface())[1])(name, "r");

    if (fp != 0)
    {
        ((void (*)(void*))((void**)RwOsGetFileInterface())[2])(fp);
        return true;
    }

    return false;
}

// non-matching: r25/r26/r27 register issue
static size_t dlFread(void* addr, size_t size, size_t count, void* fptr)
{
    S32 pos2;
    S32 posTmp;
    S32 bytesRead = 0;
    S32 readSize;
    U32 buffered;
    U32 uVar1;
    dlFile* fp = (dlFile*)fptr;
    U32 numBytesToRead = size * count;

    if ((U32)(fp->POS + numBytesToRead) > fp->SOF)
    {
        numBytesToRead = fp->SOF - fp->POS;
    }
    if (fp->bufferPos < DLFILE_BUF_SIZE)
    {
        if (numBytesToRead > bytesRead)
        {
            buffered = DLFILE_BUF_SIZE - fp->bufferPos;
            if (numBytesToRead < buffered)
            {
                buffered = numBytesToRead;
            }
            bytesRead = buffered;
            memcpy(addr, fp->readBuffer + fp->bufferPos, buffered);
            addr = (char*)addr + buffered;
            fp->bufferPos += buffered;
            fp->POS += buffered;
        }
    }
    uVar1 = numBytesToRead - bytesRead;
    if (uVar1 != 0)
    {
        if (uVar1 >= DLFILE_BUF_SIZE)
        {
            if (!((U32)addr & 0x1f) && !(uVar1 & 0x1f))
            {
                uVar1 = DVDReadPrio(&fp->fileInfo, addr, uVar1, fp->POS, 2);
                if ((S32)uVar1 < 0)
                {
                    uVar1 = 0;
                }
            }
            else
            {
                numBytesToRead -= bytesRead;
                uVar1 = 0;
                posTmp = fp->POS;
                S32 loopCount = (S32)numBytesToRead / DLFILE_BUF_SIZE + 1;
                while (loopCount-- != 0)
                {
                    pos2 = fp->POS;
                    readSize = DLFILE_BUF_SIZE;
                    pos2 += uVar1;
                    if ((S32)(fp->SOF - pos2) <= DLFILE_BUF_SIZE)
                    {
                        readSize = (fp->SOF - pos2);
                    }
                    if (DVDReadPrio(&fp->fileInfo, fp->readBuffer, ((U32)readSize + 0x1f) & ~0x1f,
                                    posTmp, 2) == -1)
                    {
                        return bytesRead + uVar1;
                    }
                    if ((S32)numBytesToRead >= readSize)
                    {
                        memcpy(addr, fp->readBuffer, readSize);
                        numBytesToRead -= readSize;
                        uVar1 += readSize;
                        posTmp += readSize;
                        addr = (char*)addr + readSize;
                    }
                    else
                    {
                        memcpy(addr, fp->readBuffer, numBytesToRead);
                        fp->bufferPos = numBytesToRead;
                        uVar1 += numBytesToRead;
                        posTmp += numBytesToRead;
                    }
                }
            }
        }
        else
        {
            buffered = ((U32)(fp->SOF - fp->POS) + 0x1f) & ~0x1f;
            if ((S32)buffered > DLFILE_BUF_SIZE)
            {
                buffered = DLFILE_BUF_SIZE;
            }
            if (DVDReadPrio(&fp->fileInfo, fp->readBuffer, buffered, fp->POS, 2) == -1)
            {
                return bytesRead;
            }
            memcpy(addr, fp->readBuffer, uVar1);
            fp->bufferPos = uVar1;
        }
        bytesRead += uVar1;
        fp->POS += uVar1;
    }
    return bytesRead / size;
}

static size_t dlFwrite(const void* addr, size_t size, size_t count, void* fptr)
{
    return 0;
}

static S32 dlFseek(void* fptr, long offset, int origin)
{
    S32 oldFPos = ((dlFile*)fptr)->POS;
    dlFile* fp = (dlFile*)fptr;
    S32 bufStart;

    switch (origin)
    {
    case 1:
    {
        fp->POS = oldFPos + offset;
        if ((S32)(fp->bufferPos + offset) >= 0 && (fp->bufferPos + offset) <= DLFILE_BUF_SIZE &&
            fp->POS <= fp->SOF)
        {
            fp->bufferPos += offset;
            return 0;
        }
        break;
    }
    case 2:
    {
        S32 delta = (fp->POS = fp->SOF + offset) - oldFPos;
        if ((S32)(fp->bufferPos + delta) >= 0 && (fp->bufferPos + delta) <= DLFILE_BUF_SIZE &&
            fp->POS <= fp->SOF)
        {
            fp->bufferPos += delta;
            return 0;
        }
        break;
    }
    case 0:
    {
        fp->POS = offset;
        S32 delta = offset - oldFPos;
        if ((S32)(fp->bufferPos + delta) >= 0 && (fp->bufferPos + delta) <= DLFILE_BUF_SIZE &&
            fp->POS <= fp->SOF)
        {
            fp->bufferPos += delta;
            return 0;
        }
        break;
    }
    default:
    {
        return -1;
    }
    }

    if (fp->POS > fp->SOF)
    {
        fp->POS = oldFPos;
        return -1;
    }

    bufStart = (fp->POS / (U32)DLFILE_BUF_SIZE) * DLFILE_BUF_SIZE;

    if (DVDReadPrio(&fp->fileInfo, fp->readBuffer,
                    (fp->SOF - bufStart <= DLFILE_BUF_SIZE) ? (fp->SOF - bufStart + 31) & ~31 :
                                                              DLFILE_BUF_SIZE,
                    bufStart, 2) == -1)
    {
        fp->POS = oldFPos;
        return -1;
    }

    fp->bufferPos = fp->POS - bufStart;
    return 0;
}

// non-matching: mr, subi, and li scheduling at the start
static char* dlFgets(char* buffer, S32 maxLen, void* fptr)
{
    dlFile* fp = (dlFile*)fptr;
    S32 i;
    S32 numBytesRead;
    i = 0;
    numBytesRead = dlFread(buffer, 1, maxLen - 1, fp);
    if (numBytesRead == 0)
        return NULL;
    while (i < numBytesRead)
    {
        if (buffer[i] == '\n')
        {
            i++;
            buffer[i] = '\0';
            i -= numBytesRead;
            dlFseek(fp, i, 1);
            return buffer;
        }
        if (buffer[i] == '\r')
        {
            if ((i < numBytesRead - 1) && (buffer[i + 1] == '\n'))
            {
                memcpy(&buffer[i], &buffer[i + 1], (numBytesRead - i) - 1);
                numBytesRead--;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    if ((numBytesRead < maxLen) && (fp->POS == fp->SOF))
    {
        buffer[numBytesRead] = '\0';
    }
    return buffer;
}

static S32 dlFputs(const char* buffer, void* fptr)
{
    return -1;
}

static S32 dlFeof(void* fptr)
{
    dlFile* fp = (dlFile*)fptr;
    return fp->POS >= fp->SOF;
}

static S32 dlFflush(void*)
{
    return 0;
}

static S32 dlFtell(void* fptr)
{
    dlFile* fp = (dlFile*)fptr;
    return fp->POS;
}

static void* _rwDolphinFSOpen(void* param_1, int param_2, int param_3)
{
    FSModuleInfo.globalsOffset = param_2;

    RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C =
        RwFreeListCreate(sizeof(dlFile), 5, 0x20);

    if (RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->unk_2C ==
        NULL)
    {
        return NULL;
    }

    RwFileFunctions* funcs = RwOsGetFileInterface();
    RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset)->fileFuncs =
        *funcs;

    funcs->rwfexist = dlFexist;
    funcs->rwfopen = dlFopen;
    funcs->rwfclose = dlFclose;
    funcs->rwfread = dlFread;
    funcs->rwfwrite = dlFwrite;
    funcs->rwfgets = dlFgets;
    funcs->rwfputs = dlFputs;
    funcs->rwfeof = dlFeof;
    funcs->rwfseek = dlFseek;
    funcs->rwfflush = dlFflush;
    funcs->rwftell = dlFtell;

    FSModuleInfo.numInstances++;

    return param_1;
}

static void* _rwDolphinFSClose(void* param_1, int param_2, int param_3)
{
    RwFileFunctions* osFileInterface = RwOsGetFileInterface();
    *osFileInterface =
        (RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset))->fileFuncs;
    RwFreeListDestroy(
        (RWPLUGINOFFSET(dlFSUnkGlobals, RwEngineInstance, FSModuleInfo.globalsOffset))->unk_2C);

    FSModuleInfo.numInstances--;

    return param_1;
}

static S32 DolphinInstallFileSystem()
{
    DVDInit();
    RwUInt32 plugin =
        RwEngineRegisterPlugin(0x30, rwID_DOLPHINDEVICEMODULE, _rwDolphinFSOpen, _rwDolphinFSClose);
    return plugin >> 0x1f ^ 1;
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

char* months[] = { "January ", "February ", "March ",     "April ",   "May ",      "June ",
                   "July ",    "August ",   "September ", "October ", "November ", "December " };

char* dotw[] = {
    "Sunday ", "Monday ", "Tuesday ", "Wednesday ", "Thursday ", "Friday ", "Saturday "
};

U32 iGetCurrFormattedDate(char* str)
{
    char* start = str;
    OSTime ticks = OSGetTime();
    OSCalendarTime td;

    OSTicksToCalendarTime(ticks, &td);

    strcpy(str, dotw[td.wday]);
    strcat(str, months[td.mon]);
    str += strlen(str);

    if (td.mday >= 10)
    {
        str[0] = (td.mday / 10) + '0';
        str++;
    }

    str[0] = (td.mday % 10) + '0';
    str[1] = ',';
    str[2] = ' ';
    str[3] = (td.year / 1000) + '0';
    str[4] = ((td.year / 100) % 10) + '0';
    str[5] = ((td.year / 10) % 100) + '0';
    str[6] = (td.year % 10) + '0';
    str += 7;
    *str++ = '\0';

    return str - start;
}

U32 iGetCurrFormattedTime(char* str)
{
    char* start = str;
    S32 am = 0;

    OSTime ticks = OSGetTime();
    OSCalendarTime td;
    OSTicksToCalendarTime(ticks, &td);

    if (td.hour < 12)
    {
        am = 1;
    }
    else
    {
        td.hour -= 12;
    }

    if (td.hour == 0)
        td.hour = 12;

    if (td.hour >= 10)
    {
        str[0] = (td.hour / 10) + '0';
        str++;
    }

    str[0] = (td.hour % 10) + '0';
    str[1] = ':';
    str[2] = (td.min / 10) + '0';
    str[3] = (td.min % 10) + '0';
    str[4] = ':';
    str[5] = (td.sec / 10) + '0';
    str[6] = (td.sec % 10) + '0';
    str[7] = ' ';

    if (am)
    {
        str[8] = 'A';
        str[9] = '.';
        str[10] = 'M';
        str[11] = '.';
        str += 12;
    }
    else
    {
        str[8] = 'P';
        str[9] = '.';
        str[10] = 'M';
        str[11] = '.';
        str += 12;
    }

    *str++ = '\0';

    return str - start;
}
