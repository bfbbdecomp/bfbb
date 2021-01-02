#ifndef ZSCENE_H
#define ZSCENE_H

#include "../Core/x/xScene.h"

#include "zPortal.h"
#include "zEnt.h"
#include "zEnv.h"
#include "zBase.h"

struct zEnt;

struct zScene : xScene
{
    _zPortal* pendingPortal;
    union
    {
        uint32 num_ents;
        uint32 num_base;
    };
    union
    {
        xBase** base;
        zEnt** ents;
    };
    uint32 num_update_base;
    xBase** update_base;
    uint32 baseCount[eBaseTypeCount];
    xBase* baseList[eBaseTypeCount];
    _zEnv* zen;
};

xBase* zSceneFindObject(uint32 gameID);
void zSceneSwitch(_zPortal* p, int32 forceSameScene);
uint32 zSceneGetLevelIndex();
void zSceneInit(uint32 theSceneID, int32 reloadInProgress);
void zSceneSetup();
void zSceneExit(int32 beginReload);
void zSceneRender();
void zSceneUpdate(float32 dt);
int8* zSceneGetAreaname(uint32 theSceneID);

#endif