#include <types.h>
#include <stdio.h>
#include <string.h>

#include "iMath.h"
#include "iSnd.h"

#include "xDebug.h"
#include "xEnt.h"
#include "xEntBoulder.h"
#include "xEvent.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xMemMgr.h"
#include "xRay3.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xTRC.h"
#include "xVec3.h"
#include "xVec3Inlines.h"

#include "zBase.h"
#include "zCamera.h"
#include "zEntPlayer.h"
#include "zEntPlayerOOBState.h"
#include "zEntTeleportBox.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zLasso.h"
#include "zMusic.h"
#include "zNPCTypeTiki.h"
#include "zNPCTypeTiki.h"
#include "zNPCMessenger.h"
#include "zParPTank.h"
#include "zRumble.h"
#include "zSaveLoad.h"
#include "zThrown.h"

xMat4x3 gPlayerAbsMat;

static F32 sHackStuckTimer;
static xVec3 sHackStuckDir;
static xVec3 sHackStuckVel;
static U32 sHackStuckSetDir;
static F32 CATCH_CAPSULE_RAD = 0.45f;
static F32 CATCH_CAPSULE_BIAS = 0.3f;
static F32 sCatchCapsuleTimer;
static F32 stuck_timer;
static F32 not_stuck_timer;
static xVec3 stuck_start_loc;

static xVec3 last_center;

static U32 sCurrentStreamSndID;
static F32 sPlayerSndSneakDelay;
static S32 sPlayerDiedLastTime;
static S32 sPlayerIgnoreSound;
static S32 sPlayerAttackInAir;

F32 startJump;
F32 startDouble;
F32 startBounce;

static F32 minVelmag = 0.01f;
static F32 maxVelmag = 10.0f;
static F32 curVelmag = 0.0f;
static F32 curVelangle = 0.0f;

static S32 surfSlickness = 1;
static F32 surfFriction = 1.0f;
static F32 surfDamping = minVelmag;
static S32 lastSlickness = 1;
static xVec3 lastDeltaPos;
static xVec3 lastFloorNorm;
static xEnt* lastFloorEnt;
static U32 surfSticky;
static F32 surfSlideStart = DEG2RAD(20);
static F32 surfSlideStop = DEG2RAD(10);
F32 surfSlickRatio;
static F32 surfSlickTimer;
static F32 surfPeakRatio = 1.25f;
static F32 surfAccelWalk = 4.0f;
static F32 surfAccelRun = 8.0f;
static F32 surfDecelIdle = 2.0f;
static F32 surfDecelSkid = 8.0f;
static F32 surfMaxSpeed;
static F32 surfSlipTimer;

static xEnt* sGrabFound;
static S32 sGrabFailed;

static F32 sPlayerCollAdjust;

static zPlayerLassoInfo* sLassoInfo;
static zLasso* sLasso;
static xEnt* sHitch[32];
static S32 sNumHitches;
static F32 sHitchAngle;
static F32 sSwingTimeElapsed;
static S32 sLassoCamLinger;

// This struct was anonymous in the dwarf but it seemed to do better with codegen to name it
// so I can hold a pointer to it and access the members that way.
static const struct sock
{
    U32 level;
    U32 total;
} patsock_totals[] = {
    { 'HB\0\0', 8 }, { 'JF\0\0', 14 }, { 'BB\0\0', 9 }, { 'GL\0\0', 11 }, { 'BC\0\0', 4 },
    { 'RB\0\0', 9 }, { 'SM\0\0', 10 }, { 'KF\0\0', 7 }, { 'GY\0\0', 3 },  { 'DB\0\0', 5 },
};

static F32 update_dt = 1.0f / 60.0f;
static F32 last_update_dt = 1.0f / 60.0f;

_CurrentPlayer gCurrentPlayer;

static F32 bbash_start_ht;
static F32 bbash_end_tmr;
static F32 bbash_tmr;
static F32 bbash_vel;
static S32 bbash_hit;
static S32 bbounce_hit;

static F32 idle_tmr;
static F32 inact_tmr;
static F32 stun_power_tmr;

static F32 tslide_maxspd;
static F32 tslide_maxspd_tmr;
static F32 tslide_inair_tmr;
static F32 tslide_dbl_tmr;
static U32 tslide_ground;
static xVec3 tslide_lastrealvel;

static S32 in_goo;
static S32 lin_goo;
static F32 in_goo_tmr;
static U32 player_hitlist_anim;
S32 player_hit;
static S32 player_hit_anim;
static U32 player_dead_anim;
static U32 player_idle_anim;

static U32 last_frame;

static F32 sBubbleBowlLastWindupTime = -1.0f;
static F32 sBubbleBowlMultiplier = 1.0f;
static U32 sShouldBubbleBowl;
static F32 sBubbleBowlTimer;
static U32 sSpatulaGrabbed;
S32 gWaitingToAutoSave;

// Multidimensional sound arrays for each player type
static U32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total] = {};
static U32 sPlayerSndRand[3][47] = {};
static U32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total] = {};

static void PlayerSwingUpdate(xEnt* ent, F32 mag, F32 angle, F32 dt);

void zEntPlayer_SpawnWandBubbles(xVec3* center, U32 count)
{
    if (gFrameCount - last_frame > 5)
    {
        xVec3 wand;
        xVec3ScaleC(&wand, (xVec3*)&globals.player.model_wand->Mat->at, 0.25f, 0.25f, 0.25f);
        xVec3Sub(&last_center, center, &wand);
    }

    xVec3 dir;
    xVec3Sub(&dir, center, &last_center);

    U32 num = 3;
    if (count != 0)
    {
        num = count;
    }

    xVec3* posbuf = (xVec3*)xMemPushTemp(num * 2 * sizeof(xVec3));
    xVec3* velbuf = posbuf + num;
    if (posbuf)
    {
        xVec3* pp = posbuf;
        xVec3* vp = velbuf;
        U32 j = 0;
        for (; j < num; j++, pp++, vp++)
        {
            F32 f = (F32)j / (F32)num;
            xVec3Lerp(pp, &last_center, center, f);
            pp->x += 0.125f * (xurand() - 0.5f);
            pp->y += 0.125f * (xurand() - 0.5f);
            pp->z += 0.125f * (xurand() - 0.5f);

            f = 5.0f * xurand();
            xVec3ScaleC(vp, &dir, f, f, f);
            vp->x += 0.25f * (xurand() - 0.5f);
            vp->y += 0.25f * (xurand() - 0.5f);
            vp->z += 0.25f * (xurand() - 0.5f);
        }

        zParPTankSpawnBubbles(posbuf, velbuf, num, 1.0f);
        xMemPopTemp(posbuf);
    }

    last_center = *center;
    last_frame = gFrameCount;
}

void zEntPlayerKillCarry()
{
    if (!globals.player.carry.grabbed)
    {
        return;
    }

    if (!zThrown_KillFruit(globals.player.carry.grabbed))
    {
        if (globals.player.carry.grabbed->baseType == eBaseTypeDestructObj)
        {
            zEntEvent(globals.player.carry.grabbed, eEventDestroy);
        }
        else if (globals.player.carry.grabbed->baseType == eBaseTypeNPC &&
                 (((xNPCBasic*)globals.player.carry.grabbed)->SelfType() & 0xffffff00) == 'NTT\0')
        {
            zNPCTiki* tiki = (zNPCTiki*)globals.player.carry.grabbed;
            tiki->Damage(DMGTYP_THUNDER_TIKI_EXPLOSION, NULL, NULL);
        }
        else if (globals.player.carry.grabbed->baseType == eBaseTypeNPC)
        {
            zThrown_LaunchDir(globals.player.carry.grabbed,
                              (xVec3*)&globals.player.ent.model->Mat->at);
        }
    }
    globals.player.carry.grabbed = NULL;
}

void zEntPlayerControlOn(zControlOwner owner)
{
    U32 originalValue = globals.player.ControlOff;
    globals.player.ControlOff &= ~owner;

    if (originalValue != globals.player.ControlOff)
    {
        if (globals.player.ControlOff & 0x202)
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_CAMERA);
        }
        else
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);
        }
    }
}

// 83%, but floating point scheduling preventing match
void zEntPlayerControlOff(zControlOwner owner)
{
    U32 originalValue = globals.player.ControlOff;

    globals.player.ControlOff |= owner;
    globals.player.ControlOffTimer = 1.0f;

    if (originalValue != globals.player.ControlOff)
    {
        if (globals.player.ControlOff & 0x202)
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_CAMERA);
        }
        else
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);
        }
    }

    zEntPlayerKillCarry();
}

