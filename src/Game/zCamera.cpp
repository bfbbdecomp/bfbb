#include "zCamera.h"

#include <types.h>

#include "zCameraTweak.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMusic.h"
#include "../Core/p2/iMath.h"
#include "../Core/x/xMathInlines.h"
#include "../Core/x/xVec3Inlines.h"
#include "../Core/x/xScrFx.h"
#include "../Core/x/xstransvc.h"


// extern int8 buffer[16];
// extern int8 buffer[16];
// extern basic_rect screen_bounds;
// extern basic_rect default_adjust;
extern float32 zcam_pad_pyaw_scale;
extern float32 zcam_pad_pitch_scale;
extern float32 zcam_near_d;
extern float32 zcam_near_h;
extern float32 zcam_near_pitch;
extern float32 zcam_far_d;
extern float32 zcam_far_h;
extern float32 zcam_far_pitch;
extern float32 zcam_wall_d;
extern float32 zcam_wall_h;
extern float32 zcam_wall_pitch;
extern float32 zcam_above_d;
extern float32 zcam_above_h;
extern float32 zcam_above_pitch;
extern float32 zcam_below_d;
extern float32 zcam_below_h;
extern float32 zcam_below_pitch;
extern float32 zcam_highbounce_d;
extern float32 zcam_highbounce_h;
extern float32 zcam_highbounce_pitch;
extern float32 zcam_overrot_min;
extern float32 zcam_overrot_mid;
extern float32 zcam_overrot_max;
extern float32 zcam_overrot_rate;
extern float32 zcam_overrot_tstart;
extern float32 zcam_overrot_tend;
extern float32 zcam_overrot_velmin;
extern float32 zcam_overrot_velmax;
extern float32 zcam_overrot_tmanual;
extern float32 zcam_overrot_tmr;
extern xCamera zcam_backupcam;
extern xCamera zcam_backupconvers;
extern int32 zcam_near;
extern int32 zcam_mode;
extern int32 zcam_bbounce;
extern int32 zcam_lbbounce;
extern int32 zcam_convers;
extern int32 zcam_lconvers;
extern int32 zcam_longbounce;
extern int32 zcam_highbounce;
extern int32 zcam_cutscene;
extern int32 zcam_reward;
extern xVec3* zcam_playervel;
extern float32 zcam_mintgtheight;
extern int32 zcam_fly;
extern int32 zcam_flypaused;
extern void* zcam_flydata;
extern uint32 zcam_flysize;
extern float32 zcam_flytime;
extern uint32 zcam_flyasset_current;
extern xCamAsset* zcam_dest;
extern xQuat zcam_quat;
extern float32 zcam_tmr;
extern float32 zcam_ttm;
extern float32 zcam_fovcurr;
extern float32 zcam_fovdest;
extern uint32 stop_track;
extern uint8 input_enabled;
extern uint8 lassocam_enabled;
extern float32 lassocam_factor;
extern WallJumpViewState wall_jump_enabled;
extern xVec3 wall_jump_view;
extern float32 dMultiplier;
extern float32 dOffset;
extern float32 hMultiplier;
extern float32 hOffset;
extern float32 rewardMove;
extern float32 rewardMoveSpeed;
extern float32 rewardZoomSpeed;
extern float32 rewardZoomAmount;
extern float32 rewardTiltTime;
extern float32 rewardTiltAmount;
extern zGlobals globals;
extern xVec3 g_O3;
extern float32 gSkipTimeFlythrough;

extern float32 zCamera_f_75_0; // 75.0
extern float32 zCamera_f_0_0; // 0.0
extern float32 zCamera_f_n1_0_e38; // -1e38 ~ neg infinity
extern float32 zCamera_f_1_0; // 1.0
extern float32 zCamera_f_0_5; // 0.5
extern float32 zCamera_f_2_0; // 2.0
extern float32 zCamera_f_1_5; // 1.5
extern float32 zCamera_f_30_0; // 30.0
extern float32 zCamera_f_114_592; // 114.592
extern float32 zCamera_f_0_033; // 0.0333333
extern float32 zCamera_f_0_1; // 0.1
extern float32 zCamera_f_3_5; // 3.5
extern float32 zCamera_f_2_4; // 2.4
extern float32 zCamera_f_0_523; // 0.5235988
extern float32 zCamera_f_0_698; // 0.6981317
extern float32 zCamera_f_3_141; // 3.141593 ~ pi
extern float32 zCamera_f_20_0; // 20.0
extern float32 zCamera_f_180_0; // 180.0

