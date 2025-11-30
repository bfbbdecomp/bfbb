#include "zNPCSupport.h"

#include <types.h>
#include <xstransvc.h>
#include <rtslerp.h>

#include "zGlobals.h"
#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"
#include "zNPCMgr.h"
#include "zNPCTypeRobot.h"
#include "zNPCFXCinematic.h"

#include "xMathInlines.h"
#include "xMath3.h"
#include "xUtil.h"
#include "xQuickCull.h"
#include "xCollide.h"

#define MAX_FIREWORK 32

NPCWidget g_npc_widgets[1] = {};
static U32 g_hash_uiwidgets[1] = { 0 };
static char* g_strz_uiwidgets[1] = { "MNU4 NPCTALK" };

static U32 sNPCSndFx[eNPCSnd_Total] = {};
static U32 sNPCSndID[eNPCSnd_Total] = {};
static F32 sNPCSndFxVolume[eNPCSnd_Total] = {};

S32 g_pc_playerInvisible;
static Firework g_fireworks[32];

F32 Firework::acc_thrust = 15.0f;
F32 Firework::acc_gravity = -10.0f;

void NPCSupport_Startup()
{
    zNPCHazard_Startup();
    zNPCGlyph_Startup();
    NPCWidget_Startup();
    NPCSupplement_Startup();
}

void NPCSupport_Shutdown()
{
    zNPCHazard_Shutdown();
    zNPCGlyph_Shutdown();
    NPCWidget_Shutdown();
    NPCSupplement_Shutdown();
}

void NPCSupport_ScenePrepare()
{
    zNPCHazard_ScenePrepare();
    zNPCGlyph_ScenePrepare();
    NPCWidget_ScenePrepare();
    NPCSupplement_ScenePrepare();
    Firework_ScenePrepare();
    NPCC_ForceTalkOk();
}

void NPCSupport_SceneFinish()
{
    zNPCHazard_SceneFinish();
    zNPCGlyph_SceneFinish();
    NPCWidget_SceneFinish();
    NPCSupplement_SceneFinish();
    Firework_SceneFinish();
}

void NPCSupport_ScenePostInit()
{
    zNPCHazard_ScenePostInit();
    zNPCGlyph_ScenePostInit();
    NPCWidget_ScenePostInit();
    NPCSupplement_ScenePostInit();
    zNPC_SNDInit();
}

void NPCSupport_SceneReset()
{
    zNPCHazard_SceneReset();
    zNPCGlyph_SceneReset();
    NPCWidget_SceneReset();
    NPCSupplement_SceneReset();
    Firework_SceneReset(0);
}

void NPCSupport_Timestep(F32 dt)
{
    zNPCGlyph_Timestep(dt);
    zNPCHazard_Timestep(dt);
    NPCSupplement_Timestep(dt);
    Firework_Timestep(dt);
}

void NPCWidget_Startup()
{
    for (S32 i = 0; i < NPC_WIDGE_NOMORE; i++)
    {
        g_hash_uiwidgets[i] = xStrHash(g_strz_uiwidgets[i]);
    }
}

void NPCWidget_Shutdown()
{
}

void NPCWidget_ScenePrepare()
{
}

void NPCWidget_SceneFinish()
{
    NPCWidget_SceneReset();
}

void NPCWidget_SceneReset() // Come back after more data is in
{
    g_npc_widgets->Reset();
}

void NPCWidget::Reset()
{
}

S32 NPCWidget::On(const zNPCCommon* npc, S32 theman)
{
    if ((!theman && !NPCIsTheLocker(npc)) && (((S32)IsLocked()) || (!Lock(npc))))
    {
        return 0;
    }
    if (IsVisible())
    {
        return 1;
    }
    else
    {
        zEntEvent(base_widge, 0x5e);
        zEntEvent(base_widge, 0x03);
        return 1;
    }

    return 1;
}

S32 NPCWidget::Off(const zNPCCommon* npc, S32 theman)
{
    if (!theman && !this->NPCIsTheLocker(npc))
    {
        return 0;
    }

    if (npc)
    {
        this->Unlock(npc);
    }

    zEntEvent(this->base_widge, eEventInvisible);
    zEntEvent(this->base_widge, eEventUIFocusOff_Unselect);
    return 1;
}

S32 NPCWidget::Unlock(const zNPCCommon* npc)
{
    if (npc_ownerlock == NULL)
    {
        return 1;
    }
    if (npc != npc_ownerlock)
    {
        return 0;
    }
    npc_ownerlock = NULL;
    return 1;
}

S32 NPCWidget::NPCIsTheLocker(const zNPCCommon* npc)
{
    if ((S32)IsLocked() == 0)
    {
        return 0;
    }
    else
    {
        return npc == npc_ownerlock ? 1 : 0;
    }
}

