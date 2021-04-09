#include "xCamera.h"

#include "xstransvc.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xScene.h"
#include "xCollideFast.h"
#include "xScrFx.h"

#include "../p2/iMath.h"

#include <cmath>
#include <cstring>

struct cameraFXShake
{
    float32 magnitude;
    xVec3 dir;
    float32 cycleTime;
    float32 cycleMax;
    float32 dampen;
    float32 dampenRate;
    float32 rotate_magnitude;
    float32 radius;
    xVec3* epicenterP;
    xVec3 epicenter;
    xVec3* player;
};

struct cameraFXZoom
{
    float32 holdTime;
    float32 vel;
    float32 accel;
    float32 distance;
    uint32 mode;
    float32 velCur;
    float32 distanceCur;
    float32 holdTimeCur;
};

#define CAMERAFX_ZOOM_MODE_0 0
#define CAMERAFX_ZOOM_MODE_1 1
#define CAMERAFX_ZOOM_MODE_2 2
#define CAMERAFX_ZOOM_MODE_3 3

struct cameraFX
{
    int32 type;
    int32 flags;
    float32 elapsedTime;
    float32 maxTime;
    union
    {
        cameraFXShake shake;
        cameraFXZoom zoom;
    };
};

#define CAMERAFX_TYPE_SHAKE 2

struct cameraFXTableEntry
{
    int32 type;
    void (*func)(cameraFX*, float32, xMat4x3*, xMat4x3*);
    void (*funcKill)(cameraFX*);
};

extern float32 _764;
extern float32 _765;
extern float32 _766;
extern float32 _785;
extern float32 _786;
extern float32 _787;
extern float32 _788;
extern float32 _789;
extern float32 _790;
extern float32 _830;
extern float32 _831;
extern float32 _873;
extern float32 _874;
extern float32 _880;
extern float32 _888;
extern float32 _895;
extern float32 _1234;
extern float32 _1235;
extern float32 _1236;
extern float32 _1237;
extern float32 _1238;
extern float32 _1239;
extern float32 _1240;
extern float32 _1241;
extern float32 _1242;
extern float32 _1283;
extern float64 _1286;
extern float32 _1404;
extern float32 _1405;
extern float32 _1534;
extern float32 _1584;
extern float32 _1585;
extern float32 _1586;
extern float32 _1757;
extern float32 _1758;
extern float32 _1766;
extern float32 _1772;

extern int32 sCamCollis;
extern volatile int32 xcam_collis_owner_disable;
extern int32 xcam_do_collis;
extern float32 xcam_collis_radius;
extern float32 xcam_collis_stiffness;
extern RpAtomic* sInvisWallHack;
extern xMat4x3 sCameraFXMatOld;
extern cameraFX sCameraFX[10];
extern cameraFXTableEntry sCameraFXTable[3];

static void xCameraFXInit();
void add_camera_tweaks();

void xCameraInit(xCamera* cam, uint32 width, uint32 height)
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

void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch)
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

    float32 goal_p = _786;

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

xMat4x3& xMat4x3::operator=(const xMat4x3& other) // temp
{
    xMat3x3::operator=(other);

    *(uint32*)&this->pos.x = *(uint32*)&other.pos.x;
    *(uint32*)&this->pos.y = *(uint32*)&other.pos.y;
    *(uint32*)&this->pos.z = *(uint32*)&other.pos.z;
    *(uint32*)&this->pad3 = *(uint32*)&other.pad3;

    return *this;
}

xMat3x3& xMat3x3::operator=(const xMat3x3& other) // temp
{
    *(uint32*)&this->right.x = *(uint32*)&other.right.x;
    *(uint32*)&this->right.y = *(uint32*)&other.right.y;
    *(uint32*)&this->right.z = *(uint32*)&other.right.z;
    *(uint32*)&this->flags = *(uint32*)&other.flags;
    *(uint32*)&this->up.x = *(uint32*)&other.up.x;
    *(uint32*)&this->up.y = *(uint32*)&other.up.y;
    *(uint32*)&this->up.z = *(uint32*)&other.up.z;
    *(uint32*)&this->pad1 = *(uint32*)&other.pad1;
    *(uint32*)&this->at.x = *(uint32*)&other.at.x;
    *(uint32*)&this->at.y = *(uint32*)&other.at.y;
    *(uint32*)&this->at.z = *(uint32*)&other.at.z;
    *(uint32*)&this->pad2 = *(uint32*)&other.pad2;

    return *this;
}

