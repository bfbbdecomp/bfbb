#ifndef XGLOBALS_H
#define XGLOBALS_H

#include "xCamera.h"
#include "xPad.h"
#include "xUpdateCull.h"
#include "iCamera.h"
#include "../p2/iTime.h"

#include <rwcore.h>
#include <rpworld.h>

struct xGlobals
{
    // 0x00 in globals
    xCamera camera;

    // 0x31C in globals
    _tagxPad* pad0;
    _tagxPad* pad1;
    _tagxPad* pad2;
    _tagxPad* pad3;
    int32 profile;

    // 0x330 in globals
    char profFunc[6][128];

    // 0x630 in globals
    xUpdateCullMgr* updateMgr;
    int32 sceneFirst;
    char sceneStart[32];
    RpWorld* currWorld;

    // 0x65C in globals
    iFogParams fog;
    iFogParams fogA;
    iFogParams fogB;

    // 0x6B0 in globals
    iTime fog_t0;
    iTime fog_t1;

    // 0x6C0 in globals
    int32 option_vibration;
    uint32 QuarterSpeed;
    float32 update_dt;
    int32 useHIPHOP;

    // 0x6D0 in globals
    uint8 NoMusic;
    int8 currentActivePad;
    uint8 firstStartPressed;

    // 0x6D4 in globals
    uint32 minVSyncCnt;
    uint8 dontShowPadMessageDuringLoadingOrCutScene;
    uint8 autoSaveFeature;
};

#endif