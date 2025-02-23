#include "zPlatform.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "xEntDrive.h"
#include "zParEmitter.h"

#include "xMath.h"

#include <types.h>

zParEmitter* sEmitTremble;
zParEmitter* sEmitBreakaway;

char* _ = "";

void genericPlatRender(xEnt* ent)
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
                if ( ent->passet->fr.fspeed != restingSpeed )
                {
                    zPlatform_Tremble(ent, 0.06f, DEG2RAD(720), ent->passet->fr.fspeed + 1.0f);
                }
            }

        }
    }
}

void zPlatform_Setup(zPlatform* ent, xScene* sc)
{
    zEntSetup((zEnt *)ent);
    sEmitTremble   = zParEmitterFind("PAREMIT_PLAT_TREMBLE");
    sEmitBreakaway = zParEmitterFind("PAREMIT_PLAT_BREAKAWAY");
    if (ent->subType == ZPLATFORM_SUBTYPE_PADDLE)
    {
        ent->tmr = -1e38;
        ent->state = 2;
        ent->ctr = ent->passet->paddle.startOrient;
    }
}

void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    zPlatform* plat = (zPlatform*)xent;
    xEntDefaultTranslate(xent,dpos,dmat);
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
