#include "xCamera.h"

#include "xstransvc.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xScene.h"
#include "xCollideFast.h"
#include "xScrFx.h"

#include "iMath.h"

#include <cmath>
#include <cstring>

struct cameraFXShake
{
    F32 magnitude;
    xVec3 dir;
    F32 cycleTime;
    F32 cycleMax;
    F32 dampen;
    F32 dampenRate;
    F32 rotate_magnitude;
    F32 radius;
    xVec3* epicenterP;
    xVec3 epicenter;
    xVec3* player;
};

struct cameraFXZoom
{
    F32 holdTime;
    F32 vel;
    F32 accel;
    F32 distance;
    U32 mode;
    F32 velCur;
    F32 distanceCur;
    F32 holdTimeCur;
};

#define CAMERAFX_ZOOM_MODE_0 0
#define CAMERAFX_ZOOM_MODE_1 1
#define CAMERAFX_ZOOM_MODE_2 2
#define CAMERAFX_ZOOM_MODE_3 3

struct cameraFX
{
    S32 type;
    S32 flags;
    F32 elapsedTime;
    F32 maxTime;
    union
    {
        cameraFXShake shake;
        cameraFXZoom zoom;
    };
};

#define CAMERAFX_TYPE_SHAKE 2

struct cameraFXTableEntry
{
    S32 type;
    void (*func)(cameraFX*, F32, xMat4x3*, xMat4x3*);
    void (*funcKill)(cameraFX*);
};

extern F32 _764;
extern F32 _765;
extern F32 _766;
extern F32 _785;
extern F32 _786;
extern F32 _787;
extern F32 _788;
extern F32 _789;
extern F32 _790;
extern F32 _830;
extern F32 _831;
extern F32 _873;
extern F32 _874;
extern F32 _880;
extern F32 _888;
extern F32 _895;
extern F32 _1234;
extern F32 _1235;
extern F32 _1236;
extern F32 _1237;
extern F32 _1238;
extern F32 _1239;
extern F32 _1240;
extern F32 _1241;
extern F32 _1242;
extern F32 _1283;
extern F64 _1286;
extern F32 _1404;
extern F32 _1405;
extern F32 _1534;
extern F32 _1584;
extern F32 _1585;
extern F32 _1586;
extern F32 _1757;
extern F32 _1758;
extern F32 _1766;
extern F32 _1772;

extern S32 sCamCollis;
extern volatile S32 xcam_collis_owner_disable;
extern S32 xcam_do_collis;
extern F32 xcam_collis_radius;
extern F32 xcam_collis_stiffness;
extern RpAtomic* sInvisWallHack;
extern xMat4x3 sCameraFXMatOld;
extern cameraFX sCameraFX[10];
extern cameraFXTableEntry sCameraFXTable[3];

static void xCameraFXInit();
void add_camera_tweaks();

void xCameraInit(xCamera* cam, U32 width, U32 height)
{
    xCameraFXInit();

    cam->lo_cam = iCameraCreate(width, height, 1);

    xCameraSetFOV(cam, _764);

    cam->bound.sph.center.x = _765;
    cam->bound.sph.center.y = _765;
    cam->bound.sph.center.z = _765;
    cam->bound.sph.r = _766;
    cam->tgt_mat = NULL;
    cam->tgt_omat = NULL;
    cam->tgt_bound = NULL;
    cam->sc = NULL;
    cam->tran_accum.x = _765;
    cam->tran_accum.y = _765;
    cam->tran_accum.z = _765;

    add_camera_tweaks();
}

void add_camera_tweaks()
{
}

void xCameraExit(xCamera* cam)
{
    if (cam->lo_cam)
    {
        iCameraDestroy(cam->lo_cam);
        cam->lo_cam = NULL;
    }
}