S32 NPCWidget::IsVisible()
{
    if (base_widge == NULL)
    {
        return 0;
    }
    else if (base_widge->baseType != 0x21)
    {
        return 0;
    }
    else
    {
        return xEntIsVisible((xEnt*)base_widge);
    }
}

S32 NPCWidget::Lock(const zNPCCommon* npc)
{
    if ((npc_ownerlock != NULL) && (npc != npc_ownerlock))
    {
        return 0;
    }
    npc_ownerlock = (zNPCCommon*)npc;
    return 1;
}

void NPCWidget_ScenePostInit()
{
    g_npc_widgets->Init(NPC_WIDGE_TALK);
}

NPCWidget* NPCWidget_Find(en_NPC_UI_WIDGETS which)
{
    return &g_npc_widgets[(int)which];
}

void NPCWidget::Init(en_NPC_UI_WIDGETS which)
{
    idxID = which;
    base_widge = zSceneFindObject(g_hash_uiwidgets[idxID]);
}

void NPCTarget::TargetSet(xEnt* ent, int b)
{
    ent_target = ent;
    if ((ent != NULL) && (b != 0))
    {
        typ_target = NPC_TGT_PLYR;
        return;
    }
    if (ent != NULL)
    {
        typ_target = NPC_TGT_ENT;
        return;
    }
    typ_target = NPC_TGT_NONE;
}

void NPCTarget::TargetClear()
{
    ent_target = 0; //0x4?
    typ_target = NPC_TGT_NONE;
}

S32 NPCTarget::FindNearest(S32 flg_consider, xBase* skipme, xVec3* from, F32 dst_max)
{
    S32 found = 0;
    st_XORDEREDARRAY* npclist;
    F32 ds2_best;
    zNPCCommon *npc, *npc_best;
    xVec3 vec = {};
    F32 fv;
    S32 i, ntyp;

    npc_best = NULL;
    ds2_best = (dst_max < 0.0f) ? HUGE : SQ(dst_max);

    if (flg_consider & 0x1)
    {
        this->TargetSet(&globals.player.ent, 1);

        if (from)
        {
            xVec3Sub(&vec, xEntGetPos(&globals.player.ent), from);
            ds2_best = xVec3Length2(&vec);
        }
    }

    if (from && (flg_consider & 0x1E))
    {
        npclist = zNPCMgr_GetNPCList();

        for (i = 0; i < npclist->cnt; i++)
        {
            npc = (zNPCCommon*)npclist->list[i];
            ntyp = npc->SelfType();

            if (npc == skipme)
                continue;

            if (((ntyp & 0xFFFFFF00) != 'NTT\0' || (flg_consider & 0x4)) &&
                ((ntyp & 0xFFFFFF00) != 'NTR\0' || (flg_consider & 0x2)) &&
                ((ntyp & 0xFFFFFF00) != 'NTF\0' || (flg_consider & 0x8)) &&
                ((ntyp & 0xFFFFFF00) != 'NTA\0' || (flg_consider & 0x10)))
            {
                if (npc->IsAlive())
                {
                    xVec3Sub(&vec, xEntGetPos(npc), from);
                    if (flg_consider & 0x80)
                    {
                        vec.y = 0.0f;
                    }

                    fv = xVec3Length2(&vec);
                    if (fv > ds2_best)
                        continue;

                    ds2_best = fv;
                    npc_best = npc;
                    found = 1;
                }
            }
        }

        if (found)
        {
            this->TargetSet(npc_best, 0);
        }
    }

    return found;
}

S32 NPCTarget::InCylinder(xVec3* from, F32 rad, F32 hyt, F32 off)
{
    S32 inrange = 1;

    xVec3 vec = {};
    this->PosGet(&vec);
    xVec3SubFrom(&vec, from);

    F32 upper = hyt + off;
    F32 lower = upper - hyt;

    if (vec.y > upper)
    {
        inrange = 0;
    }
    else if (vec.y < lower)
    {
        inrange = 0;
    }
    else if (xVec3Length2(&vec) > SQ(rad))
    {
        inrange = 0;
    }

    return inrange;
}

S32 NPCTarget::IsDead()
{
    S32 dead = 0;

    switch (this->typ_target)
    {
    case NPC_TGT_PLYR:
        if (globals.player.Health < 1)
        {
            dead = 1;
        }
        break;
    case NPC_TGT_ENT:
        if (this->ent_target->baseType == eBaseTypeNPC)
        {
            if (!((zNPCCommon*)this->ent_target)->IsAlive())
            {
                dead = 1;
            }
        }
        break;
    case NPC_TGT_BASE:
        break;
    }

    return dead;
}

// void NPCLaser::Render(xVec3* pos_src, xVec3* pos_tgt)
// {
//     xVec3 var_70;
//     xVec3Copy(&var_70, pos_src);

