#include "zNPCHazard.h"

#include <types.h>
#include <string.h>

#include "zGlobals.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"

extern uint32 g_hash_hazanim[3];
extern char* g_strz_hazanim[3];
extern NPCHazard g_hazards[64];
extern UVAModelInfo g_haz_uvAnimInfo[30];
extern int32 g_cnt_activehaz;
extern NPCHazard* g_haz_uvAnimQue[27];
extern RpAtomic* g_hazard_rawModel[30];
extern xAnimTable* g_haz_animTable[30];
extern xVec3 g_O3;
extern float32 _958_Hazard; // 0.0f
extern float32 _959_Hazard; // 1.0f
extern float32 _1041_Hazard; // -1.0f

void zNPCHazard_Startup()
{
    for (int32 i = 0; i < 3; i++)
    {
        g_hash_hazanim[i] = xStrHash(g_strz_hazanim[i]);
    }
}

void zNPCHazard_Shutdown()
{
}

#if 1

// func_8018769C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_ScenePrepare__Fv")

#else

// WIP.
void zNPCHazard_ScenePrepare()
{
    memset(g_hazards, 0, sizeof(g_hazards));
    g_cnt_activehaz = 0;
    for (int32 i = 0; i < 27; i++)
    {
        g_haz_uvAnimQue[i] = NULL;
    }
    for (int32 i = 0; i < 30; i++)
    {
        g_haz_uvAnimInfo[i].Clear();
    }
    for (int32 i = 0; i < 30; i++)
    {
        g_haz_animTable[i] = NULL;
    }
    for (int32 i = 0; i < 30; i++)
    {
        g_hazard_rawModel[i] = NULL;
    }
}

#endif

// func_801878B4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_SceneFinish__Fv")

void zNPCHazard_SceneReset()
{
    for (int32 i = 0; i < 64; i++)
    {
        if (g_hazards[i].flg_hazard)
        {
            g_hazards[i].Kill();
        }
    }
    g_cnt_activehaz = 0;
}

void zNPCHazard_ScenePostInit()
{
    zNPCHazard_InitEffects();
}

// func_80187B58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_InitEffects__Fv")

void zNPCHazard_KillEffects()
{
}

int32 HAZ_ord_sorttest(void* vkey, void* vitem)
{
    NPCHazard* key = (NPCHazard*)vkey;
    NPCHazard* item = (NPCHazard*)vitem;
    if (key->typ_hazard < item->typ_hazard)
    {
        return -1;
    }
    else if (key->typ_hazard > item->typ_hazard)
    {
        return 1;
    }
    else if ((int32)vkey < (int32)vitem)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

// func_80187DFC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCHazard_Timestep__Ff")

// func_80187FEC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "zNPCCommon_Hazards_RenderAll__Fi")

#if 1

// func_8018819C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Acquire__Fv")

#else

// Close, kind of.
NPCHazard* HAZ_Acquire()
{
    NPCHazard* da_haz = g_hazards;
    for (int32 i = 0; i < 64; i++)
    {
        if (!(da_haz->flg_hazard & 1))
        {
            da_haz->WipeIt();
            da_haz->flg_hazard = 1;
            g_cnt_activehaz++;
            return da_haz;
        }
        da_haz++;
    }
    return NULL;
}

#endif

int32 HAZ_AvailablePool()
{
    return 64 - g_cnt_activehaz;
}

// func_80188218
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "HAZ_Iterate__FPFR9NPCHazardPv_bPvi")

void NPCHazard::WipeIt()
{
    this->typ_hazard = NPC_HAZ_UNKNOWN;
    this->flg_hazard = 0;
    xVec3Copy(&this->pos_hazard, &g_O3);
    this->tym_lifespan = _959_Hazard;
    this->tmr_remain = _1041_Hazard;
    this->pam_interp = _958_Hazard;
    this->cb_notify = NULL;
    this->npc_owner = NULL;
    memset(&this->custdata, 0, sizeof(this->custdata));
}

#if 1

// func_80188314
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ConfigHelper__9NPCHazardF9en_npchaz")

#else

// WIP.
int32 NPCHazard::ConfigHelper(en_npchaz haztype)
{
    int32 result = 1;
    this->typ_hazard = haztype;
    switch (haztype)
    {
    case NPC_HAZ_UNKNOWN:
        result = 0;
        break;
    case NPC_HAZ_EXPLODE:
        // TODO!!!
        break;
    default:
        result = 0;
        break;
    }
    if (!result)
    {
        this->MarkForRecycle();
    }
    return result;
}

#endif

