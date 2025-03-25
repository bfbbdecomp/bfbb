#include "zPlatform.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "xEntDrive.h"
#include "zParEmitter.h"

#include "xMath.h"
#include "xMath3.h"
#include "xstransvc.h"
#include "zGlobals.h"

#include <types.h>

zParEmitter* sEmitTremble;
zParEmitter* sEmitBreakaway;

// Taken from zPlatform.s
// Defining these here makes the stringBase0 offsets match in the later functions.
char* str1 = "";
char* str2 = "Idle";
char* str3 = "Spring";
char* str4 = "teeter_totter_pat";
char* str5 = "teeter_totter_pat_bind";
char* str6 = "PAREMIT_PLAT_TREMBLE";
char* str7 = "PAREMIT_PLAT_BREAKAWAY";
char* str8 = "skatepark_bumper";
char* str9 = "skatepark_flipper";
char* str10 = "Check1";

void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
void zPlatform_Move(xEnt* entPlat, xScene* s, float dt, xEntFrame* frame);

static void genericPlatRender(xEnt* ent)
{
    if (!ent->model || !xEntIsVisible(ent))
    {
        return;
    }

    xModelRender(ent->model);
}

void zPlatform_Init(void* plat, void* asset)
{
    zPlatform_Init((zPlatform*)plat, (xEntAsset*)asset);
}

// FIXME: some asset pointer shenanigans plus a few other quirky spots
void zPlatform_Init(zPlatform* plat, xEntAsset* asset)
{
    // asset pointer points to packed structure with more than just an xEntAsset inside!
    xPlatformAsset* platAsset = (xPlatformAsset*)((char*)asset + sizeof(xEntAsset));
    xEntMotionAsset* entMotionAsset = (xEntMotionAsset*)((char*)platAsset + sizeof(xPlatformAsset));
    xLinkAsset* linkAsset = (xLinkAsset*)((char*)entMotionAsset + sizeof(xLinkAsset));

    zEntInit(plat, asset, 'PLAT');

    plat->passet = platAsset;
    plat->subType = platAsset->type;

    if (plat->linkCount != 0)
    {
        plat->link = linkAsset;
    }
    else
    {
        plat->link = NULL;
    }

    plat->update = zPlatform_Update;
    plat->move = zPlatform_Move;
    plat->eventFunc = zPlatformEventCB;
    plat->transl = zPlatformTranslate;
    plat->render = genericPlatRender;

    plat->am = NULL;
    plat->bm = NULL;
    plat->state = ZPLATFORM_STATE_INIT;
    plat->plat_flags = 0x0;
    plat->fmrt = NULL;
    plat->pauseMult = 1.0;
    plat->pauseDelta = 0.0f;

    if (plat->subType == ZPLATFORM_SUBTYPE_BREAKAWAY)
    {
        plat->collis = (xEntCollis*)xMemAlloc(gActiveHeap, sizeof(xEntCollis), 0);

        xModelInstance* modelInst = NULL;

        plat->collis->chk = 0x0;
        plat->collis->pen = 0x0;

        // TODO: does collis need to be null terminated???
        //       this manual memory management is weird as heck but it matches the disassembly
        *((U32*)&plat->collis->colls[18]) = NULL;

        plat->am = plat->model;
        platAsset->ba.bustModelID = 0x0;

        if (linkAsset->dstAssetID != NULL)
        {
            modelInst = (xModelInstance*)xSTFindAsset(linkAsset->dstAssetID, (U32*)&plat->flags);
        }

        if (modelInst != NULL)
        {
            xEntLoadModel(plat, (RpAtomic*)modelInst);
            plat->bm = plat->model;
        }
        else
        {
            plat->bm = NULL;
        }

        plat->model = plat->am;
        plat->collModel = NULL;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_SPRINGBOARD)
    {
        xAnimFile* animFile = NULL;

        xAnimFile* anim1File;
        if (platAsset->sb.animID[0] != NULL)
        {
            anim1File = (xAnimFile*)xSTFindAsset(platAsset->sb.animID[0], NULL);
        }
        else
        {
            anim1File = NULL;
        }

        void* anim2File;
        if (platAsset->sb.animID[1] != NULL)
        {
            anim2File = xSTFindAsset(platAsset->sb.animID[1], NULL);
        }
        else
        {
            anim2File = NULL;
        }

        if (anim1File != NULL || anim2File != NULL)
        {
            gxAnimUseGrowAlloc = TRUE;

            plat->atbl = xAnimTableNew("", NULL, 0x0);
            xAnimTableNewState(plat->atbl, "Idle", 0x10, 0x0, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);

            if (anim1File != NULL)
            {
                xAnimTableNewState(plat->atbl, "Spring", 0x20, 0, 1.0f, NULL, NULL, 0.0f, NULL,
                                   NULL, xAnimDefaultBeforeEnter, NULL, NULL);
                xAnimTableNewTransition(plat->atbl, "Spring", "Idle",
                                        (xAnimTransitionConditionalCallback)0x0,
                                        (xAnimTransitionCallback)0x0, 0x10, 0, 0.0f, 0.0f, 0, 0,
                                        0.1f, NULL);

                animFile = xAnimFileNew(anim1File, "", 0, (xAnimFile**)0x0);
                xAnimTableAddFile(plat->atbl, animFile, "Spring");
            }

            if (anim2File != NULL)
            {
                animFile = xAnimFileNew(anim2File, "", 0, NULL);
                xAnimTableAddFile(plat->atbl, animFile, "Idle");
            }
            else
            {
                xAnimTableAddFile(plat->atbl, animFile, "Idle");
                plat->atbl->StateList->Speed = 1.0f;
            }

            // TODO: if this isn't matching, it's because the globals struct isn't defined correctly
            //       Figure out why that is
            gxAnimUseGrowAlloc = FALSE;
            xAnimPoolAlloc(&globals.scenePreload->mempool, plat, plat->atbl, plat->model);
        }
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_FM)
    {
        plat->fmrt = (zPlatFMRunTime*)xMemAlloc(gActiveHeap, sizeof(zPlatFMRunTime), 0);
    }

    xEntMotionInit(&plat->motion, plat,
                   (xEntMotionAsset*)((char*)asset + sizeof(xEntAsset) + sizeof(xPlatformAsset)));
    xEntDriveInit(&plat->drv, plat);

    if (plat->asset->modelInfoID == xStrHash("teeter_totter_pat") ||
        plat->asset->modelInfoID == xStrHash("teeter_totter_pat_bind"))
    {
        plat->flags |= 0x2;
    }
}

