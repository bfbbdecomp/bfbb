#ifndef ZNPCMGR_H
#define ZNPCMGR_H

#include "../Core/x/xFactory.h"
#include "../Core/x/xBehaveMgr.h"

#include <types.h>

struct zNPCMgr : RyzMemData
{
    st_XORDEREDARRAY npclist;
    xFactory* npcFactory;
    xBehaveMgr* bmgr;
    xBase selfbase;

    /* Use as needed.
	en_NPCTYPES NPCTypeForModel(uint32 brainID, uint32 mdl_hash);
	xEnt* CreateNPC(xEntAsset* asset);
	void ScenePostParticleRender();
	void ScenePostRender();
	void SceneFinish();
	void Shutdown();
	void* __dt();
	*/
};

zNPCMgr* zNPCMgrSelf();
st_XORDEREDARRAY* zNPCMgr_GetNPCList();
void zNPCMgr_Startup();

#endif