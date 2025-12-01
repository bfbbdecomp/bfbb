#include "xDebug.h"
#include "xDraw.h"
#include "xEntMotion.h"
#include "xEntMotionAsset.h"
#include "xMath.h"
#include "xMath3.h"
#include "xMathInlines.h"

#include "xPad.h"
#include "xScene.h"
#include "xSpline.h"

#include "zMovePoint.h"

#include <types.h>

static void xEntMotionDebugIPad(xEntMotion* xem);
static void xEntMotionDebugWrite(const xEntMotion* xem);
static void xEntMotionDebugDraw(const xEntMotion*);
static void xEntERMove(xEntMotion*, xScene*, F32, xEntFrame*);
U32 xEntERIsExtending(const xEntMotion*);
U32 xEntERIsExtended(const xEntMotion*);
U32 xEntERIsRetracting(const xEntMotion*);
U32 xEntERIsRetracted(const xEntMotion*);
static void xEntOrbitMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
void xEntMPSetSpeed(xEntMotion* motion, F32 speed);
static void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev, xScene* sc);
static void xEntMPMove(xEntMotion*, xScene*, F32, xEntFrame*);
static void xEntMechMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
static void xEntPenMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
static U32 xEntSldMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
static U32 xEntRotMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame);
void xMat4x3Rot(xMat4x3* m, xVec3* a, F32 t, xVec3* p);
char* xbtoa(U32 param);

void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset)
{
    motion->asset = asset;
    motion->type = asset->type;
    motion->flags = asset->flags;

    if (motion->type == XENTMOTION_TYPE_ER)
    {
        xVec3Copy(&motion->er.a, &asset->er.ret_pos);
        xVec3Add(&motion->er.b, &asset->er.ret_pos, &asset->er.ext_dpos);

        motion->er.et = asset->er.ext_tm;
        motion->er.wet = asset->er.ext_wait_tm;
        motion->er.rt = asset->er.ret_tm;
        motion->er.wrt = asset->er.ret_wait_tm;

        if (motion->er.p <= 0)
        {
            motion->er.p = 1.0f;
        }

        motion->er.brt = motion->er.et + motion->er.wet;
        motion->er.ert = motion->er.brt + motion->er.rt;
        motion->er.p = motion->er.ert + motion->er.wrt;
    }
    else if (motion->type == XENTMOTION_TYPE_ORB)
    {
        xVec3Copy(&motion->er.b, &asset->er.ret_pos);

        motion->orb.a = asset->orb.w;
        motion->orb.b = asset->orb.h;

        if (asset->orb.period <= 1e-5f)
        {
            asset->orb.period = 1.0f;
        }

        motion->orb.p = asset->orb.period;
        motion->orb.w = (2 * PI) / asset->orb.period;
    }
    else if (motion->type == XENTMOTION_TYPE_MP)
    {
        // literally nothing
    }
    else if (motion->type == XENTMOTION_TYPE_PEN)
    {
        if (asset->pen.period <= 1e-5f)
        {
            asset->pen.period = 1.0f;
        }

        motion->pen.w = (2 * PI) / asset->pen.period;
    }
    else if (motion->type == XENTMOTION_TYPE_MECH)
    {
        if (asset->mp.speed < 1e-5f)
        {
            asset->mp.speed = 1.0f;
        }

        if (asset->mech.sld_acc_tm + asset->mech.sld_dec_tm > asset->mech.sld_tm)
        {
            asset->mech.sld_dec_tm = asset->mech.sld_acc_tm = asset->mech.sld_tm * 0.5f;
        }

        if (asset->mech.rot_tm < 1e-5f)
        {
            asset->mech.rot_tm = 1.0f;
        }

        if (asset->mech.type == 2)
        {
            if (asset->mech.rot_tm != asset->mech.sld_tm)
            {
                asset->mech.rot_tm = asset->mech.sld_tm;
            }
        }
        if (asset->mech.rot_acc_tm + asset->mech.rot_dec_tm > asset->mech.rot_tm)
        {
            asset->mech.rot_dec_tm = asset->mech.rot_acc_tm = asset->mech.rot_tm * 0.5f;
        }
    }

    motion->owner = owner;
    motion->target = NULL;

    xEntMotionDebugAdd(motion);
}