void zPlatform_Save(zPlatform* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zPlatform_Load(zPlatform* ent, xSerial* s)
{
    zEntLoad(ent, s);
}

void zPlatform_Update(xEnt* ent, xScene* sc, float dt)
{
}

void zPlatform_Move(xEnt* entPlat, xScene* s, float dt, xEntFrame* frame)
{
    zPlatform* plat = (zPlatform*)entPlat;
    xEntMotionMove(&plat->motion, s, dt, frame);
    xEntDriveUpdate(&plat->drv, s, dt, NULL);
}

void zPlatform_Tremble(zPlatform* plat, float ampl, float freq, float dur);

void zPlatform_Mount(zPlatform* ent)
{
    if (ent->subType == ZPLATFORM_SUBTYPE_BREAKAWAY)
    {
        if (ent->state == 0)
        {
            if ((ent->passet->ba.breakflags & 1) && zEntPlayer_IsSneaking())
            {
                ent->state = 1;
            }
            else
            {
                ent->state = 2;

                // Needs to be used or the comparison's operands will be swapped.
                F32 restingSpeed = 0.0f;
                if (ent->passet->fr.fspeed != restingSpeed)
                {
                    zPlatform_Tremble(ent, 0.06f, DEG2RAD(720), ent->passet->fr.fspeed + 1.0f);
                }
            }
        }
    }
}

void zPlatform_Setup(zPlatform* ent, xScene* sc)
{
    zEntSetup((zEnt*)ent);
    sEmitTremble = zParEmitterFind("PAREMIT_PLAT_TREMBLE");
    sEmitBreakaway = zParEmitterFind("PAREMIT_PLAT_BREAKAWAY");
    if (ent->subType == ZPLATFORM_SUBTYPE_PADDLE)
    {
        ent->tmr = -1e38;
        ent->state = 2;
        ent->ctr = ent->passet->paddle.startOrient;
    }
}

void zPlatform_Dismount(zPlatform* ent)
{
    if ((ent->subType == 9) && (ent->state == 1))
    {
        ent->state = 0;
    }
}

void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    zPlatform* plat = (zPlatform*)xent;
    xEntDefaultTranslate(xent, dpos, dmat);
    xEntMotionTranslate(&plat->motion, dpos, dmat);
}