void TellPlayerVillainIsNear(F32 visnear)
{
    globals.player.BadGuyNearTimer = visnear;
}

void SetPlayerKillsVillainTimer(F32 time)
{
    globals.player.VictoryTimer = time;
}
static void DampenControls(F32* angle, F32* mag, F32 x, F32 y)
{
    *angle = xatan2(x, y);

    if (x > -globals.player.g.AnalogMin && x < globals.player.g.AnalogMin)
    {
        x = 0.0f;
    }

    if (y > -globals.player.g.AnalogMin && y < globals.player.g.AnalogMin)
    {
        y = 0.0f;
    }

    if (!x && !y)
    {
        *angle = 0.0f;
        *mag = 0.0f;
        return;
    }

    if (xabs(x) > xabs(y))
    {
        *mag = xabs(x);
    }
    else
    {
        *mag = xabs(y);
    }
    *mag = (*mag - globals.player.g.AnalogMin) /
           (globals.player.g.AnalogMax - globals.player.g.AnalogMin);

    if (*mag < 0.0f)
    {
        *mag = 0.0f;
        *angle = 0.0f;
    }
    else if (*mag > 1.0f)
    {
        *mag = 1.0f;
    }
}

static void CalcAnimSpeed(xEnt* ent, float f, float* pf)
{
    if (!pf[0])
    {
        return;
    }

    f = f / pf[0];
    if (f < pf[1])
    {
        f = pf[1];
    }
    else if (f > pf[2])
    {
        f = pf[2];
    }

    ent->model->Anim->Single->CurrentSpeed = f;
}

static void LeanUpdate(F32 angle, F32 dt)
{
    float abs = xabs(angle);
    float lerp;
    if (abs < 0.087266468f)
    {
        lerp = 0.0f;
    }
    else if (abs > 0.2617994f)
    {
        lerp = 1.0f;
    }
    else
    {
        lerp = 5.729578f * (abs - 0.087266468f);
    }

    if (angle > 0.0f)
    {
        lerp = -lerp;
    }
    lerp += 1.0f;

    F32 t = 6.0f * (lerp - globals.player.LeanLerp);
    globals.player.LeanLerp += t * dt;
}

// Temp function to fix sdata2 float order.
// TODO: Figure out why these literals occur this earlier in the binary.
void floatfix(float* out)
{
    out[0] = 3.0f;
    out[1] = 0.00001f;
}

static void TurnToFace(xEnt* ent, const xVec3* target, F32 speedLimit, F32 dt)
{
    xVec3 currentFacing = ent->frame->mat.at;
    xVec3Normalize(&currentFacing, &currentFacing);

    F32 angle = xVec3Dot(&currentFacing, target);
    const F32 maxAngle = 0.9999f;
    if (angle < maxAngle)
    {
        xVec3Cross(&ent->frame->drot.axis, &currentFacing, target);
        xVec3Normalize(&ent->frame->drot.axis, &ent->frame->drot.axis);

        angle = xacos(angle);
        if (angle > speedLimit * dt)
        {
            angle = speedLimit * dt;
        }

        if (ent->frame->drot.axis.y < 0.0f)
        {
            angle = -angle;
        }

        ent->frame->drot.angle = angle;
        ent->frame->mode |= 0x20;
    }
}

void PlayerArrive(xEnt* ent, xBase* base)
{
    globals.player.AutoMoveSpeed = 0;

    zEntEvent(base, ent, 0x1f);

    if (base->baseType == 0xd)
    {
        zEntEvent(ent, base, 0x1f);
    }
}

#define CLAMP_ANGLE(a)                                                                             \
    if (a > PI)                                                                                    \
    {                                                                                              \
        a -= 2 * PI;                                                                               \
    }                                                                                              \
    else if (a < -PI)                                                                              \
    {                                                                                              \
        a = a + 2 * PI;                                                                            \
    }

