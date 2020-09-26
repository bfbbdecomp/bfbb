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
    xCamera camera;
    _tagxPad* pad0;
    _tagxPad* pad1;
    _tagxPad* pad2;
    _tagxPad* pad3;
    int profile;
    char profFunc[6][128];
    xUpdateCullMgr* updateMgr;
    int sceneFirst;
    char sceneStart[32];
    RpWorld* currWorld;
    iFogParams fog;
    iFogParams fogA;
    iFogParams fogB;
    iTime fog_t0;
    iTime fog_t1;
    int option_vibration;
    unsigned int QuarterSpeed;
    float update_dt;
    int useHIPHOP;
    unsigned char NoMusic;
    char currentActivePad;
    unsigned char firstStartPressed;
    unsigned int minVSyncCnt;
    unsigned char dontShowPadMessageDuringLoadingOrCutScene;
    unsigned char autoSaveFeature;
};

#endif