//     xVec3 var_7C;
//     xVec3Copy(&var_7C, pos_tgt);

//     xVec3 var_88;
//     xVec3Sub(&var_88, &var_7C, &var_70);
//     xVec3Normalize(&var_88, &var_88);

//     xVec3 var_94;
//     xVec3Cross(&var_94, &globals.camera.mat.at, &var_88);

//     F32 f1 = xVec3Length2(&var_94);
//     if (f1 < 0.00001f)
//     {
//         xVec3Copy(&var_94, &g_X3);
//     }
//     else
//     {
//         xVec3SMulBy(&var_94, 1.0f / xsqrt(f1));
//     }

//     xVec3 var_A0;
//     xVec3Cross(&var_A0, &var_94, &var_88);

//     S32 i;

//     static RwIm3DVertex laser_vtxbuf[2][14];
//     RwIm3DVertex* vtx_horz = laser_vtxbuf[0];
//     RwIm3DVertex* vtx_vert = laser_vtxbuf[1];

//     for (i = 0; i <= 6; i++)
//     {
//         F32 rat = (F32)i / 6.0f;
//         F32 f29 = LERP(rat, this->radius[0], this->radius[1]);

//         xVec3 var_AC;
//         var_AC.x = LERP(rat, var_70.x, var_7C.x);
//         var_AC.y = LERP(rat, var_70.y, var_7C.y);
//         var_AC.z = LERP(rat, var_70.z, var_7C.z);

//         U8 r22 = LERP(rat, this->rgba[0].red, this->rgba[1].red);
//         U8 r23 = LERP(rat, this->rgba[0].green, this->rgba[1].green);
//         U8 r24 = LERP(rat, this->rgba[0].blue, this->rgba[1].blue);
//         U8 r25 = LERP(rat, this->rgba[0].alpha, this->rgba[1].alpha);

//         F32 u = 1.0f - rat + this->uv_base[0];
//         F32 v = 1.0f - rat + this->uv_base[1];

//         while (u > 1.0f)
//             u -= 1.0f;
//         while (v > 1.0f)
//             v -= 1.0f;

//         xVec3 var_B8;

//         xVec3SMul(&var_B8, &var_94, f29);
//         xVec3AddTo(&var_B8, &var_AC);
//         RwIm3DVertexSetPos(&vtx_horz[0], var_B8.x, var_B8.y, var_B8.z);
//         RwIm3DVertexSetRGBA(&vtx_horz[0], r22, r23, r24, r25);
//         RwIm3DVertexSetU(&vtx_horz[0], 0.0f);
//         RwIm3DVertexSetV(&vtx_horz[0], v);

//         xVec3SMul(&var_B8, &var_94, -f29);
//         xVec3AddTo(&var_B8, &var_AC);
//         RwIm3DVertexSetPos(&vtx_horz[1], var_B8.x, var_B8.y, var_B8.z);
//         RwIm3DVertexSetRGBA(&vtx_horz[1], r22, r23, r24, r25);
//         RwIm3DVertexSetU(&vtx_horz[1], 1.0f);
//         RwIm3DVertexSetV(&vtx_horz[1], v);

//         vtx_horz += 2;

//         xVec3SMul(&var_B8, &var_A0, f29);
//         xVec3AddTo(&var_B8, &var_AC);
//         RwIm3DVertexSetPos(&vtx_vert[0], var_B8.x, var_B8.y, var_B8.z);
//         RwIm3DVertexSetRGBA(&vtx_vert[0], r22, r23, r24, r25);
//         RwIm3DVertexSetU(&vtx_vert[0], 0.0f);
//         RwIm3DVertexSetV(&vtx_vert[0], v);

//         xVec3SMul(&var_B8, &var_A0, -f29);
//         xVec3AddTo(&var_B8, &var_AC);
//         RwIm3DVertexSetPos(&vtx_vert[1], var_B8.x, var_B8.y, var_B8.z);
//         RwIm3DVertexSetRGBA(&vtx_vert[1], r22, r23, r24, r25);
//         RwIm3DVertexSetU(&vtx_vert[1], 1.0f);
//         RwIm3DVertexSetV(&vtx_vert[1], v);

//         vtx_vert += 2;
//     }

//     SDRenderState old_rendstat = zRenderStateCurrent();
//     if (old_rendstat == SDRS_Unknown)
//     {
//         old_rendstat = SDRS_Default;
//     }

//     zRenderState(SDRS_NPCVisual);

//     RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)this->rast_laser);
//     RwIm3DTransform(laser_vtxbuf[0], 14, NULL,
//                     rwIM3D_VERTEXXYZ | rwIM3D_VERTEXRGBA | rwIM3D_VERTEXUV);
//     RwIm3DRenderPrimitive(rwPRIMTYPETRISTRIP);
//     RwIm3DEnd();

