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
    U32 state; // 0x16C
    zAssetPickup* p;
    void* anim;
    F32 animTime;
    F32 timer; // 0x17C
    F32 shake_timer;
    xVec3 shake_pos;
    S32 snackGateInfoDisplayed;
    F32 fx_timer;
    xPar* fx_par;
    zParEmitter* fx_emit;
    F32 fx_scale;
    xVec3 grab_pos;
    U32 flyflags;
    S32 flg_opts;
    xVec3 vel;
    xVec3 droppos;
    xBase* followTarget;
    xVec3 followOffset;
    xBase* dropParent;
    xEnt* useThisEntPos;
    xEntDrive drv;
    U16 pickupFlags; // 0x264
};

struct xEntPickupAsset
{
    U32 pickupHash;
    U16 pickupFlags;
    U16 pickupValue;
};

struct zPickupAuraInfo
{
    F32 size;
    F32 yoffset;
    iColor_tag color;
};

extern zParEmitter* gEmitShinySparkles;
extern U32 gEnableRewardsQueue;
extern zPickupAuraInfo zPickupAuraTable[];

void zEntPickup_Startup();
void zEntPickupInit(void* ent, void* asset);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickup_Setup(zEntPickup* p);
void zEntPickup_Setup();
S32 zEntPickupEventCB(xBase*, xBase* to, U32 toEvent, const F32* toParam,
                        xBase* toParamWidget);
void zEntPickup_FlyToInterface(zEntPickup*, F32);
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, F32 dt);
void zEntPickup_DoPickup(zEntPickup* ent);
void zEntPickup_GivePickup(zEntPickup* ent);
void zEntPickup_GiveAllRewardsNow();
void zEntPickup_Update(zEntPickup* ent, xScene* sc, F32 dt);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_FlushGrabbed();
void zEntPickup_MakeDroppable(zEntPickup* ent, xVec3* pos, xBase* dropParent);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_Render(zEntPickup* plist, U32 pcount);
void zEntPickup_RenderOne(xEnt* ent);
void zEntPickup_RenderList(zEntPickup* plist, U32 pcount);
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, U32 pcount, F32 dt);
void zEntPickup_SceneEnter();
void zEntPickup_SceneReset();
void zEntPickup_SceneUpdate(F32 dt);
void zEntPickup_SpawnNRewards(U32* pickups, U32 num, xVec3* ppos);
void zEntPickup_SpawnNRewards(U32* pickups, U32 num, xVec3 pos);
void zEntPickup_RewardPostSetup();

#endif