static void PlayerAbsControl(xEnt* ent, F32 x, F32 z, F32 dt)
{
    U32 animUserFlag;
    U32 blendUserFlag;
    F32 angle = 0.0f;
    F32 mag = 1.0f;
    maxVelmag = 0.0f;

    if (gTrcPad[0].state != TRC_PadInserted)
    {
        z = x = 0.0f;
    }

    if (globals.player.ControlOff || sHackStuckTimer || sCatchCapsuleTimer > 0.15f)
    {
        z = x = 0.0f;
    }

    // F32 scalemag;
    // F32 dir_dp;
    // F32 turnfactor;
    // F32 diffAngle;
    // F32 autodist2d;
    // F32 camAngle;
    xMat4x3* m = &ent->frame->mat;
    xVec3 euler;
    xMat3x3GetEuler(m, &euler);

    ent->frame->rot.angle = euler.x >= 0.0f ? euler.x : euler.x + 2 * PI;
    surfMaxSpeed = 0.0f;

    animUserFlag = ent->model->Anim->Single->State ? ent->model->Anim->Single->State->UserFlags : 0;

    blendUserFlag = ent->model->Anim->Single->Blend && ent->model->Anim->Single->Blend->State ?
                        ent->model->Anim->Single->Blend->State->UserFlags | 0x80000000 :
                        0;

    if (globals.player.KnockIntoAirTimer != 0.0f && (animUserFlag & 0x1e) == 0 &&
        (animUserFlag & 0x1) == 0)
    {
        animUserFlag |= 0x8 | 0x2;
        animUserFlag &= ~0x80;
    }

    memset(&ent->frame->dpos, 0, sizeof(xVec3));

    if (!(globals.player.KnockBackTimer || animUserFlag & 0x100))
    {
        if (globals.player.ControlOff & 0x4000)
        {
            // F32 rot;
            F32 dx = ent->frame->vel.x * ent->frame->vel.x;
            F32 dz = ent->frame->vel.z * ent->frame->vel.z;

            if (dx + dz > 0.01f)
            {
                ent->frame->mode &= ~0x2;

                angle = xatan2(ent->frame->vel.x, ent->frame->vel.z) - ent->frame->rot.angle;
                CLAMP_ANGLE(angle);

                ent->frame->drot.angle = 4.0f * angle * dt;
                ent->frame->mode |= 0x20;

                if (xabs(ent->frame->drot.angle) < 0.006f)
                {
                    if (xabs(angle) > 0.006f)
                    {
                        angle = angle > 0.0f ? 0.006f : -0.006f;
                    }
                    ent->frame->drot.angle = angle;
                }
            }
        }
        else
        {
            // TODO: figure out which variables these were
            F32 stackAng, stackMag;
            DampenControls(&stackAng, &stackMag, x, z);
            xMat4x3Copy(&gPlayerAbsMat, &globals.camera.mat);

            if (globals.player.carry.grabTarget || globals.player.carry.throwTarget)
            {
                if (!(strcmp(ent->model->Anim->Single->State->Name, "Carry_Pickup") == 0 ||
                      strcmp(ent->model->Anim->Single->State->Name, "Carry_Throw") == 0))
                {
                    globals.player.carry.grabTarget = 0;
                    globals.player.carry.throwTarget = NULL;
                }
                else
                {
                    ent->frame->mode &= ~0x2;

                    angle = globals.player.carry.targetRot - ent->frame->rot.angle;
                    CLAMP_ANGLE(angle);

                    if (globals.player.carry.throwTarget)
                    {
                        globals.player.carry.flyingToTarget = NULL;
                        if (angle > 0.0f)
                        {
                            ent->frame->drot.angle = globals.player.carry.throwTargetRotRate * dt;
                        }
                        else
                        {
                            ent->frame->drot.angle = -globals.player.carry.throwTargetRotRate * dt;
                        }

                        if (xabs(ent->frame->drot.angle) > angle)
                        {
                            ent->frame->drot.angle = angle;
                        }

                        F32 dx = globals.player.carry.throwTarget->model->Mat->pos.x -
                                 ent->model->Mat->pos.x;
                        F32 dz = globals.player.carry.throwTarget->model->Mat->pos.z -
                                 ent->model->Mat->pos.z;

                        // unused?
                        xsqrt(dx * dx + dz * dz);
                    }
                    else
                    {
                        ent->frame->drot.angle = 4.0f * angle * dt;
                    }

                    ent->frame->mode |= 0x20;

                    if (xabs(ent->frame->drot.angle) < 0.006f)
                    {
                        if (xabs(angle) > 0.006f)
                        {
                            angle = angle > 0.0f ? 0.006f : -0.006f;
                        }
                        ent->frame->drot.angle = angle;
                    }

                    // F32 ddot;
                    F32 atime = ent->model->Anim->Single->Time;
                    F32 lerp = globals.player.carry.grabLerpLast;

                    if (lerp < globals.player.carry.grabLerpMax &&
                        atime > globals.player.carry.grabLerpMin &&
                        globals.player.carry.grabLerpMin > globals.player.carry.grabLerpMax)
                    {
                        if (globals.player.carry.grabLerpMax > lerp)
                        {
                            lerp = globals.player.carry.grabLerpMin;
                        }

                        F32 t;
                        if (globals.player.carry.grabLerpMax < atime)
                        {
                            t = globals.player.carry.grabLerpMin;
                        }
                        else
                        {
                            t = atime;
                        }

                        lerp = -((t - lerp) / (globals.player.carry.grabLerpMax -
                                               globals.player.carry.grabLerpMin));

                        ent->frame->dpos.x = lerp * globals.player.carry.grabOffset.x;
                        ent->frame->dpos.z = lerp * globals.player.carry.grabOffset.z;
                        ent->frame->mode |= 0x2;
                        globals.player.carry.grabLerpLast = atime;
                    }
                }
            }
            else
            {
                if (strcmp(ent->model->Anim->Single->State->Name, "SpatulaGrab01") == 0)
                {
                    ent->frame->mode &= ~0x2;
                    angle = xatan2(globals.camera.mat.pos.x - globals.player.ent.frame->mat.pos.x,
                                   globals.camera.mat.pos.z - globals.player.ent.frame->mat.pos.z);

                    angle -= ent->frame->rot.angle;
                    CLAMP_ANGLE(angle);

                    ent->frame->drot.angle = 4.0f * angle * dt;
                    ent->frame->mode |= 0x20;

                    if (xabs(ent->frame->drot.angle) < 0.006f)
                    {
                        if (xabs(angle) > 0.006f)
                        {
                            angle = angle > 0.0f ? 0.006f : -0.006f;
                        }

                        ent->frame->drot.angle = angle;
                    }
                }
                else if (sLassoInfo->target != NULL &&
                         (strcmp(ent->model->Anim->Single->State->Name, "LassoWindup") == 0 ||
                          strcmp(ent->model->Anim->Single->State->Name, "LassoAboutToDestroy") ==
                              0))
                {
                    ent->frame->mode &= ~2;
                    sLassoInfo->lassoRot = xatan2(sLassoInfo->target->model->Mat->pos.x -
                                                      globals.player.ent.frame->mat.pos.x,
                                                  sLassoInfo->target->model->Mat->pos.z -
                                                      globals.player.ent.frame->mat.pos.z);

                    angle = sLassoInfo->lassoRot - ent->frame->rot.angle;
                    CLAMP_ANGLE(angle);

                    ent->frame->drot.angle = 4.0f * angle * dt;
                    ent->frame->mode |= 0x20;

                    if (xabs(ent->frame->drot.angle) < 0.006f)
                    {
                        if (xabs(angle) > 0.006f)
                        {
                            angle = angle > 0.0f ? 0.006f : -0.006f;
                        }

                        ent->frame->drot.angle = angle;
                    }
                }
                else
                {
                    F32 rot = 0.0f;
                    // F32 m;
                    if (stackMag)
                    {
                        F32 t = xatan2(gPlayerAbsMat.right.z, gPlayerAbsMat.right.x);
                        stackAng -= t;
                        if (stackAng > 3.1415927f)
                        {
                            stackAng -= 2 * 3.1415927f;
                        }
                        else if (stackAng < -3.1415927f)
                        {
                            stackAng = stackAng + 2 * 3.1415927f;
                        }

                        rot = angle;
                        if ((animUserFlag & (0x800 | 0x80)) == 0)
                        {
                            angle = stackAng - ent->frame->rot.angle;
                            CLAMP_ANGLE(angle);

                            rot = icos(angle);
                            ent->frame->drot.angle = 7.0f * angle * dt;
                            ent->frame->mode |= 0x20;
                        }

                        if (globals.player.IsBubbleBowling)
                        {
                            angle *= 0.1f;
                            rot = icos(angle);
                            ent->frame->drot.angle = 7.0f * angle * dt;
                            xMat3x3 rotY;
                            xMat3x3RotY(&rotY, ent->frame->drot.angle);
                            xMat3x3RMulVec(&ent->frame->vel, &rotY, &ent->frame->vel);
                        }

                        if (animUserFlag & 0x800)
                        {
                            rot = 1.0f;
                        }

                        if (stackMag > globals.player.s->MoveSpeed[3])
                        {
                            if (stackMag < globals.player.s->MoveSpeed[4])
                            {
                                globals.player.Speed = 1;
                                maxVelmag =
                                    globals.player.s->MoveSpeed[1] * globals.player.SpeedMult;
                                mag = (globals.player.SpeedMult * stackMag *
                                       globals.player.s->MoveSpeed[1]) /
                                      globals.player.s->MoveSpeed[4];
                            }
                            else
                            {
                                globals.player.Speed = 2;
                                maxVelmag =
                                    globals.player.s->MoveSpeed[2] * globals.player.SpeedMult;
                                F32 slideVelMag = (stackMag - globals.player.s->MoveSpeed[4]) /
                                                  (globals.player.s->MoveSpeed[5] -
                                                   globals.player.s->MoveSpeed[4]);
                                if (slideVelMag > 1.0f)
                                {
                                    slideVelMag = 1.0f;
                                }
                                F32 slideAccel =
                                    globals.player.s->MoveSpeed[1] * globals.player.SpeedMult;
                                mag = slideVelMag * (globals.player.s->MoveSpeed[2] *
                                                         globals.player.SpeedMult -
                                                     slideAccel) +
                                      slideAccel;
                            }
                        }
                    }
                    else
                    {
                        rot = 0.0f;
                        globals.player.Speed = 0;
                    }

                    ent->frame->mode &= ~0x2;

                    if (sLassoInfo->swingTarget != NULL)
                    {
                        PlayerSwingUpdate(ent, stackMag, stackAng, dt);
                        return;
                    }

                    if (sLassoCamLinger)
                    {
                        F32 curFactor = zCameraGetLassoCamFactor() + dt;
                        if (curFactor > 1.0f)
                        {
                            zCameraDisableLassoCam();
                            sLassoCamLinger = 0;
                        }
                        else
                        {
                            zCameraSetLassoCamFactor(curFactor);
                        }
                    }

                    zPlayerGlobals* pg = &globals.player;
                    if (pg->HangEnt)
                    {
                        return;
                    }

                    if ((pg->SlideTrackSliding & 1 && (pg->JumpState == 0 || pg->JumpState == 1)) ||
                        pg->SlideTrackDecay && pg->JumpState && pg->JumpState != 1)
                    {
                        F32 accelX =
                            (pg->SlideTrackVel.x * pg->SlideTrackDir.x +
                             pg->SlideTrackVel.z * pg->SlideTrackDir.z - pg->g.SlideAccelVelMin) /
                            (pg->g.SlideAccelVelMax - pg->g.SlideAccelEnd);

                        F32 accelZ;
                        if (accelX < 0.0f)
                        {
                            accelZ = pg->g.SlideAccelStart;
                        }
                        else if (accelX > 1.0f)
                        {
                            accelZ = pg->g.SlideAccelEnd;
                        }
                        else
                        {
                            accelZ = accelX * (pg->g.SlideAccelEnd - pg->g.SlideAccelStart) +
                                     pg->g.SlideAccelStart;
                        }

                        pg->SlideTrackVel.x += dt * pg->SlideTrackDir.x * accelZ;
                        pg->SlideTrackVel.z += dt * pg->SlideTrackDir.z * accelZ;

                        accelX = stackMag * isin(stackAng) * dt;
                        accelZ = stackMag * icos(stackAng) * dt;

                        F32 fwdComponent =
                            accelX * pg->SlideTrackDir.x + accelZ * pg->SlideTrackDir.z;
                        F32 sideComponent =
                            (accelZ * pg->SlideTrackDir.x - accelX * pg->SlideTrackDir.z);

                        F32 veldown = pg->SlideTrackVel.x * pg->SlideTrackDir.x +
                                      pg->SlideTrackVel.z * pg->SlideTrackDir.z;
                        if (veldown < 1.0f)
                        {
                            if (fwdComponent < 0.0f)
                            {
                                fwdComponent = 0.0f;
                            }
                        }
                        else if (veldown < 6.0f)
                        {
                            if (fwdComponent < 0.0f)
                            {
                                fwdComponent *= (veldown - 1.0f) / 5.0f;
                            }
                        }

                        if (fwdComponent > 0.0f)
                        {
                            pg->SlideTrackVel.x +=
                                pg->SlideTrackDir.x * (pg->g.SlideAccelPlayerFwd * fwdComponent);
                            pg->SlideTrackVel.z +=
                                pg->SlideTrackDir.z * (pg->g.SlideAccelPlayerFwd * fwdComponent);
                        }
                        else
                        {
                            pg->SlideTrackVel.x +=
                                pg->SlideTrackDir.x * (pg->g.SlideAccelPlayerBack * fwdComponent);
                            pg->SlideTrackVel.z +=
                                pg->SlideTrackDir.z * (pg->g.SlideAccelPlayerBack * fwdComponent);
                        }

                        pg->SlideTrackVel.x -=
                            (pg->SlideTrackDir.z * (pg->g.SlideAccelPlayerSide * sideComponent));
                        pg->SlideTrackVel.z +=
                            pg->SlideTrackDir.x * (pg->g.SlideAccelPlayerSide * sideComponent);

                        mag = xsqrt(pg->SlideTrackVel.x * pg->SlideTrackVel.x +
                                    pg->SlideTrackVel.z * pg->SlideTrackVel.z);
                        if (mag >= tslide_maxspd)
                        {
                            if (globals.player.SlideTrackDecay == globals.player.g.SlideAirHoldTime)
                            {
                                tslide_maxspd_tmr += dt;
                                if (fwdComponent > 0.0f)
                                {
                                    tslide_maxspd_tmr +=
                                        fwdComponent * dt * pg->g.SlideVelMaxIncAccel;
                                }
                            }

                            if (tslide_maxspd_tmr <= pg->g.SlideVelMaxIncTime)
                            {
                                tslide_maxspd =
                                    (tslide_maxspd_tmr / pg->g.SlideVelMaxIncTime) *
                                        (pg->g.SlideVelMaxEnd - pg->g.SlideVelMaxStart) +
                                    pg->g.SlideVelMaxStart;
                            }
                        }
                        else
                        {
                            if (mag > pg->g.SlideVelMaxStart)
                            {
                                tslide_maxspd_tmr =
                                    (pg->g.SlideVelMaxIncTime * (mag - pg->g.SlideVelMaxStart)) /
                                    (pg->g.SlideVelMaxEnd - pg->g.SlideVelMaxStart);
                                tslide_maxspd = mag;
                            }
                            else
                            {
                                tslide_maxspd_tmr = 0.0f;
                                tslide_maxspd = pg->g.SlideVelMaxStart;
                            }
                        }

                        if (mag > tslide_maxspd)
                        {
                            pg->SlideTrackVel.x *= tslide_maxspd / mag;
                            pg->SlideTrackVel.z *= tslide_maxspd / mag;
                        }

                        // F32 fwdlerp;
                        angle = xatan2(pg->SlideTrackVel.x, pg->SlideTrackVel.z);
                        F32 targetAngle = angle - ent->frame->rot.angle;
                        CLAMP_ANGLE(targetAngle);

                        ent->frame->drot.angle = 4.0f * targetAngle * dt;
                        ent->frame->mode |= 0x20;
                        if (xabs(ent->frame->drot.angle) < 0.006f)
                        {
                            if (xabs(targetAngle) > 0.006f)
                            {
                                targetAngle = targetAngle > 0.0f ? 0.006f : -0.006f;
                            }
                            ent->frame->drot.angle = targetAngle;
                        }

                        if (animUserFlag & 0x40)
                        {
                            F32 targetLean = 0.0f;
                            if (stackMag)
                            {
                                targetLean = stackAng - ent->frame->rot.angle;
                                CLAMP_ANGLE(targetLean);
                            }

                            // FIXME: Using our PI constant here is off by one bit with the resulting float constant
                            targetLean = -targetLean / DEG2RAD(50);

                            if (targetLean < -1.0f)
                            {
                                targetLean = -1.0f;
                            }
                            else if (targetLean > 1.0f)
                            {
                                targetLean = 1.0f;
                            }

                            globals.player.SlideTrackLean +=
                                0.04f * (targetLean - globals.player.SlideTrackLean);
                            ent->model->Anim->Single->BilinearLerp[0] =
                                1.0f + globals.player.SlideTrackLean;
                        }
                        else
                        {
                            globals.player.SlideTrackLean = 0.0f;
                        }

                        ent->frame->dpos.x = dt * globals.player.SlideTrackVel.x;
                        ent->frame->dpos.z = dt * globals.player.SlideTrackVel.z;
                        ent->frame->mode |= 0x2;
                        ent->frame->vel.x = 0.0f;
                        ent->frame->vel.z = 0.0f;

                        if ((globals.player.SlideTrackSliding & 1) == 0)
                        {
                            globals.player.SlideTrackDecay -= dt;
                            if (globals.player.SlideTrackDecay < 0.0f)
                            {
                                globals.player.SlideTrackDecay = 0.0f;
                                ent->frame->vel.x = globals.player.SlideTrackVel.x;
                                ent->frame->vel.z = globals.player.SlideTrackVel.z;
                            }
                        }
                        else
                        {
                            globals.player.SlideTrackDecay = globals.player.g.SlideAirHoldTime;
                        }
                        return;
                    }

                    pg->SlideTrackDecay = 0.0f;
                    if ((animUserFlag & 0x1e) != 0 || blendUserFlag & 0x1e)
                    {
                        U32 moveFlag = animUserFlag & 0x1e;
                        if ((animUserFlag & 0x1e) == 0)
                        {
                            moveFlag = blendUserFlag & 0x1e;
                        }

                        switch (moveFlag)
                        {
                        case 0x2:
                            if (rot <= 0.0f || !stackMag)
                            {
                                break;
                            }
                            stackMag = mag * rot;
                            goto finish;

                        case 0x4:
                            if (rot <= 0.0f)
                            {
                                break;
                            }
                            stackMag = mag * rot;
                            goto finish;
                        case 0x4 | 0x2:
                            if (stackMag)
                            {
                                if (xabs(angle) >= PI / 6)
                                {
                                    if (angle > 0.0f)
                                    {
                                        stackAng = ent->frame->rot.angle + PI / 6;
                                    }
                                    else
                                    {
                                        stackAng = ent->frame->rot.angle - PI / 6;
                                    }
                                }
                            }
                            else
                            {
                                stackAng = ent->frame->rot.angle;
                            }

                            if ((animUserFlag & 0x20))
                            {
                                if (surfSlickRatio)
                                {
                                    break;
                                }
                                stackMag = globals.player.DecelRunSpeed;
                                globals.player.DecelRunSpeed -=
                                    ((4.0f / 3.0f) * (globals.player.DecelRun * dt));

                                if (globals.player.DecelRunSpeed < 0.0f)
                                {
                                    globals.player.DecelRunSpeed = 0.0f;
                                }
                                goto finish;
                            }
                            else if (stackMag)
                            {
                                stackMag = mag;
                                globals.player.DecelRunSpeed = mag;
                                globals.player.DecelRun = mag;
                                goto finish;
                            }
                            break;
                        case 0x8 | 0x2:
                            if (rot <= 0.0f && !globals.player.cheat_mode)
                            {
                                break;
                            }

                            stackMag = mag * rot;
                            goto finish;
                        case 0x8 | 0x4:
                            stackAng = ent->frame->rot.angle;
                            stackMag = globals.player.HeadbuttVel;
                            globals.player.DecelRunSpeed = globals.player.HeadbuttVel;
                            globals.player.DecelRun = globals.player.HeadbuttVel;
                            // fall through
                        finish:
                        default:
                            switch ((animUserFlag & 0x1e))
                            {
                            case 0x2:
                                if (strcmp(ent->model->Anim->Single->State->Name, "Walk_sneak") ==
                                        0 ||
                                    strcmp(ent->model->Anim->Single->State->Name,
                                           "Walk_blackknight") == 0)
                                {
                                    CalcAnimSpeed(ent, stackMag, globals.player.s->AnimSneak);
                                }
                                break;
                            case 0x4:
                                CalcAnimSpeed(ent, stackMag, globals.player.s->AnimWalk);
                                if (ent->model->Anim->Single->State->Speed != 1.0f)
                                {
                                    ent->model->Anim->Single->CurrentSpeed =
                                        ent->model->Anim->Single->State->Speed;
                                }
                                break;
                            case 0x2 | 0x4:
                                CalcAnimSpeed(ent, stackMag, globals.player.s->AnimRun);
                                break;
                            }

                            // xVec3* vel;
                            // F32 accelMag;
                            // F32 peakLerp;
                            // F32 slickLerp;
                            if (surfSlickRatio && !globals.player.ControlOff)
                            {
                                if (!stackMag)
                                {
                                    break;
                                }

                                F32 s = (4.0f / 3.0f) * surfSlipTimer * 20.0f * surfSlickRatio +
                                        (1.0f - (4.0f / 3.0f) * surfSlipTimer) * surfSlickRatio;

                                if (moveFlag == 0x4 || moveFlag == 2)
                                {
                                    rot = surfAccelWalk * s;
                                    surfMaxSpeed = maxVelmag * surfPeakRatio;
                                }
                                else
                                {
                                    rot = surfAccelRun * s;
                                    surfMaxSpeed = maxVelmag * surfPeakRatio;
                                }

                                ent->frame->vel.x += rot * isin(stackAng) * dt;
                                ent->frame->vel.z += rot * icos(stackAng) * dt;

                                s = 2.5f * surfSlipTimer;
                                if (s >= 1.0f)
                                {
                                    surfMaxSpeed = stackMag;
                                }
                                else
                                {
                                    surfMaxSpeed = (1.0f - s) * surfMaxSpeed + s * stackMag;
                                }
                            }
                            else
                            {
                                stackMag *= dt;
                                F32 s = tslide_inair_tmr - globals.player.g.SlideAirHoldTime;
                                if (s >= 0.0f && s < globals.player.g.SlideAirSlowTime)
                                {
                                    stackMag *= s / globals.player.g.SlideAirSlowTime;
                                }

                                if (tslide_dbl_tmr > 0.0f &&
                                    tslide_dbl_tmr < globals.player.g.SlideAirDblHoldTime)
                                {
                                    stackMag *=
                                        tslide_dbl_tmr / globals.player.g.SlideAirDblHoldTime;
                                }

                                if (globals.player.cheat_mode)
                                {
                                    stackMag *= 3.0f;
                                    if (globals.pad0->on & (XPAD_BUTTON_R1 | XPAD_BUTTON_R2 |
                                                            XPAD_BUTTON_L1 | XPAD_BUTTON_L2))
                                    {
                                        stackMag *= 4.0f;
                                    }
                                }

                                ent->frame->dpos.x = stackMag * isin(stackAng);
                                ent->frame->dpos.z = stackMag * icos(stackAng);
                                ent->frame->mode |= 0x2;

                                if (globals.player.ControlOff &&
                                    globals.player.AutoMoveSpeed != 0 &&
                                    globals.player.AutoMoveSpeed != 4 &&
                                    ent->frame->dpos.x * ent->frame->dpos.x +
                                            ent->frame->dpos.z * ent->frame->dpos.z >=
                                        0.0f)
                                {
                                    ent->frame->dpos.x =
                                        globals.player.AutoMoveTarget.x - ent->model->Mat->pos.x;
                                    ent->frame->dpos.z =
                                        globals.player.AutoMoveTarget.z - ent->model->Mat->pos.z;
                                    PlayerArrive(ent, globals.player.AutoMoveObject);
                                }
                            }
                            break;
                        }
                    }
                }
            }
        }

        LeanUpdate(angle, dt);

        if (animUserFlag & 0x40)
        {
            ent->model->Anim->Single->BilinearLerp[0] = globals.player.LeanLerp;
        }

        if (blendUserFlag & 0x40)
        {
            ent->model->Anim->Single->Blend->BilinearLerp[0] = globals.player.LeanLerp;
        }
    }
}

