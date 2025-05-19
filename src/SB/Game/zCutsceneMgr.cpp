#include "zCutsceneMgr.h"

#include <types.h>

#include "zGlobals.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "zMusic.h"
#include "zNPCFXCinematic.h"
#include "zParEmitter.h"
#include "xEvent.h"
#include "xCutscene.h"
#include "xserializer.h"
#include "xSnd.h"
#include "xString.h"
#include "iFile.h"
#include "iTRC.h"
#include "iCutscene.h"
#include "iSystem.h"

static zCutsceneHack cutsceneHackTable[58] = {
    {"cin_hammer", "spongebob.dff", 0.0f, 1, 0, 0, NULL},
    {"cin_hammer", "fish_j_skel.dff", 0.0f, 1, 0, 0, NULL},
    {"cin_hammer", "ham_bind07_ham_bind1.dff", 0.0f, 1, 0, 0, NULL},
    {"cin_tartar", "robot_tar_skel.dff", 0.0f, 1, 0, 0, NULL},
    {"GY_dutchman_open", "spatula_golden_spatula.dff", 0.0f, 0, 0, 1, xFXShinyRender},
    {"GY_dutchman_end", "group12_golden_spatula.dff", 0.0f, 0, 0, 1, xFXShinyRender},
    {"GY_dutchman_end", "group12_bubble_pirate_ship.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"GY_dutchman_end", "group12_bubble1.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"GY_dutchman_end", "group12_bubble2.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"GY_dutchman_end", "group12_bubble3.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"GY_dutchman_end", "group12_bubble4.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"GY_dutchman_end", "group12_bubble5.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"B1_ending", "golden_spatula_golden_spatula.dff", 0.0f, 0, 0, 1, xFXShinyRender},
    {"B2_open", "icecube.dff", 0.0f, 0, 0, 1, NULL},
    {"B2_round2", "group4_SB_frozen1.dff", 0.0f, 0, 0, 1, NULL},
    {"B2_round3", "group6_bubble_bowlingball1.dff", 0.0f, 0, 0, 1, xFXBubbleRender},
    {"B3_open", "dupe_duplicatotron3001_skel2.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_open", "sb_karate_skel.dff", 400.0f, 0, 1, 0, NULL},
    {"B3_transition", "sb_big_skel.dff", 400.0f, 0, 1, 0, NULL},
    {"B3_transition", "sb_karate_skel.dff", 400.0f, 0, 1, 0, NULL},
    {"B3_transition", "plankton_boss_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss19.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss18.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss16.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss15.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss24.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss14.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss23.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss13.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss22.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss12.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "duplicatotron3001_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss21.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss11.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform02_platform_b301_boss20.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_transition", "platform01_platform_b301_boss10.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "sb_big_skel.dff", 50.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_02.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_03.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_04.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_05.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "duplicatotron3000_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_06.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "plankton_boss_skel_07.dff", 0.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "sb_big_armr_skel.dff", 100.0f, 0, 1, 0, NULL},
    {"B3_end_game_win", "sb_big_arml_skel.dff", 100.0f, 0, 1, 0, NULL},
    {"game_win", "larry_lobster_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "squidward_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "mr_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "mspuffs_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "mermaid_man_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "King_neptune_bind_gecklund_group1.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "plankton_skel.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "bubblebuddy.dff", 0.0f, 0, 1, 0, NULL},
    {"game_win", "gary_skel.dff", 0.0f, 0, 1, 0, NULL},
};

static zCutSceneNames zCutSceneNamesTable[14] = {
    { "cin_1", 0, 1 },        { "cin_2", 0, 1 },         { "cin_3", 0, 1 },
    { "cin_4", 0, 1 },        { "cin_5", 0, 1 },         { "cin_6", 0, 1 },
    { "cin_7", 0, 1 },        { "cin_8", 0, 1 },         { "cin_9", 0, 1 },
    { "cin_10", 0, 1 },       { "cin_11", 0, 0 },        { "cin_mm_post_death", 0, 0 },
    { "cin_mm_scare", 0, 1 }, { "cin_sh_barrel", 0, 1 },

};
static S32 gCutsceneSkipOK;
static S32 donpcfx;
static U8 ents_hidden;
static S32 s_atomicNumber;

void zCutsceneMgrInit(void* b, void* tasset)
{
    zCutsceneMgrInit((xBase*)b, (xCutsceneMgrAsset*)tasset);
}

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

void zCutsceneMgrSave(zCutsceneMgr*, xSerial* s)
{
    for (U32 i = 0; i < 14; i++)
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

void zCutsceneMgrLoad(zCutsceneMgr*, xSerial* s)
{
    for (U32 i = 0; i < 14; i++)
    {
        s->Read_b1(&zCutSceneNamesTable[i].played);
    }
}

RpAtomic* HackBoundCB(RpAtomic* atomic, void* data)
{
    atomic->worldBoundingSphere.radius = *(RwReal*)data;
    atomic->boundingSphere.radius = *(RwReal*)data;
    atomic->geometry->morphTarget->boundingSphere.radius = *(RwReal*)data;
    atomic->interpolator.flags = atomic->interpolator.flags & 0xfffffffd;
    return atomic;
}

RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data)
{
    RwRGBA color = material->color;
    color.alpha = (U32)data;
    material->color = color;
    return material;
}

RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data)
{
    RpGeometry* pGeom = atomic->geometry;
    if ((U32)data & (1 << s_atomicNumber))
    {
        RpGeometryForAllMaterials(pGeom, HackAlphaSetMaterialAlphaCB, (void*)0xfe);
    }
    s_atomicNumber++;
    return atomic;
}

void zCutSceneNamesTable_clearAll()
{
    for (int i = 0; i < 14; i++)
    {
        zCutSceneNamesTable[i].played = 0;
    }
}

void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
    gCutsceneSkipOK = 1;
    for (U32 i = 0; i < 14; i++)
    {
        if (t->csn->Info->AssetID == xStrHash(zCutSceneNamesTable[i].name))
        {
            zCutSceneNamesTable[i].played = 1;
            gCutsceneSkipOK = zCutSceneNamesTable[i].skipOK;
            break;
        }
    }

    for (U32 i = 0; i < 58; i++)
    {
        U32 cinid = xStrHash(cutsceneHackTable[i].cinname);
        if (t->tasset->cutsceneAssetID != cinid)
        {
            continue;
        }

        U32 hackid = xStrHash(cutsceneHackTable[i].modelname);
        for (U32 j = 0; j < t->csn->Info->NumData; j++)
        {
            if (hackid != t->csn->Data[j].AssetID || (t->csn->Data[j].DataType & 0xfffffff) != 1 ||
                t->csn->Data[j].DataPtr == NULL)
            {
                continue;
            }

            if (cutsceneHackTable[i].radius != 0.0f)
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

S32 zCutsceneMgrEventCB(xBase*, xBase* to, U32 toEvent, const F32*, xBase*)
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

void zCutsceneMgrFinishExit(xBase* to)
{
    zCutsceneMgr* t = (zCutsceneMgr*)to;

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
        zNPCFXCutsceneDone(globals.sceneCur, 0.0f, t);
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

void zCutsceneMgrKillFX(zCutsceneMgr* t)
{
    xCutsceneMgrAsset* a = t->tasset;
    for (S32 i = 0; i < 15; i++)
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

void zCutsceneMgrUpdateFX(zCutsceneMgr* t, F32)
{
    xCutsceneMgrAsset* a = t->tasset;
    xCutscene* csn = t->csn;
    for (S32 i = 0; i < 15; i++)
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

void zCutsceneMgrUpdate(xBase* to, xScene* sc, F32 dt)
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

                t->csn->PlaybackSpeed = 0.0f;
                zEntEvent(&globals.player.ent, 9);
                zEntEvent(&globals.player.ent, 3);
                zEntEvent(to, to, 0xbf);
                iCameraSetNearFarClip(0.0f, 0.0f);

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