void xCameraReset(xCamera* cam, F32 d, F32 h, F32 pitch)
{
    sInvisWallHack = (RpAtomic*)xSTFindAsset(0xB8895D14, NULL);

    xMat4x3Identity(&cam->mat);

    cam->omat = cam->mat;
    cam->focus.x = _765;
    cam->focus.y = _765;
    cam->focus.z = _785;
    cam->tran_accum.x = _765;
    cam->tran_accum.y = _765;
    cam->tran_accum.z = _765;
    cam->flags = 0;

    F32 goal_p = _786;

    if (cam->tgt_mat)
    {
        goal_p += xatan2(cam->tgt_mat->at.x, cam->tgt_mat->at.z);
    }

    xCameraMove(cam, 0x2E, d, h, goal_p, _765, _787, _787);

    cam->pitch_goal = pitch;
    cam->pitch_cur = pitch;
    cam->roll_cur = _765;

    xMat3x3Euler(&cam->mat, cam->yaw_cur, cam->pitch_cur, cam->roll_cur);

    cam->omat = cam->mat;
    cam->yaw_ct = _788;
    cam->yaw_cd = _788;
    cam->yaw_ccv = _789;
    cam->yaw_csv = _788;
    cam->pitch_ct = _788;
    cam->pitch_cd = _788;
    cam->pitch_ccv = _790;
    cam->pitch_csv = _788;
    cam->roll_ct = _788;
    cam->roll_cd = _788;
    cam->roll_ccv = _790;
    cam->roll_csv = _788;
    cam->flags |= 0x80;

    xcam_do_collis = 1;
    xcam_collis_owner_disable = 0;
}

static void xCam_buildbasis(xCamera* cam)
{
    if (cam->tgt_mat)
    {
        F32 d2d;
        F32 dx__ = cam->mat.pos.x - cam->tgt_mat->pos.x;
        F32 dz__ = cam->mat.pos.z - cam->tgt_mat->pos.z;

        F32 dist2 = SQR(dx__) + SQR(dz__);
        F32 dist_inv;

        if ((F32)iabs(dist2 - _788) <= _830)
        {
            cam->mbasis.at.x = dx__;
            cam->mbasis.at.z = dz__;

            d2d = _788;
        }
        else if ((F32)iabs(dist2) <= _830)
        {
            cam->mbasis.at.x = _765;
            cam->mbasis.at.z = _765;

            d2d = _765;
        }
        else
        {
            d2d = xsqrt(dist2);
            dist_inv = _788 / d2d;

            cam->mbasis.at.x = dx__ * dist_inv;
            cam->mbasis.at.z = dz__ * dist_inv;
        }

        if (d2d < _830)
        {
            cam->mbasis.at.x = cam->mat.at.x;
            cam->mbasis.at.z = cam->mat.at.z;

            dist2 = xsqrt(SQR(cam->mbasis.at.x) + SQR(cam->mbasis.at.z));

            if (dist2 > _831)
            {
                // non-matching: wrong registers
                dist_inv = _788 / dist2;

                cam->mbasis.at.x *= dist_inv;
                cam->mbasis.at.z *= dist_inv;
            }
            else
            {
                cam->mbasis.at.x = isin(cam->pcur);
                cam->mbasis.at.z = icos(cam->pcur);
            }
        }

        cam->mbasis.at.y = _765;
        cam->mbasis.up.x = _765;
        cam->mbasis.up.y = _788;
        cam->mbasis.up.z = _765;
        cam->mbasis.right.x = cam->mbasis.at.z;
        cam->mbasis.right.y = _765;
        cam->mbasis.right.z = -cam->mbasis.at.x;
    }
}

static void xCam_cyltoworld(xVec3* v, const xMat4x3* tgt_mat, F32 d, F32 h, F32 p, U32 flags)
{
    if (flags & 0x10)
    {
        v->y = h;
    }
    else
    {
        v->y = h + tgt_mat->pos.y;
    }

    if (flags & 0x20)
    {
        v->x = d * isin(p) + tgt_mat->pos.x;
        v->z = d * icos(p) + tgt_mat->pos.z;
    }
    else
    {
        p += xatan2(tgt_mat->at.x, tgt_mat->at.z);

        v->x = d * isin(p) + tgt_mat->pos.x;
        v->z = d * icos(p) + tgt_mat->pos.z;
    }
}

static void xCam_worldtocyl(F32& d, F32& h, F32& p, const xMat4x3* tgt_mat, const xVec3* v,
                            U32 flags)
{
    F32 lx, lz;

    F32 dx__ = v->x - tgt_mat->pos.x;
    F32 dz__ = v->z - tgt_mat->pos.z;

    F32 dist2 = SQR(dx__) + SQR(dz__);
    F32 dist_inv;

    if ((F32)iabs(dist2 - _788) <= _830)
    {
        lx = dx__;
        lz = dz__;
        d = _788;
    }
    else if ((F32)iabs(dist2) <= _830)
    {
        d = lz = lx = _765;
    }
    else
    {
        d = xsqrt(dist2);

        dist_inv = _788 / d;

        lx = dx__ * dist_inv;
        lz = dz__ * dist_inv;
    }

    if (flags & 0x10)
    {
        h = v->y;
    }
    else
    {
        h = v->y - tgt_mat->pos.y;
    }

    p = xatan2(lx, lz);

    if (!(flags & 0x20))
    {
        F32 tgt_p = p - xatan2(tgt_mat->at.x, tgt_mat->at.z);

        p = xDangleClamp(tgt_p);
    }
}

