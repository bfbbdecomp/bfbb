#include "xVec3.h"
#include "xMath3.h"
#include "xParEmitter.h"

#include "zNPCFXCinematic.h"

#include <types.h>

static S32 init = 0;

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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
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

    if (float_accum < 0.0f)
    {
        U8 val = fxrec->fxdata.pardata.emitter->emit_pad[0];
        float_accum = 20.0f + val;
    }

    fxrec->pos_B[0] = 5.0f;
}

void NCINBeNosey::CanRenderNow()
{
    zCutsceneMgr* csnmgr;
    NCINEntry* fxtab;
    NCINEntry* nextrec;
    NCINEntry* fxrec;
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

void NCIN_BubTrailBone_AR(const zCutsceneMgr*, NCINEntry* fxrec, RpAtomic*, RwMatrixTag*, U32 num_1,
                          U32 num_2)
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

void NCIN_HammerStreak_Upd(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;

        xFXStreakStop(fxrec->fxdata.strkdata.sid_horz);
        xFXStreakStop(fxrec->fxdata.strkdata.sid_vert);

        fxrec->fxdata.strkdata.sid_horz = 57005;
        fxrec->fxdata.strkdata.sid_vert = 57005;

        return;
    }

    if (fxrec->flg_stat & 2)
    {
        en_npcstreak styp_h = NPC_STRK_HAMMERSMASH_HORZ;
        en_npcstreak styp_v = NPC_STRK_HAMMERSMASH_VERT;

        fxrec->fxdata.strkdata.sid_horz = NPCC_StreakCreate(styp_h);
        fxrec->fxdata.strkdata.sid_vert = NPCC_StreakCreate(styp_v);
    }
}

void NCIN_HammerStreak_AR(const zCutsceneMgr*, NCINEntry* fxrec, RpAtomic*, RwMatrixTag*, U32 num_1,
                          U32 num_2)
{
    if (num_2 != 2)
    {
        return;
    }

    U32 sid_vert = fxrec->fxdata.strkdata.sid_vert;
    U32 sid_horz = fxrec->fxdata.strkdata.sid_horz;
}

void NCIN_WaterSplash(const zCutsceneMgr*, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        const F32 splash_radius = -1.0f;

        NPCC_MakeASplash(&fxrec->pos_A[0], splash_radius);
        fxrec->flg_stat |= 4;
    }
}

void NCIN_HazProjShoot(const zCutsceneMgr* mgr, NCINEntry* fxrec, S32 param)
{
    if (param != 0)
    {
        fxrec->flg_stat |= 4;

        if (fxrec->fxdata.hazdata.npchaz->flg_hazard)
        {
            fxrec->fxdata.hazdata.npchaz->MarkForRecycle();
        }
        return;
    }

    if (fxrec->flg_stat & 2)
    {
        S32 type = fxrec->fxdata.hazdata.npchaz->typ_hazard;
        S32 haztype = 10;

        if (type == 11)
        {
            haztype = 18;
        }
        else if (type >= 10 && type < 13)
        {
            haztype = (type == 12) ? 16 : 10;
        }

        NPCHazard* haz = HAZ_Acquire();

        if (!haz)
        {
            return;
        }

        if (!haz->ConfigHelper((en_npchaz)haztype))
        {
            return;
        }

        haz->SetNPCOwner(NULL);
        fxrec->fxdata.hazdata.npchaz = haz;
        haz->flg_hazard &= ~128;

        xVec3 delta = fxrec->pos_B[0] - fxrec->pos_A[0];
        F32 len = delta.length();

        F32 height = fxrec->tym_beg - fxrec->tym_end;

        if (height < 0.01f)
        {
            height = 1.0f;
        }

        haz->pos_hazard = delta;
        haz->Start(&fxrec->pos_A[0], height);
    }

    if (fxrec->fxdata.hazdata.npchaz)
    {
        if (fxrec->fxdata.hazdata.npchaz->typ_hazard != 11)
        {
            fxrec->fxdata.hazdata.npchaz->flg_hazard &= ~0xF000;
        }
        else
        {
            fxrec->flg_stat |= 4;
        }
    }
}

void NCIN_HazTTSteam_Upd(const zCutsceneMgr* manager, NCINEntry* fxrec, S32 param)
{
}

void NCIN_HazTTSteam_AR(const zCutsceneMgr* cutsceneMgr, NCINEntry* fxrec, RpAtomic* atomic,
                        RwMatrixTag* matrix, U32 num_1, U32 num_2)
{
}

void NCIN_ArfDogBoom(const zCutsceneMgr*, NCINEntry*, S32)
{
}

void NCIN_ShieldPop(const zCutsceneMgr*, NCINEntry*, S32)
{
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
