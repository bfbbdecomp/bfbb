#include "zPlatform.h"
#include "zEnt.h"
#include "zEntPlayer.h"
#include "xEntDrive.h"
#include "xScrFx.h"
#include "zParEmitter.h"
#include "zRumble.h"
#include "zFX.h"
#include "zCollGeom.h"
#include "zGoo.h"
#include "xSkyDome.h"
#include "zShrapnel.h"
#include "xEntMotionAsset.h"

#include "xMath.h"
#include "xMath3.h"
#include "xMathInlines.h"
#include "xstransvc.h"
#include "zGlobals.h"
#include "xCollide.h"

#include <types.h>

zParEmitter* sEmitTremble;
zParEmitter* sEmitBreakaway;

static void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
void zPlatform_Move(xEnt* entPlat, xScene* s, F32 dt, xEntFrame* frame);
static void zPlatform_Tremble(zPlatform* plat, F32 ampl, F32 freq, F32 dur);
static void zPlatform_BreakawayFallFX(zPlatform* plat, F32);
static S32 zMechIsStartingForth(zPlatform* plat, U16 state);
static S32 zMechIsStartingBack(zPlatform* plat, U16 state);
static F32 SolvePaddleMotion(zPlatform* plat, F32* time, F32 tmr);
static void zPlatFM_Update(zPlatform* plat, xScene*, F32 dt);

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
    xPlatformAsset* passet = (xPlatformAsset*)(asset + 1);
    xEntMotionAsset* emasset = (xEntMotionAsset*)(passet + 1);

    zEntInit(plat, asset, 'PLAT');

    plat->passet = passet;
    plat->subType = passet->type;

    if (plat->linkCount) {
        plat->link = (xLinkAsset*)(emasset + 1);
    } else {
        plat->link = NULL;
    }

    plat->update = zPlatform_Update;
    plat->move = zPlatform_Move;
    plat->eventFunc = zPlatformEventCB;
    plat->transl = zPlatformTranslate;
    plat->render = genericPlatRender;
    plat->am = NULL;
    plat->bm = NULL;
    plat->state = 0;
    plat->plat_flags = 0;
    plat->fmrt = NULL;
    plat->pauseMult = 1.0f;
    plat->pauseDelta = 0.0f;

    if (plat->subType == ePlatformTypeBreakaway) {
        plat->collis = (xEntCollis*)xMemAllocSize(sizeof(xEntCollis));
        plat->collis->chk = 0;
        plat->collis->pen = 0;
        plat->collis->post = NULL;
        plat->am = plat->model;

        void* buf = NULL;
        U32 size = 0;
        if (passet->ba.bustModelID) {
            buf = xSTFindAsset(passet->ba.bustModelID, &size);
        }
        if (buf) {
            xEntLoadModel(plat, (RpAtomic*)buf);
            plat->bm = plat->model;
        } else {
            plat->bm = NULL;
        }

        plat->model = plat->am;
        plat->collModel = NULL;
    } else if (plat->subType == ePlatformTypeSpringboard) {
        void* spring_anim;
        void* idle_anim;
        xAnimFile* spring_file;
        xAnimFile* idle_file;

        spring_file = NULL;
        spring_anim = passet->sb.animID[0] ? xSTFindAsset(passet->sb.animID[0], NULL) : NULL;
        idle_anim = passet->sb.animID[1] ? xSTFindAsset(passet->sb.animID[1], NULL) : NULL;

        if (spring_anim || idle_anim) {
            gxAnimUseGrowAlloc = 1;

            plat->atbl = xAnimTableNew("", NULL, 0);
            xAnimTableNewStateDefault(plat->atbl, "Idle", 0x10, 0);

            if (spring_anim) {
                xAnimTableNewStateDefault(plat->atbl, "Spring", 0x20, 0);
                xAnimTableNewTransitionDefault(plat->atbl, "Spring", "Idle", 0, 0.1f);

                spring_file = xAnimFileNew(spring_anim, "", 0, NULL);
                xAnimTableAddFile(plat->atbl, spring_file, "Spring");
            }

            if (idle_anim) {
                idle_file = xAnimFileNew(idle_anim, "", 0, NULL);
                xAnimTableAddFile(plat->atbl, idle_file, "Idle");
            } else {
                xAnimTableAddFile(plat->atbl, spring_file, "Idle");
                plat->atbl->StateList[0].Speed = 0.0f;
            }

            gxAnimUseGrowAlloc = 0;

            xAnimPoolAlloc(&globals.sceneCur->mempool, plat, plat->atbl, plat->model);
        }
    } else if (plat->subType == ePlatformTypeFM) {
        plat->fmrt = (zPlatFMRunTime*)xMemAllocSize(sizeof(zPlatFMRunTime));
    }

    xEntMotionInit(&plat->motion, plat, emasset);
    
    xEntDriveInit(&plat->drv, plat);
    plat->drv.flags = 0x1;

    if (plat->asset->modelInfoID == xStrHash("teeter_totter_pat") ||
        plat->asset->modelInfoID == xStrHash("teeter_totter_pat_bind")) {
        plat->plat_flags |= 0x2;
    }
}

