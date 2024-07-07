#include "xParCmd.h"

#include "xParGroup.h"
#include "xVec3Inlines.h"
#include "xMath.h"
#include "xMathInlines.h"

struct xCmdInfo
{
    U32 type;
    U32 size;
    xParCmdUpdateFunc func;
};

static xCmdInfo sCmdInfo[XPARCMD_TYPE_COUNT] = {};

extern F32 _658_0;
extern F32 _691;
extern F32 _760;
extern F32 _772;
extern F32 _812;
extern F32 _830_1;
extern F32 _831_0;
extern F32 _857_0;
extern F32 _858;
extern F32 _1075;
extern F32 _1076;
extern F32 _1077;

void xParCmdInit()
{
    xParCmdRegister(XPARCMD_TYPE_MOVE, sizeof(xParCmdMove), xParCmdMove_Update);
    xParCmdRegister(XPARCMD_TYPE_MOVERANDOM, sizeof(xParCmdMove), xParCmdMoveRandom_Update);
    xParCmdRegister(XPARCMD_TYPE_ACCELERATE, sizeof(xParCmdAccelerate), xParCmdAccelerate_Update);
    xParCmdRegister(XPARCMD_TYPE_VELOCITYAPPLY, sizeof(xParCmdAsset), xParCmdVelocityApply_Update);
    xParCmdRegister(XPARCMD_TYPE_UNK5, sizeof(xParCmdUnk5), NULL);
    xParCmdRegister(XPARCMD_TYPE_KILLSLOW, sizeof(xParCmdKillSlow), xParCmdKillSlow_Update);
    xParCmdRegister(XPARCMD_TYPE_FOLLOW, sizeof(xParCmdFollow), xParCmdFollow_Update);
    xParCmdRegister(XPARCMD_TYPE_ORBITPOINT, sizeof(xParCmdOrbitPoint), xParCmdOrbitPoint_Update);
    xParCmdRegister(XPARCMD_TYPE_ORBITLINE, sizeof(xParCmdOrbitLine), xParCmdOrbitLine_Update);
    xParCmdRegister(XPARCMD_TYPE_MOVERANDOMPAR, sizeof(xParCmdMoveRandomPar),
                    xParCmdMoveRandomPar_Update);
    xParCmdRegister(XPARCMD_TYPE_SCALE3RDPOLYREG, sizeof(xParCmdScale3rdPolyReg),
                    xParCmdScale3rdPolyReg_Update);
    xParCmdRegister(XPARCMD_TYPE_TEX, sizeof(xParCmdTex), xParCmdTex_Update);
    xParCmdRegister(XPARCMD_TYPE_TEXANIM, sizeof(xParCmdTexAnim), xParCmdTexAnim_Update);
    xParCmdRegister(XPARCMD_TYPE_RANDOMVELOCITYPAR, sizeof(xParCmdRandomVelocityPar),
                    xParCmdRandomVelocityPar_Update);
    xParCmdRegister(XPARCMD_TYPE_AGE, sizeof(xParCmdAge), xParCmdAge_Update);
    xParCmdRegister(XPARCMD_TYPE_ALPHA3RDPOLYREG, sizeof(xParCmdAlpha3rdPolyReg),
                    xParCmdAlpha3rdPolyReg_Update);
    xParCmdRegister(XPARCMD_TYPE_APPLYWIND, sizeof(xParCmdApplyWind), xParCmdApplyWind_Update);
    xParCmdRegister(XPARCMD_TYPE_ROTPAR, sizeof(xParCmdRotPar), xParCmdRotPar_Update);
    xParCmdRegister(XPARCMD_TYPE_ROTATEAROUND, sizeof(xParCmdRotateAround),
                    xParCmdRotateAround_Update);
    xParCmdRegister(XPARCMD_TYPE_SMOKEALPHA, sizeof(xParCmdSmokeAlpha), xParCmdSmokeAlpha_Update);
    xParCmdRegister(XPARCMD_TYPE_SCALE, sizeof(xParCmdScale), xParCmdScale_Update);
    xParCmdRegister(XPARCMD_TYPE_COLLIDEFALL, sizeof(xParCmdCollideFall),
                    xParCmdCollideFall_Update);
    xParCmdRegister(XPARCMD_TYPE_COLLIDEFALLSTICKY, sizeof(xParCmdCollideFallSticky),
                    xParCmdCollideFallSticky_Update);
    xParCmdRegister(XPARCMD_TYPE_SHAPER, sizeof(xParCmdShaperData), xParCmd_Shaper_Update);
    xParCmdRegister(XPARCMD_TYPE_ALPHAINOUT, sizeof(xParCmdAlphaInOutData),
                    xParCmd_AlphaInOut_Update);
    xParCmdRegister(XPARCMD_TYPE_SIZEINOUT, sizeof(xParCmdSizeInOutData), xParCmd_SizeInOut_Update);
    xParCmdRegister(XPARCMD_TYPE_DAMPENSPEED, sizeof(xParCmdDampenData),
                    xParCmd_DampenSpeed_Update);
}