void xEntMotionReset(xEntMotion* motion, xScene* sc)
{
    xEntMotionPenData* aspen;
    xMat3x3 pshrot;
    xEnt* ownr;
    xVec3* modlpos;
    xMat4x3* modlrot;
    xEntMotionMechData* mkasst;
    xEntMechData* mech;
    F32 drot;

    motion->flags = motion->asset->flags;
    motion->t = 0.0f;

    if (motion->type == XENTMOTION_TYPE_ER)
    {
        motion->er.state = 0;
    }
    else if (motion->type == XENTMOTION_TYPE_MP)
    {
        motion->mp.src = (xMovePoint*)xSceneResolvID(sc, motion->asset->mp.mp_id);
        xEntMPSetSpeed(motion, motion->asset->mp.speed);
        xEntMPGetNext(motion, NULL, sc);
        xVec3Copy((xVec3*)&motion->owner->model->Mat->pos, xMovePointGetPos(motion->mp.src));
    }
    else if (motion->type == XENTMOTION_TYPE_ORB)
    {
        xVec3Copy(&motion->orb.orig, (xVec3*)&motion->owner->model->Mat->pos);
    }
    else if (motion->type == XENTMOTION_TYPE_PEN)
    {
        xVec3 a, b, c;

        modlpos = (xVec3*)&motion->owner->model->Mat->pos;
        modlrot = (xMat4x3*)motion->owner->model->Mat;
        aspen = &motion->asset->pen;

        xMat3x3Rot(&pshrot, &modlrot->at, aspen->range * isin(aspen->phase));

        a.x = 0.0f;
        a.y = aspen->len;
        a.z = 0.0f;

        xMat3x3RMulVec(&b, &pshrot, &a);
        xVec3Sub(&c, &a, &b);
        xMat3x3Mul(modlrot, modlrot, &pshrot);
        xVec3AddTo(modlpos, &c);
        xVec3Add(&motion->pen.top, modlpos, &b);
        xMat4x3Copy(&motion->pen.omat, modlrot);
    }
    else if (motion->type == XENTMOTION_TYPE_MP)
    {
        if (motion->asset->flags & 1)
        {
            xQuatFromMat(&motion->mp.aquat, (xMat3x3*)motion->owner->model->Mat);
            xQuatCopy(&motion->mp.bquat, &motion->mp.aquat);
        }
        motion->tmr = 0.0f;
    }
    else if (motion->type == XENTMOTION_TYPE_MECH)
    {
        ownr = motion->owner;
        mkasst = &motion->asset->mech;
        mech = &motion->mech;

        if ((ownr != NULL) && (ownr->frame != NULL) && (ownr->model != NULL))
        {
            xVec3Copy(&mech->apos, (xVec3*)&ownr->model->Mat->pos);

            if (mkasst->sld_axis == 0)
            {
                xVec3Copy(&mech->dir, (xVec3*)&ownr->model->Mat->right);
            }
            else if (mkasst->sld_axis == 1)
            {
                xVec3Copy(&mech->dir, (xVec3*)&ownr->model->Mat->up);
            }
            else
            {
                xVec3Copy(&mech->dir, (xVec3*)&ownr->model->Mat->at);
            }

            xVec3SMul(&mech->bpos, &mech->dir, mkasst->sld_dist);
            xVec3AddTo(&mech->bpos, &mech->apos);

            mech->ss = mkasst->sld_dist /
                       -((mkasst->sld_acc_tm + mkasst->sld_dec_tm) * 0.5f - mkasst->sld_tm);
            mech->tsfd = mkasst->sld_tm - mkasst->sld_dec_tm;
            mech->tsbd = mkasst->sld_tm - mkasst->sld_acc_tm;

            if (mkasst->rot_axis == 0)
            {
                mech->rotptr = &ownr->frame->rot.axis.y;
            }
            else if (mkasst->rot_axis == 1)
            {
                mech->rotptr = &ownr->frame->rot.axis.x;
            }
            else
            {
                mech->rotptr = &ownr->frame->rot.axis.z;
            }

            mech->arot = *mech->rotptr;
            drot = (mkasst->rot_dist * PI) / 180.0f;
            mech->brot = xAngleClamp(mech->arot + drot);
            mech->sr = drot / -((mkasst->rot_acc_tm + mkasst->rot_dec_tm) * 0.5f - mkasst->rot_tm);
            mech->trfd = mkasst->rot_tm - mkasst->rot_dec_tm;
            mech->trbd = mkasst->rot_tm - mkasst->rot_acc_tm;

            if ((mkasst->type == 0) || (mkasst->type == 2) || (mkasst->type == 3))
            {
                mech->state = 0;
            }
            else
            {
                mech->state = 1;
            }

            motion->tmr = 0.0f;
        }
    }
}

void xEntMotionMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    if (motion->flags & 4)
    {
        return;
    }

    if (motion->type == XENTMOTION_TYPE_ER)
    {
        xEntERMove(motion, sc, dt, frame);
    }
    else if (motion->type == XENTMOTION_TYPE_ORB)
    {
        xEntOrbitMove(motion, sc, dt, frame);
    }
    else if (motion->type == XENTMOTION_TYPE_MP)
    {
        xEntMPMove(motion, sc, dt, frame);
    }
    else if (motion->type == XENTMOTION_TYPE_PEN)
    {
        xEntPenMove(motion, sc, dt, frame);
    }
    else if (motion->type == XENTMOTION_TYPE_MECH)
    {
        xEntMechMove(motion, sc, dt, frame);
    }
    else
    {
        frame->mode = 0;
    }

    motion->t = (motion->t + dt);
}

static void xEntERMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    F32 newt = motion->t - motion->er.p;

    if (newt > 0.0f)
    {
        motion->t = newt;
    }

    if (xEntERIsExtending(motion))
    {
        F32 rem = motion->er.et - motion->t;
        F32 scale = MIN(rem, dt) / motion->er.et;

        if (rem < dt)
        {
            xVec3Sub(&frame->dpos, &motion->er.b, &frame->mat.pos);
        }
        else
        {
            xVec3Sub(&frame->dpos, &motion->er.b, &motion->er.a);
            xVec3SMulBy(&frame->dpos, scale);
        }

        frame->mode = 2;
        motion->er.state = 0;
    }
    else if (xEntERIsExtended(motion))
    {
        motion->er.state = 1;
    }
    else if (xEntERIsRetracting(motion))
    {
        F32 rem = motion->er.ert - motion->t;
        F32 scale = MIN(rem, dt) / motion->er.rt;

        if (rem < dt)
        {
            xVec3Sub(&frame->dpos, &motion->er.a, &frame->mat.pos);
        }
        else
        {
            xVec3Sub(&frame->dpos, &motion->er.a, &motion->er.b);
            xVec3SMulBy(&frame->dpos, scale);
        }

        frame->mode = 2;
        motion->er.state = 2;
    }
    else if (xEntERIsRetracted(motion))
    {
        motion->er.state = 3;
    }
}

