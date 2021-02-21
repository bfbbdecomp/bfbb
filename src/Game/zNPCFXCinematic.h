#ifndef ZNPCFXCINEMATIC_H
#define ZNPCFXCINEMATIC_H

#include <types.h>
#include "zCutsceneMgr.h"

void zNPCFXStartup();
void zNPCFXShutdown();
int32 zNPCFXCutscenePrep(const xScene*, float32, const zCutsceneMgr* csnmgr);
void zNPCFXCutscene(const xScene*, float32, const zCutsceneMgr* csnmgr);
void zNPCFXCutsceneDone(const xScene*, float32, const zCutsceneMgr* csnmgr);

#endif