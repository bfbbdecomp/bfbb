#include "zCamera.h"

#include <types.h>

#include "zCameraTweak.h"
#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMusic.h"
#include "iMath.h"
#include "xMathInlines.h"
#include "xVec3Inlines.h"
#include "xScrFx.h"
#include "xstransvc.h"

F32 zcam_overrot_tmr;
S32 zcam_near;
S32 zcam_mode;
S32 zcam_bbounce;
S32 zcam_lbbounce;
S32 zcam_convers;
S32 zcam_lconvers;
S32 zcam_longbounce;
S32 zcam_highbounce;
S32 zcam_cutscene;
S32 zcam_reward;
xVec3* zcam_playervel;
S32 zcam_fly;
S32 zcam_flypaused;
void* zcam_flydata;
U32 zcam_flysize;
F32 zcam_flytime;
U32 zcam_flyasset_current;
xCamAsset* zcam_dest;
F32 zcam_tmr;
F32 zcam_ttm;
F32 zcam_fovcurr;
F32 zcam_fovdest;

xCamera zcam_backupcam;
xCamera zcam_backupconvers;
xQuat zcam_quat;

F32 zcam_pad_pyaw_scale = 0.18124573f;
F32 zcam_pad_pitch_scale = 0.01923077f;
F32 zcam_near_d = 3.0f;
F32 zcam_near_h = 1.8f;
F32 zcam_near_pitch = 0.17453294f;
F32 zcam_far_d = 5.0f;
F32 zcam_far_h = 3.0f;
F32 zcam_far_pitch = 0.2617994f;
F32 zcam_wall_d = 7.5f;
F32 zcam_wall_h = 2.0f;
F32 zcam_wall_pitch = 0.31415927f;
F32 zcam_above_d = 0.2f;
F32 zcam_above_h = 2.2f;
F32 zcam_above_pitch = 1.2217306f;
F32 zcam_below_d = 0.6f;
F32 zcam_below_h = 0.2f;
F32 zcam_below_pitch = -1.2217306f;
F32 zcam_highbounce_d = 0.2f;
F32 zcam_highbounce_h = 5.0f;
F32 zcam_highbounce_pitch = 1.553343f;
F32 zcam_overrot_min = 0.43633232f;
F32 zcam_overrot_mid = 1.5707964f;
F32 zcam_overrot_max = 2.9670596f;
F32 zcam_overrot_rate = 0.1f;
F32 zcam_overrot_tstart = 1.5f;
F32 zcam_overrot_tend = 2.5f;
F32 zcam_overrot_velmin = 3.0f;
F32 zcam_overrot_velmax = 5.0f;
F32 zcam_overrot_tmanual = 1.5f;
F32 zcam_mintgtheight = -9.9999997E37f;

namespace
{
    U32 stop_track;
    U8 lassocam_enabled;
    F32 lassocam_factor;
    WallJumpViewState wall_jump_enabled;
    F32 dMultiplier;
    F32 dOffset;
    F32 hMultiplier;
    F32 hOffset;

    bool input_enabled = true;
    xVec3 wall_jump_view;
} // namespace

static F32 rewardMove = 1.0f;
static F32 rewardMoveSpeed = 1.1f;
static F32 rewardZoomSpeed = 6.0f;
static F32 rewardZoomAmount = 100.0f;
static F32 rewardTiltTime = 1.5f;
static F32 rewardTiltAmount = -0.22f;

extern zGlobals globals;
extern const xVec3 g_O3;
extern F32 gSkipTimeFlythrough;

namespace
{
    F32 GetCurrentPitch();
    F32 GetCurrentH();
    F32 GetCurrentD();
} // namespace

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
    zcam_fovcurr = 75.0f;
    zcam_overrot_tmr = 0.0f;

    wall_jump_enabled = WJVS_DISABLED;
    lassocam_enabled = false;
    stop_track = 0;
    zcam_mintgtheight = -1.0e38;

    xCameraSetFOV(cam, 75.0f);
    zCameraTweakGlobal_Update(0.0f);
    xCameraReset(cam, ::GetCurrentD(), ::GetCurrentH(), ::GetCurrentPitch());

    input_enabled = true;
    dMultiplier = 1.0f;
    dOffset = 0.0f;
    hMultiplier = 1.0f;
    hOffset = 0.0f;
}

namespace
{
    F32 _GetCurrentH();
    F32 _GetCurrentD();