//     RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)this->rast_laser);
//     RwIm3DTransform(laser_vtxbuf[1], 14, NULL,
//                     rwIM3D_VERTEXXYZ | rwIM3D_VERTEXRGBA | rwIM3D_VERTEXUV);
//     RwIm3DRenderPrimitive(rwPRIMTYPETRISTRIP);
//     RwIm3DEnd();

//     zRenderState(old_rendstat);
// }

// void NPCCone::RenderCone(xVec3* pos_tiptop, xVec3* pos_botcenter)
// {
//     RwRGBA rgba_top = this->rgba_top;
//     RwRGBA rgba_bot = this->rgba_bot;
//     xVec3 pos_top = *pos_tiptop;
//     xVec3 pos_bot = *pos_botcenter;
//     F32 f29 = this->uv_tip[0] + 0.5f * this->uv_slice[0];
//     F32 f28 = this->uv_tip[1];
//     F32 f31 = this->uv_tip[0] + this->uv_slice[0];
//     F32 f30 = this->uv_tip[1] + this->uv_slice[1];

//     void* mem = xMemPushTemp(10 * sizeof(RwIm3DVertex));
//     if (!mem)
//     {
//         return;
//     }

//     memset(mem, 0, 10 * sizeof(RwIm3DVertex));

//     RwIm3DVertex* vert_list = (RwIm3DVertex*)mem;
//     RwIm3DVertex* vtx = vert_list + 1;

//     RwIm3DVertexSetPos(&vert_list[0], pos_top.x, pos_top.y, pos_top.z);
//     RwIm3DVertexSetRGBA(&vert_list[0], rgba_top.red, rgba_top.green, rgba_top.blue, rgba_top.alpha);
//     RwIm3DVertexSetU(&vert_list[0], f29);
//     RwIm3DVertexSetV(&vert_list[0], f28);

//     for (S32 i = 0; i < 8; i++)
//     {
//         F32 ang_seg = i * PI / 4;
//         F32 f29 = isin(ang_seg);
//         F32 f1 = icos(ang_seg);

//         xVec3 var_A0;
//         var_A0.x = f29;
//         var_A0.y = 0.0f;
//         var_A0.z = f1;
//         var_A0 *= this->rad_cone;
//         var_A0 += pos_bot;

//         RwIm3DVertexSetPos(vtx, var_A0.x, var_A0.y, var_A0.z);
//         RwIm3DVertexSetRGBA(vtx, rgba_bot.red, rgba_bot.green, rgba_bot.blue, rgba_bot.alpha);

//         F32 f0 = 1 / 8.0f * i;

//         RwIm3DVertexSetU(vtx, f31 + f0);
//         RwIm3DVertexSetV(vtx, f30);

//         vtx++;
//     }

//     *vtx = vert_list[1];
//     RwIm3DVertexSetU(vtx, f31 + this->uv_slice[0]);
//     RwIm3DVertexSetV(vtx, f30);

//     SDRenderState old_rendstat = zRenderStateCurrent();
//     if (old_rendstat == SDRS_Unknown)
//     {
//         old_rendstat = SDRS_Default;
//     }

//     zRenderState(SDRS_NPCVisual);

//     RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)TRUE);
//     RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)this->rast_cone);
//     RwIm3DTransform(vert_list, 10, NULL, rwIM3D_VERTEXXYZ | rwIM3D_VERTEXRGBA | rwIM3D_VERTEXUV);
//     RwIm3DRenderPrimitive(rwPRIMTYPETRIFAN);
//     RwIm3DEnd();

//     zRenderState(old_rendstat);

//     xMemPopTemp(mem);
// }

void NPCBlinker::Reset()
{
    tmr_uvcell = -1.0f;
    idx_uvcell = 0;
}

void NPCBlinker::Update(F32 dt, F32 ratio, F32 tym_slow, F32 tym_fast)
{
    if (tmr_uvcell < 0.0f)
    {
        idx_uvcell++;
        if (3 < idx_uvcell)
        {
            idx_uvcell = 0;
        }
        tmr_uvcell = LERP(SQ(ratio), tym_slow, tym_fast);
    }
    tmr_uvcell = MAX(-1.0f, tmr_uvcell - dt);
}

void NPCBlinker::IndexToUVCoord(S32 param_1, F32* param_2, F32* param_3)
{
    S32 shift = ((U32)param_1 >> 31);
    S32 uVar1 = ((param_1 & 1) ^ shift) - shift;

    param_2[0] = uVar1 * 0.5f;
    param_2[1] = ((param_1 - uVar1) / 2) * 0.5f;

    param_3[0] = param_2[0] + 0.5f;
    param_3[1] = param_2[1] + 0.5f;
}

void Firework_Release(Firework* firework)
{
    firework->Cleanup();
    firework->fwstate = FW_STAT_UNUSED;
}