#ifndef NON_MATCHING
// func_8000B62C
static void xCam_buildbasis(xCamera* cam);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_buildbasis__FP7xCamera")
#else
static void xCam_buildbasis(xCamera* cam)
{
    if (cam->tgt_mat)
    {
        float32 d2d;
        float32 dx__ = cam->mat.pos.x - cam->tgt_mat->pos.x;
        float32 dz__ = cam->mat.pos.z - cam->tgt_mat->pos.z;

        float32 dist2 = SQR(dx__) + SQR(dz__);
        float32 dist_inv;

        if ((float32)iabs(dist2 - _788) <= _830)
        {
            cam->mbasis.at.x = dx__;
            cam->mbasis.at.z = dz__;

            d2d = _788;
        }
        else if ((float32)iabs(dist2) <= _830)
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
#endif

static void xCam_cyltoworld(xVec3* v, const xMat4x3* tgt_mat, float32 d, float32 h, float32 p,
                            uint32 flags)
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

static void xCam_worldtocyl(float32& d, float32& h, float32& p, const xMat4x3* tgt_mat,
                            const xVec3* v, uint32 flags)
{
    float32 lx, lz;

    float32 dx__ = v->x - tgt_mat->pos.x;
    float32 dz__ = v->z - tgt_mat->pos.z;

    float32 dist2 = SQR(dx__) + SQR(dz__);
    float32 dist_inv;

    if ((float32)iabs(dist2 - _788) <= _830)
    {
        lx = dx__;
        lz = dz__;
        d = _788;
    }
    else if ((float32)iabs(dist2) <= _830)
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
        float32 tgt_p = p - xatan2(tgt_mat->at.x, tgt_mat->at.z);

        p = xDangleClamp(tgt_p);
    }
}

#ifndef NON_MATCHING
// func_8000B9F0
static void xCam_CorrectD(xCamera* r3, float32 f1, float32 f2, float32 f3);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectD__FP7xCamerafff")
#else
static void xCam_CorrectD(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    // non-matching: incorrect float register

    float32 tmp1, tmp2, tmp3;

    tmp1 = _873 * (_874 * f1 - f2 * f3);
    tmp1 -= f2;
    tmp1 *= f3;

    tmp2 = r3->mbasis.at.x * tmp1;
    tmp3 = r3->mbasis.at.z * tmp1;

    r3->mat.pos.x += tmp2;
    r3->mat.pos.z += tmp3;
}
#endif

static void xCam_CorrectH(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    float32 tmp;

    f2 = _880 * f2;

    tmp = _873 * -(f2 * f3 - f1);
    tmp -= f2;
    tmp *= f3;

    r3->mat.pos.y += tmp;
}

static void xCam_CorrectP(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    float32 tmp1, tmp2, tmp3;

    f2 = _880 * f2;

    tmp1 = _888 * (_874 * f1 - f2 * f3);
    tmp1 -= f2;
    tmp1 *= f3;

    tmp2 = r3->mbasis.right.x * tmp1;
    tmp3 = r3->mbasis.right.z * tmp1;

    r3->mat.pos.x += tmp2;
    r3->mat.pos.z += tmp3;
}

static void xCam_DampP(xCamera* r3, float32 f1, float32 f2)
{
    float32 tmp1, tmp2;

    f1 = _895 * f1;
    f2 = f1 * f2 * f2;

    tmp1 = r3->mbasis.right.x * f2;
    tmp2 = r3->mbasis.right.z * f2;

    r3->mat.pos.x += tmp1;
    r3->mat.pos.z += tmp2;
}

#ifndef NON_MATCHING
// func_8000BAF0
static void xCam_CorrectYaw(xCamera* r3, float32 f1, float32 f2, float32 f3);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectYaw__FP7xCamerafff")
#else
static void xCam_CorrectYaw(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    // non-matching: incorrect float registers, slightly out-of-order fmsubs instruction

    float32 tmp1, tmp2;

    tmp1 = _788 / r3->yaw_ct;

    tmp2 = _874 * r3->yaw_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->yaw_csv * f3;

    r3->yaw_cur += tmp2;
}
#endif

#ifndef NON_MATCHING
// func_8000BB34
static void xCam_CorrectPitch(xCamera* r3, float32 f1, float32 f2, float32 f3);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectPitch__FP7xCamerafff")
#else
static void xCam_CorrectPitch(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    // non-matching: same reasons as xCam_CorrectYaw

    float32 tmp1, tmp2;

    tmp1 = _788 / r3->pitch_ct;

    tmp2 = _874 * r3->pitch_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->pitch_csv * f3;

    r3->pitch_cur += tmp2;
}
#endif

#ifndef NON_MATCHING
// func_8000BB78
static void xCam_CorrectRoll(xCamera* r3, float32 f1, float32 f2, float32 f3);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCam_CorrectRoll__FP7xCamerafff")
#else
static void xCam_CorrectRoll(xCamera* r3, float32 f1, float32 f2, float32 f3)
{
    // non-matching: same reasons as xCam_CorrectYaw

    float32 tmp1, tmp2;

    tmp1 = _788 / r3->roll_ct;

    tmp2 = _874 * r3->roll_cd * f1 - f2 * f3;
    tmp2 = tmp1 * tmp2;
    tmp2 -= f2;
    tmp2 *= r3->roll_csv * f3;

    r3->roll_cur += tmp2;
}
#endif

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

        uint32 result = 0;

        switch (ent->bound.type)
        {
        case XBOUND_TYPE_SPHERE:
        {
            float32 oldrad = ent->bound.sph.r;

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

            float32 f31 = xVec3Length(&ent->bound.mat->right);

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

#ifndef NON_MATCHING
// func_8000BE28
static void _xCameraUpdate(xCamera* cam, float32 dt);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "_xCameraUpdate__FP7xCameraf")
#else
static void _xCameraUpdate(xCamera* cam, float32 dt)
{
    // lol nope
}
#endif

#ifndef NON_MATCHING
// func_8000BE28
void xCameraUpdate(xCamera* cam, float32 dt);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraUpdate__FP7xCameraf")
#else
void xCameraUpdate(xCamera* cam, float32 dt)
{
    int32 i;
    int32 num_updates;
    float32 sdt;

    num_updates = std::ceilf(_1283 * dt);

    // non-matching: int-to-float conversion
    sdt = dt / num_updates;

    for (i = 0; i < num_updates; i++)
    {
        sCamCollis = (i == num_updates - 1);

        _xCameraUpdate(cam, sdt);
    }
}
#endif

#ifndef INLINE
float std::ceilf(float x)
{
    return (float)ceil((double)x);
}
#endif

void xCameraBegin(xCamera* cam, int32 clear)
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

#ifndef NON_MATCHING
// func_8000CDE8
cameraFX* xCameraFXAlloc();
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXAlloc__Fv")
#else
cameraFX* xCameraFXAlloc()
{
    int32 i;
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
#endif

#ifndef NON_MATCHING
// func_8000CE30
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, const xMat4x3*, xMat4x3* m);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3")
#else
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, const xMat4x3*, xMat4x3* m)
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

        // non-matching: float registers swapped

        if (f->zoom.distanceCur <= _765)
        {
            f->zoom.distanceCur = _765;
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
#endif

void xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude,
                    float32 radius, xVec3* epicenter, xVec3* player)
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

void xCameraFXShakeUpdate(cameraFX* f, float32 dt, const xMat4x3*, xMat4x3* m)
{
    float32 x, y, scale, noise;
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

        float32 f1 = var_4C.length();

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

#ifndef NON_MATCHING
// func_8000D29C
void xCameraFXUpdate(xCamera* cam, float32 dt);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "xCameraFXUpdate__FP7xCameraf")
#else
void xCameraFXUpdate(xCamera* cam, float32 dt)
{
    int32 i;
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
#endif

void xCameraFXEnd(xCamera* cam)
{
    xMat4x3Copy(&cam->mat, &sCameraFXMatOld);
    iCameraUpdatePos(cam->lo_cam, &sCameraFXMatOld);
}

void xCameraEnd(xCamera* cam, float32 seconds, int32 update_scrn_fx)
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

// func_8000D4A0
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "__as__6xBoundFRC6xBound")

void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
    cam->tgt_mat = mat;
}

