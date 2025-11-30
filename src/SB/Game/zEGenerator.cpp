#include "zEGenerator.h"

#include "xDraw.h"
#include "xEntBoulder.h"
#include "xMovePoint.h"
#include "zCollGeom.h"
#include "zGlobals.h"
#include "zThrown.h"

#include <types.h>

void zEGenerator_Init(void* egen, void* asset)
{
    zEGenerator_Init((zEGenerator*)egen, (xEntAsset*)asset);
}

void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset)
{
    U32 size;
    zEntInit((zEnt*)egen, (xEntAsset*)asset, 'EGEN');
    zEGenAsset* zasset = (zEGenAsset*)asset;
    egen->zasset = zasset;
    if (egen->linkCount != 0)
    {
        egen->link = (xLinkAsset*)((U8*)asset + sizeof(zEGenAsset));
    }
    else
    {
        egen->link = NULL;
    }
    egen->update = (xEntUpdateCallback)zEGenerator_Update;
    egen->move = (xEntMoveCallback)zEGenerator_Move;
    egen->eventFunc = (xBaseEventCB)zEGeneratorEventCB;
    egen->render = (xEntRenderCallback)zEGenerator_Render;
    egen->afile = NULL;

    if (zasset->onAnimID)
    {
        void* buf = xSTFindAsset(zasset->onAnimID, &size);
        if (buf != NULL)
        {
            egen->afile = xAnimFileNew(buf, "", 0, NULL);
            egen->atbl = xAnimTableNew("", NULL, 0);
            xAnimTableNewState(egen->atbl, "On", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);
            xAnimTableAddFile(egen->atbl, egen->afile, "On");
            xAnimPoolAlloc(&globals.sceneCur->mempool, egen, egen->atbl, egen->model);
        }
    }
}

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

void zEGenerator_Update(zEGenerator* egen, xScene* sc, F32 dt)
{
    xEntUpdate(egen, sc, dt);
    xMat4x3Toworld(&egen->src_pos, (xMat4x3*)egen->model->Mat, &egen->zasset->src_dpos);

    zEnt* ent = (zEnt*)egen->dst;

    if (ent != NULL && ent->baseFlags & 0x20)
    {
        if (ent->baseType == eBaseTypeBoulder)
        {
            xVec3Copy(&egen->dst_pos, xEntGetCenter(ent));
        }
        else
        {
            xMat4x3Toworld(&egen->dst_pos, (xMat4x3*)ent->model->Mat, &egen->dst_off);
        }
    }

    if (egen->lfx[0] != NULL)
    {
        zLightningModifyEndpoints(egen->lfx[0], &egen->src_pos, &egen->dst_pos);
    }

    if (egen->lfx[1] != NULL)
    {
        zLightningModifyEndpoints(egen->lfx[1], &egen->src_pos, &egen->dst_pos);
    }

    if (egen->tmr > 0.0f)
    {
        egen->tmr -= dt;

        if (egen->tmr <= 0.0f)
        {
            zEGenerator_TurnOff(egen);
            zEntEvent((xBase*)egen, eEventOff);
        }
    }
}

void zEGenerator_Render(zEGenerator* egen)
{
    xEntRender((xEnt*)egen);
}

