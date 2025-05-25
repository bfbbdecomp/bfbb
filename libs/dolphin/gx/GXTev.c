#include <dolphin/gx.h>
#include <dolphin/os.h>

#include <dolphin/gx/__gx.h>

static struct
{
    u32 rid : 8;
    u32 dest : 2;
    u32 shift : 2;
    u32 clamp : 1;
    u32 sub : 1;
    u32 bias : 2;
    u32 sela : 4;
    u32 selb : 4;
    u32 selc : 4;
    u32 seld : 4;
} TEVCOpTableST0[5] = {
    { 192, 0, 0, 1, 0, 0, 15, 8, 10, 15 }, // modulate
    { 192, 0, 0, 1, 0, 0, 10, 8, 9, 15 }, // decal
    { 192, 0, 0, 1, 0, 0, 10, 12, 8, 15 }, // blend
    { 192, 0, 0, 1, 0, 0, 15, 15, 15, 8 }, // replace
    { 192, 0, 0, 1, 0, 0, 15, 15, 15, 10 }, // passclr
};

static struct
{
    u32 rid : 8;
    u32 dest : 2;
    u32 shift : 2;
    u32 clamp : 1;
    u32 sub : 1;
    u32 bias : 2;
    u32 sela : 4;
    u32 selb : 4;
    u32 selc : 4;
    u32 seld : 4;
} TEVCOpTableST1[5] = {
    { 192, 0, 0, 1, 0, 0, 15, 8, 0, 15 }, // modulate
    { 192, 0, 0, 1, 0, 0, 0, 8, 9, 15 }, // decal
    { 192, 0, 0, 1, 0, 0, 0, 12, 8, 15 }, // blend
    { 192, 0, 0, 1, 0, 0, 15, 15, 15, 8 }, // replace
    { 192, 0, 0, 1, 0, 0, 15, 15, 15, 0 }, // passclr
};

static struct
{
    u32 rid : 8;
    u32 dest : 2;
    u32 shift : 2;
    u32 clamp : 1;
    u32 sub : 1;
    u32 bias : 2;
    u32 sela : 3;
    u32 selb : 3;
    u32 selc : 3;
    u32 seld : 3;
    u32 swap : 2;
    u32 mode : 2;
} TEVAOpTableST0[5] = {
    { 193, 0, 0, 1, 0, 0, 7, 4, 5, 7, 0, 0 }, // modulate
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 5, 0, 0 }, // decal
    { 193, 0, 0, 1, 0, 0, 7, 4, 5, 7, 0, 0 }, // blend
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 4, 0, 0 }, // replace
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 5, 0, 0 }, // passclr
};

static struct
{
    u32 rid : 8;
    u32 dest : 2;
    u32 shift : 2;
    u32 clamp : 1;
    u32 sub : 1;
    u32 bias : 2;
    u32 sela : 3;
    u32 selb : 3;
    u32 selc : 3;
    u32 seld : 3;
    u32 swap : 2;
    u32 mode : 2;
} TEVAOpTableST1[5] = {
    { 193, 0, 0, 1, 0, 0, 7, 4, 0, 7, 0, 0 }, // modulate
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 0, 0, 0 }, // decal
    { 193, 0, 0, 1, 0, 0, 7, 4, 0, 7, 0, 0 }, // blend
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 4, 0, 0 }, // replace
    { 193, 0, 0, 1, 0, 0, 7, 7, 7, 0, 0, 0 }, // passclr
};

#define SOME_SET_REG_MACRO(reg, size, shift, val)                                                  \
    do                                                                                             \
    {                                                                                              \
        (reg) =                                                                                    \
            (u32)__rlwimi((u32)(reg), (val), (shift), (32 - (shift) - (size)), (31 - (shift)));    \
    } while (0);

void GXSetTevOp(GXTevStageID id, GXTevMode mode)
{
    u32* ctmp;
    u32* atmp;
    u32 tevReg;

    CHECK_GXBEGIN(420, "GXSetTevOp");

    if (id == GX_TEVSTAGE0)
    {
        ctmp = (u32*)TEVCOpTableST0 + mode;
        atmp = (u32*)TEVAOpTableST0 + mode;
    }
    else
    {
        ctmp = (u32*)TEVCOpTableST1 + mode;
        atmp = (u32*)TEVAOpTableST1 + mode;
    }

    tevReg = __GXData->tevc[id];
    tevReg = (*ctmp & ~0xFF000000) | (tevReg & 0xFF000000);
    GX_WRITE_RAS_REG(tevReg);
    __GXData->tevc[id] = tevReg;

    tevReg = __GXData->teva[id];
    tevReg = (*atmp & ~0xFF00000F) | (tevReg & 0xFF00000F);
    GX_WRITE_RAS_REG(tevReg);
    __GXData->teva[id] = tevReg;

    __GXData->bpSentNot = 0;
}