static void xCam_CorrectD(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    // non-matching: incorrect float register

    F32 tmp1, tmp2, tmp3;

    tmp1 = _873 * (_874 * f1 - f2 * f3);
    tmp1 -= f2;
    tmp1 *= f3;

    tmp2 = r3->mbasis.at.x * tmp1;
    tmp3 = r3->mbasis.at.z * tmp1;

    r3->mat.pos.x += tmp2;
    r3->mat.pos.z += tmp3;
}

static void xCam_CorrectH(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    F32 tmp;

    f2 = _880 * f2;

    tmp = _873 * -(f2 * f3 - f1);
    tmp -= f2;
    tmp *= f3;

    r3->mat.pos.y += tmp;
}

static void xCam_CorrectP(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    F32 tmp1, tmp2, tmp3;

    f2 = _880 * f2;

    tmp1 = _888 * (_874 * f1 - f2 * f3);
    tmp1 -= f2;
    tmp1 *= f3;

    tmp2 = r3->mbasis.right.x * tmp1;
    tmp3 = r3->mbasis.right.z * tmp1;

    r3->mat.pos.x += tmp2;
    r3->mat.pos.z += tmp3;
}

static void xCam_DampP(xCamera* r3, F32 f1, F32 f2)
{
    F32 tmp1, tmp2;

    f1 = _895 * f1;
    f2 = f1 * f2 * f2;

    tmp1 = r3->mbasis.right.x * f2;
    tmp2 = r3->mbasis.right.z * f2;

    r3->mat.pos.x += tmp1;
    r3->mat.pos.z += tmp2;
}
static void xCam_CorrectYaw(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    // non-matching: incorrect float registers, slightly out-of-order fmsubs instruction

    F32 tmp1, tmp2;

    tmp1 = _788 / r3->yaw_ct;

    tmp2 = _874 * r3->yaw_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->yaw_csv * f3;

    r3->yaw_cur += tmp2;
}
static void xCam_CorrectPitch(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    // non-matching: same reasons as xCam_CorrectYaw

    F32 tmp1, tmp2;

    tmp1 = _788 / r3->pitch_ct;

    tmp2 = _874 * r3->pitch_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->pitch_csv * f3;

    r3->pitch_cur += tmp2;
}

static void xCam_CorrectRoll(xCamera* r3, F32 f1, F32 f2, F32 f3)
{
    // non-matching: same reasons as xCam_CorrectYaw

    F32 tmp1, tmp2;

    tmp1 = _788 / r3->roll_ct;

    tmp2 = _874 * r3->roll_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->roll_csv * f3;

    r3->roll_cur += tmp2;
}

void SweptSphereHitsCameraEnt(xScene*, xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
    xSweptSphere* sws = (xSweptSphere*)data;

    if (ent->camcollModel && ent->chkby & 0x10 && xQuickCullIsects(qcd, &ent->bound.qcd))
    {
        if (!xEntIsVisible(ent))
        {
            if (ent->model->Data != sInvisWallHack)
            {
                return;
            }

            if (ent->collLev != 5)
            {
                if (ent->bound.type == XBOUND_TYPE_BOX)
                {
                    xSweptSphereToBox(sws, &ent->bound.box.box, NULL);
                    return;
                }
                else if (ent->bound.type == XBOUND_TYPE_OBB)
                {
                    xSweptSphereToBox(sws, &ent->bound.box.box, ent->bound.mat);
                    return;
                }
                else
                {
                    return;
                }
            }
        }

        U32 result = 0;

        switch (ent->bound.type)
        {
        case XBOUND_TYPE_SPHERE:
        {
            F32 oldrad = ent->bound.sph.r;

            ent->bound.sph.r += sws->radius;

            result = xRayHitsSphereFast(ray, &ent->bound.sph);

            ent->bound.sph.r = oldrad;

            break;
        }
        case XBOUND_TYPE_BOX:
        {
            xBox tmpbox;
            tmpbox.upper.x = ent->bound.box.box.upper.x + sws->radius;
            tmpbox.upper.y = ent->bound.box.box.upper.y + sws->radius;
            tmpbox.upper.z = ent->bound.box.box.upper.z + sws->radius;
            tmpbox.lower.x = ent->bound.box.box.lower.x - sws->radius;
            tmpbox.lower.y = ent->bound.box.box.lower.y - sws->radius;
            tmpbox.lower.z = ent->bound.box.box.lower.z - sws->radius;

            result = xRayHitsBoxFast(ray, &tmpbox);

            break;
        }
        case XBOUND_TYPE_OBB:
        {
            xBox tmpbox;
            xRay3 lr;
            xMat3x3 mn;

            F32 f31 = xVec3Length(&ent->bound.mat->right);

            xMat3x3Normalize(&mn, ent->bound.mat);
            xMat4x3Tolocal(&lr.origin, ent->bound.mat, &ray->origin);
            xMat3x3Tolocal(&lr.dir, &mn, &ray->dir);

            lr.max_t = ray->max_t / f31;
            lr.min_t = ray->min_t / f31;
            lr.flags = ray->flags;

            tmpbox.upper.x = ent->bound.box.box.upper.x + sws->radius / f31;
            tmpbox.upper.y = ent->bound.box.box.upper.y + sws->radius / f31;
            tmpbox.upper.z = ent->bound.box.box.upper.z + sws->radius / f31;
            tmpbox.lower.x = ent->bound.box.box.lower.x - sws->radius / f31;
            tmpbox.lower.y = ent->bound.box.box.lower.y - sws->radius / f31;
            tmpbox.lower.z = ent->bound.box.box.lower.z - sws->radius / f31;

            result = xRayHitsBoxFast(&lr, &tmpbox);

            break;
        }
        }

        if (result)
        {
            xModelInstance* collmod = ent->camcollModel;

            xSweptSphereToModel(sws, collmod->Data, collmod->Mat);
        }
    }
}

