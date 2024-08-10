#include "zFX.h"
#include <types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "iAnim.h"
#include "iMath.h"
#include "iSnd.h"

#include "xDebug.h"
#include "xEnt.h"
#include "xEntBoulder.h"
#include "xEvent.h"
#include "xJaw.h"
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
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntDestructObj.h"
#include "zEntPlayer.h"
#include "zEntPlayerBungeeState.h"
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
#include "zPlatform.h"
#include "zRumble.h"
#include "zSaveLoad.h"
#include "zSurface.h"
#include "zThrown.h"

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

// Multidimensional sound arrays for each player type
static U32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total] = {};
static U32 sPlayerSndRand[ePlayer_MAXTYPES][ePlayerSnd_Total] = {};
static U32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total] = {};
static _tagRumbleType sPlayerRumbleType[ePlayerSnd_Total];
static F32 sPlayerRumbleTime[ePlayerSnd_Total];
static F32 sPlayerSndFxVolume[ePlayerSnd_Total] = {};
static U32 sPlayerStreamSnd[ePlayer_MAXTYPES][ePlayerStreamSnd_Total] = {};
static U32 sPlayerStreamSndRand[ePlayer_MAXTYPES][ePlayerStreamSnd_Total] = {};
static U32 sCurrentStreamSndID;
static F32 sPlayerSndStreamVolume[ePlayerStreamSnd_Total] = {};
static F32 sPlayerSndSneakDelay;
static S32 sPlayerDiedLastTime;
static S32 sPlayerIgnoreSound;
static S32 sPlayerAttackInAir;

#define MAX_DELAYED_SOUNDS 8
static zDelayedStreamSound sDelayedSound[MAX_DELAYED_SOUNDS];
static zPlayerSndTimer sPlayerStreamSndTimer[ePlayerStreamSnd_Total] = {};

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

static S32 sGooKnockedToSafety;
static F32 sGooKnockedTimer;
xEntBoulder* boulderVehicle;
static F32 bvTimeToIdle;
static S32 boulderRollShouldEnd;
static S32 boulderRollShouldStart;
static zParEmitter* sEmitSpinBubbles;
static zParEmitter* sEmitSundae;
static zParEmitter* sEmitStankBreath;
static class xModelTag sStankTag[3];

static RpAtomic* sReticleModel;
static F32 sReticleRot;
static F32 sReticleAlpha;
static xMat4x3 sReticleMat;
static S32 sTypeOfTarget;
static F32 sTimeToRetarget;
class xEnt* gReticleTarget;

// This struct was anonymous in the dwarf but it seemed to do better with codegen to name it
// so I can hold a pointer to it and access the members that way.
static const struct sock
{
    U32 level;
    U32 total;
} patsock_totals[] = { { 'HB\0\0', 8 },
                       { 'JF\0\0', 14 },
                       { 'BB\0\0', 9 },
                       { 'GL\0\0', 11 },
                       { 'BC\0\0', 4 },
                       { 'RB\0\0', 9 },
                       { 'SM\0\0', 10 },
                       { 'KF\0\0', 7 },
                       { 'GY\0\0', 3 },
                       { 'DB\0\0', 5 },
                       {} };

static F32 update_dt = 1.0f / 60.0f;
static F32 last_update_dt = 1.0f / 60.0f;
static xVec3 update_motion;
static xVec3 req_motion;
static xVec3 precollide_motion;

xMat4x3 gPlayerAbsMat;

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
static S32 player_hit_anim = 1;
static U32 player_dead_anim = 1;
static U32 player_idle_anim;

static xVec3 last_center;
static U32 last_frame;

static F32 sBubbleBowlLastWindupTime = -1.0f;
static F32 sBubbleBowlMultiplier = 1.0f;
static U32 sShouldBubbleBowl;
static F32 sBubbleBowlTimer;
static U32 sSpatulaGrabbed;
S32 gWaitingToAutoSave;

static enum {
    WallJumpResult_NoJump,
    WallJumpResult_Jump,
} sWallJumpResult;
static class xVec3 sWallNormal;
static class zSurfaceProps* sWallCollisionSurface;
static float sTongueDblSpeedMult;

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
    globals.player.DamageTimer = 10.0f;
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
        if ((cheats & 0x2000000) || xurand() < 0.175f)
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

// Equivalent: static initializer scheduling (probably sda relocations?)
static void DoWallJumpCheck()
{
    sWallJumpResult = WallJumpResult_NoJump;
    xEnt* ent = &globals.player.ent;

    static F32 sAtdist = 0.65f;
    static F32 sSweptrad = 0.4f;
    static F32 sVerticalCos = 0.2588f;

    xVec3 start;
    start.x = ent->model->Mat->pos.x;
    start.y = ent->model->Mat->pos.y + ent->bound.cyl.r;
    start.z = ent->model->Mat->pos.z;

    // hack: compiler isn't calling operator=
    xVec3 end;
    end.operator=(start);
    end.x += ent->model->Mat->at.x * sAtdist;
    end.z += ent->model->Mat->at.z * sAtdist;

    xSweptSphere sws;
    xSweptSpherePrepare(&sws, &start, &end, sSweptrad);

    if (xSweptSphereToScene(&sws, globals.sceneCur, ent, 0x16))
    {
        xSweptSphereGetResults(&sws);

        xSurface* surf;
        if (sws.optr && sws.mptr)
        {
            surf = sws.mptr->Surf;
        }
        else
        {
            surf = zSurfaceGetSurface(sws.oid);
        }

        if (!surf)
        {
            return;
        }

        zSurfaceProps* surfaceProperties = (zSurfaceProps*)surf->moprops;

        if (!(surfaceProperties->asset->phys_flags & 0x20))
        {
            return;
        }

        if (xabs(sws.worldNormal.y) < sVerticalCos)
        {
            if (xVec3Dot(&sws.worldNormal, &sws.worldPolynorm) > 0.999f)
            {
                sWallNormal = sws.worldNormal;
                sWallJumpResult = WallJumpResult_Jump;
                sWallCollisionSurface = surfaceProperties;
            }
        }
    }
}

static U32 WallJumpLaunchCheck(class xAnimTransition*, class xAnimSingle*, void*)
{
    if (globals.player.ControlOff || !(globals.pad0->pressed & XPAD_BUTTON_X) ||
        !globals.player.IsJumping || globals.player.s->Wall.PeakHeight <= 0.0f)
    {
        return false;
    }
    return sWallJumpResult == WallJumpResult_Jump;
}

static U32 WallJumpLaunchCallback(class xAnimTransition*, class xAnimSingle*, void*)
{
    globals.player.WallJumpState = k_WALLJUMP_LAUNCH;
    zCameraEnableWallJump(&globals.camera, sWallNormal);
    sWallJumpResult = WallJumpResult_NoJump;
    return 0;
}

static float CalcJumpImpulse(zJumpParam*, const zPlayerSettings*);

// Really strange non-matches here, seem unlike most things in this TU. Look equivalent though?
static U32 WallJumpCallback(class xAnimTransition*, class xAnimSingle*, void*)
{
    zJumpParam wallParam = globals.player.s->Wall;
    wallParam.PeakHeight *= sWallCollisionSurface->asset->walljump_scale_y;

    CalcJumpImpulse(&wallParam, NULL);
    zEntPlayerJumpStart(&globals.player.ent, &wallParam);
    zEntPlayer_SNDPlay(ePlayerSnd_Jump, 0.0f);

    xEntFrame* frame = globals.player.ent.frame;
    // Really weird reordering of these instructions
    globals.player.WallJumpState = k_WALLJUMP_FLIGHT;
    globals.player.IsDJumping = 0;

    xVec3* velocity = &globals.player.ent.frame->vel;
    velocity->x = 0.0f;
    velocity->z = 0.0f;

    xVec3 u;
    xVec3SMul(&u, &sWallNormal,
              globals.player.s->WallJumpVelocity * sWallCollisionSurface->asset->walljump_scale_xz);
    xVec3Add(velocity, velocity, &u);
    xVec3Copy(&frame->dvel, &g_O3);
    xVec3Copy(&frame->oldvel, velocity);
    xMat3x3LookAt((xMat3x3*)globals.player.ent.model->Mat, &sWallNormal, &g_O3);
    xVec3Copy(&frame->dpos, &g_O3);

    frame->drot.angle = 0.0f;
    xVec3Copy(&frame->oldmat.pos, &frame->mat.pos);

    return 0;
}

static U32 WallJumpFlightLandCheck(class xAnimTransition*, class xAnimSingle*, void*)
{
    return sWallJumpResult == WallJumpResult_Jump;
}

static U32 WallJumpFlightLandCallback(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.WallJumpState = k_WALLJUMP_LAND;
    return 0;
}

static U32 WallJumpLandFlightCheck(class xAnimTransition*, class xAnimSingle*, void*)
{
    return sWallJumpResult != WallJumpResult_Jump;
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

static void zEntPlayerJumpAddDriver(xEnt* ent);
static U32 JumpCB(class xAnimTransition*, class xAnimSingle*, void*)
{
    if (globals.player.cheat_mode)
    {
        return 0;
    }

    zEntPlayerJumpStart(&globals.player.ent, &globals.player.s->Jump);
    zEntPlayerJumpAddDriver(&globals.player.ent);
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);
    zEntPlayer_SNDPlay(ePlayerSnd_Jump, 0.0f);
    startDouble = globals.player.ent.frame->mat.pos.y;
    startJump = startDouble;
    globals.player.CanJump = 0;
    globals.player.IsJumping = 1;

    return 0;
}

static U32 JumpApexCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    return globals.player.ent.model == globals.player.model_sandy && anim->State &&
                   anim->State->Name &&
                   (strcmp(anim->State->Name, "DJumpStart01") == 0 ||
                    strcmp(anim->State->Name, "DJumpLift01") == 0) ?
               (globals.player.ent.frame->vel.y <= 5.0f) :
               (globals.player.ent.frame->vel.y <= 0.001f);
}

static U32 BounceCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.Bounced == 1;
}

static U32 StunStartFallCB(xAnimTransition*, xAnimSingle*, void*)
{
    stun_power_tmr = 0;
    return 0;
}

static U32 StunRadiusCB(xAnimTransition*, xAnimSingle*, void*);

// Equivalent: sda relocation scheduling + regswap
static U32 BounceCB(xAnimTransition*, xAnimSingle*, void*)
{
    zCameraSetBbounce(true);
    globals.player.Bounced = 0;
    globals.player.Jump_CanDouble = 1;
    globals.player.Jump_CanFloat = 1;
    sLassoInfo->canCopter = 1;

    return 0;
}

static U32 BounceStopLCopterCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    StopLCopterCB(tran, anim, param_3);
    BounceCB(tran, anim, param_3);
    return 0;
}

static U32 DblJumpCheck(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.player.s->Double.PeakHeight <= 0.0f)
    {
        return 0;
    }

    if (globals.player.ControlOff || !(globals.pad0->pressed & XPAD_BUTTON_X) ||
        !globals.player.Jump_CanDouble)
    {
        return 0;
    }

    zEntPlayer_SNDPlay(ePlayerSnd_DoubleJump, 0.0f);

    return sWallJumpResult != WallJumpResult_Jump;
}

// Equivalent: regswaps and a sda relocation scheduling meme, may be cause some/all the swaps
static U32 DblJumpCB(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.player.cheat_mode)
    {
        return 0;
    }

    zEntPlayerJumpStart(&globals.player.ent, &globals.player.s->Double);
    globals.player.Jump_CanDouble = 0;
    startDouble = globals.player.ent.frame->mat.pos.y;
    globals.player.IsDJumping = 1;
    globals.player.Bounced = 0;
    sLasso->flags = NULL;

    if (tslide_inair_tmr)
    {
        // load order swap
        F32 dirx = update_motion.x;
        F32 dirz = update_motion.z;
        F32 dbldirx = SQR(dirx);
        F32 dbldirz = SQR(dirz);

        F32 speed;
        F32 dblspeed;
        F32 len2 = dbldirx + dbldirz;
        if (xabs(len2 - 1.0f) <= 0.00001f)
        {
            dirx = update_motion.x;
            speed = 1.0f;
        }
        else if (xabs(len2) <= 0.00001f)
        {
            dirx = 0.0f;
            dirz = 0.0f;
            speed = 0.0f;
        }
        else
        {
            speed = xsqrt(dbldirx + dbldirz);
            dirx = update_motion.x * (1.0f / speed);
            dirz = update_motion.z * (1.0f / speed);
        }

        F32 len_inv = speed / update_dt;
        if (globals.player.g.SlideVelDblBoost *
                (dirx * globals.player.SlideTrackDir.x + dirz * globals.player.SlideTrackDir.z) >
            len_inv)
        {
            globals.player.ent.frame->vel.x += dirx * len_inv;
            globals.player.ent.frame->vel.z += dirz * len_inv;
            tslide_dbl_tmr = update_dt;
        }
    }
    return 0;
}

// equivalent: sda relocation optimization
static U32 TongueDblJumpCB(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    DblJumpCB(tran, anim, data);
    sTongueDblSpeedMult =
        (1.1f * (2.0f * anim->State->Data->Duration - anim->Time)) / anim->State->Data->Duration;
    anim->CurrentSpeed *= sTongueDblSpeedMult;
    return 0;
}

static U32 TongueDblSpinCB(xAnimTransition*, xAnimSingle* anim, void*)
{
    anim->CurrentSpeed *= sTongueDblSpeedMult;
    return 0;
}

static U32 FallCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    return !((anim && anim->State &&
              (strcmp(anim->State->Name, "LCopter01") == 0 ||
               strcmp(anim->State->Name, "LCopterHeadUp01") == 0)) &&
             (globals.player.ControlOff == 0 && (globals.pad0->on & XPAD_BUTTON_X) &&
              sLassoInfo->copterTime > 0.0f)) &&
           globals.player.JumpState != 0 && globals.player.JumpState != 1;
}

static U32 BoulderRollMoveCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return bvTimeToIdle > 0.0f && boulderVehicle;
}

static U32 BoulderRollIdleCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return bvTimeToIdle <= 0.0f && boulderVehicle;
}

static U32 BoulderRollCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return boulderRollShouldStart && boulderVehicle;
}

static U32 BoulderRollWindupCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_BoulderStart, 0.0f);
    zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_SpongeBallComment1,
                                   ePlayerStreamSnd_SpongeBallComment3, 0.2f);
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);
    return 0;
}

static void zEntPlayer_BoulderVehicleUpdate(xEnt* ent, xScene* sc, F32 dt);
static void zEntPlayer_BoulderVehicleMove(xEnt*, xScene*, F32, xEntFrame* frame);
static void zEntPlayer_BoulderVehicleRender(xEnt*);

static U32 BoulderRollCB(xAnimTransition*, xAnimSingle*, void*)
{
    xEntHide(&globals.player.ent);
    xEntBoulder_Reset(boulderVehicle, globals.sceneCur);
    xVec3Copy((xVec3*)&boulderVehicle->model->Mat->pos,
              (xVec3*)&globals.player.ent.model->Mat->pos);

    boulderVehicle->model->Mat->pos.y += boulderVehicle->bound.sph.r;
    xVec3SubFrom((xVec3*)&boulderVehicle->model->Mat->pos,
                 (xVec3*)&boulderVehicle->model->Data->boundingSphere.center);

    globals.player.ent.update = zEntPlayer_BoulderVehicleUpdate;
    globals.player.ent.move = zEntPlayer_BoulderVehicleMove;
    globals.player.ent.render = zEntPlayer_BoulderVehicleRender;
    boulderVehicle->vel.y = 0.0f;
    boulderVehicle->vel.x = globals.player.PredictCurrDir.x * globals.player.PredictCurrVel;
    boulderVehicle->vel.z = globals.player.PredictCurrDir.z * globals.player.PredictCurrVel;
    boulderVehicle->rotVec.x = boulderVehicle->vel.z;
    boulderVehicle->rotVec.y = 0.0f;
    boulderVehicle->rotVec.z = -boulderVehicle->vel.x;

    xVec3Normalize(&boulderVehicle->rotVec, &boulderVehicle->rotVec);
    boulderVehicle->angVel = xVec3Length(&boulderVehicle->vel) / boulderVehicle->bound.sph.r;

    xVec3Copy((xVec3*)&boulderVehicle->model->Mat->right,
              (xVec3*)&globals.player.ent.model->Mat->right);
    xVec3Copy((xVec3*)&boulderVehicle->model->Mat->at, (xVec3*)&globals.player.ent.model->Mat->at);
    xVec3Copy((xVec3*)&boulderVehicle->model->Mat->up, (xVec3*)&globals.player.ent.model->Mat->up);

    xParEmitterCustomSettings info;
    if (gPTankDisable)
    {
        info.custom_flags = 0x35e;
        xVec3Copy(&info.pos, (xVec3*)&boulderVehicle->model->Mat->pos);
        xVec3Copy(&info.vel, (xVec3*)&boulderVehicle->vel);

        if (xVec3Normalize(&info.vel, &info.vel) < 0.00001f)
        {
            info.vel.x = 0.0f;
            info.vel.y = 3.0f;
            info.vel.z = 0.0f;
        }
        else
        {
            xVec3SMulBy(&info.vel, 3.0f);
        }

        info.vel_angle_variation = DEG2RAD(270);
        info.rate.set(3000.0f, 3000.0f, 1.0f, 0.0f);
        info.life.set(0.75f, 0.75f, 1.0f, 0.0f);
        info.size_birth.set(0.25f, 0.25f, 1.0f, 0.0f);
        info.size_death.set(0.5f, 0.5f, 1.0f, 0.0f);

        xParEmitterEmitCustom(sEmitSpinBubbles, update_dt, &info);
        xVec3AddScaled(&info.pos, &boulderVehicle->vel, 10.0f * update_dt);
        xParEmitterEmitCustom(sEmitSpinBubbles, update_dt, &info);
    }
    else
    {
        zFX_SpawnBubbleHit((xVec3*)&boulderVehicle->model->Mat->pos, 50);
    }

    boulderRollShouldEnd = 0;
    zEntEvent(&globals.player.ent, eEventSpongeballOn);
    xEntBeginUpdate(boulderVehicle, globals.sceneCur, 0.00001f);
    xEntEndUpdate(boulderVehicle, globals.sceneCur, 0.00001f);
    xEntBoulder_RealBUpdate(boulderVehicle, &boulderVehicle->frame->mat.pos);
    boulderVehicle->lightKit = globals.player.ent.lightKit;
    boulderVehicle->model->LightKit = globals.player.ent.lightKit;

    return 0;
}

static U32 BoulderRollDoneCheck()
{
    if (globals.sceneCur->sceneID == 'PG12')
    {
        return 0;
    }

    return !globals.player.ControlOff &&
               (globals.pad0->pressed &
                (XPAD_BUTTON_TRIANGLE | XPAD_BUTTON_SQUARE | XPAD_BUTTON_O | XPAD_BUTTON_X)) ||
           boulderRollShouldEnd;
}

static void zEntPlayer_Update(xEnt* ent, xScene* sc, F32 dt);
static void zEntPlayer_Move(xEnt*, xScene*, F32, xEntFrame* frame);
static void zEntPlayer_Render(xEnt*);

