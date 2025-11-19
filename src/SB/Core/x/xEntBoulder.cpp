#include "xCollide.h"
#include "xEntBoulder.h"
#include "xFX.h"
#include "xMarkerAsset.h"
#include "xMath3.h"
#include "xNPCBasic.h"
#include "xShadow.h"
#include "xVec3.h"

#include "zEntButton.h"
#include "zEntDestructObj.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zGrid.h"
#include "zNPCTypeCommon.h"
#include "zPlatform.h"
#include "zSurface.h"

#include <types.h>

static U32 sBubbleStreakID = 0xDEAD;

extern xEntBoulder* boulderVehicle;
static xEntCollis sBoulderCollis;

void xShadowManager_Add(xEnt* ent);
S32 xEntBoulder_KilledBySurface(xEntBoulder* ent);
S32 xEntBoulder_KilledBySurface(xEntBoulder* ent, xScene* sc, F32 dt);
S32 xBoulderGenerator_EventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget);
void xBoulderGenerator_Reset(xBoulderGenerator* gen);
S32 RecurseLinks(xLinkAsset*, S32, xEntBoulder**);

void xEntBoulder_FitToModel(xEntBoulder* ent)
{
    xVec3Copy(&ent->bound.cyl.center, (xVec3*)(&ent->model->Data->boundingSphere.center));
    ent->bound.cyl.r = ent->model->Data->boundingSphere.radius;
    xVec3Copy(&ent->localCenter, &ent->bound.cyl.center);
    xVec3AddTo(&ent->bound.cyl.center, (xVec3*)&ent->model->Mat->pos);
}

void xEntBoulder_Render(xEnt* ent)
{
    xModelInstance* model = ent->model;
    S32 shadowResult;
    xVec3 shadVec;
    F32 radius;

    if ((model != NULL) && (xEntIsVisible(ent) != 0))
    {
        switch (model->Flags & 0x400)
        {
            case 0:
                if (ent->flags & 0x40)
                {
                    if (iModelCull(model->Data, model->Mat) == 0)
                    {
                        xModelRender(model);
                    }
                }
                else
                {
                    shadVec.x = model->Mat->pos.x;
                    shadVec.y = model->Mat->pos.y - 10.0f;
                    shadVec.z = model->Mat->pos.z;

                    if (iModelCullPlusShadow(model->Data, model->Mat, &shadVec, &shadowResult) == 0)
                    {
                        xModelRender(model);
                    }

                    if (shadowResult == 0)
                    {
                        if (ent->flags & 0x10)
                        {
                            xShadowManager_Add(ent);
                        }
                        else
                        {
                            radius = ent->model->Data->boundingSphere.radius;
                            if (radius > 0.75f)
                            {
                                radius = 0.75f;
                            }
                            xShadowSimple_Add(ent->simpShadow,ent, 2.0f * radius, 1.0f);
                        }
                    }
                }
                break;
        }
    }
}

void xEntBoulder_Init(void* ent, void* asset)
{
    xEntBoulder_Init((xEntBoulder*)ent, (xEntAsset*)asset);
}

S32 xEntBoulderEventCB(xBase*, xBase*, U32, const F32*, xBase*);
void xEntBoulder_BUpdate(xEnt *, xVec3 *);
void xEntBoulder_Update(xEntBoulder *, xScene *, F32);

void xEntBoulder_Init(xEntBoulder* ent, xEntAsset* asset)
{
    xEntBoulderAsset* basset;

    xEntInit(ent, asset);
    ent->collType = 4;
    ent->collLev = 4;
    ent->bound.type = 1;
    ent->moreFlags |= 0x10;
    zEntParseModelInfo(ent, asset->modelInfoID);
    xEntInitShadow(*ent, ent->entShadow_embedded);
    ent->simpShadow = &ent->simpShadow_embedded;
    xShadowSimple_CacheInit(ent->simpShadow, ent, 0x50);
    ent->frame = (xEntFrame *)xMemAlloc(gActiveHeap, sizeof(xEntFrame), 0);
    memset(ent->frame, 0, sizeof(xEntFrame));
    basset = (xEntBoulderAsset*)(&asset[1]);
    ent->collis = NULL;
    ent->basset = basset;
    ent->eventFunc = xEntBoulderEventCB;
    ent->update = (void(*)(xEnt*, xScene*, F32))xEntBoulder_Update;
    ent->bupdate = (void(*)(xEnt*, xVec3*))xEntBoulder_BUpdate;
    ent->render = xEntBoulder_Render;

    if (ent->linkCount != 0)
    {
        ent->link = (xLinkAsset *)((int)ent->asset + 0x9C); // TODO: Figure out the actual type.
    }
    else
    {
        ent->link = NULL;
    }

    xEntBoulder_FitToModel(ent);

    if (basset->mass <= 0.0f)
    {
        basset->mass = 1.0f;
    }

    xEntBoulder_Reset(ent, globals.sceneCur);

    if (ent->asset->id == xStrHash("BUBBLEBOWL"))
    {
        ent->update = NULL;
        xEntHide(ent);
        ent->chkby = 0;
        ent->penby = 0;
        ent->collis_chk = 0;
        ent->collis_pen = 0;
        globals.player.bubblebowl = ent;
        ent->model->Data->renderCallBack = xFXBubbleRender;
        if (ent->model->Data->renderCallBack == NULL)
        {
            ent->model->Data->renderCallBack = AtomicDefaultRenderCallBack;
        }
    }

    ent->lastRolling = 0.0f;
    ent->rollingID = NULL;
    if (ent->asset->modelInfoID == xStrHash("cannon_puffer"))
    {
        ent->rollingID = xStrHash("Boulder_Bounce");
    }

    ent->baseFlags |= 0x20;
}

