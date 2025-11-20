#include <math.h>
#include <dolphin/gx.h>
#include <dolphin/os.h>
#include <dolphin/gx/gxpixel.h>
#include <dolphin/gx/GXStruct.h>

#include <gx/__gx.h>

// TODO: Fix Magic numbers in the GX_SET_REG calls
// These are supposed to be enums
void GXSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color)
{
    f32 a, c;
    u32 a_bits, c_bits;

    u32 fogColorReg = 0;
    u32 fogParamReg0 = 0;
    u32 fogParamReg1 = 0;
    u32 fogParamReg2 = 0;
    u32 fogParamReg3 = 0;

    u32 fsel = type & 7;
    BOOL isOrtho = (type >> 3) & 1;

    if (isOrtho)
    {
        if (farz == nearz || endz == startz)
        {
            a = 0.0f;
            c = 0.0f;
        }
        else
        {
            a = (1.0f / (endz - startz)) * (farz - nearz);
            c = (1.0f / (endz - startz)) * (startz - nearz);
        }
    }
    else
    {
        f32 tmpA, tmpB, tmpC;
        u32 expB, magB, shiftB;

        if (farz == nearz || endz == startz)
        {
            tmpA = 0.0f;
            tmpB = 0.5f;
            tmpC = 0.0f;
        }
        else
        {
            tmpA = (farz * nearz) / ((farz - nearz) * (endz - startz));
            tmpB = farz / (farz - nearz);
            tmpC = startz / (endz - startz);
        }

        expB = 0;
        while (tmpB > 1.0)
        {
            tmpB /= 2.0f;
            expB++;
        }
        while (tmpB > 0.0f && tmpB < 0.5)
        {
            tmpB *= 2.0f;
            expB--;
        }

        a = tmpA / (1 << expB + 1);
        magB = 8388638.0f * tmpB;
        shiftB = expB + 1;
        c = tmpC;

        GX_SET_REG(fogParamReg1, magB, 8, 31);
        GX_SET_REG(fogParamReg2, shiftB, 27, 31);

        GX_SET_REG(fogParamReg1, 0xEF, 0, 7);
        GX_SET_REG(fogParamReg2, 0xF0, 0, 7);
    }

    a_bits = *(u32*)&a;
    c_bits = *(u32*)&c;

    GX_SET_REG(fogParamReg0, a_bits >> 12, 21, 31);
    GX_SET_REG(fogParamReg0, a_bits >> 23, 13, 20);
    GX_SET_REG(fogParamReg0, a_bits >> 31, 12, 12);

    GX_SET_REG(fogParamReg0, 0xEE, 0, 7);

    GX_SET_REG(fogParamReg3, c_bits >> 12, 21, 31);
    GX_SET_REG(fogParamReg3, c_bits >> 23, 13, 20);
    GX_SET_REG(fogParamReg3, c_bits >> 31, 12, 12);

    GX_SET_REG(fogParamReg3, isOrtho, 11, 11);
    GX_SET_REG(fogParamReg3, fsel, 8, 10);

    GX_SET_REG(fogParamReg3, 0xF1, 0, 7);

    GX_SET_REG(fogColorReg, color.b, 8 + 16, 31);
    GX_SET_REG(fogColorReg, color.g, (8 + 8), (31 - 8));
    GX_SET_REG(fogColorReg, color.r, (8 + 0), (31 - 16));
    GX_SET_REG(fogColorReg, 0xF2, 0, 7);

    GX_BP_LOAD_REG(fogParamReg0);
    GX_BP_LOAD_REG(fogParamReg1);
    GX_BP_LOAD_REG(fogParamReg2);
    GX_BP_LOAD_REG(fogParamReg3);
    GX_BP_LOAD_REG(fogColorReg);

    __GXData->bpSentNot = GX_FALSE;
}

// TODO: Fix Magic numbers in the GX_SET_REG calls
// These are supposed to be enums
void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table)
{
    u32 fogRangeReg;
    u32 fogRangeRegK;
    u32 i;

    if (enable)
    {
        for (i = 0; i < ARRAY_SIZE(table->fogVals); i += 2)
        {
            fogRangeRegK = 0;
            GX_SET_REG(fogRangeRegK, table->fogVals[i], 20, 31);
            GX_SET_REG(fogRangeRegK, table->fogVals[i + 1], 8, 19);
            GX_SET_REG(fogRangeRegK, 0xE9 + (i / 2), 0, 7);
            GX_BP_LOAD_REG(fogRangeRegK);
        }
    }

    fogRangeReg = 0;
    GX_SET_REG(fogRangeReg, center + 342, 22, 31);
    GX_SET_REG(fogRangeReg, enable, 21, 21);
    GX_SET_REG(fogRangeReg, 0xE8, 0, 7);
    GX_BP_LOAD_REG(fogRangeReg);

    __GXData->bpSentNot = GX_FALSE;
}