void xParCmdRegister(U32 parType, U32 size, xParCmdUpdateFunc func)
{
    sCmdInfo[parType].type = parType;
    sCmdInfo[parType].size = size;
    sCmdInfo[parType].func = func;
}

U32 xParCmdGetSize(U32 parType)
{
    for (S32 i = 0; i < XPARCMD_TYPE_COUNT; i++)
    {
        if (sCmdInfo[i].type == parType)
        {
            return sCmdInfo[i].size;
        }
    }

    return 0;
}

xParCmdUpdateFunc xParCmdGetUpdateFunc(U32 parType)
{
    for (S32 i = 0; i < XPARCMD_TYPE_COUNT; i++)
    {
        if (sCmdInfo[i].type == parType)
        {
            return sCmdInfo[i].func;
        }
    }

    return NULL;
}

void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdKillSlow* cmd = (xParCmdKillSlow*)c->tasset;
    F32 speedLimit = cmd->speedLimitSqr * dt;

    if (cmd->kill_less_than)
    {
        while (p)
        {
            if (xVec3Length2(&p->m_vel) < speedLimit)
            {
                p->m_lifetime = _658_0;
            }

            p = p->m_next;
        }
    }
    else
    {
        while (p)
        {
            if (xVec3Length2(&p->m_vel) > speedLimit)
            {
                p->m_lifetime = _658_0;
            }

            p = p->m_next;
        }
    }
}

void xParCmdAge_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    F32 age_rate = ((xParCmdAge*)c->tasset)->unknown * dt;

    while (p)
    {
        p->m_lifetime -= age_rate;
        p = p->m_next;
    }
}

void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdFollow* cmd = (xParCmdFollow*)c->tasset;
    F32 mdt = cmd->gravity * dt;

    while (p && p->m_next)
    {
        xVec3 var_38;

        xVec3Sub(&var_38, &p->m_next->m_pos, &p->m_pos);

        F32 f31 = xVec3Length2(&var_38);
        F32 f1 = xVec3LengthFast(var_38.x, var_38.y, var_38.z);

        F32 force = mdt / (f1 * (f31 + cmd->epsilon));

        p->m_vel.x += var_38.x * force;
        p->m_vel.y += var_38.y * force;
        p->m_vel.z += var_38.z * force;

        p = p->m_next;
    }
}

void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdOrbitPoint* cmd = (xParCmdOrbitPoint*)c->tasset;
    F32 mdt = cmd->gravity * dt;

    while (p)
    {
        xVec3 var_38;

        xVec3Sub(&var_38, &cmd->center, &p->m_pos);

        F32 f31 = xVec3Length2(&var_38);

        if (f31 < cmd->maxRadiusSqr)
        {
            F32 f1 = xVec3LengthFast(var_38.x, var_38.y, var_38.z);

            F32 force = mdt / (f1 + (f31 + cmd->epsilon));

            p->m_vel.x += var_38.x * force;
            p->m_vel.y += var_38.y * force;
            p->m_vel.z += var_38.z * force;
        }

        p = p->m_next;
    }
}

void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdOrbitLine* cmd = (xParCmdOrbitLine*)c->tasset;
    F32 mdt = cmd->gravity * dt;

    while (p)
    {
        xVec3 var_34, var_40, var_4C, var_58;

        xVec3Sub(&var_34, &p->m_pos, &cmd->p);
        xVec3Cross(&var_4C, &var_34, &cmd->axis);
        xVec3Cross(&var_40, &cmd->axis, &var_4C);
        xVec3Sub(&var_58, &var_40, &var_34);

        F32 f31 = xVec3Length2(&var_58);

        if (f31 < cmd->maxRadiusSqr)
        {
            F32 f1 = xVec3LengthFast(var_58.x, var_58.y, var_58.z);

            F32 force = mdt / (f1 + (f31 + cmd->epsilon));

            p->m_vel.x += var_58.x * force;
            p->m_vel.y += var_58.y * force;
            p->m_vel.z += var_58.z * force;
        }

        p = p->m_next;
    }
}

