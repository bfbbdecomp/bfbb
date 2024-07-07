#ifndef ZCUTSCENEMGR_H
#define ZCUTSCENEMGR_H

#include "xCutsceneMgr.h"
#include "rpworld.h"

struct xScene;
struct zCutsceneMgr : xCutsceneMgr
{
};

struct zCutsceneHack
{
    S8* cinname;
    S8* modelname;
    F32 radius;
    U32 tworoot;
    U32 noshadow;
    U32 alphaBits;
    RpAtomic* (*renderCB)(RpAtomic*);
};

struct zCutSceneNames
{
    S8 name[64];
    S32 played;
    S32 skipOK;
};

void zCutsceneMgrInit(void* b, void* tasset);
void zCutsceneMgrInit(xBase* b, xCutsceneMgrAsset* tasset);
void zCutsceneMgrReset(zCutsceneMgr* mgr);
void zCutsceneMgrSave(zCutsceneMgr*, xSerial* s);
void zCutsceneMgrLoad(zCutsceneMgr*, xSerial* s);
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data);
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data);
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data);
void zCutSceneNamesTable_clearAll();
void zCutsceneMgrPlayStart(zCutsceneMgr* t);
S32 zCutsceneMgrEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*);

void zCutsceneMgrKillFX(zCutsceneMgr* t);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrUpdate(xBase* to, xScene* sc, F32 dt);
void check_hide_entities();

#endif
