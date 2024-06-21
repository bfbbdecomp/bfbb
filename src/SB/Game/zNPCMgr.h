#ifndef ZNPCMGR_H
#define ZNPCMGR_H

#include "xFactory.h"
#include "xBehaveMgr.h"

#include <types.h>

struct zNPCMgr : RyzMemData
{
    st_XORDEREDARRAY npclist;
    xFactory* npcFactory;
    xBehaveMgr* bmgr;
    xBase selfbase;

    zNPCMgr();
    void Shutdown();
    void ScenePrepare(int32 npccnt);
    void SceneFinish();
    void SceneReset();
    void ScenePostInit();
    void ScenePostSetup();
    void SceneTimestep(xScene* xscn, float32 dt);
    void ScenePostRender();
    void ScenePostParticleRender();
    xEnt* CreateNPC(xEntAsset* assdat);
    void DBG_Reset();
    void DBG_PerfTrack();
    ~zNPCMgr();

    /* Use as needed.
	en_NPCTYPES NPCTypeForModel(uint32 brainID, uint32 mdl_hash);
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
void zNPCMgr_scenePrepare(int32 npccnt);
void zNPCMgr_sceneFinish();
void zNPCMgr_sceneReset();
void zNPCMgr_scenePostInit();
void zNPCMgr_scenePostSetup();
void zNPCMgr_sceneTimestep(xScene* xscn, float32 dt);
void zNPCMgr_scenePostRender();
void zNPCMgr_scenePostParticleRender();
xEnt* zNPCMgr_createNPCInst(int32, xEntAsset* assdat);

int32 zNPCMgr_OrdComp_npcid(void* vkey, void* vitem);

#endif