void Firework_ScenePrepare()
{
    NPAR_PartySetup(NPAR_TYP_FIREWORKS, NULL, NULL);
    Firework_SceneReset(0);
}

void Firework_SceneFinish()
{
    Firework_SceneReset(1);
}

void Firework::Cleanup()
{
}

void NPAR_EmitFWExhaust(xVec3* pos, const xVec3* vel);

void Firework::Update(F32 dt)
{
    switch (this->fwstate)
    {
    case FW_STAT_FLIGHT:
        this->FlyFlyFly(dt);
        if (this->tmr_remain < 0.0f)
        {
            this->fwstate = FW_STAT_BOOM;
        }
        break;
    case FW_STAT_BOOM:
        this->Detonate();
        this->fwstate = FW_STAT_DONE;
        break;
    case FW_STAT_DONE:
        break;
    }

    this->tmr_remain = MAX(-1.0f, this->tmr_remain - dt);
}

void Firework::FlyFlyFly(F32 dt)
{
    F32 pam_life = 1.0f - CLAMP(this->tmr_remain / this->tym_lifespan, 0.0f, 1.0f);
    if (pam_life < 0.75f)
    {
        xVec3 dir_trav = this->vel;
        dir_trav.normalize();

        this->vel += dir_trav * (Firework::acc_thrust * dt);
    }

    this->vel += g_NY3 * (Firework::acc_gravity * dt);

    NPAR_EmitFWExhaust(&this->pos, &g_O3);
}

void Firework::Detonate()
{
    xUtil_yesno(0.25f);
}

void NPCC_ang_toXZDir(F32 angle, xVec3* dir)
{
    dir->x = isin(angle);
    dir->y = 0.0f;
    dir->z = icos(angle);
}

F32 NPCC_dir_toXZAng(const xVec3* vec)
{
    return xatan2(vec->x, vec->z);
}

void NPCC_aimMiss(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, F32 dst_miss, xVec3* pos_miss)
{
    NPCC_aimVary(dir_aim, pos_src, pos_tgt, dst_miss, 8, pos_miss);
}

F32 NPCC_aimVary(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, F32 dst_vary, S32 flg_vary,
                 xVec3* pos_aimPoint)
{
    F32 dst_toFake = 0.0f;
    xVec3 dir_left = {};
    xVec3 dir_toFake = {};
    xVec3 dir_toReal = {};
    xVec3 vec_offset = {};
    xVec3 pos_tgtFake = {};

    xVec3Sub(&dir_toReal, pos_tgt, pos_src);

    if (flg_vary & 0x10)
    {
        dir_toReal.y = 0.0f;
    }

    F32 mag_vary = xVec3Length(&dir_toReal);
    if (mag_vary < 0.001f)
    {
        if (mag_vary > 0.0f)
        {
            xVec3SMulBy(&dir_toReal, 100000.0f);
            xVec3Normalize(&dir_toReal, &dir_toReal);
        }
        else
        {
            xVec3Copy(dir_aim, &g_X3);
        }

        if (pos_aimPoint)
        {
            xVec3Copy(pos_aimPoint, pos_tgt);
        }

        return mag_vary;
    }

    xVec3SMulBy(&dir_toReal, 1.0f / mag_vary);
    xVec3Cross(&dir_left, &g_Y3, &dir_toReal);

    F32 mag_updown;
    if (flg_vary & 0x8)
    {
        mag_updown = dst_vary;
    }
    else
    {
        mag_updown = 2.0f * (xurand() - 0.5f) * dst_vary;

        F32 fv;
        if ((flg_vary & 0x1) && (flg_vary & 0x2))
        {
            fv = 2.0f * (xurand() - 0.5f);
        }
        else if (flg_vary == 0x1)
        {
            fv = xurand();
        }
        else if (flg_vary == 0x2)
        {
            fv = -xurand();
        }
        else
        {
            fv = 0.0f;
        }

        dst_toFake = fv * dst_vary;
    }

    xVec3AddScaled(&vec_offset, &dir_left, mag_updown);
    xVec3AddScaled(&vec_offset, &g_Y3, dst_toFake);
    xVec3Add(&pos_tgtFake, pos_tgt, &vec_offset);
    xVec3Sub(&dir_toFake, &pos_tgtFake, pos_src);

    F32 f31 = xVec3Normalize(&dir_toFake, dir_aim);

    if (pos_aimPoint)
    {
        xVec3Copy(pos_aimPoint, &pos_tgtFake);
    }

    return (flg_vary & 0x4) ? f31 : mag_vary;
}