static void xEntOrbitMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    F32 rem = dt * 0.5f;
    F32 u = motion->orb.w * (motion->t + rem);
    F32 th = isin(motion->orb.w * rem);
    F32 newt = motion->t - motion->orb.p;

    if (newt > 0.0f)
    {
        motion->t = newt;
    }

    if ((-newt < dt) && (-newt > 0.0f))
    {
        xVec3Sub(&frame->dpos, &motion->orb.orig, &frame->mat.pos);
    }
    else
    {
        frame->dpos.x = (2.0f * th) * motion->orb.a * isin(u);
        frame->dpos.y = 0.0f;
        frame->dpos.z = (-2.0f * th) * motion->orb.b * icos(u);
    }

    frame->mode = 2;
}

void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev, xScene* sc)
{
    xEntMPData* mp = &motion->mp;
    xVec3 tempdir;
    xMat3x3 mat;

    mp->spl = NULL;
    mp->curdist = 0.0f;
    mp->dist = xMovePointGetNext(mp->src, prev, &mp->dest, &tempdir);

    if (mp->dest == mp->src)
    {
        xEntMotionStop(motion);
    }
    else if (mp->dest == 0)
    {
        xEntMotionStop(motion);
    }
    else
    {
        if (motion->asset->flags & 1)
        {
            xQuatFromMat(&mp->aquat, (xMat3x3*)(motion->owner->model->Mat));
            xVec3Inv(&tempdir, &tempdir);
            xMat3x3LookVec(&mat, &tempdir);
            xQuatFromMat(&mp->bquat, &mat);
        }
        if (mp->dest->spl != 0)
        {
            mp->spl = mp->dest->spl;
            while (mp->dest->asset->bezIndex != 0)
            {
                mp->dest = mp->dest->nodes[0];
            }
            mp->dist = xSpline3_ArcTotal(mp->spl);
        }
    }
}

U32 xQuatEquals(const xQuat* a, const xQuat* b); // Should be linked weakly

static void xEntMPMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntMPData* mp = &motion->mp;

    if (mp->dest == mp->src || !mp->dest)
        return;

    if (motion->tmr > 0.0f)
    {
        motion->tmr -= dt;
        return;
    }

    frame->mode = 2;

    F32 newdist = mp->curdist + mp->speed * dt;
    if (newdist >= mp->dist)
    {
        frame->dpos.x = mp->dest->pos->x - frame->mat.pos.x;
        frame->dpos.y = mp->dest->pos->y - frame->mat.pos.y;
        frame->dpos.z = mp->dest->pos->z - frame->mat.pos.z;

        if (motion->asset->mp.flags & 0x1)
        {
            xEntMotionStop(motion);
        }

        xMovePoint* prev = mp->src;
        mp->src = mp->dest;
        xEntMPGetNext(motion, prev, sc);

        motion->tmr = mp->src->asset->delay;
        return;
    }

    mp->curdist = newdist;

    F32 qdot;
    xVec3 tgt, dir, bank;
    xQuat quat, qold;
    xMat3x3 tmpmat;
    if (mp->spl)
    {
        F32 u = xSpline3_EvalArcApprox(mp->spl, newdist, 0, &tgt);

        if (motion->asset->flags & 1)
        {
            xSpline3_EvalSeg(mp->spl, u, 1, &dir);
            if (motion->asset->use_banking == 1)
            {
                xSpline3_EvalSeg(mp->spl, u, 2, &bank);
            }

            if (xVec3Length2(&dir) < 0.000001f)
            {
                if (u < 0.1f)
                    u += 0.01f;
                else
                    u -= 0.01f;
                xSpline3_EvalSeg(mp->spl, u, 1, &dir);
                if (motion->asset->use_banking == 1)
                {
                    xSpline3_EvalSeg(mp->spl, u, 2, &bank);
                }
            }

            if (motion->asset->use_banking != 1)
            {
                xVec3Inv(&dir, &dir);
                xMat3x3LookVec(&tmpmat, &dir);
            }
            else
            {
                xVec3 gravity = { 0.0f, -sc->gravity, 0.0f };

                bank = bank * mp->speed * 0.01f + gravity;
                dir.normalize();
                bank -= dir * bank.dot(dir);
                bank.normalize();

                tmpmat.at = dir;
                tmpmat.right = bank.cross(dir);
                tmpmat.up = bank;
            }

            xQuatFromMat(&quat, &tmpmat);
            xQuatFromMat(&qold, &frame->mat);

            qdot = xQuatDot(&quat, &qold);
            if (qdot < 0.0f)
            {
                xQuatFlip(&quat, &quat);
                qdot = -qdot;
            }
            if (qdot > 1.0f)
            {
                qdot = 1.0f;
            }
            qdot = 2.0f * xacos(qdot);

            if (qdot <= PI * dt)
            {
                frame->mode |= 0x10;
                (xMat3x3) frame->mat = tmpmat;
            }
            else
            {
                qdot = PI * dt / qdot;
                xQuatSlerp(&quat, &qold, &quat, qdot);
                xQuatNormalize(&quat, &quat);
                xQuatToMat(&quat, &frame->mat);
            }
        }
    }
    else
    {
        xVec3Lerp(&tgt, mp->src->pos, mp->dest->pos, mp->curdist / mp->dist);

        if ((motion->asset->flags & 1) && !xQuatEquals(&mp->aquat, &mp->bquat))
        {
            xQuatSlerp(&quat, &mp->aquat, &mp->bquat, MIN(1.0f, 2.0f * (mp->curdist / mp->dist)));
            xQuatToMat(&quat, &frame->mat);
            frame->mode |= 0x10;
        }
    }

    frame->dpos.x = tgt.x - frame->mat.pos.x;
    frame->dpos.y = tgt.y - frame->mat.pos.y;
    frame->dpos.z = tgt.z - frame->mat.pos.z;
}

