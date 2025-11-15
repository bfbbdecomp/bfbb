#include "xParEmitterType.h"

#include <types.h>
#include <xMath.h>
#include <xParEmitter.h>
#include <iModel.h>

void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, F32 dt)
{
    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    xParEmitterAngleVariation(p, a);
}

void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
    S32 temp_m;
    F32 ang_debrisCone;
    F32 ang[3];
    ang_debrisCone = a->vel_angle_variation;
    if (ang_debrisCone != 0.0f)
    {
        ang[0] = ang_debrisCone * (xurand() - 0.5f);
        ang[1] = ang_debrisCone * (xurand() - 0.5f);
        ang[2] = ang_debrisCone * (xurand() - 0.5f);
        xMat3x3Euler((xMat3x3*)&temp_m, ang[0], ang[1], ang[2]);
        xMat3x3LMulVec(&p->m_vel, (xMat3x3*)&temp_m, &p->m_vel);
    }
}

void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
    xVec2 vec1;
    xVec2 vec2;
    S32 temp_a;
    F32 dt_radius;
    F32 rot_amount;
    F32 temp_icos;
    F32 dot_ret_z;
    F32 temp_isin;
    F32 dot_ret_x;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    rot_amount = 6.2831855f * xurand();
    temp_icos = icos(rot_amount);
    temp_isin = isin(rot_amount);
    vec1 = 0;
    vec2 = 0;
    xVec2Init(&vec1, temp_icos, temp_isin);
    xVec2Init(&vec2, -temp_isin, temp_icos);
    temp_a = 0;
    dot_ret_x = xVec2Dot(&vec1, (xVec2*)&temp_a) * a->e_rect.x_len;
    dot_ret_z = xVec2Dot(&vec2, (xVec2*)&temp_a) * a->e_rect.x_len;
    p->m_pos.x += dot_ret_x;
    p->m_pos.z += dot_ret_z;
    xParEmitterAngleVariation(p, a);
    if (a->e_rect.z_len != 0.0f)
    {
        dt_radius = a->e_rect.z_len * (a->e_rect.x_len * dt);
        p->m_vel.x += dot_ret_x * dt_radius;
        p->m_vel.z += dot_ret_z * dt_radius;
    }
}

void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, F32 dt)
{
    xVec2 vec1;
    xVec2 vec2;
    F32 temp_calc;
    S32 temp_b;
    F32 temp_rand;
    F32 dt_radius;
    F32 rot_amount;
    F32 temp_icos;
    F32 dot_ret_x;
    F32 temp_isin;
    F32 dot_ret_z;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    rot_amount = 6.2831855f * xurand();
    temp_icos = icos(rot_amount);
    temp_isin = isin(rot_amount);
    xVec2Init(&vec1, temp_icos, temp_isin);
    xVec2Init(&vec2, -temp_isin, temp_icos);
    temp_b = 0;
    temp_calc = 0;
    temp_rand = xurand();
    temp_calc = -((temp_rand * temp_rand) - 1.0f) * a->e_rect.x_len;
    dot_ret_x = xVec2Dot(&vec1, (xVec2*)&temp_b);
    dot_ret_z = xVec2Dot(&vec2, (xVec2*)&temp_b);
    p->m_pos.x += dot_ret_x;
    p->m_pos.z += dot_ret_z;
    xParEmitterAngleVariation(p, a);
    if (a->e_rect.z_len != 0.0f)
    {
        dt_radius = a->e_rect.z_len * (a->e_rect.x_len * dt);
        p->m_vel.x += dot_ret_x * dt_radius;
        p->m_vel.z += dot_ret_z * dt_radius;
    }
}

