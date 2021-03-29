#include "zNPCTypeCommon.h"

#include <types.h>
#include <string.h>

#include "zNPCTypes.h"
#include "zNPCSndTable.h"
#include "zNPCSupport.h"
#include "zNPCFXCinematic.h"

#include "../Core/p2/iModel.h"
#include "../Core/p2/iSnd.h"

#include "../Core/x/xString.h"
#include "../Core/x/xDebug.h"

extern char zNPCTypeCommon_strings[];
extern int8* g_strz_lassanim[3];
extern int32 g_hash_lassanim[3];
extern volatile int32 g_skipDescent;
extern NPCConfig* g_ncfghead;
extern NPCSndTrax g_sndTrax_General[];
extern float32 lbl_803CE4C0;
extern int32 g_flg_wonder;
extern int32 g_isConversation;
extern float32 g_tmr_talkless;

xFactoryInst* ZNPC_Create_Common(int32 who, RyzMemGrow* grow, void*)
{
    zNPCCommon* com = NULL;

    switch (who)
    {
    case NPC_TYPE_COMMON:
    {
        com = new (who, grow) zNPCCommon(who);
        break;
    }
    }

    return com;
}

void ZNPC_Destroy_Common(xFactoryInst* inst)
{
    delete inst;
}

void ZNPC_Common_Startup()
{
    int32 i;

    for (i = 0; i < 3; i++)
    {
        g_hash_lassanim[i] = xStrHash(g_strz_lassanim[i]);
    }

    NPCSupport_Startup();
    NPCS_Startup();
    zNPCSettings_MakeDummy();
    zNPCFXStartup();
}

void ZNPC_Common_Shutdown()
{
    NPCS_Shutdown();
    NPCSupport_Shutdown();
    zNPCFXShutdown();
}

void zNPCCommon_ScenePrepare()
{
    NPCS_SndTimersReset();
    NPCS_SndTablePrepare(g_sndTrax_General);
    NPCSupport_ScenePrepare();
    zNPCCommon_WonderReset();
    g_skipDescent = 5;
}

void zNPCCommon_SceneFinish()
{
    zNPCCommon::ConfigSceneDone();
    NPCSupport_SceneFinish();
    xDebugRemoveTweak(zNPCTypeCommon_strings + 0x42b);
}

void zNPCCommon_SceneReset()
{
    NPCSupport_SceneReset();
    zNPCPlyrSnd_Reset();
    g_skipDescent = 5;
}

void zNPCCommon_ScenePostInit()
{
    NPCSupport_ScenePostInit();
}

void zNPCCommon_Timestep(float32 dt)
{
    NPCSupport_Timestep(dt);
    NPCS_SndTimersUpdate(dt);
    zNPCPlyrSnd_Update(dt);
    g_skipDescent -= 1;
    if (g_skipDescent < 0)
    {
        g_skipDescent = 0;
    }
}

// func_800EF09C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Init__10zNPCCommonFP9xEntAsset")

// func_800EF1B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "InitBounds__10zNPCCommonFv")

// func_800EF460
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Setup__10zNPCCommonFv")

// func_800EF8A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Reset__10zNPCCommonFv")

void zNPCCommon::Destroy()
{
    SelfDestroy();
}

// func_800EFA3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "Damage__10zNPCCommonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_800EFC34
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint")

// func_800EFD30
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCMessage__10zNPCCommonFP6NPCMsg")

// func_800F0004
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Move__10zNPCCommonFP6xScenefP9xEntFrame")

void zNPCCommon::Process(xScene* xscn, float32 dt)
{
    if ((flg_misc & 4) != 0)
    {
        ModelScaleSet(&cfg_npc->scl_model);
    }
    flags1.flg_upward = flags1.flg_upward & ~0x2;
    xNPCBasic::Process(xscn, dt);
}

// func_800F0164
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "BUpdate__10zNPCCommonFP5xVec3")

// func_800F0290
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "BoundAsRadius__10zNPCCommonCFi")

// func_800F0348
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NewTime__10zNPCCommonFP6xScenef")