void NPCHazard::Reconfigure(en_npchaz haztype)
{
    HAZNotify* noter = this->cb_notify;
    zNPCCommon* npc_old = this->npc_owner;
    xVec3 old_pos;
    xVec3Copy(&old_pos, &this->pos_hazard);
    this->Cleanup();
    this->WipeIt();
    this->flg_hazard = 0x21;
    this->ConfigHelper(haztype);
    this->PosSet(&old_pos);
    this->NotifyCBSet(noter);
    this->SetNPCOwner(npc_old);
    if (this->cb_notify != NULL)
    {
        this->cb_notify->Notify(HAZ_NOTE_RECONFIG, this);
    }
}

// func_80188F54
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUVAInfo__9NPCHazardF11en_hazmodelff")

// func_80188FE4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GrabModel__9NPCHazardF11en_hazmodel")

// func_8018911C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FreeModel__9NPCHazardFv")

// func_8018915C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Discard__9NPCHazardFv")

// func_801891D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Kill__9NPCHazardFv")

// func_80189238
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Start__9NPCHazardFPC5xVec3f")

void NPCHazard::PosSet(const xVec3* pos)
{
    if (pos != NULL)
    {
        xVec3Copy(&this->pos_hazard, pos);
    }
    if (this->mdl_hazard != NULL)
    {
        xVec3Copy((xVec3*)&this->mdl_hazard->Mat->pos, &this->pos_hazard);
    }
}

// func_801892E8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Timestep__9NPCHazardFf")

// func_80189554
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Render__9NPCHazardFv")

// func_8018A328
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Cleanup__9NPCHazardFv")

void NPCHazard::SetAlpha(float32 alpha)
{
    if (this->mdl_hazard == NULL)
    {
        return;
    }
    this->mdl_hazard->Flags |= 0x4000;
    this->mdl_hazard->Alpha = alpha;
}

// func_8018A448
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestSphere__9NPCHazardFPC6xBoundf")

// func_8018A538
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColTestCyl__9NPCHazardFPC6xBoundff")

int32 NPCHazard::ColPlyrSphere(float32 rad)
{
    return this->ColTestSphere(&globals.player.ent.bound, rad);
}

int32 NPCHazard::ColPlyrCyl(float32 rad, float32 hyt)
{
    return this->ColTestCyl(&globals.player.ent.bound, rad, hyt);
}

void NPCHazard::HurtThePlayer()
{
    if (this->npc_owner == NULL)
    {
        zEntPlayer_Damage(NULL, 1);
    }
    else if (zEntPlayer_DamageNPCKnockBack((xBase*)this->npc_owner, 1, &this->pos_hazard))
    {
        this->npc_owner->Vibrate(NPC_VIBE_NORM, _1041_Hazard);
    }
}

// func_8018A6DC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TypData_RotMatStore__9NPCHazardFP5xVec3")

void NPCHazard::TypData_RotMatSet(xMat3x3* mat)
{
    xMat3x3* frame = (xMat3x3*)xModelGetFrame(this->mdl_hazard);
    xMat3x3Copy(frame, mat);
    xModelSetFrame(this->mdl_hazard, (xMat4x3*)frame);
}

void NPCHazard::TypData_RotMatApply(xMat3x3* mat)
{
    xMat3x3* frame = (xMat3x3*)xModelGetFrame(this->mdl_hazard);
    xMat3x3Mul(frame, mat, frame);
    xModelSetFrame(this->mdl_hazard, (xMat4x3*)frame);
}

// func_8018A854
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OrientToDir__9NPCHazardFPC5xVec3i")

// func_8018A918
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PickFunFrag__9NPCHazardFv")

// func_8018AA5C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "PreCollide__9NPCHazardFv")

// func_8018ABE4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StaggeredCollide__9NPCHazardFv")

// func_8018ACD8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StagColGeneral__9NPCHazardFi")

void NPCHazard::StagColStat()
{
    this->StagColGeneral(1);
}

void NPCHazard::StagColDyn()
{
    this->StagColGeneral(2);
}

void NPCHazard::StagColNPC()
{
    this->StagColGeneral(4);
}

void NPCHazard::CollideResponse(xSweptSphere* swdata, float32 tym_inFuture)
{
    this->ColResp_Default(swdata, tym_inFuture);
}

// func_8018AEF8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ColResp_Default__9NPCHazardFP12xSweptSpheref")

// func_8018AFAC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ZNPC_AnimTable_HazardStd__Fv")

// func_8018B0C0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Explode__9NPCHazardFf")

// func_8018B148
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DeathStar__9NPCHazardFv")

// func_8018B25C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_PuppyNuke__9NPCHazardFf")