static void xEntPenMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntPenData* pen = &motion->pen;
    xEntMotionPenData* aspen = &motion->asset->pen;
    F32 th = (dt * 0.5f) * pen->w;
    F32 rem = motion->t + (dt * 0.5f);
    F32 dangle = (aspen->range * 2.0f) * isin(th) * icos((rem * pen->w) + aspen->phase);
    F32 newt = motion->t - aspen->period;

    if (newt > 0.0f)
    {
        motion->t = motion->t - aspen->period;
    }

    if ((-newt < dt) && (-newt > 0.0f))
    {
        xMat4x3Copy(&frame->mat, &motion->pen.omat);
        frame->mode = 0x11;
    }
    else
    {
        xMat4x3 delta_mat;
        xMat4x3Rot(&delta_mat, &frame->mat.at, dangle, &pen->top);
        xMat4x3Mul(&frame->mat, &frame->mat, &delta_mat);
        frame->mode = 0x41;
    }
}

static void xEntMechMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntMotionMechData* mkasst = &motion->asset->mech;
    xEntMechData* mech = &motion->mech;
    frame->mode = 0;
    U32 last = 0;

    if (mech->state == 0)
    {
        last = xEntSldMove(motion, sc, dt, frame);
        if (mkasst->type == 2)
        {
            xEntRotMove(motion, sc, dt, frame);
        }
        if (last != 0)
        {
            if (mkasst->type == 3)
            {
                mech->state = 1;
            }
            else if (mkasst->flags & 1)
            {
                mech->state = 2;
                mech->ss = -mech->ss;
                mech->sr = -mech->sr;
            }
            else if (mkasst->flags & 2)
            {
                mech->state = 6;
            }
            else
            {
                mech->state = 5;
            }
        }
    }
    else if (mech->state == 1)
    {
        last = xEntRotMove(motion, sc, dt, frame);
        if (last != 0)
        {
            if (mkasst->type == 4)
            {
                mech->state = 0;
            }
            else if (mkasst->flags & 1)
            {
                mech->state = 2;
                mech->ss = -mech->ss;
                mech->sr = -mech->sr;
            }
            else if (mkasst->flags & 2)
            {
                mech->state = 6;
            }
            else if (mkasst->post_ret_delay != 0.0f)
            {
                mech->state = 5;
            }
        }
    }
    else if (mech->state == 2)
    {
        if (motion->tmr >= mkasst->ret_delay)
        {
            if ((mkasst->type == 0) || (mkasst->type == 2) || (mkasst->type == 4))
            {
                mech->state = 3;
            }
            else
            {
                mech->state = 4;
            }
            last = 1;
        }
    }
    else if (mech->state == 3)
    {
        last = xEntSldMove(motion, sc, dt, frame);
        if (mkasst->type == 2)
        {
            xEntRotMove(motion, sc, dt, frame);
        }
        if (last != 0)
        {
            if (mkasst->type == 4)
            {
                mech->state = 4;
            }
            else if ((mkasst->flags & 2) != 0)
            {
                mech->state = 7;
            }
            else
            {
                mech->state = 5;
            }
        }
    }
    else if (mech->state == 4)
    {
        last = xEntRotMove(motion, sc, dt, frame);
        if (last != 0)
        {
            if (mkasst->type == 3)
            {
                mech->state = 3;
            }
            else if ((mkasst->flags & 2) != 0)
            {
                mech->state = 7;
            }
            else
            {
                mech->state = 5;
            }
        }
    }
    else if ((mech->state == 5) && (motion->tmr >= mkasst->post_ret_delay))
    {
        xEntMotionReset(motion, sc);
        xEntMotionRun(motion);
        last = 1;
    }
    if (last != 0)
    {
        motion->tmr = 0.0f;
    }
    else
    {
        motion->tmr += dt;
    }
}

