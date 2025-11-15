#include <dolphin/gx.h>
#include <dolphin/mtx.h>
#include <dolphin/os.h>

#include <gx/__gx.h>

inline void WriteProjPS(const register f32 proj[6], register volatile void* dest)
{
    register f32 p01, p23, p45;

    asm {
        psq_l  p01,  0(proj), 0, 0
        psq_l  p23,  8(proj), 0, 0
        psq_l  p45, 16(proj), 0, 0
        psq_st p01,  0(dest), 0, 0
        psq_st p23,  0(dest), 0, 0
        psq_st p45,  0(dest), 0, 0
    }
}

inline void Copy6Floats(const register f32 src[6], register volatile f32* dest)
{
    register f32 ps01, ps23, ps45;

    asm {
        psq_l  ps01,  0(src), 0, 0
        psq_l  ps23,  8(src), 0, 0
        psq_l  ps45, 16(src), 0, 0
        psq_st ps01,  0(dest), 0, 0
        psq_st ps23,  8(dest), 0, 0
        psq_st ps45, 16(dest), 0, 0
    }
}

inline void __GXSetProjection(void)
{
    u32 reg = 0x00061020;
    GX_WRITE_U8(0x10);
    GX_WRITE_U32(reg);
#if DEBUG
    GX_WRITE_XF_REG_F(32, __GXData->projMtx[0]);
    GX_WRITE_XF_REG_F(33, __GXData->projMtx[1]);
    GX_WRITE_XF_REG_F(34, __GXData->projMtx[2]);
    GX_WRITE_XF_REG_F(35, __GXData->projMtx[3]);
    GX_WRITE_XF_REG_F(36, __GXData->projMtx[4]);
    GX_WRITE_XF_REG_F(37, __GXData->projMtx[5]);
    GX_WRITE_XF_REG_2(38, __GXData->projType);
#else
    WriteProjPS(__GXData->projMtx, (volatile void*)GXFIFO_ADDR);
    GX_WRITE_U32(__GXData->projType);
#endif
}

void GXSetProjection(Mtx44 mtx, GXProjectionType type)
{
    CHECK_GXBEGIN(295, "GXSetProjection");

    __GXData->projType = type;
    __GXData->projMtx[0] = mtx[0][0];
    __GXData->projMtx[2] = mtx[1][1];
    __GXData->projMtx[4] = mtx[2][2];
    __GXData->projMtx[5] = mtx[2][3];
    if (type == GX_ORTHOGRAPHIC)
    {
        __GXData->projMtx[1] = mtx[0][3];
        __GXData->projMtx[3] = mtx[1][3];
    }
    else
    {
        __GXData->projMtx[1] = mtx[0][2];
        __GXData->projMtx[3] = mtx[1][2];
    }

    __GXSetProjection();
    __GXData->bpSentNot = 1;
}

void GXSetProjectionv(const f32* ptr)
{
    CHECK_GXBEGIN(339, "GXSetProjectionv");

    __GXData->projType = ptr[0] == 0.0f ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC;

#if DEBUG
    __GXData->projMtx[0] = ptr[1];
    __GXData->projMtx[1] = ptr[2];
    __GXData->projMtx[2] = ptr[3];
    __GXData->projMtx[3] = ptr[4];
    __GXData->projMtx[4] = ptr[5];
    __GXData->projMtx[5] = ptr[6];
#else
    Copy6Floats(&ptr[1], __GXData->projMtx);
#endif

    __GXSetProjection();
    __GXData->bpSentNot = 1;
}

#define qr0 0

void GXGetProjectionv(f32* ptr)
{
    ptr[0] = (u32)__GXData->projType != GX_PERSPECTIVE ? 1.0f : 0.0f;

#if DEBUG
    ptr[1] = __GXData->projMtx[0];
    ptr[2] = __GXData->projMtx[1];
    ptr[3] = __GXData->projMtx[2];
    ptr[4] = __GXData->projMtx[3];
    ptr[5] = __GXData->projMtx[4];
    ptr[6] = __GXData->projMtx[5];
#else
    Copy6Floats(__GXData->projMtx, &ptr[1]);
#endif
}