void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdAccelerate* cmd = (xParCmdAccelerate*)c->tasset;

    xVec3 var_28;
    var_28 = cmd->acc;

    xVec3SMulBy(&var_28, dt);

    p = ps->m_root;

    while (p)
    {
        p->m_vel.x += var_28.x;
        p->m_vel.y += var_28.y;
        p->m_vel.z += var_28.z;

        p = p->m_next;
    }
}

void xParCmdMove_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdMove* cmd = (xParCmdMove*)c->tasset;

    xVec3 var_28;
    var_28 = cmd->dir;

    xVec3SMulBy(&var_28, dt);

    p = ps->m_root;

    while (p)
    {
        xVec3Add(&p->m_pos, &p->m_pos, &var_28);

        p = p->m_next;
    }
}

void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdMove* cmd = (xParCmdMove*)c->tasset;

    xVec3 var_28;
    var_28 = cmd->dir;

    var_28.x *= _760 * xurand();
    var_28.y *= _760 * xurand();
    var_28.z *= _760 * xurand();

    xVec3Sub(&var_28, &var_28, &cmd->dir);
    xVec3SMulBy(&var_28, dt);

    p = ps->m_root;

    while (p)
    {
        xVec3Add(&p->m_pos, &p->m_pos, &var_28);

        p = p->m_next;
    }
}

void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdMoveRandomPar* cmd = (xParCmdMoveRandomPar*)c->tasset;
    F32 f31 = cmd->dim.x * (dt * _772);
    F32 f30 = cmd->dim.z * (dt * _772);

    while (p)
    {
        p->m_pos.x += f31 * (xurand() - _772);
        p->m_pos.z += f30 * (xurand() - _772);

        p = p->m_next;
    }
}

void xParCmdScale3rdPolyReg_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
}

void xParCmdSmokeAlpha_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
}

void xParCmdScale_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
}

void xParCmdAlpha3rdPolyReg_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
}

void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdRandomVelocityPar* cmd = (xParCmdRandomVelocityPar*)c->tasset;
    F32 f31 = cmd->x * dt;
    F32 f30 = cmd->y * dt;
    F32 f29 = cmd->z * dt;

    while (p)
    {
        xMat3x3 var_88;

        F32 y = _760 * (f31 * xurand()) - f31;
        F32 x = _760 * (f30 * xurand()) - f30;
        F32 z = _760 * (f29 * xurand()) - f29;

        xMat3x3Euler(&var_88, x, y, z);
        xMat3x3LMulVec(&p->m_vel, &var_88, &p->m_vel);

        p = p->m_next;
    }
}

#ifdef NON_MATCHING
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;

    // non-matching: f2 and f3 are combined into one register
    F32 f2 = _812 * (((xParCmdApplyWind*)c->tasset)->unknown * dt);
    F32 f3 = _812 * (((xParCmdApplyWind*)c->tasset)->unknown * dt);

    while (p)
    {
        p->m_vel.x += f2;
        p->m_vel.z += f3;

        p = p->m_next;
    }
}
#endif

void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdRotPar* cmd = (xParCmdRotPar*)c->tasset;
    F32 f30 = _830_1 * ((cmd->max.x - cmd->min.x) / _831_0);
    F32 f29 = _830_1 * ((cmd->max.y - cmd->min.y) / _831_0);
    F32 f28 = _830_1 * ((cmd->max.z - cmd->min.z) / _831_0);
    F32 f27 = _830_1 * (cmd->min.x / _831_0);
    F32 f26 = _830_1 * (cmd->min.y / _831_0);
    F32 f25 = _830_1 * (cmd->min.z / _831_0);

    while (p)
    {
        p->m_rotdeg[0] += (U8)(dt * (f30 * xurand() + f27));
        p->m_rotdeg[1] += (U8)(dt * (f29 * xurand() + f26));
        p->m_rotdeg[2] += (U8)(dt * (f28 * xurand() + f25));

        p = p->m_next;
    }
}

void xParCmdVelocityApply_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;

    while (p)
    {
        xVec3Add(&p->m_pos, &p->m_pos, &p->m_vel);

        p = p->m_next;
    }
}