void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force);

void xEntBoulder_ApplyForces(xEntCollis* collis)
{
    for (S32 i = collis->dyn_sidx; i < collis->dyn_eidx; i++)
    {
        xCollis* coll = &collis->colls[i];
        xBase* obj = (xBase*)(coll->optr);
        if ((obj != NULL) && (obj->baseType == eBaseTypeBoulder))
        {
            xEntBoulder* boul = ((xEntBoulder *)(coll->optr));
            xVec3 vec;
            xVec3SMul(&vec, &collis->colls[i].norm, -5.0f);
            if ((boul == globals.player.drv.odriver)  || (boul == globals.player.drv.driver))
            {
                if (collis->colls[i].norm.y > 0.5f)
                {
                    vec.x = -vec.x;
                    vec.z = -vec.z;
                }
            }
            xEntBoulder_AddForce(boul, &vec);
            if (boul->basset->flags & 2)
            {
                zEntPlayer_DamageNPCKnockBack(boul, 1, &boul->bound.sph.center);
            }
        }
    }
}

void xEntBoulder_AddInstantForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != NULL)
    {
        xVec3* frcptr = &ent->instForce;
        xVec3AddTo(frcptr, force);
    }
}

void xEntBoulder_AddForce(xEntBoulder* ent, xVec3* force)
{
    if (ent->update != NULL)
    {
        xVec3* frcptr = &ent->force;
        xVec3AddTo(frcptr, force);
    }
}

void xEntBoulder_BUpdate(xEnt*, xVec3*)
{
    //For some reason this seems to be a completely empty function
}

void xEntBoulder_RealBUpdate(xEnt* ent, xVec3* pos)
{
    xVec3 vec;
    xEntBoulder* boul = (xEntBoulder*)ent;

    xMat3x3RMulVec(&vec, (xMat3x3 *)boul->model->Mat, (xVec3 *)&boul->localCenter);
    xVec3Add(&boul->bound.sph.center, pos, &vec);
    xBoundUpdate(&boul->bound);
    zGridUpdateEnt(boul);
}