static void HealthReset();

// WIP. Weird iterator code gen stuff isn't working
static void InvReset()
{
    globals.player.MaxHealth = 3;
    HealthReset();
    globals.player.Inv_Shiny = globals.player.g.InitialShinyCount;
    globals.player.Inv_Spatula = globals.player.g.InitialSpatulaCount;
    globals.player.Inv_PatsSock_Total = 0;

    if (globals.player.g.InitialShinyCount > SHINY_MAX)
    {
        globals.player.Inv_Shiny = SHINY_MAX;
    }

    // FIXME: Use some macro for the world count. WORLD_COUNT is local to zUI and hard to move
    for (U32 i = 0; i < 15; i++)
    {
        globals.player.Inv_PatsSock[i] = 0;
        globals.player.Inv_LevelPickups[i] = 0;
        globals.player.Inv_PatsSock_Max[i] = 0;
        U32& maxsocks = globals.player.Inv_PatsSock_Max[i];
        const char* level_prefix = zSceneGetLevelPrefix(i);
        if (level_prefix == NULL)
        {
            continue;
        }

        U32 level_mask = level_prefix[0] << 0x18 | level_prefix[1] << 0x10;
        for (const sock* s = patsock_totals; s != NULL; s++)
        {
            if (level_mask == s->level)
            {
                maxsocks = s->total;
            }
        }
    }

    memcpy(&globals.player.g.PowerUp, &globals.player.g.InitialPowerUp,
           sizeof(globals.player.g.InitialPowerUp));
}