static void _xCameraUpdate(xCamera* cam, F32 dt)
{
    // lol nope
}

void xCameraUpdate(xCamera* cam, F32 dt)
{
    S32 i;
    S32 num_updates;
    F32 sdt;

    num_updates = std::ceilf(_1283 * dt);

    sdt = dt / num_updates;

    for (i = 0; i < num_updates; i++)
    {
        sCamCollis = (i == num_updates - 1);

        _xCameraUpdate(cam, sdt);
    }
}

#ifndef INLINE
float std::ceilf(float x)
{
    return (float)ceil((double)x);
}
#endif

void xCameraBegin(xCamera* cam, S32 clear)
{
    iCameraBegin(cam->lo_cam, clear);
    iCameraFrustumPlanes(cam->lo_cam, cam->frustplane);
    iCameraUpdateFog(cam->lo_cam, 0);
}

void xCameraFXBegin(xCamera* cam)
{
    xMat4x3Identity(&sCameraFXMatOld);
    xMat4x3Copy(&sCameraFXMatOld, &cam->mat);
}

static void xCameraFXInit()
{
    memset(sCameraFX, 0, sizeof(sCameraFX));

    sCameraFX[0].flags = 0;
    sCameraFX[1].flags = 0;
    sCameraFX[2].flags = 0;
    sCameraFX[3].flags = 0;
    sCameraFX[4].flags = 0;
    sCameraFX[5].flags = 0;
    sCameraFX[6].flags = 0;
    sCameraFX[7].flags = 0;
    sCameraFX[8].flags = 0;
    sCameraFX[9].flags = 0;
}

cameraFX* xCameraFXAlloc()
{
    S32 i;
    cameraFX* f;

    for (i = 0; i < sizeof(sCameraFX) / sizeof(cameraFX); i++)
    {
        f = &sCameraFX[i];

        if (f->flags == 0)
        {
            // non-matching: _765 is only loaded once

            f->flags = 0x1;
            f->elapsedTime = _765;
            f->maxTime = _765;

            return f;
        }
    }

    return NULL;
}

void xCameraFXZoomUpdate(cameraFX* f, F32 dt, const xMat4x3*, xMat4x3* m)
{
    switch (f->zoom.mode)
    {
    case CAMERAFX_ZOOM_MODE_0:
    {
        f->zoom.velCur += f->zoom.accel * dt;
        f->zoom.distanceCur += f->zoom.velCur * dt;

        if (f->zoom.distanceCur >= f->zoom.distance)
        {
            f->zoom.distanceCur = f->zoom.distance;
            f->zoom.mode = CAMERAFX_ZOOM_MODE_2;
            f->zoom.holdTimeCur = _765;
        }

        xMat4x3MoveLocalAt(m, f->zoom.distanceCur);

        break;
    }
    case CAMERAFX_ZOOM_MODE_2:
    {
        f->zoom.holdTimeCur += dt;

        if (f->zoom.holdTimeCur > f->zoom.holdTime)
        {
            f->zoom.mode = CAMERAFX_ZOOM_MODE_1;
            f->zoom.distanceCur = f->zoom.distance;
            f->zoom.velCur = f->zoom.vel;
        }

        xMat4x3MoveLocalAt(m, f->zoom.distance);

        break;
    }
    case CAMERAFX_ZOOM_MODE_1:
    {
        f->zoom.velCur += f->zoom.accel * dt;
        f->zoom.distanceCur -= f->zoom.velCur * dt;

        if (f->zoom.distanceCur <= 0.0f)
        {
            f->zoom.distanceCur = 0.0f;
            f->zoom.mode = CAMERAFX_ZOOM_MODE_3;
            f->flags |= 0x2;
        }

        xMat4x3MoveLocalAt(m, f->zoom.distanceCur);

        break;
    }
    case CAMERAFX_ZOOM_MODE_3:
    {
        break;
    }
    }
}