// Equivalent: sda relocation and some float thing before info.rate.set
static U32 BoulderRollDoneCB()
{
    xEntShow(&globals.player.ent);
    zEntPlayer_SNDPlay(ePlayerSnd_BoulderEnd, 0.0f);

    xParEmitterCustomSettings info;
    if (gPTankDisable)
    {
        info.custom_flags = 0x35e;
        xVec3Copy(&info.pos, (xVec3*)&boulderVehicle->model->Mat->pos);
        xVec3Copy(&info.vel, (xVec3*)&boulderVehicle->vel);

        if (xVec3Normalize(&info.vel, &info.vel) < 0.00001f)
        {
            info.vel.x = 0.0f;
            info.vel.y = 3.0f;
            info.vel.z = 0.0f;
        }
        else
        {
            xVec3SMulBy(&info.vel, 3.0f);
        }

        info.vel_angle_variation = DEG2RAD(270);
        info.rate.set(3000.0f, 3000.0f, 1.0f, 0.0f);
        info.life.set(0.75f, 0.75f, 1.0f, 0.0f);
        info.size_birth.set(0.25f, 0.25f, 1.0f, 0.0f);
        info.size_death.set(0.5f, 0.5f, 1.0f, 0.0f);

        xParEmitterEmitCustom(sEmitSpinBubbles, update_dt, &info);
        xVec3AddScaled(&info.pos, &boulderVehicle->vel, 10.0f * update_dt);
        xParEmitterEmitCustom(sEmitSpinBubbles, update_dt, &info);
    }
    else
    {
        zFX_SpawnBubbleHit((xVec3*)&boulderVehicle->model->Mat->pos, 50);
    }

    globals.player.ent.update = zEntPlayer_Update;
    globals.player.ent.move = zEntPlayer_Move;
    globals.player.ent.render = zEntPlayer_Render;

    xEntBoulder_Kill(boulderVehicle);
    boulderRollShouldStart = 0;

    zEntEvent(&globals.player.ent, eEventSpongeballOff);
    idle_tmr = 0.0f;

    return 0;
}

static U32 SlideTrackCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.SlideTrackSliding & 1;
}

static U32 SlideTrackCB(xAnimTransition*, xAnimSingle*, void*)
{
    sLasso->flags = 0;
    globals.player.SlideTrackLean = 0.0f;

    if (globals.player.Health != 0 && sPlayerSndID[gCurrentPlayer][ePlayerSnd_SlideLoop] == 0)
    {
        zEntPlayer_SNDPlay(ePlayerSnd_SlideLoop, 0.0f);
    }

    if (gCurrentPlayer == eCurrentPlayerSandy)
    {
        globals.player.Jump_CanDouble = 1;
    }

    zEntPlayerKillCarry();
    zEntPlayer_SNDStop(ePlayerSnd_SlipLoop);

    return 0;
}

static U32 NoslideTrackCB(xAnimTransition*, xAnimSingle*, void*)
{
    idle_tmr = 0.0f;
    return 0;
}

static U32 NoslideTrackCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.SlideTrackSliding & 1) == 0 && globals.player.JumpState == 0;
}

static U32 TrackFallCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.SlideTrackSliding & 1) == 0 && globals.player.JumpState != 0;
}

static U32 TrackFallCB(xAnimTransition*, xAnimSingle*, void*)
{
    globals.player.JumpState = 2;
    globals.player.CanJump = 1;
    return 0;
}

static U32 TrackPrefallJumpCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.CanJump && !globals.player.ControlOff &&
           globals.pad0->pressed & XPAD_BUTTON_X && tslide_inair_tmr != 0.0f &&
           tslide_inair_tmr < 0.25f;
}

static U32 LedgeGrabCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.s->ledge.tmr == -1.0f;
}

static U32 LedgeGrabCB(xAnimTransition*, xAnimSingle*, void* object)
{
    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    globals.player.s->ledge.tmr = 0.00001f;
    // FIXME: figure out the type of object (local variable missing from dwarf)
    globals.player.s->ledge.startrot = *(*((F32**)object + 0x48 / 4) + 0xb8 / 4);

    F32 endrot = globals.player.s->ledge.endrot;
    F32 startrot = globals.player.s->ledge.startrot;
    if (startrot > endrot + PI)
    {
        globals.player.s->ledge.startrot -= 2 * PI;
    }
    else if (startrot < endrot - PI)
    {
        globals.player.s->ledge.startrot += 2 * PI;
    }

    sLasso->flags = 0;
    xCameraDoCollisions(0, 2);
    return 0;
}

// Equivalent: sda relocation scheduling
static U32 LedgeFinishCB(xAnimTransition*, xAnimSingle*, void* object)
{
    idle_tmr = 0.0f;
    globals.player.JumpState = 1;
    globals.player.JumpTimer = 0.0f;
    xCameraDoCollisions(1, 2);
    return 0;
}

static U32 PatrickGrabCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sGrabFound != 0;
}

static U32 PatrickGrabFailed(xAnimTransition*, xAnimSingle*, void*)
{
    return sGrabFailed != 0;
}

static U32 PatrickGrabKill(xAnimTransition*, xAnimSingle*, void*)
{
    return globals.player.carry.grabbed == NULL;
}

static U32 PatrickGrabThrow(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.player.cheat_mode)
    {
        return 0;
    }

    return !globals.player.ControlOff && globals.pad0->pressed & XPAD_BUTTON_O;
}

static U32 PatrickAttackCheck(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.player.cheat_mode || zEntTeleportBox_playerIn())
    {
        return 0;
    }

    return !globals.player.ControlOff && globals.pad0->pressed & XPAD_BUTTON_TRIANGLE;
}

static U32 PatrickStunCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return !globals.player.ControlOff && globals.pad0->pressed & XPAD_BUTTON_O;
}

// Equivalent: scheduling
static U32 PatrickMeleeCB(xAnimTransition*, xAnimSingle*, void*)
{
    globals.player.DoMeleeCheck = 1;
    zEntPlayer_SNDPlay(ePlayerSnd_BellyMelee, 0.0f);
    return 0;
}

static U32 PatrickGrabCB(xAnimTransition* tran, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_Lift1, 0.0f);
    if ((xrand() & 3) == 3)
    {
        zEntPlayer_SNDPlayStream(ePlayerStreamSnd_Lift1);
    }

    globals.player.carry.grabbed = sGrabFound;
    globals.player.carry.grabTarget = 1;
    globals.player.carry.grabYclear = 0;

    if (sGrabFound->baseType == eBaseTypeBoulder)
    {
        globals.player.carry.targetRot =
            xatan2(sGrabFound->bound.sph.center.x - globals.player.ent.frame->mat.pos.x,
                   sGrabFound->bound.sph.center.z - globals.player.ent.frame->mat.pos.z);
    }
    else
    {
        globals.player.carry.targetRot =
            xatan2(sGrabFound->model->Mat->pos.x - globals.player.ent.frame->mat.pos.x,
                   sGrabFound->model->Mat->pos.z - globals.player.ent.frame->mat.pos.z);
    }

    globals.player.carry.grabLerpLast = 0.0f;

    xAnimState* stat =
        xAnimTableGetState(globals.player.ent.model->Anim->Table, "Carry_PickupItem");
    if (stat)
    {
        xVec3 tmptran;
        xQuat tmpquat;
        iAnimEval(stat->Data->RawData[0], 1.0 / 30.0f, 1, &tmptran, &tmpquat);

        xMat4x3 objMat;
        xQuatToMat(&tmpquat, &objMat);
        xMat4x3 targetMat;
        objMat.pos = tmptran;
        xMat3x3Rot(&targetMat, &g_Y3, globals.player.carry.targetRot);
        targetMat.pos = globals.player.ent.frame->mat.pos;

        xMat4x3Mul(&objMat, &objMat, &targetMat);

        if (globals.player.carry.grabbed->baseType == '/')
        {
            globals.player.carry.grabOffset.x = objMat.pos.x - sGrabFound->bound.sph.center.x;
            globals.player.carry.grabOffset.y =
                sGrabFound->bound.sph.r + (objMat.pos.y - sGrabFound->bound.sph.center.y);
            globals.player.carry.grabOffset.z = objMat.pos.z - sGrabFound->bound.sph.center.z;
        }
        else
        {
            globals.player.carry.grabOffset.x = objMat.pos.x - sGrabFound->model->Mat->pos.x;
            globals.player.carry.grabOffset.y = objMat.pos.y - sGrabFound->model->Mat->pos.y;
            globals.player.carry.grabOffset.z = objMat.pos.z - sGrabFound->model->Mat->pos.z;
        }
    }
    else
    {
        globals.player.carry.grabOffset.x = 0.0f;
        globals.player.carry.grabOffset.y = 0.0f;
        globals.player.carry.grabOffset.z = 0.0f;
    }

    xMat3x3Rot(&globals.player.carry.spin, &g_Y3, -globals.player.carry.targetRot);
    xMat3x3Mul(&globals.player.carry.spin, (xMat3x3*)sGrabFound->model->Mat,
               &globals.player.carry.spin);
    xVec3Init(&globals.player.carry.spin.pos, 0.0f, 0.0f, 0.0f);

    sGrabFound->chkby &= ~XENT_COLLTYPE_PLYR;

    zThrown_AddFruit(sGrabFound);

    if (sGrabFound->baseType == eBaseTypeNPC)
    {
        ((zNPCCommon*)sGrabFound)->SetCarryState(zNPCCARRY_PICKUP);
    }

    return 0;
}

namespace
{
    static struct foo
    {
        S32 anim;
        U32 sndid;
        void* data;
        F32 time;
    } player_talk;

    static U32 TalkCheck(xAnimTransition* anim, xAnimSingle*, void*)
    {
        return anim->UserFlags == player_talk.anim;
    }

    static U32 TalkDoneCheck(xAnimTransition* anim, xAnimSingle*, void*)
    {
        return anim->UserFlags != player_talk.anim;
    }

    static void speak_update(F32 dt)
    {
        if (player_talk.anim == -1)
        {
            return;
        }

        if (player_talk.time < 0.2f || xSndIsPlaying(player_talk.sndid) != 0)
        {
            player_talk.time += dt;
            float jawval = xJaw_EvalData(player_talk.data, player_talk.time);
            globals.player.ent.model->Anim->Single->BilinearLerp[0] = jawval;
        }
        else
        {
            zEntPlayerSpeakStop();
        }
    }
} // namespace

// WIP, not equivalent
void zEntPlayerSpeakStart(U32 sndid, U32, S32 anim)
{
    zEntPlayerSpeakStop();

    player_talk.data = xJaw_FindData(sndid);
    if (player_talk.data)
    {
        player_talk.sndid = sndid;
        player_talk.time = 0.0f;
        if (anim < 0 || anim >= globals.player.s->talk_anims)
        {
            // wtf is happening here
            U8 filter_size = globals.player.s->talk_filter_size;
            U32 which = (xrand() >> 13); // / filter_size;
            player_talk.anim = globals.player.s->talk_filter[which % filter_size];
        }
        else
        {
            player_talk.anim = anim;
        }
    }
}

// Equiavlent: sda scheduling reorder
void zEntPlayerSpeakStop()
{
    player_talk.anim = -1;
    globals.player.ent.model->Anim->Single->BilinearLerp[0] = 0.0f;
}

// Close, some float mismatches + regswaps
static xEnt* GetPatrickTarget(xEnt* ent)
{
    xEnt* result = NULL;
    zPlatform* plat =
        ent->collis->colls[0].flags & 1 ? (zPlatform*)ent->collis->colls[0].optr : NULL;

    if (plat && plat->baseType == eBaseTypePlatform && plat->plat_flags & 2)
    {
        xCollis* coll;
        xVec3 relpos;
        xMat4x3Tolocal(&relpos, (xMat4x3*)plat->model->Mat, (xVec3*)&ent->model->Mat->pos);

        relpos.z -= 2.0f;
        if (SQR(relpos.x) + SQR(relpos.z))
        {
            xVec3 worldpos;
            worldpos.x = 0.0f;
            worldpos.y = 1.23f;
            worldpos.z = -2.0f;
            xMat4x3Toworld(&worldpos, (xMat4x3*)plat->model->Mat, &worldpos);

            if (ent->model->Mat->at.x * (worldpos.x - ent->model->Mat->pos.x) +
                    ent->model->Mat->at.z * (worldpos.z - ent->model->Mat->pos.z) >
                0.0f)
            {
                globals.player.carry.targetRot =
                    xatan2(worldpos.x - globals.player.ent.frame->mat.pos.x,
                           worldpos.z - globals.player.ent.frame->mat.pos.z);
                globals.player.carry.throwTargetRotRate =
                    globals.player.carry.targetRot - ent->frame->rot.angle;
                CLAMP_ANGLE(globals.player.carry.throwTargetRotRate);
                globals.player.carry.throwTargetRotRate /= 0.2f;
                return plat;
            }
        }
    }

    F32 bestTargetDot = -1.0f;
    xVec3* bestTargetPos;
    zScene* zsc = globals.sceneCur;
    S32 grabbedIsFruit = zThrown_IsFruit(globals.player.carry.grabbed, NULL);
    for (U32 i = 0; i < zsc->num_ents; i++)
    {
        xEnt* tgtent = zsc->ents[i];
        if (tgtent == globals.player.carry.grabbed || (tgtent->flags & 1) == 0)
        {
            continue;
        }
        F32 maxHeight = globals.player.carry.throwMaxHeight;

        if (tgtent->baseType == eBaseTypeStatic)
        {
            if (!grabbedIsFruit || !(tgtent->moreFlags & 0x8))
            {
                continue;
            }
            if (zThrown_IsFruit(tgtent, NULL) == 0)
            {
                continue;
            }
            maxHeight = globals.player.carry.throwMaxStack;
        }
        else if (tgtent->baseType == eBaseTypeDestructObj)
        {
            if (((zEntDestructObj*)globals.player.carry.grabbed)->throw_target == 0)
            {
                continue;
            }
        }
        else if (tgtent->baseType == eBaseTypeNPC)
        {
            // FIXME: This comparison looks like a fakematch
            U32 t = ((xNPCBasic*)globals.player.carry.grabbed)->SelfType();
            if (t - NPC_TYPE_JELLYPINK <= 2 || t == NPC_TYPE_MIMEFISH)
            {
                continue;
            }
        }
        else if (tgtent->baseType == eBaseTypeButton)
        {
            if (zThrown_IsFruit(globals.player.carry.grabbed, NULL))
            {
                if ((((_zEntButton*)tgtent)->basset->buttonActFlags & (0x10000 | 0x80)) == 0)
                {
                    continue;
                }
            }
            else if (globals.player.carry.grabbed->baseType == eBaseTypeNPC &&
                     ((xNPCBasic*)globals.player.carry.grabbed)->SelfType() == NPC_TYPE_TIKI_STONE)
            {
                if ((((_zEntButton*)tgtent)->basset->buttonActFlags & (0x2000 | 0x40)) == 0)
                {
                    continue;
                }
            }
            else
            {
                if ((((_zEntButton*)tgtent)->basset->buttonActFlags & 0x40) == 0)
                {
                    continue;
                }
            }
        }
        else
        {
            continue;
        }

        F32 dx = tgtent->model->Mat->pos.x - ent->model->Mat->pos.x;
        F32 dy = tgtent->model->Mat->pos.y - ent->model->Mat->pos.y;
        F32 dz = tgtent->model->Mat->pos.z - ent->model->Mat->pos.z;
        if (SQR(dx) + SQR(dz) >= SQR(globals.player.carry.throwMaxDist) ||
            dy <= globals.player.carry.throwMinHeight || dy >= maxHeight ||
            SQR(dx) + SQR(dz) <= SQR(globals.player.carry.throwMinDist))
        {
            continue;
        }

        // cos of angle between (dx, 0, dz) and at (at should already be normalized)
        F32 ddot =
            (dx * ent->model->Mat->at.x + dz * ent->model->Mat->at.z) / xsqrt(SQR(dx) + SQR(dz));

        if (ddot < globals.player.carry.throwMaxCosAngle)
        {
            continue;
        }

        if (bestTargetDot != -1.0f)
        {
            if (tgtent->model->Mat->pos.y > bestTargetPos->y)
            {
                if (ddot + 0.05f < bestTargetDot)
                {
                    continue;
                }
            }
            else
            {
                if (ddot - 0.05f < bestTargetDot)
                {
                    continue;
                }
            }
        }
        result = tgtent;

        globals.player.carry.targetRot =
            xatan2(tgtent->model->Mat->pos.x - globals.player.ent.frame->mat.pos.x,
                   tgtent->model->Mat->pos.z - globals.player.ent.frame->mat.pos.z);

        globals.player.carry.throwTargetRotRate =
            globals.player.carry.targetRot - ent->frame->rot.angle;

        CLAMP_ANGLE(globals.player.carry.throwTargetRotRate);

        globals.player.carry.throwTargetRotRate /= 0.2f;
        bestTargetPos = (xVec3*)&tgtent->model->Mat->pos;
        bestTargetDot = ddot;
    }
    return result;
}

static U32 PatrickGrabThrowCB(xAnimTransition*, xAnimSingle*, void* object)
{
    zEntPlayer_SNDPlay(ePlayerSnd_Throw, 0.0f);
    zEnt* ent = (zEnt*)object;
    if (gReticleTarget && sTypeOfTarget == 3)
    {
        globals.player.carry.throwTarget = gReticleTarget;
    }
    else
    {
        globals.player.carry.throwTarget = GetPatrickTarget(ent);
    }

    globals.player.carry.flyingToTarget = NULL;
    if (globals.player.carry.grabbed && globals.player.carry.grabbed->baseType == eBaseTypeNPC)
    {
        ((zNPCCommon*)globals.player.carry.grabbed)->SetCarryState(zNPCCARRY_THROW);
    }

    return 0;
}

static class zNPCLassoInfo* sCurrentNPCInfo;
void zEntPlayer_LassoNotify(en_LASSO_EVENT event)
{
    switch (event)
    {
    case LASS_EVNT_GRABEND:
        zLasso_SetGuide(sCurrentNPCInfo->lassoee, sCurrentNPCInfo->holdGuideAnim);
        break;
    case LASS_EVNT_ABORT:
        globals.player.lassoInfo.lasso.flags = 0;
        globals.player.lassoInfo.target = NULL;
        break;
    }
}

static unsigned int sShouldMelee;
static U32 MeleeCheck(xAnimTransition*, xAnimSingle* anim, void*)
{
    if (!sShouldMelee)
    {
        return 0;
    }

    if (strcmp(anim->State->Name, "DJumpApex01") == 0 && anim->Time < 0.3f)
    {
        return 0;
    }

    return 1;
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

static U32 LassoFailIdleSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && IdleSlipCheck(tran, anim, data);
}

static U32 LassoFailIdleCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && IdleCheck(tran, anim, data);
}

static U32 LassoFailWalkCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && WalkCheck(tran, anim, data);
}

static U32 LassoFailRunCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && RunAnyCheck(tran, anim, data);
}

static U32 LassoFailRunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && RunOutOfWorldCheck(tran, anim, data);
}