inline void WriteMTXPS4x3(const register f32 mtx[3][4], register volatile f32* dest)
{
    register f32 a00_a01;
    register f32 a02_a03;
    register f32 a10_a11;
    register f32 a12_a13;
    register f32 a20_a21;
    register f32 a22_a23;

    asm {
        psq_l a00_a01, 0x00(mtx), 0, qr0
        psq_l a02_a03, 0x08(mtx), 0, qr0
        psq_l a10_a11, 0x10(mtx), 0, qr0
        psq_l a12_a13, 0x18(mtx), 0, qr0
        psq_l a20_a21, 0x20(mtx), 0, qr0
        psq_l a22_a23, 0x28(mtx), 0, qr0
        psq_st a00_a01, 0(dest), 0, qr0
        psq_st a02_a03, 0(dest), 0, qr0
        psq_st a10_a11, 0(dest), 0, qr0
        psq_st a12_a13, 0(dest), 0, qr0
        psq_st a20_a21, 0(dest), 0, qr0
        psq_st a22_a23, 0(dest), 0, qr0
    }
}

inline void WriteMTXPS3x3from3x4(register f32 mtx[3][4], register volatile f32* dest)
{
    register f32 a00_a01;
    register f32 a02_a03;
    register f32 a10_a11;
    register f32 a12_a13;
    register f32 a20_a21;
    register f32 a22_a23;

    asm {
        psq_l  a00_a01, 0x00(mtx), 0, qr0
        lfs    a02_a03, 0x08(mtx)
        psq_l  a10_a11, 0x10(mtx), 0, qr0
        lfs    a12_a13, 0x18(mtx)
        psq_l  a20_a21, 0x20(mtx), 0, qr0
        lfs    a22_a23, 0x28(mtx)
        psq_st a00_a01, 0(dest), 0, qr0
        stfs   a02_a03, 0(dest)
        psq_st a10_a11, 0(dest), 0, qr0
        stfs   a12_a13, 0(dest)
        psq_st a20_a21, 0(dest), 0, qr0
        stfs   a22_a23, 0(dest)
    }
}

inline void WriteMTXPS3x3(register f32 mtx[3][3], register volatile f32* dest)
{
    register f32 a00_a01;
    register f32 a02_a10;
    register f32 a11_a12;
    register f32 a20_a21;
    register f32 a22_nnn;

    asm {
        psq_l a00_a01, 0x00(mtx), 0, qr0
        psq_l a02_a10, 0x08(mtx), 0, qr0
        psq_l a11_a12, 0x10(mtx), 0, qr0
        psq_l a20_a21, 0x18(mtx), 0, qr0
        lfs   a22_nnn, 0x20(mtx)
        psq_st a00_a01, 0(dest), 0, qr0
        psq_st a02_a10, 0(dest), 0, qr0
        psq_st a11_a12, 0(dest), 0, qr0
        psq_st a20_a21, 0(dest), 0, qr0
        stfs   a22_nnn, 0(dest)
    }
}

inline void WriteMTXPS4x2(const register f32 mtx[2][4], register volatile f32* dest)
{
    register f32 a00_a01;
    register f32 a02_a03;
    register f32 a10_a11;
    register f32 a12_a13;

    asm {
        psq_l a00_a01, 0x00(mtx), 0, qr0
        psq_l a02_a03, 0x08(mtx), 0, qr0
        psq_l a10_a11, 0x10(mtx), 0, qr0
        psq_l a12_a13, 0x18(mtx), 0, qr0
        psq_st a00_a01, 0(dest), 0, qr0
        psq_st a02_a03, 0(dest), 0, qr0
        psq_st a10_a11, 0(dest), 0, qr0
        psq_st a12_a13, 0(dest), 0, qr0
    }
}

#define GX_WRITE_MTX_ELEM(addr, value)                                                             \
    do                                                                                             \
    {                                                                                              \
        f32 xfData = (value);                                                                      \
        GX_WRITE_F32(value);                                                                       \
        VERIF_MTXLIGHT((addr), *(u32*)&xfData);                                                    \
    } while (0)

void GXLoadPosMtxImm(Mtx mtx, u32 id)
{
    u32 reg;
    u32 addr;

    CHECK_GXBEGIN(507, "GXLoadPosMtxImm");

    addr = id * 4;
    reg = addr | 0xB0000;

    GX_WRITE_U8(0x10);
    GX_WRITE_U32(reg);
#if DEBUG
    GX_WRITE_MTX_ELEM(addr + 0, mtx[0][0]);
    GX_WRITE_MTX_ELEM(addr + 1, mtx[0][1]);
    GX_WRITE_MTX_ELEM(addr + 2, mtx[0][2]);
    GX_WRITE_MTX_ELEM(addr + 3, mtx[0][3]);
    GX_WRITE_MTX_ELEM(addr + 4, mtx[1][0]);
    GX_WRITE_MTX_ELEM(addr + 5, mtx[1][1]);
    GX_WRITE_MTX_ELEM(addr + 6, mtx[1][2]);
    GX_WRITE_MTX_ELEM(addr + 7, mtx[1][3]);
    GX_WRITE_MTX_ELEM(addr + 8, mtx[2][0]);
    GX_WRITE_MTX_ELEM(addr + 9, mtx[2][1]);
    GX_WRITE_MTX_ELEM(addr + 10, mtx[2][2]);
    GX_WRITE_MTX_ELEM(addr + 11, mtx[2][3]);
#else
    WriteMTXPS4x3(mtx, &GXWGFifo.f32);
#endif
}