static void HealthReset()
{
    globals.player.Health = globals.player.MaxHealth;
}

static U32 RunAnyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 2 && !surfSlickRatio && oob_state::oob_timer() < 0.0f;
}

static U32 RunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 2 && !(globals.player.BadGuyNearTimer > 0.0f) &&
           !(globals.player.VictoryTimer > 0.0f) && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 RunStoicCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 2 && !(globals.player.BadGuyNearTimer > 0.0f) &&
           !(globals.player.VictoryTimer > 0.0f) && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 RunScaredCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 2 && globals.player.BadGuyNearTimer > 0.0f &&
           !(globals.player.VictoryTimer > 0.0f) && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 RunVictoryCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 2 && globals.player.VictoryTimer > 0.0f && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 RunSlipCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed >= 1 && surfSlickRatio;
}

static U32 RunOutOfWorldCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed >= 1 && !surfSlickRatio && oob_state::oob_timer() >= 0.0f;
}

static U32 WalkCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 1 && !surfSlickRatio && oob_state::oob_timer() < 0.0f;
}

static U32 WalkStoicCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 1 && !surfSlickRatio && !(globals.player.VictoryTimer > 0.0f) &&
           !(globals.player.BadGuyNearTimer > 0.0f) && oob_state::oob_timer() < 0.0f;
}

static U32 WalkVictoryCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 1 && globals.player.VictoryTimer > 0.0f && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 WalkScaredCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 1 && globals.player.BadGuyNearTimer > 0.0f &&
           !(globals.player.VictoryTimer > 0.0f) && !surfSlickRatio &&
           oob_state::oob_timer() < 0.0f;
}

static U32 IdleCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 0 && !surfSlickRatio;
}

static U32 IdleStoicCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 0 && !surfSlickRatio && !(globals.player.VictoryTimer > 0.0f) &&
           !(globals.player.BadGuyNearTimer > 0.0f);
}

static U32 IdleVictoryCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 0 && globals.player.VictoryTimer > 0.0f && !surfSlickRatio;
}

static U32 IdleScaredCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 0 && globals.player.BadGuyNearTimer > 0.0f &&
           !(globals.player.VictoryTimer > 0.0f) && !surfSlickRatio;
}

static U32 IdleSlipCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1) &&
           globals.player.Speed == 0 && surfSlickRatio;
}

static U32 AnyMoveCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.Speed != 0;
}

static U32 AnyStopCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.Speed == 0;
}

static U32 SlipRunCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_SlipLoop, 0.0f);
    return 0;
}

static U32 NoSlipCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);
    return 0;
}

static U32 IdleCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);
    idle_tmr = 0.0f;
    return 0;
}

static U32 InactiveCheck(xAnimTransition* tran, xAnimSingle*, void*)
{
    return idle_tmr >= 5.0f &&
           (tran->UserFlags & 0xffff) == player_idle_anim % (tran->UserFlags >> 0x10);
}

// Equivalent: sda reordering
static U32 InactiveCB(xAnimTransition*, xAnimSingle*, void*)
{
    idle_tmr = 0.0f;
    player_idle_anim = player_idle_anim + 1;
    return 0;
}

static U32 InactiveFinishedCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return idle_tmr >= 5.0f;
}

static U32 LandCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0;
}

static U32 LandTrackCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.SlideTrackLand;
}

static U32 LandNoTrackCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && !globals.player.SlideTrackLand;
}

static U32 LandHighCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.WasDJumping;
}

static U32 LandRunCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed >= 2;
}

static U32 LandWalkCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed == 1;
}

static U32 LandFastCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed >= 2;
}

static U32 LandNoTrackWalkCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed == 1 &&
           !globals.player.SlideTrackLand;
}

static U32 LandSlipIdleCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed == 0 && surfSlickRatio;
}

