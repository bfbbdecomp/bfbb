#include "zNPCTypeCommon.h"

#include <types.h>
#include <string.h>

#include "zEntCruiseBubble.h"
#include "zEntTeleportBox.h"
#include "zGlobals.h"
#include "zNPCTypes.h"
#include "zNPCSndTable.h"
#include "zNPCSupport.h"
#include "zNPCFXCinematic.h"

#include "iModel.h"
#include "iSnd.h"

#include "xString.h"
#include "xDebug.h"

extern char zNPCTypeCommon_strings[];
extern char* g_strz_lassanim[3];
extern S32 g_hash_lassanim[3];
extern volatile S32 g_skipDescent;
extern NPCConfig* g_ncfghead;
extern NPCSndTrax g_sndTrax_General[];
extern F32 lbl_803CE4C0;
extern S32 g_flg_wonder;
extern S32 g_isConversation;
extern xBase* g_ownerConversation;
extern F32 g_tmr_talkless;

xFactoryInst* ZNPC_Create_Common(S32 who, RyzMemGrow* grow, void*)
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
    S32 i;

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

void zNPCCommon_Timestep(F32 dt)
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

void zNPCCommon::Destroy()
{
    SelfDestroy();
}

void zNPCCommon::Process(xScene* xscn, F32 dt)
{
    if ((flg_misc & 4) != 0)
    {
        ModelScaleSet(&cfg_npc->scl_model);
    }
    flags1.flg_upward = flags1.flg_upward & ~0x2;
    xNPCBasic::Process(xscn, dt);
}

void zNPCCommon::ParseProps()
{
    for (S32 i = 0x3f; i < 0x42; i++)
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

S32 zNPCCommon::GetVertPos(en_mdlvert vid, xVec3* pos)
{
    NPCConfig* cfg = cfg_npc;
    if (!(cfg->flg_vert & 1 << vid))
    {
        return 0;
    }
    iModelTagEval(model->Data, &cfg->tag_vert[vid], model->Mat, pos);
    return 1;
}

void zNPCCommon::ConfigSceneDone()
{
    g_ncfghead = 0;
}

void zNPCCommon_WonderReset()
{
    g_isConversation = 0;
    g_flg_wonder = 0;
}

S32 NPCC_NPCIsConversing()
{
    return g_isConversation;
}

void zNPCCommon::WonderOfTalking(S32 inprogress, xBase* owner)
{
    if (inprogress)
    {
        g_isConversation = 1;
        if (owner)
        {
            g_ownerConversation = owner;
            return;
        }
        else
        {
            g_ownerConversation = this;
            return;
        }
    }

    g_isConversation = 0;
    g_ownerConversation = NULL;
}

S32 zNPCCommon::SomethingWonderful()
{
    S32 flg_wonder = g_flg_wonder;

    if (globals.player.Health < 1)
    {
        // Idk why they wouldn't do flg_wonder |= x here, but this is needed to match
        flg_wonder = g_flg_wonder | 0b00000010;
    }

    if (globals.player.ControlOff & 0xffffbeff)
    {
        flg_wonder |= 0b00000100;
    }

    if (cruise_bubble::active() && (this->SelfType() & 0xffffff00) == 'NTF\0')
    {
        flg_wonder |= 0b01000000;
    }

    if (globals.cmgr && globals.cmgr->csn)
    {
        flg_wonder |= 0b00000001;
    }

    if (g_isConversation)
    {
        flg_wonder |= 0b00001000;
    }

    if (!NPCC_LampStatus())
    {
        flg_wonder |= 0b00100000;
    }

    if (zEntTeleportBox_playerIn())
    {
        flg_wonder |= 0b10000000;
    }

    return flg_wonder;
}

/*
// Off by one instruction, I don't understand what the original code is doing
S32 zNPCCommon::SndIsAnyPlaying()
{
    S32 iVar1 = 0;

    for (S32 i = 0; i < 4; i++)
    {
        iVar1 = xSndIsPlaying(0, this->id);
        if (iVar1)
        {
            break;
        }
    }

    return iVar1;
}
*/

U32 zNPCCommon::LassoInit()
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

zNPCLassoInfo* zNPCCommon::GimmeLassInfo()
{
    return flg_vuln & 0x1000000 ? lassdata : NULL;
}

void zNPCCommon::LassoNotify(en_LASSO_EVENT event)
{
    zNPCLassoInfo* lass = this->lassdata;

    if (!lass->stage && event)
    {
        return;
    }

    switch (event)
    {
    case LASS_STAT_DONE:
    {
        lass->stage = LASS_STAT_PENDING;
        break;
    }
    case LASS_STAT_PENDING:
    {
        lass->stage = LASS_STAT_DONE;
        break;
    }
    case LASS_STAT_GRABBING:
    {
        lass->stage = LASS_STAT_GRABBING;
        break;
    }
    case LASS_STAT_NOMORE:
    {
        lass->stage = LASS_STAT_TOSSING;
        return;
    }
    case LASS_STAT_UNK_5:
    {
        lass->stage = LASS_STAT_DONE;
        break;
    }
    }
}

void zNPCCommon::AddDEVGoals(xPsyche*)
{
}

U32 zNPCCommon::DBG_Name()
{
    return 0;
}

void zNPCCommon::DBG_AddTweakers()
{
}

void zNPCCommon::SelfSetup()
{
}

void zNPCCommon::DBG_RptDataSize()
{
}

U32 zNPCCommon::DBG_InstName()
{
    return this->DBG_Name();
}

xEntDrive* zNPCCommon::PRIV_GetDriverData()
{
    return NULL;
}
void zNPCCommon::ModelScaleSet(const xVec3* vec)
{
    ModelScaleSet(vec->x, vec->y, vec->z);
}

xAnimTable* zNPCCommon::AnimGetTable()
{
    return model->Anim->Table;
}

zNPCLassoInfo* zNPCCommon::PRIV_GetLassoData()
{
    return NULL;
}

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

void zNPCCommon::SpeakStart(U32 param_1, U32 param_2, S32 param_3)
{
}

void zNPCCommon::SpeakStop()
{
}

F32 zNPCCommon::GenShadCacheRad()
{
    return lbl_803CE4C0;
}

#if 0

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
xNPCBasic::xNPCBasic(S32 value)
{
    myNPCType = value;
}
#endif

void xNPCBasic::Setup()
{
}

void xNPCBasic::Move(xScene* xscn, F32 dt, xEntFrame* frm)
{
}

S32 xNPCBasic::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                          xBase* toParamWidget, S32* handled)
{
    return 1;
}

void xNPCBasic::DBG_PStatOn(en_npcperf stat)
{
}

void xNPCBasic::DBG_PStatCont(en_npcperf stat)
{
}

void xNPCBasic::PostInit()
{
}

void xNPCBasic::Render()
{
    xEntRender(this);
}

void xPsyche::ImmTranOn()
{
    flg_psyche |= 1;
}

void xPsyche::ImmTranOff()
{
    flg_psyche &= 0xfffffffe;
}

S32 xPsyche::ImmTranIsOn()
{
    return flg_psyche & 1;
}

S32 xPsyche::HasGoal(S32 goal)
{
    return FindGoal(goal) != NULL;
}

U32 xSndIsPlaying(U32 assetID, U32 parid)
{
    return iSndIsPlaying(assetID, parid) & 0xff;
}
