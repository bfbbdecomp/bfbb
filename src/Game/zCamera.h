#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "../Core/x/xCamera.h"

struct zFlyKey
{
	int32 frame;
	float32 matrix[12];
	float32 aperture[2];
	float32 focal;

    zFlyKey& operator=(const zFlyKey&);
};

void zCameraReset(xCamera* cam);
float32 GetCurrentPitch();
float32 GetCurrentH();
float32 _GetCurrentH();
float32 GetCurrentD();
float32 _GetCurrentD();

float32 EaseInOut();
float32 TranSpeed(zFlyKey keys[]);

void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetHighbounce(int32 hbounce);
void zCameraSetLongbounce(int32 hbounce);
void zCameraSetBbounce(int32 bbouncing);
void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
uint32 zCamera_FlyOnly();
void zCameraTranslate(xCamera* camera, float32 x, float32 y, float32 z);
void zCameraReset(xCamera* camera);
void zCameraUpdate(xCamera* camera, float32 dt);

#endif