// func_800F03D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_800F0D18
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "ConvertHitEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_800F0EEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "VelStop__10zNPCCommonFv")

// func_800F0FD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleAdjust__10zNPCCommonFfff")

// func_800F10AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleAccel__10zNPCCommonFfif")

// func_800F112C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ThrottleApply__10zNPCCommonFfPC5xVec3i")

// func_800F1238
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "TurnToFace__10zNPCCommonFfPC5xVec3f")

// func_800F1394
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ParseLinks__10zNPCCommonFv")

// func_800F1430
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ParseINI__10zNPCCommonFv")

void zNPCCommon::ParseProps()
{
    for (int32 i = 0x3f; i < 0x42; i++)
    {
        switch (i)
        {
        case 0x3f:
            MvptReset(NULL);
            break;
        default:
            break;
        }
    }
}

// func_800F1770
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "CollideReview__10zNPCCommonFv")

bool zNPCCommon::IsMountableType(en_ZBASETYPE type)
{
    switch (type)
    {
    case eBaseTypePlatform:
        return true;
        break;
    default:
        return false;
        break;
    }
}

void zNPCCommon::SelfDestroy()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    if (psy_instinct != NULL)
    {
        bmgr->UnSubscribe(psy_instinct);
    }
    psy_instinct = NULL;
}

// func_800F19F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "TagVerts__10zNPCCommonFv")

int32 zNPCCommon::GetVertPos(en_mdlvert vid, xVec3* pos)
{
    NPCConfig* cfg = cfg_npc;
    if (!(cfg->flg_vert & 1 << vid))
    {
        return 0;
    }
    iModelTagEval(model->Data, &cfg->tag_vert[vid], model->Mat, pos);
    return 1;
}

// func_800F1BBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "IsAttackFrame__10zNPCCommonFfi")

// func_800F1D40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GiveReward__10zNPCCommonFv")

// func_800F1EF4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCPlyrSnd_Reset__Fv")

// func_800F1F00
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCPlyrSnd_Update__Ff")

// func_800F1F24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "PlayerKiltMe__10zNPCCommonFv")

// func_800F1FEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ISeePlayer__10zNPCCommonFv")

void zNPCCommon::ConfigSceneDone()
{
    g_ncfghead = 0;
}

// func_800F22C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConfigCreate__10zNPCCommonFUi")

// func_800F2338
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ConfigFind__10zNPCCommonFUi")

// func_800F2398
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPi")

// func_800F23C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPf")

// func_800F23F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmP5xVec3")

// func_800F241C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPP10zMovePoint")

// func_800F2448
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParm__10zNPCCommonF10en_npcparmPv")

// func_800F25D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "GetParmDefault__10zNPCCommonF10en_npcparmPv")

// func_800F27E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "CanDoSplines__10zNPCCommonFv")

// func_800F2808
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "FirstAssigned__10zNPCCommonFv")

// func_800F283C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MvptReset__10zNPCCommonFP10zMovePoint")

// func_800F28B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MvptCycle__10zNPCCommonFv")

// func_800F2A0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "HaveLOSToPos__10zNPCCommonFP5xVec3fP6xSceneP5xBaseP7xCollis")

// func_800F2C60
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicHide__10zNPCCommonFiP14xModelInstance")

// func_800F2CB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicShow__10zNPCCommonFiP14xModelInstance")

// func_800F2D1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelAtomicFind__10zNPCCommonFiiP14xModelInstance")

// func_800F2D6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ModelScaleSet__10zNPCCommonFfff")

// func_800F2D90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimStart__10zNPCCommonFUii")

// func_800F2EA4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimSetState__10zNPCCommonFUif")

// func_800F2F08
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimFindState__10zNPCCommonFUi")

// func_800F2F3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurSingle__10zNPCCommonFv")

// func_800F2F9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurState__10zNPCCommonFv")

// func_800F3000
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimCurStateID__10zNPCCommonFv")

// func_800F3034
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimDuration__10zNPCCommonFP10xAnimState")

// func_800F3078
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimTimeRemain__10zNPCCommonFP10xAnimState")

