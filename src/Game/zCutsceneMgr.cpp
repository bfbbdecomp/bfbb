#include "zCutsceneMgr.h"

#include <types.h>

#include "zGlobals.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "zMusic.h"
#include "zNPCFXCinematic.h"
#include "../src/Core/x/xEvent.h"
#include "../src/Core/x/xCutscene.h"
#include "../src/Core/x/xserializer.h"
#include "../src/Core/x/xSnd.h"
#include "../src/Core/x/xString.h"
#include "../src/Core/p2/iFile.h"
#include "../src/Core/p2/iTRC.h"
#include "../src/Core/p2/iCutscene.h"
#include "../src/Core/p2/iSystem.h"

extern zCutsceneHack cutsceneHackTable[58];
extern zCutSceneNames zCutSceneNamesTable[14];
extern int32 gCutsceneSkipOK;
extern int32 donpcfx;
extern uint8 ents_hidden;
extern int32 s_atomicNumber;
extern float32 gSkipTimeCutscene;

extern float32 _897;

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

#ifndef NON_MATCHING
// func_80052B84
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrPlayStart__FP12zCutsceneMgr")
#else
void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
    gCutsceneSkipOK = 1;
    for (uint32 i = 0; i < 14; i++)
    {
        if (t->csn->Info->AssetID == xStrHash(zCutSceneNamesTable[i].name))
        {
            zCutSceneNamesTable[i].played = 1;
            gCutsceneSkipOK = zCutSceneNamesTable[i].skipOK;
            break;
        }
    }

    for (uint32 i = 0; i < 58; i++)
    {
        uint32 cinid = xStrHash(cutsceneHackTable[i].cinname);
        if (t->tasset->cutsceneAssetID != cinid)
        {
            continue;
        }

        uint32 hackid = xStrHash(cutsceneHackTable[i].modelname);
        for (uint32 j = 0; j < t->csn->Info->NumData; j++)
        {
            if (hackid != t->csn->Data[j].AssetID || (t->csn->Data[j].DataType & 0xfffffff) != 1 ||
                t->csn->Data[j].DataPtr == NULL)
            {
                continue;
            }

            if (cutsceneHackTable[i].radius != _897)
            {
                RpClumpForAllAtomics((RpClump*)*((int*)(t->csn->Data[j].DataPtr) + 0xf),
                                     HackBoundCB, &cutsceneHackTable[i].radius);
                t->csn->Data[j].DataType = t->csn->Data[j].DataType | 0x40000000;
            }
            if (cutsceneHackTable[i].tworoot != 0)
            {
                t->csn->Data[j].DataType = t->csn->Data[j].DataType | 0x20000000;
            }
            if (cutsceneHackTable[i].noshadow != 0)
            {
                t->csn->Data[j].DataType = t->csn->Data[j].DataType | 0x10000000;
            }
            if (cutsceneHackTable[i].alphaBits != 0)
            {
                s_atomicNumber = 0;
                RpClumpForAllAtomics((RpClump*)*((int*)(t->csn->Data[j].DataPtr) + 15), HackAlphaCB,
                                     (void*)cutsceneHackTable[i].alphaBits);
            }
            if (cutsceneHackTable[i].renderCB != NULL)
            {
                typedef RpAtomic* (*cb)(RpAtomic*);
                *(cb*)((int*)t->csn->Data[j].DataPtr + 0x12) = cutsceneHackTable[i].renderCB;

                if (*(cb*)((int*)t->csn->Data[j].DataPtr + 0x12) == 0)
                {
                    *(cb*)((int*)t->csn->Data[j].DataPtr + 0x12) = AtomicDefaultRenderCallBack;
                }
            }
        }
    }
}
#endif

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

#ifndef NON_MATCHING
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
        if (t->csn->Ready)
        {
            break;
        }
        iVSync();
    }
    zCutsceneMgrPlayStart(t);
    zEntEvent(to, to, 0x18);
    zEntEvent(&globals.player.ent, 8);
    zEntEvent(&globals.player.ent, 4);
    return;
}
#endif

#ifndef NON_MATCHING
// func_80052F58
#pragma GLOBAL_ASM("asm/Game/zCutsceneMgr.s", "zCutsceneMgrFinishExit__FP5xBase")
#else
void zCutsceneMgrFinishExit(xBase* to)
{
    zCutsceneMgr* t;

    while (1)
    {
        iFileAsyncService();
        xSndUpdate();
        if (t->csn->Waiting == 0)
            break;
        iVSync();
    }
    if (donpcfx != 0)
    {
        zNPCFXCutsceneDone(globals.sceneCur, _897, t);
    }
    donpcfx = 0;
    if (xCutscene_Destroy(t->csn) == 0)
    {
        return;
    }

    zEntEvent(&globals.player.ent, 9);
    zEntEvent(&globals.player.ent, 3);
    zCutsceneMgrKillFX(t);
    t->csn = NULL;
    globals.cmgr = NULL;
}
#endif

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
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt)
{
    zCutsceneMgr* t = (zCutsceneMgr*)to;
    if (t->csn->ShutDownWait)
    {
        if (donpcfx)
        {
            zNPCFXCutsceneDone(sc, dt, t);
        }
        donpcfx = 0;
        if (xCutscene_Destroy(t->csn))
        {
            zCutsceneMgrKillFX(t);
            t->csn = NULL;
            globals.cmgr = NULL;
            xCameraSetFOV(&globals.camera, t->oldfov);
        }
    }
    else
    {
        if (t->csn->Ready)
        {
            if (!donpcfx)
            {
                donpcfx = zNPCFXCutscenePrep(sc, dt, t);
            }
            if (donpcfx)
            {
                zNPCFXCutscene(sc, dt, t);
            }

            zCutsceneMgrUpdateFX(t, dt);
            if (t->stop || !xCutscene_Update(t->csn, dt))
            {
                if (!t->stop)
                {
                    zEntEvent(to, to, 0x13);
                }

                t->csn->PlaybackSpeed = _897;
                zEntEvent(&globals.player.ent, 9);
                zEntEvent(&globals.player.ent, 3);
                zEntEvent(to, to, 0xbf);
                iCameraSetNearFarClip(_897, _897);

                if ((globals.sceneCur->pendingPortal))
                {
                    zEntEvent(&globals.player.ent, 8);
                    zEntEvent(&globals.player.ent, 4);
                    xSndStopAll(0xffff);
                    return;
                }

                if (donpcfx)
                {
                    zNPCFXCutsceneDone(sc, dt, t);
                }
                donpcfx = 0;

                if (xCutscene_Destroy(t->csn))
                {
                    zCutsceneMgrKillFX(t);
                    t->csn = NULL;
                    globals.cmgr = NULL;
                    xCameraSetFOV(&globals.camera, t->oldfov);
                }

                zMusicUnpause(0);
            }
            else
            {
                if (gCutsceneSkipOK && t->csn->Time > gSkipTimeCutscene &&
                    globals.pad0->pressed & 0x50000)
                {
                    zEntEvent(to, to, 0x13);
                }
            }
        }
        else
        {
            iCSLoadStep(t->csn);
            if (t->csn->Ready)
            {
                zCutsceneMgrPlayStart(t);
                zEntEvent(to, to, 0x18);
                zEntEvent(&globals.player.ent, 8);
                zEntEvent(&globals.player.ent, 4);
                donpcfx = zNPCFXCutscenePrep(sc, dt, t);
            }
        }
    }
    check_hide_entities();
}

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