void xEntBoulder_Update(xEntBoulder* ent, xScene* sc, F32 dt)
{
    // TODO: Improve variable names.
    S32 i;
    F32 dx__;
    F32 dy__;
    F32 dz__;
    F32 f31;
    F32 dVar16;
    F32 dVar18;
    F32 dVar20;
    F32 uVar19;
    xVec3 newRotVec;
    xVec3 a;
    xVec3 b;
    xVec3 bubVelRnd;
    xVec3 oldSphCen;
    xVec3 velNorm;
    xVec3 depen;
    xVec3 tmp;
    xVec3 depenNorm0;
    xVec3 force;
    xVec3 sphDist;
    xVec3 depenNorm1;
    xVec3 scaleVel;
    xVec3 someVec;
    S32 numDepens;
    S32 iter_npc;
    zNPCCommon* npc;
    xMat3x3 rotM;
    F32 vol;
    xEntBoulder* boul;

    if ((ent->timeToLive > 0.0f) && (ent->timeToLive -= dt, ent->timeToLive <= 0.0f))
    {
        zEntEvent(ent, eEventKill);
        return;
    }
    else if
    (
        (ent == globals.player.bubblebowl) &&
        (
            dx__ = (globals.player.ent.bound.sph.center.x - ent->model->Mat->pos.x),
            dy__ = (globals.player.ent.bound.sph.center.y - ent->model->Mat->pos.y),
            dz__ = (globals.player.ent.bound.sph.center.z - ent->model->Mat->pos.z),
            (dx__ * dx__) + (dy__ * dy__) + (dz__ * dz__) > 3600.0f
        )
    )
    {
        zEntEvent(ent, eEventKill);
        return;
    }

    if (ent->collis == NULL)
    {
        ent->collis = (xEntCollis *)&sBoulderCollis;
    }

    ent->collis->chk = ent->collis_chk;
    ent->collis->pen = ent->collis_pen;
    ent->collis->post = NULL;
    ent->collis->depenq = NULL;
    xMat3x3RMulVec(&newRotVec, (xMat3x3 *)ent->model->Mat, &ent->localCenter);
    xVec3Add(&ent->bound.sph.center, (xVec3*)&ent->model->Mat->pos, &newRotVec);

    if ((sBubbleStreakID != 0xDEAD) && (globals.player.bubblebowl == ent))
    {
        a = ent->bound.sph.center - (ent->rotVec * ent->bound.sph.r);
        b = ent->bound.sph.center + (ent->rotVec * ent->bound.sph.r);

        xFXStreakUpdate(sBubbleStreakID, &a, &b);
    }

    bubVelRnd.x = bubVelRnd.y = bubVelRnd.z = ent->bound.sph.r * 4.0f;

    U32 numBubbles;
    dVar18 = xVec3LengthFast(&ent->vel) * 0.1f;
    if (dVar18 >= 1.0f)
    {
        numBubbles = dVar18;
    }
    else
    {
        numBubbles = xurand() < dVar18;
    }

    if (numBubbles != 0)
    {
        zFX_SpawnBubbleTrail(&ent->bound.sph.center, numBubbles, NULL, &bubVelRnd);
    }

    xVec3Copy(&oldSphCen, &ent->bound.sph.center);
    ent->vel.y = -(ent->basset->gravity * dt - ent->vel.y);
    xVec3AddScaled(&ent->vel, &ent->instForce, (1.0f / ent->basset->mass));
    xVec3Init(&ent->instForce, 0.0f, 0.0f, 0.0f);
    xVec3AddScaled(&ent->vel, &ent->force, dt / ent->basset->mass);
    xVec3Init(&ent->force, 0.0f, 0.0f, 0.0f);
    xVec3Normalize(&velNorm, &ent->vel);
    xVec3AddScaled(&ent->bound.sph.center, &ent->vel, dt);
    xQuickCullForBound(&ent->bound.qcd, &ent->bound);
    zGridUpdateEnt(ent);
    zGooCollsBegin();
    xEntBeginUpdate(ent, sc, dt);
    ent->collType = 0x10;
    xEntCollide(ent, sc, dt);
    ent->collType = 0x04;
    xEntEndUpdate(ent, sc, dt);
    zGooCollsEnd();

    if (xEntBoulder_KilledBySurface(ent, sc, dt))
    {
        if (ent->collis == &sBoulderCollis)
        {
            ent->collis = NULL;
        }
        return;
    }

    numDepens = 0;
    xVec3Init(&tmp, 0.0f, 0.0f, 0.0f); // Let's initialize a vector for no reason.
    if
    (
        (ent->collis->env_eidx  > ent->collis->env_sidx) ||
        (ent->collis->dyn_eidx  > ent->collis->dyn_sidx) ||
        (ent->collis->npc_eidx  > ent->collis->npc_sidx) ||
        (ent->collis->stat_eidx > ent->collis->stat_sidx)
    )
    {
        xVec3Init(&depen, 0.0f, 0.0f, 0.0f);

        // Env
        for (i = ent->collis->env_sidx; i < ent->collis->env_eidx; i++)
        {
            if (ent->basset->flags & 1)
            {
                xVec3AddTo(&depen, (xVec3 *)(&ent->collis->colls[i].depen));
            }
            else
            {
                uVar19 = xVec3Dot(&ent->collis->colls[i].norm, &ent->collis->colls[i].depen);

                if
                (
                (ent == globals.player.bubblebowl) &&
                (xVec3Dot(&ent->collis->colls[i].norm, &velNorm) < -0.70710676f) &&
                (ent->timeToLive > 0.05f)
                )
                {
                    ent->timeToLive = 0.05f;
                }

                xVec3AddScaled(&depen, &ent->collis->colls[i].norm, uVar19);
            }
            numDepens++;
        }

        // Dyn
        for (i = ent->collis->dyn_sidx; i < ent->collis->dyn_eidx; i++)
        {
            if (ent->basset->flags & 1)
            {
                xVec3AddTo(&depen, (xVec3 *)(&ent->collis->colls[i].depen));
            }
            else
            {
                xVec3AddScaled(&depen, &ent->collis->colls[i].norm, xVec3Dot(&ent->collis->colls[i].norm, &ent->collis->colls[i].depen));
            }

            xEntBoulder* boul = ((xEntBoulder *)(ent->collis->colls[i].optr));
            if (boul->baseType == eBaseTypeBoulder)
            {
                xVec3Normalize(&depenNorm0, (xVec3 *)(&ent->collis->colls[i].depen));
                dVar18 = xVec3Dot(&ent->vel, &depenNorm0);
                dVar16 = xVec3Dot(&boul->vel, &depenNorm0);
                F32 collMass = boul->basset->mass;
                F32 boulMass = ent->basset->mass;
                xVec3SMulBy(&depenNorm0, ((2.0f * boulMass) * collMass * (dVar16 - dVar18)) / (boulMass + collMass));
                xVec3SMul(&force, &depenNorm0, ent->basset->bounce);
                xEntBoulder_AddInstantForce(ent, &force);
                xVec3SMul(&force, &depenNorm0, -boul->basset->bounce);
                xEntBoulder_AddInstantForce(boul, &force);
                if ((boul == boulderVehicle) && (ent->basset->flags & 2))
                {
                    zEntPlayer_Damage(boul, 1);
                }
            }

            _zEntButton* butt = (_zEntButton*)boul;
            if (butt->baseType == eBaseTypeButton)
            {
                zEntButton_Press(butt, 8);
                zEntButton_Hold(butt, 0x1000);
            }

            zPlatform* plat = ((zPlatform*)(boul));
            if
            (
                (ent == globals.player.bubblebowl) &&
                (plat->moreFlags & 0x10) &&
                (plat->baseType == eBaseTypePlatform) &&
                (plat->subType == ZPLATFORM_SUBTYPE_PADDLE && (plat->passet->paddle.paddleFlags & 0x10))
            )
            {
                zPlatform_PaddleCollide(&ent->collis->colls[i], (xVec3 *)(&ent->model->Mat->pos), &ent->vel, 1);
            }

            numDepens++;
        }

        // Stat
        for (i = ent->collis->stat_sidx; i < ent->collis->stat_eidx; i++)
        {
            if (ent->basset->flags & 1)
            {
                xVec3AddTo(&depen, (xVec3 *)(&ent->collis->colls[i].depen));
            }
            else
            {
                uVar19 = xVec3Dot(&ent->collis->colls[i].norm, &ent->collis->colls[i].depen);
                if
                (
                    (ent == globals.player.bubblebowl) &&
                    (xVec3Dot(&ent->collis->colls[i].norm, &velNorm) < -0.70710676f) &&
                    (ent->timeToLive > 0.05f)
                )
                {
                    ent->timeToLive = 0.05f;
                }
                xVec3AddScaled(&depen, &ent->collis->colls[i].norm, uVar19);
            }

            boul = (xEntBoulder *)(ent->collis->colls[i].optr);
            if ((ent->basset->flags & 4) && (boul->baseType == eBaseTypeDestructObj))
            {
                if
                (
                    (zEntDestructObj_GetHit((zEntDestructObj*)boul, 0x8000)) &&
                    (ent == globals.player.bubblebowl) &&
                    (ent->timeToLive > 0.05f))
                {
                    ent->timeToLive = 0.05f;
                }
                zEntDestructObj_Hit((zEntDestructObj*)boul, 0x8000);
            }
            else if
            (
                (ent == globals.player.bubblebowl) &&
                (boul->moreFlags & 0x10) &&
                (boul->baseType != eBaseTypeBoulder || (boul->basset->flags & 0x100))
            )
            {
                zEntEvent(ent, boul, eEventHit_BubbleBowl);
                zEntEvent(ent, boul, eEventHit);
                if (ent->timeToLive > 0.05f)
                {
                    ent->timeToLive = 0.05f;
                }
            }

            numDepens++;
        }

        // NPC
        for (iter_npc = ent->collis->npc_sidx; iter_npc < ent->collis->npc_eidx; iter_npc++)
        {
            npc = (zNPCCommon*)(ent->collis->colls[iter_npc].optr);
            if (ent->basset->flags & 1)
            {
                xVec3AddTo(&depen, (xVec3 *)(&ent->collis->colls[iter_npc].depen));
            }
            else
            {
                uVar19 = xVec3Dot(&ent->collis->colls[iter_npc].norm, &ent->collis->colls[iter_npc].depen);
                if
                (
                    (ent != globals.player.bubblebowl) ||
                    (npc->SelfType() & ~0xFF) != 'NTT\0'
                )
                {
                    xVec3AddScaled(&depen, &ent->collis->colls[iter_npc].norm, uVar19);
                }
            }

            if (ent->basset->flags & 8)
            {
                zEntEvent(ent, npc, eEventHit, 0);
                zEntPlayer_SNDPlayStreamRandom(0x00, 0x10, ePlayerStreamSnd_BowlComment1, ePlayerStreamSnd_BowlComment3, 0.1f);
                zEntPlayer_SNDPlayStreamRandom(0x10, 0x23, ePlayerStreamSnd_BowlComment1, ePlayerStreamSnd_BowlComment4, 0.1f);
                zEntPlayer_SNDPlayStreamRandom(0x24, 0x64, ePlayerStreamSnd_BowlComment1, ePlayerStreamSnd_BowlComment5, 0.1f);
                if
                (
                    (ent == globals.player.bubblebowl) &&
                    (
                    ((npc->SelfType() & ~0xFF) != 'NTT\0') ||
                    (npc->SelfType() == NPC_TYPE_TIKI_STONE)) &&
                    (ent->timeToLive > 0.05f)
                )
                {
                    ent->timeToLive = 0.05f;
                }
            }

            numDepens++;
        }

        if (numDepens != 0)
        {
            xVec3AddScaled(&ent->bound.sph.center, &depen, 1.0f / numDepens);
        }
    }

    xVec3Sub(&sphDist, &ent->bound.sph.center, &oldSphCen);
    xVec3SMul(&sphDist, &sphDist, (1.0f / dt));
    dVar18 = xVec3Length(&ent->vel);
    dVar20 = xVec3Length(&sphDist);
    if (dVar18 > ent->basset->maxVel)
    {
        dVar18 = ent->basset->maxVel;
    }
    if (dVar20 > dVar18)
    {
        xVec3SMulBy(&sphDist, (dVar18 / dVar20));
    }
    if (numDepens != 0)
    {
        xVec3Normalize(&depenNorm1, &depen);
        f31 = xVec3Dot(&ent->vel, &depenNorm1);
    }
    if (!(ent->basset->flags & 1) && (numDepens != 0))
    {
        F32 bounce = ent->basset->bounce;
        if ((bounce != 0.0f) && ((f31 / dVar18) < bounce + -1.0f))
        {
            dVar18 = xVec3Dot(&sphDist, &depenNorm1);
            if (-f31 > ent->basset->bounceDamp)
            {
                xVec3AddScaled(&sphDist, &depenNorm1, (-ent->basset->bounce * f31) - dVar18);
            }
        }
        if (ent->basset->friction != 0.0f)
        {
            xVec3Copy(&scaleVel, &ent->vel);
            xVec3AddScaled(&scaleVel, &depenNorm1, -f31);
            xVec3AddScaled(&sphDist, &scaleVel, -ent->basset->friction * dt);
        }
    }

    xVec3Copy(&ent->vel, &sphDist);

    if (numDepens != 0)
    {
        if (xVec3Length2(&depen) < 0.001f)
        {
            xVec3Init(&someVec, ent->vel.z, 0.0f, -ent->vel.x);
        }
        else
        {
            xVec3Cross(&someVec, &depen, &ent->vel);
        }
        xVec3Normalize(&someVec, &someVec);
        xVec3SMulBy(&ent->rotVec, 1.0f - ent->basset->stickiness);
        xVec3AddScaled(&ent->rotVec, &someVec, ent->basset->stickiness);
        if (xVec3Normalize(&ent->rotVec, &ent->rotVec) < 1e-5f)
        {
            ent->angVel = 0.0f;
        }
        else
        {
            F32 div = xVec3Length(&ent->vel) / ent->bound.sph.r;
            ent->angVel = ((1.0f - ent->basset->stickiness) * ent->angVel) + (ent->basset->stickiness * div);
        }
    }

    if (ent->angVel > ent->basset->maxAngVel)
    {
        ent->angVel = ent->basset->maxAngVel;
    }
    if (ent->angVel < -ent->basset->maxAngVel)
    {
        ent->angVel = -ent->basset->maxAngVel;
    }
    if ((ent->angVel > 0.075f) || (ent->angVel < -0.075f))
    {
        xMat3x3Rot(&rotM, &ent->rotVec, (ent->angVel * dt));
        xMat3x3Mul((xMat3x3*)ent->model->Mat, (xMat3x3*)ent->model->Mat, &rotM);
    }

    xMat3x3RMulVec(&newRotVec, (xMat3x3 *)(ent->model->Mat), &ent->localCenter);
    xVec3Sub((xVec3*)&ent->model->Mat->pos, &ent->bound.sph.center, &newRotVec);
    if ((ent->basset->soundID != 0) && (numDepens != 0) && (ent->lastRolling > 0.25f))
    {
        if (-f31 > ent->basset->minSoundVel)
        {
            vol = ent->basset->maxSoundVel - ent->basset->minSoundVel;
            F32 max = MAX(1e-5f, vol);
            vol = (-f31 - ent->basset->minSoundVel);
            vol /= max;

            if (vol > 1.0f)
            {
                vol = 1.0f;
            }

            vol *= (ent->basset->volume * 0.77f);

            xSndPlay3D
            (
                ent->basset->soundID,
                vol,
                0.0f,
                0,
                0,
                (xVec3*)&ent->model->Mat->pos,
                ent->basset->innerRadius,
                ent->basset->outerRadius,
                SND_CAT_GAME,
                0.0f
            );
        }
    }

    if ((ent->rollingID != 0) && (numDepens != 0) && (ent->lastRolling > 0.25f))
    {
        vol = 0.77f;

        xSndPlay3D
        (
            ent->rollingID,
            vol,
            0.0f,
            0,
            0,
            (xVec3 *)(&ent->model->Mat->pos),
            20.0f,
            SND_CAT_GAME,
            0.0f
        );
    }

    if (numDepens != 0)
    {
        ent->lastRolling = 0.0f;
    }
    else
    {
        ent->lastRolling += dt;
    }

    if (ent->collis == &sBoulderCollis)
    {
        ent->collis = NULL;
    }
}

