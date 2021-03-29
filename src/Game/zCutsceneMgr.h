#ifndef ZCUTSCENEMGR_H
#define ZCUTSCENEMGR_H

#include "../Core/x/xCutsceneMgr.h"
#include "rpworld.h"

struct xScene;
struct zCutsceneMgr : xCutsceneMgr
{
};

struct zCutsceneHack
{
    int8* cinname;
    int8* modelname;
    float32 radius;
    uint32 tworoot;
    uint32 noshadow;
    uint32 alphaBits;
    RpAtomic* (*renderCB)(RpAtomic*);
};

struct zCutSceneNames
{
    int8 name[64];
    int32 played;
    int32 skipOK;
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
int32 zCutsceneMgrEventCB(xBase*, xBase* to, uint32 toEvent, const float32*, xBase*);

void zCutsceneMgrKillFX(zCutsceneMgr* t);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt);
void check_hide_entities();

#endif