void zPlatform_Setup(zPlatform* ent, xScene* sc)
{
    zEntSetup((zEnt*)ent);
    sEmitTremble = zParEmitterFind("PAREMIT_PLAT_TREMBLE");
    sEmitBreakaway = zParEmitterFind("PAREMIT_PLAT_BREAKAWAY");
    if (ent->subType == ZPLATFORM_SUBTYPE_PADDLE)
    {
        ent->tmr = 1e-9f;
        ent->state = 2;
        ent->ctr = ent->passet->paddle.startOrient;
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

void zPlatform_Reset(zPlatform* plat, xScene* sc)
{
    if (plat->subType == ePlatformTypeBreakaway) {
        plat->model = plat->am;
        plat->collModel = NULL;
    }

    zEntReset(plat);

    xEntMotionInit(&plat->motion, plat, (xEntMotionAsset*)(plat->passet + 1));
    xEntMotionReset(&plat->motion, sc);

    plat->plat_flags = 0x1;

    if (plat->subType == ePlatformTypeER) {
        plat->state = 3;
    } else if (plat->subType == ePlatformTypeBreakaway) {
        plat->tmr = plat->passet->ba.ba_delay;
        plat->state = 0;
        plat->pflags &= (U8)~(XENT_PFLAGS_HAS_VELOCITY | XENT_PFLAGS_HAS_GRAVITY);
        plat->collis->chk = 0;

        xVec3Copy(&plat->frame->vel, &g_O3);

        plat->bound.mat = (xMat4x3*)plat->model->Mat;
    } else if (plat->subType == ePlatformTypeMech) {
        plat->state = plat->motion.mech.state;
    } else if (plat->subType == ePlatformTypeSpringboard) {
        plat->tmr = -1.0f;
        plat->ctr = 0;
    } else if (plat->subType == ePlatformTypePaddle) {
        plat->tmr = 1e-9f;
        plat->state = 2;
        plat->ctr = plat->passet->paddle.startOrient;
    } else if (plat->subType == ePlatformTypeFM) {
        for (S32 i = 0; i < 12; i++) {
            plat->fmrt->flags = 0;
            plat->fmrt->tmrs[i] = 0.0f;
            plat->fmrt->ttms[i] = 0.0f;
            plat->fmrt->atms[i] = 0.0f;
            plat->fmrt->dtms[i] = 0.0f;
            plat->fmrt->vms[i] = 0.0f;
            plat->fmrt->dss[i] = 0.0f;
        }
    }

    if (plat->motion.type == k_XENTMOTIONTYPE_MP) {
        plat->src = plat->motion.mp.src;
    }

    plat->chkby &= (U8)~(XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC | XENT_COLLTYPE_DYN);

    if (plat->passet->flags & 0x4) {
        plat->chkby |= (XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
    }

    plat->bupdate(plat, (xVec3*)&plat->model->Mat->pos);
    plat->moving = 0;

    if (plat->asset->modelInfoID == xStrHash("teeter_totter_pat") ||
        plat->asset->modelInfoID == xStrHash("teeter_totter_pat_bind")) {
        plat->plat_flags |= 0x2;
    }

    plat->pauseMult = 1.0f;
    plat->pauseDelta = 0.0f;
}

static S32 zMechIsStartingForth(zPlatform* plat, U16 state)
{
    if (plat->motion.asset->mech.type == k_XENTMOTIONMECH_ROT_THEN_SLIDE) {
        return state == 1;
    } else {
        return state == 0;
    }
}

static S32 zMechIsStartingBack(zPlatform* plat, U16 state)
{
    if (plat->motion.asset->mech.type == k_XENTMOTIONMECH_ROT_THEN_SLIDE) {
        return state == 4;
    } else {
        return state == 3;
    }
}

static F32 SolvePaddleMotion(zPlatform* plat, F32* time, F32 tmr)
{
    xPlatformPaddleData* paddle = &plat->passet->paddle;
    
    F32 destOrient = paddle->orient[plat->ctr];
    F32 srcOrient;
    if (plat->state == 1 || plat->state == 3) {
        if (plat->ctr + 1 == paddle->countOrient) {
            srcOrient = paddle->orientLoop;
        } else {
            srcOrient = paddle->orient[plat->ctr + 1];
        }
    } else if (plat->state == 2 || plat->state == 4) {
        if (plat->ctr == 0) {
            destOrient = paddle->orientLoop;
            srcOrient = paddle->orient[paddle->countOrient - 1];
        } else {
            srcOrient = paddle->orient[plat->ctr - 1];
        }
    } else {
        return destOrient;
    }
    
    F32 absDelta = xabs(destOrient - srcOrient);

    if (plat->state == 3 || plat->state == 4) {
        time[0] = 0.0f;
        time[1] = 0.2f;
        time[2] = 0.0f;

        if (tmr >= 0.0f) {
            if (tmr > 0.1f) tmr = 0.2f - tmr;

            F32 stutterAmount = 100.0f * tmr;
            if (destOrient < srcOrient) stutterAmount = -stutterAmount;

            return destOrient + stutterAmount;
        }
        
        return destOrient;
    }
    
    F32 A = 0.0f;
    F32 D = 0.0f;
    F32 distA, distC, distD;

    if (paddle->accelTime && paddle->decelTime) {
        A = paddle->rotateSpeed / paddle->accelTime;
        D = paddle->rotateSpeed / paddle->decelTime;

        time[0] = xsqrt(2.0f * D * absDelta / (A * D + A * A));
        if (time[0] < paddle->accelTime) {
            time[1] = 0.0f;
            time[2] = A * time[0] / D;
        } else {
            distA = 0.5f * paddle->rotateSpeed * paddle->accelTime;
            distD = 0.5f * paddle->rotateSpeed * paddle->decelTime;
            distC = absDelta - distA - distD;

            time[0] = paddle->accelTime;
            time[1] = distC / paddle->rotateSpeed;
            time[2] = paddle->decelTime;
        }
    } else if (paddle->accelTime) {
        A = paddle->rotateSpeed / paddle->accelTime;

        time[0] = xsqrt(2.0f * absDelta / A);
        time[2] = 0.0f;
        if (time[0] < paddle->accelTime) {
            time[1] = 0.0f;
        } else {
            distA = 0.5f * paddle->rotateSpeed * paddle->accelTime;
            distC = absDelta - distA;

            time[0] = paddle->accelTime;
            time[1] = distC / paddle->rotateSpeed;
        }
    } else if (paddle->decelTime) {
        D = paddle->rotateSpeed / paddle->decelTime;

        time[0] = 0.0f;
        time[2] = xsqrt(2.0f * absDelta / D);
        if (time[2] < paddle->decelTime) {
            time[1] = 0.0f;
        } else {
            distD = 0.5f * paddle->rotateSpeed * paddle->decelTime;
            distC = absDelta - distD;

            time[1] = distC / paddle->rotateSpeed;
            time[2] = paddle->decelTime;
        }
    } else {
        time[0] = 0.0f;
        time[1] = absDelta / paddle->rotateSpeed;
        time[2] = 0.0f;
    }

    if (tmr >= 0.0f) {
        F32 lerp;
        if (time[2] && tmr <= time[2]) {
            lerp = 1.0f - 0.5f * D * tmr * tmr / absDelta;
        } else {
            F32 ttot = time[0] + time[1] + time[2];
            tmr = ttot - tmr;
            if (tmr > ttot) tmr = ttot;

            if (time[0] && (!time[1] || tmr <= time[0])) {
                lerp = 0.5f * A * tmr * tmr / absDelta;
            } else {
                tmr -= time[0];
                lerp = (0.5f * paddle->rotateSpeed * paddle->accelTime + tmr * paddle->rotateSpeed) / absDelta;
            }
        }

        return lerp * (destOrient - srcOrient) + srcOrient;
    }

    return 0.0f;
}

void zPlatform_PaddleStartRotate(xEnt* entplat, S32 direction, S32 stutter)
{
    zPlatform* plat = (zPlatform*)entplat;
    F32 time[3];

    if (stutter != 0)
    {
        if (direction > 0)
        {
            plat->state = ZPLATFORM_STATE_UNK4;
        }
        else if (direction < 0)
        {
            plat->state = ZPLATFORM_STATE_UNK1;
        }
    }
    else
    {
        if (direction > 0)
        {
            plat->state = ZPLATFORM_STATE_UNK3;
            plat->ctr += 1;

            if (plat->ctr >= plat->passet->paddle.countOrient)
            {
                plat->ctr = 0;
            }
        }
        else if (direction < 0)
        {
            plat->state = ZPLATFORM_STATE_UNK2;
            plat->ctr -= 1;

            if (plat->ctr < 0)
            {
                plat->ctr = plat->passet->paddle.countOrient - 1;
            }
        }
    }

    SolvePaddleMotion(plat, time, -1.0f);
    plat->tmr = time[0] + time[1] + time[2];
}

U32 zPlatform_PaddleCollide(xCollis* coll, const xVec3* hitsource, const xVec3* hitvel, U32 worldSpaceNorm)
{
    zPlatform* plat = (zPlatform*)coll->optr;
    if (plat->state != 0) {
        return 0;
    }

    xVec3 locnorm;
    if (worldSpaceNorm) {
        xMat3x3Tolocal(&locnorm, (xMat3x3*)plat->model->Mat, &coll->norm);
    } else {
        locnorm = coll->norm;
    }

    xVec3 lochitsrc;
    xMat4x3Tolocal(&lochitsrc, (xMat4x3*)plat->model->Mat, hitsource);
    
    xVec3 lochitvel;
    xMat3x3Tolocal(&lochitvel, (xMat3x3*)plat->model->Mat, hitvel);

    if (xabs(locnorm.y) > xabs(locnorm.x) && xabs(locnorm.y) > xabs(locnorm.z)) {
        return 0;
    }

    if (xabs(lochitvel.y) > xabs(lochitvel.x) && xabs(lochitvel.y) > xabs(lochitvel.z)) {
        return 0;
    }

    xVec3Normalize(&locnorm, &locnorm);
    xVec3Normalize(&lochitvel, &lochitvel);
    
    F32 hitdot = xVec3Dot(&locnorm, &lochitvel);
    if (hitdot > -0.7071f) {
        return 0;
    }

    xVec3 hitsrcbot, hitsrctop;
    hitsrcbot = lochitsrc;
    hitsrctop = lochitsrc;

    hitsrcbot.y -= 5.0f;
    hitsrctop.y += 5.0f;

    xMat4x3Toworld(&hitsrcbot, (xMat4x3*)plat->model->Mat, &hitsrcbot);
    xMat4x3Toworld(&hitsrctop, (xMat4x3*)plat->model->Mat, &hitsrctop);
    
    xRay3 hitsrcray;
    hitsrcray.origin.x = hitsrcbot.x;
    hitsrcray.origin.y = hitsrcbot.y;
    hitsrcray.origin.z = hitsrcbot.z;
    hitsrcray.dir.x = hitsrctop.x - hitsrcbot.x;
    hitsrcray.dir.y = hitsrctop.y - hitsrcbot.y;
    hitsrcray.dir.z = hitsrctop.z - hitsrcbot.z;
    hitsrcray.min_t = 0.0f;
    hitsrcray.max_t = xVec3Normalize(&hitsrcray.dir, &hitsrcray.dir);
    hitsrcray.flags = XRAY3_USE_MIN | XRAY3_USE_MAX;
    
    xCollis hitsrccoll;
    xRayHitsBound(&hitsrcray, &plat->bound, &hitsrccoll);

    if (!(hitsrccoll.flags & k_HIT_IT)) {
        return 0;
    }
    
    S32 posX, posZ, direction;
    if (xabs(lochitvel.x) < xabs(lochitvel.z)) {
        posX = (lochitsrc.x > 0.0f);
        posZ = (lochitsrc.z > 0.0f);
        if ((posX ^ posZ) == 0) {
            direction = 1;
        } else {
            direction = -1;
        }
    } else {
        posX = (lochitsrc.x > 0.0f);
        posZ = (lochitsrc.z > 0.0f);
        if ((posX ^ posZ) == 0) {
            direction = -1;
        } else {
            direction = 1;
        }
    }

    S32 stutter = 0;
    if (direction == 1) {
        if (!(plat->passet->paddle.paddleFlags & 0x1) ||
            (!(plat->passet->paddle.paddleFlags & 0x4) && plat->ctr + 1 == plat->passet->paddle.countOrient)) {
            stutter = 1;
        }
    }
    if (direction == -1) {
        if (!(plat->passet->paddle.paddleFlags & 0x2) ||
            (!(plat->passet->paddle.paddleFlags & 0x4) && plat->ctr == 0)) {
            stutter = 1;
        }
    }

    if (!stutter) {
        if (direction > 0) {
            zEntEvent(plat, eEventHit_PaddleLeft);
        } else {
            zEntEvent(plat, eEventHit_PaddleRight);
        }
    }

    zPlatform_PaddleStartRotate(plat, direction, stutter);

    return 1;
}

static void zPlatFM_Update(zPlatform* plat, xScene*, F32 dt)
{
    for (S32 i = 0; i < 12; i++) {
        zPlatFMRunTime* fmrt = plat->fmrt;
        
        F32 tm = fmrt->tmrs[i];
        if (tm > 0.0f) {
            F32 ttm = fmrt->ttms[i];
            F32 atm = fmrt->atms[i];
            F32 dtm = fmrt->dtms[i];
            F32 vm = fmrt->vms[i];
    
            F32 ds;
            F32 etm = ttm - tm;
    
            if (tm > atm) {
                if (atm > 0.0f) {
                    if (tm - dt < atm) {
                        if (dtm > 0.0f) {
                            if (tm - dt < dtm) {
                                if (tm - dt < 0.0f) {
                                    F32 p = ttm - atm;
                                    F32 cfacc = 0.5f * (p + etm) * (p - etm) / p;
                                    F32 cfcs = atm - dtm;
                                    F32 cfdec = 0.5f * dtm;
                                    ds = cfacc + cfcs + cfdec;
                                } else {
                                    F32 p = ttm - atm;
                                    F32 cfacc = 0.5f * (p + etm) * (p - etm) / p;
                                    F32 cfcs = atm - dtm;
                                    F32 cfdec = 0.5f * (dtm + (tm - dt)) * (dtm - (tm - dt)) / dtm;
                                    ds = cfacc + cfcs + cfdec;
                                }
                            } else {
                                F32 p = ttm - atm;
                                F32 cfacc = 0.5f * (p + etm) * (p - etm) / p;
                                F32 cfcs = atm - (tm - dt);
                                ds = cfacc + cfcs;
                            }
                        } else {
                            if (tm - dt < 0.0f) {
                                F32 p = ttm - atm;
                                F32 cfacc = 0.5f * (p + etm) * (p - etm) / p;
                                F32 cfcs = atm;
                                ds = cfacc + cfcs;
                            } else {
                                F32 p = ttm - atm;
                                F32 cfacc = 0.5f * (p + etm) * (p - etm) / p;
                                F32 cfcs = atm - (tm - dt);
                                ds = cfacc + cfcs;
                            }
                        }
                    } else {
                        F32 p = ttm - atm;
                        ds = (etm + 0.5f * dt) * dt / p;
                    }
                } else {
                    if (tm - dt < 0.0f) {
                        ds = (etm + 0.5f * tm) * tm / ttm;
                    } else {
                        ds = (etm + 0.5f * dt) * dt / ttm;
                    }
                }
            } else {
                if (tm < dtm) {
                    if (tm - dt < 0.0f) {
                        ds = 0.5f * tm * tm / dtm;
                    } else {
                        ds = (tm - 0.5f * dt) * dt / dtm;
                    }
                } else {
                    if (dtm > 0.0f) {
                        if (tm - dt < dtm) {
                            if (tm - dt < 0.0f) {
                                F32 cfcs = tm - dtm;
                                F32 cfdec = 0.5f * dtm;
                                ds = cfcs + cfdec;
                            } else {
                                F32 cfcs = tm - dtm;
                                F32 cfdec = 0.5f * (dtm + (tm - dt)) * (dtm - (tm - dt)) / dtm;
                                ds = cfcs + cfdec;
                            }
                        } else {
                            ds = dt;
                        }
                    } else {
                        if (tm - dt < 0.0f) {
                            ds = tm;
                        } else {
                            ds = dt;
                        }
                    }
                }
            }
    
            ds *= vm;
            fmrt->dss[i] -= ds;
    
            xMat4x3* pmat = (xMat4x3*)plat->model->Mat;
    
            if (i == 0) {
                F32 translx = pmat->right.x * ds;
                F32 transly = pmat->right.y * ds;
                F32 translz = pmat->right.z * ds;
                pmat->pos.x += translx;
                pmat->pos.y += transly;
                pmat->pos.z += translz;
            } else if (i == 1) {
                F32 translx = pmat->up.x * ds;
                F32 transly = pmat->up.y * ds;
                F32 translz = pmat->up.z * ds;
                pmat->pos.x += translx;
                pmat->pos.y += transly;
                pmat->pos.z += translz;
            } else if (i == 2) {
                F32 translx = pmat->at.x * ds;
                F32 transly = pmat->at.y * ds;
                F32 translz = pmat->at.z * ds;
                pmat->pos.x += translx;
                pmat->pos.y += transly;
                pmat->pos.z += translz;
            } else if (i == 3) {
                pmat->pos.x += ds;
            } else if (i == 4) {
                pmat->pos.y += ds;
            } else if (i == 5) {
                pmat->pos.z += ds;
            } else if (i == 6) {
                xMat3x3 preR;
                xMat3x3RotX(&preR, ds);
                xMat3x3Mul(pmat, &preR, pmat);
            } else if (i == 7) {
                xMat3x3 preR;
                xMat3x3RotY(&preR, ds);
                xMat3x3Mul(pmat, &preR, pmat);
            } else if (i == 8) {
                xMat3x3 preR;
                xMat3x3RotZ(&preR, ds);
                xMat3x3Mul(pmat, &preR, pmat);
            } else if (i == 9) {
                xMat3x3 postR;
                xMat3x3RotX(&postR, ds);
                xMat3x3Mul(pmat, pmat, &postR);
            } else if (i == 10) {
                xMat3x3 postR;
                xMat3x3RotY(&postR, ds);
                xMat3x3Mul(pmat, pmat, &postR);
            } else if (i == 11) {
                xMat3x3 postR;
                xMat3x3RotZ(&postR, ds);
                xMat3x3Mul(pmat, pmat, &postR);
            }
    
            fmrt->tmrs[i] -= dt;
            if (fmrt->tmrs[i] < 0.0f) {
                F32 rts = xsqrt(SQR(pmat->right.x) + SQR(pmat->right.y) + SQR(pmat->right.z));
                F32 ups = xsqrt(SQR(pmat->up.x) + SQR(pmat->up.y) + SQR(pmat->up.z));
                F32 ats = xsqrt(SQR(pmat->at.x) + SQR(pmat->at.y) + SQR(pmat->at.z));
    
                {
                    F32 inv_t = 100.0f;
                    if (pmat->pos.x < 0.0f) {
                        pmat->pos.x = 0.01f * (S32)(pmat->pos.x * inv_t - 0.5f);
                    } else {
                        pmat->pos.x = 0.01f * (S32)(pmat->pos.x * inv_t + 0.5f);
                    }
                    if (pmat->pos.y < 0.0f) {
                        pmat->pos.y = 0.01f * (S32)(pmat->pos.y * inv_t - 0.5f);
                    } else {
                        pmat->pos.y = 0.01f * (S32)(pmat->pos.y * inv_t + 0.5f);
                    }
                    if (pmat->pos.z < 0.0f) {
                        pmat->pos.z = 0.01f * (S32)(pmat->pos.z * inv_t - 0.5f);
                    } else {
                        pmat->pos.z = 0.01f * (S32)(pmat->pos.z * inv_t + 0.5f);
                    }
                }
                
                {
                    F32 inv_t = 100.0f;
                    if (pmat->right.x < 0.0f) {
                        pmat->right.x = 0.01f * (S32)(pmat->right.x * inv_t - 0.5f);
                    } else {
                        pmat->right.x = 0.01f * (S32)(pmat->right.x * inv_t + 0.5f);
                    }
                    if (pmat->right.y < 0.0f) {
                        pmat->right.y = 0.01f * (S32)(pmat->right.y * inv_t - 0.5f);
                    } else {
                        pmat->right.y = 0.01f * (S32)(pmat->right.y * inv_t + 0.5f);
                    }
                    if (pmat->right.z < 0.0f) {
                        pmat->right.z = 0.01f * (S32)(pmat->right.z * inv_t - 0.5f);
                    } else {
                        pmat->right.z = 0.01f * (S32)(pmat->right.z * inv_t + 0.5f);
                    }
                }
                
                F32 len;
                xVec3NormalizeMacro(&pmat->right, &pmat->right, &len);
    
                {
                    F32 inv_t = 100.0f;
                    if (pmat->up.x < 0.0f) {
                        pmat->up.x = 0.01f * (S32)(pmat->up.x * inv_t - 0.5f);
                    } else {
                        pmat->up.x = 0.01f * (S32)(pmat->up.x * inv_t + 0.5f);
                    }
                    if (pmat->up.y < 0.0f) {
                        pmat->up.y = 0.01f * (S32)(pmat->up.y * inv_t - 0.5f);
                    } else {
                        pmat->up.y = 0.01f * (S32)(pmat->up.y * inv_t + 0.5f);
                    }
                    if (pmat->up.z < 0.0f) {
                        pmat->up.z = 0.01f * (S32)(pmat->up.z * inv_t - 0.5f);
                    } else {
                        pmat->up.z = 0.01f * (S32)(pmat->up.z * inv_t + 0.5f);
                    }
                }
    
                xVec3NormalizeMacro(&pmat->up, &pmat->up, &len);
    
                F32 rdotu = -(pmat->right.x * pmat->up.x +
                              pmat->right.y * pmat->up.y +
                              pmat->right.z * pmat->up.z);
    
                pmat->up.x += pmat->right.x * rdotu;
                pmat->up.y += pmat->right.y * rdotu;
                pmat->up.z += pmat->right.z * rdotu;
    
                xVec3NormalizeMacro(&pmat->up, &pmat->up, &len);
    
                pmat->at.x = pmat->right.y * pmat->up.z - pmat->up.y * pmat->right.z;
                pmat->at.y = pmat->right.z * pmat->up.x - pmat->up.z * pmat->right.x;
                pmat->at.z = pmat->right.x * pmat->up.y - pmat->up.x * pmat->right.y;
                pmat->right.x *= rts;
                pmat->right.y *= rts;
                pmat->right.z *= rts;
                pmat->up.x *= ups;
                pmat->up.y *= ups;
                pmat->up.z *= ups;
                pmat->at.x *= ats;
                pmat->at.y *= ats;
                pmat->at.z *= ats;
    
                fmrt->flags &= ~(1 << i);
                fmrt->tmrs[i] = 0.0f;
                fmrt->ttms[i] = 0.0f;
                fmrt->atms[i] = 0.0f;
                fmrt->dtms[i] = 0.0f;
                fmrt->vms[i] = 0.0f;
                fmrt->dss[i] = 0.0f;
    
                zEntEvent(plat, plat, eEventTranslLocalXDone + i);
            }
        }
    }
}

void zPlatform_Update(xEnt* entplat, xScene* sc, F32 dt)
{
    zPlatform* plat = (zPlatform*)entplat;

    if (plat->subType != ePlatformTypeBreakaway) {
        plat->pauseMult = CLAMP(plat->pauseMult + plat->pauseDelta, 0.000001f, 1.0f);
        dt *= plat->pauseMult;
    }

    if (plat->subType == ePlatformTypeBreakaway) {
        plat->model->Alpha += 4.0f * dt;
        if (plat->model->Alpha > 1.0f) {
            plat->model->Alpha = 1.0f;
        }
    }

    xEntUpdate(plat, sc, dt);

    if (plat->subType == ePlatformTypeER) {
        U16 state = plat->motion.er.state;
        if (plat->state == state ||
            xEntERIsExtending(&plat->motion) ||
            xEntERIsExtended(&plat->motion) ||
            xEntERIsRetracting(&plat->motion) ||
            xEntERIsRetracted(&plat->motion)) {
            // do nothing   
        }
        plat->state = state;
    } else if (plat->subType == ePlatformTypeBreakaway) {
        if (plat->state == 1 && !zEntPlayer_IsSneaking()) {
            plat->state = 2;
            if (plat->passet->ba.ba_delay) {
                zPlatform_Tremble(plat, 0.06f, 8*PI, 1.0f + plat->passet->ba.ba_delay);
            }
        }
        if (plat->state == 2) {
            plat->tmr -= dt;
            if (plat->tmr <= 0.0f) {
                zPlatform_BreakawayFallFX(plat, dt);
                plat->state = 3;
                plat->pflags |= 0x6;
                plat->tmr = plat->passet->ba.reset_delay;
                if (plat->bm) {
                    plat->model = plat->bm;
                    plat->collModel = plat->model;
                    xMat4x3Copy((xMat4x3*)plat->bm->Mat, (xMat4x3*)plat->am->Mat);
                    plat->bound.mat = (xMat4x3*)plat->model->Mat;
                }
                zEntEvent(plat, eEventBreak);
            }
        } else if (plat->state == 3) {
            plat->tmr -= dt;
            if (plat->collis->colls[0].flags & k_HIT_IT) {
                plat->state = 4;
                plat->pflags &= (U8)~(XENT_PFLAGS_HAS_VELOCITY | XENT_PFLAGS_HAS_GRAVITY);
                plat->collis->chk = 0;
                xVec3Copy(&plat->frame->vel, &g_O3);
            } else if (plat->tmr <= 0.0f) {
                if (xBaseIsEnabled(plat)) {
                    zEntEvent(plat, eEventReset);
                } else {
                    zPlatform_Reset(plat, sc);
                }
                plat->model->Alpha = 0.0f;
                plat->model->PipeFlags = (plat->model->PipeFlags & ~0xC) | 0x8;
            } else if (plat->passet->ba.reset_delay - plat->tmr >= 25.0f) {
                plat->state = 5;
                plat->pflags &= (U8)~(XENT_PFLAGS_HAS_VELOCITY | XENT_PFLAGS_HAS_GRAVITY);
                plat->collis->chk = 0;
                xVec3Copy(&plat->frame->vel, &g_O3);
            }
        } else if (plat->state == 4) {
            plat->tmr -= dt;
            if (plat->tmr <= 0.0f) {
                if (xBaseIsEnabled(plat)) {
                    zEntEvent(plat, eEventReset);
                } else {
                    zPlatform_Reset(plat, sc);
                }
                plat->model->Alpha = 0.0f;
                plat->model->PipeFlags = (plat->model->PipeFlags & ~0xC) | 0x8;
            }
        }
    } else if (plat->subType == ePlatformTypeMech) {
        U16 state = plat->motion.mech.state;
        if (state != plat->state) {
            xEntMotionMechData* mkasst = &plat->motion.asset->mech;
            if (plat->state == 2) {
                zEntEvent(plat, eEventArriveHalfway);
            } else if (state == 6 || state == 7 ||
                       (!(mkasst->flags & k_XENTMOTIONMECH_ONCE) && (state == 0 || state == 1))) {
                zEntEvent(plat, eEventArrive);
            }
            if (zMechIsStartingForth(plat, state) ||
                zMechIsStartingBack(plat, state)) {
                // do nothing
            }
            plat->state = state;
        }
    } else if (plat->subType == ePlatformTypeSpringboard) {
        plat->tmr -= dt;
    } else if (plat->subType == ePlatformTypeConvBelt) {
        xEntDrive* drv = &globals.player.drv;
        if (plat == drv->odriver || plat == drv->driver) {
            F32 s = (plat == drv->driver) ? drv->s : drv->os;
            xEnt* p = drv->driven;
            xVec3SMul(&p->frame->dpos, &xModelGetFrame(plat->model)->right, s * plat->passet->cb.speed * dt);
            xVec3AddTo((xVec3*)&p->model->Mat->pos, &p->frame->dpos);
        }
    } else if (plat->subType == ePlatformTypeTeeter) {
        xEntDrive* drv = &globals.player.drv;
        if (plat != drv->odriver && plat != drv->driver) {
            F32 ctilt = plat->frame->rot.axis.z;
            F32 itilt = plat->asset->ang.z;
            F32 dtilt = xabs(DEG2RAD(plat->passet->teet.invmass) * dt);
            if (ctilt != itilt) {
                if (ctilt < itilt) {
                    dtilt = MIN(dtilt, itilt - ctilt);
                } else if (ctilt > itilt) {
                    dtilt = MAX(-dtilt, itilt - ctilt);
                }
                plat->frame->rot.axis.z += dtilt;
                xMat3x3Euler((xMat3x3*)plat->model->Mat,
                             plat->frame->rot.axis.x,
                             plat->frame->rot.axis.y,
                             plat->frame->rot.axis.z);
                xVec3* scale = &plat->asset->scale;
                xVec3SMulBy((xVec3*)&plat->model->Mat->right, scale->x);
                xVec3SMulBy((xVec3*)&plat->model->Mat->up, scale->y);
                xVec3SMulBy((xVec3*)&plat->model->Mat->at, scale->z);
            }
        } else {
            F32 s = (plat == drv->driver) ? drv->s : drv->os;
            xEnt* p = drv->driven;
            xVec3 lpos;
            xMat4x3Tolocal(&lpos, xModelGetFrame(plat->model), &p->frame->mat.pos);
            F32 cangle = plat->frame->rot.axis.z;
            F32 dangle = -s * DEG2RAD(plat->passet->teet.invmass) * lpos.x * dt;
            F32 mangle = xabs(plat->passet->teet.maxtilt);
            F32 eangle = dangle + cangle;
            F32 tangle = xabs(eangle) - mangle;
            if (tangle > 0.0f) {
                if (dangle < 0.0f) dangle += tangle;
                else if (dangle > 0.0f) dangle -= tangle;
            }
            plat->frame->rot.axis.z += dangle;
            xMat3x3Euler((xMat3x3*)plat->model->Mat,
                         plat->frame->rot.axis.x,
                         plat->frame->rot.axis.y,
                         plat->frame->rot.axis.z);
            xVec3* scale = &plat->asset->scale;
            xVec3SMulBy((xVec3*)&plat->model->Mat->right, scale->x);
            xVec3SMulBy((xVec3*)&plat->model->Mat->up, scale->y);
            xVec3SMulBy((xVec3*)&plat->model->Mat->at, scale->z);
        }
    } else if (plat->subType == ePlatformTypePaddle) {
        if (plat->tmr) {
            plat->tmr -= dt;
            if (plat->tmr < 0.0f) {
                plat->tmr = 0.0f;
                plat->state = 0;
            }
            F32 time[3];
            F32 orient = DEG2RAD(SolvePaddleMotion(plat, time, plat->tmr));
            xMat3x3 orientrot;
            xMat3x3RotC(&orientrot, 0.0f, 1.0f, 0.0f, orient);
            xMat3x3 origrot;
            xMat3x3Euler(&origrot, plat->asset->ang.x, plat->asset->ang.y, plat->asset->ang.z);
            xMat3x3Mul((xMat3x3*)plat->model->Mat, &orientrot, &origrot);
            xVec3* scale = &plat->asset->scale;
            xVec3SMulBy((xVec3*)&plat->model->Mat->right, scale->x);
            xVec3SMulBy((xVec3*)&plat->model->Mat->up, scale->y);
            xVec3SMulBy((xVec3*)&plat->model->Mat->at, scale->z);
        }
    } else if (plat->subType == ePlatformTypeFM) {
        if (!(plat->plat_flags & 0x4)) {
            zPlatFM_Update(plat, sc, dt);
        }
    }

    if (plat->motion.type == k_XENTMOTIONTYPE_MP) {
        xMovePoint* src = plat->motion.mp.src;
        if (src != plat->src) {
            zEntEvent(plat, src, eEventArrive);
            plat->src = src;
        }
    }

    S32 moving;
    xVec3* opos = &plat->frame->oldmat.pos;
    xVec3* pos = &plat->frame->mat.pos;
    xVec3* orot = &plat->frame->oldrot.axis;
    xVec3* rot = &plat->frame->rot.axis;
    if (plat->subType == ePlatformTypeTeeter) {
        if (orot->x != rot->x || orot->y != rot->y || orot->z != rot->z) {
            moving = TRUE;
        } else {
            moving = FALSE;
        }
    } else if (plat->subType == ePlatformTypePaddle) {
        if (plat->tmr != 0.0f) {
            moving = TRUE;
        } else {
            moving = FALSE;
        }
    } else {
        if (opos->x != pos->x || opos->y != pos->y || opos->z != pos->z ||
            orot->x != rot->x || orot->y != rot->y || orot->z != rot->z) {
            moving = TRUE;
        } else {
            moving = FALSE;
        }
    }

    if (moving != plat->moving) {
        if (moving) {
            zEntEvent(plat, eEventStartMoving);
        } else {
            zEntEvent(plat, eEventStopMoving);
        }
    }

    plat->moving = moving;
}

void zPlatform_Move(xEnt* entPlat, xScene* s, F32 dt, xEntFrame* frame)
{
    zPlatform* plat = (zPlatform*)entPlat;
    xEntMotionMove(&plat->motion, s, dt, frame);
    xEntDriveUpdate(&plat->drv, s, dt, NULL);
}

void zPlatform_Shake(zPlatform* plat, F32 _unused, F32 ampl, F32 freq)
{
    xFFXShakeState* ss;
    xFFX* sfkt;

    ss = xFFXShakeAlloc();
    if (ss != NULL)
    {
        sfkt = xFFXAlloc();
        if (sfkt == NULL)
        {
            xFFXShakeFree(ss);
            ss = NULL;
        }
        else
        {
            ss->disp.x = 0.0f;
            ss->disp.y = -ampl;
            ss->disp.z = 0.0f;
            ss->dur = 1.0f;
            ss->alpha = -7.0f / ss->dur;
            ss->freq = freq;
            ss->tmr = 0.0f;
            sfkt->doEffect = xFFXShakeUpdateEnt;
            sfkt->fdata = ss;
            xFFXAddEffect(plat, sfkt);
        }
    }
}

static void zPlatform_Tremble(zPlatform* plat, F32 ampl, F32 freq, F32 dur)
{
    xFFXShakeState* ss;
    xFFX* sfkt;
    xParEmitterCustomSettings info;
    S32 i;

    ss = xFFXShakeAlloc();
    if (ss != NULL)
    {
        sfkt = xFFXAlloc();
        if (sfkt == NULL)
        {
            xFFXShakeFree(ss);
            return;
        }

        xVec3SMul(&ss->disp, (xVec3*)&globals.camera.mat, ampl);
        ss->dur = dur;
        ss->alpha = 1.0f / dur;
        ss->freq = freq;
        ss->tmr = 0.0f;
        sfkt->doEffect = xFFXShakeUpdateEnt;
        sfkt->fdata = ss;
        xFFXAddEffect(plat, sfkt);
    }

    if (sEmitTremble != NULL)
    {
        info.custom_flags = 0x100;
        info.pos = *xEntGetCenter(plat);
        for (i = 0; i < 25; i++)
        {
            // Emit a particle at every 30 frames?
            xParEmitterEmitCustom(sEmitTremble, 1.0f / 30, &info);
        }
    }
}

void zPlatform_BreakawayFallFX(zPlatform* ent, F32 dt)
{
    if (sEmitBreakaway != NULL)
    {
        xParEmitterCustomSettings info;
        info.custom_flags = 0x100;
        info.pos = *xEntGetCenter(ent);
        info.pos.y += 0.5f;
        for (S32 iVar2 = 0; iVar2 < 25; iVar2++)
        {
            xParEmitterEmitCustom(sEmitBreakaway, 1/30.f, &info);
        }
    }
}

void zPlatform_Mount(zPlatform* plat)
{
    if (plat->subType == ePlatformTypeBreakaway && plat->state == 0) {
        if ((plat->passet->ba.breakflags & 0x1) && zEntPlayer_IsSneaking()) {
            plat->state = 1;
        } else {
            plat->state = 2;
            if (plat->passet->ba.ba_delay) {
                zPlatform_Tremble(plat, 0.06f, 8*PI, 1.0f + plat->passet->ba.ba_delay);
            }
        }
    }
}

void zPlatform_Dismount(zPlatform* ent)
{
    if ((ent->subType == ePlatformTypeBreakaway) && (ent->state == 1))
    {
        ent->state = 0;
    }
}

static void zPlatformTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
    zPlatform* plat = (zPlatform*)xent;
    xEntDefaultTranslate(xent, dpos, dmat);
    xEntMotionTranslate(&plat->motion, dpos, dmat);
}

static void zPlatFM_EventSetup(zPlatform* plat, const F32* toParam, S32 idx)
{
    F32 ds, atm, ttm, dtm;

    zPlatFMRunTime* fmrt = plat->fmrt;
    if (fmrt->flags & (1 << idx))
    {
        return;
    }

    ds = toParam[0];
    atm = toParam[1];
    ttm = toParam[2];
    dtm = toParam[3];

    if (atm <= 0.0f)
    {
        return;
    }

    if (ttm > atm)
    {
        ttm = atm;
    }
    else if (ttm < 0.0f)
    {
        ttm = 0.0f;
    }

    ttm = atm - ttm;
    if (dtm > ttm)
    {
        dtm = ttm;
    }
    else if (dtm < 0.0f)
    {
        dtm = 0.0f;
    }

    fmrt->tmrs[idx] = atm;
    fmrt->ttms[idx] = atm;
    fmrt->atms[idx] = ttm;
    fmrt->dtms[idx] = dtm;
    fmrt->vms[idx] = 2.0f * ds / (atm - dtm + ttm);
    fmrt->dss[idx] = ds;
    fmrt->flags |= (1 << idx);
}

S32 zPlatformEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    zPlatform* plat = (zPlatform*)to;

    switch (toEvent) {
    case eEventOn:
        if (!(plat->plat_flags & 0x1)) {
            plat->plat_flags |= 0x1;
        }
        break;
    case eEventOff:
        if (plat->plat_flags & 0x1) {
            plat->plat_flags &= ~0x1;
        }
        break;
    case eEventToggle:
        if (plat->plat_flags & 0x1) {
            plat->plat_flags &= ~0x1;
        } else {
            plat->plat_flags |= 0x1;
        }
        break;
    case eEventRun:
        if (plat->subType == ePlatformTypeBreakaway) {
            if (plat->state == 0 || plat->state == 1) {
                plat->state = 2;
                if (plat->passet->ba.ba_delay) {
                    zPlatform_Tremble(plat, 0.06f, 8*PI, 1.0f + plat->passet->ba.ba_delay);
                }
            }
        } else if (plat->subType == ePlatformTypeFM) {
            plat->plat_flags &= (U16)~0x4;
        } else if (plat->subType == ePlatformTypePaddle) {
            S32 iParam0 = (S32)toParam[0];
            if (iParam0) {
                if (plat->state == 0 &&
                    ((plat->passet->paddle.paddleFlags & 0x4) ||
                        !((iParam0 < 0) ? (plat->ctr == 0) : (plat->ctr + 1 == plat->passet->paddle.countOrient)))) {
                    zPlatform_PaddleStartRotate(plat, iParam0, (S32)toParam[1]);
                }
            } else {
                S32 destctr = (S32)toParam[1];
                if (destctr >= 0 && destctr < plat->passet->paddle.countOrient) {
                    plat->tmr = 1e-9f;
                    plat->state = 2;
                    plat->ctr = destctr;
                }
            }
        } else {
            if (plat->subType == ePlatformTypeMech &&
                globals.sceneCur->sceneID == 'PG12' &&
                (plat->asset->modelInfoID == xStrHash("skatepark_bumper") ||
                 plat->asset->modelInfoID == xStrHash("skatepark_flipper"))) {
                if (plat->asset->modelInfoID != xStrHash("skatepark_flipper")) {
                    xScrFXGlareAdd((xVec3*)&plat->model->Mat->pos,
                                   0.5f * xurand() + 0.5f,
                                   0.5f * xurand() + 0.5f,
                                   4.0f * xurand() + 3.0f,
                                   1.0f, 0.7f, 0.5f, 1.0f,
                                   NULL);
                    xScrFXGlareAdd((xVec3*)&plat->model->Mat->pos,
                                   0.5f * xurand(),
                                   0.8f * xurand(),
                                   3.0f + xurand(),
                                   xurand(), xurand(), xurand(), 1.0f,
                                   NULL);
                }
                xSndPlay3D(xStrHash("Check1"), 0.77f, 0.0f, 128, 0,
                           (xVec3*)&plat->model->Mat->pos, 0.0f,
                           SND_CAT_GAME, 0.0f);
                zRumbleStartDistance(globals.currentActivePad,
                                     10.0f * xurand(), 48.0f,
                                     eRumble_Medium, 0.35f);
            }
            if (plat->subType == ePlatformTypeMech &&
                (plat->motion.mech.state == 6 || plat->motion.mech.state == 7)) {
                xEntMotionReset(&plat->motion, globals.sceneCur);
            }
            xEntMotionRun(&plat->motion);
        }
        break;
    case eEventStop:
        if (plat->subType == ePlatformTypeFM) {
            plat->plat_flags |= 0x4;
        } else {
            xEntMotionStop(&plat->motion);
        }
        break;
    case eEventTranslLocalX:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 0);
        }
        break;
    case eEventTranslLocalY:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 1);
        }
        break;
    case eEventTranslLocalZ:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 2);
        }
        break;
    case eEventTranslWorldX:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 3);
        }
        break;
    case eEventTranslWorldY:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 4);
        }
        break;
    case eEventTranslWorldZ:
        if (plat->subType == ePlatformTypeFM) {
            zPlatFM_EventSetup(plat, toParam, 5);
        }
        break;
    case eEventRotLocalX:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 6);
        }
        break;
    case eEventRotLocalY:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 7);
        }
        break;
    case eEventRotLocalZ:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 8);
        }
        break;
    case eEventRotWorldX:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 9);
        }
        break;
    case eEventRotWorldY:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 10);
        }
        break;
    case eEventRotWorldZ:
        if (plat->subType == ePlatformTypeFM) {
            F32 tp[4];
            tp[0] = DEG2RAD(toParam[0]);
            tp[1] = toParam[1];
            tp[2] = toParam[2];
            tp[3] = toParam[3];
            zPlatFM_EventSetup(plat, tp, 11);
        }
        break;
    case eEventForward:
        if (plat->subType == ePlatformTypeMech) {
            xEntMechForward(&plat->motion);
        }
        break;
    case eEventReverse:
        if (plat->subType == ePlatformTypeMech) {
            xEntMechReverse(&plat->motion);
        }
        break;
    case eEventReset:
        zPlatform_Reset(plat, globals.sceneCur);
        break;
    case eEventVisible:
    case eEventFastVisible:
        xEntShow(plat);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOn(*plat, toParam[1], toParam[2]);
        }
        break;
    case eEventInvisible:
    case eEventFastInvisible:
        xEntHide(plat);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOff(*plat, toParam[1], toParam[2]);
        }
        break;
    case eEventCollision_Visible_On:
        xEntShow(plat);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOn(*plat, toParam[1], toParam[2]);
        }
        // fallthrough
    case eEventCollisionOn:
        plat->chkby = (XENT_COLLTYPE_TRIG | XENT_COLLTYPE_STAT);
        plat->bupdate(plat, (xVec3*)&plat->model->Mat->pos);
        break;
    case eEventCollision_Visible_Off:
        xEntHide(plat);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOff(*plat, toParam[1], toParam[2]);
        }
        // fallthrough
    case eEventCollisionOff:
        plat->chkby = XENT_COLLTYPE_NONE;
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable(plat);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable(plat);
        break;
    case eEventAnimPlay:
    case eEventAnimPlayLoop:
    case eEventAnimStop:
    case eEventAnimPause:
    case eEventAnimResume:
    case eEventAnimTogglePause:
    case eEventAnimPlayRandom:
    case eEventAnimPlayMaybe:
        zEntAnimEvent(plat, toEvent, toParam);
        break;
    case eEventSetSpeed:
        if (plat->subType == ePlatformTypeMP) {
            xEntMPSetSpeed(&plat->motion, toParam[0]);
        }
        break;
    case eEventAccelerate:
        if (plat->subType == ePlatformTypeMP) {
            xEntMPAccelerate(&plat->motion, toParam[0]);
        }
        break;
    case eEventSetSkyDome:
        xSkyDome_AddEntity(plat, (S32)toParam[0], (S32)toParam[1]);
        break;
    case eEventSetGoo:
        zGooAdd(plat, toParam[0], (S32)toParam[1]);
        break;
    case eEventGooSetWarb:
        zFXGooEventSetWarb(plat, toParam);
        break;
    case eEventGooSetFreezeDuration:
        zFXGooEventSetFreezeDuration(plat, toParam[0]);
        break;
    case eEventGooMelt:
        zFXGooEventMelt(plat);
        break;
    case eEventMount:
        if (toParamWidget) {
            F32 mt = 0.00001f;
            if (toParam[0]) mt = toParam[0];
            xEntDriveMount(&plat->drv, (xEnt*)toParamWidget, mt, NULL);
        }
        break;
    case eEventDismount:
        if (toParamWidget) {
            F32 mt = 0.00001f;
            if (toParam[0]) mt = toParam[0];
            xEntDriveDismount(&plat->drv, mt);
        }
        break;
    case eEventSetUpdateDistance:
        if (globals.updateMgr) {
            if (toParam[0] <= 0.0f) {
                xUpdateCull_SetCB(globals.updateMgr, plat, xUpdateCull_AlwaysTrueCB, NULL);
            } else {
                FloatAndVoid dist;
                dist.f = SQR(toParam[0]);
                xUpdateCull_SetCB(globals.updateMgr, plat, xUpdateCull_DistanceSquaredCB, dist.v);
            }
        }
        break;
    case eEventLaunchShrapnel:
    {
        zShrapnelAsset* shrap = (zShrapnelAsset*)toParamWidget;
        if (shrap && shrap->initCB) {
            xVec3 currVel;
            xVec3Sub(&currVel, &plat->frame->mat.pos, &plat->frame->oldmat.pos);
            xVec3SMulBy(&currVel, 1.0f / globals.update_dt);
            shrap->initCB(shrap, plat->model, &currVel, NULL);
        }
        break;
    }
    case eEventPlatPause:
        if (plat->subType != ePlatformTypeBreakaway) {
            if (toParam[0] == 0.0f) {
                plat->pauseMult = 0.000001f;
                plat->pauseDelta = 0.0f;
            } else {
                plat->pauseDelta = -1.0f / toParam[0];
            }
        }
        break;
    case eEventPlatUnpause:
        if (plat->subType != ePlatformTypeBreakaway) {
            if (toParam[0] == 0.0f) {
                plat->pauseMult = 1.0f;
                plat->pauseDelta = 0.0f;
            } else {
                plat->pauseDelta = 1.0f / toParam[0];
            }
        }
        break;
    }

    return 1;
}
