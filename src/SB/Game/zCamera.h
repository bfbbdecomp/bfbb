#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "xCamera.h"

enum WallJumpViewState
{
    WJVS_DISABLED,
    WJVS_DISABLING,
    WJVS_ENABLED,
    WJVS_ENABLING
};

enum camera_owner_enum
{
    CO_BOULDER = 0x1,
    CO_CRUISE_BUBBLE,
    CO_BUNGEE = 0x4,
    CO_BOSS = 0x8,
    CO_OOB = 0x10,
    CO_ZIPLINE = 0x20,
    CO_TURRET = 0x40,
    CO_REWARDANIM = 0x80
};

struct zFlyKey
{
    S32 frame;
    F32 matrix[12];
    F32 aperture[2];
    F32 focal;
};

void zCameraReset(xCamera* cam);
F32 GetCurrentPitch();
F32 GetCurrentH();
F32 _GetCurrentH();
F32 GetCurrentD();
F32 _GetCurrentD();

F32 EaseInOut();
void zCameraConversUpdate(xCamera* cam, F32 dt);
F32 TranSpeed(zFlyKey keys[]);
F32 MatrixSpeed(zFlyKey keys[]);

void zCameraSetBbounce(S32 bbouncing);
void zCameraSetHighbounce(S32 hbounce);
void zCameraSetLongbounce(S32 hbounce);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
U32 zCamera_FlyOnly();
void zCameraTranslate(xCamera* camera, F32 x, F32 y, F32 z);
void zCameraReset(xCamera* camera);
void zCameraUpdate(xCamera* camera, F32 dt);

void zCameraEnableInput();
void zCameraDisableInput();
U32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraDisableLassoCam();
void zCameraEnableLassoCam();
void zCameraSetLassoCamFactor(F32 new_factor);
F32 zCameraGetLassoCamFactor();
void zCameraEnableWallJump(xCamera* cam, const xVec3& collNormal);
S32 zCameraGetConvers();
void zCameraTranslate(xCamera* cam, F32 x, F32 y, F32 z);
void zCameraDisableWallJump(xCamera* cam);
void zCameraSetReward(S32 reward);
void zCameraMinTargetHeightSet(F32 min_height);
void zCameraMinTargetHeightClear();

#endif