static U32 xEntSldMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntMechData* mech = &motion->mech;
    xEntMotionAsset* mkasst = motion->asset;
    U32 last;
    F32 tmradj = motion->tmr + (dt * 0.5f);
    F32 rem = mkasst->mech.sld_tm - tmradj;
    F32 speed;

    if (motion->tmr + dt >= mkasst->mech.sld_tm)
    {
        if (mech->state == 0)
        {
            xVec3Sub(&frame->dpos, &mech->bpos, &frame->mat.pos);
        }
        else
        {
            xVec3Sub(&frame->dpos, &mech->apos, &frame->mat.pos);
        }

        last = 1;
    }
    else
    {
        if (mech->state == 0)
        {
            if ((tmradj < mkasst->mech.sld_acc_tm) && (mkasst->mech.sld_acc_tm > 1e-05f))
            {
                speed = (mech->ss * tmradj) / mkasst->mech.sld_acc_tm;
            }
            else if ((tmradj > mech->tsfd) && (mkasst->mech.sld_dec_tm > 1e-05f))
            {
                speed = (mech->ss * rem) / mkasst->mech.sld_dec_tm;
            }
            else
            {
                speed = mech->ss;
            }
        }
        else if ((tmradj < mkasst->mech.sld_dec_tm) && (mkasst->mech.sld_dec_tm > 1e-05f))
        {
            speed = (mech->ss * tmradj) / mkasst->mech.sld_dec_tm;
        }
        else if ((tmradj > mech->tsbd) && (mkasst->mech.sld_acc_tm > 1e-05f))
        {
            speed = (mech->ss * rem) / mkasst->mech.sld_acc_tm;
        }
        else
        {
            speed = mech->ss;
        }

        xVec3SMul(&frame->dpos, &mech->dir, speed * dt);

        last = 0;
    }

    frame->mode |= 2;

    return last;
}

static U32 xEntRotMove(xEntMotion* motion, xScene* sc, F32 dt, xEntFrame* frame)
{
    xEntMechData* mech = &motion->mech;
    xEntMotionMechData* mkasst = &motion->asset->mech;
    U32 last;
    F32 tmradj = motion->tmr + (dt * 0.5f);
    F32 rem = mkasst->rot_tm - tmradj;
    F32 speed;
    xEntAsset* easst;

    if (motion->tmr + dt >= mkasst->rot_tm)
    {
        if ((mech->state == 1) || (mkasst->type == 2) && (mech->state == 0))
        {
            *mech->rotptr = mech->brot;
        }
        else
        {
            *mech->rotptr = mech->arot;
        }

        last = 1;
    }
    else
    {
        if ((mech->state == 1) || (mkasst->type == 2 && (mech->state == 0)))
        {
            if ((tmradj < mkasst->rot_acc_tm) && (mkasst->rot_acc_tm > 1e-05f))
            {
                speed = (mech->sr * tmradj) / mkasst->rot_acc_tm;
            }
            else if ((tmradj > mech->trfd) && (mkasst->rot_dec_tm > 1e-05f))
            {
                speed = (mech->sr * rem) / mkasst->rot_dec_tm;
            }
            else
            {
                speed = mech->sr;
            }
        }
        else if ((tmradj < mkasst->rot_dec_tm) && (mkasst->rot_dec_tm > 1e-05f))
        {
            speed = (mech->sr * tmradj) / mkasst->rot_dec_tm;
        }
        else if ((tmradj > mech->trbd) && (mkasst->rot_acc_tm > 1e-05f))
        {
            speed = (mech->sr * rem) / mkasst->rot_acc_tm;
        }
        else
        {
            speed = mech->sr;
        }

        *motion->mech.rotptr = xAngleClamp(speed * dt + *mech->rotptr);

        last = 0;
    }

    xMat3x3Euler(&frame->mat, frame->rot.axis.x, frame->rot.axis.y, frame->rot.axis.z);

    if (motion->owner != NULL)
    {
        easst = motion->owner->asset;
        xVec3SMulBy(&frame->mat.right, easst->scale.x);
        xVec3SMulBy(&frame->mat.up, easst->scale.y);
        xVec3SMulBy(&frame->mat.at, easst->scale.z);
    }

    frame->mode |= 0x10;

    return last;
}

void xEntMechForward(xEntMotion* motion)
{
    xEntMotionMechData* mech = &(motion->asset->mech);
    xEntMotionAsset* mkasst = motion->asset;

    xEntMotionRun(motion);

    if ((motion->mech.state != 0) && (motion->mech.state != 1) && (motion->mech.state != 2))
    {
        if (motion->mech.state == 3)
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = mkasst->mech.sld_tm - motion->tmr;
            motion->mech.state = 0;
        }
        else if (motion->mech.state == 4)
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = mkasst->mech.rot_tm - motion->tmr;
            motion->mech.state = 1;
        }
        else if ((motion->mech.state != 5) && (motion->mech.state != 6) &&
                 (motion->mech.state == 7))
        {
            motion->mech.ss = -motion->mech.ss;
            motion->mech.sr = -motion->mech.sr;
            motion->tmr = 0.0f;

            if ((mech->type == 0) || (mech->type == 2) || (mech->type == 4))
            {
                motion->mech.state = 0;
            }
            else
            {
                motion->mech.state = 1;
            }
        }
    }
}

void xEntMechReverse(xEntMotion* motion)
{
    xEntMotionMechData* mech = &motion->asset->mech;
    xEntMotionAsset* mkasst = motion->asset;

    xEntMotionRun(motion);

    if (motion->mech.state == 0)
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = mkasst->mech.sld_tm - motion->tmr;
        motion->mech.state = 3;
    }
    else if (motion->mech.state == 1)
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = mkasst->mech.rot_tm - motion->tmr;
        motion->mech.state = 4;
    }
    else if ((motion->mech.state != 2) && (motion->mech.state != 3) && (motion->mech.state != 4) &&
             (motion->mech.state != 5) && (motion->mech.state == 6))
    {
        motion->mech.ss = -motion->mech.ss;
        motion->mech.sr = -motion->mech.sr;
        motion->tmr = 0.0f;

        if ((mech->type == 0) || (mech->type == 2) || (mech->type == 4))
        {
            motion->mech.state = 3;
        }
        else
        {
            motion->mech.state = 4;
        }
    }
}