void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
    cam->tgt_omat = mat;
}

void xCameraDoCollisions(int32 do_collis, int32 owner)
{
    xcam_collis_owner_disable &= ~(1 << owner);
    xcam_collis_owner_disable |= !do_collis << owner;

    xcam_do_collis = (xcam_collis_owner_disable == 0);
}

void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal,
                 float32 tm, float32 tm_acc, float32 tm_dec)
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

        float32 s = _788 / (tm - _766 * (tm_acc - tm_dec));

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

void xCameraMove(xCamera* cam, const xVec3& loc, float32 maxSpeed)
{
    xVec3 var_28;
    float32 f1;

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

void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt)
{
    float32 speed = maxSpeed * dt;
    float32 currentFOV = xCameraGetFOV(cam);

    if (currentFOV != fov)
    {
        if (speed != _765)
        {
            float32 len = fov - currentFOV;

            if ((float32)iabs(len) > speed)
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

void xCameraLook(xCamera* cam, uint32 flags, const xQuat* orn_goal, float32 tm, float32 tm_acc,
                 float32 tm_dec)
{
    float32 s; // unused

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

void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll,
                    float32 tm, float32 tm_acc, float32 tm_dec)
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

        float32 s = _788 / (tm - _766 * (tm_acc - tm_dec));

        cam->yaw_epv = s * xDangleClamp(yaw - cam->yaw_cur);
        cam->pitch_epv = s * xDangleClamp(pitch - cam->pitch_cur);
        cam->roll_epv = s * xDangleClamp(roll - cam->roll_cur);
    }
}

void xCameraRotate(xCamera* cam, const xMat3x3& m, float32 time, float32 accel, float32 decl)
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

void xCameraRotate(xCamera* cam, const xVec3& v, float32 roll, float32 time, float32 accel,
                   float32 decl)
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

float32 xasin(float32 x)
{
    return std::asinf(x);
}

#ifndef INLINE
float std::asinf(float x)
{
    return (float)asin((double)x);
}
#endif

#ifndef NON_MATCHING
// func_8000DDBC
static void bound_sphere_xz(xVec3& r3, xVec3& r4, const xVec3& r5, float32 f1, const xVec3& r6,
                            float32 f2);
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "bound_sphere_xz__FR5xVec3R5xVec3RC5xVec3fRC5xVec3f")
#else
static void bound_sphere_xz(xVec3& r3, xVec3& r4, const xVec3& r5, float32 f1, const xVec3& r6,
                            float32 f2)
{
    // non-matching: incorrect registers and out-of-order instructions
    float32 _f31 = f1 / f2;
    float32 _f3 = _f31 / xsqrt(SQR(f2) - SQR(f1));
    float32 _f5 = f1 * _f31;
    float32 _f7 = _f3 * r6.z;
    float32 _f8 = _f5 * r6.x;
    float32 _f6 = _f3 * r6.x;
    float32 _f5_2 = _f5 * r6.z;

    r3.x = r5.x + _f7 + _f8;
    r3.y = r5.y;
    r3.z = r5.z - _f6 + _f5_2;

    r4.x = r5.x - _f7 + _f8;
    r4.y = r5.y;
    r4.z = r5.z + _f6 + _f5_2;
}
#endif

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