void xCameraFXShake(F32 maxTime, F32 magnitude, F32 cycleMax, F32 rotate_magnitude, F32 radius,
                    xVec3* epicenter, xVec3* player)
{
    cameraFX* f = xCameraFXAlloc();

    if (f)
    {
        f->type = CAMERAFX_TYPE_SHAKE;
        f->maxTime = maxTime;
        f->shake.magnitude = magnitude;
        f->shake.dir.x = _788;
        f->shake.dir.y = _788;
        f->shake.cycleMax = cycleMax;
        f->shake.cycleTime = _765;
        f->shake.dampen = _765;
        f->shake.dampenRate = _788 / maxTime;
        f->shake.rotate_magnitude = rotate_magnitude;
        f->shake.radius = radius;
        f->shake.epicenterP = epicenter;

        if (f->shake.epicenterP)
        {
            f->shake.epicenter = *f->shake.epicenterP;
        }

        f->shake.player = player;
    }
}

void xCameraFXShakeUpdate(cameraFX* f, F32 dt, const xMat4x3*, xMat4x3* m)
{
    F32 x, y, scale, noise;
    xVec3 var_4C, e;

    f->shake.cycleTime += dt;

    while (f->shake.cycleTime > f->shake.cycleMax)
    {
        f->shake.dir.x = -f->shake.dir.x;
        f->shake.dir.y = -f->shake.dir.y;
        f->shake.cycleTime -= f->shake.cycleMax;
    }

    scale = f->shake.dampenRate * (f->maxTime - f->elapsedTime);
    noise = _1404 * (xurand() - _766);

    if (f->shake.radius > _765 && f->shake.player)
    {
        xVec3Sub(&var_4C, f->shake.player, &f->shake.epicenter);

        F32 f1 = var_4C.length();

        if (f1 > f->shake.radius)
        {
            scale = _765;
        }
        else
        {
            scale *= icos(f1 / f->shake.radius * _786 * _766);
        }
    }

    x = (f->shake.magnitude + noise) * f->shake.dir.x * scale / f->shake.cycleMax *
        f->shake.cycleTime * isin(f->shake.cycleTime / f->shake.cycleMax * _786);

    noise = _1404 * (xurand() - _766);

    y = (f->shake.magnitude + noise) * f->shake.dir.y * scale / f->shake.cycleMax *
        f->shake.cycleTime * isin(f->shake.cycleTime / f->shake.cycleMax * _786);

    xMat4x3MoveLocalRight(m, x);
    xMat4x3MoveLocalUp(m, y);

    xMat3x3GetEuler(m, &e);

    e.z +=
        f->shake.cycleTime / f->shake.cycleMax * _1405 * _1404 * scale * f->shake.rotate_magnitude;

    xMat3x3Euler(m, &e);
}

void xCameraFXUpdate(xCamera* cam, F32 dt)
{
    S32 i;
    cameraFX* f;
    cameraFXTableEntry* t;

    for (i = 0; i < 10; i++)
    {
        f = &sCameraFX[i];

        if (f->flags & 0x1)
        {
            f->elapsedTime += dt;

            // non-matching: _765 is loaded too early

            if ((f->maxTime > _765 && f->elapsedTime > f->maxTime) || f->flags & 0x2)
            {
                f->flags = 0;

                t = &sCameraFXTable[f->type];

                if (t->funcKill)
                {
                    t->funcKill(f);
                }
            }
            else
            {
                t = &sCameraFXTable[f->type];

                if (t->func)
                {
                    t->func(f, dt, &sCameraFXMatOld, &cam->mat);
                }
            }
        }
    }

    iCameraUpdatePos(cam->lo_cam, &cam->mat);
}

