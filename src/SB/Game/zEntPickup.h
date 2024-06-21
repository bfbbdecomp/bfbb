#ifndef ZENTPICKUP_H
#define ZENTPICKUP_H

#include "zEnt.h"
#include "zPickupTable.h"
#include "zParEmitter.h"

#include "xEntDrive.h"
#include "xPar.h"
#include "xShadowSimple.h"
#include "iColor.h"

struct zEntPickup : zEnt
{
    xShadowSimpleCache simpShadow_embedded;
    uint32 state; // 0x16C
    zAssetPickup* p;
    void* anim;
    float32 animTime;
    float32 timer; // 0x17C
    float32 shake_timer;
    xVec3 shake_pos;
    int32 snackGateInfoDisplayed;
    float32 fx_timer;
    xPar* fx_par;
    zParEmitter* fx_emit;
    float32 fx_scale;
    xVec3 grab_pos;
    uint32 flyflags;
    int32 flg_opts;
    xVec3 vel;
    xVec3 droppos;
    xBase* followTarget;
    xVec3 followOffset;
    xBase* dropParent;
    xEnt* useThisEntPos;
    xEntDrive drv;
    uint16 pickupFlags; // 0x264
};

struct xEntPickupAsset
{
    uint32 pickupHash;
    uint16 pickupFlags;
    uint16 pickupValue;
};

struct zPickupAuraInfo
{
    float32 size;
    float32 yoffset;
    iColor_tag color;
};

extern zParEmitter* gEmitShinySparkles;
extern uint32 gEnableRewardsQueue;
extern zPickupAuraInfo zPickupAuraTable[];

void zEntPickup_Startup();
void zEntPickupInit(void* ent, void* asset);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickup_Setup(zEntPickup* p);
void zEntPickup_Setup();
int32 zEntPickupEventCB(xBase*, xBase* to, uint32 toEvent, const float32* toParam,
                        xBase* toParamWidget);
void zEntPickup_FlyToInterface(zEntPickup*, float32);
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float32 dt);
void zEntPickup_DoPickup(zEntPickup* ent);
void zEntPickup_GivePickup(zEntPickup* ent);
void zEntPickup_GiveAllRewardsNow();
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float32 dt);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_FlushGrabbed();
void zEntPickup_MakeDroppable(zEntPickup* ent, xVec3* pos, xBase* dropParent);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_Render(zEntPickup* plist, uint32 pcount);
void zEntPickup_RenderOne(xEnt* ent);
void zEntPickup_RenderList(zEntPickup* plist, uint32 pcount);
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, uint32 pcount, float32 dt);
void zEntPickup_SceneEnter();
void zEntPickup_SceneReset();
void zEntPickup_SceneUpdate(float32 dt);
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num, xVec3* ppos);
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num, xVec3 pos);
void zEntPickup_RewardPostSetup();

#endif