void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 x_length;
    F32 z_length;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    x_length = a->e_rect.x_len;
    p->m_pos.x += (2.0f * (x_length * xurand())) - x_length;
    z_length = a->e_rect.z_len;
    p->m_pos.z += (2.0f * (z_length * xurand())) - z_length;
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 x_length;
    F32 z_length;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    x_length = a->e_rect.x_len;
    if ((2.0f * (xurand() * x_length)) > x_length)
    {
        p->m_pos.x += x_length;
    }
    else
    {
        p->m_pos.x -= x_length;
    }
    z_length = a->e_rect.z_len;
    if ((2.0f * (xurand() * z_length)) >= z_length)
    {
        p->m_pos.z += z_length;
    }
    else
    {
        p->m_pos.z -= z_length;
    }
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, F32 dt)
{
    xVec3 vec;
    F32 temp_1;
    F32 temp_2;
    F32 temp_3;
    xVec3 dir;
    F32 temp_random;
    F32 len;
    F32 rand_len;
    F32 yaw;
    F32 pitch;
    F32 rr;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    xVec3Sub(&vec, &a->e_line.pos2, (xVec3*)&a->e_line.pos2.x);
    len = xVec3Normalize(&vec, &vec);
    rand_len = len * xurand();
    p->m_pos.x = (1.0 * rand_len) + a->e_line.pos2.x;
    p->m_pos.y = (1.0 * rand_len) + a->e_line.pos2.y;
    p->m_pos.z = (1.0 * rand_len) + a->e_line.pos2.z;
    if (a->e_line.radius > 0.0f)
    {
        yaw = 6.2831855f * xurand();
        pitch = 6.2831855f * xurand();
        rr = icos(yaw);
        temp_1 = -isin(yaw);
        temp_2 = rr * isin(pitch);
        temp_3 = rr * icos(pitch);
        temp_random = xurand();
        dir *= (a->e_line.radius * -((temp_random * (temp_random * temp_random)) - 1.0f));
        dir += (temp_1 + temp_2 + temp_3);
        p->m_pos += dir;
    }
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 temp_1;
    F32 temp_2;
    F32 temp_3;
    xVec3 temp_vec;
    xVec3 dir;
    F32 pitch;
    F32 yaw;
    F32 temp_icos_1;
    F32 temp_sum;

    temp_vec *= dt;
    p->m_vel += temp_vec;
    yaw = 6.2831855f * xurand();
    pitch = 6.2831855f * xurand();
    temp_icos_1 = icos(yaw);
    temp_1 = -isin(yaw);
    temp_2 = temp_icos_1 * isin(pitch);
    temp_3 = temp_icos_1 * icos(pitch);
    dir *= (a->e_sphere.radius * xurand());
    temp_sum = temp_1 + temp_2 + temp_3;
    dir += temp_sum;
    p->m_pos += dir;

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, F32 dt, S32 subtype)
{
    S32 temp_1;
    S32 temp_2;
    S32 temp_3;
    S32 temp_4;

    F32 random_angle_72;
    F32 random_angle_71;
    F32 random_angle_10;
    F32 random_angle_11;

    temp_1 = 0;
    temp_2 = 0;
    temp_3 = 0;
    temp_4 = 0;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    switch (subtype)
    {
    case 7:
        random_angle_71 = 6.2831855f * xurand();
        random_angle_72 = 6.2831855f * xurand();
        xMat3x3Euler((xMat3x3*)&temp_3, 6.2831855f * xurand(), random_angle_71, random_angle_72);
        break;
    case 10:
        random_angle_10 = (3.1415927f * xurand()) + 3.1415927f;
        xMat3x3Euler((xMat3x3*)&temp_3, 6.2831855f * xurand(), random_angle_10, 0.0f);
        break;
    case 11:
        random_angle_11 = 3.1415927f * xurand();
        xMat3x3Euler((xMat3x3*)&temp_3, 6.2831855f * xurand(), random_angle_11, 0.0f);
        break;
    }
    temp_2 += temp_4;
    xVec3SMul(&p->m_vel, (xVec3*)&temp_2, xVec3Length(&p->m_vel));
    xVec3SMul((xVec3*)&temp_1, (xVec3*)&temp_2, a->e_sphere.radius);
    xVec3AddTo((xVec3*)&p->m_pos, (xVec3*)&temp_1);
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, F32 dt, xVolume* vol)
{
    xVec3 temp_1;
    F32 temp_2;
    F32 temp_3;
    xBound* b;

    temp_1 = 0;
    temp_2 = 0;
    temp_3 = 0;

    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    if (vol != NULL)
    {
        b = vol->GetBound();
        if ((U8)b->type == 2)
        {
            xVec3Sub(&temp_1, &b->box.box.upper, &b->box.box.lower);
            temp_1 *= xurand();
            temp_2 *= xurand();
            temp_3 *= xurand();
            xVec3Add((xVec3*)&p->m_pos, &temp_1, &b->box.box.lower);
        }
    }
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent)
{
    U32 size;
    xModelInstance* model;
    U32 which;
    xVec3 dir;
    xVec3 loc;

    size = 0;
    model = ent->model;

    while (model != NULL)
    {
        if (!(model->Flags & 0x8000))
        {
            size += model->Data->geometry->numVertices;
        }
        model = model->Next;
    }

    which = (xrand() >> 0xDU) % size;

    while (model != NULL)
    {
        if (!(model->Flags & 0x8000))
        {
            size = model->Data->geometry->numVertices;
            if (which < size)
            {
                iModelVertEval(model->Data, which, 1U, model->Mat, NULL, &dir);
            }
            else
            {
                which -= size;
                model = model->Next;
            }
        }
        else
        {
        }
    }
    p->m_pos += dir;
    loc *= dt;
    p->m_vel += loc;
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent)
{
    xModelInstance* temp_model;
    RpAtomic* temp_data;

    if (ent != NULL)
    {
        temp_model = ent->model;
        temp_data = temp_model->Data;
        if ((U32)temp_data->geometry->morphTarget->verts != 0U)
        {
            iModelTagEval(temp_data, &pe->tag, temp_model->Mat, (xVec3*)&p->m_pos);
        }
    }
    else
    {
        p->m_pos += a->e_offsetp.offset;
    }
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 ang;
    F32 deflect;
    xVec2 dir;

    F32 temp_isin;
    F32 temp_icos;

    dir = 0;

    p->m_vel *= dt;
    ang = 6.2831855f * xurand();
    temp_isin = isin(ang);
    temp_icos = icos(ang);
    dir *= a->e_vcyl.radius;
    p->m_pos.x += dir.x;
    p->m_pos.y += a->e_vcyl.height * xurand();
    p->m_pos.z += dir.y;
    deflect = a->e_vcyl.deflection * dt;
    p->m_vel.x += dir.x * deflect;
    p->m_vel.z += dir.y * deflect;
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
}

void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, F32 dt)
{
}

xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent)
{
    return 0;
}

void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat)
{
}

void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, F32 dt, xMat4x3& mat)
{
}

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent)
{
}