// scheduling
void zEGenerator_TurnOn(zEGenerator* egen)
{
    egen->flags |= 1;
    zEGenAsset* zasset = (zEGenAsset*)egen->asset;
    if (egen->afile != NULL)
    {
        egen->model->Anim->Single->CurrentSpeed = 1.0f;
    }
    egen->tmr = zasset->ontime;
    xMat4x3Toworld(&egen->src_pos, (xMat4x3*)egen->model->Mat, &zasset->src_dpos);

    if (egen->num_dsts)
    {
        U16 itgt = xrand() % egen->num_dsts;
        U16 imp = 0;

        for (S32 i = 0; i < egen->linkCount; i++)
        {
            const xLinkAsset* link = &egen->link[i];
            xBase* b = zSceneFindObject(link->dstAssetID);

            xVec3 destOffset;
            destOffset.x = link->param[0];
            destOffset.y = link->param[1];
            destOffset.z = link->param[2];
            xVec3Copy(&egen->dst_off, &destOffset);

            if (!b || link->dstEvent != eEventArcto)
                continue;

            if (imp == itgt)
            {
                if (b->baseType == eBaseTypeMovePoint)
                {
                    xVec3Copy(&egen->dst_pos, xMovePointGetPos((xMovePoint*)b));
                    xVec3AddTo(&egen->dst_pos, &egen->dst_off);
                    egen->dst = b;
                    break;
                }
                if (b->baseType == eBaseTypeBoulder)
                {
                    xVec3Copy(&egen->dst_pos, xEntGetCenter((xEntBoulder*)b));
                    egen->dst = b;
                    break;
                }
                if ((b->baseFlags & 0x20) != 0)
                {
                    xMat4x3Toworld(&egen->dst_pos, (xMat4x3*)((xEnt*)b)->model->Mat, &egen->dst_off);
                    egen->dst = b;
                    break;
                }
            }
            else
            {
                imp++;
            }
        }
    }
    xDrawSphere(&egen->dst_pos, 2.0f, 0xC0006);

    for (S32 i = 0; i < 2; i++)
    {
        if (egen->lfx[i] != NULL)
        {
            zLightningKill(egen->lfx[i]);
            egen->lfx[i] = NULL;
        }
    }

    _tagLightningAdd add;
    memset(&add, 0, sizeof(_tagLightningAdd));
    add.type = 3;
    add.total_points = ((xrand() << 1) & 6) + 8;
    add.start = &egen->src_pos;
    add.end = &egen->dst_pos;
    add.color = xColorFromRGBA(200, 200, 255, 200);
    add.thickness = 0.3f;
    add.arc_height = -0.2f;
    add.zeus_normal_offset = 0.2f;
    add.zeus_back_offset = 0.1f;
    add.zeus_side_offset = 0.1f;
    add.rand_radius = 15.0f;
    add.flags = 0x1C30;
    egen->lfx[0] = zLightningAdd(&add);

    add.total_points = 0x10;
    add.type = 3;
    add.move_degrees = 360.0f * xurand() + 180.0f;

    if (xrand() & 1)
    {
        add.move_degrees = -add.move_degrees;
    }

    add.setup_degrees = 90.0f * xurand() + 20.0f;
    add.color = xColorFromRGBA(80, 100, 255, 200);
    add.rot_radius = 0.25f;
    add.thickness = 0.3f;
    add.rand_radius = 10.0f;
    add.flags = 0xC18;
    egen->lfx[1] = zLightningAdd(&add);
}

void zEGenerator_TurnOff(zEGenerator* egen)
{
    egen->flags &= 0xfffe;
    if (egen->afile != NULL)
    {
        egen->model->Anim->Single->CurrentSpeed = 0.0f;
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
        zEGenerator_Reset(egen, (xScene*)globals.sceneCur);
        break;
    case eEventVisible:
    case eEventFastVisible:
        xEntShow(egen);
        break;
    case eEventInvisible:
    case eEventFastInvisible:
        xEntHide(egen);
        break;
    case eEventCollision_Visible_On:
        xEntShow(egen);
    case eEventCollisionOn:
        egen->chkby = XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
        egen->bupdate(egen, (xVec3*)&egen->model->Mat->pos);
        break;
    case eEventCollision_Visible_Off:
        xEntHide(egen);
    case eEventCollisionOff:
        egen->chkby = XENT_COLLTYPE_NONE;
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable(egen);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable(egen);
        break;
    case eEventLaunchShrapnel:
        zShrapnelAsset* shrap = (zShrapnelAsset*)toParamWidget;
        if (shrap == NULL || shrap->initCB == NULL)
            break;

        shrap->initCB(shrap, egen->model, 0, 0);
        break;
    }
    return eEventEnable;
}