static U32 LassoFailRunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    return !sLassoInfo->target && RunSlipCheck(tran, anim, data);
}

// Equivalent: sda relocation scheduling
static U32 JumpMeleeCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_Kick, 0.0f);
    if ((xrand() & 3) == 3)
    {
        zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_KickComment1, ePlayerStreamSnd_KickComment3,
                                       0.0f);
    }

    globals.player.ent.frame->vel.y *= 0.8f;
    sShouldMelee = 0;
    sPlayerAttackInAir++;
    return 0;
}

// Equivalent: sda relocation scheduling
static U32 MeleeCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_Chop, 0.0f);
    if ((xrand() & 3) == 3)
    {
        zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_ChopComment1, ePlayerStreamSnd_ChopComment3,
                                       0.0f);
    }

    sLassoInfo->target = NULL;
    sShouldMelee = 0;
    sPlayerAttackInAir++;
    return 0;
}

static U32 LassoStartCB(xAnimTransition*, xAnimSingle*, void* object)
{
    zEntPlayer_SNDPlay(ePlayerSnd_Heli, 0.0f);
    sLassoInfo->swingTarget = NULL;

    xEnt* ent = (xEnt*)object;
    zNPCCommon* npc = (zNPCCommon*)sLassoInfo->target;
    if (sLassoInfo->target->baseType == eBaseTypeNPC && (npc->SelfType() & 0xffffff00) != 'NTT\0')
    {
        sLassoInfo->targetGuide = 1;
        sCurrentNPCInfo = npc->GimmeLassInfo();
        npc->LassoNotify(LASS_EVNT_BEGIN);
        zLasso_SetGuide(npc, sCurrentNPCInfo->grabGuideAnim);
    }
    else
    {
        sLassoInfo->targetGuide = NULL;
    }

    zLasso_InitTimer(sLasso, 0.125f);
    sLasso->flags = 0x12c3;
    sLasso->tgRadius = 1.25f;

    xVec3AddScaled(&sLasso->crCenter, (xVec3*)&ent->model->Mat->up, 0.5f);
    sLassoInfo->lassoRot =
        xatan2(sLassoInfo->target->model->Mat->pos.x - globals.player.ent.frame->mat.pos.x,
               sLassoInfo->target->model->Mat->pos.z - globals.player.ent.frame->mat.pos.z);

    return 0;
}

// Equivalent
static U32 LassoThrowCB(xAnimTransition*, xAnimSingle*, void* object)
{
    xEnt* ent = (xEnt*)object;

    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    zLasso_ResetTimer(sLasso, 0.4f);

    sLasso->flags = 0x11;
    sLasso->tgRadius = 0.75f * sLasso->crRadius;

    xVec3SMul(&sLasso->tgNormal, (xVec3*)&ent->model->Mat->at, -sLassoInfo->dist);
    // Result is being subtracted from original instead of negated and added
    sLasso->tgNormal.y += -(4.0f * sLassoInfo->dist - 5.0f);
    xVec3Normalize(&sLasso->tgNormal, &sLasso->tgNormal);
    xVec3Copy(&sLasso->tgCenter, &sLasso->stCenter);
    xVec3AddScaled(&sLasso->tgCenter, (xVec3*)&ent->model->Mat->at, 0.5f * -sLassoInfo->dist);

    sLasso->tgCenter.y += 0.7f * sLassoInfo->dist + 0.3f;

    return 0;
}

// Equivalent
static U32 LassoFlyCB(xAnimTransition*, xAnimSingle*, void* object)
{
    xEnt* ent = (xEnt*)object;

    zEntPlayer_SNDPlay(ePlayerSnd_LassoThrow, 0.0f);
    zLasso_ResetTimer(sLasso, 0.4f * sLassoInfo->dist);

    if (sLassoInfo->targetGuide == 0)
    {
        sLasso->flags = 1;
        xVec3Copy(&sLasso->tgCenter, xBoundCenter(&sLassoInfo->target->bound));
        xVec3AddScaled(&sLasso->tgCenter, (xVec3*)&ent->model->Mat->at,
                       sLassoInfo->target->model->Data->boundingSphere.radius * sLassoInfo->dist);
        xVec3AddScaled(&sLasso->tgCenter, (xVec3*)&ent->model->Mat->up,
                       sLassoInfo->target->model->Data->boundingSphere.radius * sLassoInfo->dist);
        sLasso->tgRadius = 1.5f * sLassoInfo->target->model->Data->boundingSphere.radius;

        xVec3SMul(&sLasso->tgNormal, (xVec3*)&ent->model->Mat->at, 1.0f);
        // Result is being subtracted from original instead of negated and added
        sLasso->tgNormal.y += -(4.0f * sLassoInfo->dist - 5.0f);
        xVec3Normalize(&sLasso->tgNormal, &sLasso->tgNormal);
    }
    else
    {
        sLasso->flags = 1;
        zLasso_InterpToGuide(sLasso);
    }

    sLasso->tgSlack = 0.5f;
    return 0;
}

static U32 LassoDestroyCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_LassoYank, 0.17f);
    zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_RopingComment1, ePlayerStreamSnd_RopingComment3,
                                   0.133f);

    if (sLassoInfo->targetGuide == 0)
    {
        zLasso_ResetTimer(sLasso, 0.5f);
        sLassoInfo->destroy = 1;
        sLasso->flags = 0x521;

        xVec3Copy(&sLasso->tgCenter, xBoundCenter(&sLassoInfo->target->bound));
        sLasso->tgRadius = 0.75f * sLassoInfo->target->model->Data->boundingSphere.radius;
        xVec3Init(&sLasso->tgNormal, 0.0f, 1.0f, 0.0f);
        return 0;
    }
    else
    {
        sLassoInfo->zeroAnim = sLassoInfo->target->model->Anim->Single->State;
        ((zNPCCommon*)sLassoInfo->target)->LassoNotify(LASS_EVNT_GRABSTART);
        sLasso->flags = 0x4c01;
        return 0;
    }
}

static U32 LassoYankCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDPlay(ePlayerSnd_LassoYank, 0.17f);
    zEntPlayer_SNDPlayStreamRandom(ePlayerStreamSnd_RopingComment1, ePlayerStreamSnd_RopingComment3,
                                   0.133f);

    if (sLassoInfo->targetGuide && sLassoInfo->target)
    {
        ((zNPCCommon*)sLassoInfo->target)->LassoNotify(LASS_EVNT_YANK);
    }

    return 0;
}

// Equivalent: sda relocation scheduling
static U32 MeleeStopCB(xAnimTransition*, xAnimSingle*, void*)
{
    idle_tmr = 0.0f;

    if (globals.player.SundaeTimer < 0.0f)
    {
        globals.player.SpeedMult = 1.0f;
    }
    else
    {
        globals.player.SpeedMult = globals.player.g.SundaeMult;
    }

    sShouldMelee = 0;
    return 0;
}

static U32 SpatulaMeleeStopCB(xAnimTransition* tran, xAnimSingle* anim, void* data)
{
    MeleeStopCB(tran, anim, data);
    SpatulaGrabCB(tran, anim, data);
    return 0;
}

// Equivalent: sda relocation scheduling
static U32 LassoStopCB(xAnimTransition*, xAnimSingle*, void*)
{
    idle_tmr = 0.0f;
    sLasso->flags = 0;

    if (sLassoInfo->targetGuide)
    {
        if (sLassoInfo->target)
        {
            ((zNPCCommon*)sLassoInfo->target)->LassoNotify(LASS_EVNT_YANK);
        }
    }
    else if (sLassoInfo->destroy && sLassoInfo->target)
    {
        zEntEvent(sLassoInfo->target, eEventHit);
    }

    sLassoInfo->destroy = 0;
    sLassoInfo->target = NULL;
    zLasso_SetGuide(NULL, NULL);
    zRumbleStart(SDR_LassoDestroy);
    return 0;
}

static U32 LassoSwingGroundedBeginCheck(xAnimTransition*, xAnimSingle*, void*)
{
    if (globals.sceneCur->sceneID == 'B201' && globals.player.JumpState == 0)
    {
        sLassoInfo->swingTarget = NULL;
        gReticleTarget = NULL;
        sTypeOfTarget = 0;
    }

    return sLassoInfo->swingTarget && globals.player.JumpState == 0;
}

static U32 LassoSwingBeginCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sLassoInfo->swingTarget && globals.player.JumpState != 0;
}

static U32 LassoSwingReleaseCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (!globals.player.ControlOff && (globals.pad0->pressed & XPAD_BUTTON_X) &&
            sSwingTimeElapsed > 0.5f) ||
           sLassoInfo->swingTarget == NULL || !(sLassoInfo->swingTarget->flags & 1);
}

static U32 LassoSwingBeginCB(xAnimTransition*, xAnimSingle*, void* object)
{
    xEnt* ent = (xEnt*)object;

    sLassoInfo->target = NULL;
    gReticleTarget = NULL;

    if (sLasso->flags & 1)
    {
        sLasso->flags = 1;
        zLasso_ResetTimer(sLasso, 0.133f);
        xVec3Copy(&sLasso->tgCenter, &sLasso->stCenter);
    }
    else
    {
        sLasso->flags = 0x1043;
        zLasso_InitTimer(sLasso, 0.133f);
        xVec3Copy(&sLasso->stNormal, (xVec3*)&ent->model->Mat->right);
        zEntPlayer_SNDPlay(ePlayerSnd_Heli, 0.0f);
    }

    sLasso->tgSlack = 0.5f;
    sLasso->tgRadius = sLassoInfo->swingTarget->model->Data->boundingSphere.radius;
    xVec3Copy(&sLasso->tgNormal, (xVec3*)&ent->model->Mat->right);
    xVec3Copy(&globals.player.HangVel, (xVec3*)&ent->frame->vel);
    sSwingTimeElapsed = 0.0f;

    zCameraSetBbounce(false);
    zCameraSetLongbounce(false);
    zCameraSetHighbounce(false);
    return 0;
}

static U32 LassoSwingGroundedBeginCB(xAnimTransition* tran, xAnimSingle* anim, void* object)
{
    xEnt* ent = (xEnt*)object;
    JumpCB(tran, anim, object);

    ent->frame->vel.y *= 0.5f;
    LassoSwingBeginCB(tran, anim, object);
    return 0;
}

static U32 LassoSwingTossCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    zEntPlayer_SNDPlay(ePlayerSnd_LassoThrow, 0.0f);

    sLasso->flags = 1;
    zLasso_ResetTimer(sLasso, 0.117f);
    xVec3Copy(&sLasso->tgCenter, xBoundCenter(&sLassoInfo->swingTarget->bound));
    xVec3AddScaled(&sLasso->tgCenter, (xVec3*)&sLassoInfo->swingTarget->model->Mat->up, -0.6f);
    xVec3Copy(&sLasso->tgNormal, (xVec3*)&sLassoInfo->swingTarget->model->Mat->up);

    if (xVec3Dot(&sLasso->tgNormal, &sLasso->stNormal) < 0.0f)
    {
        xVec3Inv(&sLasso->tgNormal, &sLasso->tgNormal);
    }

    sLasso->tgRadius = 0.1f;
    return 0;
}

static U32 LassoSwingCB(xAnimTransition*, xAnimSingle* anim, void*)
{
    sLasso->flags = 0xc21;
    zLasso_ResetTimer(sLasso, 0.0f);

    anim->BilinearLerp[0] = 1.0f;
    anim->Blend->BilinearLerp[0] = 1.0f;

    zCameraEnableLassoCam();
    zCameraSetLassoCamFactor(1.0f);
    return 0;
}

// Equivalent: sda/float scheduling crap
static U32 LassoSwingGroundedCB(xAnimTransition*, xAnimSingle*, void*)
{
    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    idle_tmr = 0.0f;
    sTimeToRetarget = 0.5f;
    sLassoInfo->swingTarget = NULL;
    sLasso->flags = 0;
    sLassoCamLinger = 1;

    return 0;
}