#ifdef NON_MATCHING
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p = ps->m_root;
    xParCmdRotateAround* cmd = (xParCmdRotateAround*)c->tasset;

    F32 yaw = _857_0 * (dt * cmd->yaw) / _858;
    F32 radius_growth = dt * cmd->radius_growth;

    while (p)
    {
        xVec3 at;
        xVec3Sub(&at, &cmd->pos, &p->m_pos);

        at.y = _691;

        xMat3x3 lookmat;

        F32 radius = xMat3x3LookVec(&lookmat, &at);

        xVec3 angles;
        xMat3x3GetEuler(&lookmat, &angles);

        angles.x += yaw;

        xMat3x3 rotmat;
        xMat3x3Euler(&rotmat, angles.x, angles.y, angles.z);

        xVec3 var_BC, var_C8;

        // non-matching: f0 and f1 swapped

        var_BC.x = _691;
        var_BC.y = _691;
        var_BC.z = radius + radius_growth;

        xMat3x3RMulVec(&var_C8, &rotmat, &var_BC);

        p->m_pos.x = var_C8.x + cmd->pos.x;
        p->m_pos.z = var_C8.z + cmd->pos.z;

        p = p->m_next;
    }
}
#endif

void xParCmdTex_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
}

void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdTexAnim* cmd = (xParCmdTexAnim*)c->tasset;
    xParCmdTex* tex = ps->m_cmdTex;

    if (!tex)
    {
        return;
    }

    if (cmd->throttle_time > _691)
    {
        cmd->throttle_time_elapsed -= dt;

        if (cmd->throttle_time_elapsed > _691)
        {
            return;
        }

        cmd->throttle_time_elapsed = cmd->throttle_time;
    }

    p = ps->m_root;

    if (cmd->anim_mode == 0)
    {
        while (p)
        {
            p->m_texIdx[0] = xrand() % tex->cols;
            p->m_texIdx[1] = xrand() % tex->rows;

            p = p->m_next;
        }
    }
    else if (cmd->anim_mode == 1)
    {
        if (tex->cols > 1)
        {
            while (p)
            {
                p->m_texIdx[0]++;

                if (p->m_texIdx[0] >= tex->cols)
                {
                    p->m_texIdx[0] = 0;

                    if (cmd->anim_wrap_mode == 1)
                    {
                        p->m_texIdx[1]++;

                        if (p->m_texIdx[1] >= tex->rows)
                        {
                            p->m_texIdx[1] = 0;
                        }
                    }
                    else if (cmd->anim_wrap_mode == 2)
                    {
                        if (p->m_texIdx[1] == 0)
                        {
                            p->m_texIdx[1] = tex->rows - 1;
                        }
                        else
                        {
                            p->m_texIdx[1]--;
                        }
                    }
                    else if (cmd->anim_wrap_mode == 3)
                    {
                        p->m_texIdx[1]++;

                        if (p->m_texIdx[1] >= tex->rows)
                        {
                            p->m_texIdx[1] = tex->rows - 1;
                            p->m_texIdx[0] = tex->cols - 1;
                        }
                    }
                }

                p = p->m_next;
            }
        }
    }
    else if (cmd->anim_mode == 2)
    {
        if (tex->cols > 1)
        {
            while (p)
            {
                if (p->m_texIdx[0] == 0)
                {
                    p->m_texIdx[0] = tex->cols - 1;

                    if (cmd->anim_wrap_mode == 1)
                    {
                        p->m_texIdx[1]++;

                        if (p->m_texIdx[1] >= tex->rows)
                        {
                            p->m_texIdx[1] = 0;
                        }
                    }
                    else if (cmd->anim_wrap_mode == 2)
                    {
                        if (p->m_texIdx[1] == 0)
                        {
                            p->m_texIdx[1] = tex->rows - 1;
                        }
                        else
                        {
                            p->m_texIdx[1]--;
                        }
                    }
                }
                else
                {
                    p->m_texIdx[0]--;
                }

                p = p->m_next;
            }
        }
    }
    else if (cmd->anim_mode == 3)
    {
        if (tex->rows > 1)
        {
            while (p)
            {
                if (p->m_texIdx[1] == 0)
                {
                    p->m_texIdx[1] = tex->rows - 1;

                    if (cmd->anim_wrap_mode == 1)
                    {
                        p->m_texIdx[0]++;

                        if (p->m_texIdx[0] >= tex->cols)
                        {
                            p->m_texIdx[0] = 0;
                        }
                    }
                    else if (cmd->anim_wrap_mode == 2)
                    {
                        if (p->m_texIdx[0] == 0)
                        {
                            p->m_texIdx[0] = tex->cols - 1;
                        }
                        else
                        {
                            p->m_texIdx[0]--;
                        }
                    }
                }
                else
                {
                    p->m_texIdx[1]--;
                }

                p = p->m_next;
            }
        }
    }
    else if (cmd->anim_mode == 4)
    {
        if (tex->rows > 1)
        {
            while (p)
            {
                p->m_texIdx[1]++;

                if (p->m_texIdx[1] >= tex->rows)
                {
                    p->m_texIdx[1] = 0;

                    if (cmd->anim_wrap_mode == 1)
                    {
                        p->m_texIdx[0]++;

                        if (p->m_texIdx[0] >= tex->cols)
                        {
                            p->m_texIdx[0] = 0;
                        }
                    }
                    else if (cmd->anim_wrap_mode == 2)
                    {
                        if (p->m_texIdx[0] == 0)
                        {
                            p->m_texIdx[0] = tex->cols - 1;
                        }
                        else
                        {
                            p->m_texIdx[0]--;
                        }
                    }
                }

                p = p->m_next;
            }
        }
    }
}

