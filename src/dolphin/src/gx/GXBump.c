#include <dolphin/gx.h>
#include <dolphin/os.h>

#include <gx/__gx.h>

#if DEBUG
#define GX_WRITE_SOME_REG5(a, b)                                                                   \
    do                                                                                             \
    {                                                                                              \
        GX_WRITE_U8(a);                                                                            \
        GX_WRITE_U32(b);                                                                           \
        __gxVerif->rasRegs[(b >> 24) & 0xFF] = b;                                                  \
    } while (0)
#else
#define GX_WRITE_SOME_REG5(a, b)                                                                   \
    do                                                                                             \
    {                                                                                              \
        GX_WRITE_U8(a);                                                                            \
        GX_WRITE_U32(b);                                                                           \
    } while (0)
#endif

void GXSetTevIndirect(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexFormat format,
                      GXIndTexBiasSel bias_sel, GXIndTexMtxID matrix_sel, GXIndTexWrap wrap_s,
                      GXIndTexWrap wrap_t, GXBool add_prev, GXBool utc_lod,
                      GXIndTexAlphaSel alpha_sel)
{
    u32 reg;

    CHECK_GXBEGIN(146, "GXInitIndTexture");
    reg = 0;
    SET_REG_FIELD(148, reg, 2, 0, ind_stage);
    SET_REG_FIELD(149, reg, 2, 2, format);
    SET_REG_FIELD(150, reg, 3, 4, bias_sel);
    SET_REG_FIELD(151, reg, 2, 7, alpha_sel);
    SET_REG_FIELD(152, reg, 4, 9, matrix_sel);
    SET_REG_FIELD(153, reg, 3, 13, wrap_s);
    SET_REG_FIELD(154, reg, 3, 16, wrap_t);
    SET_REG_FIELD(155, reg, 1, 19, utc_lod);
    SET_REG_FIELD(156, reg, 1, 20, add_prev);
    SET_REG_FIELD(157, reg, 8, 24, tev_stage + 16);
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, reg);
    __GXData->bpSentNot = 0;
}

void GXSetIndTexMtx(GXIndTexMtxID mtx_id, const f32 offset[2][3], s8 scale_exp)
{
    s32 mtx[6];
    u32 reg;
    u32 id;

    CHECK_GXBEGIN(186, "GXSetIndTexMtx");

    switch (mtx_id)
    {
    case GX_ITM_0:
    case GX_ITM_1:
    case GX_ITM_2:
        id = mtx_id - 1;
        break;
    case GX_ITM_S0:
    case GX_ITM_S1:
    case GX_ITM_S2:
        id = mtx_id - 5;
        break;
    case GX_ITM_T0:
    case GX_ITM_T1:
    case GX_ITM_T2:
        id = mtx_id - 9;
        break;
    default:
        id = 0;
        break;
    }

    mtx[0] = (int)(1024.0f * offset[0][0]) & 0x7FF;
    mtx[1] = (int)(1024.0f * offset[1][0]) & 0x7FF;
    scale_exp += 17;
    reg = 0;
    SET_REG_FIELD(208, reg, 11, 0, mtx[0]);
    SET_REG_FIELD(209, reg, 11, 11, mtx[1]);
    SET_REG_FIELD(210, reg, 2, 22, scale_exp & 3);
    SET_REG_FIELD(211, reg, 8, 24, id * 3 + 6);
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, reg);

    mtx[2] = (int)(1024.0f * offset[0][1]) & 0x7FF;
    mtx[3] = (int)(1024.0f * offset[1][1]) & 0x7FF;
    reg = 0;
    SET_REG_FIELD(217, reg, 11, 0, mtx[2]);
    SET_REG_FIELD(218, reg, 11, 11, mtx[3]);
    SET_REG_FIELD(219, reg, 2, 22, (scale_exp >> 2) & 3);
    SET_REG_FIELD(220, reg, 8, 24, id * 3 + 7);
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, reg);

    mtx[4] = (int)(1024.0f * offset[0][2]) & 0x7FF;
    mtx[5] = (int)(1024.0f * offset[1][2]) & 0x7FF;
    reg = 0;
    SET_REG_FIELD(226, reg, 11, 0, mtx[4]);
    SET_REG_FIELD(227, reg, 11, 11, mtx[5]);
    SET_REG_FIELD(228, reg, 2, 22, (scale_exp >> 4) & 3);
    SET_REG_FIELD(229, reg, 8, 24, id * 3 + 8);
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, reg);

    __GXData->bpSentNot = 0;
}