// Really odd scheduling. Maybe equivalent?
static U32 LassoSwingReleaseCB(xAnimTransition* tran, xAnimSingle* anim, void* object)
{
    zEntPlayer_SNDStop(ePlayerSnd_Heli);
    idle_tmr = 0.0f;
    sTimeToRetarget = 0.5f;
    sLassoInfo->canCopter = 1;
    globals.player.Jump_CanDouble = 1;
    globals.player.IsDJumping = 0;
    sLassoCamLinger = 1;
    sLassoInfo->swingTarget = NULL;
    sLasso->flags = 0;

    JumpCB(tran, anim, object);

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

S32 zEntPlayer_MoveInfo()
{
    U32 flags = 0;
    U32 userFlags1e = globals.player.ent.model->Anim->Single->State->UserFlags & 0x1e;
    const char* animName = globals.player.ent.model->Anim->Single->State->Name;

    if (userFlags1e == 0 || globals.player.ent.model->Anim->Single->State->UserFlags & 1)
    {
        flags |= 1;
    }

    if (userFlags1e == 4)
    {
        flags |= 2;
    }

    if ((userFlags1e == 6) || (userFlags1e == 8))
    {
        flags |= 4;
    }

    if (globals.player.IsBubbleSpinning || strcmp(animName,"Bspin01") == 0)
    {
        flags |= 0x20;
    }

    if (strcmp(animName,"BbashStart01") == 0)
    {
        flags |= 8;
    }

    if 
	(
        (strcmp(animName,"BbounceStrike01") == 0) ||
        (strcmp(animName,"BbounceStart01") == 0) ||
        (strcmp(animName,"BbounceAttack01") == 0))
    {
        flags |= 0x10;
    }

    if (userFlags1e == 0xe)
    {
        flags |= 0x10;
    }

    if (userFlags1e == 0xc)
    {
        flags |= 0x20;
    }

    if (userFlags1e == 2 || flags & 1 || flags & 2)
    {
        flags |= 0x40;
    }

    return flags;
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

xVec3* GetPosVec(xBase* base)
{
    xVec3* vec = &g_O3;

    switch (base->baseType)
    {
        case eBaseTypeMovePoint:
            vec = ((xMovePoint*)(base))->pos;
            break;
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
            vec = (xVec3*)&(((xEnt*)(base))->model->Mat->pos);
            break;
    }

    return vec;
}

static void _SetupRumble(_tagePlayerSnd player_snd, _tagRumbleType type, float time)
{
    sPlayerRumbleType[player_snd] = type;
    sPlayerRumbleTime[player_snd] = time;
}

// Close. missing redundant float loads, maybe equivalent.
static void zEntPlayer_SNDInit()
{
    for (S32 player = 0; player < ePlayer_MAXTYPES; player++)
    {
        for (S32 snd = 0; snd < ePlayerSnd_Total; snd++)
        {
            sPlayerSnd[player][snd] = 0;
            sPlayerSndRand[player][snd] = 0;
            sPlayerSndID[player][snd] = 0;
        }
    }
    for (S32 i = 0; i < MAX_DELAYED_SOUNDS; i++)
    {
        for (S32 snd = 0; snd < ePlayerStreamSnd_Total; snd++)
        {
            sPlayerStreamSndTimer[snd].timer = 0.0f;
            sPlayerStreamSndTimer[snd].time = 0.0f;
        }

        sDelayedSound[i].start = ePlayerStreamSnd_Invalid;
        sDelayedSound[i].end = ePlayerStreamSnd_Invalid;
        sDelayedSound[i].delay = 0.0f;
    }

    for (S32 snd = 0; snd < ePlayerSnd_Total; snd++)
    {
        sPlayerSndFxVolume[snd] = 0.77f;
    }
    sPlayerSndFxVolume[2] *= 0.23f;
    sPlayerSndFxVolume[3] *= 0.25f;
    sPlayerSndFxVolume[0x2d] *= 0.4f;
    sPlayerSndFxVolume[0x18] *= 0.4f;
    sPlayerSndFxVolume[0x2e] *= 0.4f;
    sPlayerSndFxVolume[4] *= 0.7f;
    sPlayerSndFxVolume[5] *= 0.7f;
    sPlayerSndFxVolume[7] *= 0.7f;
    sPlayerSndFxVolume[6] *= 0.7f;
    sPlayerSndFxVolume[0xd] *= 0.7f;
    sPlayerSndFxVolume[0x11] *= 0.7f;
    sPlayerSndFxVolume[0x17] *= 0.7f;
    sPlayerSndFxVolume[9] *= 0.45f;
    sPlayerSndFxVolume[8] *= 0.5f;
    sPlayerSndFxVolume[0x15] *= 0.6f;
    sPlayerSndFxVolume[0x16] *= 0.6f;

    for (S32 snd = 0; snd < ePlayerStreamSnd_Total; snd++)
    {
        sPlayerSndStreamVolume[snd] = 0.65f;
    }
    sPlayerSndStreamVolume[ePlayerStreamSnd_SpatulaComment1] *= 0.8f;

    sPlayerSnd[eCurrentPlayerSpongeBob][1] = xStrHash("generic_land");
    sPlayerSnd[eCurrentPlayerSpongeBob][2] = xStrHash("SB_jump_sngl");
    sPlayerSnd[eCurrentPlayerSpongeBob][3] = xStrHash("SB_jump_dub");
    sPlayerSnd[eCurrentPlayerSpongeBob][4] = xStrHash("SB_bowl_windup_loop");
    sPlayerSnd[eCurrentPlayerSpongeBob][5] = xStrHash("SB_bowl_release");
    sPlayerSnd[eCurrentPlayerSpongeBob][6] = xStrHash("SB_bounce_start");
    sPlayerSnd[eCurrentPlayerSpongeBob][7] = xStrHash("SB_bounce_hit1");
    sPlayerSnd[eCurrentPlayerSpongeBob][8] = xStrHash("SB_bounce_hit2");
    sPlayerSnd[eCurrentPlayerSpongeBob][9] = xStrHash("SB_Bubble_wand");
    sPlayerSnd[eCurrentPlayerSpongeBob][10] = xStrHash("SB_cruise_start");
    sPlayerSnd[eCurrentPlayerSpongeBob][0xb] = xStrHash("SB_cruise_nav_loop");
    sPlayerSnd[eCurrentPlayerSpongeBob][0xc] = xStrHash("SB_cruise_hit");
    sPlayerSnd[eCurrentPlayerSpongeBob][0xd] = xStrHash("SB_bounce_hit2");
    sPlayerSnd[eCurrentPlayerSpongeBob][0xe] = xStrHash("SB_wetball_start");
    sPlayerSnd[eCurrentPlayerSpongeBob][0xf] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x10] = xStrHash("SB_wetball_end");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x11] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x12] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x13] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x14] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x15] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x16] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x17] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x18] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x19] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x1b] = xStrHash("SB_Ouch1");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x1c] = xStrHash("SB_Ouch2");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x1d] = xStrHash("SB_Ouch3");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x1e] = xStrHash("SB_Ouch4");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x1f] = xStrHash("SB_Death");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x20] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x21] = 0;
    sPlayerSnd[eCurrentPlayerSpongeBob][0x22] = xStrHash("GSG_pickup");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x23] = xStrHash("SB_undies");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x24] = xStrHash("Bus_all");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x25] = xStrHash("Bus_whistle");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x26] = xStrHash("SB_tb_loop");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x2a] = xStrHash("gspatula_sb");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x2d] = xStrHash("Xylo_sneaky_loop");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x2e] = xStrHash("SB_slip_idle_loop");

    sPlayerStreamSnd[eCurrentPlayerSpongeBob][1] = xStrHash("SBG01079");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][2] = xStrHash("SBG01080");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][3] = xStrHash("SBG01081");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][4] = xStrHash("SBG01022");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][5] = xStrHash("SBG01022");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][6] = xStrHash("SBG01023");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][7] = xStrHash("SBG01066_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][8] = xStrHash("SBG01066_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][9] = xStrHash("SBG01067");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][10] = xStrHash("SBG01068_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0xb] = xStrHash("SBG01068_d");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0xc] = xStrHash("SBG01070");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0xd] = xStrHash("SBG01069");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0xe] = xStrHash("B101_SB_win");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0xf] = xStrHash("SBG01017_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x10] = xStrHash("SBG01017_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x11] = xStrHash("SBG01018");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x12] = xStrHash("SBG01016");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x13] = xStrHash("SBG01019");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x14] = xStrHash("SBG01076");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x15] = xStrHash("SBG01077");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x16] = xStrHash("SBG01078");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x17] = xStrHash("SBG01060_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x18] = xStrHash("SBG01058_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x19] = xStrHash("SBG01054_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1a] = xStrHash("SBG01055_d");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1b] = xStrHash("SBG01056_d");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1c] = xStrHash("SBG01057_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1d] = xStrHash("SBG01057_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1e] = xStrHash("SBG01056_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x1f] = xStrHash("SBG01030");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x20] = xStrHash("SBG01030");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x21] = xStrHash("SBG01030");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x22] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x23] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x24] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x25] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x26] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x27] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x28] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x29] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2a] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2b] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2c] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2d] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2e] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x2f] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x30] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x31] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x32] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x33] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x34] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x35] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x36] = 0;
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x37] = xStrHash("SBG01091");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x38] = xStrHash("SBG01092");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x39] = xStrHash("SBG01093_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3a] = xStrHash("SBG01094_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3b] = xStrHash("SBG01095");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3c] = xStrHash("SBG01096");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3d] = xStrHash("SBG01097");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3e] = xStrHash("SBG01098");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x3f] = xStrHash("SBG01099");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x40] = xStrHash("SBG01100");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x41] = xStrHash("SBG01101");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x42] = xStrHash("SBG01102");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x43] = xStrHash("SBG01103");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x44] = xStrHash("SBG01104");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x45] = xStrHash("SBG01105");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x46] = xStrHash("SBG01106");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x47] = xStrHash("SBG01107");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x48] = xStrHash("SBG01108");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x49] = xStrHash("SBG01109");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4a] = xStrHash("SBG01109");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4b] = xStrHash("SBG01110");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4c] = xStrHash("SBG01111");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4d] = xStrHash("SBG01021");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4e] = xStrHash("SBG01021");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x4f] = xStrHash("SBG01024");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x50] = xStrHash("SBG01025");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x51] = xStrHash("SBG01026");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x52] = xStrHash("SBG01086_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x53] = xStrHash("SBG01086_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x54] = xStrHash("SBG01085_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x55] = xStrHash("SBG01084_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x56] = xStrHash("SBG01082_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x57] = xStrHash("SBG01059_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x58] = xStrHash("SBG01083_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x5d] = xStrHash("SBG01041_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x5e] = xStrHash("SBG01042_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x5f] = xStrHash("SBG01043_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x60] = xStrHash("SBG01044_b");

    sPlayerSnd[eCurrentPlayerPatrick][1] = xStrHash("generic_land");
    sPlayerSnd[eCurrentPlayerPatrick][2] = xStrHash("Pat_jump_sngl");
    sPlayerSnd[eCurrentPlayerPatrick][3] = xStrHash("Pat_jump_dub");
    sPlayerSnd[eCurrentPlayerPatrick][4] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][5] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][6] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][7] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][8] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][9] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][10] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0xb] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0xc] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0xd] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0xe] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0xf] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x10] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x11] = xStrHash("Pat_belly");
    sPlayerSnd[eCurrentPlayerPatrick][0x12] = xStrHash("Pat_smash_belly");
    sPlayerSnd[eCurrentPlayerPatrick][0x13] = xStrHash("Pat_lift3B");
    sPlayerSnd[eCurrentPlayerPatrick][0x14] = xStrHash("Pat_throw");
    sPlayerSnd[eCurrentPlayerPatrick][0x15] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x16] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x17] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x18] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x19] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x1b] = xStrHash("Pat_Ouch1");
    sPlayerSnd[eCurrentPlayerPatrick][0x1c] = xStrHash("Pat_Ouch2");
    sPlayerSnd[eCurrentPlayerPatrick][0x1d] = xStrHash("Pat_Ouch3");
    sPlayerSnd[eCurrentPlayerPatrick][0x1e] = xStrHash("Pat_Ouch4");
    sPlayerSnd[eCurrentPlayerPatrick][0x1f] = xStrHash("SB_Death");
    sPlayerSnd[eCurrentPlayerPatrick][0x20] = xStrHash("Ffruit_crackle");
    sPlayerSnd[eCurrentPlayerPatrick][0x21] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x22] = xStrHash("GSG_pickup");
    sPlayerSnd[eCurrentPlayerPatrick][0x23] = xStrHash("SB_undies");
    sPlayerSnd[eCurrentPlayerPatrick][0x24] = xStrHash("bus_all");
    sPlayerSnd[eCurrentPlayerPatrick][0x25] = xStrHash("Bus_whistle");
    sPlayerSnd[eCurrentPlayerPatrick][0x26] = xStrHash("Pat_slide_loop");
    sPlayerSnd[eCurrentPlayerPatrick][0x2a] = xStrHash("gspatula_pat");
    sPlayerSnd[eCurrentPlayerPatrick][0x2d] = 0;

    sPlayerStreamSnd[eCurrentPlayerPatrick][1] = xStrHash("PSGB01028_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][2] = xStrHash("PSGB01029_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][3] = xStrHash("PSGB01030_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][4] = xStrHash("PSGB01013_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][5] = xStrHash("PSGB01014_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][6] = xStrHash("PSGB01015_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][7] = xStrHash("PSGB01077_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][8] = xStrHash("PSGB01076_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][9] = xStrHash("PSGB01078_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][10] = xStrHash("PSGB01078_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0xb] = xStrHash("PSGB01077_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0xc] = xStrHash("PSGB01075_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0xd] = xStrHash("PSGB01074_d");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0xe] = xStrHash("B101_Pat_win");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0xf] = xStrHash("PSGB01010_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x10] = xStrHash("PSGB01011_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x11] = xStrHash("PSGB01011_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x12] = xStrHash("PSGB01012_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x13] = xStrHash("PSGB01036_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x14] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x15] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x16] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x17] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x18] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x19] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x1a] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x1b] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x1c] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x1f] = xStrHash("PSGB01016_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x20] = xStrHash("PSGB01017_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x21] = xStrHash("PSGB01018_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x22] = xStrHash("PSGB01066_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x23] = xStrHash("PSGB01067_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x24] = xStrHash("PSGB01068_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x25] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x26] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x27] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x28] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x29] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2a] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2b] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2c] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2d] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2e] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x2f] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x30] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x31] = xStrHash("PSGB01037_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x32] = xStrHash("PSGB01038_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x33] = xStrHash("PSGB01039_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x34] = xStrHash("PSGB01040_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x35] = xStrHash("PSGB01041_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x36] = xStrHash("PSGB01042_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x37] = xStrHash("PSGB01088_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x38] = xStrHash("PSGB01089_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x39] = xStrHash("PSGB01090_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3a] = xStrHash("PSGB01091");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3b] = xStrHash("PSGB01092");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3c] = xStrHash("PSGB01093");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3d] = xStrHash("PSGB01094");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3e] = xStrHash("PSGB01095_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x3f] = xStrHash("PSGB01096");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x40] = xStrHash("PSGB01097");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x41] = xStrHash("PSGB01098");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x42] = xStrHash("PSGB01099");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x43] = xStrHash("PSGB01100");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x44] = xStrHash("PSGB01101");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x45] = xStrHash("PSGB01102");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x46] = xStrHash("PSGB01103");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x47] = xStrHash("PSGB01104");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x48] = xStrHash("PSGB01105");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x49] = xStrHash("PSGB01106");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4a] = xStrHash("PSGB01107");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4b] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4c] = xStrHash("PSGB01108");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4d] = xStrHash("PSGB01029B");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4e] = xStrHash("PSGB01034_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x4f] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x50] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x51] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x52] = xStrHash("PSGB01037_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x53] = xStrHash("PSGB01037_d");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x54] = xStrHash("PSGB01040_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x55] = xStrHash("PSGB01040_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x56] = xStrHash("PSGB01040_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x57] = xStrHash("PSGB01039_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x58] = xStrHash("PSGB01041_a");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x5c] = xStrHash("PSGB01033_c");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x5d] = xStrHash("PSGB01052_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x5e] = xStrHash("PSGB01053_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x5f] = xStrHash("PSGB01054_b");
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x60] = xStrHash("PSGB01055_c");

    sPlayerSnd[eCurrentPlayerSandy][1] = xStrHash("generic_land");
    sPlayerSnd[eCurrentPlayerSandy][2] = xStrHash("SC_jump_sngl");
    sPlayerSnd[eCurrentPlayerSandy][3] = xStrHash("SC_jump_dub");
    sPlayerSnd[eCurrentPlayerSandy][4] = 0;
    sPlayerSnd[eCurrentPlayerSandy][5] = 0;
    sPlayerSnd[eCurrentPlayerSandy][6] = 0;
    sPlayerSnd[eCurrentPlayerSandy][7] = 0;
    sPlayerSnd[eCurrentPlayerSandy][8] = 0;
    sPlayerSnd[eCurrentPlayerSandy][9] = 0;
    sPlayerSnd[eCurrentPlayerSandy][10] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0xb] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0xc] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0xd] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0xe] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0xf] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x10] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x11] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x12] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x13] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x14] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x15] = xStrHash("SC_chop");
    sPlayerSnd[eCurrentPlayerSandy][0x16] = xStrHash("SC_kick");
    sPlayerSnd[eCurrentPlayerSandy][0x17] = xStrHash("SC_heli_loop");
    sPlayerSnd[eCurrentPlayerSandy][0x18] = xStrHash("SC_lasso_throw");
    sPlayerSnd[eCurrentPlayerSandy][0x19] = xStrHash("SC_lasso_stretch");
    sPlayerSnd[eCurrentPlayerSandy][0x1b] = xStrHash("SC_Ouch1");
    sPlayerSnd[eCurrentPlayerSandy][0x1c] = xStrHash("SC_Ouch2");
    sPlayerSnd[eCurrentPlayerSandy][0x1d] = xStrHash("SC_Ouch3");
    sPlayerSnd[eCurrentPlayerSandy][0x1e] = xStrHash("SC_Ouch4");
    sPlayerSnd[eCurrentPlayerSandy][0x1f] = xStrHash("SB_Death");
    sPlayerSnd[eCurrentPlayerSandy][0x20] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x21] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x22] = xStrHash("GSG_pickup");
    sPlayerSnd[eCurrentPlayerSandy][0x23] = xStrHash("SC_undies");
    sPlayerSnd[eCurrentPlayerSandy][0x24] = xStrHash("bus_all");
    sPlayerSnd[eCurrentPlayerSandy][0x25] = xStrHash("Bus_whistle");
    sPlayerSnd[eCurrentPlayerSandy][0x26] = xStrHash("SC_slide_loop");
    sPlayerSnd[eCurrentPlayerSandy][0x2a] = xStrHash("gspatula_sandy");
    sPlayerSnd[eCurrentPlayerSandy][0x2d] = 0;

    sPlayerStreamSnd[eCurrentPlayerSandy][1] = xStrHash("SCGB01028A");
    sPlayerStreamSnd[eCurrentPlayerSandy][2] = xStrHash("SCGB01029B");
    sPlayerStreamSnd[eCurrentPlayerSandy][3] = xStrHash("SCGB01029B");
    sPlayerStreamSnd[eCurrentPlayerSandy][4] = xStrHash("SCGB01013C");
    sPlayerStreamSnd[eCurrentPlayerSandy][5] = xStrHash("SCGB01014A");
    sPlayerStreamSnd[eCurrentPlayerSandy][6] = xStrHash("SCGB01015A");
    sPlayerStreamSnd[eCurrentPlayerSandy][7] = xStrHash("SCGB01071B");
    sPlayerStreamSnd[eCurrentPlayerSandy][8] = xStrHash("SCGB01072A");
    sPlayerStreamSnd[eCurrentPlayerSandy][9] = xStrHash("SCGB01073A");
    sPlayerStreamSnd[eCurrentPlayerSandy][10] = xStrHash("SCGB01069B");
    sPlayerStreamSnd[eCurrentPlayerSandy][0xb] = xStrHash("SCGB01074A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0xc] = xStrHash("SCGB01067A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0xd] = xStrHash("SCGB01070B");
    sPlayerStreamSnd[eCurrentPlayerSandy][0xe] = xStrHash("B101_San_win");
    sPlayerStreamSnd[eCurrentPlayerSandy][0xf] = xStrHash("SCGB01010A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x10] = xStrHash("SCGB01011A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x11] = xStrHash("SCGB01011B");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x12] = xStrHash("SCGB01012C");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x13] = xStrHash("SCGB01012A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x14] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x15] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x16] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x17] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x18] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x19] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x1a] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x1b] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x1c] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x1f] = xStrHash("SCGB01016A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x20] = xStrHash("SCGB01017A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x21] = xStrHash("SCGB01018A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x22] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x23] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x24] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x25] = xStrHash("SCGB01022A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x26] = xStrHash("SCGB01023A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x27] = xStrHash("SCGB01024A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x28] = xStrHash("SCGB01025A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x29] = xStrHash("SCGB01026A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2a] = xStrHash("SCGB01027A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2b] = xStrHash("SCGB01059A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2c] = xStrHash("SCGB01060A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2d] = xStrHash("SCGB01061A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2e] = xStrHash("SCGB01062A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x2f] = xStrHash("SCGB01063A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x30] = xStrHash("SCGB01064A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x31] = xStrHash("SCGB01040A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x32] = xStrHash("SCGB01041A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x33] = xStrHash("SCGB01042A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x34] = xStrHash("SCGB01043A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x35] = xStrHash("SCGB01044A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x36] = xStrHash("SCGB01045A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x37] = xStrHash("SCGB01079A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x38] = xStrHash("SCGB01080A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x39] = xStrHash("SCGB01081A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3a] = xStrHash("SCGB01082A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3b] = xStrHash("SCGB01083A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3c] = xStrHash("SCGB01084A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3d] = xStrHash("SCGB01085A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3e] = xStrHash("SCGB01086A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x3f] = xStrHash("SCGB01087A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x40] = xStrHash("SCGB01088A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x41] = xStrHash("SCGB01089A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x42] = xStrHash("SCGB01090A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x43] = xStrHash("SCGB01091A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x44] = xStrHash("SCGB01092A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x45] = xStrHash("SCGB01093A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x46] = xStrHash("SCGB01094A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x47] = xStrHash("SCGB01095A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x48] = xStrHash("SCGB01096A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x49] = xStrHash("SCGB01097A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4a] = xStrHash("SCGB01097A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4b] = xStrHash("SCGB01098A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4c] = xStrHash("SCGB01099A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4d] = xStrHash("SCGB01030A");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4e] = xStrHash("SCGB01030B");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x4f] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x50] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x51] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x52] = xStrHash("SCGB01040a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x53] = xStrHash("SCGB01040b");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x54] = xStrHash("SCGB01044a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x55] = xStrHash("SCGB01045a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x56] = xStrHash("SCGB01045b");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x57] = xStrHash("SCGB01066C");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x58] = xStrHash("SCGB01043a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x5d] = xStrHash("SCGB01054a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x5e] = xStrHash("SCGB01056b");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x5f] = xStrHash("SCGB01057a");
    sPlayerStreamSnd[eCurrentPlayerSandy][0x60] = xStrHash("SCGB01058a");

    sPlayerSnd[eCurrentPlayerSpongeBob][0x27] = xStrHash("wind2loud_loop");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x28] = xStrHash("SB_bungee1");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x29] = xStrHash("SB_bungee2");

    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x61] = xStrHash("SBG01008");

    sPlayerSnd[eCurrentPlayerSpongeBob][0x2b] = xStrHash("SBG01003_a");
    sPlayerSnd[eCurrentPlayerSpongeBob][0x2c] = xStrHash("SBG01003_b");

    sPlayerStreamSnd[eCurrentPlayerSpongeBob][100] = xStrHash("SBG01041_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x65] = xStrHash("SBG01041_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x66] = xStrHash("SBG01041_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x67] = xStrHash("SBG01042_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x68] = xStrHash("SBG01042_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x69] = xStrHash("SBG01042_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6a] = xStrHash("SBG01043_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6b] = xStrHash("SBG01043_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6c] = xStrHash("SBG01043_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6d] = xStrHash("SBG01044_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6e] = xStrHash("SBG01044_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x6f] = xStrHash("SBG01044_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x70] = xStrHash("SBG01045_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x71] = xStrHash("SBG01045_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x72] = xStrHash("SBG01045_c");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x73] = xStrHash("SBG01046_a");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x74] = xStrHash("SBG01046_b");
    sPlayerStreamSnd[eCurrentPlayerSpongeBob][0x75] = xStrHash("SBG01046_c");

    sPlayerSnd[eCurrentPlayerPatrick][0x27] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x28] = 0;
    sPlayerSnd[eCurrentPlayerPatrick][0x29] = 0;

    sPlayerStreamSnd[eCurrentPlayerPatrick][0x27] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x28] = 0;
    sPlayerStreamSnd[eCurrentPlayerPatrick][0x29] = 0;

    sPlayerSnd[eCurrentPlayerSandy][0x27] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x28] = 0;
    sPlayerSnd[eCurrentPlayerSandy][0x29] = 0;

    sPlayerStreamSnd[eCurrentPlayerSandy][0x27] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x28] = 0;
    sPlayerStreamSnd[eCurrentPlayerSandy][0x29] = 0;

    sPlayerStreamSndTimer[1].time = 240.0f;
    sPlayerStreamSndTimer[2].time = 240.0f;
    sPlayerStreamSndTimer[3].time = 240.0f;
    sPlayerStreamSndTimer[4].time = 240.0f;
    sPlayerStreamSndTimer[5].time = 240.0f;
    sPlayerStreamSndTimer[6].time = 240.0f;
    sPlayerStreamSndTimer[7].time = 120.0f;
    sPlayerStreamSndTimer[8].time = 120.0f;
    sPlayerStreamSndTimer[9].time = 120.0f;
    sPlayerStreamSndTimer[10].time = 120.0f;
    sPlayerStreamSndTimer[0xb].time = 120.0f;
    sPlayerStreamSndTimer[0xc].time = 120.0f;
    sPlayerStreamSndTimer[0xe].time = 0.0f;
    sPlayerStreamSndTimer[0xf].time = 240.0f;
    sPlayerStreamSndTimer[0x10].time = 240.0f;
    sPlayerStreamSndTimer[0x11].time = 240.0f;
    sPlayerStreamSndTimer[0x12].time = 240.0f;
    sPlayerStreamSndTimer[0x13].time = 30.0f;
    sPlayerStreamSndTimer[0x14].time = 240.0f;
    sPlayerStreamSndTimer[0x15].time = 240.0f;
    sPlayerStreamSndTimer[0x16].time = 240.0f;
    sPlayerStreamSndTimer[0x17].time = 0.0f;
    sPlayerStreamSndTimer[0x18].time = 0.0f;
    sPlayerStreamSndTimer[0x19].time = 0.0f;
    sPlayerStreamSndTimer[0x1a].time = 240.0f;
    sPlayerStreamSndTimer[0x1b].time = 240.0f;
    sPlayerStreamSndTimer[0x1c].time = 240.0f;
    sPlayerStreamSndTimer[0x1d].time = 240.0f;
    sPlayerStreamSndTimer[0x1e].time = 240.0f;
    sPlayerStreamSndTimer[0x1f].time = 90.0f;
    sPlayerStreamSndTimer[0x20].time = 90.0f;
    sPlayerStreamSndTimer[0x21].time = 90.0f;
    sPlayerStreamSndTimer[0x22].time = 30.0f;
    sPlayerStreamSndTimer[0x23].time = 30.0f;
    sPlayerStreamSndTimer[0x24].time = 30.0f;
    sPlayerStreamSndTimer[0x25].time = 20.0f;
    sPlayerStreamSndTimer[0x26].time = 20.0f;
    sPlayerStreamSndTimer[0x27].time = 20.0f;
    sPlayerStreamSndTimer[0x28].time = 20.0f;
    sPlayerStreamSndTimer[0x29].time = 20.0f;
    sPlayerStreamSndTimer[0x2a].time = 20.0f;
    sPlayerStreamSndTimer[0x2b].time = 20.0f;
    sPlayerStreamSndTimer[0x2c].time = 20.0f;
    sPlayerStreamSndTimer[0x2d].time = 20.0f;
    sPlayerStreamSndTimer[0x2e].time = 60.0f;
    sPlayerStreamSndTimer[0x2f].time = 60.0f;
    sPlayerStreamSndTimer[0x30].time = 60.0f;
    sPlayerStreamSndTimer[0x31].time = 360.0f;
    sPlayerStreamSndTimer[0x32].time = 360.0f;
    sPlayerStreamSndTimer[0x33].time = 360.0f;
    sPlayerStreamSndTimer[0x34].time = 360.0f;
    sPlayerStreamSndTimer[0x35].time = 360.0f;
    sPlayerStreamSndTimer[0x36].time = 360.0f;
    sPlayerStreamSndTimer[0x37].time = 0.0f;
    sPlayerStreamSndTimer[0x38].time = 0.0f;
    sPlayerStreamSndTimer[0x39].time = 0.0f;
    sPlayerStreamSndTimer[0x3a].time = 0.0f;
    sPlayerStreamSndTimer[0x3b].time = 0.0f;
    sPlayerStreamSndTimer[0x3c].time = 240.0f;
    sPlayerStreamSndTimer[0x3d].time = 240.0f;
    sPlayerStreamSndTimer[0x3e].time = 240.0f;
    sPlayerStreamSndTimer[0x3f].time = 240.0f;
    sPlayerStreamSndTimer[0x40].time = 240.0f;
    sPlayerStreamSndTimer[0x41].time = 240.0f;
    sPlayerStreamSndTimer[0x42].time = 240.0f;
    sPlayerStreamSndTimer[0x43].time = 240.0f;
    sPlayerStreamSndTimer[0x44].time = 240.0f;
    sPlayerStreamSndTimer[0x45].time = 0.0f;
    sPlayerStreamSndTimer[0x46].time = 0.0f;
    sPlayerStreamSndTimer[0x47].time = 0.0f;
    sPlayerStreamSndTimer[0x48].time = 0.0f;
    sPlayerStreamSndTimer[0x49].time = 0.0f;
    sPlayerStreamSndTimer[0x4a].time = 0.0f;
    sPlayerStreamSndTimer[0x4b].time = 0.0f;
    sPlayerStreamSndTimer[0x4c].time = 0.0f;
    sPlayerStreamSndTimer[0x4d].time = 0.0f;
    sPlayerStreamSndTimer[0x4e].time = 0.0f;
    sPlayerStreamSndTimer[0x52].time = 30.0f;
    sPlayerStreamSndTimer[0x53].time = 30.0f;
    sPlayerStreamSndTimer[0x54].time = 30.0f;
    sPlayerStreamSndTimer[0x55].time = 30.0f;
    sPlayerStreamSndTimer[0x56].time = 30.0f;
    sPlayerStreamSndTimer[0x57].time = 30.0f;
    sPlayerStreamSndTimer[0x58].time = 30.0f;
    sPlayerStreamSndTimer[0x5c].time = 520.0f;
    sPlayerStreamSndTimer[0x5d].time = 360.0f;
    sPlayerStreamSndTimer[0x5e].time = 360.0f;
    sPlayerStreamSndTimer[0x5f].time = 360.0f;
    sPlayerStreamSndTimer[0x60].time = 360.0f;

    F32 minutes =
        globals.player.Inv_Spatula ? 2.0f * xlog(globals.player.Inv_Spatula) - 3.5f : 0.0f;
    if (minutes <= 0.0f)
    {
        minutes = 0.0f;
    }

    minutes *= 60.0f;

    for (S32 i = 0; i < ePlayerStreamSnd_Total; i++)
    {
        if (i >= ePlayerStreamSnd_Combo4 && i <= ePlayerStreamSnd_BigCombo2)
        {
            break;
        }
        if (sPlayerStreamSndTimer[i].time > 0.0f)
        {
            sPlayerStreamSndTimer[i].time += minutes;
        }
        sPlayerStreamSndTimer[i].timer = 0.3f * sPlayerStreamSndTimer[i].time;
    }

    _SetupRumble(ePlayerSnd_Jump, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_DoubleJump, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BowlWindup, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BowlRelease, eRumble_Light, 0.1f);
    _SetupRumble(ePlayerSnd_BubbleBashStart, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BubbleBashHit1, eRumble_Medium, 0.15f);
    _SetupRumble(ePlayerSnd_BubbleBashHit2, eRumble_Medium, 0.15f);
    _SetupRumble(ePlayerSnd_BubbleWand, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_CruiseStart, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_CruiseNavigate, eRumble_Light, 0.0f);
    _SetupRumble(ePlayerSnd_CruiseHit, eRumble_VeryHeavy, 0.5f);
    _SetupRumble(ePlayerSnd_BounceStrike, eRumble_Heavy, 0.2f);
    _SetupRumble(ePlayerSnd_BoulderStart, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BoulderRoll, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BoulderEnd, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_BellyMelee, eRumble_Medium, 0.2f);
    _SetupRumble(ePlayerSnd_Lift1, eRumble_Light, 0.15f);
    _SetupRumble(ePlayerSnd_Throw, eRumble_VeryLight, 0.15f);
    _SetupRumble(ePlayerSnd_Chop, eRumble_Off, 0.15f);
    _SetupRumble(ePlayerSnd_Kick, eRumble_Off, 0.15f);
    _SetupRumble(ePlayerSnd_Heli, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_LassoThrow, eRumble_VeryLight, 0.2f);
    _SetupRumble(ePlayerSnd_LassoYank, eRumble_VeryLight, 0.2f);
    _SetupRumble(ePlayerSnd_Ouch1, eRumble_Medium, 0.4f);
    _SetupRumble(ePlayerSnd_Ouch2, eRumble_Medium, 0.4f);
    _SetupRumble(ePlayerSnd_Ouch3, eRumble_Medium, 0.4f);
    _SetupRumble(ePlayerSnd_Ouch4, eRumble_Medium, 0.4f);
    _SetupRumble(ePlayerSnd_Death, eRumble_Heavy, 1.0f);
    _SetupRumble(ePlayerSnd_FruitCrackle, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_CheckPoint, eRumble_VeryHeavy, 0.3f);
    _SetupRumble(ePlayerSnd_PickupSpatula, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_PickupUnderwear, eRumble_Off, 0.0f);
    _SetupRumble(ePlayerSnd_Bus, eRumble_Light, 2.3f);
    _SetupRumble(ePlayerSnd_Taxi, eRumble_VeryLight, 2.3f);
}

