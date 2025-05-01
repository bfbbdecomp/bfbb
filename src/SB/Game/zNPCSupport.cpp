#include "zNPCSupport.h"

#include <types.h>
#include <xstransvc.h>
#include <rtslerp.h>

#include "zGlobals.h"
#include "zNPCHazard.h"
#include "zNPCGlyph.h"
#include "zNPCSupplement.h"

#include "xMathInlines.h"
#include "xMath3.h"
#include "xUtil.h"
#include "xBound.h"

NPCWidget g_npc_widgets[1] = {};
static U32 g_hash_uiwidgets[1] = { 0 };
static char* g_strz_uiwidgets[1] = { "MNU4 NPCTALK" };
S32 g_pc_playerInvisible;
static Firework g_fireworks[32];

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
    g_hash_uiwidgets[0] = xStrHash((const char*)g_strz_uiwidgets);
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

U32 NPCWidget::On(const zNPCCommon* npc, int theman)
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
    base_widge = zSceneFindObject(g_hash_uiwidgets[idxID = which]);
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

void NPAR_EmitFWExhaust(xVec3* pos, xVec3* vel);

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

void NPCC_dir_toXZAng(const xVec3* vec)
{
    xatan2(vec->x, vec->z);
}

void NPCC_aimMiss(xVec3* dir_aim, xVec3* pos_src, xVec3* pos_tgt, F32 dst_miss, xVec3* pos_miss)
{
    NPCC_aimVary(dir_aim, pos_src,  pos_tgt, dst_miss, 8, pos_miss);
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

void zNPC_SNDInit()
{
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
        colrec = (xCollis *)param_4;
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

    switch(tgt->baseType)
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
    xVec3 *pxVar1;
    S32 retval = 1;

    switch(tgt->baseType)
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
            xVec3Copy(pos, xEntGetPos((xEnt *)tgt));
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

void NPCC_DstSqPlyrToPos(const xVec3* pos)
{
    NPCC_DstSq(pos, xEntGetPos(&globals.player.ent), NULL);
}

F32 NPCC_ds2_toCam(const xVec3* pos_from, xVec3* delta)
{
    xVec3 delt = {};
    xVec3Sub(&delt, &globals.camera.mat.pos, pos_from);
    F32 retval = xVec3Length2(&delt);
    if (delta != (xVec3 *)0)
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