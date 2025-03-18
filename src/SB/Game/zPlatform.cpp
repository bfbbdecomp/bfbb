#include "zPlatform.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "xEntDrive.h"
#include "zParEmitter.h"

#include "xMath.h"
#include "xMath3.h"

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

void zPlatform_Init(zPlatform* plat, xEntAsset* asset)
{
    zEntInit(plat, asset, 'PLAT');
}

void zPlatform_Save(zPlatform* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zPlatform_Load(zPlatform* ent, xSerial* s)
{
    zEntLoad(ent, s);
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
        plat->state = 0x3;
    }
    else if (plat->subType == ZPLATFORM_SUBTYPE_BREAKAWAY)
    {
        plat->tmr = plat->passet->ba.ba_delay;
        plat->state = 0x0;
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
        plat->state = 0x2;
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