void xCameraFXEnd(xCamera* cam)
{
    xMat4x3Copy(&cam->mat, &sCameraFXMatOld);
    iCameraUpdatePos(cam->lo_cam, &sCameraFXMatOld);
}

void xCameraEnd(xCamera* cam, F32 seconds, S32 update_scrn_fx)
{
    if (update_scrn_fx)
    {
        xScrFxUpdate(cam->lo_cam, seconds);
    }

    iCameraEnd(cam->lo_cam);
}

void xCameraShowRaster(xCamera* cam)
{
    iCameraShowRaster(cam->lo_cam);
}

void xCameraSetScene(xCamera* cam, xScene* sc)
{
    cam->sc = sc;

    iCameraAssignEnv(cam->lo_cam, sc->env->geom);
}

void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
    cam->tgt_mat = mat;
}

void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
    cam->tgt_omat = mat;
}

void xCameraDoCollisions(S32 do_collis, S32 owner)
{
    xcam_collis_owner_disable &= ~(1 << owner);
    xcam_collis_owner_disable |= !do_collis << owner;

    xcam_do_collis = (xcam_collis_owner_disable == 0);
}

void xCameraMove(xCamera* cam, U32 flags, F32 dgoal, F32 hgoal, F32 pgoal, F32 tm, F32 tm_acc,
                 F32 tm_dec)
{
    cam->flags = (cam->flags & ~0x3E) | (flags & 0x3E);
    cam->dgoal = dgoal;
    cam->hgoal = hgoal;
    cam->pgoal = pgoal;

    if (tm <= _765)
    {
        if (cam->tgt_mat)
        {
            cam->dcur = dgoal;
            cam->hcur = hgoal;
            cam->pcur = pgoal;

            xCam_cyltoworld(&cam->mat.pos, cam->tgt_mat, dgoal, hgoal, pgoal, cam->flags);

            cam->omat.pos = cam->mat.pos;
            cam->yaw_cur = cam->yaw_goal = cam->pcur + ((cam->pcur >= _786) ? _1534 : _786);
        }
    }
    else
    {
        cam->flags |= 0x1;
        cam->tm_acc = tm - tm_acc;
        cam->tm_dec = tm_dec;
        cam->tmr = tm;

        F32 s = _788 / (tm - _766 * (tm_acc - tm_dec));

        cam->depv = s * (dgoal - cam->dcur);
        cam->hepv = s * (hgoal - cam->hcur);
        cam->pepv = xDangleClamp(pgoal - cam->pcur) * s * _766 * (dgoal + cam->dcur);
    }
}

void xCameraMove(xCamera* cam, const xVec3& loc)
{
    cam->omat.pos = cam->mat.pos = loc;
    cam->flags &= ~0x3E;
    cam->tm_acc = cam->tm_dec = cam->tmr = _765;
}

void xCameraMove(xCamera* cam, const xVec3& loc, F32 maxSpeed)
{
    xVec3 var_28;
    F32 f1;

    xVec3Sub(&var_28, &loc, &cam->mat.pos);

    f1 = xVec3Length(&var_28);

    if (f1 > maxSpeed)
    {
        xVec3SMul(&var_28, &var_28, maxSpeed / f1);
        xVec3Add(&cam->mat.pos, &cam->mat.pos, &var_28);
    }
    else
    {
        cam->mat.pos = loc;
    }

    cam->omat.pos = cam->mat.pos;
    cam->flags &= ~0x3E;
    cam->tm_acc = cam->tm_dec = cam->tmr = _765;
}

void xCameraFOV(xCamera* cam, F32 fov, F32 maxSpeed, F32 dt)
{
    F32 speed = maxSpeed * dt;
    F32 currentFOV = xCameraGetFOV(cam);

    if (currentFOV != fov)
    {
        if (speed != _765)
        {
            F32 len = fov - currentFOV;

            if ((F32)iabs(len) > speed)
            {
                len *= speed / len;
                xCameraSetFOV(cam, currentFOV + len);
            }
            else
            {
                xCameraSetFOV(cam, fov);
            }
        }
        else
        {
            xCameraSetFOV(cam, fov);
        }
    }
}

void xCameraLook(xCamera* cam, U32 flags, const xQuat* orn_goal, F32 tm, F32 tm_acc, F32 tm_dec)
{
    F32 s; // unused

    cam->flags = (cam->flags & ~0xF80) | (flags & 0xF80);
    cam->orn_goal = *orn_goal;

    if (tm <= _765)
    {
        if (cam->tgt_mat)
        {
            xQuatToMat(orn_goal, &cam->mat);

            *(xMat3x3*)&cam->omat = *(xMat3x3*)&cam->mat;
        }
    }
    else
    {
        cam->flags |= 0x40;
        cam->ltm_acc = tm - tm_acc;
        cam->ltm_dec = tm_dec;
        cam->ltmr = tm;

        xQuatDiff(&cam->orn_diff, &cam->orn_cur, orn_goal);

        cam->orn_epv = _788 / (tm - _766 * (tm_acc - tm_dec)) * xQuatGetAngle(&cam->orn_diff);
    }
}