S32 xEntBoulder_KilledBySurface(xEntBoulder* ent, xScene* sc, F32 dt)
{
    xCollis* coll;
    xCollis* cend;
    F32 temp;
    xSurface* surf;
    zSurfaceProps* prop;

    if (!(ent->basset->flags & 0x70))
    {
        return 0;
    }

    coll = &ent->collis->colls[0];
    cend = &coll[ent->collis->idx];
    for (; coll < cend; coll++)
    {
        if (!(coll->flags & 1))
        {
            continue;
        }

        if ((ent->basset->flags & 0x40) && (coll->optr != NULL) && (zGooIs((xEnt*)coll->optr, temp, 0)))
        {
            xVec3AddScaled(&ent->vel, &coll->norm, -(ent->basset->bounce + 1.0f) * xVec3Dot(&ent->vel, &coll->norm));
            zEntEvent(ent, eEventKill);
            return 1;
        }

        surf = zSurfaceGetSurface(coll);
        if ((surf == NULL) || (surf->state != 0))
        {
            continue;
        }

        prop = (zSurfaceProps*)surf->moprops;
        if ((prop == NULL) || (prop->asset == NULL))
        {
            continue;
        }

        if (ent->basset->flags & 0x10)
        {
            switch (prop->asset->game_damage_type)
            {
                case 0:
                    break;
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                    ent->hitpoints--;
                    if (ent->hitpoints <= 0)
                    {
                        xVec3AddScaled(&ent->vel, &coll->norm, -(ent->basset->bounce + 1.0f) * xVec3Dot(&ent->vel, &coll->norm));
                        zEntEvent(ent, eEventKill);
                        return 1;
                    }
                    break;
                case 5:
                    xVec3AddScaled(&ent->vel, &coll->norm, -(ent->basset->bounce + 1.0f) * xVec3Dot(&ent->vel, &coll->norm));
                    zEntEvent((xBase *)ent, eEventKill);
                    return 1;
            }
        }

        if ((ent->basset->flags & 0x20) && (prop->asset->phys_flags & 0x10))
        {
            xVec3AddScaled(&ent->vel, &coll->norm, -(ent->basset->bounce + 1.0f) * xVec3Dot(&ent->vel, &coll->norm));
            zEntEvent((xBase *)ent, eEventKill);
            return 1;
        }
    }

    return 0;
}

