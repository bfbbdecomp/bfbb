#ifndef XSKYDOME_H
#define XSKYDOME_H

#include "xEnt.h"

void xSkyDome_Setup();
void xSkyDome_AddEntity(xEnt* ent, int32 sortorder, int32 lockY);
void xSkyDome_Render();

#endif