void GXSetTevColorIn(GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c,
                     GXTevColorArg d)
{
    u32 tevReg;

    CHECK_GXBEGIN(578, "GXSetTevColorIn");

    tevReg = __GXData->tevc[stage];
    SET_REG_FIELD(586, tevReg, 4, 12, a);
    SET_REG_FIELD(587, tevReg, 4, 8, b);
    SET_REG_FIELD(588, tevReg, 4, 4, c);
    SET_REG_FIELD(589, tevReg, 4, 0, d);

    GX_WRITE_RAS_REG(tevReg);
    __GXData->tevc[stage] = tevReg;
    __GXData->bpSentNot = 0;
}

void GXSetTevAlphaIn(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c,
                     GXTevAlphaArg d)
{
    u32 tevReg;

    CHECK_GXBEGIN(614, "GXSetTevAlphaIn");

    tevReg = __GXData->teva[stage];
    SET_REG_FIELD(622, tevReg, 3, 13, a);
    SET_REG_FIELD(623, tevReg, 3, 10, b);
    SET_REG_FIELD(624, tevReg, 3, 7, c);
    SET_REG_FIELD(625, tevReg, 3, 4, d);

    GX_WRITE_RAS_REG(tevReg);
    __GXData->teva[stage] = tevReg;
    __GXData->bpSentNot = 0;
}

void GXSetTevColorOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp,
                     GXTevRegID out_reg)
{
    u32 tevReg;

    CHECK_GXBEGIN(653, "GXSetTevColorOp");

    tevReg = __GXData->tevc[stage];
    SET_REG_FIELD(663, tevReg, 1, 18, op & 1);
    if (op <= 1)
    {
        SET_REG_FIELD(665, tevReg, 2, 20, scale);
        SET_REG_FIELD(666, tevReg, 2, 16, bias);
    }
    else
    {
        SET_REG_FIELD(668, tevReg, 2, 20, (op >> 1) & 3);
        SET_REG_FIELD(672, tevReg, 2, 16, 3);
    }
    SET_REG_FIELD(672, tevReg, 1, 19, clamp & 0xFF);
    SET_REG_FIELD(673, tevReg, 2, 22, out_reg);

    GX_WRITE_RAS_REG(tevReg);
    __GXData->tevc[stage] = tevReg;
    __GXData->bpSentNot = 0;
}

void GXSetTevAlphaOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp,
                     GXTevRegID out_reg)
{
    u32 tevReg;

    CHECK_GXBEGIN(699, "GXSetTevAlphaOp");

    tevReg = __GXData->teva[stage];
    SET_REG_FIELD(708, tevReg, 1, 18, op & 1);
    if (op <= 1)
    {
        SET_REG_FIELD(710, tevReg, 2, 20, scale);
        SET_REG_FIELD(711, tevReg, 2, 16, bias);
    }
    else
    {
        SET_REG_FIELD(713, tevReg, 2, 20, (op >> 1) & 3);
        SET_REG_FIELD(717, tevReg, 2, 16, 3);
    }
    SET_REG_FIELD(717, tevReg, 1, 19, clamp & 0xFF);
    SET_REG_FIELD(718, tevReg, 2, 22, out_reg);

    GX_WRITE_RAS_REG(tevReg);
    __GXData->teva[stage] = tevReg;
    __GXData->bpSentNot = 0;
}

void GXSetTevColor(GXTevRegID id, GXColor color)
{
    u32 rgba;
    u32 regRA;
    u32 regBG;

    CHECK_GXBEGIN(740, "GXSetTevColor");
    rgba = *(u32*)&color;

    regRA = (0xE0 + id * 2) << 24;
    SET_REG_FIELD(745, regRA, 8, 0, rgba >> 24);
    SET_REG_FIELD(746, regRA, 8, 12, rgba & 0xFF);

    regBG = (0xE1 + id * 2) << 24;
    SET_REG_FIELD(749, regBG, 8, 0, (rgba >> 8) & 0xFF);
    SET_REG_FIELD(750, regBG, 8, 12, (rgba >> 16) & 0xFF);

    GX_WRITE_RAS_REG(regRA);
    GX_WRITE_RAS_REG(regBG);
    GX_WRITE_RAS_REG(regBG);
    GX_WRITE_RAS_REG(regBG);

    __GXData->bpSentNot = 0;
}

