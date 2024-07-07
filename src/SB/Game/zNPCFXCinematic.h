#ifndef ZNPCFXCINEMATIC_H
#define ZNPCFXCINEMATIC_H

#include <types.h>
#include "zCutsceneMgr.h"

void zNPCFXStartup();
void zNPCFXShutdown();
S32 zNPCFXCutscenePrep(const xScene*, F32, const zCutsceneMgr* csnmgr);
void zNPCFXCutscene(const xScene*, F32, const zCutsceneMgr* csnmgr);
void zNPCFXCutsceneDone(const xScene*, F32, const zCutsceneMgr* csnmgr);

#endif