void zPlatform_BreakawayFallFX(zPlatform* ent, F32 dt)
{
    if (sEmitBreakaway != NULL)
    {
        xParEmitterCustomSettings info;
        info.custom_flags = 0x100;
        info.pos = *xEntGetCenter(ent);
        info.pos.y += 0.5f;
        for (int iVar2 = 0; iVar2 < 25; iVar2++)
        {
            xParEmitterEmitCustom(sEmitBreakaway, 0.03333333f, &info);
        }
    }
}

void zPlatform_Reset(zPlatform* plat, xScene* sc)
{
    if (plat->subType == ZPLATFORM_SUBTYPE_BREAKAWAY)
    {
        plat->model = plat->am;
        plat->collModel = NULL;
    }

    zEntReset(plat);

    // FIXME: One of the xPlatformAssetData structs is bigger than detected by DWARF data.
    //        Need to eventually figure out which one it is.
    xEntMotionInit(&plat->motion, plat, (xEntMotionAsset*)((char*)plat->passet + 0x3C));
    xEntMotionReset(&plat->motion, sc);

    plat->plat_flags = 0x1;
    if (plat->subType == ZPLATFORM_SUBTYPE_PLATFORM)
    {
        plat->state = ZPLATFORM_STATE_UNK1;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_BREAKAWAY)
    {
        plat->tmr = plat->passet->ba.ba_delay;
        plat->state = ZPLATFORM_STATE_INIT;
        plat->pflags &= 0xF9;
        plat->collis->chk = 0x0;

        xVec3Copy(&plat->frame->vel, (const xVec3*)&g_O3);

        plat->bound.mat = (xMat4x3*)plat->model->Mat;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_MECH)
    {
        plat->state = (U16)plat->motion.mech.state;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_SPRINGBOARD)
    {
        plat->tmr = -1.0f;
        plat->ctr = 0;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_PADDLE)
    {
        plat->tmr = 1e-9f;
        plat->state = ZPLATFORM_STATE_UNK3;
        plat->ctr = plat->passet->paddle.startOrient;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_FM)
    {
        for (U32 i = 0; i < 12; i++)
        {
            plat->fmrt->flags = 0;

            plat->fmrt->tmrs[i] = 0.0f;
            plat->fmrt->ttms[i] = 0.0f;
            plat->fmrt->atms[i] = 0.0f;
            plat->fmrt->dtms[i] = 0.0f;
            plat->fmrt->vms[i] = 0.0f;
            plat->fmrt->dss[i] = 0.0f;
        }
    }

    if (plat->motion.type == 0x3)
    {
        plat->src = plat->motion.mp.src;
    }

    plat->chkby &= 0xE3;

    if (plat->passet->flags & 0x4)
    {
        plat->chkby |= 0x18;
    }

    plat->bupdate(plat, (xVec3*)&plat->model->Mat->pos);

    plat->moving = FALSE;

    if (plat->asset->modelInfoID == xStrHash("teeter_totter_pat") ||
        plat->asset->modelInfoID == xStrHash("teeter_totter_pat_bind"))
    {
        plat->plat_flags |= 0x2;
    }

    plat->pauseMult = 1.0f;
    plat->pauseDelta = 0.0f;
}

U32 zMechIsStartingForth(zPlatform* ent, U16 param_2)
{
    if (ent->motion.asset->mech.type == 4)
    {
        return param_2 == 1;
    }
    else
    {
        return param_2 == 0;
    }
}

U32 zMechIsStartingBack(zPlatform* ent, U16 param_2)
{
    if (ent->motion.asset->mech.type == 4)
    {
        return param_2 == 4;
    }
    else
    {
        return param_2 == 3;
    }
}

S32 zPlatformEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* base3)
{
    return 1;
}
