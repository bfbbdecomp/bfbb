#include "zScene.h"

#include "zEntTrigger.h"
#include "zMovePoint.h"
#include "zEntPickup.h"
#include "zEntSimpleObj.h"
#include "zPlatform.h"
#include "zPendulum.h"
#include "zEntHangable.h"
#include "zEntDestructObj.h"
#include "zEntButton.h"
#include "zPortal.h"
#include "zCamMarker.h"
#include "zGust.h"
#include "zVolume.h"
#include "zConditional.h"
#include "zEnv.h"
#include "zUI.h"
#include "zUIFont.h"
#include "zLight.h"
#include "zCutsceneMgr.h"
#include "zEGenerator.h"
#include "zScript.h"
#include "zDiscoFloor.h"
#include "zEntTeleportBox.h"
#include "zBusStop.h"
#include "zTextBox.h"
#include "zTalkBox.h"
#include "zTaskBox.h"
#include "zTaxi.h"
#include "zEntPlayerBungeeState.h"
#include "zCameraFly.h"
#include "zCameraTweak.h"
#include "zNPCMgr.h"
#include "zGlobals.h"
#include "zDispatcher.h"
#include "zThrown.h"
#include "zGrid.h"
#include "zFX.h"
#include "zSurface.h"
#include "zGoo.h"
#include "zParPTank.h"
#include "zAnimList.h"
#include "zParSys.h"
#include "zRenderState.h"
#include "zGame.h"
#include "zNPCGlyph.h"
#include "zNPCHazard.h"
#include "zEntPlayerOOBState.h"
#include "zActionLine.h"
#include "zGameState.h"
#include "zEntCruiseBubble.h"
#include "zHud.h"
#include "zMenu.h"
#include "zNPCTypeBossSandy.h"
#include "zNPCTypeBossPatrick.h"
#include "zCombo.h"
#include "zLOD.h"
#include "zMusic.h"
#include "zNPCTypeTiki.h"
#include "zGameExtras.h"
#include "zCollGeom.h"
#include "zFeet.h"
#include "zParCmd.h"
#include "zAssetTypes.h"

#include "../Core/x/xNPCBasic.h"
#include "../Core/x/xString.h"
#include "../Core/x/xstransvc.h"
#include "../Core/x/xDynAsset.h"
#include "../Core/x/xParSys.h"
#include "../Core/x/xParEmitter.h"
#include "../Core/x/xEntBoulder.h"
#include "../Core/x/xTimer.h"
#include "../Core/x/xCounter.h"
#include "../Core/x/xSFX.h"
#include "../Core/x/xGroup.h"
#include "../Core/x/xSurface.h"
#include "../Core/x/xFog.h"
#include "../Core/x/xHudModel.h"
#include "../Core/x/xHudFontMeter.h"
#include "../Core/x/xHudUnitMeter.h"
#include "../Core/x/xHudText.h"
#include "../Core/p2/iModel.h"
#include "../Core/x/xutil.h"
#include "../Core/x/xModelBucket.h"
#include "../Core/x/xFX.h"
#include "../Core/x/xDecal.h"
#include "../Core/x/xPtankPool.h"
#include "../Core/x/xSystem.h"
#include "../Core/x/xSkyDome.h"
#include "../Core/x/xShadow.h"
#include "../Core/x/xParMgr.h"
#include "../Core/x/xScrFx.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xCM.h"
#include "../Core/x/xMath.h"
#include "../Core/p2/iMath.h"
#include "../Core/x/xMarkerAsset.h"
#include "../Core/x/xPartition.h"

#include <string.h>
#include <stdio.h>

uint8 HACK_BASETYPE;
static int32 bytesNeeded;
static int32 availOnDisk;
static int32 neededFiles;
static float32 offsetx;
static float32 offsety;
static uint32 enableScreenAdj;
static float32 oldOffsetx;
static float32 oldOffsety;
static int32 sMemDepthSceneStart = -1;
static int32 sMemDepthJustHIPStart = -1;
_zEnv* gCurEnv;
uint32 gTransitionSceneID;
float32 gSceneUpdateTime;
static xVec3 sOldPosPlayer;
static xVec3 sOldPosCamera;
static uint32 sSuddenMove;

struct zSceneLevel
{
    const char* desc;
    const char* prefix;
};

// clang-format off
static zSceneLevel sLevelTable[] =
{
    { "Bikini Bottom", "HB" },
    { "Jellyfish Fields", "JF"} ,
    { "Downtown Bikini Bottom", "BB" },
    { "Goo Lagoon", "GL" },
    { "Poseidome", "B1" },
    { "Rock Bottom", "RB" },
    { "Mermalair", "BC" },
    { "Sand Mountain", "SM" },
    { "Industrial Park", "B2" },
    { "Kelp Forest", "KF" },
    { "Flying Dutchman's Graveyard", "GY" },
    { "Spongebob's Dream", "DB" },
    { "Chum Bucket Lab", "B3" },
    { "PLAYGROUND", "PG" },
    { "Start", "MN" }
};
// clang-format on