// func_8004FBFC
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraReset__FP7xCamera")
#else
void zCameraReset(xCamera* cam)
{
    // classic multiple float assign non match
    // float assigns should f0 everytime instead of f1, f2, ...
    zcam_mode = 0;
    zcam_bbounce = 0;
    zcam_lbbounce = 0;
    zcam_lconvers = 0;
    zcam_longbounce = 0;
    zcam_highbounce = 0;
    zcam_convers = 0;
    zcam_fly = 0;
    zcam_flypaused = 0;
    zcam_cutscene = 0;
    zcam_reward = 0;
    zcam_fovcurr = zCamera_f_75_0;
    zcam_overrot_tmr = zCamera_f_0_0;

    wall_jump_enabled = WJVS_DISABLED;
    lassocam_enabled = false;
    stop_track = 0;
    zcam_mintgtheight = zCamera_f_n1_0_e38;

    xCameraSetFOV(cam, zCamera_f_75_0);
    zCameraTweakGlobal_Update(zCamera_f_0_0);
    xCameraReset(cam, GetCurrentD(), GetCurrentH(), GetCurrentPitch());

    input_enabled = true;
    dMultiplier = zCamera_f_1_0;
    dOffset = zCamera_f_0_0;
    hMultiplier = zCamera_f_1_0;
    hOffset = zCamera_f_0_0;
}
#endif

float32 GetCurrentPitch()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_pitch;
    }

    return zCameraTweakGlobal_GetPitch();
}

float32 GetCurrentH()
{
    return dMultiplier * _GetCurrentH() + dOffset;
}

float32 _GetCurrentH()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_h;
    }

    if (wall_jump_enabled == WJVS_ENABLED)
    {
        return zcam_wall_h;
    }

    return zCameraTweakGlobal_GetH();
}

float32 GetCurrentD()
{
    return dMultiplier * _GetCurrentD() + dOffset;
}

float32 _GetCurrentD()
{
    if (zcam_highbounce != 0)
    {
        return zcam_highbounce_d;
    }

    if (wall_jump_enabled == WJVS_ENABLED)
    {
        return zcam_wall_d;
    }

    return zCameraTweakGlobal_GetD();
}

float32 EaseInOut(float32 param)
{
    // using shorter symbols the return expression below reads:
    // p (p (b - cp) + a) <=> ap + bp^2 - cp^3
    // to which wolframalpha associates the geometric figure 'line'
    return param * (param * (zCamera_f_2_0 - zCamera_f_1_5 * param) + zCamera_f_0_5);
}

// func_8004FE2C
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraConversUpdate__FP7xCameraf")
#else
void zCameraConversUpdate(xCamera* cam, float32 dt)
{
    if (zcam_dest == NULL)
    {
        return;
    }

    // zcam_tmr should use f2 instead of f1
    if (zcam_tmr <= zCamera_f_0_0)
    {
        zcam_tmr = zCamera_f_0_0;
        return;
    }

    // zCamera_f_1_0 should use f1 instead of f2
    if ((dt / zcam_tmr) > zCamera_f_1_0)
    {
        cam->mat.right = zcam_dest->right;
        cam->mat.up = zcam_dest->up;
        cam->mat.at = zcam_dest->at;
        cam->mat.pos = zcam_dest->pos;

        zcam_fovcurr = zcam_fovdest;
    }
    else
    {
        float32 ease1 = EaseInOut(zCamera_f_1_0 - (zcam_tmr / zcam_ttm));
        float32 ease2 = EaseInOut(zCamera_f_1_0 - (zcam_tmr - dt) / zcam_ttm);
        float32 t = (ease2 - ease1) / (zCamera_f_1_0 - ease1);

        xQuat tOld;
        xQuat tNew;
        xQuatFromMat(&tOld, &cam->mat);
        xQuatSlerp(&tNew, &tOld, &zcam_quat, t);
        xQuatToMat(&tNew, &cam->mat);
        xVec3Lerp(&cam->mat.pos, &cam->mat.pos, &zcam_dest->pos, t);
        zcam_fovcurr = zcam_fovcurr * (zCamera_f_1_0 - t) + (zcam_fovdest * t);
    }

    zcam_tmr = zcam_tmr - dt;
}
#endif

float32 TranSpeed(zFlyKey keys[])
{
    return zCamera_f_30_0 * xVec3Dist((xVec3*)&keys[0].matrix[9], (xVec3*)&keys[1].matrix[9]);
}