void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xParCmdCollideFall& cmd = *(xParCmdCollideFall*)c->tasset;
    xPar* p = ps->m_root;

    while (p)
    {
        F32& loc = p->m_pos.y;
        F32& vel = p->m_vel.y;
        F32 dloc = cmd.y - loc;

        if (dloc < _691)
        {
            // lol
        }
        else
        {
            loc = dloc * cmd.bounce + cmd.y;

            if (vel < _691)
            {
                vel = -vel * cmd.bounce;
            }
        }

        p = p->m_next;
    }
}

void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xParCmdCollideFallSticky& cmd = *(xParCmdCollideFallSticky*)c->tasset;
    F32 xzdamp = _812 - cmd.sticky;
    xPar* p = ps->m_root;

    while (p)
    {
        F32& loc = p->m_pos.y;
        F32& vel = p->m_vel.y;
        F32 dloc = cmd.y - loc;

        if (dloc < _691)
        {
            // lol
        }
        else
        {
            loc = dloc * cmd.bounce + cmd.y;

            if (vel < _691)
            {
                vel = -vel * cmd.bounce;
            }

            p->m_vel.x *= xzdamp;
            p->m_vel.z *= xzdamp;
        }

        p = p->m_next;
    }
}

void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdDampenData* cmd = (xParCmdDampenData*)c->tasset;

    if (cmd->enabled)
    {
        p = ps->m_root;

        F32 damp = dt * cmd->dampSpeed;

        while (p)
        {
            xVec3AddScaled(&p->m_vel, &p->m_vel, damp);

            p = p->m_next;
        }
    }
}

#ifdef NON_MATCHING
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    xPar* p;
    xParCmdSizeInOutData* cmd = (xParCmdSizeInOutData*)c->tasset;

    if (cmd->enabled)
    {
        p = ps->m_root;

        S32 i, seg;
        F32 slope_size[3];

        slope_size[0] = _1075 * (cmd->custSize[1] - cmd->custSize[0]);
        slope_size[1] = _1075 * (cmd->custSize[2] - cmd->custSize[1]);
        slope_size[2] = _1075 * (cmd->custSize[3] - cmd->custSize[2]);

        while (p)
        {
            // non-matching: there is definitely a clamp happening here, but it isn't using the CLAMP macro.
            F32 frac = CLAMP(_812 - p->m_lifetime / p->totalLifespan, _691, _812);

            if (frac < _1076)
            {
                seg = 0;
            }
            else if (frac < _1077)
            {
                seg = 1;
            }
            else
            {
                seg = 2;
            }

            for (S32 i = seg; i > 0; i--)
            {
                // non-matching: _1076 is cached before loop
                frac -= _1076;
            }

            p->m_size = frac * slope_size[seg] + cmd->custSize[seg];

            p = p->m_next;
        }
    }
}
#endif

#if 0
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    // todo: this is very similar to xParCmd_SizeInOut_Update
}
#endif

#if 0
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    // todo: part of this is very similar to xParCmd_SizeInOut_Update
}
#endif

WEAK F32 xVec3LengthFast(F32 x, F32 y, F32 z)
{
    F32 len;
    xsqrtfast(len, SQR(x) + SQR(y) + SQR(z));
    return len;
}

static void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
