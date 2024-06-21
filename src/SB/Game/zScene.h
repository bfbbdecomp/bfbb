#ifndef ZSCENE_H
#define ZSCENE_H

#include "xScene.h"
#include "xClimate.h"

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

extern _tagClimate gClimate;
extern _zEnv* gCurEnv;
extern uint32 gTransitionSceneID;
extern float32 gSceneUpdateTime;

void zSceneSet(xBase* b, uint32 index);
void zSceneInitEnvironmentalSoundEffect();
void zSceneInit(uint32 theSceneID, int32 reloadInProgress);
void zSceneExit(int32 beginReload);
void zSceneUpdateSFXWidgets();
void zSceneSwitch(_zPortal* p, int32 forceSameScene);
void zSceneSave(zScene* ent, xSerial* s);
void zSceneLoad(zScene* ent, xSerial* s);
void zSceneSetup();
void zSceneUpdate(float32 dt);
void zSceneRender();
xBase* zSceneFindObject(uint32 gameID);
xBase* zSceneGetObject(int32 type, int32 idx);
const char* zSceneGetName(uint32 gameID);
const char* zSceneGetName(xBase* b);
void zSceneForAllBase(xBase* (*func)(xBase*, zScene*, void*), void* data);
void zSceneForAllBase(xBase* (*func)(xBase*, zScene*, void*), int32 baseType, void* data);
void zSceneMemLvlChkCB();
uint32 zSceneLeavingLevel();
const char* zSceneGetLevelName(uint32 sceneID);
uint32 zSceneGetLevelIndex();
uint32 zSceneGetLevelIndex(uint32 sceneID);
const char* zSceneGetLevelPrefix(uint32 index);
const char* zSceneGetAreaname(uint32);
uint32 zSceneCalcProgress();
void zScene_UpdateFlyToInterface(float32 dt);
void zSceneCardCheckStartup_set(int32 needed, int32 available, int32 files);
void zSceneEnableVisited(zScene* s);
void zSceneEnableScreenAdj(uint32 enable);
void zSceneSetOldScreenAdj();
uint32 zScene_ScreenAdjustMode();
void zSceneSpawnRandomBubbles();

#endif