static U32 LandSlipRunCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed >= 1 && surfSlickRatio;
}

static U32 LandNoTrackFastCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed >= 2 &&
           !globals.player.SlideTrackLand;
}

static U32 LandNoTrackSlipRunCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed >= 1 &&
           !globals.player.SlideTrackLand && surfSlickRatio;
}

static U32 LandNoTrackSlipIdleCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.JumpState == 0 && globals.player.Speed == 0 &&
           !globals.player.SlideTrackLand && surfSlickRatio;
}

static U32 LandCallback(xAnimTransition*, xAnimSingle*, void*)
{
    globals.player.WallJumpState = k_WALLJUMP_NOT;
    zCameraDisableWallJump(&globals.camera);
    return 0;
}

static U32 LandSlipRunCallback(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_SlipLoop, 0.0f);
    globals.player.WallJumpState = k_WALLJUMP_NOT;
    zCameraDisableWallJump(&globals.camera);
    return 0;
}

static U32 SandyLandCB(xAnimTransition*, xAnimSingle*, void*)
{
    globals.player.Jump_CanDouble = 1;
    return 0;
}

static U32 BubbleSpinCheck(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.player.cheat_mode != 0)
    {
        return 0;
    }

    if (zEntTeleportBox_playerIn())
    {
        return 0;
    }

    return (!globals.player.ControlOff && globals.pad0->pressed & XPAD_BUTTON_TRIANGLE);
}

static U32 BubbleSpinCB(xAnimTransition*, xAnimSingle* anim, void*)
{
    anim->CurrentSpeed = 0.0f;
    zEntPlayer_SNDPlay(ePlayerSnd_BubbleWand, 0.0f);
    sPlayerAttackInAir++;
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);
    return 0;
}

// FIXME: These floats are out of order (again...)
static void float_fix2(float* out)
{
    out[0] = 0.70709997f;
    out[1] = 1.0e-7;
    out[2] = -4.0f;
    out[3] = 15.0f;
    out[4] = 9.0f;
    out[5] = -1.5f;
    out[6] = 0.0001f;
}

static U32 BubbleBashCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    if (globals.player.cheat_mode != 0)
    {
        return 0;
    }

    if (zEntTeleportBox_playerIn())
    {
        return 0;
    }

    if (sPlayerCollAdjust > 0.2f)
    {
        return 0;
    }

    return (!globals.player.ControlOff && globals.pad0->pressed & XPAD_BUTTON_SQUARE);
}

// probably equivalent: looks like sda relocation memes on sPlayerCollAdjust
static U32 BubbleBashCB(xAnimTransition*, xAnimSingle* anim, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_BubbleBashStart, 0.0f);
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);

    globals.player.ent.frame->vel.y = 0.0f;
    bbash_start_ht = globals.player.ent.frame->mat.pos.y + sPlayerCollAdjust;
    bbash_tmr = -globals.player.g.BBashDelay;
    bbash_end_tmr = 0.25f;
    globals.player.JumpState = 2;
    bbash_hit = 0;

    zCameraMinTargetHeightSet(bbash_start_ht);

    return 0;
}

static U32 BBashStrikeCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    return bbash_hit;
}

static U32 BBashStrikeCB(xAnimTransition*, xAnimSingle* anim, void*)
{
    globals.player.ent.frame->vel.y = 0.0f;
    return 0;
}

static U32 BBashToJumpCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    return bbash_tmr >= globals.player.g.BBashTime;
}

static U32 BubbleBounceCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    return (!globals.player.ControlOff && (globals.pad0->pressed & XPAD_BUTTON_O));
}

// equivalent: sda relocation memes
static U32 BubbleBounceCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zCameraSetBbounce(true);

    globals.player.ent.frame->vel.x = 0.0f;
    globals.player.ent.frame->vel.y = 0.0f;
    globals.player.ent.frame->vel.z = 0.0f;

    tslide_inair_tmr = 0.0f;
    tslide_dbl_tmr = 0.0f;
    tslide_ground = 0;
    globals.player.SlideTrackDecay = 0.0f;
    bbounce_hit = 0;

    return 0;
}

static U32 BBounceAttackCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.ent.frame->vel.y = -globals.player.g.BBounceSpeed;
    return 0;
}

static U32 BBounceStrikeCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1);
}

static U32 BBounceStrikeCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zEntPlayer_SNDStop(ePlayerSnd_BubbleBashStart);
    zEntPlayer_SNDPlay(ePlayerSnd_BounceStrike, 0.0f);
    zFX_SpawnBubbleSlam((xVec3*)&globals.player.ent.model->Mat->pos, 100, 0.15f, 12.0f, 2.0f);
    zCameraSetBbounce(false);
    zRumbleStart(SDR_Bounce);
    return 0;
}

static U32 BBounceToJumpCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return bbounce_hit;
}

static U32 BBounceToJumpCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zEntPlayerJumpStart(&globals.player.ent, &globals.player.s->Jump);

    startDouble = globals.player.ent.frame->mat.pos.y;
    startJump = startDouble;
    globals.player.CanJump = 0;
    globals.player.IsJumping = 1;
    globals.player.Jump_CanDouble = 1;
    globals.player.IsDJumping = 0;

    zCameraSetBbounce(false);
    zEntPlayer_SNDStop(ePlayerSnd_BubbleBashStart);
    zEntPlayer_SNDPlay(ePlayerSnd_BubbleBashHit1, 0.0f);
    return 0;
}

static U32 BbowlCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    if (zEntTeleportBox_playerIn())
    {
        return false;
    }

    return (!globals.player.ControlOff && ((globals.pad0->pressed & XPAD_BUTTON_O)) &&
            globals.player.g.PowerUp[0]);
}

static U32 BbowlCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zEntPlayer_SNDPlay(ePlayerSnd_BowlWindup, 0.0f);
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);

    xEntFrame* frame = globals.player.ent.frame;
    F32 x = (frame->mat.pos.x - frame->oldmat.pos.x) * last_update_dt;
    F32 z = (frame->mat.pos.z - frame->oldmat.pos.z) * last_update_dt;
    F32 speed2 = x * x + z * z;

    if (speed2 < globals.player.g.BubbleBowlMinSpeed * globals.player.g.BubbleBowlMinSpeed)
    {
        globals.player.bbowlInitVel = globals.player.g.BubbleBowlMinSpeed;
    }
    else
    {
        globals.player.bbowlInitVel = xsqrt(speed2);
    }

    frame->vel.x = globals.player.bbowlInitVel * globals.player.ent.model->Mat->at.x;
    frame->vel.z = globals.player.bbowlInitVel * globals.player.ent.model->Mat->at.z;

    sShouldBubbleBowl = 0;
    globals.player.IsBubbleBowling = 1;
    sBubbleBowlTimer = 0.0f;
    sBubbleBowlLastWindupTime = -1.0f;

    return 0;
}

static U32 BbowlWindupEndCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (anim->Time < sBubbleBowlLastWindupTime && sShouldBubbleBowl)
    {
        return true;
    }
    sBubbleBowlLastWindupTime = anim->Time;
    return false;
}

static U32 BbowlTossEndCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    xEntBoulder_BubbleBowl(sBubbleBowlMultiplier);
    globals.player.IsBubbleBowling = false;
    zEntPlayer_SNDStop(ePlayerSnd_BowlWindup);
    zEntPlayer_SNDPlay(ePlayerSnd_BowlRelease, 0.0f);
    return false;
}

static U32 BbowlRecoverWalkCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            WalkCheck(tran, anim, param_3));
}

static U32 BbowlRecoverRunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunCheck(tran, anim, param_3));
}

static U32 BbowlRecoverRunScaredCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunScaredCheck(tran, anim, param_3));
}

static U32 BbowlRecoverRunVictoryCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunVictoryCheck(tran, anim, param_3));
}

static U32 BbowlRecoverRunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunOutOfWorldCheck(tran, anim, param_3));
}

static U32 BbowlRecoverRunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunSlipCheck(tran, anim, param_3));
}

static U32 GooCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.ControlOff & 0x8000)
    {
        return false;
    }

    if (globals.player.cheat_mode)
    {
        return false;
    }

    return in_goo;
}

static U32 GooDeathCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    // Decompiled, but instructions are out of order?
    globals.player.Health = 0;
    globals.player.DamageTimer = 10.0;
    zGooStopTide();
    sPlayerDiedLastTime = 1;
    zEntPlayerControlOff(CONTROL_OWNER_GLOBAL);
    return false;
}

static U32 Hit01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 1);
}

static U32 Hit01CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 2;
    return false;
}

static U32 Hit02Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 2);
}

