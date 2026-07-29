#ifndef XCM_H
#define XCM_H

#include <types.h>
#include "xColor.h"
#include "xBase.h"

struct xCreditsData
{
    U32 dummy;
};

struct xCMheader
{
    U32 magic; // 0x0
    U32 version; // 0x4
    U32 crdID; // 0x8
    U32 state; // 0xC
    F32 total_time; // 0x10
    U32 total_size; // 0x14
};

struct sxy
{
    F32 x; // 0x0
    F32 y; // 0x4
};

struct fade
{
    F32 start; // 0x0
    F32 end; // 0x4
};

struct xCMtextbox
{
    U32 font; // 0x0
    iColor_tag color; // 0x4
    sxy char_size; // 0x8
    sxy char_spacing; // 0x10
    sxy box; // 0x18
};

struct xCMtexture
{
    U32 assetID; // 0x0
    iColor_tag color; // 0x4
    F32 x; // 0x8
    F32 y; // 0xC
    F32 w; // 0x10
    F32 h; // 0x14
    RwTexture* texture; // 0x18
    U32 pad; // 0x1C
};

struct xCMpreset
{
    U16 num; // 0x0
    U16 align; // 0x2
    F32 delay; // 0x4
    F32 innerspace; // 0x8
    xCMtextbox box[2]; // 0xC
};

struct xCMhunk
{
    U32 hunk_size; // 0x0
    U32 preset; // 0x4
    F32 t0; // 0x8
    F32 t1; // 0xC
    char* text1; // 0x10
    char* text2; // 0x14
};

struct xCMcredits
{
    U32 credits_size; // 0x0
    F32 len; // 0x4
    U32 flags; // 0x8
    sxy in; // 0xC
    sxy out; // 0x14
    F32 scroll_rate; // 0x1C
    F32 lifetime; // 0x20
    fade fin; // 0x24
    fade fout; // 0x2C
    U32 num_presets; // 0x34
};

void xCMupdate(F32 dt);
void xCMrender();
void xCMstart(xCreditsData* data, F32, xBase* parent);
void xCMstop();

#endif