void xEntMotionTranslate(xEntMotion* motion, const xVec3* dpos, xMat4x3* dmat)
{
    if (dmat != NULL)
    {
        if (motion->type == XENTMOTION_TYPE_ER)
        {
            xMat4x3Toworld(&motion->er.a, dmat, &motion->er.a);
            xMat4x3Toworld(&motion->er.b, dmat, &motion->er.b);
        }
        else if (motion->type == XENTMOTION_TYPE_ORB)
        {
            xMat4x3Toworld(&motion->orb.orig, dmat, &motion->orb.orig);
            xMat4x3Toworld(&motion->orb.c, dmat, &motion->orb.c);
        }
        else if (motion->type == XENTMOTION_TYPE_MP)
        {
            return;
        }
        else if (motion->type == XENTMOTION_TYPE_PEN)
        {
            xMat4x3Toworld(&motion->pen.top, dmat, &motion->pen.top);
            xMat4x3Mul(&motion->pen.omat, &motion->pen.omat, dmat);
        }
        else if (motion->type == XENTMOTION_TYPE_MECH)
        {
            xMat4x3Toworld(&motion->mech.apos, dmat, &motion->mech.apos);
            xMat4x3Toworld(&motion->mech.bpos, dmat, &motion->mech.bpos);
            xMat3x3RMulVec(&motion->mech.dir, dmat, &motion->mech.dir);
        }
    }
    else
    {
        if (motion->type == XENTMOTION_TYPE_ER)
        {
            xVec3AddTo(&motion->er.a, dpos);
            xVec3AddTo(&motion->er.b, dpos);
        }
        else if (motion->type == XENTMOTION_TYPE_ORB)
        {
            xVec3AddTo(&motion->orb.orig, dpos);
            xVec3AddTo(&motion->orb.c, dpos);
        }
        else if (motion->type == XENTMOTION_TYPE_MP)
        {
            return;
        }
        else if (motion->type == XENTMOTION_TYPE_PEN)
        {
            xVec3AddTo(&motion->pen.top, dpos);
            xVec3AddTo(&motion->pen.omat.pos, dpos);
        }
        else if (motion->type == XENTMOTION_TYPE_MECH)
        {
            xVec3AddTo(&motion->mech.apos, dpos);
            xVec3AddTo(&motion->mech.bpos, dpos);
        }
    }
}

static xEntMotion** dbg_xems;
static U16 dbg_num;
static U16 dbg_num_allocd;
static S16 dbg_idx = -1;

void xEntMotionDebugCB();

// Non-matching: scheduling
void xEntMotionDebugInit(U16 num_xems)
{
    if (num_xems != 0)
    {
        xDebugModeAdd("DBG_XENTMOTION", xEntMotionDebugCB);
        dbg_num = 0;
        dbg_xems = (xEntMotion**)xMemAlloc(gActiveHeap, num_xems << 2, 0);
        dbg_num_allocd = num_xems;
        dbg_idx = 0;
    }
}

void xEntMotionDebugExit()
{
    dbg_num = 0;
    dbg_xems = NULL;
    dbg_num_allocd = 0;
    dbg_idx = -1;
}

// This scheduling is absolutely shambolic
void xEntMotionDebugAdd(xEntMotion* motion)
{
    if (dbg_num < dbg_num_allocd)
    {
        dbg_num++;
        dbg_xems[dbg_num] = motion;
    }
}

void xEntMotionDebugCB()
{
    xEntMotion* xem;

    if ((dbg_idx != -1) && (dbg_num != 0))
    {
        xem = dbg_xems[dbg_idx];
        xEntMotionDebugWrite(xem);
        xEntMotionDebugDraw(xem);
        xEntMotionDebugIPad(xem);
    }
}