#ifndef NON_MATCHING
// func_8000DF04
#pragma GLOBAL_ASM("asm/Core/x/xCamera.s", "update__13xBinaryCameraFf")
#else
void xBinaryCamera::update(float32 dt)
{
    // lol nope
}
#endif

void xCameraSetFOV(xCamera* cam, float32 fov)
{
    cam->fov = fov;

    iCameraSetFOV(cam->lo_cam, fov);
}

float32 xCameraGetFOV(const xCamera* cam)
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

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

float32 xQuatGetAngle(const xQuat* q)
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

uint32 xEntIsVisible(const xEnt* ent)
{
    return (ent->flags & 0x81) == 0x1;
}

float32 xVec3Length(const xVec3* v)
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

xQuat& xQuat::operator=(const xQuat& other) // temp
{
    *(uint32*)&this->v.x = *(uint32*)&other.v.x;
    *(uint32*)&this->v.y = *(uint32*)&other.v.y;
    *(uint32*)&this->v.z = *(uint32*)&other.v.z;
    this->s = other.s;

    return *this;
}

float32 xacos(float32 x)
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

float32 xexp(float32 x)
{
    return std::expf(x);
}

#ifndef INLINE
float std::expf(float x)
{
    return (float)exp((double)x);
}
#endif

float32 xrmod(float32 ang)
{
    float32 frac = _1766 * ang;

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

xVec3& xVec3::operator/=(float32 f)
{
    float32 f2 = _788;

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
    float32 len = this->length2();

    if (len < _1772)
    {
        return (*this = val);
    }
    else
    {
        return (*this *= _788 / xsqrt(len));
    }
}

template <> float32 range_limit<float32>(float32 v, float32 minv, float32 maxv)
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

xVec2& xVec2::operator=(float32 f)
{
    this->x = this->y = f;

    return *this;
}