S32 NPCC_chk_hitEnt(xEnt* tgt, xBound* bnd, xCollis* collide)
{
    S32 hittgt = 0;
    xCollis* colrec;
    xCollis lcl_collide = {};

    colrec = collide ? collide : &lcl_collide;
    colrec->optr = tgt;
    colrec->oid = tgt->id;

    if (collide)
    {
        colrec->flags = ((U32)(1 << 9)) | ((U32)(1 << 12));
    }
    else
    {
        colrec->flags = 0;
    }

    xQuickCullForEverything(&bnd->qcd);
    xBoundHitsBound(bnd, &tgt->bound, colrec);

    if (colrec->flags & ((U32)(1 << 0)))
    {
        hittgt = 1;
    }

    return hittgt;
}

S32 NPCC_chk_hitPlyr(xBound* bnd, xCollis* collide)
{
    return NPCC_chk_hitEnt(&globals.player.ent, bnd, collide);
}

void Firework_SceneReset(int param_1)
{
    Firework* fw;
    for (int i = 0; i < (int)(sizeof(g_fireworks) / sizeof(Firework)); i++)
    {
        fw = &g_fireworks[i];
        if ((param_1 != 0) && (fw->fwstate != 0))
        {
            Firework_Release(fw);
        }
        fw->fwstate = 0;
        fw++;
    }
}

void Firework_Timestep(F32 dt)
{
    for (int i = 0; i < 32; i++)
    {
        if (g_fireworks[i].fwstate != FW_STAT_UNUSED)
        {
            if ((g_fireworks[i].fwstate != FW_STAT_READY) && (g_fireworks[i].flg_firework & 4))
            {
                if (g_fireworks[i].fwstate == FW_STAT_DONE)
                {
                    Firework_Release(&g_fireworks[i]);
                }
                else
                {
                    g_fireworks[i].Update(dt);
                    g_fireworks[i].flg_firework &= ~2;
                }
            }
        }
    }
}

S32 NPCC_LampStatus()
{
    return g_pc_playerInvisible == 0 ? true : false;
}

bool NPCC_ForceTalkOk()
{
    return globals.player.g.DisableForceConversation == 0 ? 1 : 0;
}

RwRaster* NPCC_FindRWRaster(const char* txtrname)
{
    RwTexture* txtr = NPCC_FindRWTexture(txtrname);
    if (txtr != NULL)
    {
        return txtr->raster;
    }
    return NULL;
}

RwTexture* NPCC_FindRWTexture(U32 hashid)
{
    return (RwTexture*)xSTFindAsset(hashid, NULL);
}

RwTexture* NPCC_FindRWTexture(const char* txtrname)
{
    return (RwTexture*)xSTFindAsset(xStrHash(txtrname), NULL);
}

RwRaster* NPCC_FindRWRaster(RwTexture* txtr)
{
    if (txtr != NULL)
    {
        return txtr->raster;
    }
    return NULL;
}

void NPCC_GenSmooth(xVec3** pos_base, xVec3** pos_mid)
{
    static F32 prepute[4][4];
    static const F32 yews[4] = { 0.25f, 0.5f, 0.75f, 1.0f };
    static S32 init = 0;

    S32 i;

    if (!init)
    {
        init = 1;

        for (i = 0; i < 4; i++)
        {
            F32 u = yews[i];
            F32 u2 = u * u;
            F32 u3 = u * u2;

            prepute[i][0] = u2 + -0.5f * u3 + -0.5f * u;
            prepute[i][1] = -2.5f * u2 + 1.5f * u3 + 1.0f;
            prepute[i][2] = 2.0f * u2 + -1.5f * u3 + 0.5f * u;
            prepute[i][3] = -0.5f * u2 + 0.5f * u3;
        }
    }

    for (i = 0; i < 4; i++)
    {
        xVec3SMul(pos_mid[i], pos_base[0], prepute[i][0]);
        xVec3AddScaled(pos_mid[i], pos_base[1], prepute[i][1]);
        xVec3AddScaled(pos_mid[i], pos_base[2], prepute[i][2]);
        xVec3AddScaled(pos_mid[i], pos_base[3], prepute[i][3]);
    }
}

void zNPC_SNDInit()
{
    sNPCSndID[eNPCSnd_GloveAttack] = 0;
    sNPCSndID[eNPCSnd_SleepyAttack] = 0;
    sNPCSndID[eNPCSnd_TubeAttack] = 0;
    sNPCSndID[eNPCSnd_FodBzztAttack] = 0;
    sNPCSndID[eNPCSnd_JellyfishAttack] = 0;

    sNPCSndFxVolume[eNPCSnd_GloveAttack] = 0.77f;
    sNPCSndFxVolume[eNPCSnd_SleepyAttack] = 0.77f;
    sNPCSndFxVolume[eNPCSnd_TubeAttack] = 0.77f;
    sNPCSndFxVolume[eNPCSnd_FodBzztAttack] = 0.77f;
    sNPCSndFxVolume[eNPCSnd_JellyfishAttack] = 0.77f;

    sNPCSndFx[eNPCSnd_GloveAttack] = xStrHash("Glove_hover_loop");
    sNPCSndFx[eNPCSnd_SleepyAttack] = xStrHash("ST_hit2_loop");
    sNPCSndFx[eNPCSnd_TubeAttack] = xStrHash("Tube_attack21_loop");
    sNPCSndFx[eNPCSnd_FodBzztAttack] = xStrHash("FodBzzt_attack_loop");
    sNPCSndFx[eNPCSnd_JellyfishAttack] = xStrHash("Jellyfish_zap_loop");
}