void xCameraLookYPR(xCamera* cam, U32 flags, F32 yaw, F32 pitch, F32 roll, F32 tm, F32 tm_acc,
                    F32 tm_dec)
{
    cam->flags = (cam->flags & ~0xF80) | (flags & 0xF80) | 0x80;
    cam->yaw_goal = yaw;
    cam->pitch_goal = pitch;
    cam->roll_goal = roll;

    if (tm <= _765)
    {
        if (cam->tgt_mat)
        {
            cam->yaw_cur = yaw;
            cam->pitch_cur = pitch;
            cam->roll_cur = roll;

            xMat3x3Euler(&cam->mat, yaw, pitch, roll);

            *(xMat3x3*)&cam->omat = *(xMat3x3*)&cam->mat;
        }
    }
    else
    {
        cam->flags |= 0x40;
        cam->ltm_acc = tm - tm_acc;
        cam->ltm_dec = tm_dec;
        cam->ltmr = tm;

        F32 s = _788 / (tm - _766 * (tm_acc - tm_dec));

        cam->yaw_epv = s * xDangleClamp(yaw - cam->yaw_cur);
        cam->pitch_epv = s * xDangleClamp(pitch - cam->pitch_cur);
        cam->roll_epv = s * xDangleClamp(roll - cam->roll_cur);
    }
}

void xCameraRotate(xCamera* cam, const xMat3x3& m, F32 time, F32 accel, F32 decl)
{
    xVec3 eu;

    cam->flags = cam->flags & ~0xF80 | 0x80;

    xMat3x3GetEuler(&m, &eu);

    cam->yaw_goal = eu.x;
    cam->pitch_goal = eu.y;
    cam->roll_goal = eu.z;

    if (_765 == time)
    {
        cam->yaw_cur = eu.x;
        cam->pitch_cur = eu.y;
        cam->roll_cur = eu.z;
    }

    *(xMat3x3*)&cam->mat = m;

    if (_765 == time)
    {
        *(xMat3x3*)&cam->omat = m;
    }

    if (_765 == time)
    {
        cam->ltm_acc = cam->ltm_dec = cam->ltmr = _765;
    }
    else
    {
        cam->ltm_acc = accel;
        cam->ltm_dec = decl;
        cam->ltmr = time;
    }

    cam->yaw_epv = cam->pitch_epv = cam->roll_epv = _765;
}

void xCameraRotate(xCamera* cam, const xVec3& v, F32 roll, F32 time, F32 accel, F32 decl)
{
    cam->yaw_goal = xatan2(v.x, v.z);
    cam->pitch_goal = -xasin(v.y);
    cam->roll_goal = roll;

    if (_765 == time)
    {
        cam->yaw_cur = cam->yaw_goal;
        cam->pitch_cur = cam->pitch_goal;
        cam->roll_cur = cam->roll_goal;
    }

    cam->flags = cam->flags & ~0xF80 | 0x80;

    xMat3x3Euler(&cam->mat, cam->yaw_goal, cam->pitch_goal, cam->roll_goal);

    if (_765 == time)
    {
        *(xMat3x3*)&cam->omat = *(xMat3x3*)&cam->mat;
    }

    if (_765 == time)
    {
        cam->ltm_acc = cam->ltm_dec = cam->ltmr = _765;
    }
    else
    {
        cam->ltm_acc = accel;
        cam->ltm_dec = decl;
        cam->ltmr = time;
    }

    cam->yaw_epv = cam->pitch_epv = cam->roll_epv = _765;
}

F32 xasin(F32 x)
{
    return std::asinf(x);
}

#ifndef INLINE
float std::asinf(float x)
{
    return (float)asin((double)x);
}
#endif

