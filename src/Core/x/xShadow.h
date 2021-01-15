#ifndef XSHADOW_H
#define XSHADOW_H

#include "xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

void xShadow_ListAdd(xEnt* ent);
void xShadowSetWorld(RpWorld* world);
void xShadowManager_Init(int32 numEnts);
void xShadowManager_Reset();
void xShadowManager_Render();

#endif