void zNPC_SNDPlay3D(_tageNPCSnd snd, xEnt* ent)
{
    if (globals.cmgr)
        return;
    if (sNPCSndID[snd] != 0)
        return;
    if (sNPCSndFx[snd] == 0)
        return;

    sNPCSndID[snd] = xSndPlay3D(sNPCSndFx[snd], sNPCSndFxVolume[snd], 0.0f, 0x80, 0, ent, 2.0f,
                                15.0f, SND_CAT_GAME, 0.0f);
}

void zNPC_SNDStop(_tageNPCSnd snd)
{
    if (sNPCSndFx[snd] == 0)
        return;

    xSndStop(sNPCSndID[snd]);
    sNPCSndID[snd] = 0;
}

U32 NPCC_LineHitsBound(xVec3* param_1, xVec3* param_2, xBound* param_3, xCollis* param_4)
{
    xRay3 ray;
    xVec3 vec;
    xCollis local_colrec;
    xCollis* colrec = &local_colrec;
    F32 len;

    if (param_4 != NULL)
    {
        colrec = (xCollis*)param_4;
    }
    xVec3Sub(&vec, param_2, param_1);
    len = xVec3Length(&vec);
    if (len < 0.001f)
    {
        len = 0.001f;
    }
    xVec3Copy(&ray.origin, param_1);
    xVec3SMul(&ray.dir, &vec, (1.0f / len));

    ray.max_t = len;
    ray.min_t = 0.1f;
    ray.flags = 3072;

    xRayHitsBound(&ray, param_3, colrec);
    return colrec->flags & 1;
}

S32 NPCC_bnd_ofBase(xBase* tgt, xBound* bnd)
{
    S32 retval = 1;

    switch (tgt->baseType)
    {
    case eBaseTypeCamera:
    case eBaseTypeDoor:
    case eBaseTypeVolume:
    case eBaseTypeEGenerator:
        retval = 0;
        break;
    case eBaseTypePlayer:
    case eBaseTypePickup:
    case eBaseTypePlatform:
    case eBaseTypeStatic:
    case eBaseTypeDynamic:
    case eBaseTypeBubble:
    case eBaseTypePendulum:
    case eBaseTypeHangable:
    case eBaseTypeButton:
    case eBaseTypeProjectile:
    case eBaseTypeDestructObj:
    case eBaseTypeNPC:
    case eBaseTypeBoulder:
        *bnd = *(xBound*)((int)tgt + 0x64);
        break;
    default:
        retval = 0;
        break;
    case eBaseTypeCruiseBubble:
        break;
    }
    return retval;
}

S32 NPCC_pos_ofBase(xBase* tgt, xVec3* pos)
{
    xVec3* pxVar1;
    S32 retval = 1;

    switch (tgt->baseType)
    {
    case eBaseTypeCamera:
        xVec3Copy(pos, &globals.camera.mat.pos);
        break;
    case eBaseTypeCruiseBubble:
        retval = 0;
        break;
    case eBaseTypePlayer:
    case eBaseTypePickup:
    case eBaseTypePlatform:
    case eBaseTypeStatic:
    case eBaseTypeDynamic:
    case eBaseTypeBubble:
    case eBaseTypePendulum:
    case eBaseTypeHangable:
    case eBaseTypeButton:
    case eBaseTypeProjectile:
    case eBaseTypeDestructObj:
    case eBaseTypeNPC:
    case eBaseTypeBoulder:
        xVec3Copy(pos, xEntGetPos((xEnt*)tgt));
        break;
    case eBaseTypeDoor:
    case eBaseTypeVolume:
    case eBaseTypeEGenerator:
        retval = 0;
        break;
    default:
        retval = 0;
        break;
    }
    return retval;
}

void NPCTarget::PosGet(xVec3* pos)
{
    switch (typ_target)
    {
    case NPC_TGT_NONE:
        break;
    case NPC_TGT_PLYR:
    case NPC_TGT_ENT:
    case NPC_TGT_BASE:
        NPCC_pos_ofBase(bas_target, pos);
        break;
    case NPC_TGT_POS:
        xVec3Copy(pos, &pos_target);
        break;
    case NPC_TGT_MVPT:
        xVec3Copy(pos, zMovePointGetPos(nav_target));
        break;
    }
}