    F32 GetCurrentPitch()
    {
        if (zcam_highbounce != 0)
        {
            return zcam_highbounce_pitch;
        }

        return zCameraTweakGlobal_GetPitch();
    }

    F32 GetCurrentH()
    {
        return dMultiplier * _GetCurrentH() + dOffset;
    }

    F32 _GetCurrentH()
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

    F32 GetCurrentD()
    {
        return dMultiplier * _GetCurrentD() + dOffset;
    }

    F32 _GetCurrentD()
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
} // namespace

static F32 EaseInOut(F32 param)
{
    // using shorter symbols the return expression below reads:
    // p (p (b - cp) + a) <=> ap + bp^2 - cp^3
    // to which wolframalpha associates the geometric figure 'line'
    return param * (param * (2.0f - 1.5f * param) + 0.5f);
}

static void zCameraConversUpdate(xCamera* cam, F32 dt)
{
    if (zcam_dest == NULL)
    {
        return;
    }

    if (zcam_tmr <= 0.0f)
    {
        zcam_tmr = 0.0f;
        return;
    }

    if ((dt / zcam_tmr) > 1.0f)
    {
        cam->mat.right = zcam_dest->right;
        cam->mat.up = zcam_dest->up;
        cam->mat.at = zcam_dest->at;
        cam->mat.pos = zcam_dest->pos;

        zcam_fovcurr = zcam_fovdest;
    }
    else
    {
        F32 ease1 = EaseInOut(1.0f - (zcam_tmr / zcam_ttm));
        F32 ease2 = EaseInOut(1.0f - (zcam_tmr - dt) / zcam_ttm);
        F32 t = (ease2 - ease1) / (1.0f - ease1);

        xQuat tOld;
        xQuat tNew;
        xQuatFromMat(&tOld, &cam->mat);
        xQuatSlerp(&tNew, &tOld, &zcam_quat, t);
        xQuatToMat(&tNew, &cam->mat);
        xVec3Lerp(&cam->mat.pos, &cam->mat.pos, &zcam_dest->pos, t);
        zcam_fovcurr = zcam_fovcurr * (1.0f - t) + (zcam_fovdest * t);
    }

    zcam_tmr = zcam_tmr - dt;
}

static F32 TranSpeed(zFlyKey keys[])
{
    return 30.0f * xVec3Dist((xVec3*)&keys[0].matrix[9], (xVec3*)&keys[1].matrix[9]);
}

static F32 MatrixSpeed(zFlyKey keys[])
{
    F32 dot1 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[0], (xVec3*)&keys[1].matrix[0]));
    F32 dot2 = iabs(xVec3Dot((xVec3*)&keys[0].matrix[3], (xVec3*)&keys[1].matrix[3]));

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
    F32 m = 1.0f < dot1 ? 1.0f : dot1;
    return xacos(m) * 114.59155f * 30.0f;
}