// Equivalent: scheduling
void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, F32 delay)
{
    if (globals.cmgr == NULL && !sPlayerIgnoreSound)
    {
        if (sPlayerSnd[gCurrentPlayer][player_snd])
        {
            sPlayerSndID[gCurrentPlayer][player_snd] =
                xSndPlay(sPlayerSnd[gCurrentPlayer][player_snd], sPlayerSndFxVolume[player_snd],
                         0.0f, 0x80, 0, 0, SND_CAT_GAME, delay);
            if (sPlayerRumbleTime[player_snd] > 0.0f)
            {
                xPadAddRumble(globals.currentActivePad, sPlayerRumbleType[player_snd],
                              sPlayerRumbleTime[player_snd], 1, 0);
            }
        }
    }
}

void zEntPlayer_SNDPlayStream(_tagePlayerStreamSnd player_snd)
{
    zEntPlayer_SNDPlayStream(player_snd, 0);
}

// Not very close, compiler isn't generating data accesses as offsets to a common base of sPlayerSnd like it should
// Possibly equivalent?
void zEntPlayer_SNDPlayStream(_tagePlayerStreamSnd player_snd, U32 flags)
{
    if (globals.cmgr == NULL && !sPlayerIgnoreSound)
    {
        if (!(sPlayerStreamSndTimer[player_snd].timer > 0.0f ||
              xSndIsPlayingByHandle(sCurrentStreamSndID)))
        {
            sCurrentStreamSndID = xSndPlay(sPlayerStreamSnd[gCurrentPlayer][player_snd],
                                           sPlayerSndStreamVolume[player_snd], 0.0f, 0x80, flags, 0,
                                           SND_CAT_GAME, 0.0f);
            sPlayerStreamSndTimer[player_snd].timer = sPlayerStreamSndTimer[player_snd].time;
        }
    }
}

// equivalent: regswap, likely caused by not reloading 0.0f for second compare
void zEntPlayer_SNDPlayDelayed(F32 seconds)
{
    if (globals.cmgr == NULL && !sPlayerIgnoreSound)
    {
        for (S32 i = 0; i < MAX_DELAYED_SOUNDS; i++)
        {
            if (sDelayedSound[i].delay > 0.0f)
            {
                sDelayedSound[i].delay -= seconds;
                if (sDelayedSound[i].delay <= 0.0f)
                {
                    zEntPlayer_SNDPlayStreamRandom(sDelayedSound[i].start, sDelayedSound[i].end,
                                                   0.0f);
                    sDelayedSound[i].start = ePlayerStreamSnd_Invalid;
                    sDelayedSound[i].end = ePlayerStreamSnd_Invalid;
                    sDelayedSound[i].delay = 0.0f;
                }
            }
        }
    }
}

void zEntPlayer_SNDPlayStream(U32 lower, U32 upper, _tagePlayerStreamSnd player_snd, U32 flags)
{
    if (globals.player.Inv_Spatula >= lower && globals.player.Inv_Spatula <= upper)
    {
        zEntPlayer_SNDPlayStream(player_snd, flags);
    }
}

void zEntPlayer_SNDPlayStreamRandom(U32 lower, U32 upper, _tagePlayerStreamSnd player_snd_start,
                                    _tagePlayerStreamSnd player_snd_end, F32 delay)

{
    if (globals.player.Inv_Spatula >= lower && globals.player.Inv_Spatula <= upper)
    {
        zEntPlayer_SNDPlayStreamRandom(player_snd_start, player_snd_end, delay);
    }
}

void zEntPlayer_SNDPlayStreamRandom(_tagePlayerStreamSnd player_snd_start,
                                    _tagePlayerStreamSnd player_snd_end, F32 delay)
{
    if (globals.cmgr == NULL && !NPCC_NPCIsConversing() && !sPlayerIgnoreSound &&
        !xSndIsPlayingByHandle(sCurrentStreamSndID))
    {
        if (delay > 0.0f)
        {
            for (S32 i = 0; i < MAX_DELAYED_SOUNDS; i++)
            {
                if (sDelayedSound[i].delay <= 0.0f)
                {
                    sDelayedSound[i].start = player_snd_start;
                    sDelayedSound[i].end = player_snd_end;
                    sDelayedSound[i].delay = delay;
                    return;
                }
            }
        }
        else
        {
            S32 diff = player_snd_end - player_snd_start + 1;
            for (S32 i = 0; i < diff; i++)
            {
                if (sPlayerStreamSndTimer[player_snd_start + i].timer > 0.0f)
                {
                    return;
                }
            }

            // Unrolls very differently, not sure if correct
            for (S32 i = 0; i < diff; i++)
            {
                sPlayerStreamSndTimer[player_snd_start + i].timer =
                    sPlayerStreamSndTimer[player_snd_start + i].time;
            }

            S32 rand_array[32];
            for (S32 i = 0; i < diff; i++)
            {
                rand_array[i] = player_snd_start + i;
            }

            for (S32 i = 0; i < diff; i++)
            {
                U32 j = rand() % diff;
                S32 swap = rand_array[i];
                rand_array[i] = rand_array[j];
                rand_array[j] = swap;
            }

            S32 pick_sound = -1;
            if (player_snd_start != player_snd_end)
            {
                S32 first_valid;
                S32 num_valid;
                for (S32 i = 0; i < diff; i++)
                {
                    S32 possible = rand_array[i];
                    if (sPlayerStreamSnd[gCurrentPlayer][possible])
                    {
                        num_valid++;
                        first_valid = possible;
                        if (possible == sPlayerStreamSndRand[gCurrentPlayer][player_snd_start])
                        {
                            continue;
                        }
                        pick_sound = possible;
                        break;
                    }
                }

                if (num_valid == 1)
                {
                    pick_sound = first_valid;
                }
            }
            else
            {
                if (sPlayerStreamSnd[gCurrentPlayer][rand_array[0]])
                {
                    pick_sound = rand_array[0];
                }
            }

            if (pick_sound > 0)
            {
                sPlayerStreamSndRand[gCurrentPlayer][player_snd_start] = pick_sound;
                sCurrentStreamSndID = xSndPlay(sPlayerStreamSnd[gCurrentPlayer][pick_sound],
                                               sPlayerSndStreamVolume[pick_sound], 0.0f, 0x80, 0, 0,
                                               SND_CAT_GAME, 0.0f);
            }
        }
    }
}