void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor,
                    GXLogicOp op)
{
    u32 reg;
    u32 blend_en;

    CHECK_GXBEGIN(375, "GXSetBlendMode");

    reg = __GXData->cmode0;

#if DEBUG
    blend_en = type == GX_BM_BLEND || type == GX_BM_SUBTRACT;
#endif

    SET_REG_FIELD(389, reg, 1, 11, (type == GX_BM_SUBTRACT));
#if DEBUG
    SET_REG_FIELD(392, reg, 1, 0, blend_en);
#else
    SET_REG_FIELD(392, reg, 1, 0, type);
#endif
    SET_REG_FIELD(393, reg, 1, 1, (type == GX_BM_LOGIC));
    SET_REG_FIELD(394, reg, 4, 12, op);
    SET_REG_FIELD(395, reg, 3, 8, src_factor);
    SET_REG_FIELD(396, reg, 3, 5, dst_factor);
    GX_WRITE_RAS_REG(reg);

    __GXData->cmode0 = reg;
    __GXData->bpSentNot = 0;
}

void GXSetColorUpdate(GXBool update_enable)
{
    u32 reg;
    CHECK_GXBEGIN(419, "GXSetColorUpdate");

    reg = __GXData->cmode0;

    SET_REG_FIELD(421, reg, 1, 3, update_enable);
    GX_WRITE_RAS_REG(reg);

    __GXData->cmode0 = reg;
    __GXData->bpSentNot = 0;
}

void GXSetAlphaUpdate(GXBool update_enable)
{
    u32 reg;
    CHECK_GXBEGIN(432, "GXSetAlphaUpdate");

    reg = __GXData->cmode0;

    SET_REG_FIELD(434, reg, 1, 4, update_enable);
    GX_WRITE_RAS_REG(reg);

    __GXData->cmode0 = reg;
    __GXData->bpSentNot = 0;
}

void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable)
{
    u32 reg;
    CHECK_GXBEGIN(459, "GXSetZMode");

    reg = __GXData->zmode;

    SET_REG_FIELD(462, reg, 1, 0, compare_enable);
    SET_REG_FIELD(463, reg, 3, 1, func);
    SET_REG_FIELD(464, reg, 1, 4, update_enable);
    GX_WRITE_RAS_REG(reg);

    __GXData->zmode = reg;
    __GXData->bpSentNot = 0;
}

void GXSetZCompLoc(GXBool before_tex)
{
    CHECK_GXBEGIN(474, "GXSetZCompLoc");
    SET_REG_FIELD(475, __GXData->peCtrl, 1, 6, before_tex);
    GX_WRITE_RAS_REG(__GXData->peCtrl);
    __GXData->bpSentNot = 0;
}

void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt)
{
    u32 oldPeCtrl;
    u8 aa;
    static u32 p2f[8] = { 0, 1, 2, 3, 4, 4, 4, 5 };

    CHECK_GXBEGIN(511, "GXSetPixelFmt");
    oldPeCtrl = __GXData->peCtrl;

    SET_REG_FIELD(517, __GXData->peCtrl, 3, 0, p2f[pix_fmt]);
    SET_REG_FIELD(518, __GXData->peCtrl, 3, 3, z_fmt);

    if (oldPeCtrl != __GXData->peCtrl)
    {
        GX_WRITE_RAS_REG(__GXData->peCtrl);
        if (pix_fmt == GX_PF_RGB565_Z16)
            aa = 1;
        else
            aa = 0;
        SET_REG_FIELD(527, __GXData->genMode, 1, 9, aa);
        __GXData->dirtyState |= 4;
    }

    if (p2f[pix_fmt] == 4)
    {
        SET_REG_FIELD(534, __GXData->cmode1, 2, 9, (pix_fmt - 4) & 0x3);
        SET_REG_FIELD(534, __GXData->cmode1, 8, 24, 0x42);
        GX_WRITE_RAS_REG(__GXData->cmode1);
    }

    __GXData->bpSentNot = 0;
}

void GXSetDither(GXBool dither)
{
    u32 reg;
    CHECK_GXBEGIN(556, "GXSetDither");

    reg = __GXData->cmode0;

    SET_REG_FIELD(559, reg, 1, 2, dither);
    GX_WRITE_RAS_REG(reg);

    __GXData->cmode0 = reg;
    __GXData->bpSentNot = 0;
}

void GXSetDstAlpha(GXBool enable, u8 alpha)
{
    u32 reg;
    CHECK_GXBEGIN(581, "GXSetDstAlpha");

    reg = __GXData->cmode1;

    SET_REG_FIELD(584, reg, 8, 0, alpha);
    SET_REG_FIELD(585, reg, 1, 8, enable);
    GX_WRITE_RAS_REG(reg);

    __GXData->cmode1 = reg;
    __GXData->bpSentNot = 0;
}

void GXSetFieldMask(GXBool odd_mask, GXBool even_mask)
{
    u32 reg;

    CHECK_GXBEGIN(608, "GXSetFieldMask");
    reg = 0;
    SET_REG_FIELD(610, reg, 1, 0, even_mask);
    SET_REG_FIELD(611, reg, 1, 1, odd_mask);
    SET_REG_FIELD(611, reg, 8, 24, 0x44);
    GX_WRITE_RAS_REG(reg);
    __GXData->bpSentNot = 0;
}

void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio)
{
    u32 reg;

    CHECK_GXBEGIN(637, "GXSetFieldMode");
    SET_REG_FIELD(641, __GXData->lpSize, 1, 22, half_aspect_ratio);
    GX_WRITE_RAS_REG(__GXData->lpSize);
    __GXFlushTextureState();
    reg = field_mode | 0x68000000;
    GX_WRITE_RAS_REG(reg);
    __GXFlushTextureState();
}