void xEntBoulder_Kill(xEntBoulder* ent)
{
    ent->chkby = 0;
    ent->penby = 0;
    ent->collis_chk = 0;
    ent->collis_pen = 0;
    ent->update = NULL;
    xEntHide(ent);
    if ((ent == globals.player.bubblebowl) && (sBubbleStreakID != 0xdead))
    {
        xFXStreakStop(sBubbleStreakID);
        sBubbleStreakID = 0xdead;
    }
}

void xEntBoulder_BubbleBowl(F32 multiplier)
{
    xEntBoulder* ent = globals.player.bubblebowl;
    xRay3 ray;
    xCollis rayCollis;
    xEnt* optr;

    if (ent == NULL)
    {
        return;
    }

    if (ent->update == (void (*)(xEnt *, xScene *, F32))xEntBoulder_Update)
    {
        zEntEvent(ent, 0x25);
    }

    xEntBoulder_Reset(ent, globals.sceneCur);
    ent->update = (void (*)(xEnt *, xScene *, F32))xEntBoulder_Update;

    if (sBubbleStreakID != 0xdead)
    {
        xFXStreakStop(sBubbleStreakID);
        sBubbleStreakID = 0xdead;
    }

    xVec3Copy((xVec3*)&ent->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->pos);
    xVec3AddScaled((xVec3*)&ent->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->right, globals.player.g.BubbleBowlLaunchPosLeft);
    xVec3AddScaled((xVec3*)&ent->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->up, globals.player.g.BubbleBowlLaunchPosUp);
    xVec3AddScaled((xVec3*)&ent->model->Mat->pos, (xVec3*)&globals.player.ent.model->Mat->at, globals.player.g.BubbleBowlLaunchPosAt);
    xVec3Copy(&ent->bound.sph.center, (xVec3*)&ent->model->Mat->pos);
    xVec3Copy(&ent->frame->mat.pos, (xVec3*)&ent->model->Mat->pos);
    xVec3SMul(&ent->vel, (xVec3 *)&globals.player.ent.model->Mat->right, globals.player.g.BubbleBowlLaunchVelLeft);
    xVec3AddScaled(&ent->vel, (xVec3 *)&globals.player.ent.model->Mat->up, globals.player.g.BubbleBowlLaunchVelUp);
    xVec3AddScaled(&ent->vel, (xVec3 *)&globals.player.ent.model->Mat->at, globals.player.g.BubbleBowlLaunchVelAt);
    xVec3SMulBy(&ent->vel, multiplier);
    xVec3Copy(&ent->rotVec, (xVec3 *)globals.player.ent.model->Mat);
    ent->angVel = (multiplier * 10.0f);
    xVec3Copy(&ray.origin, (xVec3 *)&globals.player.ent.bound.sph.center);
    xVec3Sub(&ray.dir, (xVec3 *)&ent->model->Mat->pos, &ray.origin);
    ray.max_t = xVec3Normalize(&ray.dir, &ray.dir);
    ray.min_t = 0.01f + globals.player.ent.bound.box.box.upper.x;
    ray.flags = 0xc00;
    xRayHitsScene(globals.sceneCur, &ray, &rayCollis);

    if (rayCollis.flags & 1)
    {
        optr = (xEnt*)(rayCollis.optr);
        if
        ((optr == NULL) ||
        ((((optr->baseType == eBaseTypeDestructObj) && (zEntDestructObj_GetHit((zEntDestructObj*)optr, 0x8000) == 0)) ||
        !(optr->moreFlags & 0x10) || (optr->baseType == eBaseTypeStatic))
        ) &&
        (optr->baseType != eBaseTypeNPC)
        )
        {
            if ((optr != NULL) && (optr->collLev == 5))
            {
                iRayHitsModel(&ray, optr->model, &rayCollis);
                if (rayCollis.flags & 1)
                {
                    ent->timeToLive = 0.0001f;
                }
            }
            else
            {
                ent->timeToLive = 0.0001f;
            }
        }
    }

    ent->lastRolling = 0.0f;
    ent->rollingID = xStrHash("sound_bubblebowl_loop");
    sBubbleStreakID = xFXStreakStart(0.01f, 4.0f, 1.0f, 0, 0, 0, 1);
}