void GXLoadNrmMtxImm(Mtx mtx, u32 id)
{
    u32 reg;
    u32 addr;

    CHECK_GXBEGIN(588, "GXLoadNrmMtxImm");

    addr = id * 3 + 0x400;
    reg = addr | 0x80000;

    GX_WRITE_U8(0x10);
    GX_WRITE_U32(reg);
#if DEBUG
    GX_WRITE_MTX_ELEM(addr + 0, mtx[0][0]);
    GX_WRITE_MTX_ELEM(addr + 1, mtx[0][1]);
    GX_WRITE_MTX_ELEM(addr + 2, mtx[0][2]);
    GX_WRITE_MTX_ELEM(addr + 3, mtx[1][0]);
    GX_WRITE_MTX_ELEM(addr + 4, mtx[1][1]);
    GX_WRITE_MTX_ELEM(addr + 5, mtx[1][2]);
    GX_WRITE_MTX_ELEM(addr + 6, mtx[2][0]);
    GX_WRITE_MTX_ELEM(addr + 7, mtx[2][1]);
    GX_WRITE_MTX_ELEM(addr + 8, mtx[2][2]);
#else
    WriteMTXPS3x3from3x4((void*)mtx, &GXWGFifo.f32);
#endif
}

void GXSetCurrentMtx(u32 id)
{
    CHECK_GXBEGIN(708, "GXSetCurrentMtx");
    SET_REG_FIELD(712, __GXData->matIdxA, 6, 0, id);
    __GXSetMatrixIndex(GX_VA_PNMTXIDX);
}

void GXLoadTexMtxImm(f32 mtx[][4], u32 id, GXTexMtxType type)
{
    u32 reg;
    u32 addr;
    u32 count;

    CHECK_GXBEGIN(741, "GXLoadTexMtxImm");

    if (id >= GX_PTTEXMTX0)
    {
        addr = (id - GX_PTTEXMTX0) * 4 + 0x500;
    }
    else
    {
        addr = id * 4;
    }
    count = (type == GX_MTX2x4) ? 8 : 12;
    reg = addr | ((count - 1) << 16);

    GX_WRITE_U8(0x10);
    GX_WRITE_U32(reg);
#if DEBUG
    GX_WRITE_MTX_ELEM(addr + 0, mtx[0][0]);
    GX_WRITE_MTX_ELEM(addr + 1, mtx[0][1]);
    GX_WRITE_MTX_ELEM(addr + 2, mtx[0][2]);
    GX_WRITE_MTX_ELEM(addr + 3, mtx[0][3]);
    GX_WRITE_MTX_ELEM(addr + 4, mtx[1][0]);
    GX_WRITE_MTX_ELEM(addr + 5, mtx[1][1]);
    GX_WRITE_MTX_ELEM(addr + 6, mtx[1][2]);
    GX_WRITE_MTX_ELEM(addr + 7, mtx[1][3]);
    if (type == GX_MTX3x4)
    {
        GX_WRITE_MTX_ELEM(addr + 8, mtx[2][0]);
        GX_WRITE_MTX_ELEM(addr + 9, mtx[2][1]);
        GX_WRITE_MTX_ELEM(addr + 10, mtx[2][2]);
        GX_WRITE_MTX_ELEM(addr + 11, mtx[2][3]);
    }
#else
    if (type == GX_MTX3x4)
    {
        WriteMTXPS4x3(mtx, &GXWGFifo.f32);
    }
    else
    {
        WriteMTXPS4x2(mtx, &GXWGFifo.f32);
    }
#endif
}

