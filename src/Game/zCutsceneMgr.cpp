#include "zCutsceneMgr.h"

#include <types.h>

#include "zGlobals.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "zMusic.h"
#include "../src/Core/x/xEvent.h"
#include "../src/Core/x/xCutscene.h"
#include "../src/Core/x/xserializer.h"
#include "../src/Core/x/xSnd.h"
#include "../src/Core/p2/iFile.h"
#include "../src/Core/p2/iTRC.h"
#include "../src/Core/p2/iCutscene.h"
#include "../src/Core/p2/iSystem.h"

extern zCutSceneNames zCutSceneNamesTable[14];
extern uint8 ents_hidden;
extern int32 s_atomicNumber;

// func_80052874
void zCutsceneMgrInit(void* b, void* tasset)
{
    zCutsceneMgrInit((xBase*)b, (xCutsceneMgrAsset*)tasset);
}

// func_80052894
void zCutsceneMgrInit(xBase* b, xCutsceneMgrAsset* tasset)
{
    zCutsceneMgr* mgr = (zCutsceneMgr*)b;
    xBaseInit(mgr, tasset);
    mgr->eventFunc = zCutsceneMgrEventCB;
    mgr->tasset = tasset;
    mgr->csn = NULL;
    if (mgr->linkCount != 0)
    {
        mgr->link = (xLinkAsset*)(mgr->tasset + 1);
    }
    else
    {
        mgr->link = NULL;
    }
    ents_hidden = 0;
}

// func_8005290C
void zCutsceneMgrReset(zCutsceneMgr* mgr)
{
    xBaseReset(mgr, mgr->tasset);
    if (mgr->csn != NULL)
    {
        xCutscene_Destroy(mgr->csn);
    }
    mgr->csn = NULL;
    zEntPlayerControlOn(CONTROL_OWNER_CUTSCENE);
    ents_hidden = 0;
}

// func_80052968
void zCutsceneMgrSave(zCutsceneMgr*, xSerial* s)
{
    for (uint32 i = 0; i < 14; i++)
    {
        if (zCutSceneNamesTable[i].played)
        {
            s->Write_b1(1);
        }
        else
        {
            s->Write_b1(0);
        }
    }
}

// func_800529E4
void zCutsceneMgrLoad(zCutsceneMgr*, xSerial* s)
{
    for (uint32 i = 0; i < 14; i++)
    {
        s->Read_b1(&zCutSceneNamesTable[i].played);
    }
}

// func_80052A44
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data)
{
    atomic->worldBoundingSphere.radius = *(RwReal*)data;
    atomic->boundingSphere.radius = *(RwReal*)data;
    atomic->geometry->morphTarget->boundingSphere.radius = *(RwReal*)data;
    atomic->interpolator.flags = atomic->interpolator.flags & 0xfffffffd;
    return atomic;
}

// func_80052A74
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data)
{
    RwRGBA color = material->color;
    color.alpha = (uint32)data;
    material->color = color;
    return material;
}

// func_80052ADC
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data)
{
    RpGeometry* pGeom = atomic->geometry;
    if ((uint32)data & (1 << s_atomicNumber))
    {
        RpGeometryForAllMaterials(pGeom, HackAlphaSetMaterialAlphaCB, (void*)0xfe);
    }
    s_atomicNumber++;
    return atomic;
}

// func_80052B3C
void zCutSceneNamesTable_clearAll()
{
    for (int i = 0; i < 14; i++)
    {
        zCutSceneNamesTable[i].played = 0;
    }
}

// func_80052B84
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrPlayStart__FP12zCutsceneMgr")

// func_80052DB0
int32 zCutsceneMgrEventCB(xBase*, xBase* to, uint32 toEvent, const float32*, xBase*)
{
    zCutsceneMgr* t = (zCutsceneMgr*)to;

    switch (toEvent)
    {
    case 0x13:
        zEntPlayerControlOn(CONTROL_OWNER_CUTSCENE);
        t->stop = 1;
        break;
    case 0x18:
        break;
    case 0xbe:
        zEntPlayerControlOff(CONTROL_OWNER_CUTSCENE);
        zMusicPause();
        if (globals.cmgr == NULL)
        {
            t->stop = 0;
            t->csn = xCutscene_Create(t->tasset->cutsceneAssetID);
            if (t->csn != NULL)
            {
                xCutscene_LoadStart(t->csn);
                globals.cmgr = t;
                t->oldfov = xCameraGetFOV(&globals.camera);
            }
        }
        break;
    case 0xbf:
        zEntPlayerControlOn(CONTROL_OWNER_CUTSCENE);
        break;
    case 0xa:
        zCutsceneMgrReset(t);
        break;
    }

    return 1;
}

#if 1
// func_80052EB4
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrFinishLoad__FP5xBase")
#else
void zCutsceneMgrFinishLoad(xBase* to)
{
    zCutsceneMgr* t = (zCutsceneMgr*)to;
    while (true)
    {
        iFileAsyncService();
        xSndUpdate();
        iCSLoadStep(t->csn);
        iTRCDisk::CheckDVDAndResetState();
        if (!t->csn->Ready)
        {
            break;
        }
        iVSync();
    }
    zCutsceneMgrPlayStart(t);
    zEntEvent(t, t, 0x18);
    zEntEvent(globals.player.ent.id, 8);
    zEntEvent(globals.player.ent.id, 4);
}
#endif

// func_80052F58
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrFinishExit__FP5xBase")

// func_8005302C
void zCutsceneMgrKillFX(zCutsceneMgr* t)
{
    xCutsceneMgrAsset* a = t->tasset;
    for (int32 i = 0; i < 15; i++)
    {
        if (a->emitID[i] == 0)
        {
            continue;
        }
        zParEmitter* e = zParEmitterFind(a->emitID[i]);
        if (e != NULL)
        {
            e->emit_flags = e->emit_flags & 0xfe;
        }
    }
}

// func_80053094
void zCutsceneMgrUpdateFX(zCutsceneMgr* t, float32)
{
    xCutsceneMgrAsset* a = t->tasset;
    xCutscene* csn = t->csn;
    for (int32 i = 0; i < 15; i++)
    {
        if (a->emitID[i] == 0)
        {
            continue;
        }
        zParEmitter* e = zParEmitterFind(a->emitID[i]);
        if (e != NULL)
        {
            if (e->emit_flags & 1)
            {
                if (csn->Time > a->endTime[i])
                {
                    e->emit_flags = e->emit_flags & 0xfe;
                }
            }
            else
            {
                if (csn->Time >= a->startTime[i] && csn->Time <= a->endTime[i])
                {
                    e->emit_flags = e->emit_flags | 1;
                }
            }
        }
    }
}

// func_80053150
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrUpdate__FP5xBaseP6xScenef")

// func_80053438
void check_hide_entities()
{
    bool mgrNotNull = globals.cmgr;
    if (mgrNotNull == ents_hidden)
    {
        return;
    }
    ents_hidden = mgrNotNull;

    zScene* scene = globals.sceneCur;
    zEnt** it = scene->ents;
    zEnt** end = &it[scene->num_ents];
    if (mgrNotNull)
    {
        while (it != end)
        {
            zEnt* ent = *it;
            if (!(ent->baseFlags & 8) && ent->baseFlags & 0x20)
            {
                ent->flags = ent->flags | 0x80;
            }
            it++;
        }
        return;
    }

    while (it != end)
    {
        zEnt* ent = *it;
        if (ent->baseFlags & 0x20)
        {
            ent->flags = ent->flags & 0x7f;
        }
        it++;
    }
}