void xEntBoulder_Setup(xEntBoulder* ent)
{
    ent->asset->redMult = 1.0f;
    ent->asset->greenMult = 1.0f;
    ent->asset->blueMult = 1.0f;

    if (ent->model != NULL)
    {
        ent->asset->seeThru = ent->model->Alpha;
    }
    else
    {
        ent->asset->seeThru = 1.0f;
    }

    xEntSetup(ent);
}

void xEntBoulder_Reset(xEntBoulder* boul, xScene* sc)
{
    boul->chkby = 0x1c;
    boul->penby = 0x10;
    boul->collis_chk = 0x2e;
    boul->collis_pen = 0;

    xEntReset(boul);

    if ((boul->id == 0x5f2e37b4) || (boul->id + 0xa0d1c84b <= 1) || (boul->id == 0x5f2e37b7))
    {
        boul->flags |= 0x10;
    }

    xVec3Init(&boul->force,     0.0f, 0.0f, 0.0f);
    xVec3Init(&boul->instForce, 0.0f, 0.0f, 0.0f);
    xVec3Init(&boul->vel,       0.0f, 0.0f, 0.0f);
    xVec3Init(&boul->rotVec,    1.0f, 0.0f, 0.0f);

    boul->angVel = 0.0f;

    if (boul->basset->flags & 0x200)
    {
        boul->timeToLive = boul->basset->killtimer;
    }
    else
    {
        boul->timeToLive = -1.0f;
    }

    boul->hitpoints = boul->basset->hitpoints;
    xEntBoulder_RealBUpdate(boul, (xVec3 *)&boul->model->Mat->pos);

    if ((globals.sceneCur->sceneID == 'BC04') && (boul->id == xStrHash("BALL_BOULDER")))
    {
        boul->collis_chk &= 0xf7;
    }
}