void __GXSetViewport(void)
{
    f32 sx;
    f32 sy;
    f32 sz;
    f32 ox;
    f32 oy;
    f32 oz;
    f32 zmin;
    f32 zmax;
    u32 reg;

    sx = __GXData->vpWd / 2.0f;
    sy = -__GXData->vpHt / 2.0f;
    ox = 342.0f + (__GXData->vpLeft + (__GXData->vpWd / 2.0f));
    oy = 342.0f + (__GXData->vpTop + (__GXData->vpHt / 2.0f));

    zmin = __GXData->vpNearz * __GXData->zScale;
    zmax = __GXData->vpFarz * __GXData->zScale;

    sz = zmax - zmin;
    oz = zmax + __GXData->zOffset;

    reg = 0x5101A;
    GX_WRITE_U8(0x10);
    GX_WRITE_U32(reg);
    GX_WRITE_XF_REG_F(26, sx);
    GX_WRITE_XF_REG_F(27, sy);
    GX_WRITE_XF_REG_F(28, sz);
    GX_WRITE_XF_REG_F(29, ox);
    GX_WRITE_XF_REG_F(30, oy);
    GX_WRITE_XF_REG_F(31, oz);
}

void GXSetViewportJitter(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz, u32 field)
{
    CHECK_GXBEGIN(903, "GXSetViewport"); // not the correct function name

    if (field == 0)
    {
        top -= 0.5f;
    }

    __GXData->vpLeft = left;
    __GXData->vpTop = top;
    __GXData->vpWd = wd;
    __GXData->vpHt = ht;
    __GXData->vpNearz = nearz;
    __GXData->vpFarz = farz;

    __GXSetViewport();
    __GXData->bpSentNot = 1;
}

void GXSetViewport(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz)
{
    GXSetViewportJitter(left, top, wd, ht, nearz, farz, 1);
}

#define GX_WRITE_XF_REG_F_(addr, value)                                                            \
    do                                                                                             \
    {                                                                                              \
        GX_WRITE_U8(0x10);                                                                         \
        GX_WRITE_U32(0x1000 + (addr));                                                             \
        {                                                                                          \
            f32 xfData = (value);                                                                  \
            GX_WRITE_F32(value);                                                                   \
            VERIF_XF_REG_alt(addr, *(u32*)&xfData);                                                \
        }                                                                                          \
    } while (0)

void GXSetScissor(u32 left, u32 top, u32 wd, u32 ht)
{
    u32 tp;
    u32 lf;
    u32 bm;
    u32 rt;

    CHECK_GXBEGIN(1048, "GXSetScissor");

    tp = top + 342;
    lf = left + 342;
    bm = tp + ht - 1;
    rt = lf + wd - 1;

    SET_REG_FIELD(1059, __GXData->suScis0, 11, 0, tp);
    SET_REG_FIELD(1060, __GXData->suScis0, 11, 12, lf);
    SET_REG_FIELD(1062, __GXData->suScis1, 11, 0, bm);
    SET_REG_FIELD(1063, __GXData->suScis1, 11, 12, rt);

    GX_WRITE_RAS_REG(__GXData->suScis0);
    GX_WRITE_RAS_REG(__GXData->suScis1);
    __GXData->bpSentNot = 0;
}

void GXSetScissorBoxOffset(s32 x_off, s32 y_off)
{
    u32 reg = 0;
    u32 hx;
    u32 hy;

    CHECK_GXBEGIN(1119, "GXSetScissorBoxOffset");

    hx = (u32)(x_off + 342) >> 1;
    hy = (u32)(y_off + 342) >> 1;

    SET_REG_FIELD(1129, reg, 10, 0, hx);
    SET_REG_FIELD(1130, reg, 10, 10, hy);
    SET_REG_FIELD(1131, reg, 8, 24, 0x59);
    GX_WRITE_RAS_REG(reg);
    __GXData->bpSentNot = 0;
}

void GXSetClipMode(GXClipMode mode)
{
    CHECK_GXBEGIN(1151, "GXSetClipMode");
    GX_WRITE_XF_REG(5, mode);
    __GXData->bpSentNot = 1;
}

void __GXSetMatrixIndex(GXAttr matIdxAttr)
{
    // Function should be equivalent, but there seems to be a reg issue.
    // The "__GXData->matIdxA" shouldn't show up twice in asm
    // But it is for some reason.
    if (matIdxAttr < GX_VA_TEX4MTXIDX)
    {
        GX_WRITE_SOME_REG4(8, 0x30, __GXData->matIdxA, -12);
        GX_WRITE_XF_REG(24, __GXData->matIdxA);
    }
    else
    {
        GX_WRITE_SOME_REG4(8, 0x40, __GXData->matIdxB, -12);
        GX_WRITE_XF_REG(25, __GXData->matIdxB);
    }
    __GXData->bpSentNot = 1;
}
