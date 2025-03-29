#include "zNPCMgr.h"
#include "xLightKit.h"
#include "xRMemData.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypeRobot.h"
#include "zNPCTypeVillager.h"
#include "zNPCTypeSubBoss.h"
#include "zNPCTypeBoss.h"
#include "zNPCTypeDuplotron.h"
#include "zNPCTypes.h"
#include "zNPCSpawner.h"
#include "zNPCMessenger.h"
#include "zNPCGoals.h"
#include "zNPCTypeTiki.h"
#include "zGlobals.h"
#include "xFactory.h"
#include "zRenderState.h"

#include "xBehaveMgr.h"

#include <types.h>

extern S32 g_modinit;
extern zNPCMgr* g_npcmgr;

S32 g_firstFrameUpdateAllNPC;

struct NPCMTypeTable
{
    en_NPCTYPES useNPCType;
    char* modelName;
    unsigned int hashOfName;
} g_tbltype[250];

struct NPCBrainTableEntry
{
    char* name;
    en_NPCTYPES type;
    unsigned int id;
} g_brainTable[63];

zNPCMgr* zNPCMgrSelf()
{
    return g_npcmgr;
}

st_XORDEREDARRAY* zNPCMgr_GetNPCList()
{
    return &zNPCMgrSelf()->npclist;
}

void zNPCMgr::ScenePostInit()
{
    zNPCCommon_ScenePostInit();
    zNPCRobot_ScenePostInit();
    zNPCVillager_ScenePostInit();
    zNPCDuplotron_ScenePostInit();
}

void zNPCMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        xBehaveMgr_Startup();
        zNPCMgr* npc = new ('NPCM', NULL) zNPCMgr();
        g_npcmgr = npc;
        npc->Startup();
    }
}

void zNPCMgr_Shutdown()
{
    g_modinit--;
    if (g_modinit == 0)
    {
        zNPCMgr* mgr = zNPCMgrSelf();
        if (mgr != NULL)
        {
            mgr->Shutdown();
            delete mgr;
            g_npcmgr = NULL;
        }
        zNPCMgr_Shutdown();
        xBehaveMgr_Shutdown();
    }
}

void zNPCMgr_scenePrepare(S32 npccnt)
{
    zNPCMgrSelf()->ScenePrepare(npccnt);
}

void zNPCMgr_sceneFinish()
{
    zNPCMgrSelf()->SceneFinish();
}

void zNPCMgr_sceneReset()
{
    zNPCMgrSelf()->SceneReset();
}

void zNPCMgr_scenePostInit()
{
    zNPCMgrSelf()->ScenePostInit();
}

void zNPCMgr_scenePostSetup()
{
    zNPCMgrSelf()->ScenePostSetup();
}

void zNPCMgr_sceneTimestep(xScene* xscn, F32 dt)
{
    zNPCMgrSelf()->SceneTimestep(xscn, dt);
}

void zNPCMgr_scenePostRender()
{
    zNPCMgrSelf()->ScenePostRender();
}

void zNPCMgr_scenePostParticleRender()
{
    zNPCMgrSelf()->ScenePostParticleRender();
}

xEnt* zNPCMgr_createNPCInst(S32, xEntAsset* assdat)
{
    return zNPCMgrSelf()->CreateNPC(assdat);
}

void zNPCMgr::Startup()
{
    PrepTypeTable();
    selfbase.id = 'NPCM';
    selfbase.baseType = 0xAB;
    npcFactory = new ('NPCM', NULL) xFactory(0x60);
    zNPCMsg_Startup();
    zNPCSpawner_Startup();
    zNPCTypes_StartupTypes();
    zNPCTypes_RegisterTypes(npcFactory);
    bmgr = xBehaveMgr_GetSelf();
    xFactory* behaveMgrFactory = bmgr->GetFactory();
    zNPCGoals_RegisterTypes(behaveMgrFactory);
}

void zNPCMgr::Shutdown()
{
    if (this->npcFactory != NULL)
    {
        delete this->npcFactory;
    }
    this->npcFactory = NULL;
    zNPCTypes_ShutdownTypes();
    zNPCSpawner_Shutdown();
    zNPCMsg_Shutdown();
}

void zNPCMgr::PrepTypeTable()
{
    for (NPCMTypeTable* p = &g_tbltype[0]; p->useNPCType != NPC_TYPE_UNKNOWN; p++)
    {
        p->hashOfName = xStrHash(p->modelName);
    }

    for (int i = 0; i < (S32)(sizeof(g_brainTable) / sizeof(NPCBrainTableEntry)); i++)
    {
        g_brainTable[i].id = xStrHash(g_brainTable[i].name);
    }
}

void zNPCMgr::SceneReset()
{
    zNPCCommon_SceneReset();
    zNPCRobot_SceneReset();
    zNPCVillager_SceneReset();
    zNPCMsg_SceneReset();
    xBehaveMgr_SceneReset();
    BackdoorUpdateAllNPCsOnce(globals.sceneCur, 0.01666666f);
}