void xBoulderGenerator_Init(xBase& data, xDynAsset& asset, unsigned long)
{
    xBoulderGenerator_Init((xBoulderGenerator*)&data, (xBoulderGeneratorAsset*)&asset);
}

void xBoulderGenerator_Init(xBoulderGenerator* bg, xBoulderGeneratorAsset* asset)
{
    U32 size;

    xBaseInit(bg, asset);

    bg->eventFunc = xBoulderGenerator_EventCB;
    bg->bgasset = asset;

    if (bg->linkCount != 0)
    {
        bg->link = (xLinkAsset*)(&bg->bgasset[1]);
    }
    else
    {
        bg->link = NULL;
    }

    size = 0;
    bg->objectPtr = (RwTexture*)xSTFindAsset(asset->object, &size);

    if (size == sizeof(xMarkerAsset))
    {
        bg->isMarker = 1;
    }
    else
    {
        bg->isMarker = 0;
        bg->objectPtr = (void *)zSceneFindObject(asset->object);
    }

    bg->numBoulders = RecurseLinks(bg->link, bg->linkCount, 0);
    bg->nextBoulder = bg->numBoulders;
    bg->boulderList = (xEntBoulder **)xMemAlloc(gActiveHeap, (bg->numBoulders * sizeof(xEntBoulder*)) + (bg->numBoulders * sizeof(xEntBoulder*)), 0);
    bg->boulderAges = (S32*)(&bg->boulderList[bg->numBoulders]);
    RecurseLinks(bg->link, bg->linkCount, bg->boulderList);

    xVec3Normalize(&bg->bgasset->initaxis, &bg->bgasset->initaxis);

    bg->lengthOfInitVel = xVec3Length(&bg->bgasset->initvel);
    if (bg->lengthOfInitVel > 1e-05f)
    {
        bg->perp1.x = bg->bgasset->initvel.z - bg->bgasset->initvel.y;
        bg->perp1.y = bg->bgasset->initvel.x - bg->bgasset->initvel.z;
        bg->perp1.z = bg->bgasset->initvel.y - bg->bgasset->initvel.x;
        xVec3Normalize(&bg->perp1, &bg->perp1);
        xVec3Cross(&bg->perp2, &bg->bgasset->initvel, &bg->perp1);
        xVec3SMulBy(&bg->perp1, bg->lengthOfInitVel);
    }

    xBoulderGenerator_Reset(bg);
}

void xBoulderGenerator_Reset(xBoulderGenerator* gen)
{
    for (S32 i = 0; i < gen->numBoulders; i++)
    {
        xEntBoulder_Kill(gen->boulderList[i]);
        gen->boulderAges[i] = 0;
    }
}

static void BoulderGen_GiveBirth(xBoulderGenerator* gen, S32 param)
{
    for (S32 i = 0; i < gen->numBoulders; i++)
    {
        gen->boulderAges[i]++;
    }
    gen->boulderAges[param] = 1;
}

static S32 GetBoulderForGenerating(xBoulderGenerator* bg)
{
    S32 numList;
    S32 j;
    S32 i;
    S32 oldestCulled = -1;
    S32 minAge = bg->numBoulders >> 1;

    for (i = 0, numList = bg->numBoulders; i < numList; i++)
    {
        j = i + bg->nextBoulder;

        if (j >= numList)
        {
            j -= numList;
        }

        if (!xEntIsVisible(bg->boulderList[j]))
        {
            break;
        }

        if (bg->boulderAges[j] < minAge)
        {
            // :^)
        }
        else if (oldestCulled < 0)
        {
            oldestCulled = j;
        }
        else if (bg->boulderList[oldestCulled]->isCulled)
        {
            if (bg->boulderList[j]->isCulled && (bg->boulderAges[oldestCulled] < bg->boulderAges[j]))
            {
                oldestCulled = j;
            }
        }
        else if (bg->boulderList[j]->isCulled || (bg->boulderAges[oldestCulled] < bg->boulderAges[j]))
        {
            oldestCulled = j;
        }
    }

    if (i == numList)
    {
        if (oldestCulled < 0)
        {
            j = (numList - 1) * xurand();
            if (j >= numList)
            {
                j = numList - 1;
            }
        }
        else
        {
            j = oldestCulled;
        }
    }

    bg->nextBoulder = j + 1;
    if (bg->nextBoulder >= numList)
    {
        bg->nextBoulder = 0;
    }

    return j;
}

void xBoulderGenerator_Launch(xBoulderGenerator* bg, xVec3* pnt, F32 t)
{
    S32 i = GetBoulderForGenerating(bg);
    xEntBoulder* b = bg->boulderList[i];
    F32 invTime;

    if ((b != (xEntBoulder*)bg->objectPtr) || (!xEntIsVisible(b)))
    {
        xEntBoulder_Reset(b, globals.sceneCur);
        zEntEvent(b, eEventBorn);
        b->update = (void(*)(xEnt*, xScene*, F32))xEntBoulder_Update;
        if (bg->isMarker)
        {
            xVec3Copy((xVec3 *)(&b->model->Mat->pos), &((xMarkerAsset *)(bg->objectPtr))->pos);
        }
        else
        {
            xVec3Copy((xVec3 *)(&b->model->Mat->pos), (xVec3 *)(&((xEnt *)(bg->objectPtr))->model->Mat->pos));
        }
        xVec3AddTo((xVec3 *)(&b->model->Mat->pos), &bg->bgasset->offset);
        xVec3Copy(&b->rotVec, &bg->bgasset->initaxis);
        b->angVel = bg->bgasset->angvel;
    }

    invTime = (1.0f / t);
    b->vel.x = invTime * (pnt[0].x - b->model->Mat->pos.x);
    b->vel.z = invTime * (pnt[0].z - b->model->Mat->pos.z);
    b->vel.y = invTime * (pnt[0].y - b->model->Mat->pos.y) + b->basset->gravity * t * 0.5f;
    BoulderGen_GiveBirth(bg, i);
}

