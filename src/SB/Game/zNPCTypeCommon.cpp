#include "zNPCTypeCommon.h"

#include <types.h>
#include <string.h>

#include "zNPCTypes.h"
#include "zNPCSndTable.h"
#include "zNPCSupport.h"
#include "zNPCFXCinematic.h"

#include "../Core/gc/iModel.h"
#include "../Core/gc/iSnd.h"

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













void zNPCCommon::Destroy()
{
    SelfDestroy();
}



                   



                   







void zNPCCommon::Process(xScene* xscn, float32 dt)
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



















void zNPCCommon::ConfigSceneDone()
{
    g_ncfghead = 0;
}







































                   


























































void zNPCCommon_WonderReset()
{
    g_isConversation = 0;
    g_flg_wonder = 0;
}































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









                   




zNPCLassoInfo* zNPCCommon::GimmeLassInfo()
{
    return flg_vuln & 0x1000000 ? lassdata : NULL;
}





    
    



    
    

void zNPCCommon::AddDEVGoals()
{
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
xNPCBasic::xNPCBasic(int32 value)
{
    myNPCType = value;
}
#endif


void xNPCBasic::Setup()
{
}


void xNPCBasic::Move(xScene* xscn, float32 dt, xEntFrame* frm)
{
}


int32 xNPCBasic::SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                          xBase* toParamWidget, int32* handled)
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

int32 xPsyche::ImmTranIsOn()
{
    return flg_psyche & 1;
}

int32 xPsyche::HasGoal(int32 goal)
{
    return FindGoal(goal) != NULL;
}










uint32 xSndIsPlaying(uint32 assetID, uint32 parid)
{
    return iSndIsPlaying(assetID, parid) & 0xff;
}



    
    



                   
