#include "zNPCMgr.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"
#include "zNPCSpawner.h"
#include "zNPCMessenger.h"

#include <types.h>

extern int32 g_modinit;
extern zNPCMgr* g_npcmgr;

zNPCMgr* zNPCMgrSelf()
{
    return g_npcmgr;
}

st_XORDEREDARRAY* zNPCMgr_GetNPCList()
{
    return &zNPCMgrSelf()->npclist;
}

#if 0
// Can't find the new operator declaration for some reason?
void zNPCMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        xBehaveMgr_Startup();
        zNPCMgr* npc = new (0x4e50434d, NULL) zNPCMgr(); //NPCM
        g_npcmgr = npc;
        Startup(npc);
    }
}

#endif

#if 0
// Doesn't set r4 to 1 before calling the delete operator...
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

#endif

void zNPCMgr_scenePrepare(int32 npccnt)
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

void zNPCMgr_sceneTimestep(xScene* xscn, float32 dt)
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

xEnt* zNPCMgr_createNPCInst(int32, xEntAsset* assdat)
{
    return zNPCMgrSelf()->CreateNPC(assdat);
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

#if 0
// Need to define all the functions.
void zNPCMgr::ScenePrepare(int32 npccnt)
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

#endif

#if 0
// Yeah good luck getting it to spit out an li instead of doing a shift.
int32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem)
{
    uint32 key = *(uint32*)vkey;
    uint32 item = *(uint32*)vitem;
    if (key < item)
    {
        return -1;
    }
    else
    {
        if (key > item)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

#endif

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