void xBoulderGenerator_GenBoulder(xBoulderGenerator*);

S32 xBoulderGenerator_EventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    xVec3 pnt;

    switch (toEvent)
    {
        case eEventGenerateBoulder:
            xBoulderGenerator_GenBoulder((xBoulderGenerator*)to);
            break;
        case eEventLaunchBoulderAtWidget:
            switch(toParamWidget->baseType)
            {
                case eBaseTypeVillain:
                case eBaseTypePlayer:
                case eBaseTypePickup:
                case eBaseTypePlatform:
                case eBaseTypeDoor:
                case eBaseTypeStatic:
                case eBaseTypeDynamic:
                case eBaseTypePendulum:
                case eBaseTypeHangable:
                case eBaseTypeButton:
                case eBaseTypeDestructObj:
                case eBaseTypeNPC:
                case eBaseTypeBoulder:
                {
                    xVec3Copy(&pnt, (xVec3 *)xEntGetPos((xEnt*)toParamWidget));

                    F32 f0 = 0.0f;
                    F32 f1 = toParam[1];
                    F32 f2;
                    F32 f3;

                    if (f1 != f0)
                    {
                        f1 = xurand();
                        f0 = 0.5f;
                        f2 = 2.0f;
                        f3 = f1 - f0;
                        f1 = toParam[1];
                        f0 = pnt.x;
                        f2 *= f3;
                        pnt.x = (f1 * f2) + f0;

                        f1 = xurand();
                        f0 = 0.5f;
                        f2 = 2.0f;
                        f3 = f1 - f0;
                        f1 = toParam[1];
                        f2 *= f3;
                        pnt.y = (f1 * f2) + pnt.y;

                        f1 = xurand();
                        f0 = 0.5f;
                        f2 = 2.0f;
                        f3 = f1 - f0;
                        f1 = toParam[1];
                        f0 = pnt.z;
                        f2 *= f3;
                        pnt.z = (f1 * f2) + f0;
                    }

                    xBoulderGenerator_Launch((xBoulderGenerator*)to, &pnt, *toParam);
                    break;
                }
                case eBaseTypeMovePoint:
                {
                    xVec3Copy(&pnt, (xVec3 *)zMovePointGetPos((zMovePoint*)toParamWidget));

                    F32 f0 = 0.0f;
                    F32 f1 = toParam[1];
                    F32 f2;
                    F32 f3;

                    if (f1 != f0)
                    {
                        f1 = xurand();
                        f2 = 2.0f;
                        f3 = f1 - 0.5f;
                        f1 = toParam[1];
                        f0 = pnt.x;
                        f2 *= f3;
                        pnt.x = (f1 * f2) + f0;

                        f1 = xurand();
                        f0 = 0.5f;
                        f2 = 2.0f;
                        f3 = f1 - f0;
                        f1 = toParam[1];
                        f2 *= f3;
                        pnt.y = (f1 * f2) + pnt.y;

                        f1 = xurand();
                        f0 = 0.5f;
                        f2 = 2.0f;
                        f3 = f1 - f0;
                        f1 = toParam[1];
                        f0 = pnt.z;
                        f2 *= f3;
                        pnt.z = (f1 * f2) + f0;
                    }
                    xBoulderGenerator_Launch((xBoulderGenerator*)to, &pnt, *toParam);
                    break;
                }
            }
            break;
        case eEventLaunchBoulderAtPoint:
            pnt.x = toParam[0];
            pnt.y = toParam[1];
            pnt.z = toParam[2];
            xBoulderGenerator_Launch((xBoulderGenerator*)to, &pnt, toParam[3]);
            break;
        case eEventLaunchBoulderAtPlayer:
        {
            xVec3Copy(&pnt, (xVec3 *)&(globals.player.ent.model)->Mat->pos);
            xVec3AddScaled(&pnt, &globals.player.ent.frame->dpos, ((*toParam * toParam[1]) / globals.update_dt));

            F32 f0 = 0.0f;
            F32 f1 = toParam[2];
            F32 f2;
            F32 f3;

            if (f1 != f0)
            {
                f1 = xurand();
                f2 = 2.0f;
                f3 = f1 - 0.5f;
                f1 = toParam[2];
                f2 *= f3;
                pnt.x = (f1 * f2) + pnt.x;

                f1 = xurand();
                f2 = 2.0f;
                f3 = f1 - 0.5f;
                f2 *= f3;
                pnt.y = (toParam[2] * f2) + pnt.y;

                f1 = xurand();
                f2 = 2.0f;
                f3 = f1 - 0.5f;
                f1 = toParam[2];
                f2 *= f3;
                pnt.z += (f1 * f2);
            }

            xBoulderGenerator_Launch((xBoulderGenerator*)to, &pnt, *toParam);
            break;
        }
        case eEventReset:
            xBoulderGenerator_Reset((xBoulderGenerator*)to);
            break;
    }
    return 1;
}