static U32 Hit02CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 3;
    return false;
}

static U32 Hit03Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 3);
}

static U32 Hit03CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 4;
    return false;
}

static U32 Hit04Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 4);
}

static U32 Hit04CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 5;
    return false;
}

static U32 Hit05Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 5);
}

static U32 Hit05CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 1;
    return false;
}

static U32 Defeated01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    // it seems like this is a useless but necessary function call
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags == 0;
}

static U32 Defeated02Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 2;
}

static U32 Defeated03Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 3;
}

static U32 Defeated04Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 4;
}

static U32 Defeated05Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 5;
}

// Equivalent: sda relocation meme
static U32 DefeatedCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_dead_anim++;

    if (gCurrentPlayer == eCurrentPlayerSpongeBob)
    {
        S32 cheats = zGameExtras_CheatFlags();
        if ((cheats & 0x2000000) || xurand() < 0.17f)
        {
            zShrapnelAsset* deathShrap =
                (zShrapnelAsset*)xSTFindAsset(xStrHash("spongebob_shrapnel"), NULL);
            if (deathShrap && deathShrap->initCB)
            {
                xEntHide(&globals.player.ent);
                deathShrap->initCB(deathShrap, globals.player.ent.model, NULL, NULL);
                globals.player.ent.frame->vel.x = 0.0f;
                globals.player.ent.frame->vel.y = 0.0f;
                globals.player.ent.frame->vel.z = 0.0f;
                globals.player.KnockBackTimer = 0.0f;
                globals.player.KnockIntoAirTimer = 0.0f;
            }
        }
    }

    return 0;
}

static U32 SpatulaGrabCheck(xAnimTransition*, xAnimSingle*, void*)
{
    // much different than PS2 version of this function
    return sSpatulaGrabbed;
}

static S32 zEntPlayer_InBossBattle()
{
    return (globals.sceneCur->sceneID == 'B101' || // Robo Sandy
            globals.sceneCur->sceneID == 'B201' || // Robo Patrick
            globals.sceneCur->sceneID == 'B302' || // Robo Spongebob
            globals.sceneCur->sceneID == 'B303' // Brain Fight
    );
}

// Equivalent: scheduling
static U32 SpatulaGrabCB(xAnimTransition*, xAnimSingle*, void* data)
{
    sSpatulaGrabbed = 0;
    tslide_inair_tmr = 0.0f;
    tslide_dbl_tmr = 0.0f;
    globals.player.SlideTrackDecay = 0.0f;
    tslide_ground = 0;

    xEnt* ent = (xEnt*)data;
    ent->frame->vel.x = 0.0f;
    if (ent->frame->vel.y > 0.0f)
    {
        ent->frame->vel.y = 0.0f;
    }
    ent->frame->vel.z = 0.0f;

    globals.player.KnockBackTimer = 0.0f;
    globals.player.KnockIntoAirTimer = 0.0f;

    if (globals.autoSaveFeature)
    {
        if (zEntPlayer_InBossBattle())
        {
            gWaitingToAutoSave = 1;
        }
        else
        {
            zSaveLoadPreAutoSave(true);
        }
    }

    xCollis rcoll;
    xVec3 cam;
    xVec3 center;
    xRay3 r;
    rcoll.flags = 0;

    xVec3Copy(&center, &globals.player.ent.bound.cyl.center);

    xVec3Copy(&cam, &globals.camera.mat.pos);

    xVec3Copy(&r.origin, &center);
    xVec3Sub(&r.dir, &cam, &center);
    r.max_t = xVec3Length(&r.dir);
    F32 one_len = 1.0f / MAX(r.max_t, 0.00001f);
    xVec3SMul(&r.dir, &r.dir, one_len);
    r.flags = 0x800;

    xRayHitsScene(globals.sceneCur, &r, &rcoll);
    if ((rcoll.flags & 1) == 0)
    {
        zCameraSetReward(1);
    }

    zCameraDisableInput();
    F32 delay = 0.0f;
    if (gCurrentPlayer == eCurrentPlayerSpongeBob)
    {
        delay = 4.4f;
    }
    else if (gCurrentPlayer == eCurrentPlayerPatrick)
    {
        delay = 1.8f;
    }
    else if (gCurrentPlayer == eCurrentPlayerSandy)
    {
        delay = 1.43f;
    }

    zEntPlayer_SNDPlay(ePlayerSnd_PickupSpatulaComment, delay);

    return 0;
}

// equivalent: sda relocation scheduling
static U32 SpatulaGrabStopCB(xAnimTransition*, xAnimSingle*, void* data)
{
    S32 result;
    xBase* sendTo;

    idle_tmr = 0.0f;
    if (globals.autoSaveFeature)
    {
        if (zEntPlayer_InBossBattle())
        {
            gWaitingToAutoSave = 1;
        }
        else
        {
            if (zSaveLoad_DoAutoSave() < 0)
            {
                sendTo = zSceneFindObject(xStrHash("MNU4 AUTO SAVE FAILED"));
                if (sendTo)
                {
                    zEntEvent(sendTo, eEventVisible);
                }
            }

            sendTo = zSceneFindObject(xStrHash("SAVING GAME ICON UI"));
            if (sendTo)
            {
                zEntEvent(sendTo, eEventInvisible);
            }
            zSaveLoadPreAutoSave(false);
        }
    }

    zCameraEnableTracking(CO_REWARDANIM);
    xCameraSetFOV(&xglobals->camera, 75.0f);
    zCameraSetReward(0);
    zMusicSetVolume(1.0f, 0.75f);
    zCameraEnableInput();
    zEntPlayerControlOn(CONTROL_OWNER_REWARDANIM);
    return 0;
}

static U32 LCopterCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState && sLassoInfo->canCopter && !globals.player.ControlOff &&
            (globals.pad0->pressed & XPAD_BUTTON_X));
}

// Equivalent: sda relocation scheduling
static U32 LCopterCB(xAnimTransition*, xAnimSingle*, void* data)
{
    xEnt* ent = (xEnt*)data;

    zEntPlayer_SNDPlay(ePlayerSnd_Heli, 0.0f);
    zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_HeliComment1, ePlayerStreamSnd_HeliComment3,
                                   0.1f);

    globals.player.ent.frame->vel.x = 0.0f;
    globals.player.ent.frame->vel.y = -1.0f;
    globals.player.ent.frame->vel.z = 0.0f;

    sLassoInfo->copterTime = 5.0f;
    zLasso_InitTimer(sLasso, 0.25f);
    sLasso->flags = 0x1243;
    sLasso->tgRadius = 1.25f;
    xVec3AddScaled(&sLasso->crCenter, (xVec3*)&(ent->model->Mat->up), 0.25f);

    tslide_inair_tmr = 0.0f;
    tslide_dbl_tmr = 0.0f;
    tslide_ground = 0;
    globals.player.SlideTrackDecay = 0.0f;
    return 0;
}

// Equivalent: sda relocation scheduling
static U32 StopLCopterCB(xAnimTransition*, xAnimSingle*, void* data)
{
    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    idle_tmr = 0.0f;
    sLassoInfo->copterTime = -1.0f;
    sLassoInfo->canCopter = 0;
    sLasso->flags = 0;
    return 0;
}

static U32 WallJumpFlightLandCallback(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.WallJumpState = k_WALLJUMP_LAND;
    return 0;
}

static U32 WallJumpLandFlightCallback(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.WallJumpState = k_WALLJUMP_FLIGHT;
    return 0;
}

static U32 JumpCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (globals.player.CanJump && !globals.player.ControlOff &&
            (globals.pad0->pressed & XPAD_BUTTON_X));
}

static U32 BounceStopLCopterCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    StopLCopterCB(tran, anim, param_3);
    BounceCB(tran, anim, param_3);
    return 0;
}

static U32 LassoStartCheck(xAnimTransition*, xAnimSingle*, void*)
{
    xNPCBasic* npc = (xNPCBasic*)sLassoInfo->target;

    if (npc != NULL)
    {
        if (npc->baseType == 0x2b)
        {
            if ((npc->SelfType() & 0xffffff00) != 0x4e545400)
            {
                return ((zNPCCommon*)sLassoInfo->target)->GimmeLassInfo() != NULL;
            }
        }

        return 1;
    }

    return 0;
}

static U32 LassoLostTargetCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return !sLassoInfo->target;
}

static U32 LassoStraightToDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sLasso->flags & (1 << 11);
}

static U32 LassoAboutToDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return 0;
}

static U32 LassoDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sLasso->flags & (1 << 11);
}

static U32 LassoReyankCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return 0;
}