void GXSetIndTexCoordScale(GXIndTexStageID ind_state, GXIndTexScale scale_s, GXIndTexScale scale_t)
{
    CHECK_GXBEGIN(249, "GXSetIndTexScale");

    switch (ind_state)
    {
    case GX_INDTEXSTAGE0:
        SET_REG_FIELD(253, __GXData->IndTexScale0, 4, 0, scale_s);
        SET_REG_FIELD(254, __GXData->IndTexScale0, 4, 4, scale_t);
        SET_REG_FIELD(254, __GXData->IndTexScale0, 8, 24, 0x25);
        GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->IndTexScale0);
        break;
    case GX_INDTEXSTAGE1:
        SET_REG_FIELD(259, __GXData->IndTexScale0, 4, 8, scale_s);
        SET_REG_FIELD(260, __GXData->IndTexScale0, 4, 12, scale_t);
        SET_REG_FIELD(260, __GXData->IndTexScale0, 8, 24, 0x25);
        GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->IndTexScale0);
        break;
    case GX_INDTEXSTAGE2:
        SET_REG_FIELD(265, __GXData->IndTexScale1, 4, 0, scale_s);
        SET_REG_FIELD(266, __GXData->IndTexScale1, 4, 4, scale_t);
        SET_REG_FIELD(266, __GXData->IndTexScale1, 8, 24, 0x26);
        GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->IndTexScale1);
        break;
    case GX_INDTEXSTAGE3:
        SET_REG_FIELD(0x10F, __GXData->IndTexScale1, 4, 8, scale_s);
        SET_REG_FIELD(0x110, __GXData->IndTexScale1, 4, 12, scale_t);
        SET_REG_FIELD(0x110, __GXData->IndTexScale1, 8, 24, 0x26);
        GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->IndTexScale1);
        break;
    default:

        break;
    }
    __GXData->bpSentNot = 0;
}

void GXSetIndTexOrder(GXIndTexStageID ind_stage, GXTexCoordID tex_coord, GXTexMapID tex_map)
{
    CHECK_GXBEGIN(302, "GXSetIndTexOrder");

    if (tex_map == GX_TEXMAP_NULL)
    {
        tex_map = GX_TEXMAP0;
    }

    if (tex_coord == GX_TEXCOORD_NULL)
    {
        tex_coord = GX_TEXCOORD0;
    }

    switch (ind_stage)
    {
    case GX_INDTEXSTAGE0:
        SET_REG_FIELD(319, __GXData->iref, 3, 0, tex_map);
        SET_REG_FIELD(320, __GXData->iref, 3, 3, tex_coord);
        break;
    case GX_INDTEXSTAGE1:
        SET_REG_FIELD(323, __GXData->iref, 3, 6, tex_map);
        SET_REG_FIELD(324, __GXData->iref, 3, 9, tex_coord);
        break;
    case GX_INDTEXSTAGE2:
        SET_REG_FIELD(327, __GXData->iref, 3, 12, tex_map);
        SET_REG_FIELD(328, __GXData->iref, 3, 15, tex_coord);
        break;
    case GX_INDTEXSTAGE3:
        SET_REG_FIELD(331, __GXData->iref, 3, 18, tex_map);
        SET_REG_FIELD(332, __GXData->iref, 3, 21, tex_coord);
        break;
    default:
        break;
    }
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->iref);
    __GXData->dirtyState |= 3;
    __GXData->bpSentNot = 0;
}

void GXSetNumIndStages(u8 nIndStages)
{
    CHECK_GXBEGIN(353, "GXSetNumIndStages");

    SET_REG_FIELD(356, __GXData->genMode, 3, 16, nIndStages);
    __GXData->dirtyState |= 6;
}

#pragma dont_inline on
void GXSetTevDirect(GXTevStageID tev_stage)
{
    CHECK_GXBEGIN(373, "GXSetTevDirect");
    GXSetTevIndirect(tev_stage, GX_INDTEXSTAGE0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF, GX_ITW_OFF,
                     GX_ITW_OFF, GX_FALSE, GX_FALSE, GX_ITBA_OFF);
}

#pragma dont_inline off

void __GXUpdateBPMask(void)
{
}

void __GXFlushTextureState(void)
{
    GX_WRITE_SOME_REG5(GX_LOAD_BP_REG, __GXData->bpMask);
    __GXData->bpSentNot = 0;
}