void zEntPlayer_SNDPlayRandom(_tagePlayerSnd player_snd_start, _tagePlayerSnd player_snd_end,
                              float delay)
{
    if (globals.cmgr == NULL && !sPlayerIgnoreSound)
    {
        S32 diff = player_snd_end - player_snd_start + 1;
        S32 rand_array[32];
        for (S32 i = 0; i < diff; i++)
        {
            rand_array[i] = player_snd_start + i;
        }

        for (S32 i = 0; i < diff; i++)
        {
            U32 j = rand() % diff;
            S32 swap = rand_array[i];
            rand_array[i] = rand_array[j];
            rand_array[j] = swap;
        }

        S32 pick_sound = 0;
        for (S32 i = 0; i < diff; i++)
        {
            S32 possible = rand_array[i];
            if (sPlayerSnd[gCurrentPlayer][possible] &&
                possible != sPlayerSndRand[gCurrentPlayer][player_snd_start])
            {
                pick_sound = possible;
                break;
            }
            pick_sound = 0;
        }

        if (pick_sound > 0)
        {
            sPlayerSndRand[gCurrentPlayer][player_snd_start] = pick_sound;
            U32 returned_snd_id =
                xSndPlay(sPlayerSnd[gCurrentPlayer][pick_sound], sPlayerSndFxVolume[pick_sound],
                         0.0f, 0x80, 0, 0, SND_CAT_GAME, delay);

            if (sPlayerRumbleTime[pick_sound] > 0.0f)
            {
                xPadAddRumble(globals.currentActivePad, sPlayerRumbleType[pick_sound],
                              sPlayerRumbleTime[pick_sound], 1, 0);
            }

            // This unrolling makes no sense
            for (S32 i = 0; i < (player_snd_end + 1) - player_snd_start; i++)
            {
                sPlayerSndID[gCurrentPlayer][player_snd_start + i] = returned_snd_id;
            }
        }
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

void zEntPlayer_SNDStop(_tagePlayerSnd player_snd)
{
    if (sPlayerSnd[gCurrentPlayer][player_snd] && sPlayerSndID[gCurrentPlayer][player_snd])
    {
        xSndStop(sPlayerSndID[gCurrentPlayer][player_snd]);
        sPlayerSndID[gCurrentPlayer][player_snd] = 0;
        if (globals.sceneCur->sceneID != 'MNU3')
        {
            xPadDestroyRumbleChain(globals.currentActivePad);
        }
    }
}

void zEntPlayer_SNDStopStream()
{
    if (xSndIsPlayingByHandle(sCurrentStreamSndID))
    {
        xSndStop(sCurrentStreamSndID);
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

xAnimTable* zSandy_AnimTable()
{
	xAnimTable *animTable = xAnimTableNew("Sandy", NULL, 0);
	
    xAnimTableNewState(animTable, "Idle01",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle01b",              0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle01c",              0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle02",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle04",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle05",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive_sleep",       0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipIdle01",           0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive01",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive02",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit01",                0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeat01",             0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeat02",             0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeat03",             0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeat04",             0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DefeatGoo",            0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Walk01",               0x10, 0x0044, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run01",                0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "RunOutOfWorld01",      0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipRun01",            0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpStart01",          0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpLift01",           0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpApex01",           0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Fall01",               0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Land01",               0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LandRun01",            0x20, 0x0006, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceStart01",        0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceLift01",         0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceApex01",         0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DJumpApex01",          0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "FallHigh01",           0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LandHigh01",           0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LCopterHeadUp01",      0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LCopter01",            0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LedgeGrab01",          0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlide01",          0x10, 0x1840, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlideJumpStart01", 0x20, 0x100a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlideJumpApex01",  0x20, 0x100a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlideFall01",      0x10, 0x100a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlideLand01",      0x20, 0x100a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TailSlideDJumpApex01", 0x20, 0x100a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk04",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk03",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk02",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk01",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoSwingCatch01",    0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoSwingCatch02",    0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoSwing",           0x10, 0x0040, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoSwingRelease",    0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SpatulaGrab01",        0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpMelee01",          0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Melee01",              0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoWindup",          0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoThrow",           0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoFly",             0x10, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoDestroy",         0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoAboutToDestroy",  0x10, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoEnemyRope",       0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoEnemyFight",      0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoEnemyWin",        0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LassoEnemyLose",       0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
	
    xAnimTableNewTransition(animTable, "LandRun01", "Run01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);
	
    xAnimTableNewTransition(animTable, "Idle01b Idle01c Idle02 Idle04 Idle05 Inactive_sleep Inactive01 Inactive02 Land01 LandHigh01", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 SlipRun01", "LassoSwingCatch01", LassoSwingGroundedBeginCheck, LassoSwingGroundedBeginCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpStart01 JumpApex01 Fall01 DJumpStart01 DJumpApex01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideFall01 TailSlideDJumpApex01 LCopter01 LCopterHeadUp01 BounceStart01 BounceLift01 BounceApex01", "LassoSwingCatch01", LassoSwingBeginCheck, LassoSwingBeginCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
	
    xAnimTableNewTransition(animTable, "LassoSwingCatch01", "LassoSwingCatch02", NULL, LassoSwingTossCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch02",        "LassoSwing", NULL,     LassoSwingCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
	
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "SlipIdle01",            IdleSlipCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "Idle01",                    IdleCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "Walk01",                    WalkCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "Run01",                   RunAnyCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "RunOutOfWorld01",  RunOutOfWorldCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "SlipRun01",              RunSlipCheck, LassoSwingGroundedCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoSwingCatch01 LassoSwingCatch02 LassoSwing", "Fall01",       LassoSwingReleaseCheck,  LassoSwingReleaseCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
	
    xAnimTableNewTransition(animTable, "LassoWindup", "LassoThrow", NULL,  LassoThrowCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
    xAnimTableNewTransition(animTable, "LassoThrow",  "LassoFly",   NULL,    LassoFlyCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
	
    xAnimTableNewTransition(animTable, "LassoEnemyRope", "LassoEnemyFight", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
									   
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "SlipIdle01",           IdleSlipCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "Idle01",                   IdleCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "Walk01",                   WalkCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "Run01",                  RunAnyCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "RunOutOfWorld01", RunOutOfWorldCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01 JumpMelee01", "SlipRun01",             RunSlipCheck, MeleeStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
	
    xAnimTableNewTransition(animTable, "JumpMelee01", "Fall01", NULL, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 Inactive_sleep SlipIdle01 Inactive01 Inactive02 Walk01 Run01 Land01 LandRun01 ", "SpatulaGrab01", SpatulaGrabCheck, SpatulaGrabCB, 0, 0, 0.0, 0.0, 5, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "Melee01", "SpatulaGrab01", SpatulaGrabCheck, SpatulaMeleeStopCB, 0x00, 0, 0.0, 0.0, 5, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "SpatulaGrab01",  "Idle01",             NULL,  SpatulaGrabStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "SlipIdle01",           IdleSlipCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "Idle01",                   IdleCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "Walk01",                   WalkCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "Run01",                  RunAnyCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "RunOutOfWorld01", RunOutOfWorldCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoEnemyWin LassoEnemyLose LassoDestroy", "SlipRun01",             RunSlipCheck,  LassoStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "DJumpApex01", "Fall01",     NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.20, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01",  "Fall01",     NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.08,  NULL);
    xAnimTableNewTransition(animTable, "JumpStart01", "JumpApex01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.08,  NULL);
									   
    xAnimTableNewTransition(animTable, "Idle01 SlipIdle01 Walk01 Run01 RunOutOfWorld01 SlipRun01 Land01 LandHigh01 LandRun01 JumpStart01 JumpApex01 DJumpApex01 Fall01", "BounceStart01", BounceCheck, BounceCB, 0, 0, 0.0, 0.0, 0x0f, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopterHeadUp01 LCopter01", "BounceStart01",   BounceCheck, BounceStopLCopterCB, 0x00, 0, 0.0, 0.0, 0x0f, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceStart01",              "BounceLift01",          NULL,                NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceLift01",               "BounceApex01", JumpApexCheck,                NULL, 0x00, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceApex01",                     "Fall01",          NULL,                NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 SlipRun01", "LassoWindup", LassoStartCheck, LassoStartCB, 0, 0, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpStart01 JumpLift01 JumpApex01 DJumpApex01 Fall01 BounceStart01 BounceLift01 BounceApex01", "JumpMelee01", MeleeCheck, JumpMeleeCB, 0, 0, 0.0, 0.0, 2, 0, 0.06, NULL);
    xAnimTableNewTransition(animTable, "DJumpApex01", "JumpMelee01", MeleeCheck, JumpMeleeCB, 0, 0, 0.0, 0.0,2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Land01 Run01 SlipRun01", "Melee01",           MeleeCheck,     MeleeCB, 0, 0, 0.0, 0.0, 2, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "LassoWindup LassoThrow LassoFly LassoDestroy LassoAboutToDestroy LassoEnemyRope LassoEnemyFight LassoEnemyWin LassoEnemyLose",         "Idle01", LassoLostTargetCheck, LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    
	xAnimTableNewTransition(animTable, "LassoFly", "LassoDestroy",                 LassoStraightToDestroyCheck, LassoDestroyCB, 0, 0, 0.0, 0.0, 0, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "LassoDestroy", "LassoDestroy",                        LassoReyankCheck,    LassoYankCB, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoFly", "LassoAboutToDestroy",             LassoAboutToDestroyCheck, LassoDestroyCB, 0, 0, 0.0, 0.0, 0, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "LassoDestroy",                LassoDestroyCheck,    LassoYankCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "SlipIdle01",             LassoFailIdleSlipCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "Idle01",                     LassoFailIdleCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "Walk01",                     LassoFailWalkCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "Run01",                       LassoFailRunCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "RunOutOfWorld01",   LassoFailRunOutOfWorldCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LassoAboutToDestroy", "SlipRun01",               LassoFailRunSlipCheck,    LassoStopCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "SlipIdle01",           IdleSlipCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "Idle01",                   IdleCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "Walk01",                   WalkCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "Run01",                  RunAnyCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "RunOutOfWorld01", RunOutOfWorldCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "SlipRun01",             RunSlipCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "Walk01 Run01 RunOutOfWorld01 LandRun01 Idle01 SlipRun01", "SlipIdle01", IdleSlipCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Walk01 Run01 RunOutOfWorld01 LandRun01 SlipIdle01 SlipRun01", "Idle01", IdleCheck,     IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Run01 RunOutOfWorld01 SlipRun01 LandRun01 Land01 LandHigh01",   "Walk01",          WalkCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep RunOutOfWorld01 SlipRun01 Walk01 Land01 LandHigh01",             "Run01",        RunAnyCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Run01 SlipRun01 Walk01 Land01 LandHigh01",             "RunOutOfWorld01", RunOutOfWorldCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Run01 RunOutOfWorld01 Walk01 Land01 LandHigh01",             "SlipRun01",       RunSlipCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
									   
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 Land01 LandHigh01", "JumpStart01", JumpCheck, JumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.0, NULL);
									   
    xAnimTableNewTransition(animTable, "JumpStart01", "JumpApex01", JumpApexCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "JumpStart01 JumpApex01 Fall01 BounceStart01 BounceLift01 BounceApex01", "DJumpApex01", DblJumpCheck, DblJumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "LCopter01 LCopterHeadUp01", "Fall01", FallCheck, StopLCopterCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 RunOutOfWorld01 Run01 SlipRun01 Land01 LandHigh01", "Fall01", FallCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    
	xAnimTableNewTransition(animTable, "JumpApex01 DJumpApex01 Fall01", "Land01",             LandCheck, SandyLandCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 DJumpApex01 Fall01", "SlipIdle01", LandSlipIdleCheck, SandyLandCB, 0, 0, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 DJumpApex01 Fall01", "LandRun01",      LandFastCheck, SandyLandCB, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 DJumpApex01 Fall01", "Walk01",         LandWalkCheck, SandyLandCB, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
	xAnimTableNewTransition(animTable, "JumpApex01 DJumpApex01 Fall01", "SlipRun01",   LandSlipRunCheck, SandyLandCB, 0, 0, 0.0, 0.0, 4, 0, 0.15, NULL);
	
    xAnimTableNewTransition(animTable, "Fall01 DJumpApex01 TailSlideFall01 TailSlideDJumpApex01", "LCopterHeadUp01", LCopterCheck, LCopterCB, 0, 0, 0.0, 0.0, 8, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LCopterHeadUp01", "LCopter01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpStart01 JumpLift01 JumpApex01 Fall01 DJumpApex01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideFall01 TailSlideDJumpApex01 LCopter01 LCopterHeadUp01", "LedgeGrab01", LedgeGrabCheck, LedgeGrabCB, 0, 0, 0.0, 0.0, 0x0B, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "LedgeGrab01", "Idle01", NULL,LedgeFinishCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01", "TailSlide01", SlideTrackCheck, SlideTrackCB, 0, 0, 0.0, 0.0, 9, 0, 0.15, NULL);
    
	xAnimTableNewTransition(animTable, "TailSlide01",                                                           "Idle01",  NoslideTrackCheck, NoslideTrackCB, 0x00, 0, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlide01",                                                   "TailSlideFall01", TrackFallCheck,       TrackFallCB, 0x00, 0, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideDJumpApex01",                                          "TailSlideFall01", NULL,                        NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.20, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpApex01",                                           "TailSlideFall01", NULL,                        NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "TailSlideLand01",                                                   "TailSlide01", NULL,                        NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01",                                      "TailSlideJumpApex01", NULL,                        NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "TailSlide01 TailSlideLand01",                              "TailSlideJumpStart01", JumpCheck,                 JumpCB, 0x00, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideFall01", "TailSlideJumpStart01", TrackPrefallJumpCheck,     JumpCB, 0x00, 0, 0.0, 0.0, 0x0F, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01",                                      "TailSlideJumpApex01", JumpApexCheck,               NULL, 0x00, 0, 0.0, 0.0, 0x01, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideFall01", "TailSlideDJumpApex01", DblJumpCheck,           DblJumpCB, 0x00, 0, 0.0, 0.0, 0x0A, 0, 0.10, NULL);
									   
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "TailSlideLand01",      LandTrackCheck,   SlideTrackCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "Land01",             LandNoTrackCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "LandRun01",      LandNoTrackFastCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "Walk01",         LandNoTrackWalkCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "SlipIdle01", LandNoTrackSlipIdleCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 4, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01", "SlipRun01",   LandNoTrackSlipRunCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 4, 0, 0.15, NULL);
									   
	xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01 TailSlide01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01 TailSlideLand01", "Defeat01", Defeated01Check, DefeatedCB, 0, 4, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01 TailSlide01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01 TailSlideLand01", "Defeat02", Defeated02Check, DefeatedCB, 0, 4, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01 TailSlide01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01 TailSlideLand01", "Defeat03", Defeated03Check, DefeatedCB, 0, 4, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01 TailSlide01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01 TailSlideLand01", "Defeat04", Defeated04Check, DefeatedCB, 0, 4, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive01 Inactive02 Inactive_sleep Walk01 LandRun01 Run01 RunOutOfWorld01 SlipRun01 JumpLift01 JumpApex01 Fall01 Land01 DJumpApex01 FallHigh01 LandHigh01 LCopter01 LCopterHeadUp01 TailSlide01 TailSlideJumpStart01 TailSlideJumpApex01 TailSlideDJumpApex01 TailSlideFall01 TailSlideLand01", "DefeatGoo",       GooCheck, GooDeathCB, 0, 0, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
									   
	xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive_sleep Inactive01 Inactive02 ", "Talk01", TalkCheck, NULL, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive_sleep Inactive01 Inactive02 ", "Talk02", TalkCheck, NULL, 0, 1, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive_sleep Inactive01 Inactive02 ", "Talk03", TalkCheck, NULL, 0, 2, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle01b Idle01c Idle02 Idle04 Idle05 SlipIdle01 Inactive_sleep Inactive01 Inactive02 ", "Talk04", TalkCheck, NULL, 0, 3, 0.0, 0.0, 0x14, 0, 0.15, NULL);
									   
	xAnimTableNewTransition(animTable, "Talk01",     "Idle01",                TalkDoneCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk02",     "Idle01",                TalkDoneCheck,      IdleCB, 0x00, 0x00001, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk03",     "Idle01",                TalkDoneCheck,      IdleCB, 0x00, 0x00002, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk04",     "Idle01",                TalkDoneCheck,      IdleCB, 0x00, 0x00003, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle01b",               InactiveCheck,  InactiveCB, 0x00, 0x80000, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle01c",               InactiveCheck,  InactiveCB, 0x00, 0x80001, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle02",                InactiveCheck,  InactiveCB, 0x00, 0x80002, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle04",                InactiveCheck,  InactiveCB, 0x00, 0x80003, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle05",                InactiveCheck,  InactiveCB, 0x00, 0x80004, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive_sleep",        InactiveCheck,  InactiveCB, 0x00, 0x80005, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive01",            InactiveCheck,  InactiveCB, 0x00, 0x80006, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive02",            InactiveCheck,  InactiveCB, 0x00, 0x80007, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01b",    "Idle01",        InactiveFinishedCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01c",    "Idle01",        InactiveFinishedCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle02",     "Idle01",        InactiveFinishedCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle04",     "Idle01",        InactiveFinishedCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle05",     "Idle01",        InactiveFinishedCheck,      IdleCB, 0x00, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive01", "Idle01",                         NULL,      IdleCB, 0x10, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive02", "Idle01",                         NULL,      IdleCB, 0x10, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Hit01",      "Idle01",                         NULL,      IdleCB, 0x10, 0x00000, 0.0, 0.0, 0x00, 0, 0.15, NULL);
	
	return animTable;
}

xAnimTable* zSpongeBobTongue_AnimTable()
{
    xAnimTable* animTable = xAnimTableNew("SBTongue", NULL, 0);

    xAnimTableNewState(animTable,"TongueSlide01",     0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueStart01",     0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueJump01",      0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueJumpXtra01",  0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueDJumpApex01", 0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueFall01",      0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable,"TongueLand01",      0x10, 0, 1.0f, NULL, NULL, 0.0f, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    return animTable;
}

xAnimTable* zPatrick_AnimTable()
{
    xAnimTable* animTable = xAnimTableNew("Patrick", NULL, 0);

    xAnimTableNewState(animTable, "Idle01",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle02",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle03",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle04",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipIdle01",           0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive01",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive02",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive03",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive04",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive05",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive06",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive07",           0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Walk01",               0x10, 0x0044, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Walk02",               0x10, 0x0044, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Walk03",               0x10, 0x0044, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run01",                0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run02",                0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run03",                0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "RunOutOfWorld01",      0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipRun01",            0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpStart01",          0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Fall01",               0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Land01",               0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceStart01",        0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceLift01",         0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceApex01",         0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DJumpStart01",         0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "FallHigh01",           0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LandHigh01",           0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LedgeGrab01",          0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "StunJump",             0x20, 0x400a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "StunFall",             0x10, 0x400a, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "StunLand",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit01",                0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit02",                0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit03",                0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Melee01",              0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated01",           0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated02",           0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DefeatedGoo01",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DefeatedProjectile01", 0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "ButtSlide01",          0x10, 0x1840, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk04",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk03",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk02",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk01",               0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_Pickup",         0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_PickupFail",     0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_Idle",           0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_Walk",           0x10, 0x0004, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_Throw",          0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_PickupItem",     0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_IdleItem",       0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_WalkItem",       0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Carry_ThrowItem",      0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SpatulaGrab01",        0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 Land01 LandHigh01 Melee01 Carry_Idle Carry_Walk Carry_IdleItem Carry_WalkItem", "SpatulaGrab01", SpatulaGrabCheck, SpatulaGrabCB, 0, 0, 0.0, 0.0, 5, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "SpatulaGrab01",    "Idle01",             NULL, SpatulaGrabStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Carry_Pickup",     "Carry_Idle",         NULL,              NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "Carry_Throw",      "Idle01",             NULL,              NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "Carry_PickupFail", "Idle01",             NULL,              NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "Carry_Idle",       "Carry_Walk", AnyMoveCheck,              NULL, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Carry_Walk",       "Carry_Idle", AnyStopCheck,              NULL, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Carry_Idle Carry_Walk", "Carry_Throw", PatrickGrabThrow, PatrickGrabThrowCB, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 SlipRun01", "Carry_Pickup",  PatrickGrabCheck, PatrickGrabCB, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03", "Carry_PickupFail", PatrickGrabFailed, NULL, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Carry_Idle Carry_Walk Carry_Pickup","Idle01", PatrickGrabKill, NULL, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 SlipRun01","Melee01", PatrickAttackCheck, PatrickMeleeCB, 0, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Melee01", "SlipIdle01",           IdleSlipCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Idle01",                   IdleCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Walk01",              WalkStoicCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Walk02",            WalkVictoryCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Walk03",             WalkScaredCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Run01",                RunStoicCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Run02",              RunVictoryCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "Run03",               RunScaredCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "RunOutOfWorld01", RunOutOfWorldCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Melee01", "SlipRun01",             RunSlipCheck, NULL, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Inactive01 Land01 LandHigh01","Idle01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01",  "Fall01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
    xAnimTableNewTransition(animTable, "DJumpStart01", "Fall01", NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);

    xAnimTableNewTransition(animTable, "Idle01 SlipIdle01 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01 JumpStart01 JumpApex01 DJumpStart01 Fall01 StunJump StunFall StunLand","BounceStart01", BounceCheck, BounceCB, 0, 0, 0.0, 0.0, 0x0F, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "BounceStart01",   "BounceLift01",          NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceLift01",    "BounceApex01", JumpApexCheck, NULL, 0x00, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceApex01",    "Fall01",                NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01","SlipIdle01", IdleSlipCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "SlipIdle01 Walk01 Run01 RunOutOfWorld01 SlipRun01","Idle01", IdleCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Walk02 Run02", "Idle02", IdleVictoryCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle02 Run02",        "Walk02", WalkVictoryCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle02 Walk02",        "Run02",  RunVictoryCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle02 Walk02 Run02", "Idle01",   IdleStoicCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Walk03 Run03 Idle01", "Idle04",  IdleScaredCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle04 Run03",        "Walk03",  WalkScaredCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle04 Walk03",        "Run03",   RunScaredCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle04 Walk03 Run03", "Idle01",   IdleStoicCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01","Walk01", WalkStoicCheck,   NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01","Walk02", WalkVictoryCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01","Walk03", WalkScaredCheck,  NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Land01 LandHigh01 Run02 Run03 RunOutOfWorld01 SlipRun01",        "Run01",                RunStoicCheck,   NULL, 0, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Land01 LandHigh01 Run01 Run03 RunOutOfWorld01 SlipRun01",        "Run02",              RunVictoryCheck,   NULL, 0, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Land01 LandHigh01 Run01 Run02 RunOutOfWorld01 SlipRun01",        "Run03",               RunScaredCheck,   NULL, 0, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Land01 LandHigh01 Run01 Run02 Run03 SlipRun01",                  "RunOutOfWorld01", RunOutOfWorldCheck,   NULL, 0, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Land01 LandHigh01 Run01 Run02 Run03 RunOutOfWorld01",            "SlipRun01",             RunSlipCheck,   NULL, 0, 0, 0.0, 0.0, 0x01, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01",  "JumpStart01",              JumpCheck, JumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 Fall01 FallHigh01 BounceStart01 BounceLift01 BounceApex01","DJumpStart01", DblJumpCheck, DblJumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Fall01 FallHigh01 JumpStart01 DJumpStart01","Land01",             LandCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Fall01 FallHigh01 JumpStart01 DJumpStart01","SlipRun01",   LandSlipRunCheck, NULL, 0, 0, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Fall01 FallHigh01 JumpStart01 DJumpStart01","SlipIdle01", LandSlipIdleCheck, NULL, 0, 0, 0.0, 0.0, 2, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Land01 LandHigh01","Fall01", FallCheck, NULL, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 Fall01 FallHigh01 DJumpStart01 BounceStart01 BounceLift01 BounceApex01","StunJump", PatrickStunCheck, NULL, 0, 0, 0.0, 0.0, 0x0A, 0, 0.125, NULL);

    xAnimTableNewTransition(animTable, "StunJump", "StunFall",      NULL, StunStartFallCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
    xAnimTableNewTransition(animTable, "StunFall", "StunLand", LandCheck,    StunRadiusCB, 0x00, 0, 0.0, 0.0, 1, 0, 0.1, NULL);
    xAnimTableNewTransition(animTable, "StunLand", "Idle01",        NULL,            NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 Fall01 FallHigh01 DJumpStart01","LedgeGrab01", LedgeGrabCheck, LedgeGrabCB, 0, 0, 0.0, 0.0, 0x0B, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "LedgeGrab01","Idle01", NULL, LedgeFinishCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 Fall01 FallHigh01 Land01 LandHigh01","ButtSlide01", SlideTrackCheck, SlideTrackCB, 0, 0, 0.0, 0.0, 9, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Carry_PickupFail Carry_Idle Carry_Walk Carry_Throw","ButtSlide01", SlideTrackCheck, SlideTrackCB, 0, 0, 0.0, 0.0, 9, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "ButtSlide01", "Idle01",   NoslideTrackCheck, NoslideTrackCB, 0, 0, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "ButtSlide01", "Fall01",      TrackFallCheck,    TrackFallCB, 0, 0, 0.0, 0.0, 0x09, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "ButtSlide01", "JumpStart01",      JumpCheck,         JumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 Fall01 FallHigh01","JumpStart01", TrackPrefallJumpCheck, JumpCB, 0, 0, 0.0, 0.0, 0x0F, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01", "Idle03",             InactiveCheck, InactiveCB, 0, 0x080000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive01",         InactiveCheck, InactiveCB, 0, 0x080001, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive02",         InactiveCheck, InactiveCB, 0, 0x080002, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive03",         InactiveCheck, InactiveCB, 0, 0x080003, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive04",         InactiveCheck, InactiveCB, 0, 0x080004, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive05",         InactiveCheck, InactiveCB, 0, 0x080005, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive06",         InactiveCheck, InactiveCB, 0, 0x080006, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01", "Inactive07",         InactiveCheck, InactiveCB, 0, 0x080007, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle03", "Idle01",     InactiveFinishedCheck,     IdleCB, 0, 0x000000, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 ","Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Hit01 Hit02 Hit03 Hit04","Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTransition* pTran = xAnimTableNewTransition(animTable,"Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01","Defeated01", Defeated01Check, DefeatedCB, 0,2, 0.0, 0.0, 0x0F, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "JumpStart01 Fall01 Land01 DJumpStart01 FallHigh01 LandHigh01 LedgeGrab01 StunJump");
    xAnimTableAddTransition(animTable, pTran, "StunFall StunLand Hit01 Hit02 Hit03 Hit04 Melee01 ButtSlide01");
    xAnimTableAddTransition(animTable, pTran, "Carry_Pickup Carry_PickupFail Carry_Idle Carry_Walk Carry_Throw Carry_PickupItem");
    xAnimTableAddTransition(animTable, pTran, "Carry_IdleItem Carry_WalkItem Carry_ThrowItem");

    pTran = xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01","Defeated02", Defeated02Check, DefeatedCB, 0,2, 0.0, 0.0, 0x0F, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "JumpStart01 Fall01 Land01 DJumpStart01 FallHigh01 LandHigh01 LedgeGrab01 StunJump");
    xAnimTableAddTransition(animTable, pTran, "StunFall StunLand Hit01 Hit02 Hit03 Hit04 Melee01 ButtSlide01");
    xAnimTableAddTransition(animTable, pTran, "Carry_Pickup Carry_PickupFail Carry_Idle Carry_Walk Carry_Throw Carry_PickupItem");
    xAnimTableAddTransition(animTable, pTran, "Carry_IdleItem Carry_WalkItem Carry_ThrowItem");

    pTran = xAnimTableNewTransition(animTable,"Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Walk01 Walk02 Walk03 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01","DefeatedGoo01", GooCheck, GooDeathCB, 0, 0, 0.0, 0.0, 0x10, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "JumpStart01 Fall01 Land01 DJumpStart01 FallHigh01 LandHigh01 LedgeGrab01 StunJump");
    xAnimTableAddTransition(animTable, pTran, "StunFall StunLand Hit01 Hit02 Hit03 Hit04 Melee01 ButtSlide01");
    xAnimTableAddTransition(animTable, pTran, "Carry_Pickup Carry_PickupFail Carry_Idle Carry_Walk Carry_Throw Carry_PickupItem");
    xAnimTableAddTransition(animTable, pTran, "Carry_IdleItem Carry_WalkItem Carry_ThrowItem");

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 ", "Talk01", TalkCheck, NULL, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 ", "Talk02", TalkCheck, NULL, 0, 1, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 ", "Talk03", TalkCheck, NULL, 0, 2, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 ", "Talk04", TalkCheck, NULL, 0, 3, 0.0, 0.0, 0x14, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Talk01", "Idle01", TalkDoneCheck, IdleCB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk02", "Idle01", TalkDoneCheck, IdleCB, 0, 1, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk03", "Idle01", TalkDoneCheck, IdleCB, 0, 2, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk04", "Idle01", TalkDoneCheck, IdleCB, 0, 3, 0.0, 0.0, 0x14, 0, 0.15, NULL);

    return animTable;
}

xAnimTable* zEntPlayer_AnimTable()
{
    static const char* STANDARD_STATES[33] =
    {
        "Idle01",
        "Walk01",
        "Run01",
        "Run02",
        "Run03",
        "RunOutOfWorld01",
        "SlipRun01",
        "SlipIdle01",
        "Land01",
        "LandHigh01",
        "Idle02",
        "Idle03",
        "Idle04",
        "Idle05",
        "Idle06",
        "Idle07",
        "Idle08",
        "Idle09",
        "Idle10",
        "Idle11",
        "Idle12",
        "Idle13",
        "Inactive01",
        "Inactive02",
        "Inactive03",
        "Inactive04",
        "Inactive05",
        "Inactive06",
        "Inactive07",
        "Inactive08",
        "Inactive09",
        "Inactive10",
        NULL
    };

    static const char* HIT_STATES[64] =
    {
        "Idle01",
        "SlipIdle01",
        "Walk01",
        "Run01",
        "Run02",
        "Run03",
        "SlipRun01",
        "Land01",
        "LandHigh01",
        "LandRun01",
        "Idle02",
        "Idle03",
        "Idle04",
        "Idle05",
        "Idle06",
        "Idle07",
        "Idle08",
        "Idle09",
        "Idle10",
        "Idle11",
        "Idle12",
        "Idle13",
        "Inactive01",
        "Inactive02",
        "Inactive03",
        "Inactive04",
        "Inactive05",
        "Inactive06",
        "Inactive07",
        "Inactive08",
        "Inactive09",
        "Inactive10",
        "TongueStart01",
        "TongueSlide01",
        "TongueJump01",
        "TongueJumpXtra01",
        "TongueDJumpApex01",
        "TongueLand01",
        "JumpStart01",
        "JumpApex01",
        "DJumpStart01",
        "DJumpLift01",
        "Fall01",
        "Bspin01",
        "BbashStart01",
        "BbashAttack01",
        "BbashStrike01",
        "BbounceStart01",
        "BbounceAttack01",
        "BbounceStrike01",
        "BounceStart01",
        "BounceLift01",
        "BounceApex01",
        "Bbowl01",
        "BbowlStart01",
        "BbowlWindup01",
        "BbowlToss01",
        "BbowlRecover01",
        "WallLaunch01",
        "WallFlight01",
        "WallFlight02",
        "WallLand01",
        "WallFall01",
        NULL
    };

    xAnimTable* animTable = xAnimTableNew("SB", NULL, 0);

    xAnimTableNewState(animTable, "Idle01",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle02",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle03",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle04",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle05",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle06",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle07",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle08",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle09",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle10",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle11",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle12",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Idle13",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipIdle01",        0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive01",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive02",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive03",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive04",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive05",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive06",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive07",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive08",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive09",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Inactive10",        0x20, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Walk01",            0x10, 0x0044, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run01",             0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run02",             0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Run03",             0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "RunOutOfWorld01",   0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SlipRun01",         0x10, 0x0046, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpStart01",       0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpLift01",        0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "JumpApex01",        0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Fall01",            0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Land01",            0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LandRun01",         0x20, 0x0006, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceStart01",     0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceLift01",      0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BounceApex01",      0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DJumpStart01",      0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "DJumpLift01",       0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "FallHigh01",        0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LandHigh01",        0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Bspin01",           0x20, 0x080A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbashAttack01",     0x10, 0x4000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbashStart01",      0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbashStrike01",     0x20, 0x4000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbashMiss01",       0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbounceAttack01",   0x10, 0x4000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbounceStart01",    0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbounceStrike01",   0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Bbowl01",           0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbowlStart01",      0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbowlWindup01",     0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbowlToss01",       0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BbowlRecover01",    0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "LedgeGrab01",       0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit01",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit02",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit03",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit04",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Hit05",             0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated01",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated02",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated03",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated04",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Defeated05",        0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueSlide01",     0x10, 0x1840, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueStart01",     0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueJump01",      0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueJumpXtra01",  0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueDJumpApex01", 0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueFall01",      0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueLand01",      0x20, 0x1800, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "TongueTumble01",    0x20, 0x1800, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Goo01",             0x10, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Goo02",             0x20, 0x0000, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "GooDefeated",       0x00, 0x0480, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "WallLaunch01",      0x20, 0x008A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "WallFlight01",      0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "WallFlight02",      0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "WallLand01",        0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "WallFall01",        0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BoulderRoll01",     0x20, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "BoulderRoll02",     0x10, 0x000A, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk04",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk03",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk02",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "Talk01",            0x10, 0x0001, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(animTable, "SpatulaGrab01",     0x20, 0x0080, 1.0, NULL, NULL, 0.0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 Walk01 Run01 Run02 Run03 Land01 LandRun01","SpatulaGrab01",SpatulaGrabCheck,SpatulaGrabCB, 0,0, 0.0,0.0,2, 0,0.15, NULL);

    xAnimTableNewTransition(animTable, "SpatulaGrab01", "Idle01",                  NULL, SpatulaGrabStopCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle02",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle03",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle04",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle05",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle06",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle07",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle08",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle09",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle11",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle12",        "Idle01", InactiveFinishedCheck,            IdleCB, 0x00, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive01",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive02",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive03",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive04",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive05",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive06",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive07",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive08",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive09",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Inactive10",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Land01",        "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "LandHigh01",    "Idle01",                  NULL,            IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.10, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Walk01 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01", "SlipIdle01", IdleSlipCheck, IdleCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "LandRun01",  "SlipIdle01", IdleSlipCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "SlipIdle01", "Idle01",         IdleCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Walk01",     "Idle01",         IdleCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Run01",      "Idle01",         IdleCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Run02",      "Idle10",  IdleVictoryCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Run02",      "Idle01",    IdleStoicCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle10",     "Idle01",    IdleStoicCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle10",  IdleVictoryCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Run03",      "Idle13",   IdleScaredCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Run03",      "Idle01",    IdleStoicCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle13",     "Idle01",    IdleStoicCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle13",   IdleScaredCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LandRun01",  "Idle01",         IdleCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "SlipRun01",  "Idle01",         IdleCheck,     IdleCB, 0, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle02",     InactiveCheck, InactiveCB, 0, 0x00140000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle03",     InactiveCheck, InactiveCB, 0, 0x00140001, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle04",     InactiveCheck, InactiveCB, 0, 0x00140002, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle05",     InactiveCheck, InactiveCB, 0, 0x00140003, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle06",     InactiveCheck, InactiveCB, 0, 0x00140004, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle07",     InactiveCheck, InactiveCB, 0, 0x00140005, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle08",     InactiveCheck, InactiveCB, 0, 0x00140006, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle09",     InactiveCheck, InactiveCB, 0, 0x00140007, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle11",     InactiveCheck, InactiveCB, 0, 0x00140008, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Idle12",     InactiveCheck, InactiveCB, 0, 0x00140009, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive01", InactiveCheck, InactiveCB, 0, 0x0014000a, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive02", InactiveCheck, InactiveCB, 0, 0x0014000b, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive03", InactiveCheck, InactiveCB, 0, 0x0014000c, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive04", InactiveCheck, InactiveCB, 0, 0x0014000d, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive05", InactiveCheck, InactiveCB, 0, 0x0014000e, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive06", InactiveCheck, InactiveCB, 0, 0x0014000f, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive07", InactiveCheck, InactiveCB, 0, 0x00140010, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive08", InactiveCheck, InactiveCB, 0, 0x00140011, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive09", InactiveCheck, InactiveCB, 0, 0x00140012, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01",     "Inactive10", InactiveCheck, InactiveCB, 0, 0x00140013, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTransition* tranTbl1[8];

    tranTbl1[0] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "Walk01",                    WalkCheck,        NoSlipCB, 0, 0x00000000, 0.0f, 0.0f, 0x01, 0, 0.15f, NULL);
    tranTbl1[1] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "Run01",                 RunStoicCheck,        NoSlipCB, 0, 0x00000000, 0.0f, 0.0f, 0x01, 0, 0.15f, NULL);
    tranTbl1[2] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "Run02",               RunVictoryCheck,        NoSlipCB, 0, 0x00000000, 0.0f, 0.0f, 0x03, 0, 0.15f, NULL);
    tranTbl1[3] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "Run03",                RunScaredCheck,        NoSlipCB, 0, 0x00000000, 0.0f, 0.0f, 0x02, 0, 0.15f, NULL);
    tranTbl1[4] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "SlipRun01",              RunSlipCheck,       SlipRunCB, 0, 0x00000000, 0.0f, 0.0f, 0x02, 0, 0.15f, NULL);
    tranTbl1[5] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "RunOutOfWorld01",  RunOutOfWorldCheck,        NoSlipCB, 0, 0x00200100, 0.0f, 0.0f, 0x02, 0, 0.15f, NULL);
    tranTbl1[6] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "Fall01",                    FallCheck,        NoSlipCB, 0, 0x00000000, 0.0f, 0.0f, 0x01, 0, 0.15f, NULL);
    tranTbl1[7] = xAnimTableNewTransition(animTable, STANDARD_STATES[0], "BbashStart01",        BubbleBashCheck,    BubbleBashCB, 0, 0x00000000, 0.0f, 0.0f, 0x0A, 0, 0.00f, NULL);

    for (int i = 1; STANDARD_STATES[i] != NULL; i++)
    {
        for (U32 a = 0; a < 8; a++)
        {
            if
            (
                (strcmp(STANDARD_STATES[i], tranTbl1[a]->Dest->Name) != 0) &&
                ((i != 5 || ((S32)a != 7)))
            )
            {
                xAnimTableAddTransition(animTable, tranTbl1[a], STANDARD_STATES[i]);
            }
        }
    }

    xAnimTableAddTransition(animTable, tranTbl1[4], "LandRun01");
    xAnimTableAddTransition(animTable, tranTbl1[5], "LandRun01");
    xAnimTableAddTransition(animTable, tranTbl1[6], "LandRun01");
    xAnimTableAddTransition(animTable, tranTbl1[7], "LandRun01");

    xAnimTableNewTransition(animTable, "LandRun01", "Walk01",                   WalkCheck,      NULL, 0x10,0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "LandRun01", "Run01",                RunStoicCheck,      NULL, 0x10,0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "LandRun01", "Run02",              RunVictoryCheck,      NULL, 0x10,0x00000000, 0.0, 0.0, 3, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "LandRun01", "Run03",               RunScaredCheck,      NULL, 0x10,0x00000000, 0.0, 0.0, 2, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "LandRun01", "RunOutOfWorld01", RunOutOfWorldCheck,      NULL, 0x10,0x00200100, 0.0, 0.0, 3, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "LandRun01", "SlipRun01",             RunSlipCheck, SlipRunCB, 0x10,0x00000000, 0.0, 0.0, 2, 0, 0.10, NULL);

    xAnimTransition* pTran = xAnimTableNewTransition(animTable, "Idle01", "JumpStart01", JumpCheck, JumpCB, 0, 0, 0.0, 0.0, 10, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "Walk01");
    xAnimTableAddTransition(animTable, pTran, "Run01");
    xAnimTableAddTransition(animTable, pTran, "Run02");
    xAnimTableAddTransition(animTable, pTran, "Run03");
    xAnimTableAddTransition(animTable, pTran, "RunOutOfWorld01");
    xAnimTableAddTransition(animTable, pTran, "SlipRun01");
    xAnimTableAddTransition(animTable, pTran, "SlipIdle01");
    xAnimTableAddTransition(animTable, pTran, "Land01");
    xAnimTableAddTransition(animTable, pTran, "LandHigh01");
    xAnimTableAddTransition(animTable, pTran, "LandRun01");
    xAnimTableAddTransition(animTable, pTran, "Idle02");
    xAnimTableAddTransition(animTable, pTran, "Idle03");
    xAnimTableAddTransition(animTable, pTran, "Idle04");
    xAnimTableAddTransition(animTable, pTran, "Idle05");
    xAnimTableAddTransition(animTable, pTran, "Idle06");
    xAnimTableAddTransition(animTable, pTran, "Idle07");
    xAnimTableAddTransition(animTable, pTran, "Idle08");
    xAnimTableAddTransition(animTable, pTran, "Idle09");
    xAnimTableAddTransition(animTable, pTran, "Idle10");
    xAnimTableAddTransition(animTable, pTran, "Idle11");
    xAnimTableAddTransition(animTable, pTran, "Idle12");
    xAnimTableAddTransition(animTable, pTran, "Idle13");
    xAnimTableAddTransition(animTable, pTran, "Inactive01");
    xAnimTableAddTransition(animTable, pTran, "Inactive02");
    xAnimTableAddTransition(animTable, pTran, "Inactive03");
    xAnimTableAddTransition(animTable, pTran, "Inactive04");
    xAnimTableAddTransition(animTable, pTran, "Inactive05");
    xAnimTableAddTransition(animTable, pTran, "Inactive06");
    xAnimTableAddTransition(animTable, pTran, "Inactive07");
    xAnimTableAddTransition(animTable, pTran, "Inactive08");
    xAnimTableAddTransition(animTable, pTran, "Inactive09");
    xAnimTableAddTransition(animTable, pTran, "Inactive10");
    xAnimTableAddTransition(animTable, pTran, "Goo01");

    pTran = xAnimTableNewTransition(animTable, "Idle01", "BounceStart01", BounceCheck, BounceCB, 0, 0, 0.0, 0.0, 0x0f, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "SlipIdle01");
    xAnimTableAddTransition(animTable, pTran, "Walk01");
    xAnimTableAddTransition(animTable, pTran, "Run01");
    xAnimTableAddTransition(animTable, pTran, "Run02");
    xAnimTableAddTransition(animTable, pTran, "Run03");
    xAnimTableAddTransition(animTable, pTran, "RunOutOfWorld01");
    xAnimTableAddTransition(animTable, pTran, "SlipRun01");
    xAnimTableAddTransition(animTable, pTran, "Land01");
    xAnimTableAddTransition(animTable, pTran, "LandHigh01");
    xAnimTableAddTransition(animTable, pTran, "LandRun01");
    xAnimTableAddTransition(animTable, pTran, "JumpStart01");
    xAnimTableAddTransition(animTable, pTran, "JumpApex01");
    xAnimTableAddTransition(animTable, pTran, "DJumpStart01");
    xAnimTableAddTransition(animTable, pTran, "DJumpLift01");
    xAnimTableAddTransition(animTable, pTran, "Fall01");
    xAnimTableAddTransition(animTable, pTran, "BbounceAttack01");
    xAnimTableAddTransition(animTable, pTran, "BbounceStart01");
    xAnimTableAddTransition(animTable, pTran, "BbashMiss01");

    xAnimTransition* tranTbl2[10];
    tranTbl2[0]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Hit01",            Hit01Check,    Hit01CB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    tranTbl2[1]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Hit02",            Hit02Check,    Hit02CB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    tranTbl2[2]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Hit03",            Hit03Check,    Hit03CB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    tranTbl2[3]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Hit04",            Hit04Check,    Hit04CB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    tranTbl2[4]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Hit05",            Hit05Check,    Hit05CB, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    tranTbl2[5]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Defeated01",  Defeated01Check, DefeatedCB, 0, 5, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
    tranTbl2[6]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Defeated02",  Defeated02Check, DefeatedCB, 0, 5, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
    tranTbl2[7]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Defeated03",  Defeated03Check, DefeatedCB, 0, 5, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
    tranTbl2[8]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Defeated04",  Defeated04Check, DefeatedCB, 0, 5, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
    tranTbl2[9]  = xAnimTableNewTransition(animTable, HIT_STATES[0], "Defeated05",  Defeated05Check, DefeatedCB, 0, 5, 0.0, 0.0, 0x1e, 0, 0.15, NULL);
    tranTbl2[10] = xAnimTableNewTransition(animTable, HIT_STATES[0], "GooDefeated",        GooCheck, GooDeathCB, 0, 0, 0.0, 0.0, 0x1e, 0, 0.15, NULL);

    for (U32 i = 1; HIT_STATES[i] != NULL; i++)
    {
        for (U32 a = 0; a < 11; a++)
        {
            xAnimTableAddTransition(animTable, tranTbl2[a], HIT_STATES[i]);
        }
    }

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 Walk01 Run01 Run02 Run03 RunOutOfWorld01 Land01 LandHigh01 LandRun01 SlipIdle01 SlipRun01", "TongueStart01", SlideTrackCheck, SlideTrackCB, 0, 0, 0.0, 0.0, 9, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "TongueSlide01", "Idle01",       NoslideTrackCheck,NoslideTrackCB, 0x00, 0, 0.0, 0.0, 9, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueStart01", "TongueSlide01",             NULL,          NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.00, NULL);

    xAnimTableNewTransition(animTable, "TongueSlide01 TongueLand01 TongueStart01","TongueFall01", TrackFallCheck, TrackFallCB, 0, 0, 0.0, 0.0, 9, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "TongueDJumpApex01",          "TongueFall01",                     NULL,     NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.20, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01",               "TongueFall01",                     NULL,     NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "TongueLand01",               "TongueSlide01",                    NULL,     NULL, 0x10, 0, 0.0, 0.0, 0x00, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "TongueSlide01 TongueLand01", "TongueJump01",                JumpCheck,   JumpCB, 0x00, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueFall01",  "TongueJump01",    TrackPrefallJumpCheck,   JumpCB, 0x00, 0, 0.0, 0.0, 0x0F, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "TongueFall01", "TongueDJumpApex01", DblJumpCheck, DblJumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.2, NULL);

    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "TongueLand01",           LandTrackCheck,    SlideTrackCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "Land01",               LandNoTrackCheck,  NoslideTrackCB, 0, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "LandRun01",        LandNoTrackFastCheck,            NULL, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "Walk01",           LandNoTrackWalkCheck,            NULL, 0, 0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "SlipRun01",     LandNoTrackSlipRunCheck,       SlipRunCB, 0, 0, 0.0, 0.0, 4, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "TongueJump01 TongueJumpXtra01 TongueDJumpApex01 TongueFall01", "SlipIdle01",   LandNoTrackSlipIdleCheck,            NULL, 0, 0, 0.0, 0.0, 4, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable,"TongueJump01", "TongueJumpXtra01", DblJumpCheck, TongueDblJumpCB, 0x20, 0, 0.0, 0.0, 0x0A, 0, 0.00, NULL);

    xAnimTableNewTransition(animTable, "TongueJumpXtra01","TongueDJumpApex01", NULL, TongueDblSpinCB, 0x10, 0, 0.0, 0.0, 1, 0, 0.0, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 Walk01 Run01 Run02 Run03 RunOutOfWorld01 SlipRun01 SlipIdle01 Land01 LandRun01","BoulderRoll01",BoulderRollCheck,BoulderRollWindupCB, 0,0, 0.0,0.0, 0x0A, 0,0.5, NULL);

    xAnimTableNewTransition(animTable, "BoulderRoll01", "BoulderRoll02",                 NULL, BoulderRollCB, 0x10, 0x00000000, 0.0, 0.0, 0x00, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "SlipIdle01",           IdleSlipCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Idle01",                   IdleCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Walk01",                   WalkCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Run01",                RunStoicCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Run02",              RunVictoryCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Run03",               RunScaredCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "RunOutOfWorld01", RunOutOfWorldCheck,          NULL, 0x00, 0x00200100, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "SlipRun01",             RunSlipCheck,     SlipRunCB, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);
    xAnimTableNewTransition(animTable, "BoulderRoll02", "Fall01",                   FallCheck,          NULL, 0x00, 0x00000000, 0.0, 0.0, 0x0A, 0, 0.25, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01",  "JumpApex01",            NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01",   "Fall01",                NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "BounceStart01","BounceLift01",          NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceLift01", "BounceApex01", JumpApexCheck, NULL, 0x00, 0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BounceApex01", "Fall01",                NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "DJumpStart01", "DJumpLift01",           NULL, NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "JumpLift01",   "JumpApex01",   JumpApexCheck, NULL, 0x00, 0, 0.0, 0.0, 1, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 JumpLift01 JumpApex01 BounceStart01 BounceLift01 BounceApex01 Fall01","DJumpStart01",DblJumpCheck,DblJumpCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpStart01 JumpLift01 JumpApex01 Fall01 WallFlight01 WallFlight02 WallLand01 WallFall01 DJumpStart01 DJumpLift01 DJumpApex01","WallLaunch01",WallJumpLaunchCheck,WallJumpLaunchCallback, 0,0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "WallLaunch01","WallFlight01", NULL, WallJumpCallback, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);
    xAnimTableNewTransition(animTable, "WallFlight01","WallFlight02", NULL,             NULL, 0x10, 0, 0.0, 0.0, 0, 0, 0.0, NULL);

    xAnimTableNewTransition(animTable, "WallFlight01 WallFlight02", "WallLand01",   WallJumpFlightLandCheck, WallJumpFlightLandCallback, 0x00, 0, 0.0, 0.0, 0,0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "WallLand01",                "WallFlight02", WallJumpLandFlightCheck, WallJumpLandFlightCallback, 0x00, 0, 0.0, 0.0, 0,0, 0.08, NULL);
    xAnimTableNewTransition(animTable, "WallLand01",                "WallFall01",                      NULL,                       NULL, 0x10, 0, 0.0, 0.0, 0,0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpApex01 Fall01 DJumpLift01 WallFlight01 WallFlight02 WallLand01 WallFall01 BbashMiss01", "Land01",             LandCheck,        LandCallback, 0,0, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 Fall01 DJumpLift01 WallFlight01 WallFlight02 WallLand01 WallFall01 BbashMiss01", "LandHigh01",     LandHighCheck,        LandCallback, 0,0, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 Fall01 DJumpLift01 WallFlight01 WallFlight02 WallLand01 WallFall01 BbashMiss01", "LandRun01",       LandRunCheck,        LandCallback, 0,0, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 Fall01 DJumpLift01 WallFlight01 WallFlight02 WallLand01 WallFall01 BbashMiss01", "SlipRun01",   LandSlipRunCheck, LandSlipRunCallback, 0,0, 0.0, 0.0, 4, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "JumpApex01 Fall01 DJumpLift01 WallFlight01 WallFlight02 WallLand01 WallFall01 BbashMiss01", "SlipIdle01", LandSlipIdleCheck,        LandCallback, 0,0, 0.0, 0.0, 4, 0, 0.15, NULL);

    pTran = xAnimTableNewTransition(animTable, "Idle01", "Bspin01", BubbleSpinCheck, BubbleSpinCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.05, NULL);

    xAnimTableAddTransition(animTable, pTran, "Idle02");
    xAnimTableAddTransition(animTable, pTran, "Idle03");
    xAnimTableAddTransition(animTable, pTran, "Idle04");
    xAnimTableAddTransition(animTable, pTran, "Idle05");
    xAnimTableAddTransition(animTable, pTran, "Idle06");
    xAnimTableAddTransition(animTable, pTran, "Idle07");
    xAnimTableAddTransition(animTable, pTran, "Idle08");
    xAnimTableAddTransition(animTable, pTran, "Idle09");
    xAnimTableAddTransition(animTable, pTran, "Idle10");
    xAnimTableAddTransition(animTable, pTran, "Idle11");
    xAnimTableAddTransition(animTable, pTran, "Idle12");
    xAnimTableAddTransition(animTable, pTran, "Idle13");
    xAnimTableAddTransition(animTable, pTran, "SlipIdle01");
    xAnimTableAddTransition(animTable, pTran, "Inactive01");
    xAnimTableAddTransition(animTable, pTran, "Inactive02");
    xAnimTableAddTransition(animTable, pTran, "Inactive03");
    xAnimTableAddTransition(animTable, pTran, "Inactive04");
    xAnimTableAddTransition(animTable, pTran, "Inactive05");
    xAnimTableAddTransition(animTable, pTran, "Inactive06");
    xAnimTableAddTransition(animTable, pTran, "Inactive07");
    xAnimTableAddTransition(animTable, pTran, "Inactive09");
    xAnimTableAddTransition(animTable, pTran, "Inactive10");
    xAnimTableAddTransition(animTable, pTran, "Walk01");
    xAnimTableAddTransition(animTable, pTran, "Run01");
    xAnimTableAddTransition(animTable, pTran, "Run02");
    xAnimTableAddTransition(animTable, pTran, "Run03");
    xAnimTableAddTransition(animTable, pTran, "SlipRun01");
    xAnimTableAddTransition(animTable, pTran, "Land01");
    xAnimTableAddTransition(animTable, pTran, "LandHigh01");
    xAnimTableAddTransition(animTable, pTran, "LandRun01");
    xAnimTableAddTransition(animTable, pTran, "JumpStart01");
    xAnimTableAddTransition(animTable, pTran, "JumpLift01");
    xAnimTableAddTransition(animTable, pTran, "JumpApex01");
    xAnimTableAddTransition(animTable, pTran, "BounceStart01");
    xAnimTableAddTransition(animTable, pTran, "BounceLift01");
    xAnimTableAddTransition(animTable, pTran, "BounceApex01");
    xAnimTableAddTransition(animTable, pTran, "DJumpStart01");
    xAnimTableAddTransition(animTable, pTran, "DJumpLift01");
    xAnimTableAddTransition(animTable, pTran, "Fall01");

    pTran = xAnimTableNewTransition(animTable,"JumpStart01","BbounceStart01", BubbleBounceCheck,BubbleBounceCB, 0,0, 0.0, 0.0, 0x0A, 0, 0.15, NULL);

    xAnimTableAddTransition(animTable, pTran, "JumpLift01");
    xAnimTableAddTransition(animTable, pTran, "JumpApex01");
    xAnimTableAddTransition(animTable, pTran, "BounceStart01");
    xAnimTableAddTransition(animTable, pTran, "BounceLift01");
    xAnimTableAddTransition(animTable, pTran, "BounceApex01");
    xAnimTableAddTransition(animTable, pTran, "DJumpStart01");
    xAnimTableAddTransition(animTable, pTran, "DJumpLift01");
    xAnimTableAddTransition(animTable, pTran, "Fall01");
    xAnimTableAddTransition(animTable, pTran, "BbashMiss01");

    xAnimTableNewTransition(animTable, "Bspin01",         "SlipIdle01",           IdleSlipCheck,          IdleCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Idle01",                   IdleCheck,          IdleCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Walk01",                   WalkCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Run01",                RunStoicCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Run03",               RunScaredCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Run02",              RunVictoryCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "RunOutOfWorld01", RunOutOfWorldCheck,            NULL, 0x10, 0x00200100, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "SlipRun01",             RunSlipCheck,       SlipRunCB, 0x10, 0x00000000, 0.0, 0.0, 4, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Bspin01",         "Fall01",                        NULL,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbashStart01",    "BbashAttack01",                 NULL,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "BbashStart01",    "BbashStrike01",     BBashStrikeCheck,   BBashStrikeCB, 0x00, 0x00000000, 0.0, 0.0, 2, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "BbashAttack01",   "BbashStrike01",     BBashStrikeCheck,   BBashStrikeCB, 0x00, 0x00000000, 0.0, 0.0, 2, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "BbashAttack01",   "BbashMiss01",       BBashToJumpCheck,            NULL, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "BbashStrike01",   "Fall01",                        NULL,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbashMiss01",     "Fall01",                        NULL,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStart01",  "BbounceAttack01",               NULL, BBounceAttackCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "BbounceAttack01", "BbounceStrike01", BBounceStrikeCheck, BBounceStrikeCB, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.00, NULL);
    xAnimTableNewTransition(animTable, "BbounceAttack01", "JumpLift01",      BBounceToJumpCheck, BBounceToJumpCB, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.10, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "SlipIdle01",           IdleSlipCheck,          IdleCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "Idle01",                   IdleCheck,          IdleCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "Walk01",                   WalkCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "Run01",                RunStoicCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "Run03",               RunScaredCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "Run02",              RunVictoryCheck,            NULL, 0x10, 0x00000000, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "RunOutOfWorld01", RunOutOfWorldCheck,            NULL, 0x10, 0x00200100, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbounceStrike01", "SlipRun01",             RunSlipCheck,       SlipRunCB, 0x10, 0x00000000, 0.0, 0.0, 4, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "JumpStart01 JumpLift01 JumpApex01 Fall01 DJumpStart01 DJumpLift01", "LedgeGrab01", LedgeGrabCheck, LedgeGrabCB, 0, 0, 0.0, 0.0, 0xb, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "LedgeGrab01", "Idle01", NULL, LedgeFinishCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive09 Inactive10 Walk01 Land01 LandRun01 Run01 Run02 Run03 SlipRun01", "BbowlStart01", BbowlCheck, BbowlCB, 0, 0, 0.0, 0.0, 0x0A, 0, 0.1, NULL);

    xAnimTableNewTransition(animTable, "BbowlStart01",   "BbowlWindup01",                             NULL,           NULL, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlWindup01",  "BbowlToss01",                BbowlWindupEndCheck,           NULL, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlToss01",    "BbowlRecover01",                            NULL, BbowlTossEndCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "Walk01",                   BbowlRecoverWalkCheck,           NULL, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "Run01",                     BbowlRecoverRunCheck,           NULL, 0x00, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "Run03",               BbowlRecoverRunScaredCheck,           NULL, 0x00, 0x00000000, 0.0, 0.0, 2, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "Run02",              BbowlRecoverRunVictoryCheck,           NULL, 0x00, 0x00000000, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "RunOutOfWorld01", BbowlRecoverRunOutOfWorldCheck,           NULL, 0x00, 0x00200100, 0.0, 0.0, 3, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "SlipRun01",             BbowlRecoverRunSlipCheck,      SlipRunCB, 0x00, 0x00000000, 0.0, 0.0, 4, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "BbowlRecover01", "Idle01",                                    NULL,         IdleCB, 0x10, 0x00000000, 0.0, 0.0, 1, 0, 0.15, NULL);

    bungee_state::insert_animations(*animTable);
    cruise_bubble::insert_player_animations(*animTable);

    xAnimTableNewTransition(animTable, "Hit01", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Hit02", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Hit03", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Hit04", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Hit05", "Idle01", NULL, IdleCB, 0x10, 0, 0.0, 0.0, 0, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 ", "Talk01", TalkCheck, NULL, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 ", "Talk02", TalkCheck, NULL, 0, 1, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 ", "Talk03", TalkCheck, NULL, 0, 2, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Idle01 Idle02 Idle03 Idle04 Idle05 Idle06 Idle07 Idle08 Idle09 Idle10 Idle11 Idle12 Idle13 SlipIdle01 Inactive01 Inactive02 Inactive03 Inactive04 Inactive05 Inactive06 Inactive07 Inactive08 Inactive09 Inactive10 ", "Talk04", TalkCheck, NULL, 0, 3, 0.0, 0.0, 0x14, 0, 0.15, NULL);

    xAnimTableNewTransition(animTable, "Talk01", "Idle01", TalkDoneCheck, NULL, 0, 0, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk02", "Idle01", TalkDoneCheck, NULL, 0, 1, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk03", "Idle01", TalkDoneCheck, NULL, 0, 2, 0.0, 0.0, 0x14, 0, 0.15, NULL);
    xAnimTableNewTransition(animTable, "Talk04", "Idle01", TalkDoneCheck, NULL, 0, 3, 0.0, 0.0, 0x14, 0, 0.15, NULL);

    return animTable;
}

void dont_move(xEnt* ent, xScene* scene, F32 dt, xEntFrame* frame)
{
    PlayerAbsControl(ent, 0.0, 0.0, dt);
}

S32 zEntPlayerDyingInGoo()
{
    return in_goo != 0;
}

// TODO: Move these to their headers

WEAK U32 xSndIsPlaying(U32 assetID)
{
    return (U8)iSndIsPlaying(assetID);
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

WEAK S32 zNPCCommon::SetCarryState(en_NPC_CARRY_STATE)
{
    return 0;
}

WEAK S32 zNPCCommon::CanRope()
{
    return flg_vuln & 0x1000000;
}

WEAK xVec3* zNPCCommon::Pos()
{
    return (xVec3*)&model->Mat->pos;
}