bool zEntPlayer_IsSneaking()
{
    if (gCurrentPlayer != eCurrentPlayerSpongeBob)
    {
        return false;
    }

    U32 flags = globals.player.ent.model->Anim->Single->State->UserFlags;
    if ((flags & 1) != 0 || (flags & 0x1e) == 2 || (flags & 0x1e) == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#if 0
// The cmpw instruction used in `if ((S32)non_choices[j] - 1 == i)` has its
// operands in the wrong order.
S32 load_talk_filter(U8* filter, xModelAssetParam* params, U32 params_size, S32 max_size)
{
    S32 found = 0;
    F32* non_choices = (F32*)xMemPushTemp(max_size * 4);
    S32 size = zParamGetFloatList(params, params_size, zEntPlayer_Strings + 0x29ec, max_size,
                                    non_choices, non_choices);

    for (S32 i = 0; i < max_size; i++)
    {
        bool skip = false;
        for (S32 j = 0; j < size; j++)
        {
            if ((S32)non_choices[j] - 1 == i)
            {
                skip = true;
                break;
            }
        }

        if (!skip)
        {
            filter[found++] = i;
        }
    }

    if (found <= 0)
    {
        found = 1;
        filter[0] = 0;
    }
    xMemPopTemp(non_choices);
    return found;
}
#endif

static U32 count_talk_anims(xAnimTable* anims)
{
    xAnimFile* firstData = anims->StateList->Data;
    char talkAnimName[20];
    S32 talkAnimCount = 0;

    sprintf(talkAnimName, "Talk%02d", 1);

    for (xAnimState* state = anims->StateList; state != NULL; state = state->Next)
    {
        if (stricmp(state->Name, talkAnimName) == 0)
        {
            if (state->Data == firstData || ++talkAnimCount >= 4)
            {
                break;
            }
            sprintf(talkAnimName, "Talk%02d", talkAnimCount + 1);
        }
    }

    return talkAnimCount;
}

static void load_player_ini(zPlayerSettings& ps, xModelInstance& model, xModelAssetParam* modelass,
                            U32 params_size)
{
    U32 count;
    count = count_talk_anims(model.Anim->Table);
    ps.talk_anims = count;
    count = load_talk_filter(ps.talk_filter, modelass, params_size, ps.talk_anims);
    ps.talk_filter_size = count;
}

static void load_player_ini()
{
    xModelAssetParam* modelass;
    U32 size[3];

    if (globals.player.model_spongebob != NULL)
    {
        modelass = zEntGetModelParams(globals.player.ent.asset->modelInfoID, &size[2]);
        load_player_ini(globals.player.sb, *globals.player.model_spongebob, modelass, size[2]);
    }

    if (globals.player.model_patrick != NULL)
    {
        // TODO: figure out hardcoded int
        modelass = zEntGetModelParams(0x791025ac, &size[1]);
        load_player_ini(globals.player.patrick, *globals.player.model_patrick, modelass, size[1]);
    }

    if (globals.player.model_sandy != NULL)
    {
        // TODO: figure out hardcoded int
        modelass = zEntGetModelParams(0xc0e34b23, &size[0]);
        load_player_ini(globals.player.sandy, *globals.player.model_sandy, modelass, size[0]);
    }
}

void zEntPlayer_Load(xEnt* ent, xSerial* serial)
{
    return;
}

void zEntPlayer_PatrickLaunch(xEnt* patLauncher)
{
    globals.player.carry.patLauncher = patLauncher;
}

S32 zEntPlayer_Damage(xBase* src, U32 damage, const xVec3* knockback)
{
    S32 newDamage = zEntPlayer_Damage(src, damage);

    if (!newDamage)
    {
        return false;
    }

    if (knockback)
    {
        globals.player.ent.frame->vel.x = knockback->x;
        globals.player.ent.frame->vel.y = knockback->y;
        globals.player.ent.frame->vel.z = knockback->z;
    }

    return true;
}

void zEntPlayer_GiveHealth(S32 quantity)
{
    if (quantity < 0 && -quantity > (S32)globals.player.Health)
    {
        globals.player.Health = 0;
        return;
    }

    U32 sum = globals.player.Health + quantity;
    U32 maxHealth = globals.player.MaxHealth;
    globals.player.Health = sum;

    if (sum > maxHealth)
    {
        globals.player.Health = maxHealth;
    }
}

#if 0

void zEntPlayer_GiveSpatula(S32)
{
    sSpatulaGrabbed = 1;

    if (globals.player.ControlOffTimer < 0.1f)
    {
        globals.player.ControlOffTimer = 0.1f;
    }

    zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, 30.0f, 0x104, NPC_TYPE_UNKNOWN);
    zMusicSetVolume(0.5f, 0.2f);
}
#endif

void zEntPlayer_GiveShinyObject(S32 quantity)
{
    if (quantity < 0 && -quantity > (S32)globals.player.Inv_Shiny)
    {
        globals.player.Inv_Shiny = 0;
        return;
    }

    U32 sum = globals.player.Inv_Shiny + quantity;
    U32 maxShinies = SHINY_MAX;
    globals.player.Inv_Shiny = sum;

    if (sum > maxShinies)
    {
        globals.player.Inv_Shiny = maxShinies;
    }
}

void zEntPlayer_GivePatsSocksCurrentLevel(S32 quantity)
{
    U32 level = zSceneGetLevelIndex();

    if (quantity < 0 && -quantity > (S32)globals.player.Inv_PatsSock_Total)
    {
        globals.player.Inv_PatsSock_Total = 0;
    }
    else
    {
        globals.player.Inv_PatsSock_Total += quantity;
    }

    if (quantity < 0 && -quantity > (S32)globals.player.Inv_PatsSock[level])
    {
        globals.player.Inv_PatsSock[level] = 0;
    }
    else
    {
        globals.player.Inv_PatsSock[level] += quantity;
    }

    globals.player.Inv_PatsSock_CurrentLevel = globals.player.Inv_PatsSock[level];

    if (quantity > 0)
    {
        zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, 30.0f, 0x104, NPC_TYPE_UNKNOWN);
    }
}

void zEntPlayer_GiveLevelPickupCurrentLevel(S32 quantity)
{
    U32 level = zSceneGetLevelIndex();

    if (quantity < 0 && -quantity > (S32)globals.player.Inv_LevelPickups[level])
    {
        globals.player.Inv_LevelPickups[level] = 0;
    }
    else
    {
        globals.player.Inv_LevelPickups[level] += quantity;
    }

    globals.player.Inv_LevelPickups_CurrentLevel = globals.player.Inv_LevelPickups[level];

    if (quantity > 0)
    {
        zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, 30.0f, 0x104, NPC_TYPE_UNKNOWN);
    }
}

void zEntPlayer_SNDSetVol(_tagePlayerSnd player_snd, F32 new_vol)
{
    if (sPlayerSnd[gCurrentPlayer][player_snd])
    {
        xSndSetVol(sPlayerSndID[gCurrentPlayer][player_snd], new_vol);
    }
}

void zEntPlayer_SNDSetPitch(_tagePlayerSnd player_snd, F32 new_pitch)
{
    if (sPlayerSnd[gCurrentPlayer][player_snd])
    {
        xSndSetPitch(sPlayerSndID[gCurrentPlayer][player_snd], new_pitch);
    }
}

void zEntPlayer_SNDNotifyPlaying(U32 id)
{
    sCurrentStreamSndID = id;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// TODO: Move these to their headers

WEAK U8 xSndIsPlaying(U32 assetID)
{
    return iSndIsPlaying(assetID);
}

WEAK S32 zNPCTiki::IsHealthy()
{
    return flg_vuln != 0;
}

WEAK void zCameraTranslate(xCamera* cam, xVec3* pos)
{
    zCameraTranslate(cam, pos->x, pos->y, pos->z);
}

// TODO: This belongs in zNPCSupport.h
// but the compiler put it here for some reason?
WEAK xVec3* NPCC_rightDir(xEnt* ent)
{
    // So this is actually a reference to a struct RwV3D
    // which is the exact same as xVec3, but typed differently.
    // TODO: figure out what to do with these duplicate types
    return (xVec3*)&ent->model->Mat->right;
}

WEAK xVec3* NPCC_faceDir(xEnt* ent)
{
    // TODO: see note in previous function
    return (xVec3*)&ent->model->Mat->at;
}

WEAK xVec3* NPCC_upDir(xEnt* ent)
{
    // TODO: see note in previous function
    return (xVec3*)&ent->model->Mat->up;
}

WEAK S32 zGooIs(xEnt* ent)
{
    F32 temp;
    return zGooIs(ent, temp, 0);
}
