#include <stddef.h>
#include <dolphin/hw_regs.h>
#include <dolphin/base/PPCArch.h>
#include <dolphin/gx.h>
#include <dolphin/os.h>

#include <gx/__gx.h>
#include <dolphin/gx/GXManage.h>

static GXDrawSyncCallback TokenCB;
static GXDrawDoneCallback DrawDoneCB;
static u8 DrawDone;
static OSThreadQueue FinishQueue;

void GXSetMisc(GXMiscToken token, u32 val)
{
    switch (token)
    {
    case GX_MT_XF_FLUSH:
        __GXData->vNum = val;
        __GXData->vNumNot = !__GXData->vNum;
        __GXData->bpSentNot = 1;

        if (__GXData->vNum != 0)
        {
            __GXData->dirtyState |= 8;
        }
        break;
    case GX_MT_DL_SAVE_CONTEXT:
        __GXData->dlSaveContext = (val != 0);
        break;
    case GX_MT_ABORT_WAIT_COPYOUT:
        __GXData->abtWaitPECopy = (val != 0);
        break;
    case GX_MT_NULL:
        break;
    default:
#if DEBUG
        OSReport("GXSetMisc: bad token %d (val %d)\n", token, val);
#endif
        break;
    }
}

void GXFlush(void)
{
    CHECK_GXBEGIN(270, "GXFlush");
    if (__GXData->dirtyState)
    {
        __GXSetDirtyState();
    }

    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);
    GX_WRITE_U32(0);

    PPCSync();
}

inline void __GXAbortWait(u32 clocks)
{
    OSTime time0;
    OSTime time1;

    time0 = OSGetTime();
    do
    {
        time1 = OSGetTime();
    } while (time1 - time0 <= (clocks / 4));
}

inline void __GXAbortWaitPECopyDone(void)
{
    u32 peCnt0;
    u32 peCnt1;

    peCnt0 = __GXReadMEMCounterU32(0x28, 0x27);
    do
    {
        peCnt1 = peCnt0;
        __GXAbortWait(32);

        peCnt0 = __GXReadMEMCounterU32(0x28, 0x27);
    } while (peCnt0 != peCnt1);
}

void __GXAbort(void)
{
    if (__GXData->abtWaitPECopy && GXGetGPFifo() != (GXFifoObj*)NULL)
    {
        __GXAbortWaitPECopyDone();
    }

    __PIRegs[0x18 / 4] = 1;
    __GXAbortWait(200);
    __PIRegs[0x18 / 4] = 0;
    __GXAbortWait(20);
}

void GXSetDrawSync(u16 token)
{
    BOOL enabled;
    u32 reg;

    CHECK_GXBEGIN(430, "GXSetDrawSync");

    enabled = OSDisableInterrupts();
    reg = token | 0x48000000;
    GX_WRITE_RAS_REG(reg);
    SET_REG_FIELD(443, reg, 16, 0, token);
    SET_REG_FIELD(443, reg, 8, 24, 0x47);
    GX_WRITE_RAS_REG(reg);
    GXFlush();
    OSRestoreInterrupts(enabled);
    __GXData->bpSentNot = 0;
}

u16 GXReadDrawSync(void)
{
    u16 token = GX_GET_PE_REG(7);
    return token;
}

inline void GXSetDrawDone(void)
{
    u32 reg;
    BOOL enabled;

    CHECK_GXBEGIN(488, "GXSetDrawDone");
    enabled = OSDisableInterrupts();
    reg = 0x45000002;
    GX_WRITE_RAS_REG(reg);
    GXFlush();
    DrawDone = 0;
    OSRestoreInterrupts(enabled);
}

inline void GXWaitDrawDone(void)
{
    BOOL enabled;

    CHECK_GXBEGIN(534, "GXWaitDrawDone");

    enabled = OSDisableInterrupts();
    while (!DrawDone)
    {
        OSSleepThread(&FinishQueue);
    }
    OSRestoreInterrupts(enabled);
}

void GXDrawDone(void)
{
    // GXSetDrawDone uses GXFlush()
    // This functions requires less lines in GXFlush
    // but then GXFlush doesnt match
    CHECK_GXBEGIN(566, "GXDrawDone");
    GXSetDrawDone();
    GXWaitDrawDone();
}

void GXPixModeSync(void)
{
    CHECK_GXBEGIN(601, "GXPixModeSync");
    GX_WRITE_RAS_REG(__GXData->peCtrl);
    __GXData->bpSentNot = 0;
}

#if DEBUG
void __GXBypass(u32 reg)
{
    CHECK_GXBEGIN(647, "__GXBypass");
    GX_WRITE_RAS_REG(reg);
    __GXData->bpSentNot = 0;
}

u16 __GXReadPEReg(u32 reg)
{
    return GX_GET_PE_REG(reg);
}
#endif

