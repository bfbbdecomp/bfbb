#include "xVec3.h"
#include "xMath3.h"
#include "xParEmitter.h"

#include "zNPCFXCinematic.h"

#include <types.h>

static S32 init = 0;

static const F32 zero = 0.0f;            
static const F32 addVal = 20.0f;         
static const F32 fillVec3Val = 5.0f;


void zNPCFXShutdown()
{
}

void zNPCFXCinematic_Init()
{
    if (!init)
    {
        init = 1;
    }
}

void NCIN_Par_BPLANK_JET_1_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_BPLANK_JET_1");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_JET_2_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_BPLANK_JET_2");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_FLAMES_1_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_FLAMES_1");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_FLAMES_2_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_FLAMES_2");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_JET_1_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_JET_1");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_JET_2_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_JET_2");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_SMOKE_1_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_SMOKE_1");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_BPLANK_SBB_SMOKE_2_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_SBB_SMOKE_2");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_CIN_BIGDUP_SMOKE_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_CIN_BIGUP_SMOKE");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_CIN_BIGDUP_SPAWN_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_CIN_BIGUP_SPAWN");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Par_CIN_PLATFORM_JETS_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        fxrec->fxdata.pardata.emitter = zParEmitterFind("PAREMIT_CIN_PLATFORM_JETS");

        if (fxrec->fxdata.pardata.emitter->tasset)
        {
            if (fxrec->fxdata.pardata.emitter->tasset->emit_type != 15)
            {
                fxrec->fxdata.pardata.emitter = NULL;
            }
        }
    }

    if (fxrec->fxdata.pardata.emitter == NULL)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    F32& float_accum = fxrec->pos_A[1].y;

    if (float_accum <  0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCIN_Generic_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }
}

void NCIN_BubSlam(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (!(fxrec->flg_stat & 2))
    {
    return;
    }

    switch (fxrec->typ_ncinfx)
    {
    case 3:
        zFX_SpawnBubbleSlam(&fxrec->pos_A[0], 64, fxrec->tym_beg, fxrec->tym_end, fxrec->tym_end);
        break;
    case 2:
        zFX_SpawnBubbleSlam(&fxrec->pos_A[0], 128, fxrec->tym_beg, fxrec->tym_end, fxrec->tym_end);
        break;
    default:
        break;
    }
}

void NCIN_BubTrailBone_AR(const zCutsceneMgr*, NCINEntry* fxrec, RpAtomic*, RwMatrixTag*, U32 num_1, U32 num_2)
{
    S32 ifx = fxrec->pos_A[1].x;
    S32 ify = fxrec->pos_A[1].y;

    if (num_1 != ifx)
    {
        return;
    }

    xVec3 pos = fxrec->pos_A[2];

    if (ify > 0)
    {
        xVec3& offset = fxrec->pos_B[ify];
        pos += offset;
    }

    zFX_SpawnBubbleTrail(&pos, 1);
}

void NCIN_BubHit(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    else
    {
        if (fxrec->flg_stat & 2)
        {
            zFX_SpawnBubbleHit(&fxrec->pos_A[0], 16);
        }

        zFX_SpawnBubbleHit(&fxrec->pos_A[0], 3);
    }
}

void NCIN_Zapper(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;

        if (fxrec->idx_anim == 29 || fxrec->idx_anim == 8)
        {
            if (fxrec->fxdata.lytdata.lyt_zap != NULL)
            {
                zLightningKill(fxrec->fxdata.lytdata.lyt_zap);
            }

            fxrec->fxdata.lytdata.lyt_zap = NULL;
        }
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        memset(&fxrec->fxdata.arcdata.lightning, 0, sizeof(fxrec->fxdata.arcdata.lightning));
    }

    if (fxrec->fxdata.lytdata.lyt_zap == NULL)
    {
        fxrec->flg_stat |= 4;
    }
}

void NCIN_HammerShock(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        zFXHammer(&fxrec->pos_A[0]);
        fxrec->flg_stat |= 4;
    }
}


void clamp_bone_index(NCINEntry*, RpAtomic*)
{
}

void NPCCone::TextureSet(RwRaster* raster)
{
    rast_cone = raster;
}

void NPCCone::UVSliceSet(F32 u, F32 v)
{
    this->uv_tip[2] = u;
    this->uv_slice[1] = v; 
}

void NPCCone::UVBaseSet(F32 u, F32 v)
{
    this->uv_tip[0] = u;
    this->uv_tip[1] = v;
}

void NPCCone::ColorSet(RwRGBA top, RwRGBA bot)
{
    this->rgba_top = top;
    this->rgba_bot = bot;
}

void NPCCone::RadiusSet(F32 conefloat)
{
    rad_cone = conefloat;
}

void NPARMgmt::KillAll()
{
    this->cnt_active = 0;
}

