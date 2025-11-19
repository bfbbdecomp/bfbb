#ifndef _DOLPHIN_GX
#define _DOLPHIN_GX

#include <dolphin/gx/GXEnum.h>
#include <dolphin/gx/GXStruct.h>

#include <dolphin/gx/GXBump.h>
#include <dolphin/gx/GXCommandList.h>
#include <dolphin/gx/GXCull.h>
#include <dolphin/gx/GXDispList.h>
#include <dolphin/gx/GXDraw.h>
#include <dolphin/gx/GXFifo.h>
#include <dolphin/gx/GXFrameBuffer.h>
#include <dolphin/gx/GXGeometry.h>
#include <dolphin/gx/GXGet.h>
#include <dolphin/gx/GXLighting.h>
#include <dolphin/gx/GXManage.h>
#include <dolphin/gx/GXMisc.h>
#include <dolphin/gx/GXPerf.h>
#include <dolphin/gx/GXPixel.h>
#include <dolphin/gx/GXTev.h>
#include <dolphin/gx/GXTexture.h>
#include <dolphin/gx/GXTransform.h>
#include <dolphin/gx/GXVert.h>

// TODO: Move these elsewhere

#define GX_BITFIELD_SET(field, pos, size, value) ((field) = GX_BITFIELD(field, pos, size, value))
#define GX_BITFIELD(field, pos, size, value)                                                       \
    (__rlwimi((field), (value), 31 - (pos) - (size) + 1, (pos), (pos) + (size)-1))
#define GX_SET_REG(reg, x, st, end) GX_BITFIELD_SET((reg), (st), ((end) - (st) + 1), (x))

#define GXCOLOR_AS_U32(color) (*((u32*)&(color)))
#define GX_BITFIELD_TRUNC(field, pos, size, value)                                                 \
    (__rlwimi((field), (value), 0, (pos), (pos) + (size)-1))
#define GX_SET_TRUNC(reg, x, st, end) GX_BITFIELD_TRUNC((reg), (st), ((end) - (st) + 1), (x))

#define GX_XF_LOAD_REG_HDR(addr)                                                                   \
    GXWGFifo.s8 = 0x10;                                                                            \
    GXWGFifo.s32 = (addr);

#define GX_XF_LOAD_REG(addr, data)                                                                 \
    GX_XF_LOAD_REG_HDR(addr);                                                                      \
    GXWGFifo.s32 = (data);

#define GX_BP_LOAD_REG(data)                                                                       \
    GXWGFifo.s8 = 0x61;                                                                            \
    GXWGFifo.s32 = (data);

#endif // _DOLPHIN_GX