float32 MatrixSpeed(zFlyKey keys[])
{
    float32 dot1 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[0], (xVec3*)&keys[1].matrix[0]));
    float32 dot2 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[3], (xVec3*)&keys[1].matrix[3]));

    // dot1 = max(dot1, dot2)
    if (dot2 > dot1)
    {
        dot1 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[3], (xVec3*)&keys[1].matrix[3]));
    }

    dot2 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[6], (xVec3*)&keys[1].matrix[6]));

    // dot1 = max(dot1, dot2)
    if (dot2 > dot1)
    {
        dot1 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[6], (xVec3*)&keys[1].matrix[6]));
    }

    // m = max(1.0, dot1)
    float32 m = zCamera_f_1_0 < dot1 ? zCamera_f_1_0 : dot1;
    return xacos(m) * zCamera_f_114_592 * zCamera_f_30_0;
}

// func_800500B0
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyUpdate__FP7xCameraf")

zFlyKey& zFlyKey::operator=(const zFlyKey& other)
{
    this->frame = other.frame;
    for (int i = 0; i < 12; i++)
    {
        *(uint32*)&this->matrix[i] = *(uint32*)&other.matrix[i];
    }
    for (int i = 0; i < 2; i++)
    {
        *(uint32*)&this->aperture[i] = *(uint32*)&other.aperture[i];
    }
    this->focal = other.focal;

    return *this;
}

// func_800504C0
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyStart__FUi")
#else
void zCameraFlyStart(uint32 assetID)
{
    st_PKR_ASSET_TOCINFO info;
    if (xSTGetAssetInfo(assetID, &info) == 0)
    {
        return;
    }

    // weird register use
    zcam_fly = 1;
    zcam_flypaused = 0;
    zcam_flydata = info.mempos;
    zcam_flysize = info.size;
    // until here
    zcam_flytime = zCamera_f_0_033;
    zcam_flyasset_current = assetID;

    zEntPlayerControlOff(CONTROL_OWNER_FLY_CAM);
    xScrFxLetterbox(1);

    zcam_backupcam = globals.camera;

    if (zCamera_FlyOnly() == 0)
    {
        zMusicSetVolume(zCamera_f_0_5, zCamera_f_0_1);
    }
}
#endif

// func_80050560
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "__as__7xCameraFRC7xCamera")

// func_80050904
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFlyRestoreBackup__FP7xCamera")

// func_80050BB4
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraRewardUpdate__FP7xCameraf")

// func_80050E5C
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff")
#else
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal,
                             float32& pitch_goal, float32& lktm, float32 dt)
{
    if (zcam_bbounce != 0)
    {
        if (zcam_highbounce != 0)
        {
            dgoal = GetCurrentD();
            hgoal = GetCurrentH();
            pitch_goal = GetCurrentPitch();
            return;
        }

        dgoal = zcam_near != 0 ? zCamera_f_3_5 : GetCurrentD();
        hgoal = zcam_near != 0 ? zCamera_f_2_4 : GetCurrentH();

        float32 newPitchGoal;
        if (zcam_longbounce != 0)
        {
            float32 len = xsqrt(zcam_playervel->x * zcam_playervel->x +
                                zcam_playervel->y * zcam_playervel->y +
                                zcam_playervel->z * zcam_playervel->z);

            bool lenValid = false;
            if (zcam_playervel != NULL)
            {
                if (len != zCamera_f_0_0)
                {
                    lenValid = true;
                }
            }

            if (lenValid)
            {
                newPitchGoal =
                    (cam->mat.at.x * zcam_playervel->x + cam->mat.at.y * zcam_playervel->y +
                     cam->mat.at.z * zcam_playervel->z) /
                    len;
                newPitchGoal = zCamera_f_0_0 < newPitchGoal ? zCamera_f_0_0 : newPitchGoal;
                newPitchGoal = -newPitchGoal;
            }
            else
            {
                newPitchGoal = zCamera_f_0_0;
            }

            if (zcam_near != 0)
            {
                newPitchGoal = zCamera_f_3_141 * (zCamera_f_20_0 * newPitchGoal + zCamera_f_20_0) /
                               zCamera_f_180_0;
            }
            else
            {
                newPitchGoal = zCamera_f_0_523;
            }

            pitch_goal = newPitchGoal;
        }
        else
        {
            if (zcam_near != 0)
            {
                newPitchGoal = zCamera_f_0_698;
            }
            else
            {
                newPitchGoal = zCamera_f_0_523;
            }

            pitch_goal = newPitchGoal;
        }
        return;
    }

    float32 d = GetCurrentD();
    float32 h = GetCurrentH();
    float32 p = GetCurrentPitch();

    if (lassocam_enabled && stop_track == 0)
    {
        dgoal = lassocam_factor * (d - zcam_near_d) + zcam_near_d;
        hgoal = lassocam_factor * (h - zcam_near_h) + zcam_near_h;
        pitch_goal = lassocam_factor * (p - zcam_near_pitch) + zcam_near_pitch;
        return;
    }

    if (pitch_s > zCamera_f_0_0)
    {
        dgoal = pitch_s * (zcam_below_d - d) + d;
        hgoal = pitch_s * (zcam_below_h - h) + h;
        pitch_goal = pitch_s * (pitch_s * (pitch_s * (zcam_below_pitch - p))) + p;
    }
    else
    {
        dgoal = -pitch_s * (zcam_above_d - d) + d;
        hgoal = -pitch_s * (zcam_above_h - h) + h;
        pitch_goal = -pitch_s * (zcam_above_pitch - p) + p;
    }

    // f0 and f1 should be swapped from here
    if (lktm > zCamera_f_0_1)
    {
        lktm -= dt;
        if (lktm < zCamera_f_0_1)
        {
            lktm = zCamera_f_0_1;
        }
        return;
    }

    lktm = zCamera_f_0_1;
}
#endif