static void xEntMotionDebugWrite(const xEntMotion* xem)
{
    const char* owner;
    const char* gps;

    switch (xem->type)
    {
    case XENTMOTION_TYPE_ER:
        gps = "extend/retract";
        break;
    case XENTMOTION_TYPE_ORB:
        gps = "orbital";
        break;
    case XENTMOTION_TYPE_SPL:
        gps = "spline";
        break;
    case XENTMOTION_TYPE_MP:
        gps = "movepoint";
        break;
    case XENTMOTION_TYPE_MECH:
        gps = "mechanism";
        break;
    case XENTMOTION_TYPE_PEN:
        gps = "pendulum";
        break;
    default:
        gps = "????";
        break;
    }

    xprintf("type:             %s\n", gps);
    xprintf("stopped:          %s\n", xbtoa(xem->flags & 4));

    if (xem->owner != NULL)
    {
        owner = xSceneID2Name(g_xSceneCur, xem->owner->id);
    }
    else
    {
        owner = "null";
    }

    xprintf("owner:            %s\n", owner);
    xprintf("t:  %.3f   d: %.3f   tmr: %.3f\n", xem->t, xem->d, xem->tmr);

    switch (xem->type)
    {
    case XENTMOTION_TYPE_ER:
        xprintf("a:       <%.3f %.3f %.3f>\n", xem->er.a.x, xem->er.a.y, xem->er.a.z);
        xprintf("b:       <%.3f %.3f %.3f>\n", xem->er.b.x, xem->er.b.y, xem->er.b.z);
        xprintf("b-a:     <%.3f %.3f %.3f>\n", xem->asset->er.ext_dpos.x, xem->asset->er.ext_dpos.y,
                xem->asset->er.ext_dpos.z);
        xprintf("ext_tm:  %.3f\n", xem->er.et);
        xprintf("ret_tm:  %.3f\n", xem->er.rt);
        xprintf("wait_et: %.3f\n", xem->er.wet);
        xprintf("wait_rt: %.3f\n", xem->er.wrt);
        xprintf("period:  %.3f\n", xem->er.p);
        break;
    case XENTMOTION_TYPE_ORB:
        xprintf("c:   <%.3f %.3f %.3f>\n", xem->orb.c.x, xem->orb.c.y, xem->orb.c.z);
        xprintf("a:   %.3f\n", xem->orb.a);
        xprintf("b:   %.3f\n", xem->orb.b);
        xprintf("p:   %.3f\n", xem->orb.p);
        xprintf("w:   %.3f\n", xem->orb.w);
        break;
    case XENTMOTION_TYPE_MP:
        if (xem->mp.src != NULL)
        {
            gps = xSceneID2Name(g_xSceneCur, xem->mp.src->id);
        }
        else
        {
            gps = "";
        }

        xprintf("src-mp:           %s\n", gps);

        if (xem->mp.dest != NULL)
        {
            gps = xSceneID2Name(g_xSceneCur, xem->mp.dest->id);
        }
        else
        {
            gps = "";
        }

        xprintf("dest-mp:          %s\n", gps);
        xprintf("dist:  %.3f\n", xem->mp.dist);
        xprintf("speed: %.3f\n", xem->mp.speed);
        break;
    case XENTMOTION_TYPE_MECH:
        switch (xem->asset->mech.type)
        {
        case 0:
            gps = "slide";
            break;
        case 1:
            gps = "rot";
            break;
        case 2:
            gps = "slide_rot";
            break;
        case 3:
            gps = "slide_then_rot";
            break;
        case 4:
            gps = "rot_then_slide";
            break;
        }

        xprintf("type:             %s\n", gps);
        xprintf("returns:          %s", xbtoa(xem->asset->mech.flags & 1));

        if (xem->asset->mech.flags & 1)
        {
            xprintf("   ret_delay: %.3f", xem->asset->mech.ret_delay);
        }

        xprintf("\n");
        xprintf("continuous:       %s", xbtoa(!(xem->asset->mech.flags & 2)));

        if (!(xem->asset->mech.flags & 2))
        {
            xprintf("   end_delay: %.3f", xem->asset->mech.post_ret_delay);
        }

        xprintf("\n");

        switch (xem->mech.state)
        {
        case 0:
            if (xem->asset->mech.type == 2)
            {
                gps = "sliding + rotating forth";
            }
            else
            {
                gps = "sliding forth";
            }
            break;
        case 1:
            gps = "rotating forth";
            break;
        case 2:
            gps = "waiting to return";
            break;
        case 3:
            if (xem->asset->mech.type == 2)
            {
                gps = "sliding + rotating back";
            }
            else
            {
                gps = "sliding back";
            }
            break;
        case 4:
            gps = "rotating back";
            break;
        case 5:
            gps = "waiting to begin again";
            break;
        case 6:
            gps = "done";
            break;
        case 7:
            gps = "undone";
            break;
        }

        xprintf("state:            %s\n", gps);

        if (xem->asset->mech.type != 1)
        {
            gps = xem->asset->mech.sld_axis == 0 ? "X" : xem->asset->mech.sld_axis == 1 ? "Y" : "Z";

            xprintf("slide_axis:   %s", gps);
            xprintf("       slide_dist:   %.3f\n", xem->asset->mech.sld_dist);
            xprintf("slide_tm:     %.3f", xem->asset->mech.sld_tm);
            xprintf("   slide_speed:  %.3f\n", xem->mech.ss);
            xprintf("slide_acc_tm: %.3f", xem->asset->mech.sld_acc_tm);
            xprintf("   slide_dec_tm: %.3f\n", xem->asset->mech.sld_dec_tm);
            xprintf("slide_bd_tm:  %.3f", xem->mech.tsbd);
            xprintf("   slide_fd_tm:  %.3f\n", xem->mech.tsfd);
            xprintf("start_pos:  <%.3f %.3f %.3f>\n", xem->mech.apos.x, xem->mech.apos.y,
                    xem->mech.apos.z);
            xprintf("end_pos:    <%.3f %.3f %.3f>\n", xem->mech.bpos.x, xem->mech.bpos.y,
                    xem->mech.bpos.z);
            xprintf("dir:        <%.3f %.3f %.3f>\n", xem->mech.dir.x, xem->mech.dir.y,
                    xem->mech.dir.z);
        }

        if (xem->asset->mech.type != 0)
        {
            gps = xem->asset->mech.rot_axis == 0 ? "X" : xem->asset->mech.rot_axis == 1 ? "Y" : "Z";

            xprintf("rot_axis:   %s", gps);
            xprintf("       rot_dist:   %.3f\n", xem->asset->mech.rot_dist);
            xprintf("rot_tm:     %.3f", xem->asset->mech.rot_tm);
            xprintf("   rot_speed:  %.3f\n", (xem->mech.sr * 180.0f) / PI);
            xprintf("rot_acc_tm: %.3f", xem->asset->mech.rot_acc_tm);
            xprintf("   rot_dec_tm: %.3f\n", xem->asset->mech.rot_dec_tm);
            xprintf("rot_bd_tm:  %.3f", xem->mech.trbd);
            xprintf("   rot_fd_tm:  %.3f\n", xem->mech.trfd);
            xprintf("arot:       %.3f\n", (xem->mech.arot * 180.0f) / PI);
            xprintf("brot:       %.3f\n", (xem->mech.brot * 180.0f) / PI);
        }
        break;
    case XENTMOTION_TYPE_PEN:
        xprintf("top:    <%.3f %.3f %.3f>\n", xem->pen.top.x, xem->pen.top.y, xem->pen.top.z);
        xprintf("length: %.3f\n", xem->asset->pen.len);
        xprintf("period: %.3f\n", xem->asset->pen.period);
        xprintf("phase:  %.3f\n", (xem->asset->pen.phase * 180.0f) / PI);
        xprintf("range:  %.3f\n", (xem->asset->pen.range * 180.0f) / PI);
        xprintf("w:      %.3f\n", xem->pen.w);
        break;
    }
}