void GXSetTevColorS10(GXTevRegID id, GXColorS10 color)
{
    u32 sRG;
    u32 sBA;
    u32 regRA;
    u32 regBG;

    CHECK_GXBEGIN(782, "GXSetTevColorS10");
    sRG = *(u32*)&color;
    sBA = *((u32*)&color + 1);

    regRA = (0xE0 + id * 2) << 24;
    SET_REG_FIELD(789, regRA, 11, 0, (sRG >> 16) & 0x7FF);
    SET_REG_FIELD(790, regRA, 11, 12, sBA & 0x7FF);

    regBG = (0xE1 + id * 2) << 24;
    SET_REG_FIELD(793, regBG, 11, 0, (sBA >> 16) & 0x7FF);
    SET_REG_FIELD(794, regBG, 11, 12, sRG & 0x7FF);

    GX_WRITE_RAS_REG(regRA);
    GX_WRITE_RAS_REG(regBG);
    GX_WRITE_RAS_REG(regBG);
    GX_WRITE_RAS_REG(regBG);

    __GXData->bpSentNot = 0;
}

void GXSetTevKColor(GXTevKColorID id, GXColor color)
{
    u32 rgba;
    u32 regRA;
    u32 regBG;

    CHECK_GXBEGIN(833, "GXSetTevKColor");
    rgba = *(u32*)&color;

    regRA = (0xE0 + id * 2) << 24;
    SET_REG_FIELD(838, regRA, 8, 0, rgba >> 24);
    SET_REG_FIELD(839, regRA, 8, 12, rgba & 0xFF);
    SET_REG_FIELD(839, regRA, 4, 20, 8);

    regBG = (0xE1 + id * 2) << 24;
    SET_REG_FIELD(843, regBG, 8, 0, (rgba >> 8) & 0xFF);
    SET_REG_FIELD(844, regBG, 8, 12, (rgba >> 16) & 0xFF);
    SET_REG_FIELD(845, regBG, 4, 20, 8);

    GX_WRITE_RAS_REG(regRA);
    GX_WRITE_RAS_REG(regBG);

    __GXData->bpSentNot = 0;
}

void GXSetTevKColorSel(GXTevStageID stage, GXTevKColorSel sel)
{
    u32* Kreg;

    CHECK_GXBEGIN(872, "GXSetTevKColorSel");

    Kreg = &__GXData->tevKsel[stage >> 1];
    if (stage & 1)
    {
        SET_REG_FIELD(0x36E, *Kreg, 5, 14, sel);
    }
    else
    {
        SET_REG_FIELD(0x370, *Kreg, 5, 4, sel);
    }

    GX_WRITE_RAS_REG(*Kreg);
    __GXData->bpSentNot = 0;
}

void GXSetTevKAlphaSel(GXTevStageID stage, GXTevKAlphaSel sel)
{
    u32* Kreg;

    CHECK_GXBEGIN(905, "GXSetTevKAlphaSel");

    Kreg = &__GXData->tevKsel[stage >> 1];
    if (stage & 1)
    {
        SET_REG_FIELD(911, *Kreg, 5, 19, sel);
    }
    else
    {
        SET_REG_FIELD(913, *Kreg, 5, 9, sel);
    }

    GX_WRITE_RAS_REG(*Kreg);
    __GXData->bpSentNot = 0;
}

void GXSetTevSwapMode(GXTevStageID stage, GXTevSwapSel ras_sel, GXTevSwapSel tex_sel)
{
    u32* pTevReg;

    CHECK_GXBEGIN(942, "GXSetTevSwapMode");

    pTevReg = &__GXData->teva[stage];
    SET_REG_FIELD(946, *pTevReg, 2, 0, ras_sel);
    SET_REG_FIELD(947, *pTevReg, 2, 2, tex_sel);

    GX_WRITE_RAS_REG(*pTevReg);
    __GXData->bpSentNot = 0;
}

