#ifndef XGLOBALS_H
#define XGLOBALS_H

#include "xCamera.h"
#include "xPad.h"
#include "xUpdateCull.h"
#include "iCamera.h"
#include "iTime.h"

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
    S32 profile;

    // 0x330 in globals
    char profFunc[6][128];

    // 0x630 in globals
    xUpdateCullMgr* updateMgr;
    S32 sceneFirst;
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
    S32 option_vibration;
    U32 QuarterSpeed;
    F32 update_dt;
    S32 useHIPHOP;

    // 0x6D0 in globals
    U8 NoMusic;
    S8 currentActivePad;
    U8 firstStartPressed;

    // 0x6D4 in globals
    U32 minVSyncCnt;
    U8 dontShowPadMessageDuringLoadingOrCutScene;
    U8 autoSaveFeature;
};

#endif