// func_800F30D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "AnimTimeCurrent__10zNPCCommonFv")

// func_800F30E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCSettings_MakeDummy__Fv")

// func_800F3170
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCSettings_Find__FUi")

// func_800F31BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Vibrate__10zNPCCommonFff")

// func_800F3240
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Vibrate__10zNPCCommonF10en_npcvibef")

// func_800F3344
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "MatPosSet__10zNPCCommonFP5xVec3")

// func_800F3390
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCC_NPCIsConversing__Fv")

void zNPCCommon_WonderReset()
{
    g_isConversation = 0;
    g_flg_wonder = 0;
}

// func_800F33A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "WonderOfTalking__10zNPCCommonFiP5xBase")

// func_800F33E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SomethingWonderful__10zNPCCommonFv")

// func_800F34CC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayFromAFX__10zNPCCommonFP12zAnimFxSoundPUi")

// func_800F3590
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayFromSFX__10zNPCCommonFP4xSFXPUi")

// func_800F3634
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndPlayRandom__10zNPCCommonF12en_NPC_SOUND")

// func_800F36BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndStart__10zNPCCommonFUiP10NPCSndPropf")

// func_800F3914
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndIsAnyPlaying__10zNPCCommonFv")

// func_800F3968
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndChanIsBusy__10zNPCCommonFi")

// func_800F3994
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndKillSounds__10zNPCCommonFii")

// func_800F39F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "SndQueUpdate__10zNPCCommonFf")

uint32 zNPCCommon::LassoInit()
{
    lassdata = PRIV_GetLassoData();
    if (lassdata != NULL)
    {
        memset(lassdata, 0, 0x18);
        lassdata->stage = LASS_STAT_PENDING;
        lassdata->lassoee = this;
    }
    if (lassdata)
    {
        return 1;
    }
    return 0;
}

// func_800F3B68
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoSetup__10zNPCCommonFv")

// func_800F3C4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoUseGuides__10zNPCCommonFii")

// func_800F3CE8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "LassoGetAnims__10zNPCCommonFP14xModelInstanceP14xModelInstance")

// func_800F3E5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoSyncAnims__10zNPCCommonF11en_lassanim")

zNPCLassoInfo* zNPCCommon::GimmeLassInfo()
{
    return flg_vuln & 0x1000000 ? lassdata : NULL;
}
// func_800F3F24
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "LassoNotify__10zNPCCommonF14en_LASSO_EVENT")

// func_800F3FAC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeCommon.s",                                                                   \
    "AddBaseline__10zNPCCommonFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

// func_800F40D4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeCommon.s",                                                                   \
    "AddScripting__10zNPCCommonFP7xPsychePFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_i")

void zNPCCommon::AddDEVGoals()
{
}

// func_800F4248
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ZNPC_AnimTable_Common__Fv")

// func_800F42D4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "ZNPC_AnimTable_LassoGuide__Fv")

// func_800F43F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif")

// func_800F4588
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "zNPCCommon_EjectPhlemOnPawz__Fv")

// func_800F45F4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__ct__10zNPCCommonFi")

// func_800F4630
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_Name__10zNPCCommonFv")

void zNPCCommon::DBG_AddTweakers()
{
}

// func_800F463C
void zNPCCommon::SelfSetup()
{
}

// func_800F4640
void zNPCCommon::DBG_RptDataSize()
{
}

// func_800F4644
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "DBG_InstName__10zNPCCommonFv")

xEntDrive* zNPCCommon::PRIV_GetDriverData()
{
    return NULL;
}
void zNPCCommon::ModelScaleSet(const xVec3* vec)
{
    ModelScaleSet(vec->x, vec->y, vec->z);
}

// func_800F4698
xAnimTable* zNPCCommon::AnimGetTable()
{
    return model->Anim->Table;
}

// func_800F46A8
zNPCLassoInfo* zNPCCommon::PRIV_GetLassoData()
{
    return NULL;
}