void GXPokeAlphaMode(GXCompare func, u8 threshold)
{
    u32 reg;

    reg = (func << 8) | threshold;
    GX_SET_PE_REG(3, reg);
}

void GXPokeAlphaRead(GXAlphaReadMode mode)
{
    u32 reg;

    reg = 0;
    SET_REG_FIELD(693, reg, 2, 0, mode);
    SET_REG_FIELD(693, reg, 1, 2, 1);
    GX_SET_PE_REG(4, reg);
}

void GXPokeAlphaUpdate(GXBool update_enable)
{
    u32 reg;

    reg = GX_GET_PE_REG(1);
    SET_REG_FIELD(704, reg, 1, 4, update_enable);
    GX_SET_PE_REG(1, reg);
}

void GXPokeBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor,
                     GXLogicOp op)
{
    u32 reg;

    reg = GX_GET_PE_REG(1);
    SET_REG_FIELD(720, reg, 1, 0, (type == GX_BM_BLEND) || (type == GX_BM_SUBTRACT));
    SET_REG_FIELD(721, reg, 1, 11, (type == GX_BM_SUBTRACT));
    SET_REG_FIELD(723, reg, 1, 1, (type == GX_BM_LOGIC));
    SET_REG_FIELD(724, reg, 4, 12, op);
    SET_REG_FIELD(725, reg, 3, 8, src_factor);
    SET_REG_FIELD(726, reg, 3, 5, dst_factor);
    SET_REG_FIELD(726, reg, 8, 24, 0x41);
    GX_SET_PE_REG(1, reg);
}

void GXPokeColorUpdate(GXBool update_enable)
{
    u32 reg;

    reg = GX_GET_PE_REG(1);
    SET_REG_FIELD(738, reg, 1, 3, update_enable);
    GX_SET_PE_REG(1, reg);
}

void GXPokeDstAlpha(GXBool enable, u8 alpha)
{
    u32 reg = 0;

    SET_REG_FIELD(747, reg, 8, 0, alpha);
    SET_REG_FIELD(748, reg, 1, 8, enable);
    GX_SET_PE_REG(2, reg);
}

void GXPokeDither(GXBool dither)
{
    u32 reg;

    reg = GX_GET_PE_REG(1);
    SET_REG_FIELD(758, reg, 1, 2, dither);
    GX_SET_PE_REG(1, reg);
}

void GXPokeZMode(GXBool compare_enable, GXCompare func, GXBool update_enable)
{
    u32 reg = 0;

    SET_REG_FIELD(767, reg, 1, 0, compare_enable);
    SET_REG_FIELD(768, reg, 3, 1, func);
    SET_REG_FIELD(769, reg, 1, 4, update_enable);
    GX_SET_PE_REG(0, reg);
}

GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback cb)
{
    GXDrawSyncCallback oldcb;
    BOOL enabled;

    oldcb = TokenCB;
    enabled = OSDisableInterrupts();
    TokenCB = cb;
    OSRestoreInterrupts(enabled);
    return oldcb;
}

static void GXTokenInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
    u16 token;
    OSContext exceptionContext;
    u32 reg;

    token = GX_GET_PE_REG(7);
    if (TokenCB != NULL)
    {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        TokenCB(token);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
    reg = GX_GET_PE_REG(5);
    SET_REG_FIELD(0, reg, 1, 2, 1);
    GX_SET_PE_REG(5, reg);
}

GXDrawDoneCallback GXSetDrawDoneCallback(GXDrawDoneCallback cb)
{
    GXDrawDoneCallback oldcb;
    BOOL enabled;

    oldcb = DrawDoneCB;
    enabled = OSDisableInterrupts();
    DrawDoneCB = cb;
    OSRestoreInterrupts(enabled);
    return oldcb;
}

static void GXFinishInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
    OSContext exceptionContext;
    u32 reg;

    reg = GX_GET_PE_REG(5);
    SET_REG_FIELD(0, reg, 1, 3, 1);
    GX_SET_PE_REG(5, reg);
    DrawDone = 1;
    if (DrawDoneCB != NULL)
    {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        DrawDoneCB();
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
    OSWakeupThread(&FinishQueue);
}

void __GXPEInit(void)
{
    u32 reg;
    __OSSetInterruptHandler(0x12, GXTokenInterruptHandler);
    __OSSetInterruptHandler(0x13, GXFinishInterruptHandler);
    OSInitThreadQueue(&FinishQueue);
    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);
    reg = GX_GET_PE_REG(5);
    SET_REG_FIELD(0, reg, 1, 2, 1);
    SET_REG_FIELD(0, reg, 1, 3, 1);
    SET_REG_FIELD(0, reg, 1, 0, 1);
    SET_REG_FIELD(0, reg, 1, 1, 1);
    GX_SET_PE_REG(5, reg);
}