void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green,
                           GXTevColorChan blue, GXTevColorChan alpha)
{
    u32* Kreg;
#if !DEBUG
    // not a real variable, but needed to match release
    int index = table * 2;
#endif

    CHECK_GXBEGIN(978, "GXSetTevSwapModeTable");

#if DEBUG
    Kreg = &__GXData->tevKsel[table * 2];
#else
    Kreg = &__GXData->tevKsel[index];
#endif
    SET_REG_FIELD(982, *Kreg, 2, 0, red);
    SET_REG_FIELD(983, *Kreg, 2, 2, green);

    GX_WRITE_RAS_REG(*Kreg);

    Kreg = &__GXData->tevKsel[table * 2 + 1];
    SET_REG_FIELD(987, *Kreg, 2, 0, blue);
    SET_REG_FIELD(988, *Kreg, 2, 2, alpha);

    GX_WRITE_RAS_REG(*Kreg);
    __GXData->bpSentNot = 0;
}

void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1)
{
    u32 reg;

    CHECK_GXBEGIN(1046, "GXSetAlphaCompare");
    reg = 0xF3000000;

    SET_REG_FIELD(1049, reg, 8, 0, ref0);
    SET_REG_FIELD(1050, reg, 8, 8, ref1);
    SET_REG_FIELD(1051, reg, 3, 16, comp0);
    SET_REG_FIELD(1052, reg, 3, 19, comp1);
    SET_REG_FIELD(1053, reg, 2, 22, op);

    GX_WRITE_RAS_REG(reg);
    __GXData->bpSentNot = 0;
}

void GXSetZTexture(GXZTexOp op, GXTexFmt fmt, u32 bias)
{
    u32 zenv0;
    u32 zenv1;
    u32 type;

    CHECK_GXBEGIN(1077, "GXSetZTexture");

    zenv0 = 0;
    SET_REG_FIELD(1080, zenv0, 24, 0, bias);
    SET_REG_FIELD(1081, zenv0, 8, 24, 0xF4);

    zenv1 = 0;
    switch (fmt)
    {
    case GX_TF_Z8:
        type = 0;
        break;
    case GX_TF_Z16:
        type = 1;
        break;
    case GX_TF_Z24X8:
        type = 2;
        break;
    default:
        type = 2;
        break;
    }

    SET_REG_FIELD(1092, zenv1, 2, 0, type);
    SET_REG_FIELD(1093, zenv1, 2, 2, op);
    SET_REG_FIELD(1094, zenv1, 8, 24, 0xF5);

    GX_WRITE_RAS_REG(zenv0);
    GX_WRITE_RAS_REG(zenv1);
    __GXData->bpSentNot = 0;
}

void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color)
{
    u32* ptref;
    u32 tmap;
    u32 tcoord;
    static int c2r[] = { 0, 1, 0, 1, 0, 1, 7, 5, 6 };

    CHECK_GXBEGIN(1131, "GXSetTevOrder");

    ptref = &__GXData->tref[stage / 2];
    __GXData->texmapId[stage] = map;

    tmap = map & ~GX_TEX_DISABLE;
    tmap = (tmap >= GX_MAX_TEXMAP) ? GX_TEXMAP0 : tmap;

    if (coord >= GX_MAX_TEXCOORD)
    {
        tcoord = GX_TEXCOORD0;
        __GXData->tevTcEnab = __GXData->tevTcEnab & ~(1 << stage);
    }
    else
    {
        tcoord = coord;
        __GXData->tevTcEnab = __GXData->tevTcEnab | (1 << stage);
    }

    if (stage & 1)
    {
        SET_REG_FIELD(1158, *ptref, 3, 12, tmap);
        SET_REG_FIELD(1159, *ptref, 3, 15, tcoord);
        SET_REG_FIELD(1161, *ptref, 3, 19, (color == GX_COLOR_NULL) ? 7 : c2r[color]);
        SET_REG_FIELD(1163, *ptref, 1, 18, (map != GX_TEXMAP_NULL && !(map & GX_TEX_DISABLE)));
    }
    else
    {
        SET_REG_FIELD(1166, *ptref, 3, 0, tmap);
        SET_REG_FIELD(1167, *ptref, 3, 3, tcoord);
        SET_REG_FIELD(1169, *ptref, 3, 7, (color == GX_COLOR_NULL) ? 7 : c2r[color]);
        SET_REG_FIELD(1171, *ptref, 1, 6, (map != GX_TEXMAP_NULL && !(map & GX_TEX_DISABLE)));
    }

    GX_WRITE_RAS_REG(*ptref);
    __GXData->bpSentNot = 0;
    __GXData->dirtyState |= 1;
}

void GXSetNumTevStages(u8 nStages)
{
    CHECK_GXBEGIN(1187, "GXSetNumTevStages");

    SET_REG_FIELD(1190, __GXData->genMode, 4, 10, nStages - 1);
    __GXData->dirtyState |= 4;
}