// func_800F46B0
void zNPCCommon::DuploOwner(zNPCCommon* duper)
{
    npc_duplodude = duper;
}

void zNPCCommon::SpeakBegin()
{
}

void zNPCCommon::SpeakEnd()
{
}

void zNPCCommon::SpeakStart(uint32 param_1, uint32 param_2, int32 param_3)
{
}

void zNPCCommon::SpeakStop()
{
}

float32 zNPCCommon::GenShadCacheRad()
{
    return lbl_803CE4C0;
}

// func_800F46D0
#if 0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__ct__9xNPCBasicFi")
#else
// xNPCBasic vtable at: 0x2949F4
// vtable reference is stored immidately _after_ object fields in an xNPCBasic
// instance. That is, sizeof(xNPCBasic) = sizeof(visible fields) + an extra 4
// bytes for the vtable pointer after those fields.
// vtable[0] = NULL (I think these first two are for RTTI which is disabled)
// vtable[1] = NULL
// vtable[2] = Init(FP9xEntAsset)
// vtable[3] = PostInit(Fv)
// vtable[4] = Setup(Fv)
// vtable[5] = PostSetup(Fv)
// vtable[6] = Reset(Fv)
// vtable[7] = Process(FP6xScenef)
// vtable[8] = BUpdate(FP5xVec3)
// vtable[9] = NewTime(FP6xScenef)
// vtable[10] = Move(FP6xScenefP9xEntFrame)
// vtable[11] = SysEvent(FP5xBaseP5xBaseUiPCfP5xBasePi)
// vtable[12] = Render(Fv)
// vtable[13] = Save(CFP7xSerial)
// vtable[14] = Load(FP7xSerial)
// vtable[15] = CollideReview(Fv)
// vtable[16] = ColChkFlags(CFv)
// vtable[17] = ColPenFlags(CFv)
// vtable[18] = ColChkByFlags(CFv)
// vtable[19] = ColPenByFlags(CFv)
// vtable[20] = PhysicsFlags(CFv)
xNPCBasic::xNPCBasic(int32 value)
{
    myNPCType = value;
}
#endif

// func_800F4720
void xNPCBasic::Setup()
{
}

// func_800F4724
void xNPCBasic::Move(xScene* xscn, float32 dt, xEntFrame* frm)
{
}

// func_800F4728
int32 xNPCBasic::SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                          xBase* toParamWidget, int32* handled)
{
    return 1;
}

// func_800F4730
void xNPCBasic::DBG_PStatOn(en_npcperf stat)
{
}

// func_800F4734
void xNPCBasic::DBG_PStatCont(en_npcperf stat)
{
}

// func_800F4738
void xNPCBasic::PostInit()
{
}

void xNPCBasic::Render()
{
    xEntRender(this);
}

// func_800F475C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__12zNPCSettingsFRC12zNPCSettings")

// func_800F4810
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__9xDynAssetFRC9xDynAsset")

// func_800F4864
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "__as__10xBaseAssetFRC10xBaseAsset")

void xPsyche::ImmTranOn()
{
    flg_psyche |= 1;
}

void xPsyche::ImmTranOff()
{
    flg_psyche &= 0xfffffffe;
}

int32 xPsyche::ImmTranIsOn()
{
    return flg_psyche & 1;
}

int32 xPsyche::HasGoal(int32 goal)
{
    return FindGoal(goal) != NULL;
}

// func_800F48E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "Next__21xListItem_esc__0_9NPCConfig_esc__1_Fv")

// func_800F48E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "HasSpline__10zMovePointFv")

// func_800F48FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s", "xUtil_choose_esc__0_f_esc__1___FPCfiPCf")

uint32 xSndIsPlaying(uint32 assetID, uint32 parid)
{
    return iSndIsPlaying(assetID, parid) & 0xff;
}

// func_800F4A34
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypeCommon.s",                                                                   \
    "SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv")

// func_800F4A48
#pragma GLOBAL_ASM("asm/Game/zNPCTypeCommon.s",                                                    \
                   "Insert__21xListItem_esc__0_9NPCConfig_esc__1_FP9NPCConfig")