// func_8018B34C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FodBomb__9NPCHazardFf")

// func_8018B448
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "FodBombBubbles__9NPCHazardFf")

// func_8018B540
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_CattleProd__9NPCHazardFf")

// func_8018B870
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TubeletBlast__9NPCHazardFf")

// func_8018BA58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_DuploBoom__9NPCHazardFf")

// func_8018BB28
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TikiThunder__9NPCHazardFf")

// func_8018BBF4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Mushroom__9NPCHazardFf")

// func_8018BD04
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_Patriot__9NPCHazardFf")

// func_8018BD08
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTFlight__9NPCHazardFf")

// func_8018C0D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconTarTar__9NPCHazardFv")

// func_8018C180
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTSpill__9NPCHazardFf")

// func_8018C264
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickSteamyStinky__9NPCHazardFv")

// func_8018C2E4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_TTStink__9NPCHazardFf")

// func_8018C39C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarFalumpf__9NPCHazardFv")

// func_8018C474
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarGunkTrail__9NPCHazardFv")

// func_8018C4B8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarSplash__9NPCHazardFPC5xVec3")

// func_8018C670
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "TarTarLinger__9NPCHazardFv")

// func_8018C7BC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBomb__9NPCHazardFf")

// func_8018C9DC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "DisperseBubWake__9NPCHazardFfPC5xVec3")

// func_8018CBBC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconChuck__9NPCHazardFv")

// func_8018CD58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBlast__9NPCHazardFf")

// func_8018CE50
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WaterSplash__9NPCHazardFPC5xVec3")

// func_8018D138
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "WavesOfEvil__9NPCHazardFv")

// func_8018D27C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickBlooshBlob__9NPCHazardFPC5xVec3")

// func_8018D4D8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_ChuckBloosh__9NPCHazardFf")

// func_8018D610
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneFlight__9NPCHazardFf")

// func_8018D7C4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconArfBone__9NPCHazardFv")

// func_8018D804
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_BoneBlast__9NPCHazardFf")

// func_8018D8F8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBubble__9NPCHazardFf")

// func_8018DC64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "ReconSlickOil__9NPCHazardFv")

// func_8018DDA0
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "OilSplash__9NPCHazardFPC5xVec3")

// func_8018DF58
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilOoze__9NPCHazardFf")

// func_8018E240
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilBurst__9NPCHazardFv")

// func_8018E300
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "KickOilGlobby__9NPCHazardFv")

// func_8018E454
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilBurst__9NPCHazardFf")

// func_8018E51C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_OilGlob__9NPCHazardFf")

// func_8018E6F8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_MonCloud__9NPCHazardFf")

// func_8018ED1C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_FunFrag__9NPCHazardFf")

// func_8018EE64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "StreakUpdate__9NPCHazardFUif")

// func_8018EF64
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_RoboBits__9NPCHazardFf")

// func_8018F0CC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Upd_VisSplash__9NPCHazardFf")

// func_8018F154
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "VisSplashSparklies__9NPCHazardFv")

// func_8018F298
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Init__12UVAModelInfoFP8RpAtomicUi")

void UVAModelInfo::Hemorrage()
{
    model = 0;
    uv = 0;
}

// func_8018F388
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Update__12UVAModelInfoFfPC5xVec2")

// func_8018F438
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "Refresh__12UVAModelInfoFv")

// func_8018F578
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SetColor__12UVAModelInfoF10iColor_tag")

// func_8018F610
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "GetUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// func_8018F668
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "CloneUV__12UVAModelInfoCFRP11RwTexCoordsRiP8RpAtomic")

// func_8018F6F4
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "__sinit_zNPCHazard_cpp")

RwV3d* NPCHazard::At()
{
    return &this->mdl_hazard->Mat->at;
}

RwV3d* NPCHazard::Right()
{
    return &this->mdl_hazard->Mat->right;
}

RwV3d* NPCHazard::Up()
{
    return &this->mdl_hazard->Mat->up;
}

NPCHazard::NPCHazard()
{
}

NPCHazard::NPCHazard(en_npchaz haztype)
{
    this->typ_hazard = haztype;
}

// func_8018FB48
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "inverse__5xVec3CFv")

// func_8018FBA8
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "SMOOTH__FfP5xVec3PC5xVec3PC5xVec3")

// func_8018FBFC
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "LERP__FfP5xVec3PC5xVec3PC5xVec3")

// func_8018FC8C
#pragma GLOBAL_ASM("asm/Game/zNPCHazard.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")

float32 xVec2Length2(const xVec2* v)
{
    return xVec2Dot(v, v);
}