static void xEntMotionDebugDraw(const xEntMotion* xem)
{
    if (xem->owner && xem->target)
    {
        xDrawSetColor(g_NEON_GREEN);
        xDrawLine(xEntGetPos(xem->owner), xEntGetPos(xem->target));
    }

    switch (xem->type)
    {
    case k_XENTMOTIONTYPE_ER:
        xDrawSetColor(g_NEON_RED);
        xDrawLine(&xem->er.a, &xem->er.b);
        break;
    case k_XENTMOTIONTYPE_ORBIT:
        if (xem->owner)
        {
            xDrawSetColor(g_NEON_RED);
            xDrawLine(&xem->orb.c, xEntGetPos(xem->owner));
        }
        break;
    case k_XENTMOTIONTYPE_MP:
    {
        xDrawSetColor(g_PIMP_GOLD);
        xMovePoint* xmp = xem->mp.dest;
        if (xmp)
        {
            for (U16 idx = 0; idx < xMovePointGetNumPoints(xmp); idx++)
            {
                xMovePoint* omp = xMovePointGetPoint(xmp, idx);
                if (omp != xem->mp.src)
                {
                    xDrawLine(xMovePointGetPos(xmp), xMovePointGetPos(omp));
                }
                for (U16 jdx = 0; jdx < xMovePointGetNumPoints(omp); jdx++)
                {
                    xMovePoint* pmp = xMovePointGetPoint(omp, jdx);
                    xDrawLine(xMovePointGetPos(omp), xMovePointGetPos(pmp));
                }
            }
        }
        if (xem->mp.src && xem->mp.dest)
        {
            xDrawSetColor(g_NEON_RED);
            xDrawLine(xMovePointGetPos(xem->mp.src), xMovePointGetPos(xem->mp.dest));
        }
        break;
    }
    case k_XENTMOTIONTYPE_MECH:
        xDrawSetColor(g_NEON_RED);
        xDrawLine(&xem->mech.apos, &xem->mech.bpos);
        break;
    case k_XENTMOTIONTYPE_PEND:
        if (xem->owner)
        {
            xDrawSetColor(g_NEON_RED);
            xDrawLine(&xem->pen.top, xEntGetPos(xem->owner));
        }
        break;
    }
}

void xEntMotionDebugDraw(const xEntMotion*);

_tagxPad* gDebugPad;

void xQuatCopy(xQuat* a, const xQuat* b)
{
    a->s = b->s;
    a->v.x = b->v.x;
    a->v.y = b->v.y;
    a->v.z = b->v.z;
}

U32 xVec3Equals(const xVec3* a, const xVec3* b)
{
    // Epsilon test with epsilon of... 0.0f lol.
    return xabs(a->x - b->x) <= 0.0f && xabs(a->y - b->y) <= 0.0f && xabs(a->z - b->z) <= 0.0f;
}

U32 xQuatEquals(const xQuat* a, const xQuat* b)
{
    return (a->s == b->s) && xVec3Equals(&a->v, &b->v);
}

void xQuatFlip(xQuat* a, const xQuat* b)
{
    a->s = -b->s;
    xVec3Inv(&a->v, &b->v);
}

F32 xQuatDot(const xQuat* a, const xQuat* b)
{
    return xVec3Dot(&a->v, &b->v) + a->s * b->s;
}

void xDrawSetColor(iColor_tag color)
{
}

char* xbtoa(U32 param)
{
    if (param != 0)
    {
        return "true ";
    }
    return "false";
}

static void xEntMotionDebugIPad(xEntMotion* xem)
{
    if (gDebugPad->pressed & 0x20)
    {
        *(volatile S16*)(&dbg_idx) = *(volatile S16*)(&dbg_idx) + 1;
        if (*(volatile U16*)(&dbg_num) >= *(volatile S16*)(&dbg_idx))
        {
            *(volatile S16*)(&dbg_idx) = 0;
        }
    }
    if (gDebugPad->pressed & 0x80)
    {
        *(volatile S16*)(&dbg_idx) = *(volatile S16*)(&dbg_idx) - 1;
        if (*(volatile S16*)(&dbg_idx) < 0)
        {
            *(volatile S16*)(&dbg_idx) = *(volatile U16*)(&dbg_num) - 1;
        }
    }
    if (gDebugPad->pressed & 0x10000)
    {
        if (xem->owner != NULL)
        {
            xEntReset(xem->owner);
        }
        xEntMotionReset(xem, g_xSceneCur);
    }
    if (gDebugPad->pressed & 0x20000)
    {
        if (xEntMotionIsStopped(xem))
        {
            xEntMotionRun(xem);
        }
        else
        {
            xEntMotionStop(xem);
        }
    }
}
