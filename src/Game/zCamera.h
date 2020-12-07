#ifndef ZCAMERA_H
#define ZCAMERA_H

#include "../Core/x/xCamera.h"

void zCameraSetConvers(int on);
void zCameraDoTrans(xCamAsset* asset, float ttime);
uint32 zCamera_FlyOnly();

#endif