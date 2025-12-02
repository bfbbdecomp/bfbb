#ifndef ZNPCMGR_H
#define ZNPCMGR_H

#include "xFactory.h"
#include "xBehaveMgr.h"
#include "zNPCTypes.h"

#include <types.h>

struct zNPCMgr : RyzMemData
{
    st_XORDEREDARRAY npclist;
    xFactory* npcFactory;
    xBehaveMgr* bmgr;
    xBase selfbase;

    enum en_NPCTYPES NPCTypeForModel(U32 brainID, U32 mdl_hash);
    void BackdoorUpdateAllNPCsOnce(xScene*, F32);
    void PrepTypeTable();
    void Startup();
    void Shutdown();
    void ScenePrepare(S32 npccnt);
    void SceneFinish();
    void SceneReset();
    void ScenePostInit();
    void ScenePostSetup();
    void SceneTimestep(xScene* xscn, F32 dt);
    void ScenePostRender();
    void ScenePostParticleRender();
    xEnt* CreateNPC(xEntAsset* assdat);

    zNPCMgr()
    {
    }

    ~zNPCMgr()
    {
    }

    void DBG_Reset()
    {
    }

    void DBG_PerfTrack()
    {
    }

    /* Use as needed.
	en_NPCTYPES NPCTypeForModel(U32 brainID, U32 mdl_hash);
	xEnt* CreateNPC(xEntAsset* asset);
	void ScenePostParticleRender();
	void ScenePostRender();
	void* __dt();
	*/
};

zNPCMgr* zNPCMgrSelf();
st_XORDEREDARRAY* zNPCMgr_GetNPCList();
void zNPCMgr_Startup();
void zNPCMgr_Shutdown();
void zNPCMgr_scenePrepare(S32 npccnt);
void zNPCMgr_sceneFinish();
void zNPCMgr_sceneReset();
void zNPCMgr_scenePostInit();
void zNPCMgr_scenePostSetup();
void zNPCMgr_sceneTimestep(xScene* xscn, F32 dt);
void zNPCMgr_scenePostRender();
void zNPCMgr_scenePostParticleRender();
void zNPCMsg_SceneFinish();
xEnt* zNPCMgr_createNPCInst(S32, xEntAsset* assdat);

S32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem);
S32 zNPCMgr_OrdTest_npcid(const void* vkey, void* vitem);

#endif