static S32 zCameraFlyUpdate(xCamera* cam, F32 dt)
{
    S32 i;
    S32 flyIdx;
    S32 numKeys;
    S32 flySize;
    F32 flyLerp;
    F32 flyFrame;
    zFlyKey keys[4];
    F32 matdiff1;
    F32 matdiff2;
    F32 matdiff3;
    xMat3x3 tmpMat;
    xQuat quats[2];
    xQuat qresult;

    if ((globals.pad0->pressed & 0x50000) && zcam_flytime > gSkipTimeFlythrough)
    {
        zcam_flytime = 0.033333335f * zcam_flysize;
    }

    flyFrame = 30.0f * zcam_flytime;
    numKeys = std::floorf(flyFrame);
    flyLerp = flyFrame - std::floorf(flyFrame);

    flySize = (S32)(zcam_flysize >> 6) - 1;
    if (!(numKeys < flySize))
    {
        return 0;
    }

    flyIdx = numKeys;
    if (numKeys - 1 >= 0)
    {
        flyIdx = numKeys - 1;
    }

    keys[0] = *((zFlyKey*)zcam_flydata + flyIdx);
    keys[1] = *((zFlyKey*)zcam_flydata + numKeys);
    keys[2] = *((zFlyKey*)zcam_flydata + (numKeys + 1));

    flyIdx = numKeys + 1;
    if (numKeys + 2 < flySize)
    {
        flyIdx = numKeys + 2;
    }

    keys[3] = *((zFlyKey*)zcam_flydata + flyIdx);

    // Reverses the byte order (endianness) of 64 4-byte blocks
    U8* framePtr = (U8*)&keys[0].frame;
    for (i = 64; i > 0; i--)
    {
        S8 tmp1 = *framePtr;
        S8 tmp2 = *(framePtr + 1);
        *framePtr = *(framePtr + 3);
        *(framePtr + 1) = *(framePtr + 2);
        *(framePtr + 2) = tmp2;
        *(framePtr + 3) = tmp1;

        framePtr += 4;
    }

    if (0 < numKeys)
    {
        matdiff1 = TranSpeed(&keys[0]);
        matdiff2 = TranSpeed(&keys[1]);
        matdiff3 = TranSpeed(&keys[2]);

        if (matdiff2 > 10.0f && matdiff2 > 5.0f * matdiff1 && matdiff2 > 5.0f * matdiff3)
        {
            flyLerp = 0.0f;
        }
        else
        {
            matdiff1 = MatrixSpeed(&keys[0]);
            matdiff2 = MatrixSpeed(&keys[1]);
            matdiff3 = MatrixSpeed(&keys[2]);

            if (matdiff2 > 45.0f && matdiff2 > matdiff1 * 5.0f && matdiff2 > matdiff3 * 5.0f)
            {
                flyLerp = 0.0f;
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        tmpMat.right.x = -keys[i + 1].matrix[0];
        tmpMat.right.y = -keys[i + 1].matrix[1];
        tmpMat.right.z = -keys[i + 1].matrix[2];

        tmpMat.up.x = keys[i + 1].matrix[3];
        tmpMat.up.y = keys[i + 1].matrix[4];
        tmpMat.up.z = keys[i + 1].matrix[5];

        tmpMat.at.x = -keys[i + 1].matrix[6];
        tmpMat.at.y = -keys[i + 1].matrix[7];
        tmpMat.at.z = -keys[i + 1].matrix[8];

        xQuatFromMat(&quats[i], &tmpMat);
    }

    xQuatSlerp(&qresult, &quats[0], &quats[1], flyLerp);
    xQuatToMat(&qresult, &cam->mat);
    xVec3Lerp(&cam->mat.pos, (xVec3*)&keys[1].matrix[9], (xVec3*)&keys[2].matrix[9], flyLerp);

    zcam_flytime += dt;

    return 1;
}

void zCameraFlyStart(U32 assetID)
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
    zcam_flytime = 0.033333335f;
    zcam_flyasset_current = assetID;

    zEntPlayerControlOff(CONTROL_OWNER_FLY_CAM);
    xScrFxLetterbox(1);

    zcam_backupcam = globals.camera;

    if (zCamera_FlyOnly() == 0)
    {
        zMusicSetVolume(0.5f, 0.1f);
    }
}

static void zCameraFlyRestoreBackup(xCamera* backup)
{
    globals.camera.mat = backup->mat;
    globals.camera.omat = backup->omat;
    globals.camera.mbasis = backup->mbasis;
    globals.camera.bound = backup->bound;
    globals.camera.focus = backup->focus;

    globals.camera.flags = backup->flags;
    globals.camera.tmr = backup->tmr;
    globals.camera.tm_acc = backup->tm_acc;
    globals.camera.tm_dec = backup->tm_dec;
    globals.camera.ltmr = backup->ltmr;
    globals.camera.ltm_acc = backup->ltm_acc;
    globals.camera.ltm_dec = backup->ltm_dec;
    globals.camera.dmin = backup->dmin;
    globals.camera.dmax = backup->dmax;
    globals.camera.dcur = backup->dcur;
    globals.camera.dgoal = backup->dgoal;
    globals.camera.hmin = backup->hmin;
    globals.camera.hmax = backup->hmax;
    globals.camera.hcur = backup->hcur;
    globals.camera.hgoal = backup->hgoal;
    globals.camera.pmin = backup->pmin;
    globals.camera.pmax = backup->pmax;
    globals.camera.pcur = backup->pcur;
    globals.camera.pgoal = backup->pgoal;
    globals.camera.depv = backup->depv;
    globals.camera.hepv = backup->hepv;
    globals.camera.pepv = backup->pepv;
    globals.camera.orn_epv = backup->orn_epv;
    globals.camera.yaw_epv = backup->yaw_epv;
    globals.camera.pitch_epv = backup->pitch_epv;
    globals.camera.roll_epv = backup->roll_epv;
    globals.camera.orn_cur = backup->orn_cur;
    globals.camera.orn_goal = backup->orn_goal;
    globals.camera.orn_diff = backup->orn_diff;
    globals.camera.yaw_cur = backup->yaw_cur;
    globals.camera.yaw_goal = backup->yaw_goal;
    globals.camera.pitch_cur = backup->pitch_cur;
    globals.camera.pitch_goal = backup->pitch_goal;
    globals.camera.roll_cur = backup->roll_cur;
    globals.camera.roll_goal = backup->roll_goal;
    globals.camera.dct = backup->dct;
    globals.camera.dcd = backup->dcd;
    globals.camera.dccv = backup->dccv;
    globals.camera.dcsv = backup->dcsv;
    globals.camera.hct = backup->hct;
    globals.camera.hcd = backup->hcd;
    globals.camera.hccv = backup->hccv;
    globals.camera.hcsv = backup->hcsv;
    globals.camera.pct = backup->pct;
    globals.camera.pcd = backup->pcd;
    globals.camera.pccv = backup->pccv;
    globals.camera.pcsv = backup->pcsv;
    globals.camera.orn_ct = backup->orn_ct;
    globals.camera.orn_cd = backup->orn_cd;
    globals.camera.orn_ccv = backup->orn_ccv;
    globals.camera.orn_csv = backup->orn_csv;
    globals.camera.yaw_ct = backup->yaw_ct;
    globals.camera.yaw_cd = backup->yaw_cd;
    globals.camera.yaw_ccv = backup->yaw_ccv;
    globals.camera.yaw_csv = backup->yaw_csv;
    globals.camera.pitch_ct = backup->pitch_ct;
    globals.camera.pitch_cd = backup->pitch_cd;
    globals.camera.pitch_ccv = backup->pitch_ccv;
    globals.camera.pitch_csv = backup->pitch_csv;
    globals.camera.roll_ct = backup->roll_ct;
    globals.camera.roll_cd = backup->roll_cd;
    globals.camera.roll_ccv = backup->roll_ccv;
    globals.camera.roll_csv = backup->roll_csv;
}

static S32 zCameraRewardUpdate(xCamera* cam, F32 dt)
{
    xCameraUpdate(cam, dt);

    xVec3 v = { 0.0f, 0.0f, 0.0f };

    xVec3Copy(&v, (xVec3*)&globals.player.ent.model->Mat->pos);
    v.y -= 0.7f;

    if (zcam_near)
    {
        if (globals.player.s->pcType == ePlayer_SB)
        {
            rewardMove = 1.3f;
            rewardMoveSpeed = 0.68f;
            rewardZoomSpeed = 7.1f;
            rewardZoomAmount = 108.0f;
            rewardTiltTime = 1.5f;
            rewardTiltAmount = -0.22f;
        }
        else if (globals.player.s->pcType == ePlayer_Patrick)
        {
            rewardMove = 1.6f;
            rewardMoveSpeed = 0.68f;
            rewardZoomSpeed = 7.1f;
            rewardZoomAmount = 108.0f;
            rewardTiltTime = 1.0f;
            rewardTiltAmount = -0.25f;
        }
        else if (globals.player.s->pcType == ePlayer_Sandy)
        {
            rewardMove = 1.3f;
            rewardMoveSpeed = 0.68f;
            rewardZoomSpeed = 7.1f;
            rewardZoomAmount = 108.0f;
            rewardTiltTime = 1.5f;
            rewardTiltAmount = -0.22f;
        }
    }
    else
    {
        if (globals.player.s->pcType == ePlayer_SB)
        {
            rewardMove = 1.5f;
            rewardMoveSpeed = 1.1f;
            rewardZoomSpeed = 5.9f;
            rewardZoomAmount = 100.0f;
            rewardTiltTime = 1.5f;
            rewardTiltAmount = -0.2f;
        }
        else if (globals.player.s->pcType == ePlayer_Patrick)
        {
            rewardMove = 1.5f;
            rewardMoveSpeed = 1.1f;
            rewardZoomSpeed = 5.9f;
            rewardZoomAmount = 100.0f;
            rewardTiltTime = 1.5f;
            rewardTiltAmount = -0.2f;
        }
        else if (globals.player.s->pcType == ePlayer_Sandy)
        {
            rewardMove = 1.5f;
            rewardMoveSpeed = 1.1f;
            rewardZoomSpeed = 5.9f;
            rewardZoomAmount = 100.0f;
            rewardTiltTime = 1.5f;
            rewardTiltAmount = -0.2f;
        }
    }

    if (xVec3Dist2((xVec3*)&globals.player.ent.model->Mat->pos, &globals.camera.mat.pos) >
        SQR(rewardMove))
    {
        xCameraMove(cam, v, rewardMoveSpeed * dt);
        xCameraFOV(cam, rewardZoomAmount, rewardZoomSpeed, dt);
        xCameraLookYPR(cam, 0x0, globals.camera.yaw_cur, rewardTiltAmount, globals.camera.roll_cur,
                       rewardTiltTime, 0.1f, 0.1f);
    }

    return 1;
}

void zCameraFreeLookSetGoals(xCamera* cam, F32 pitch_s, F32& dgoal, F32& hgoal, F32& pitch_goal,
                             F32& lktm, F32 dt)
{
    if (zcam_bbounce != 0)
    {
        if (zcam_highbounce != 0)
        {
            dgoal = ::GetCurrentD();
            hgoal = ::GetCurrentH();
            pitch_goal = ::GetCurrentPitch();
            return;
        }

        dgoal = zcam_near != 0 ? 3.5f : ::GetCurrentD();
        hgoal = zcam_near != 0 ? 2.4f : ::GetCurrentH();

        F32 newPitchGoal;
        if (zcam_longbounce != 0)
        {
            F32 len = xsqrt(zcam_playervel->x * zcam_playervel->x +
                            zcam_playervel->y * zcam_playervel->y +
                            zcam_playervel->z * zcam_playervel->z);

            bool lenValid = false;
            if (zcam_playervel != NULL)
            {
                if (len != 0.0f)
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
                newPitchGoal = 0.0f < newPitchGoal ? 0.0f : newPitchGoal;
                newPitchGoal = -newPitchGoal;
            }
            else
            {
                newPitchGoal = 0.0f;
            }

            if (zcam_near != 0)
            {
                newPitchGoal = 3.1415928f * (20.0f * newPitchGoal + 20.0f) / 180.0f;
            }
            else
            {
                newPitchGoal = 0.5235988f;
            }

            pitch_goal = newPitchGoal;
        }
        else
        {
            if (zcam_near != 0)
            {
                newPitchGoal = 0.69813174f;
            }
            else
            {
                newPitchGoal = 0.5235988f;
            }

            pitch_goal = newPitchGoal;
        }
        return;
    }

    F32 d = ::GetCurrentD();
    F32 h = ::GetCurrentH();
    F32 p = ::GetCurrentPitch();

    if (lassocam_enabled && stop_track == 0)
    {
        dgoal = lassocam_factor * (d - zcam_near_d) + zcam_near_d;
        hgoal = lassocam_factor * (h - zcam_near_h) + zcam_near_h;
        pitch_goal = lassocam_factor * (p - zcam_near_pitch) + zcam_near_pitch;
        return;
    }

    if (pitch_s > 0.0f)
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

    if (lktm > 0.1f)
    {
        lktm -= dt;
        if (lktm < 0.1f)
        {
            lktm = 0.1f;
        }
        return;
    }

    lktm = 0.1f;
}

void zCameraUpdate(xCamera* camera, F32 dt)
{
    U32 sceneId = globals.sceneCur->sceneID;

    if (sceneId == 'HB01' ||
        // HB02 intentionally omitted
        sceneId == 'HB03' || sceneId == 'HB04' || sceneId == 'HB06' || sceneId == 'HB07' ||
        sceneId == 'HB08' || sceneId == 'HB09' || sceneId == 'HB10')
    {
        zcam_near |= 0x2;
    }
    else
    {
        zcam_near &= 0x1;
    }

    zCameraTweakGlobal_Update(dt);

    // Placeholder usage of floats to match data section.
    camera->dcd = 30.0f;
    camera->dcd = 0.0000099999997f;
    camera->dcd = 12.139999f;
}

void zCameraSetBbounce(S32 bbouncing)
{
    zcam_bbounce = bbouncing;
}

void zCameraSetLongbounce(S32 lbounce)
{
    if (zcam_highbounce != 0 || zcam_longbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }

    zcam_longbounce = lbounce;
    // li r0 happens too early
    zcam_highbounce = 0;
}

void zCameraSetHighbounce(S32 lbounce)
{
    if (zcam_longbounce != 0 || zcam_highbounce != lbounce)
    {
        zcam_lbbounce = 0;
    }

    zcam_highbounce = lbounce;
    // li r0 happens too early
    zcam_longbounce = 0;
}

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

U32 zCameraIsTrackingDisabled()
{
    return stop_track;
}

void zCameraDisableInput()
{
    input_enabled = 0;
}

void zCameraEnableInput()
{
    input_enabled = 1;
}

void zCameraDisableLassoCam()
{
    lassocam_enabled = 0;
}

void zCameraEnableLassoCam()
{
    lassocam_enabled = 1;
}

void zCameraSetLassoCamFactor(F32 new_factor)
{
    lassocam_factor = new_factor;
}

F32 zCameraGetLassoCamFactor()
{
    return lassocam_factor;
}

S32 zCameraGetConvers()
{
    return zcam_convers;
}

void zCameraSetConvers(S32 on)
{
    xCamera& cam = globals.camera;
    zcam_convers = on;
    static U8 saved = 0;

    if (on)
    {
        cam = zcam_backupconvers;
        saved = 1;
        zcam_dest = NULL;
        zcam_tmr = 0.0f;
    }
    else
    {
        xCameraSetFOV(&cam, 75.0f);
        zcam_fovcurr = 75.0f;

        if (saved)
        {
            zCameraFlyRestoreBackup(&zcam_backupconvers);
            xCameraMove(&cam, 0x2E, cam.dcur, cam.hcur, cam.pcur, 0.0f, 0.0f, 0.0f);
            saved = 0;
        }
    }
}

void zCameraDoTrans(xCamAsset* asset, F32 ttime)
{
    xMat3x3 m;

    zcam_dest = asset;

    ttime = ttime > 0.0f ? ttime : asset->trans_time;

    zcam_tmr = ttime;
    zcam_ttm = ttime;

    if (ttime <= 0.0f)
    {
        globals.camera.mat.right = asset->right;
        globals.camera.mat.up = asset->up;
        globals.camera.mat.at = asset->at;
        globals.camera.mat.pos = asset->pos;

        zcam_fovcurr = asset->fov;
        zcam_fovdest = asset->fov;
    }
    else
    {
        m.right = asset->right;
        m.up = asset->up;
        m.at = asset->at;

        xQuatFromMat(&zcam_quat, &m);
        zcam_fovdest = asset->fov;
    }
}

void zCameraTranslate(xCamera* cam, F32 x, F32 y, F32 z)
{
    cam->mat.pos.x += x;
    cam->mat.pos.y += y;
    cam->mat.pos.z += z;
    cam->tran_accum.x += x;
    cam->tran_accum.y += y;
    cam->tran_accum.z += z;
}

void zCameraEnableWallJump(xCamera* cam, const xVec3& collNormal)
{
    if (wall_jump_enabled != WJVS_ENABLED)
    {
        wall_jump_enabled = WJVS_ENABLING;
    }

    xVec3 up = { 0.0f, 0.0f, 0.0f };

    xVec3Cross(&wall_jump_view, &collNormal, &up);
    xVec3Normalize(&wall_jump_view, &wall_jump_view);

    if (xVec3Dot(&wall_jump_view, &globals.camera.mat.at) < 0.0f)
    {
        xVec3Sub(&wall_jump_view, &g_O3, &wall_jump_view);
    }
}

void zCameraDisableWallJump(xCamera* cam)
{
    if (wall_jump_enabled != WJVS_DISABLED)
    {
        wall_jump_enabled = WJVS_DISABLING;
    }
}

void zCameraSetReward(S32 reward)
{
    if (zCameraIsTrackingDisabled() != 0)
    {
        zcam_reward = 0;
        return;
    }
    zcam_reward = reward;
}

void zCameraMinTargetHeightSet(F32 min_height)
{
    zcam_mintgtheight = min_height;
}

void zCameraMinTargetHeightClear()
{
    zcam_mintgtheight = -1.0e38;
}

F32 xVec3Dist2(const xVec3* vecA, const xVec3* vecB)
{
    float dx = vecA->x - vecB->x;
    float dy = vecA->y - vecB->y;
    float dz = vecA->z - vecB->z;
    return dx * dx + dy * dy + dz * dz;
}

U32 zCamera_FlyOnly()
{
    switch (globals.sceneCur->sceneID)
    {
    case 'PG12':
    case 'KF05':
    case 'DB02':
    case 'SM02':
    case 'SM03':
    case 'SM04':
        return 1;
    default:
        return 0;
    }
}
