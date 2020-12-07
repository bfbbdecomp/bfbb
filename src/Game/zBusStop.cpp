#include "zBusStop.h"

#include <types.h>

#include "../Core/x/xstransvc.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xString.h"
#include "../Core/x/xEnt.h"

#include "zGame.h"
#include "zGlobals.h"
#include "zScene.h"

#include "zEntPlayer.h"
#include "zEntCruiseBubble.h"

extern int8 zBusStop_Strings[];

extern float32 zBusStop_float_minusone;
extern float32 zBusStop_float_6p25;
extern float32 zBusStop_float_zero;
extern float32 zBusStop_float_0p1;
extern float32 zBusStop_float_0p5;
extern float32 zBusStop_float_two;

extern xEnt* sBusStopUI;

int32 zBusStopEventCB(xBase*, xBase*, uint32, const float32*, xBase*);

// func_8012D888
void zBusStop_Init(xBase& base, xDynAsset& asset, unsigned long)
{
    zBusStop_Init((zBusStop*)&base, (busstop_asset*)&asset);
}

// func_8012D8A8
void zBusStop_Init(zBusStop* bstop, busstop_asset* asset)
{
    xBaseInit(bstop, asset);
    bstop->basset = asset;
    bstop->eventFunc = zBusStopEventCB;

    if (bstop->linkCount != 0)
    {
        bstop->link = (xLinkAsset*)(((uint8*)asset) + 0x24);
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

// func_8012D948
void zBusStop_Setup(zBusStop* bstop)
{
    zSceneFindObject(bstop->basset->cameraID);
    bstop->bus = (zEnt*)zSceneFindObject(bstop->basset->busID);
    bstop->switchTimer = zBusStop_float_minusone;
    sBusStopUI = (xEnt*)zSceneFindObject(xStrHash(zBusStop_Strings));
}

// func_8012D9A8
#if 1
#pragma GLOBAL_ASM("asm/Game/zBusStop.s", "zBusStop_Update__FP5xBaseP6xScenef")
#else
// This function is so close, it's off by a single floating point register
// assignment right at the end of the function :(
// The registers in `if (bstop->switchTimer < zBusStop_float_zero)` are
// assigned the opposite to how they are in the original code.
void zBusStop_Update(xBase* to, xScene* scene, float32 dt)
{
    // If nearby, advance out of state 0, otherwise, drop back to state 0
    zBusStop* bstop = (zBusStop*)to;
    //zEnt* player = &globals.player.ent;
    float32 dx = globals.player.ent.bound.box.center.x - bstop->pos.x;
    float32 dy = globals.player.ent.bound.box.center.y - bstop->pos.y;
    float32 dz = globals.player.ent.bound.box.center.z - bstop->pos.z;
    if (dx * dx + dy * dy + dz * dz < zBusStop_float_6p25)
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
                    zEntPlayer_SNDPlay(ePlayerSnd_Bus, zBusStop_float_zero);
                }
            }
        }

        if (cruise_bubble::active())
        {
            zEntEvent(zBusStop_Strings, eEventInvisible);
        }
        else if (!xEntIsVisible(sBusStopUI))
        {
            zEntEvent(zBusStop_Strings, eEventVisible);
        }
        break;

    case 2:
        globals.player.ent.frame->vel.x = zBusStop_float_zero;
        globals.player.ent.frame->vel.y = zBusStop_float_zero;
        globals.player.ent.frame->vel.z = zBusStop_float_zero;
        break;

    case 3:
        xAnimSingle* single = bstop->bus->model->Anim->Single;
        if (single->Time < zBusStop_float_0p1 || single->LastTime < zBusStop_float_0p1)
        {
            bstop->currState = 1;
        }

        globals.player.ent.frame->vel.x = zBusStop_float_zero;
        globals.player.ent.frame->vel.y = zBusStop_float_zero;
        globals.player.ent.frame->vel.z = zBusStop_float_zero;
        break;
    }

    if (bstop->prevState != bstop->currState)
    {
        switch (bstop->currState)
        {
        case 0:
            zEntEvent(zBusStop_Strings, eEventUIFocusOff_Unselect);
            break;

        case 1:
            zEntEvent(zBusStop_Strings, eEventUIFocusOn_Select);
            zEntPlayerControlOn(CONTROL_OWNER_BUS_STOP);
            zEntEvent(bstop->basset->cameraID, eEventEndConversation);
            zEntEvent(bstop->basset->busID, eEventInvisible);
            gBusStopIsRunning = 0;
            break;

        case 2:
            zEntEvent(zBusStop_Strings, eEventUIFocusOff_Unselect);
            zEntPlayerControlOff(CONTROL_OWNER_BUS_STOP);
            zEntEvent(bstop->basset->cameraID, eEventStartConversation);
            zEntEvent(bstop->basset->cameraID, eEventSwitch, zBusStop_float_0p5,
                      zBusStop_float_zero, zBusStop_float_zero, zBusStop_float_zero);
            zEntEvent(bstop->basset->busID, eEventVisible);
            zEntEvent(bstop->basset->busID, eEventAnimPlay, zBusStop_float_two, zBusStop_float_zero,
                      zBusStop_float_zero, zBusStop_float_zero);
            bstop->switchTimer = bstop->basset->delay;
            gBusStopIsRunning = 1;
            break;

        case 3:
            if (gCurrentPlayer != eCurrentPlayerSpongeBob)
            {
                gCurrentPlayer = eCurrentPlayerSpongeBob;
            }
            else if (bstop->basset->character == 0)
            {
                gCurrentPlayer = eCurrentPlayerPatrick;
            }
            else if (bstop->basset->character == 1)
            {
                gCurrentPlayer = eCurrentPlayerSandy;
            }
            zEntEvent(bstop, eEventBusStopSwitchChr);
            break;
        }
    }

    // Advance state
    bstop->prevState = bstop->currState;
    if (zBusStop_float_zero == bstop->switchTimer && bstop->currState == 2)
    {
        bstop->currState = 3;
    }

    // Advance timer
    if (bstop->switchTimer > zBusStop_float_zero)
    {
        bstop->switchTimer -= dt;
        if (bstop->switchTimer < zBusStop_float_zero)
        {
            bstop->switchTimer = zBusStop_float_zero;
        }
    }
}
#endif

// func_8012DD5C
int32 zBusStopEventCB(xBase*, xBase*, uint32, const float32*, xBase*)
{
    return eEventEnable;
}