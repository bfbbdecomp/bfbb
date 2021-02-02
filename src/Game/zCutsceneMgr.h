#ifndef ZCUTSCENEMGR_H
#define ZCUTSCENEMGR_H

#include "../Core/x/xCutsceneMgr.h"

struct zCutsceneMgr : xCutsceneMgr
{
};

struct xScene;

void zCutsceneMgrInit(void* b, void* tasset);
void zCutsceneMgrSave(zCutsceneMgr*, xSerial* s);
void zCutsceneMgrLoad(zCutsceneMgr*, xSerial* s);
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt);

#endif