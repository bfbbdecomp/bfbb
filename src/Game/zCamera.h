#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "../Core/x/xCamera.h"

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
    int32 frame;
    float32 matrix[12];
    float32 aperture[2];
    float32 focal;

    ASSIGNMENT_OPERATOR(zFlyKey)
};

void zCameraReset(xCamera* cam);
float32 GetCurrentPitch();
float32 GetCurrentH();
float32 _GetCurrentH();
float32 GetCurrentD();
float32 _GetCurrentD();

float32 EaseInOut();
void zCameraConversUpdate(xCamera* cam, float32 dt);
float32 TranSpeed(zFlyKey keys[]);
float32 MatrixSpeed(zFlyKey keys[]);

void zCameraSetBbounce(int32 bbouncing);
void zCameraSetHighbounce(int32 hbounce);
void zCameraSetLongbounce(int32 hbounce);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
uint32 zCamera_FlyOnly();
void zCameraTranslate(xCamera* camera, float32 x, float32 y, float32 z);
void zCameraReset(xCamera* camera);
void zCameraUpdate(xCamera* camera, float32 dt);

void zCameraEnableInput();
void zCameraDisableInput();
uint32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraDisableLassoCam();
void zCameraEnableLassoCam();
void zCameraSetLassoCamFactor(float32 new_factor);
float32 zCameraGetLassoCamFactor();
int32 zCameraGetConvers();
void zCameraTranslate(xCamera* cam, float32 x, float32 y, float32 z);
void zCameraDisableWallJump(xCamera* cam);
void zCameraSetReward(int32 reward);
void zCameraMinTargetHeightSet(float32 min_height);
void zCameraMinTargetHeightClear();
float32 xVec3Dist2(const xVec3* vecA, const xVec3* vecB);

#endif