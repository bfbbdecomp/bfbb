#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "../Core/x/xCamera.h"

struct zFlyKey;

float32 GetCurrentPitch();
float32 GetCurrentH();
float32 _GetCurrentH();
float32 GetCurrentD();
float32 _GetCurrentD();

float32 EaseInOut();
float32 TranSpeed(zFlyKey keys[]);

void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetBbounce(int32 bbouncing);
void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
uint32 zCamera_FlyOnly();
void zCameraTranslate(xCamera* camera, float32 x, float32 y, float32 z);
void zCameraReset(xCamera* camera);
void zCameraUpdate(xCamera* camera, float32 dt);

#endif