#include "xBase.h"
#include "xEvent.h"
#include "xstransvc.h"

#include "zTaxi.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zScene.h"

#include <types.h>

static ztalkbox::answer_enum sAnswer = ztalkbox::ANSWER_3;

static taxiCB* tCB;

void zTaxi_Init(xBase& data, xDynAsset& asset, size_t)
{
    zTaxi_Init((zTaxi*)&data, (taxi_asset*)&asset);
}

// Nonmatch due to scheduling. https://decomp.me/scratch/wfRIQ
void zTaxi_Init(zTaxi* taxi, taxi_asset* asset)
{
    xBaseInit((xBase*)taxi, (xBaseAsset*)asset);

    static taxiCB tCB1;
    tCB = &tCB1;

    taxi->basset = asset;
    taxi->eventFunc = zTaxiEventCB;
    if (taxi->linkCount != 0)
    {
        taxi->link = (xLinkAsset*)(asset + 1);
    }
    else
    {
        taxi->link = NULL;
    }

    U32 size;
    xVec3* assetPosition = (xVec3*)xSTFindAsset(asset->marker, &size);
    if (assetPosition != NULL && size == sizeof(xVec3))
    {
        xVec3Copy(&taxi->pos, assetPosition);
        taxi->prevState = 0;
        taxi->currState = 0;
        taxi->radius = 1.3f;
    }
}

void zTaxi_Setup(zTaxi* taxi)
{
    // Load assets.
    zSceneFindObject(taxi->basset->cameraID);
    zSceneFindObject(taxi->basset->portalID);
    zSceneFindObject(taxi->basset->talkBoxID);
    xSTFindAsset(taxi->basset->textID, NULL);

    // Taxi setup.
    xBase* taxiObj = zSceneFindObject(taxi->basset->taxiID);
    *(xBase**)&taxi->taxi = taxiObj;
    taxi->portalTimer = -1.0f;
    taxi->baseFlags |= (U16)2;
}

// Nonmatch due to regalloc, scheduling. https://decomp.me/scratch/1o3TG
void zTaxi_Update(xBase* to, xScene*, F32 dt)
{
    zTaxi* taxi = (zTaxi*)to;

    xCylinder cylinder;
    xVec3Copy(&cylinder.center, &taxi->pos);
    cylinder.r = taxi->radius;
    cylinder.h = 5.0f;
    xIsect isect;
    iCylinderIsectVec(&cylinder, (xVec3*)&globals.player.ent.model->Mat->pos, &isect);
    if (isect.penned == -1.0f && xBaseIsEnabled((xBase*)taxi))
    {
        if (taxi->currState == 0)
        {
            sAnswer = ztalkbox::ANSWER_3;
            taxi->currState = 1;
            taxi->radius = 2.5f;
        }
    }
    else
    {
        taxi->currState = 0;
        taxi->radius = 1.3f;
    }

    switch (taxi->currState)
    {
    case 0:
        break;
    case 1:
        if (gCurrentPlayer == NULL && globals.player.JumpState == 0)
        {
            if (sAnswer == 1)
            {
                taxi->currState = 3;
                zEntPlayer_SNDPlay(ePlayerSnd_Taxi, 0.0f);
                zEntPlayer_SNDPlay(ePlayerSnd_Bus, 0.2f);
            }
            if (sAnswer == 2)
            {
                taxi->currState = 2;
            }
        }
        break;
    case 2:
        zEntPlayerControlOn(CONTROL_OWNER_TAXI);
        break;
    case 3:
    case 5:
        break;
    }

    if (taxi->prevState != taxi->currState)
    {
        switch (taxi->currState)
        {
        case 0:
            zEntEvent(taxi->basset->talkBoxID, eEventEndConversation);
            break;
        case 1:
        {
            ztalkbox* talkbox = (ztalkbox*)zSceneFindObject(taxi->basset->talkBoxID);
            talkbox->start_talk(taxi->basset->textID, tCB, NULL);
            if (gCurrentPlayer == eCurrentPlayerSpongeBob)
            {
                zEntPlayerControlOff(CONTROL_OWNER_TAXI);
                zEntEvent(taxi->basset->cameraID, eEventEndConversation);
                zEntEvent(taxi->basset->taxiID, eEventInvisible);
                talkbox->set_text(taxi->basset->textID);
            }
            else
            {
                talkbox->set_text(xStrHash("MNU5 TAXI WARNING TXT"));
            }
            break;
        }
        case 2:
            zEntEvent(taxi->basset->talkBoxID, eEventEndConversation);
            break;
        case 3:
            zEntEvent(taxi->basset->talkBoxID, eEventEndConversation);
            zEntEvent(taxi->basset->cameraID, eEventStartConversation);
            zEntEvent(taxi->basset->cameraID, eEventSwitch, 0.5f, 0.0f, 0.0f, 0.0f);
            zEntEvent(taxi->basset->taxiID, eEventVisible);
            zEntEvent(taxi->basset->taxiID, eEventAnimPlay, 2.0f, 0.0f, 0.0f, 0.0f);
            taxi->invTimer = taxi->basset->invDelay;
            taxi->portalTimer = taxi->basset->portalDelay;
            break;
        case 4:
            xEntHide(&globals.player.ent);
            break;
        case 5:
            zEntEvent(taxi->basset->portalID, eEventTeleportPlayer);
            break;
        }
    }

    taxi->prevState = taxi->currState;

    if (0.0f == taxi->invTimer && taxi->currState == 3)
    {
        taxi->currState = 4;
    }

    if (0.0f == taxi->portalTimer)
    {
        taxi->currState = 5;
    }

    if (taxi->portalTimer > 0.0f)
    {
        taxi->portalTimer -= dt;
        if (taxi->portalTimer < 0.0f)
        {
            taxi->portalTimer = 0.0f;
        }
    }

    if (taxi->invTimer > 0.0f)
    {
        taxi->invTimer -= dt;
        if (taxi->invTimer < 0.0f)
        {
            taxi->invTimer = 0.0f;
        }
    }
}

void zTaxi_tb_answer(U32 answer)
{
    sAnswer = (ztalkbox::answer_enum)answer;
}

void zTaxi_Save(zTaxi* taxi, xSerial* s)
{
    xBaseSave((xBase*)taxi, s);
}

void zTaxi_Load(zTaxi* taxi, xSerial* s)
{
    xBaseLoad((xBase*)taxi, s);
}

S32 zTaxiEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventSceneBegin:
        break;

    case eEventEnable:
        xBaseEnable(to);
        break;

    case eEventDisable:
        xBaseDisable(to);
        break;
    }
    return eEventEnable;
}

void taxiCB::on_signal(U32)
{
}

void taxiCB::on_start()
{
}

void taxiCB::on_answer(ztalkbox::answer_enum answer)
{
    zTaxi_tb_answer(answer);
}

void taxiCB::on_stop()
{
}