struct zSceneObjectInstanceDesc
{
    const char* name;
    int32 baseType;
    uint32 assetType;
    uint32 sizeRuntime;
    uint32 (*func)(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
    void (*objectInitFunc)(void* ent, void* asset);
    uint32 (*querySubObjects)(void*);
};

static uint32 zSceneInitFunc_DefaultEnt(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Default(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_MovePoint(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_SBNPC(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Player(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Camera(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Surface(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Gust(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Volume(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_LobMaster(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);
static uint32 zSceneInitFunc_Dispatcher(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx);

// clang-format off
static zSceneObjectInstanceDesc sInitTable[] =
{
    { "Trig", eBaseTypeTrigger, 'TRIG', sizeof(zEntTrigger), zSceneInitFunc_DefaultEnt, zEntTriggerInit, NULL },
    { "Move Point", eBaseTypeMovePoint, 'MVPT', sizeof(zMovePoint), zSceneInitFunc_MovePoint, NULL, NULL },
    { "Pickup", eBaseTypePickup, 'PKUP', sizeof(zEntPickup), zSceneInitFunc_DefaultEnt, zEntPickupInit, NULL },
    { "Simple", eBaseTypeStatic, 'SIMP', sizeof(zEntSimpleObj), zSceneInitFunc_DefaultEnt, zEntSimpleObj_Init, NULL },
    { "ParticleSystem", eBaseTypeParticleSystem, 'PARS', sizeof(xParSys), zSceneInitFunc_Default, xParSysInit, NULL },
    { "ParticleEmitter", eBaseTypeParticleEmitter, 'PARE', sizeof(xParEmitter), zSceneInitFunc_Default, xParEmitterInit, NULL },
    { "Track", eBaseTypeTrackPhysics, 'TRCK', sizeof(zEntSimpleObj), zSceneInitFunc_DefaultEnt, zEntTrackPhysics_Init, NULL },
    { "Platform", eBaseTypePlatform, 'PLAT', sizeof(zPlatform), zSceneInitFunc_DefaultEnt, zPlatform_Init, NULL },
    { "Pendulum", eBaseTypePendulum, 'PEND', sizeof(_zPendulum), zSceneInitFunc_DefaultEnt, zPendulum_Init, NULL },
    { "Hanger", eBaseTypeHangable, 'HANG', sizeof(zEntHangable), zSceneInitFunc_DefaultEnt, zEntHangable_Init, NULL },
    { "DestructObj", eBaseTypeDestructObj, 'DSTR', sizeof(zEntDestructObj), zSceneInitFunc_DefaultEnt, zEntDestructObj_Init, NULL },
    { "Boulder", eBaseTypeBoulder, 'BOUL', sizeof(xEntBoulder), zSceneInitFunc_DefaultEnt, xEntBoulder_Init, NULL },
    { "NPC", eBaseTypeNPC, 'VIL ', 0, zSceneInitFunc_SBNPC, NULL, NULL },
    { "Button", eBaseTypeButton, 'BUTN', sizeof(_zEntButton), zSceneInitFunc_DefaultEnt, zEntButton_Init, NULL },
    { "Player", eBaseTypePlayer, 'PLYR', sizeof(zEnt), zSceneInitFunc_Player, NULL, NULL },
    { "Timer", eBaseTypeTimer, 'TIMR', sizeof(xTimer), zSceneInitFunc_Default, xTimerInit, NULL },
    { "Counter", eBaseTypeCounter, 'CNTR', sizeof(_xCounter), zSceneInitFunc_Default, xCounterInit, NULL },
    { "SFX", eBaseTypeSFX, 'SFX ', sizeof(xSFX), zSceneInitFunc_Default, xSFXInit, NULL },
    { "Group", eBaseTypeGroup, 'GRUP', sizeof(xGroup), zSceneInitFunc_Default, xGroupInit, NULL },
    { "Portal", eBaseTypePortal, 'PORT', sizeof(_zPortal), zSceneInitFunc_Default, zPortalInit, NULL },
    { "Camera", eBaseTypeCamera, 'CAM ', sizeof(zCamMarker), zSceneInitFunc_Camera, NULL, NULL },
    { "Surface", eBaseTypeSurface, 'SURF', sizeof(xSurface), zSceneInitFunc_Surface, NULL, NULL },
    { "Gust", eBaseTypeGust, 'GUST', sizeof(zGust), zSceneInitFunc_Gust, NULL, NULL },
    { "Volume", eBaseTypeVolume, 'VOLU', sizeof(zVolume), zSceneInitFunc_Volume, NULL, NULL },
    { "Conditional", eBaseTypeCond, 'COND', sizeof(_zConditional), zSceneInitFunc_Default, zConditionalInit, NULL },
    { "Lob Master", eBaseTypeLobMaster, 'LOBM', 0, zSceneInitFunc_LobMaster, NULL, NULL },
    { "Env", eBaseTypeEnv, 'ENV ', sizeof(_zEnv), zSceneInitFunc_Default, zEnvInit, NULL },
    { "Dispatcher", eBaseTypeDispatcher, 'DPAT', 0, zSceneInitFunc_Dispatcher, NULL, NULL },
    { "UI", eBaseTypeUI, 'UI  ', sizeof(_zUI), zSceneInitFunc_DefaultEnt, zUI_Init, NULL },
    { "UI Font", eBaseTypeUIFont, 'UIFT', sizeof(zUIFont), zSceneInitFunc_Default, zUIFont_Init, NULL },
    { "Fog", eBaseTypeFog, 'FOG ', sizeof(_xFog), zSceneInitFunc_Default, xFogInit, NULL },
    { "Light", eBaseTypeLight, 'LITE', sizeof(_zLight), zSceneInitFunc_Default, zLightInit, NULL },
    { "CutSceneMgr", eBaseTypeCutsceneMgr, 'CSNM', sizeof(zCutsceneMgr), zSceneInitFunc_Default, zCutsceneMgrInit, NULL },
    { "EGenerator", eBaseTypeEGenerator, 'EGEN', sizeof(zEGenerator), zSceneInitFunc_DefaultEnt, zEGenerator_Init, NULL },
    { "Script", eBaseTypeScript, 'SCRP', sizeof(_zScript), zSceneInitFunc_Default, zScriptInit, NULL },
    { "Disco Floor", eBaseTypeDiscoFloor, 'DSCO', sizeof(z_disco_floor), zSceneInitFunc_Default, z_disco_floor::init, NULL },
    { NULL }
};
// clang-format on

extern uint32 _1250;
extern float32 _1373;
extern float32 _1374;
extern float32 _1375;
extern float32 _1493;
extern float32 _1494;
extern float32 _1495;
extern float32 _1496_0;
extern float32 _2013;
extern float32 _2094;
extern float32 _2095_0;
extern float32 _2096_0;
extern float32 _2097_0;
extern float32 _2242;

extern uint32 _1251;
extern char byte_803D0884;

static void zSceneObjHashtableInit(int32 count);
static void zSceneObjHashtableExit();
static int32 zSceneObjHashtableUsage();
static void zSceneObjHashtableAdd(uint32 id, xBase* base);
static xBase* zSceneObjHashtableGet(uint32 id);
static xBase* zSceneExitSoundIteratorCB(xBase* b, zScene*, void*);
static void zSceneAutoSave();

namespace
{
    struct dynamic_type_data
    {
        const char* name;
        int32 type;
        ulong32 size;
        bool is_ent;
        void (*load)(xBase& data, xDynAsset& asset, ulong32 size);
    };

    extern const dynamic_type_data dynamic_types[14];

    // clang-format off
    const dynamic_type_data dynamic_types[] =
    {
        { "game_object:Teleport", eBaseTypeTeleportBox, sizeof(_zEntTeleportBox), true, zEntTeleportBox_Init },
        { "game_object:BusStop", eBaseTypeBusStop, sizeof(zBusStop), false, zBusStop_Init },
        { "game_object:text_box", eBaseTypeTextBox, sizeof(ztextbox), false, ztextbox::load },
        { "game_object:talk_box", eBaseTypeTalkBox, sizeof(ztalkbox), false, ztalkbox::load },
        { "game_object:task_box", eBaseTypeTaskBox, sizeof(ztaskbox), false, ztaskbox::load },
        { "game_object:BoulderGenerator", eBaseTypeBoulderGenerator, sizeof(xBoulderGenerator), false, xBoulderGenerator_Init },
        { "game_object:Taxi", eBaseTypeTaxi, sizeof(zTaxi), false, zTaxi_Init },
        { "hud:model", eBaseTypeHUD_model, sizeof(xBase) + sizeof(xhud::model_widget), false, xhud::model_widget::load },
        { "hud:meter:font", eBaseTypeHUD_font_meter, sizeof(xBase) + sizeof(xhud::font_meter_widget), false, xhud::font_meter_widget::load },
        { "hud:meter:unit", eBaseTypeHUD_unit_meter, sizeof(xBase) + sizeof(xhud::unit_meter_widget), false, xhud::unit_meter_widget::load },
        { "hud:text", eBaseTypeHUD_text, sizeof(xBase) + sizeof(xhud::text_widget), false, xhud::text_widget::load },
        { "game_object:bungee_hook", eBaseTypeBungeeHook, sizeof(bungee_state::hook_type), false, bungee_state::load },
        { "game_object:Flythrough", eBaseTypeCameraFly, sizeof(zCameraFly), false, zCameraFly_Init },
#if 1
        { "game_object:Camera_Tweak\0"
          "... scene preload ...\n\0"
          "... scene loading ...\n\0"
          "... scene asset queue ...\n\0"
          "...initializing scene - sound\n\0"
          "...initializing scene - base types\n\0"
          "PAREMIT_FIREWORKS_TRAIL\0"
          "PAREMIT_FIREWORKS1\0"
          "PAREMIT_FIREWORKS2\0"
          "Fireworks_explode\0"
          "Fireworks_trail", eBaseTypeCameraTweak, sizeof(zCameraTweak), false, zCameraTweak_Init }
#else
        { "game_object:Camera_Tweak", eBaseTypeCameraTweak, sizeof(zCameraTweak), false, zCameraTweak_Init }
#endif
    };
    // clang-format on

    int32 count_dynamic_types(const char* name)
    {
        uint32 type = xStrHash(name);
        int32 dynaCount = xSTAssetCountByType('DYNA');
        int32 count = 0;

        for (int32 i = 0; i < dynaCount; i++)
        {
            uint32 size;
            xDynAsset* asset = (xDynAsset*)xSTFindAssetByType('DYNA', i, &size);

            if (asset && asset->type == type)
            {
                count++;
            }
        }

        return count;
    }

    void add_dynamic_types(zScene& s)
    {
        for (int32 i = 0; i < sizeof(dynamic_types) / sizeof(dynamic_types[0]); i++)
        {
            int32 count = count_dynamic_types(dynamic_types[i].name);

            s.baseCount[dynamic_types[i].type] = count;
            s.num_base += count;
        }
    }

    uint32 init_dynamic_type(zScene& s, uint32 index, const dynamic_type_data& d)
    {
        uint32 count, type;
        int32 dyn_size, i, cnt;

        s.baseList[d.type] = NULL;

        if (s.baseCount[d.type] == 0)
        {
            return index;
        }

        if (d.size)
        {
            dyn_size = s.baseCount[d.type] * d.size;
            s.baseList[d.type] = (xBase*)xMemAlloc(dyn_size);
        }

        type = xStrHash(d.name);
        count = xSTAssetCountByType('DYNA');

        for (i = 0, cnt = 0; i < (int32)count; i++)
        {
            uint32 asset_size;
            xDynAsset* a;
            xBase* b;

            a = (xDynAsset*)xSTFindAssetByType('DYNA', i, &asset_size);

            if (a && a->type == type)
            {
                a->baseType = d.type;

                xSTAssetName(a);

                b = (xBase*)((uint8*)s.baseList[d.type] + cnt * d.size);

                zSceneSet(b, index);

                if (d.load)
                {
                    d.load(*b, *a, asset_size);
                }

                if (d.is_ent)
                {
                    xSceneAddEnt(&s, s.ents[index]);
                }

                zSceneObjHashtableAdd(b->id, b);

                index++;
                cnt++;
            }
        }

        return index;
    }

    uint32 init_dynamic_types(zScene& s, uint32 index)
    {
        for (int32 i = 0; i < sizeof(dynamic_types) / sizeof(dynamic_types[0]); i++)
        {
            if (dynamic_types[i].load)
            {
                index = init_dynamic_type(s, index, dynamic_types[i]);
            }
        }

        return index;
    }
} // namespace

struct IDBasePair
{
    uint32 id;
    xBase* base;
};

static IDBasePair* scobj_idbps;
static int32 scobj_size = -1;
static int32 nidbps = -1;

static uint32 zSceneInitFunc_DefaultEnt(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    uint8* block;
    int32 count;
    uint32 assetSize, offset;
    xBase* b;

    block = NULL;
    assetSize = 0;
    offset = desc->sizeRuntime;
    count = s->baseCount[desc->baseType];

    if (count)
    {
        block = (uint8*)xMemAlloc(count * offset);

        s->baseList[desc->baseType] = (xBase*)block;
    }

    for (int32 i = 0; i < count; i++)
    {
        void* asset = xSTFindAssetByType(desc->assetType, i, &assetSize);
        b = (xBase*)(block + i * offset);

        zSceneSet(b, base_idx);

        if (desc->objectInitFunc)
        {
            desc->objectInitFunc(b, asset);
        }

        xSceneAddEnt(s, s->ents[base_idx]);
        zSceneObjHashtableAdd(b->id, b);

        base_idx++;
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Default(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    uint8* block;
    int32 count;
    uint32 assetSize, offset;
    xBase* b;

    block = NULL;
    assetSize = 0;
    offset = desc->sizeRuntime;
    count = s->baseCount[desc->baseType];

    if (count)
    {
        block = (uint8*)xMemAlloc(count * offset);

        s->baseList[desc->baseType] = (xBase*)block;
    }

    for (int32 i = 0; i < count; i++)
    {
        void* asset = xSTFindAssetByType(desc->assetType, i, &assetSize);
        b = (xBase*)(block + i * offset);

        zSceneSet(b, base_idx);

        if (desc->objectInitFunc)
        {
            desc->objectInitFunc(b, asset);
        }

        zSceneObjHashtableAdd(b->id, b);

        base_idx++;
    }

    return base_idx;
}

static uint32 zSceneInitFunc_MovePoint(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;
    uint32 assetSize;
    zMovePoint* movpBlock;

    assetSize = 0;
    count = s->baseCount[desc->baseType];
    movpBlock = zMovePoint_GetMemPool(count);

    if (movpBlock)
    {
        s->baseList[desc->baseType] = movpBlock;

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = zMovePoint_GetInst(idx);
            xBaseAsset* basset = (xBaseAsset*)xSTFindAssetByType('MVPT', idx, &assetSize);

            zSceneSet(b, base_idx);
            zMovePointInit(zMovePoint_GetInst(idx), (xMovePointAsset*)basset);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_SBNPC(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;

    count = s->baseCount[desc->baseType];

    if (count == 0)
    {
        return base_idx;
    }

    s->baseList[desc->baseType] = NULL;

    for (int32 i = 0; i < count; i++)
    {
        xEnt* ent;
        xEntAsset* assdat;

        assdat = (xEntAsset*)xSTFindAssetByType('VIL ', i, NULL);
        ent = zNPCMgr_createNPCInst(i, assdat);

        zSceneSet(ent, base_idx);
        xSceneAddEnt(s, s->ents[base_idx]);
        zSceneObjHashtableAdd(ent->id, ent);

        base_idx++;
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Player(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;
    zEnt* entBlock;

    count = s->baseCount[desc->baseType];

    if (count)
    {
        entBlock = (zEnt*)xMemAlloc(count * sizeof(zEnt));

        s->baseList[desc->baseType] = entBlock;

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = &globals.player.ent;
            xEntAsset* asset;

            zSceneSet(b, base_idx);

            if (idx == count - 1)
            {
                xSceneAddEnt(s, s->ents[base_idx]);
            }

            asset = (xEntAsset*)xSTFindAssetByType('PLYR', idx, NULL);

            globals.player.ent.id = asset->id;

            zSceneObjHashtableAdd(asset->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Camera(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;
    zCamMarker* camBlock;

    count = s->baseCount[desc->baseType];

    if (count)
    {
        camBlock = (zCamMarker*)xMemAlloc(count * sizeof(zCamMarker));
        s->baseList[desc->baseType] = camBlock;

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = &camBlock[idx];
            xCamAsset* assetCam = (xCamAsset*)xSTFindAssetByType('CAM ', idx, NULL);

            zSceneSet(b, base_idx);
            zCamMarkerInit(b, assetCam);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Surface(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;

    count = s->baseCount[desc->baseType];

    if (count)
    {
        s->baseList[desc->baseType] = xSurfaceGetByIdx(0);

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = xSurfaceGetByIdx(idx);

            zSceneSet(b, base_idx);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Gust(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;

    count = s->baseCount[desc->baseType];

    zGustInit();

    if (count)
    {
        s->baseList[desc->baseType] = zGustGetGust(0);

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = zGustGetGust(idx);

            zSceneSet(b, base_idx);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_Volume(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;

    count = s->baseCount[desc->baseType];

    zVolumeInit();

    if (count)
    {
        s->baseList[desc->baseType] = zVolumeGetVolume(0);

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = zVolumeGetVolume(idx);

            zLightSetVolume((zVolume*)b);

            zSceneSet(b, base_idx);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

static uint32 zSceneInitFunc_LobMaster(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    return base_idx;
}

static uint32 zSceneInitFunc_Dispatcher(zScene* s, zSceneObjectInstanceDesc* desc, uint32 base_idx)
{
    int32 count;

    count = s->baseCount[desc->baseType];

    if (count)
    {
        st_ZDISPATCH_DATA* dpat_pool = zDispatcher_memPool(count);
        s->baseList[desc->baseType] = dpat_pool;

        for (int32 idx = 0; idx < count; idx++)
        {
            xBase* b = zDispatcher_getInst(dpat_pool, idx);
            xEntAsset* asset = (xEntAsset*)xSTFindAssetByType('DPAT', idx, NULL);

            zSceneSet(b, base_idx);
            zDispatcher_Init((st_ZDISPATCH_DATA*)b, asset);
            zSceneObjHashtableAdd(b->id, b);

            base_idx++;
        }
    }

    return base_idx;
}

void zSceneSet(xBase* b, uint32 index)
{
    globals.sceneCur->base[index] = b;
}

static void PipeCountStuffCB(RpAtomic*, uint32 pipeFlags, uint32)
{
    if (pipeFlags)
    {
        xModelLookupCount++;
    }
}

static void PipeAddStuffCB(RpAtomic* data, uint32 pipeFlags, uint32)
{
    if (pipeFlags)
    {
        xModelLookupList[xModelLookupCount].model = data;
        xModelLookupList[xModelLookupCount].PipeFlags = pipeFlags;
        xModelLookupCount++;
    }
}

#ifndef NON_MATCHING
static void PipeForAllSceneModels(void (*pipeCB)(RpAtomic* data, uint32 pipeFlags,
                                                 uint32 subObjects));
// func_800B1564
#pragma GLOBAL_ASM("asm/Game/zScene.s", "PipeForAllSceneModels__FPFP8RpAtomicUiUi_v")
#else
static void PipeForAllSceneModels(void (*pipeCB)(RpAtomic* data, uint32 pipeFlags,
                                                 uint32 subObjects))
{
    // non-matching: wrong registers

    int32 i, j, k;
    int32 numModels = xSTAssetCountByType('MODL');

    for (i = 0; i < numModels; i++)
    {
        RpAtomic* model = (RpAtomic*)xSTFindAssetByType('MODL', i, NULL);

        if (model)
        {
            st_PKR_ASSET_TOCINFO ainfo;
            uint32 numSubObjects, remainSubObjBits, currSubObjBits;
            RpAtomic* tempmodel;

            xSTGetAssetInfoByType('MODL', i, &ainfo);

            numSubObjects = 0;
            tempmodel = model;

            do
            {
                numSubObjects++;
                tempmodel = iModelFile_RWMultiAtomic(tempmodel);
            } while (tempmodel);

            remainSubObjBits = (1 << numSubObjects) - 1;

            for (j = 0; j < xModelPipeNumTables; j++)
            {
                for (k = 0; k < xModelPipeCount[j]; k++)
                {
                    if (ainfo.aid == xModelPipeData[j][k].ModelHashID)
                    {
                        currSubObjBits = remainSubObjBits & xModelPipeData[j][k].SubObjectBits;

                        if (currSubObjBits)
                        {
                            pipeCB(model, xModelPipeData[j][k].PipeFlags, currSubObjBits);
                        }

                        remainSubObjBits &= ~currSubObjBits;

                        if (!remainSubObjBits)
                        {
                            goto loc_800B1698;
                        }
                    }
                }
            }

            if (remainSubObjBits)
            {
                pipeCB(model, 0, remainSubObjBits);
            }
        }

    loc_800B1698:
        continue;
    }
}
#endif

void zSceneInitEnvironmentalSoundEffect()
{
    switch (globals.sceneCur->sceneID)
    {
    case 'DB06':
    case 'KF04':
    case 'GL02':
    case 'BB03':
    case 'BC01':
    case 'BC02':
    case 'BC03':
    case 'BC04':
    case 'BC05':
    {
        xSndSetEnvironmentalEffect(SND_EFFECT_CAVE);
        break;
    }
    default:
    {
        xSndSetEnvironmentalEffect(SND_EFFECT_NONE);
        break;
    }
    }
}

static uint32 BaseTypeNeedsUpdate(uint8 baseType)
{
    if (baseType == eBaseTypeUnknown || baseType == eBaseTypePlayer || baseType == eBaseTypeEnv ||
        baseType == eBaseTypeCamera || baseType == eBaseTypeStatic ||
        baseType == eBaseTypeMovePoint || baseType == eBaseTypeBubble ||
        baseType == eBaseTypePortal || baseType == eBaseTypeGroup || baseType == eBaseTypeSFX ||
        baseType == eBaseTypeFFX || baseType == eBaseTypeVFX || baseType == eBaseTypeCounter ||
        baseType == eBaseTypeProjectile || baseType == eBaseTypeGust ||
        baseType == eBaseTypeVolume || baseType == eBaseTypeDispatcher ||
        baseType == eBaseTypeCond || baseType == eBaseTypeUI ||
        baseType == eBaseTypeProjectileType || baseType == eBaseTypeLobMaster ||
        baseType == eBaseTypeCutsceneMgr || baseType == eBaseTypeHud ||
        baseType == eBaseTypeNPCProps || baseType == eBaseTypeParticleEmitterProps ||
        baseType == eBaseTypeCruiseBubble || baseType == eBaseTypeTextBox ||
        baseType == eBaseTypeTalkBox || baseType == eBaseTypeTaskBox ||
        baseType == eBaseTypeBoulderGenerator || baseType == eBaseTypeNPCSettings ||
        baseType == eBaseTypeTurret)
    {
        return 0;
    }

    return 1;
}

void add_scene_tweaks();

#if 1
// func_800B1828
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneInit__FUii")
#else
void zSceneInit(uint32 theSceneID, int32 reloadInProgress)
{
    float32 pdone;
    zScene* s;
    uint32 i;

    uint8 rgba_bkgrd[4];
    *(uint32*)rgba_bkgrd = _1250;

    gTransitionSceneID = theSceneID;
    gOccludeCount = 0;

    char b[5];
    *(uint32*)b = _1251;
    b[4] = byte_803D0884;

    sprintf(b, xUtil_idtag2string(theSceneID, 0));
    xStrupr(b);

    theSceneID = (b[0] << 24) | (b[1] << 16) | (b[2] << 8) | b[3];

    xUtil_idtag2string(theSceneID, 0);

    xFogClearFog();
    xSndSceneInit();

    if (!reloadInProgress)
    {
        sMemDepthSceneStart = xMemPushBase();
    }

    zGameScreenTransitionBegin();
    zParPTankInit();

    pdone = _1373;

    if (globals.useHIPHOP && !reloadInProgress)
    {
        zGameScreenTransitionUpdate(pdone, "... scene preload ...\n");

        int32 ver_hop = xSTPreLoadScene(theSceneID, NULL, 0x2);

        if (ver_hop >= 0x000A000F)
        {
            xSTQueueSceneAssets(theSceneID, 0x2);

            do
            {
                rgba_bkgrd[0] = 0;
                rgba_bkgrd[1] = 0;
                rgba_bkgrd[2] = 0;
                rgba_bkgrd[3] = 0;

                pdone += _1373;

                zGameScreenTransitionUpdate(pdone, "... scene loading ...\n", rgba_bkgrd);
            } while (xSTLoadStep(theSceneID) < _1374);

            xSTDisconnect(theSceneID, 0x2);
        }
    }

    sMemDepthJustHIPStart = xMemPushBase();
    s = (zScene*)xMemAlloc(sizeof(zScene));

    globals.sceneCur = s;

    xSceneInit(s, 200, 2048, 2068, 250);

    s->env = (xEnv*)xMemAlloc(sizeof(xEnv));
    s->sceneID = theSceneID;

    iTime time;

    time = iTimeGet();
    xUtil_idtag2string(theSceneID, 0);
    iTimeDiffSec(time);

    xSTPreLoadScene(theSceneID, NULL, 0x1);

    time = iTimeGet();
    xUtil_idtag2string(theSceneID, 0);
    iTimeDiffSec(time);

    xSTQueueSceneAssets(theSceneID, 0x1);

    time = iTimeGet();
    xUtil_idtag2string(theSceneID, 0);
    iTimeDiffSec(time);

    pdone += _1373;

    zGameScreenTransitionUpdate(pdone, "... scene asset queue ...\n");

    time = iTimeGet();
    xUtil_idtag2string(theSceneID, 0);
    iTimeDiffSec(time);

    do
    {
        rgba_bkgrd[0] = 0;
        rgba_bkgrd[1] = 0;
        rgba_bkgrd[2] = 0;
        rgba_bkgrd[3] = 0;

        pdone += _1373;

        zGameScreenTransitionUpdate(pdone, "... scene loading ...\n", rgba_bkgrd);
    } while (xSTLoadStep(theSceneID) < _1374);

    xSTDisconnect(theSceneID, 0x1);

    time = iTimeGet();
    xUtil_idtag2string(theSceneID, 0);
    iTimeDiffSec(time);

    pdone += _1373;

    zGameScreenTransitionUpdate(pdone, "...initializing scene - sound\n");

    zEntPlayer_LoadSounds();
    iSndInitSceneLoaded();
    xPadRumbleEnable(globals.currentActivePad, globals.option_vibration);

    xSTSwitchScene(theSceneID, NULL, NULL);

    globals.sceneCur->resolvID = zSceneFindObject;
    globals.sceneCur->id2Name = zSceneGetName;
    globals.sceneCur->base2Name = zSceneGetName;

    g_xSceneCur = globals.sceneCur;

    xModelPipeNumTables = xSTAssetCountByType('PIPT');

    for (int32 i = 0; i < xModelPipeNumTables; i++)
    {
        void* data = xSTFindAssetByType('PIPT', i, NULL);

        xModelPipeCount[i] = *(int32*)data;
        xModelPipeData[i] = (xModelPipeInfo*)((int32*)data + 1);
    }

    xModelLookupCount = 0;

    PipeForAllSceneModels(PipeCountStuffCB);

    if (xModelLookupCount)
    {
        xModelLookupList =
            (xModelPipeLookup*)xMemAlloc(xModelLookupCount * sizeof(xModelPipeLookup));

        xModelLookupCount = 0;

        PipeForAllSceneModels(PipeAddStuffCB);
    }

    xModelBucket_PreCountReset();
    PipeForAllSceneModels(xModelBucket_PreCountBucket);

    xModelBucket_PreCountAlloc(256);
    PipeForAllSceneModels(xModelBucket_InsertBucket);

    xModelBucket_Init();
    add_scene_tweaks();
    xPTankPoolSceneEnter();
    zParPTankSceneEnter();
    xDecalInit();
    xFXScenePrepare();
    zLasso_scenePrepare();
    zDispatcher_scenePrepare();

    int32 total_npcs = xSTAssetCountByType('VIL ');
    zNPCMgr_scenePrepare(total_npcs);

    zAnimListInit();
    zGooInit(24);

    zGameScreenTransitionUpdate(_1375, "...initializing scene - base types\n");

    for (i = 0; i < eBaseTypeCount; i++)
    {
        s->baseCount[i] = 0;
        s->baseList[i] = NULL;
    }

    zCollGeom_Init();
    zUI_Init();
    zUIFontInit();
    ztextbox::init();
    ztalkbox::init();
    ztaskbox::init();

    xModelInstStaticAlloc = 1;
    s->num_base = 0;

    for (i = 0; sInitTable[i].name; i++)
    {
        uint32 typeCount = xSTAssetCountByType(sInitTable[i].assetType);

        s->baseCount[sInitTable[i].baseType] = typeCount;
        s->num_base += typeCount;

        if (sInitTable[i].querySubObjects)
        {
            for (uint32 j = 0; j < typeCount; j++)
            {
                s->num_base += sInitTable[i].querySubObjects(
                    xSTFindAssetByType(sInitTable[i].assetType, j, NULL));
            }
        }
    }

    add_dynamic_types(*s);

    if (s->num_base)
    {
        s->base = (xBase**)xMemAlloc(s->num_base * sizeof(xBase*));
    }
    else
    {
        s->base = NULL;
    }

    zSceneObjHashtableInit(4096);
    xFFXPoolInit(12);
    xFFXShakePoolInit(3);
    xFFXRotMatchPoolInit(1);
    xEntSceneInit();
    xEntMotionDebugInit(s->baseCount[eBaseTypePlatform] + s->baseCount[eBaseTypePendulum] +
                        s->baseCount[eBaseTypeButton]);
    zLightSetVolume(NULL);
    xPartitionReset();
    xFXRibbonSceneEnter();

    uint32 base_idx = 0;

    for (i = 0; sInitTable[i].name; i++)
    {
        HACK_BASETYPE = sInitTable[i].baseType;

        if (sInitTable[i].func)
        {
            base_idx = sInitTable[i].func(s, &sInitTable[i], base_idx);
        }
    }

    init_dynamic_types(*s, base_idx);

    s->num_update_base = 0;

    for (i = 0; i < s->num_base; i++)
    {
        if (BaseTypeNeedsUpdate(s->base[i]->baseType))
        {
            s->num_update_base++;
        }
    }

    s->update_base = (xBase**)xMemAlloc(s->num_update_base * sizeof(xBase*));

    base_idx = 0;

    for (i = 0; i < s->num_base; i++)
    {
        if (BaseTypeNeedsUpdate(s->base[i]->baseType))
        {
            s->update_base[base_idx] = s->base[i];
        }
    }

    xModelInstStaticAlloc = 0;

    zGameScreenTransitionEnd();
    zSceneObjHashtableUsage();
    zUI_ScenePortalInit(s);
    zLightResolveLinks();
    zRenderStateInit();
    xFXStreakInit();
    xFXShineInit();
    xFXFireworksInit("PAREMIT_FIREWORKS_TRAIL", "PAREMIT_FIREWORKS1", "PAREMIT_FIREWORKS2",
                     "Fireworks_explode", "Fireworks_trail");
    zFeetGetIDs();
    zLightningInit();
    zParCmdFindClipVolumes();
    zEntDestructObj_FindFX();
    zShrapnel_SceneInit(globals.sceneCur);
    zCameraTweakGlobal_Reset();
    zActionLineInit();
    xScrFxLetterboxReset();
    xShadowManager_Init(eBaseTypeNPC + 10);

    int32 lkitCount = xSTAssetCountByType('LKIT');
    void* lkitData;

    for (int32 i = 0; i < lkitCount; i++)
    {
        lkitData = xSTFindAssetByType('LKIT', i, NULL);

        xLightKit_Prepare(lkitData);
    }

    xClimateInit(&gClimate);
    zSceneInitEnvironmentalSoundEffect();

    sHackSmoothedUpdate = 1;

    FootstepHackSceneEnter();
    zEntPickup_SceneEnter();
    xFXSceneInit();
    zGame_HackGalleryInit();
    iSndSuspendCD(0);
}
#endif

void add_scene_tweaks()
{
}

#ifndef NON_MATCHING
// func_800B2068
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneExit__Fi")
#else
void zSceneExit(int32 beginReload)
{
    zScene* s = globals.sceneCur;

    zThrown_Reset();
    zEntPickup_FlushGrabbed();
    zGridExit(s);
    zSceneForAllBase(zSceneExitSoundIteratorCB, NULL);
    xSndStopAll(~SND_CAT_UI);
    xSndUpdate();
    iSndWaitForDeadSounds();
    iSndSceneExit();
    xSFXEnvironmentalStreamSceneExit();
    iSndSuspendCD(1);
    iFuncProfileDump();

    RpWorld* world = s->env->geom->world;

    xModel_SceneExit(world);
    zFX_SceneExit(world);
    zEntEventAll(NULL, 0, eEventRoomEnd, NULL);
    zEntEventAll(NULL, 0, eEventSceneEnd, NULL);

    if (globals.sceneCur->pendingPortal)
    {
        char nextScene[8];
        char curScene[8];

        strcpy(nextScene, xUtil_idtag2string(globals.sceneCur->pendingPortal->passet->sceneID, 0));
        strcpy(curScene, xUtil_idtag2string(globals.sceneCur->sceneID, 0));
    }

    // non-matching: two instructions are swapped here...
    gOccludeCount = 0;

    if (globals.sceneCur->sceneID != 'MNU3')
    {
        zSceneSave(s, NULL);
    }

    zEntPlayerExit(&globals.player.ent);
    zSurfaceExit();
    zLightDestroyAll();
    xEntSceneExit();
    xEntMotionDebugExit();
    zSceneObjHashtableExit();

    if (s->baseCount[eBaseTypeParticleSystem])
    {
        zParSys* ps = (zParSys*)s->baseList[eBaseTypeParticleSystem];

        for (uint32 i = 0; i < s->baseCount[eBaseTypeParticleSystem]; i++)
        {
            if (xBaseIsValid(&ps[i]))
            {
                xParSysExit(&ps[i]);
            }
        }
    }

    xParEmitterDestroy();
    xModelBucket_Deinit();
    xFXSceneFinish();
    zGooExit();
    zParPTankExit();
    zAnimListExit();
    zNPCMgr_sceneFinish();
    zDispatcher_sceneFinish();
    z_disco_floor::destroy();
    xDecalDestroy();
    zParPTankSceneExit();
    xPTankPoolSceneExit();
    zEntPlayer_UnloadSounds();

    if (beginReload)
    {
        xSTUnLoadScene(globals.sceneCur->sceneID, 1);
        xMemPopBase(sMemDepthJustHIPStart);

        sMemDepthJustHIPStart = -1;
    }
    else
    {
        xSTUnLoadScene(globals.sceneCur->sceneID, 1);

        if (globals.useHIPHOP)
        {
            xSTUnLoadScene(globals.sceneCur->sceneID, 2);
        }

        xMemPopBase(sMemDepthSceneStart);

        sMemDepthSceneStart = -1;
        sMemDepthJustHIPStart = -1;
    }

    xSystem_GapTrackReport();
    xUtil_idtag2string(globals.sceneCur->sceneID, 0);

    globals.sceneCur = NULL;

    xSceneExit(s);
}
#endif

void zSceneUpdateSFXWidgets()
{
    zScene* s = globals.sceneCur;
    xSFXUpdateEnvironmentalStreamSounds((xSFX*)s->baseList[eBaseTypeSFX],
                                        s->baseCount[eBaseTypeSFX]);
}

#ifndef NON_MATCHING
static void HackSwapIt(char* buf, int32 size);
// func_800B22FC
#pragma GLOBAL_ASM("asm/Game/zScene.s", "HackSwapIt__FPci")
#else
static void HackSwapIt(char* buf, int32 size)
{
    // non-matching: r3 and r4 swapped
    char* end = size + buf;
    end--;

    for (int32 i = 0; i < size / 2; i++)
    {
        char tmp = *buf;
        *buf = *end;
        *end = tmp;

        buf++;
        end--;
    }
}
#endif

#ifndef NON_MATCHING
// func_800B23F8
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSwitch__FP8_zPortali")
#else
void zSceneSwitch(_zPortal* p, int32 forceSameScene)
{
    globals.sceneCur->pendingPortal = p;

    xPortalAsset* passet = globals.sceneCur->pendingPortal->passet;

    gLevelChanged = (zSceneLeavingLevel() != 0);

    if (((char*)&passet->sceneID)[3] < '0' || ((char*)&passet->sceneID)[3] > '9')
    {
        char* id = (char*)&passet->sceneID;
        HackSwapIt(id, 4);
    }

    uint32 nextSceneID = (((char*)&passet->sceneID)[0] << 24) |
                         (((char*)&passet->sceneID)[1] << 16) |
                         (((char*)&passet->sceneID)[2] << 8) | ((char*)&passet->sceneID)[3];

    if (!forceSameScene && nextSceneID == globals.sceneCur->sceneID)
    {
        uint32 PlayerMarkerStartID = passet->assetMarkerID;
        uint32 PlayerMarkerStartCamID = passet->assetCameraID;
        float32 PlayerStartAngle = passet->ang;

        if (zSceneFindObject(PlayerMarkerStartCamID))
        {
            globals.player.cp.initCamID = PlayerMarkerStartCamID;
        }

        if (PlayerStartAngle >= _1493)
        {
            xMarkerAsset* marker = (xMarkerAsset*)xSTFindAsset(PlayerMarkerStartID, NULL);

            if (marker)
            {
                xEnt& player = globals.player.ent;
                xVec3& loc = (xVec3&)player.model->Mat->pos;

                xVec3 offset = marker->pos - loc;

                loc = player.frame->mat.pos = marker->pos;

                xCameraMove(&globals.camera, globals.camera.mat.pos + offset);
            }
        }
        else
        {
            uint32 size;
            xMarkerAsset* m = (xMarkerAsset*)xSTFindAsset(PlayerMarkerStartID, &size);

            if (m)
            {
                xVec3Copy(&globals.player.ent.frame->mat.pos, &m->pos);
                xVec3Copy((xVec3*)&globals.player.ent.model->Mat->pos, &m->pos);

                xCameraSetTargetMatrix(&globals.camera, xEntGetFrame(&globals.player.ent));
            }

            xEntFrame* frame = globals.player.ent.frame;

            frame->rot.angle = _1494 * PlayerStartAngle / _1495;
            frame->rot.axis = xVec3::create(_1496_0, _1374, _1496_0);

            xMat3x3Euler(&frame->mat, frame->rot.angle, _1496_0, _1496_0);

            *(xMat3x3*)globals.player.ent.model->Mat = frame->mat;

            zCameraReset(&globals.camera);
        }

        // non-matching: instruction order

        oob_player_teleported = true;
        globals.sceneCur->pendingPortal = NULL;
    }
}
#endif

void zSceneSave(zScene* ent, xSerial* s)
{
    zEntPickup_FlushGrabbed();

    uint32 i;
    xSerial xser;

    s = &xser;

    s->setClient('PLYR');
    s->Write_b1(1);
    s->Write(globals.player.MaxHealth);
    s->Write(gCurrentPlayer);
    s->Write(globals.player.Inv_Shiny);
    s->Write(globals.player.Inv_Spatula);
    s->Write(globals.player.g.PowerUp[0]);
    s->Write(globals.player.g.PowerUp[1]);

    for (i = 0; i < LEVEL_COUNT; i++)
    {
        s->Write(globals.player.Inv_PatsSock[i]);
        s->Write(globals.player.Inv_LevelPickups[i]);
    }

    s->Write(globals.player.Inv_PatsSock_Total);

    zCutsceneMgrSave(NULL, s);
    oob_state::write_persistent(*s);

    s->setClient('CNTR');
    s->Write_b1(1);

    zUI_ScenePortalSave(s);

    char tempString[32];

    strcpy(tempString, "HB09 ROBOT COUNTER 01");

    char c = '1';
    uint32 id;

    for (i = 0; i < LEVEL_COUNT; i++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[19]++;
        }

        tempString[20] = c;

        c++;

        id = xStrHash(tempString);

        s->Write(((_xCounter*)zSceneFindObject(id))->count);
    }

    id = xStrHash("REMINDER_SOCK_CNTR");

    s->Write(((_xCounter*)zSceneFindObject(id))->count);

    zGameExtras_Save(s);

    s->setClient(ent->sceneID);
    s->Write_b1(1);

    xSceneSave(ent, s);

    s->Write(offsetx);
    s->Write(offsety);

    for (uint32 i = 0; i < globals.sceneCur->num_base; i++)
    {
        xBase* b = globals.sceneCur->base[i];

        if (b->baseFlags & 0x2)
        {
            switch (b->baseType)
            {
            case eBaseTypeTrigger:
            {
                zEntTriggerSave((zEntTrigger*)b, s);
                break;
            }
            case eBaseTypeNPC:
            {
                ((xNPCBasic*)b)->Save(s);
                break;
            }
            case eBaseTypePickup:
            {
                zEntPickup_Save((zEntPickup*)b, s);
                break;
            }
            case eBaseTypeEnv:
            {
                zEnvSave((_zEnv*)b, s);
                break;
            }
            case eBaseTypeFog:
            {
                xFogSave((_xFog*)b, s);
                break;
            }
            case eBaseTypeLight:
            {
                zLightSave((_zLight*)b, s);
                break;
            }
            case eBaseTypePlatform:
            {
                zPlatform_Save((zPlatform*)b, s);
                break;
            }
            case eBaseTypeCamera:
            {
                zCamMarkerSave((zCamMarker*)b, s);
                break;
            }
            case eBaseTypeStatic:
            {
                zEntSimpleObj_Save((zEntSimpleObj*)b, s);
                break;
            }
            case eBaseTypeMovePoint:
            {
                zMovePointSave((zMovePoint*)b, s);
                break;
            }
            case eBaseTypeTimer:
            {
                xTimerSave((xTimer*)b, s);
                break;
            }
            case eBaseTypePortal:
            {
                zPortalSave((_zPortal*)b, s);
                break;
            }
            case eBaseTypeGroup:
            {
                xGroupSave((xGroup*)b, s);
                break;
            }
            case eBaseTypePendulum:
            {
                zPendulum_Save((_zPendulum*)b, s);
                break;
            }
            case eBaseTypeSFX:
            {
                xSFXSave((xSFX*)b, s);
                break;
            }
            case eBaseTypeCounter:
            {
                xCounterSave((_xCounter*)b, s);
                break;
            }
            case eBaseTypeHangable:
            {
                zEntHangable_Save((zEntHangable*)b, s);
                break;
            }
            case eBaseTypeButton:
            {
                zEntButton_Save((_zEntButton*)b, s);
                break;
            }
            case eBaseTypeSurface:
            {
                zSurfaceSave((xSurface*)b, s);
                break;
            }
            case eBaseTypeDestructObj:
            {
                zEntDestructObj_Save((zEntDestructObj*)b, s);
                break;
            }
            case eBaseTypeGust:
            {
                zGustSave((zGust*)b, s);
                break;
            }
            case eBaseTypeScript:
            {
                zScriptSave((_zScript*)b, s);
                break;
            }
            case eBaseTypeVolume:
            {
                ((xVolume*)b)->Save(s);
                break;
            }
            case eBaseTypeDispatcher:
            {
                zDispatcher_Save((st_ZDISPATCH_DATA*)b, s);
                break;
            }
            case eBaseTypeCond:
            {
                zConditionalSave((_zConditional*)b, s);
                break;
            }
            case eBaseTypeUI:
            {
                zUI_Save((_zUI*)b, s);
                break;
            }
            case eBaseTypeUIFont:
            {
                zUIFont_Save((zUIFont*)b, s);
                break;
            }
            case eBaseTypeEGenerator:
            {
                zEGenerator_Save((zEGenerator*)b, s);
                break;
            }
            case eBaseTypeTeleportBox:
            {
                zEntTeleportBox_Save((_zEntTeleportBox*)b, s);
                break;
            }
            case eBaseTypeTaskBox:
            {
                ((ztaskbox*)b)->write(*s);
                break;
            }
            case eBaseTypeTaxi:
            {
                zTaxi_Save((zTaxi*)b, s);
                break;
            }
            case eBaseTypeCameraFly:
            {
                zCameraFly_Save((zCameraFly*)b, s);
                break;
            }
            case eBaseTypeCameraTweak:
            {
                zCameraTweak_Save((zCameraTweak*)b, s);
                break;
            }
            }
        }
    }
}

void zSceneLoad(zScene* ent, xSerial* s)
{
    xSerial xser;
    int32 sceneExist;

    s = &xser;

    s->setClient('PLYR');

    sceneExist = 0;
    s->Read_b1(&sceneExist);

    if (sceneExist)
    {
        s->Read(&globals.player.MaxHealth);

        globals.player.Health = globals.player.MaxHealth;

        s->Read((uint32*)&gCurrentPlayer);
        s->Read(&globals.player.Inv_Shiny);
        s->Read(&globals.player.Inv_Spatula);
        s->Read(&globals.player.g.PowerUp[0]);
        s->Read(&globals.player.g.PowerUp[1]);

        for (int32 i = 0; i < LEVEL_COUNT; i++)
        {
            s->Read(&globals.player.Inv_PatsSock[i]);
            s->Read(&globals.player.Inv_LevelPickups[i]);
        }

        s->Read(&globals.player.Inv_PatsSock_Total);

        zCutsceneMgrLoad(NULL, s);
        oob_state::read_persistent(*s);
    }

    s->setClient('CNTR');

    sceneExist = 0;
    s->Read_b1(&sceneExist);

    if (sceneExist)
    {
        char tempString[32];

        zUI_ScenePortalLoad(s);

        strcpy(tempString, "HB09 ROBOT COUNTER 01");

        char c = '1';
        int32 i;
        uint32 id;

        for (i = 0; i < LEVEL_COUNT; i++)
        {
            if (c > '9')
            {
                c = '0';
                tempString[19]++;
            }

            tempString[20] = c;

            c++;

            id = xStrHash(tempString);

            s->Read(&((_xCounter*)zSceneFindObject(id))->count);
        }

        id = xStrHash("REMINDER_SOCK_CNTR");

        s->Read(&((_xCounter*)zSceneFindObject(id))->count);

        zGameExtras_Load(s);
    }

    s->setClient(ent->sceneID);

    sceneExist = 0;
    s->Read_b1(&sceneExist);

    if (sceneExist)
    {
        xSceneLoad(ent, s);

        s->Read(&offsetx);
        s->Read(&offsety);

        for (uint16 i = 0; i < globals.sceneCur->num_base; i++)
        {
            xBase* b = globals.sceneCur->base[i];

            if (b->baseFlags & 0x2)
            {
                switch (b->baseType)
                {
                case eBaseTypeTrigger:
                {
                    zEntTriggerLoad((zEntTrigger*)b, s);
                    break;
                }
                case eBaseTypeNPC:
                {
                    ((xNPCBasic*)b)->Load(s);
                    break;
                }
                case eBaseTypePlayer:
                {
                    zEntPlayer_Load((xEnt*)b, s);
                    break;
                }
                case eBaseTypePickup:
                {
                    zEntPickup_Load((zEntPickup*)b, s);
                    break;
                }
                case eBaseTypeEnv:
                {
                    zEnvLoad((_zEnv*)b, s);
                    break;
                }
                case eBaseTypeFog:
                {
                    xFogLoad((_xFog*)b, s);
                    break;
                }
                case eBaseTypeLight:
                {
                    zLightLoad((_zLight*)b, s);
                    break;
                }
                case eBaseTypePlatform:
                {
                    zPlatform_Load((zPlatform*)b, s);
                    break;
                }
                case eBaseTypeCamera:
                {
                    zCamMarkerLoad((zCamMarker*)b, s);
                    break;
                }
                case eBaseTypeStatic:
                {
                    zEntSimpleObj_Load((zEntSimpleObj*)b, s);
                    break;
                }
                case eBaseTypeMovePoint:
                {
                    zMovePointLoad((zMovePoint*)b, s);
                    break;
                }
                case eBaseTypeTimer:
                {
                    xTimerLoad((xTimer*)b, s);
                    break;
                }
                case eBaseTypePortal:
                {
                    zPortalLoad((_zPortal*)b, s);
                    break;
                }
                case eBaseTypeGroup:
                {
                    xGroupLoad((xGroup*)b, s);
                    break;
                }
                case eBaseTypePendulum:
                {
                    zPendulum_Load((_zPendulum*)b, s);
                    break;
                }
                case eBaseTypeSFX:
                {
                    xSFXLoad((xSFX*)b, s);
                    break;
                }
                case eBaseTypeCounter:
                {
                    xCounterLoad((_xCounter*)b, s);
                    break;
                }
                case eBaseTypeHangable:
                {
                    zEntHangable_Load((zEntHangable*)b, s);
                    break;
                }
                case eBaseTypeButton:
                {
                    zEntButton_Load((_zEntButton*)b, s);
                    break;
                }
                case eBaseTypeSurface:
                {
                    zSurfaceLoad((xSurface*)b, s);
                    break;
                }
                case eBaseTypeDestructObj:
                {
                    zEntDestructObj_Load((zEntDestructObj*)b, s);
                    break;
                }
                case eBaseTypeGust:
                {
                    zGustLoad((zGust*)b, s);
                    break;
                }
                case eBaseTypeScript:
                {
                    zScriptLoad((_zScript*)b, s);
                    break;
                }
                case eBaseTypeVolume:
                {
                    ((xVolume*)b)->Load(s);
                    break;
                }
                case eBaseTypeDispatcher:
                {
                    zDispatcher_Load((st_ZDISPATCH_DATA*)b, s);
                    break;
                }
                case eBaseTypeCond:
                {
                    zConditionalLoad((_zConditional*)b, s);
                    break;
                }
                case eBaseTypeUI:
                {
                    zUI_Load((_zUI*)b, s);
                    break;
                }
                case eBaseTypeUIFont:
                {
                    zUIFont_Load((zUIFont*)b, s);
                    break;
                }
                case eBaseTypeEGenerator:
                {
                    zEGenerator_Load((zEGenerator*)b, s);
                    break;
                }
                case eBaseTypeTeleportBox:
                {
                    zEntTeleportBox_Load((_zEntTeleportBox*)b, s);
                    break;
                }
                case eBaseTypeTaskBox:
                {
                    ((ztaskbox*)b)->read(*s);
                    break;
                }
                case eBaseTypeTaxi:
                {
                    zTaxi_Load((zTaxi*)b, s);
                    break;
                }
                case eBaseTypeCameraFly:
                {
                    zCameraFly_Load((zCameraFly*)b, s);
                    break;
                }
                case eBaseTypeCameraTweak:
                {
                    zCameraTweak_Load((zCameraTweak*)b, s);
                    break;
                }
                }
            }
        }
    }
}

int32 zSceneSetup_serialTraverseCB(uint32 clientID, xSerial* xser);

void zSceneReset()
{
    zScene* s = globals.sceneCur;

    zEntPlayerPreReset();

    gOccludeCount = 0;

    xScrFxLetterboxReset();
    zEntPickup_FlushGrabbed();
    zEntPickup_SceneReset();
    zMusicReset();
    zThrown_Reset();
    zShrapnel_Reset();
    zFX_SceneReset();
    xFXSceneReset();
    xShadowManager_Reset();
    ztalkbox::reset_all();
    zCameraTweakGlobal_Reset();
    xPadDestroyRumbleChain(0);

    globals.cmgr = NULL;

    zEntEventAll(NULL, 0, eEventRoomEnd, NULL);
    zEntEventAll(NULL, 0, eEventSceneEnd, NULL);

    zSceneSave(s, NULL);
    zSceneAutoSave();

    xSndStopAll(~SND_CAT_UI);
    xSndUpdate();
    iSndWaitForDeadSounds();

    for (uint32 i = 0; i < s->num_base; i++)
    {
        if (s->base[i])
        {
            switch (s->base[i]->baseType)
            {
            case eBaseTypePickup:
            case eBaseTypeCamera:
            case eBaseTypeDoor:
            case eBaseTypeSavePoint:
            case eBaseTypeItem:
            case eBaseTypeStatic:
            case eBaseTypeDynamic:
            case eBaseTypeMovePoint:
            case eBaseTypeTimer:
            case eBaseTypeBubble:
            case eBaseTypePortal:
            case eBaseTypeGroup:
            case eBaseTypeSFX:
            case eBaseTypeFFX:
            case eBaseTypeVFX:
            case eBaseTypeButton:
            case eBaseTypeProjectile:
            case eBaseTypeSurface:
            case eBaseTypeDestructObj:
            case eBaseTypeGust:
            case eBaseTypeVolume:
            case eBaseTypeDispatcher:
            case eBaseTypeCond:
            case eBaseTypeUI:
            case eBaseTypeUIFont:
            case eBaseTypeProjectileType:
            case eBaseTypeFog:
            case eBaseTypeLight:
            case eBaseTypeParticleEmitter:
            case eBaseTypeParticleSystem:
            case eBaseTypeCutsceneMgr:
            default:
            {
                zEntEvent(NULL, 0, s->base[i], eEventReset, NULL, NULL, 1);
                break;
            }
            case eBaseTypeCounter:
            {
                xCounterReset(s->base[i]);
                break;
            }
            case eBaseTypePlayer:
            {
                zEntPlayerReset((xEnt*)s->base[i]);
                break;
            }
            case eBaseTypePlatform:
            {
                zPlatform_Reset((zPlatform*)s->base[i], globals.sceneCur);
                break;
            }
            case eBaseTypePendulum:
            {
                zPendulum_Reset((_zPendulum*)s->base[i], globals.sceneCur);
                break;
            }
            case eBaseTypeHangable:
            {
                zEntHangable_Reset((zEntHangable*)s->base[i]);
                break;
            }
            case eBaseTypeLobMaster:
            {
                zEntEvent(s->base[i], eEventReset);
                break;
            }
            case eBaseTypeEGenerator:
            {
                zEGenerator_Reset((zEGenerator*)s->base[i], globals.sceneCur);
                break;
            }
            case eBaseTypeEnv:
            {
                _zEnv* env = (_zEnv*)s->base[i];

                if (env)
                {
                    if (zSceneFindObject(env->easset->startCameraAssetID))
                    {
                        zCameraReset(&globals.camera);
                    }

                    xClimateInitAsset(&gClimate, env->easset);
                }
            }
            }
        }
    }

    zNPCMgr_sceneReset();
    zEntPlayer_LoadCheckPoint();
    zSceneLoad(globals.sceneCur, NULL);
    zSceneEnableVisited(s);
    xSerialTraverse(zSceneSetup_serialTraverseCB);
    xSkyDome_Setup();
    xUpdateCull_Reset(globals.updateMgr);
    xUpdateCull_Update(globals.updateMgr, 100);
    zGridReset(s);

    zEntEventAll(NULL, 0, eEventSceneBegin, NULL);
    zEntEventAll(NULL, 0, eEventRoomBegin, NULL);
    zEntEventAll(NULL, 0, eEventSceneReset, NULL);

    zNPCTiki_InitStacking(globals.sceneCur);
    zNPCTiki_InitFX(globals.sceneCur);

    xUpdateCull_Update(globals.updateMgr, 100);
    zLOD_Update(100);

    zGameExtras_SceneReset();
}

static void ActivateCB(xBase* base)
{
    base->baseFlags &= (uint8)~0x40;
}

static void DeactivateCB(xBase* base)
{
    base->baseFlags |= 0x40;
}

// clang-format off
static uint32 _2098_0[] =
{
0x800B3418, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B33B0, 0x800B32E0,
0x800B3318, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3378,
0x800B3418, 0x800B3334, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B33DC,
0x800B3340, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3418,
0x800B335C, 0x800B3418, 0x800B33CC,
0x800B340C, 0x800B3418, 0x800B3418,
0x800B3388, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B33D4,
0x800B33C4, 0x800B3418, 0x800B3394,
0x800B3418, 0x800B3304, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3414,
0x800B3418, 0x800B33E4, 0x800B33EC,
0x800B3418, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B33F4,
0x800B33FC, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3404,
0x800B3380, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3418,
0x800B3418, 0x800B3418, 0x800B3418
};
// clang-format on

// func_800B3200
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSetup__Fv")

int32 zSceneSetup_serialTraverseCB(uint32 clientID, xSerial* xser)
{
    char uiName[16];
    int32 val = 0;
    xBase* b;

    xser->Read_b1(&val);

    if (val == 0)
    {
        return 1;
    }

    sprintf(uiName, "%s", xUtil_idtag2string(clientID, 0));

    uiName[1] = ' ';

    strcat(uiName, " VISITED");

    b = zSceneFindObject(xStrHash(uiName));

    if (b)
    {
        b->baseFlags |= 0x1;
    }

    return 1;
}

void zSceneUpdate(float32 dt)
{
    uint32 i;
    int32 isPaused;
    zScene* s;
    xBase** b;

    if (_1496_0 == dt)
    {
        return;
    }

    isPaused = zGameIsPaused();
    gSceneUpdateTime = dt;

    if (!isPaused)
    {
        zEntPickup_SceneUpdate(dt);
        zEntButton_SceneUpdate(dt);
    }

    xEntSetTimePassed(dt);

    if (globals.cmgr)
    {
        zCutsceneMgrUpdate(globals.cmgr, globals.sceneCur, dt);
    }

    s = globals.sceneCur;
    b = s->update_base;

    gUIMgr.PreUpdate(s, dt);

    if (s->baseCount[eBaseTypeUIFont])
    {
        zUIFont* ui = (zUIFont*)s->baseList[eBaseTypeUIFont];

        for (i = 0; i < s->baseCount[eBaseTypeUIFont]; i++)
        {
            zUIFont_PreUpdate(&ui[i], s, dt);
        }
    }

    if (!isPaused)
    {
        zNPCMgr_sceneTimestep(s, dt);
    }
    else if (s->sceneID == 'B101')
    {
        zNPCBSandy_GameIsPaused(s);
    }
    else if (s->sceneID == 'B201')
    {
        zNPCBPatrick_GameIsPaused(s);
    }

    ztextbox::update_all(*s, dt);
    ztalkbox::update_all(*s, dt);

    gUIMgr.Update(s, dt);

    if (xVec3Dist(&sOldPosPlayer, (xVec3*)&globals.player.ent.model->Mat->pos) > _2242 ||
        xVec3Dist(&sOldPosCamera, &globals.camera.mat.pos) > _2242)
    {
        sSuddenMove = 1;
    }
    else
    {
        sSuddenMove = 0;
    }

    sOldPosPlayer = *(xVec3*)&globals.player.ent.model->Mat->pos;
    sOldPosCamera = globals.camera.mat.pos;

    xUpdateCull_Update(globals.updateMgr, sSuddenMove ? 100 : 5);

    for (i = 0; i < s->num_update_base; i++)
    {
        if (!(b[i]->baseFlags & 0x40))
        {
            switch (b[i]->baseType)
            {
            case eBaseTypeUIFont:
            {
                if (((xEnt*)b[i])->update)
                {
                    ((xEnt*)b[i])->update((xEnt*)b[i], s, dt);
                }
                break;
            }
            case eBaseTypeZipLine:
            {
                if (((xEnt*)b[i])->update && !isPaused)
                {
                    ((xEnt*)b[i])->update((xEnt*)b[i], s, dt);
                }
                break;
            }
            case eBaseTypeTrigger:
            case eBaseTypePickup:
            case eBaseTypePlatform:
            case eBaseTypeDoor:
            case eBaseTypeSavePoint:
            case eBaseTypeItem:
            case eBaseTypeDynamic:
            case eBaseTypePendulum:
            case eBaseTypeHangable:
            case eBaseTypeButton:
            case eBaseTypeDestructObj:
            case eBaseTypeEGenerator:
            case eBaseTypeNPC:
            case eBaseTypeBoulder:
            case eBaseTypeTeleportBox:
            {
                if (((xEnt*)b[i])->update && !isPaused)
                {
                    ((xEnt*)b[i])->update((xEnt*)b[i], s, dt);
                }
                break;
            }
            case eBaseTypeTimer:
            {
                if (!isPaused || ((xTimer*)b[i])->runsInPause)
                {
                    xTimerUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeScript:
            {
                if (!isPaused)
                {
                    zScriptUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeFog:
            {
                if (!isPaused)
                {
                    xFogUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeParticleEmitter:
            {
                if (!isPaused)
                {
                    xParEmitterUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeParticleSystem:
            {
                if (!isPaused && !zGameIsPaused())
                {
                    xParSysUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeLight:
            {
                if (!isPaused)
                {
                    zLightUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeSurface:
            {
                if (!isPaused || ((xSurface*)b[i])->type == XSURFACE_TYPE_3)
                {
                    zSurfaceUpdate(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeBusStop:
            {
                if (!isPaused)
                {
                    zBusStop_Update(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeDiscoFloor:
            {
                if (!isPaused)
                {
                    ((z_disco_floor*)b[i])->update(*s, dt);
                }

                break;
            }
            case eBaseTypeTaxi:
            {
                if (!isPaused)
                {
                    zTaxi_Update(b[i], s, dt);
                }
                break;
            }
            case eBaseTypeCameraFly:
            {
                if (!isPaused)
                {
                    zCameraFly_Update(b[i], s, dt);
                }
                break;
            }
            }
        }
    }

    if (!isPaused)
    {
        zEntSimpleObj_MgrCustomUpdate(s, dt);
    }

    if (isPaused)
    {
        zUI_ScenePortalUpdate();
    }
    else
    {
        zUI_ScenePortalSetToCurrentLevel(s);
    }

    zNPCCommon_EjectPhlemOnPawz();

    if (!isPaused)
    {
        zActionLineUpdate(dt);
        xFXStreakUpdate(dt);
        xFXShineUpdate(dt);
        xFXFireworksUpdate(dt);
        zLightningUpdate(dt);
        zGustUpdateFX(dt);
        xClimateUpdate(&gClimate, dt);
        zShrapnel_Update(dt);
        zCombo_Update(dt);
        zFXUpdate(dt);
        zLOD_Update(sSuddenMove ? 100 : 5);
        zParPTankUpdate(dt);
        xDecalUpdate(dt);
        xCMupdate(dt);

        if (s->pendingPortal)
        {
            zGameStateSwitch(eGameState_SceneSwitch);
        }
    }
    else
    {
        zCombo_HideImmediately();
    }
}

static void zSceneRenderPreFX()
{
    zScene* s = globals.sceneCur;

    globals.currWorld = s->env->geom->world;

    xLightKit_Enable(NULL, globals.currWorld);

    zRenderState(SDRS_SkyBack);
    xSkyDome_Render();

    zRenderState(SDRS_Environment);
    zLightAddLocalEnv();
    zEnvRender(s->env);
    zLightRemoveLocalEnv();

    zRenderState(SDRS_OpaqueModels);
    z_disco_floor::render_all();

    uint32 shadowHackCase = 0;

    xEnt** entptr = &s->act_ents[s->num_act_ents - 1];
    xEnt** entlast = &s->act_ents[s->baseCount[eBaseTypeTrigger] + s->baseCount[eBaseTypePickup] +
                                  s->baseCount[eBaseTypeStatic]];

    xModelBucket_Begin();
    zEntSimpleObj_MgrUpdateRender(globals.currWorld, sTimeElapsed);
    zEntSimpleObj_MgrCustomRender();

    while (entptr >= entlast)
    {
        xEnt* ent = *entptr;

        if (ent->collType != XENT_COLLTYPE_TRIG)
        {
            if (ent->collType == XENT_COLLTYPE_PLYR)
            {
                shadowHackCase = 1;
            }
            else if (ent->render)
            {
                xLightKit_Enable(ent->lightKit, globals.currWorld);
                ent->render(ent);
            }
        }

        entptr--;
    }

    zShrapnel_Render();
    zEntPickup_Render((zEntPickup*)s->baseList[eBaseTypePickup], s->baseCount[eBaseTypePickup]);
    xModelBucket_RenderOpaque();
    zNPCCommon_Glyphs_RenderAll(1);
    zNPCCommon_Hazards_RenderAll(1);
    xLightKit_Enable(NULL, globals.currWorld);
    zEntPickup_RenderList((zEntPickup*)s->baseList[eBaseTypePickup], s->baseCount[eBaseTypePickup]);

    if (shadowHackCase == 1 && globals.player.Transparent <= 0 && !oob_state::render())
    {
        xLightKit_Enable(globals.player.ent.lightKit, globals.currWorld);

        globals.player.ent.render(&globals.player.ent);

        xLightKit_Enable(NULL, globals.currWorld);
    }

    if (globals.cmgr && globals.cmgr->csn->Ready)
    {
        xLightKit* objLightKit = NULL;

        if (globals.sceneCur->zen->easset->objectLightKit)
        {
            objLightKit =
                (xLightKit*)xSTFindAsset(globals.sceneCur->zen->easset->objectLightKit, NULL);
        }

        if (objLightKit)
        {
            xLightKit_Enable(objLightKit, globals.currWorld);
        }

        xCutscene_Render(globals.cmgr->csn, NULL, NULL, NULL);

        if (objLightKit)
        {
            xLightKit_Enable(NULL, globals.currWorld);
        }
    }

    zEntPlayer_ShadowModelEnable();
    xShadowManager_Render();
    zEntPlayer_ShadowModelDisable();
    xShadowSimple_Render();

    zRenderState(SDRS_AlphaModels);
    xModelBucket_RenderAlpha();
    z_disco_floor::effects_render_all();
    xFXRingRender();

    zRenderState(SDRS_Lightning);
    zLightningRender();
    zActionLineRender();

    zRenderState(SDRS_Streak);
    xFXStreakRender();
    xFXShineRender();
    xFXRibbonRender();
    xFXAuraRender();

    zRenderState(SDRS_Particles);

    zParSys* psys = (zParSys*)s->baseList[eBaseTypeParticleSystem];

    for (int32 i = s->baseCount[eBaseTypeParticleSystem] - 1; i >= 0; i--, psys++)
    {
        xParSysRender(psys);
    }

    xLightKit_Enable(NULL, globals.currWorld);

    zRenderState(SDRS_NPCVisual);
    zNPCMgr_scenePostRender();
    zNPCCommon_Glyphs_RenderAll(0);
    zNPCCommon_Hazards_RenderAll(0);

    zRenderState(SDRS_AlphaModels);
    xParMgrRender();
    zParPTankRender();
    xPTankPoolRender();
    zNPCMgr_scenePostParticleRender();
    xDecalRender();
}

static void zSceneRenderPostFX()
{
    zRenderState(SDRS_Glare);

    xScrFXGlareRender(&globals.camera);
    xScrFXFullScreenGlareRender();

    if (zGameModeGet() == eGameMode_Intro &&
        (zGameStateGet() == eIntroState_Sony || zGameStateGet() == eIntroState_Publisher))
    {
        render_mem_card_no_space(bytesNeeded, availOnDisk, neededFiles,
                                 zGameStateGet() == eIntroState_Sony);
    }

    cruise_bubble::render_screen();
    oob_state::fx_render();

    zRenderState(SDRS_Font);
    ztextbox::render_all();
    ztalkbox::render_all();

    zRenderState(SDRS_Font);
    xDrawEnd();
    xDrawBegin();

    RwCameraEndUpdate(globals.camera.lo_cam);
    RwCameraClear(globals.camera.lo_cam, NULL, rwCAMERACLEARZ);
    RwCameraBeginUpdate(globals.camera.lo_cam);

    zUIRenderAll();

    eGameMode mode = zGameModeGet();

    if (mode != eGameMode_Game && mode != eGameMode_Stall)
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
        zSceneSpawnRandomBubbles();

        if (mode == eGameMode_Pause || mode == eGameMode_Save)
        {
            zParPTankUpdate(sTimeElapsed);
        }

        zParPTankRender();
    }

    switch (mode)
    {
    case eGameMode_Load:
    case eGameMode_WorldMap:
    case eGameMode_ConceptArtGallery:
    {
        break;
    }
    default:
    {
        zRenderState(SDRS_HUD);
        zhud::render();
    }
    }

    xParMgrRender();

    if (!zGameIsPaused())
    {
        xCMrender();
    }

    if (zGameModeGet() == eGameMode_Intro &&
        (zGameStateGet() == eIntroState_Sony || zGameStateGet() == eIntroState_Publisher))
    {
        render_mem_card_no_space(bytesNeeded, availOnDisk, neededFiles,
                                 zGameStateGet() == eIntroState_Sony);
    }

    xTRCRender();

    if (zGameModeGet() == eGameMode_Intro && zGameStateGet() == eIntroState_License)
    {
        xScrFxDrawScreenSizeRectangle();
    }
}

void zSceneRender()
{
    zSceneRenderPreFX();
    xScrFxRender(globals.camera.lo_cam);
    zSceneRenderPostFX();
}

#ifndef NON_MATCHING
// func_800B4900
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableInit__Fi")
#else
static void zSceneObjHashtableInit(int32 count)
{
    scobj_idbps = (IDBasePair*)xMemAlloc(count * sizeof(IDBasePair));

    memset(scobj_idbps, 0, count * sizeof(IDBasePair));

    scobj_size = count;
    nidbps = 0;
}
#endif

#ifndef NON_MATCHING
// func_800B4958
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneObjHashtableExit__Fv")
#else
static void zSceneObjHashtableExit()
{
    scobj_idbps = NULL;
    scobj_size = -1;
    nidbps = -1;
}
#endif

static int32 zSceneObjHashtableUsage()
{
    return nidbps;
}

static void zSceneObjHashtableAdd(uint32 id, xBase* base)
{
    int32 k, chkd;

    chkd = id & (scobj_size - 1);

    for (k = 0; k < scobj_size; k++)
    {
        IDBasePair* idbp = &scobj_idbps[chkd];

        if (idbp->id == 0)
        {
            idbp->id = id;
            idbp->base = base;
            nidbps++;
            break;
        }

        chkd++;

        if (chkd == scobj_size)
        {
            chkd = 0;
        }
    }
}

static xBase* zSceneObjHashtableGet(uint32 id)
{
    int32 k, chkd;

    chkd = id & (scobj_size - 1);

    for (k = 0; k < scobj_size; k++)
    {
        IDBasePair* idbp = &scobj_idbps[chkd];

        if (idbp->id == id)
        {
            return idbp->base;
        }

        if (idbp->id == 0)
        {
            return NULL;
        }

        chkd++;

        if (chkd == scobj_size)
        {
            chkd = 0;
        }
    }

    return NULL;
}

xBase* zSceneFindObject(uint32 gameID)
{
    return zSceneObjHashtableGet(gameID);
}

xBase* zSceneGetObject(int32 type, int32 idx)
{
    zScene* s = globals.sceneCur;

    if (s)
    {
        for (uint32 i = 0; i < s->num_base; i++)
        {
            if (s->base[i] && type == s->base[i]->baseType)
            {
                if (idx == 0)
                {
                    return s->base[i];
                }
                else
                {
                    idx--;
                }
            }
        }
    }

    return NULL;
}

const char* zSceneGetName(uint32 gameID)
{
    xBase* b = zSceneFindObject(gameID);

    if (b)
    {
        return zSceneGetName(b);
    }

    return "";
}

const char* zSceneGetName(xBase* b)
{
    if (b)
    {
        const char* n = xSTAssetName(b->id);

        if (n)
        {
            return n;
        }
    }

    return "";
}

void zSceneForAllBase(xBase* (*func)(xBase*, zScene*, void*), void* data)
{
    zScene* s = globals.sceneCur;

    if (s)
    {
        for (uint16 i = 0; i < s->num_base; i++)
        {
            if (!func(s->base[i], s, data))
            {
                break;
            }
        }
    }
}

void zSceneForAllBase(xBase* (*func)(xBase*, zScene*, void*), int32 baseType, void* data)
{
    zScene* s = globals.sceneCur;

    if (s)
    {
        for (uint16 i = 0; i < s->num_base; i++)
        {
            if (baseType == s->base[i]->baseType)
            {
                if (!func(s->base[i], s, data))
                {
                    break;
                }
            }
        }
    }
}

static xBase* zSceneExitSoundIteratorCB(xBase* b, zScene*, void*)
{
    xSndParentDied((uint32)b);
    return b;
}

void zSceneMemLvlChkCB()
{
}

#ifndef NON_MATCHING
// func_800B4CB4
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneLeavingLevel__Fv")
#else
uint32 zSceneLeavingLevel()
{
    // non-matching: instruction order

    char curScene[4] = "";
    char nextScene[4] = "";

    strncpy(curScene, xStrupr(xUtil_idtag2string(globals.sceneCur->sceneID, 0)), 4);
    strncpy(nextScene,
            xStrupr(xUtil_idtag2string(globals.sceneCur->pendingPortal->passet->sceneID, 0)), 4);

    return (curScene[0] != nextScene[3]);
}
#endif

const char* zSceneGetLevelName(uint32 sceneID)
{
    int8 c1 = (sceneID >> 24) & 0xFF;
    int8 c2 = (sceneID >> 16) & 0xFF;

    for (int32 i = 0; i < sizeof(sLevelTable) / sizeof(sLevelTable[0]); i++)
    {
        if (c1 == sLevelTable[i].prefix[0] && c2 == sLevelTable[i].prefix[1])
        {
            return sLevelTable[i].desc;
        }
    }

    return "Level Not Found";
}

uint32 zSceneGetLevelIndex()
{
    return zSceneGetLevelIndex(globals.sceneCur->sceneID);
}

uint32 zSceneGetLevelIndex(uint32 sceneID)
{
    int8 c1 = (sceneID >> 24) & 0xFF;
    int8 c2 = (sceneID >> 16) & 0xFF;

    for (int32 i = 0; i < sizeof(sLevelTable) / sizeof(sLevelTable[0]); i++)
    {
        if (c1 == sLevelTable[i].prefix[0] && c2 == sLevelTable[i].prefix[1])
        {
            return i;
        }
    }

    return 0;
}

const char* zSceneGetLevelPrefix(uint32 index)
{
    if (index >= sizeof(sLevelTable) / sizeof(sLevelTable[0]))
    {
        return NULL;
    }

    return sLevelTable[index].prefix;
}

const char* zSceneGetAreaname(uint32)
{
    return "Temp";
}

uint32 zSceneCalcProgress()
{
    return globals.player.Inv_Spatula;
}

void zScene_UpdateFlyToInterface(float32 dt)
{
    zScene* s = globals.sceneCur;

    zEntPickup_UpdateFlyToInterface((zEntPickup*)s->baseList[eBaseTypePickup],
                                    s->baseCount[eBaseTypePickup], dt);
}

void zSceneCardCheckStartup_set(int32 needed, int32 available, int32 files)
{
    bytesNeeded = needed;
    availOnDisk = available;
    neededFiles = files;
}

void zSceneEnableVisited(zScene* s)
{
    uint32 uiNameID;
    char uiName[64];
    char* sceneName;

    sceneName = xUtil_idtag2string(s->sceneID, 0);

    strcpy(uiName, sceneName);

    uiName[1] = ' ';

    strcat(uiName, " VISITED");

    uiNameID = xStrHash(uiName);

    for (uint32 i = 0; i < s->num_base; i++)
    {
        if (s->base[i] && s->base[i]->baseType == eBaseTypeUI && uiNameID == s->base[i]->id)
        {
            s->base[i]->baseFlags |= 0x1;
        }
    }
}

void zSceneEnableScreenAdj(uint32 enable)
{
    enableScreenAdj = enable;
}

#ifndef NON_MATCHING
// func_800B501C
#pragma GLOBAL_ASM("asm/Game/zScene.s", "zSceneSetOldScreenAdj__Fv")
#else
void zSceneSetOldScreenAdj()
{
    oldOffsetx = offsetx;
    oldOffsety = offsety;
}
#endif

uint32 zScene_ScreenAdjustMode()
{
    return enableScreenAdj;
}

xVec3 scale = { 0.2f, -0.7f, 1.5f };

void zSceneSpawnRandomBubbles()
{
    RwCamera* currentCamera = RwCameraGetCurrentCamera();

    if (!currentCamera || zMenuIsFirstBoot())
    {
        return;
    }

    RwMatrix* mat = RwFrameGetMatrix(RwCameraGetFrame(currentCamera));
    float32 floatRand = xurand();

    if (floatRand > 0.985f)
    {
        xVec3 pos, var_48;
        float32 r;

        pos.x = mat->pos.x;
        pos.y = mat->pos.y;
        pos.z = mat->pos.z;

        r = xurand();
        r *= (((int32)(10000 * floatRand) % 2) ? 1 : -1);

        xVec3ScaleC(&var_48, (xVec3*)&mat->right, r, r, r);
        xVec3Add(&pos, &pos, &var_48);
        xVec3ScaleC(&var_48, (xVec3*)&mat->up, scale.y, scale.y, scale.y);
        xVec3Add(&pos, &pos, &var_48);
        xVec3ScaleC(&var_48, (xVec3*)&mat->at, scale.z, scale.z, scale.z);
        xVec3Add(&pos, &pos, &var_48);

        zFX_SpawnBubbleMenuTrail(&pos, 1, NULL, NULL);
    }
}

static void zSceneAutoSave()
{
}

void xSystem_GapTrackReport()
{
}

void xDecalDestroy()
{
}

void xDecalRender()
{
}

uint32 xBaseIsValid(xBase* xb)
{
    return xb->baseFlags & 0x4;
}

void xModelBucket_RenderAlpha()
{
    xModelBucket_RenderAlphaBegin();
    xModelBucket_RenderAlphaLayer(31);
    xModelBucket_RenderAlphaEnd();
}

// func_800B51F4
void xNPCBasic::Save(xSerial*) const
{
}

// func_800B51F8
void xNPCBasic::Load(xSerial*)
{
}

void xQuickCullInit(const xBox* box)
{
    xQuickCullInit(&xqc_def_ctrl, box);
}