void NPCC_xBoundAway(xBound* bnd)
{
    if (bnd->type == XBOUND_TYPE_SPHERE)
    {
        bnd->box.center.y -= 1000000.0f;
    }
    else if (bnd->type == XBOUND_TYPE_BOX)
    {
        bnd->box.center.y -= 1000000.0f;
    }
}

void NPCC_xBoundBack(xBound* bnd)
{
    if (bnd->type == XBOUND_TYPE_SPHERE)
    {
        bnd->box.center.y += 1000000.0f;
    }
    else if (bnd->type == XBOUND_TYPE_BOX)
    {
        bnd->box.center.y += 1000000.0f;
    }
}

void NPCC_DstSq(const xVec3*, const xVec3*, xVec3*);

S32 NPCC_HaveLOSToPos(xVec3* pos_src, xVec3* pos_tgt, F32 dst_max, xBase* tgt, xCollis* colCallers)
{
    S32 result;
    xRay3 ray = {};
    xScene* xscn = globals.sceneCur;
    xCollis* colrec;

    if (colCallers)
    {
        colrec = colCallers;
    }
    else
    {
        static xCollis localCollis = { (((U32)(1 << 8)) | ((U32)(1 << 9)) | ((U32)(1 << 10)) |
                                        ((U32)(1 << 11))) |
                                       ((U32)(1 << 12)) };

        memset(&localCollis, 0, sizeof(xCollis));
        localCollis.flags =
            (((U32)(1 << 8)) | ((U32)(1 << 9)) | ((U32)(1 << 10)) | ((U32)(1 << 11))) |
            ((U32)(1 << 12)) | ((U32)(1 << 12));

        colrec = &localCollis;
    }

    ray.min_t = 0.0f;
    ray.max_t = dst_max;

    xVec3Sub(&ray.dir, pos_tgt, pos_src);
    xVec3Normalize(&ray.dir, &ray.dir);
    xVec3Copy(&ray.origin, pos_src);

    ray.flags = (1 << 10) | (1 << 11);

    xRayHitsScene(xscn, &ray, colrec);

    if (!(colrec->flags & ((U32)(1 << 0))))
    {
        result = 1;
    }
    else if (colrec->dist > dst_max)
    {
        result = 1;
    }
    else if (tgt && colrec->oid != 0)
    {
        if (tgt->id == colrec->oid)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = 0;
    }

    return result;
}

void NPCC_DstSqPlyrToPos(const xVec3* pos)
{
    NPCC_DstSq(pos, xEntGetPos(&globals.player.ent), NULL);
}

F32 NPCC_ds2_toCam(const xVec3* pos_from, xVec3* delta)
{
    xVec3 delt = {};
    xVec3Sub(&delt, &globals.camera.mat.pos, pos_from);
    F32 retval = xVec3Length2(&delt);
    if (delta != (xVec3*)0)
    {
        xVec3Copy(delta, &delt);
    }
    return retval;
}

void NPCC_Bounce(xVec3* vec_input, xVec3* vec_anti, F32 elastic)
{
    if (vec_input->x * vec_anti->x < 0.0f)
    {
        vec_input->x *= -1.0f;
    }

    if (vec_input->y * vec_anti->y < 0.0f)
    {
        vec_input->y *= -1.0f;
    }

    if (vec_input->z * vec_anti->z < 0.0f)
    {
        vec_input->z *= -1.0f;
    }

    xVec3SMulBy(vec_input, elastic);
}

void NPCC_rotHPB(xMat3x3* mat, F32 heading, F32 pitch, F32 bank)
{
    xMat3x3 mat_rot = {};

    xMat3x3RotZ(mat, bank);
    xMat3x3RotX(&mat_rot, -pitch);
    xMat3x3Mul(mat, mat, &mat_rot);
    xMat3x3RotY(&mat_rot, heading);
    xMat3x3Mul(mat, mat, &mat_rot);
}

F32 NPCC_TmrCycle(float* tmr, float dt, float interval)
{
    F32 parameterized;

    if (*tmr < 0.0f)
    {
        *tmr = 0.0f;
    }

    parameterized = (*tmr / interval);
    *tmr += dt;

    if (*tmr > interval)
    {
        *tmr = xfmod(*tmr, interval);
    }

    return parameterized;
}

void NPCC_MakePerp(xVec3* dir_perp, const xVec3* dir_axis)
{
    dir_perp->x = dir_axis->y - dir_axis->z;
    dir_perp->y = dir_axis->z - dir_axis->x;
    dir_perp->z = dir_axis->x - dir_axis->y;

    xVec3Normalize(dir_perp, dir_perp);
}

void NPCC_MakeArbPlane(const xVec3* dir_norm, xVec3* at, xVec3* rt)
{
    NPCC_MakePerp(at, dir_norm);
    xVec3Cross(rt, at, dir_norm);
}