S32 zNPCMgr_OrdTest_npcid(const void* vkey, void* vitem)
{
    S32 rc;
    void* key = *(void**)(vitem);

    if (vkey < key)
    {
        rc = -1;
    }
    else if (vkey > key)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}

void zNPCMgr::ScenePostSetup()
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        xNPCBasic* npc = (xNPCBasic*)npclist.list[i];
        npc->PostSetup();
    }
}

void zNPCMgr::ScenePrepare(S32 npccnt)
{
    XOrdInit(&this->npclist, npccnt, 0);
    xBehaveMgr_ScenePrepare();
    zNPCMsg_ScenePrepare();
    zNPCSpawner_ScenePrepare();
    zNPCCommon_ScenePrepare();
    zNPCVillager_ScenePrepare();
    zNPCRobot_ScenePrepare();
    zNPCDuplotron_ScenePrepare();
    zNPCSubBoss_ScenePrepare();
    zNPCBoss_ScenePrepare();
    g_firstFrameUpdateAllNPC = 1;
}

void zNPCMgr::SceneFinish()
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        ((zNPCCommon*)npclist.list[i])->Destroy();
    }
    XOrdDone(&npclist, 0);
    npcFactory->DestroyAll();
    zNPCBoss_SceneFinish();
    zNPCSubBoss_SceneFinish();
    zNPCDuplotron_SceneFinish();
    zNPCRobot_SceneFinish();
    zNPCVillager_SceneFinish();
    zNPCCommon_SceneFinish();
    zNPCSpawner_SceneFinish();
    zNPCMsg_SceneFinish();
    xBehaveMgr_SceneFinish();
}

S32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem)
{
    S32 rc;
    U32 item;
    U32 key;

    key = *(U32*)vkey;
    item = *(U32*)vitem;
    if (key < item)
    {
        rc = -1;
    }
    else if (key > item)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    return rc;
}

zNPCMgr::zNPCMgr()
{
}

zNPCMgr::~zNPCMgr()
{
}

void zNPCMgr::DBG_Reset()
{
}

void zNPCMgr::DBG_PerfTrack()
{
}

xFactory* xBehaveMgr::GetFactory()
{
    return this->goalFactory;
}

void xNPCBasic::PostSetup()
{
}

void zNPCCommon::RenderExtra()
{
}

void zNPCCommon::RenderExtraPostParticles()
{
}

void zNPCMgr::ScenePostRender()
{
    xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);
    enum _SDRenderState old_rendstat = zRenderStateCurrent();
    zRenderState(SDRS_NPCVisual);
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        if (npc->flg_xtrarend & 0x1)
        {
            npc->flg_xtrarend &= ~0x1;
        }
        else
        {
            continue;
        }

        if (npc->baseFlags & 0x40)
        {
            continue;
        }

        if (npc->model == NULL || !(npc->model->Flags & 0x400))
        {
            npc->RenderExtra();
        }
    }
    xLightKit_Enable(0, globals.currWorld);
    zRenderState(old_rendstat);
}

void zNPCMgr::ScenePostParticleRender()
{
    xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);
    enum _SDRenderState old_rendstat = zRenderStateCurrent();
    zRenderState(SDRS_NPCVisual);
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        if (npc->flg_xtrarend & 0x2)
        {
            npc->flg_xtrarend &= ~0x2;
        }
        else
        {
            continue;
        }

        if (npc->baseFlags & 0x40)
        {
            continue;
        }

        if (npc->model == NULL || !(npc->model->Flags & 0x400))
        {
            npc->RenderExtraPostParticles();
        }
    }
    xLightKit_Enable(0, globals.currWorld);
    zRenderState(old_rendstat);
}

void zNPCMgr::SceneTimestep(xScene* xscn, F32 dt)
{
    DBG_PerfTrack();
    if (g_firstFrameUpdateAllNPC != 0)
    {
        BackdoorUpdateAllNPCsOnce(xscn, dt);
        g_firstFrameUpdateAllNPC = 0;
    }
    zNPCMsg_Timestep(xscn, dt);
    zNPCTiki_Timestep(xscn, dt);
    zNPCCommon_Timestep(xscn, dt);
    zNPCRobot_Timestep(xscn, dt);
    zNPCVillager_SceneTimestep(xscn, dt);
}

void zNPCMgr::BackdoorUpdateAllNPCsOnce(xScene* xscn, F32 dt)
{
    for (int i = 0; i < npclist.cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist.list[i];
        xSceneID2Name(globals.sceneCur, npc->id);

        if (npc->baseFlags & 0x40 && npc->update != NULL)
        {
            npc->update(npc, xscn, 1.0f / 60);
        }
    }
}