static void bound_sphere_xz(xVec3& r3, xVec3& r4, const xVec3& r5, F32 f1, const xVec3& r6, F32 f2)
{
    // non-matching: incorrect registers and out-of-order instructions
    F32 _f31 = f1 / f2;
    F32 _f3 = _f31 / xsqrt(SQR(f2) - SQR(f1));
    F32 _f5 = f1 * _f31;
    F32 _f7 = _f3 * r6.z;
    F32 _f8 = _f5 * r6.x;
    F32 _f6 = _f3 * r6.x;
    F32 _f5_2 = _f5 * r6.z;

    r3.x = r5.x + _f7 + _f8;
    r3.y = r5.y;
    r3.z = r5.z - _f6 + _f5_2;

    r4.x = r5.x - _f7 + _f8;
    r4.y = r5.y;
    r4.z = r5.z + _f6 + _f5_2;
}

void xBinaryCamera::init()
{
    this->camera = NULL;
    this->s2 = NULL;
    this->s1 = NULL;
}

void xBinaryCamera::start(xCamera& camera)
{
    this->camera = &camera;

    xQuatFromMat(&this->cam_dir, &camera.mat);

    this->stick_offset = _765;
}

void xBinaryCamera::stop()
{
    this->camera = NULL;
}

void xBinaryCamera::update(F32 dt)
{
}

void xCameraSetFOV(xCamera* cam, F32 fov)
{
    cam->fov = fov;

    iCameraSetFOV(cam->lo_cam, fov);
}

F32 xCameraGetFOV(const xCamera* cam)
{
    return cam->fov;
}

void xBinaryCamera::render_debug()
{
}

void xMat4x3Identity(xMat4x3* m)
{
    xMat4x3Copy(m, &g_I3);
}

void xMat4x3Copy(xMat4x3* o, const xMat4x3* m)
{
    memcpy(o, m, sizeof(xMat4x3));
}

void xQuatConj(xQuat* o, const xQuat* q)
{
    o->s = q->s;

    xVec3Inv(&o->v, &q->v);
}

void xMat3x3LookAt(xMat3x3* m, const xVec3* pos, const xVec3* at)
{
    xVec3 v;

    xVec3Sub(&v, at, pos);
    xMat3x3LookVec(m, &v);
}

F32 xQuatGetAngle(const xQuat* q)
{
    if (q->s > _1584)
    {
        return _765;
    }
    else if (q->s < _1586)
    {
        return _1585;
    }
    else
    {
        return _874 * xacos(q->s);
    }
}

U32 xEntIsVisible(const xEnt* ent)
{
    return (ent->flags & 0x81) == 0x1;
}

F32 xVec3Length(const xVec3* v)
{
    return xsqrt(SQR(v->x) + SQR(v->y) + SQR(v->z));
}

void xVec3Sub(xVec3* o, const xVec3* a, const xVec3* b)
{
    o->x = a->x - b->x;
    o->y = a->y - b->y;
    o->z = a->z - b->z;
}

void xVec3Inv(xVec3* o, const xVec3* v)
{
    o->x = -v->x;
    o->y = -v->y;
    o->z = -v->z;
}

F32 xacos(F32 x)
{
    return std::acosf(x);
}

#ifndef INLINE
float std::acosf(float x)
{
    return (float)acos((double)x);
}
#endif

void xVec3AddTo(xVec3* o, const xVec3* v)
{
    o->x += v->x;
    o->y += v->y;
    o->z += v->z;
}

xVec3& xVec3::invert()
{
    this->x = -this->x;
    this->y = -this->y;
    this->z = -this->z;

    return *this;
}

F32 xexp(F32 x)
{
    return std::expf(x);
}

#ifndef INLINE
float std::expf(float x)
{
    return (float)exp((double)x);
}
#endif

F32 xrmod(F32 ang)
{
    F32 frac = _1766 * ang;

    if (frac < _765)
    {
        return (frac - std::ceilf(frac) + _788) * _1585;
    }
    else if (frac >= _788)
    {
        return (frac - std::floorf(frac)) * _1585;
    }

    return ang;
}

xVec3& xVec3::operator/=(F32 f)
{
    F32 f2 = _788;

    this->x *= f2 / f;
    this->y *= f2 / f;
    this->z *= f2 / f;

    return *this;
}

xVec3& xVec3::right_normalize()
{
    return this->safe_normalize(xVec3::m_UnitAxisX);
}

xVec3& xVec3::safe_normalize(const xVec3& val)
{
    F32 len = this->length2();

    if (len < _1772)
    {
        return (*this = val);
    }
    else
    {
        return (*this *= _788 / xsqrt(len));
    }
}

template <> F32 range_limit<F32>(F32 v, F32 minv, F32 maxv)
{
    if (v <= minv)
    {
        return minv;
    }

    if (v >= maxv)
    {
        return maxv;
    }

    return v;
}

xVec2& xVec2::operator=(F32 f)
{
    this->x = this->y = f;

    return *this;
}