// func_8005115C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraUpdate__FP7xCameraf")

void zCameraSetBbounce(int32 bbouncing)
{
    zcam_bbounce = bbouncing;
}

// func_80052098
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetLongbounce__Fi")
#else
void zCameraSetLongbounce(int32 lbounce)
{
    if (zcam_highbounce != 0 || zcam_longbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }

    zcam_longbounce = lbounce;
    // li r0 happens too early
    zcam_highbounce = 0;
}
#endif

// func_800520C8
#if 1
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetHighbounce__Fi")
#else
void zCameraSetHighbounce(int32 lbounce)
{
    if (zcam_longbounce != 0 || zcam_highbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }

    zcam_highbounce = lbounce;
    // li r0 happens too early
    zcam_longbounce = 0;
}
#endif

void zCameraSetPlayerVel(xVec3* vel)
{
    zcam_playervel = vel;
}

void zCameraDisableTracking(camera_owner_enum owner)
{
    stop_track = stop_track | owner;
}

void zCameraEnableTracking(camera_owner_enum owner)
{
    stop_track = stop_track & ~owner;
}

// func_80052120
uint32 zCameraIsTrackingDisabled()
{
    return stop_track;
}

// func_80052128
void zCameraDisableInput()
{
    input_enabled = 0;
}

// func_80052134
void zCameraEnableInput()
{
    input_enabled = 1;
}

// func_80052140
void zCameraDisableLassoCam()
{
    lassocam_enabled = 0;
}

// func_8005214C
void zCameraEnableLassoCam()
{
    lassocam_enabled = 1;
}

// func_80052158
void zCameraSetLassoCamFactor(float32 new_factor)
{
    lassocam_factor = new_factor;
}

// func_80052160
float32 zCameraGetLassoCamFactor()
{
    return lassocam_factor;
}

// func_80052168
int32 zCameraGetConvers()
{
    return zcam_convers;
}

// func_80052170
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraSetConvers__Fi")

// func_8005224C
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraDoTrans__FP9xCamAssetf")

// func_80052344
void zCameraTranslate(xCamera* cam, float32 x, float32 y, float32 z)
{
    cam->mat.pos.x += x;
    cam->mat.pos.y += y;
    cam->mat.pos.z += z;
    cam->tran_accum.x += x;
    cam->tran_accum.y += y;
    cam->tran_accum.z += z;
}

// func_80052390
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCameraEnableWallJump__FP7xCameraRC5xVec3")

// func_80052438
void zCameraDisableWallJump(xCamera* cam)
{
    if (wall_jump_enabled != WJVS_DISABLED)
    {
        wall_jump_enabled = WJVS_DISABLING;
    }
}

// func_80052450
void zCameraSetReward(int32 reward)
{
    if (zCameraIsTrackingDisabled() != 0)
    {
        zcam_reward = 0;
        return;
    }
    zcam_reward = reward;
}

// func_80052494
void zCameraMinTargetHeightSet(float32 min_height)
{
    zcam_mintgtheight = min_height;
}

// func_8005249C
void zCameraMinTargetHeightClear()
{
    zcam_mintgtheight = zCamera_f_n1_0_e38;
}

// func_800524A8
#pragma GLOBAL_ASM("asm/Game/zCamera.s", "zCamera_FlyOnly__Fv")

// func_80052524
float32 xVec3Dist2(const xVec3* vecA, const xVec3* vecB)
{
    float dx = vecA->x - vecB->x;
    float dy = vecA->y - vecB->y;
    float dz = vecA->z - vecB->z;
    return dx * dx + dy * dy + dz * dz;
}
