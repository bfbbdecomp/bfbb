#include <types.h>

#include "xstransvc.h"
#include "xEvent.h"
#include "xString.h"
#include "xEnt.h"

#include "zBusStop.h"
#include "zGame.h"
#include "zGlobals.h"
#include "zScene.h"

#include "zEntPlayer.h"
#include "zEntCruiseBubble.h"

uint32 gBusStopIsRunning;
static xEnt* sBusStopUI;

void zBusStop_Init(xBase& base, xDynAsset& asset, ulong32)
{
    zBusStop_Init((zBusStop*)&base, (busstop_asset*)&asset);
}

void zBusStop_Init(zBusStop* bstop, busstop_asset* asset)
{
    xBaseInit(bstop, asset);
    bstop->basset = asset;
    bstop->eventFunc = zBusStopEventCB;

    if (bstop->linkCount)
    {
        bstop->link = (xLinkAsset*)(asset + 1);
    }
    else
    {
        bstop->link = NULL;
    }

    uint32 size;
    void* marker = xSTFindAsset(asset->marker, &size);

    if (marker != NULL)
    {
        if (size == sizeof(xVec3))
        {
            xVec3Copy(&bstop->pos, (xVec3*)marker);
            bstop->prevState = 0;
            bstop->currState = 0;
        }
    }
}

void zBusStop_Setup(zBusStop* bstop)
{
    zSceneFindObject(bstop->basset->cameraID);
    bstop->bus = (zEnt*)zSceneFindObject(bstop->basset->busID);
    bstop->switchTimer = -1.0f;
    sBusStopUI = (xEnt*)zSceneFindObject(xStrHash("mnu4 busstop"));
}

void zBusStop_Update(xBase* to, xScene* scene, float32 dt)
{
    // If nearby, advance out of state 0, otherwise, drop back to state 0
    zBusStop* bstop = (zBusStop*)to;
    //zEnt* player = &globals.player.ent;
    float32 dx = globals.player.ent.bound.box.center.x - bstop->pos.x;
    float32 dy = globals.player.ent.bound.box.center.y - bstop->pos.y;
    float32 dz = globals.player.ent.bound.box.center.z - bstop->pos.z;
    if (dx * dx + dy * dy + dz * dz < 6.25f)
    {
        if (bstop->currState == 0)
        {
            bstop->currState = 1;
        }
    }
    else
    {
        bstop->currState = 0;
    }

    switch (bstop->currState)
    {
    case 0:
        break;

    case 1:
        if (globals.player.JumpState == 0)
        {
            if (!cruise_bubble::active())
            {
                if (globals.pad0->pressed & (1 << 12))
                {
                    bstop->currState = 2;
                    zEntPlayer_SNDPlay(ePlayerSnd_Bus, 0.0f);
                }
            }
        }

        if (cruise_bubble::active())
        {
            zEntEvent("mnu4 busstop", eEventInvisible);
        }
        else if (!xEntIsVisible(sBusStopUI))
        {
            zEntEvent("mnu4 busstop", eEventVisible);
        }
        break;

    case 2:
        globals.player.ent.frame->vel.x = 0.0f;
        globals.player.ent.frame->vel.y = 0.0f;
        globals.player.ent.frame->vel.z = 0.0f;
        break;

    case 3:
        xAnimSingle* single = bstop->bus->model->Anim->Single;
        if (single->Time < 0.1f || single->LastTime < 0.1f)
        {
            bstop->currState = 1;
        }

        globals.player.ent.frame->vel.x = 0.0f;
        globals.player.ent.frame->vel.y = 0.0f;
        globals.player.ent.frame->vel.z = 0.0f;
        break;
    }

    if (bstop->prevState != bstop->currState)
    {
        switch (bstop->currState)
        {
        case 0:
            zEntEvent("mnu4 busstop", eEventUIFocusOff_Unselect);
            break;

        case 1:
            zEntEvent("mnu4 busstop", eEventUIFocusOn_Select);
            zEntPlayerControlOn(CONTROL_OWNER_BUS_STOP);
            zEntEvent(bstop->basset->cameraID, eEventEndConversation);
            zEntEvent(bstop->basset->busID, eEventInvisible);
            gBusStopIsRunning = 0;
            break;

        case 2:
            zEntEvent("mnu4 busstop", eEventUIFocusOff_Unselect);
            zEntPlayerControlOff(CONTROL_OWNER_BUS_STOP);
            zEntEvent(bstop->basset->cameraID, eEventStartConversation);
            zEntEvent(bstop->basset->cameraID, eEventSwitch, 0.5f,
                      0.0f, 0.0f, 0.0f);
            zEntEvent(bstop->basset->busID, eEventVisible);
            zEntEvent(bstop->basset->busID, eEventAnimPlay, 2.0f, 0.0f,
                      0.0f, 0.0f);
            bstop->switchTimer = bstop->basset->delay;
            gBusStopIsRunning = 1;
            break;

        case 3:
            if (gCurrentPlayer != eCurrentPlayerSpongeBob)
            {
                gCurrentPlayer = eCurrentPlayerSpongeBob;
            }
            else if (bstop->basset->character == eCurrentPlayerSpongeBob)
            {
                gCurrentPlayer = eCurrentPlayerPatrick;
            }
            else if (bstop->basset->character == eCurrentPlayerPatrick)
            {
                gCurrentPlayer = eCurrentPlayerSandy;
            }
            zEntEvent(bstop, eEventBusStopSwitchChr);
            break;
        }
    }

    // Advance state
    bstop->prevState = bstop->currState;
    if (0.0f == bstop->switchTimer && bstop->currState == 2)
    {
        bstop->currState = 3;
    }

    // Advance timer
    if (bstop->switchTimer > 0.0f)
    {
        bstop->switchTimer -= dt;
        if (bstop->switchTimer < 0.0f)
        {
            bstop->switchTimer = 0.0f;
        }
    }
}

int32 zBusStopEventCB(xBase*, xBase*, uint32, const float32*, xBase*)
{
    return eEventEnable;
}
