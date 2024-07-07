#include "zEGenerator.h"
#include "zCollGeom.h"
#include "zGlobals.h"

#include "xEvent.h"

#include <types.h>

extern F32 lbl_803CD290; // 1.0f
extern F32 lbl_803CD294; // 0.0f
extern const char zEGeneratorStringBase[];

void zEGenerator_Init(void* egen, void* asset)
{
    zEGenerator_Init((zEGenerator*)egen, (xEntAsset*)asset);
}

#if 0
// I can't figure out the 2nd parameter for the find asset function call.
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset)
{
    zEntInit((zEnt*)egen, (xEntAsset*)asset, 'EGEN');
    egen->zasset = asset;
    if (egen->linkCount != 0)
    {
        egen->link = asset + 1;
    }
    else
    {
        egen->link = NULL;
    }
    egen->update = zEGenerator_Update;
    egen->move = zEGenerator_Move;
    egen->eventFunc = zEGenerator_EventCB;
    egen->render = zEGenerator_Render;
    egen->afile = NULL;
    if (asset->onAnimID)
    {
        void* buf = xSTFindAsset(asset->onAnimID, FREFREFRF);
        if (buf != NULL)
        {
            egen->afile = xAnimFileNew(buf, &zEGeneratorStringBase[0], 0, NULL);
            egen->atbl = xAnimTableNew(&zEGeneratorStringBase[0], NULL, 0);
            xAnimTableNewState(egen->atbl, &zEGeneratorStringBase[1], 0x10, 0, lbl_803CD290, NULL,
                               NULL, lbl_803CD294, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
            xAnimTableAddFile(egen->atbl, egen->afile, &zEGeneratorStringBase[1]);
            xAnimPoolAlloc(globals.scenePreload->mempool, egen, egen->atbl, egen->model);
        }
    }
}

#endif

void zEGenerator_Setup(zEGenerator* egen, xScene* sc)
{
    zEntSetup(egen);
    egen->num_dsts = 0;
    for (S32 i = 0; i < egen->linkCount; i++)
    {
        xLinkAsset* la = (xLinkAsset*)&egen->link[i];
        xBase* b = (xBase*)zSceneFindObject(la->dstAssetID);
        if (b != NULL && la->dstEvent == 0xc0)
        {
            if (b->baseType == eBaseTypeMovePoint)
            {
                egen->num_dsts++;
            }
            else if (b->baseFlags & 0x20)
            {
                egen->num_dsts++;
            }
        }
    }
}

void zEGenerator_Save(zEGenerator* ent, xSerial* s)
{
    zEntSave((zEnt*)ent, s);
}

void zEGenerator_Load(zEGenerator* ent, xSerial* s)
{
    zEntLoad((zEnt*)ent, s);
}

void zEGenerator_Reset(zEGenerator* egen, xScene* sc)
{
    zEntReset((zEnt*)egen);
    zEGenAsset* zasset = (zEGenAsset*)egen->asset;
    egen->flags = (U16)zasset->flags;
    if (egen->flags & 1)
    {
        zEGenerator_TurnOn(egen);
    }
    else
    {
        zEGenerator_TurnOff(egen);
    }
    if (zasset->moreFlags & 0b100)
    {
        egen->chkby = XENT_COLLTYPE_NONE;
    }
    else
    {
        egen->chkby = XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
    }
    egen->bupdate((xEnt*)egen, (xVec3*)&egen->model->Mat->pos);
}

void zEGenerator_Move(zEGenerator* egen, xScene* sc, F32 dt)
{
}

void zEGenerator_Render(zEGenerator* egen)
{
    xEntRender((xEnt*)egen);
}

#if 0
// WIP.
void zEGenerator_TurnOn(zEGenerator* egen)
{
    egen->flags |= 1;
    zEGenAsset* zasset = (zEGenAsset*)egen->asset;
    if (egen->afile != NULL)
    {
        egen->model->Anim->Single->CurrentSpeed = @679;
    }
    egen->tmr = zasset->ontime;
    xMat4x3Toworld(&egen->src_pos, &egen->model->Mat, &egen->zasset->src_dpos);
    if (egen->num_dsts)
    {
        // TODO!!!
    }
    else
    {
        xDrawSphere(&egen->dst_pos, @856, 0xc006);
    }
    for (S32 i = 0; i < 2; i++)
    {
        if (egen->lfx[i] != NULL)
        {
            zLightningKill(egen->lfx[i]);
            egen->lfx[i] = NULL;
        }
    }
    // TODO!!!
}

#endif

void zEGenerator_TurnOff(zEGenerator* egen)
{
    egen->flags &= 0xfffe;
    if (egen->afile != NULL)
    {
        egen->model->Anim->Single->CurrentSpeed = lbl_803CD294;
    }
    for (S32 i = 0; i < 2; i++)
    {
        if (egen->lfx[i] != NULL)
        {
            zLightningKill(egen->lfx[i]);
            egen->lfx[i] = NULL;
        }
    }
}

void zEGenerator_ToggleOn(zEGenerator* egen)
{
    if (egen->flags & 1)
    {
        zEGenerator_TurnOff(egen);
    }
    else
    {
        zEGenerator_TurnOn(egen);
    }
}

#if 0
// Need to figure out how to call the link function. Everything else should be in order as long as the case labels are correct.
S32 zEGeneratorEventCB(xBase* to, xBase* from, U32 toEvent, const F32* toParam,
                         xBase* toParamWidget)
{
    zEGenerator* egen = (zEGenerator*)from;
    switch (toEvent)
    {
    case eEventOn:
        zEGenerator_TurnOn(egen);
        break;
    case eEventOff:
        zEGenerator_TurnOff(egen);
        break;
    case eEventToggle:
        zEGenerator_ToggleOn(egen);
        break;
    case eEventReset:
        zEGenerator_Reset(egen, (xScene*)globals.scenePreload);
        break;
    case eEventFastVisible:
        xEntShow((xEnt*)egen);
        break;
    case eEventFastInvisible:
        xEntHide((xEnt*)egen);
        break;
    case eEventCollision_Visible_On:
        xEntShow((xEnt*)egen);
        egen->chkby = XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
        egen->bupdate((xEnt*)egen, (xVec3*)&egen->model->Mat->pos);
        break;
    case eEventCollision_Visible_Off:
        xEntHide((xEnt*)egen);
        egen->chkby = XENT_COLLTYPE_NONE;
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable((xEnt*)egen);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable((xEnt*)egen);
        break;
    case eEventLaunchShrapnel:
        if (toParamWidget == NULL)
            break;
        if (toParamWidget->link == NULL)
            break;
        toParamWidget->link(toParamWidget, egen->model, 0, 0);
        break;
    }
    return eEventEnable;
}

#endif
