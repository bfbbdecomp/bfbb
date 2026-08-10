#include "xParEmitterType.h"

#include <types.h>
#include <xMath.h>
#include <xParEmitter.h>
#include <iModel.h>
#include <xMathInlines.h>
#include <xBound.h>

namespace
{
    void ocircle_emit(xPar& p, xParEmitterAsset& a, F32 dt, F32 radius);
    void transform_ent_bone(xVec3& loc, xVec3& vel, const xParEmitterAsset& a,
                            const xMat4x3& mat);
    xVec3 get_random_offset(const xPEEntBone& region, const xMat4x3& mat);
    xVec3 get_random_offset(const xBound& b, F32 expand, U32 type);
} // namespace

void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, F32 dt)
{
    p->m_vel += a->vel;
    xVec3SMulBy(&p->m_vel, dt);
    xParEmitterAngleVariation(p, a);
}

void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
    F32 ang_debrisCone;

    ang_debrisCone = a->vel_angle_variation;
    if (ang_debrisCone != 0.0f)
    {
        xMat3x3 mat_rot = { 0 };
        F32 ang[3] = { 0.0f, 0.0f, 0.0f };

        ang[0] = ang_debrisCone * (xurand() - 0.5f);
        ang[1] = ang_debrisCone * (xurand() - 0.5f);
        ang[2] = ang_debrisCone * (xurand() - 0.5f);
        xMat3x3Euler(&mat_rot, ang[0], ang[1], ang[2]);
        xMat3x3LMulVec(&p->m_vel, &mat_rot, &p->m_vel);
    }
}

void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 dt_radius;
    F32 rot_amount;
    F32 temp_icos;
    F32 dot_ret_x;
    F32 temp_isin;
    F32 dot_ret_z;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    rot_amount = 6.2831855f * xurand();
    temp_icos = icos(rot_amount);
    temp_isin = isin(rot_amount);

    _xMat2x2 rot_mat = { { 1.0f, 0.0f }, { 0.0f, 1.0f } };

    xVec2Init(&rot_mat.right, temp_icos, temp_isin);
    xVec2Init(&rot_mat.up, -temp_isin, temp_icos);

    xVec2 vec2 = { 0.0f, 1.0f };

    dot_ret_x = xVec2Dot(&rot_mat.right, &vec2);
    dot_ret_x *= a->e_circle.radius;
    dot_ret_z = xVec2Dot(&rot_mat.up, &vec2);
    dot_ret_z *= a->e_circle.radius;

    p->m_pos.x += dot_ret_x;
    p->m_pos.z += dot_ret_z;

    xParEmitterAngleVariation(p, a);

    if (a->e_circle.deflection != 0.0f)
    {
        dt_radius = a->e_circle.deflection * (a->e_circle.radius * dt);
        p->m_vel.x += dot_ret_x * dt_radius;
        p->m_vel.z += dot_ret_z * dt_radius;
    }
}

void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 rr;
    F32 dt_radius;
    F32 rot_amount;
    F32 temp_icos;
    F32 dot_ret_x;
    F32 temp_isin;
    F32 dot_ret_z;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    rot_amount = 6.2831855f * xurand();
    temp_icos = icos(rot_amount);
    temp_isin = isin(rot_amount);

    _xMat2x2 rot_mat = { { 1.0f, 0.0f }, { 0.0f, 1.0f } };

    xVec2Init(&rot_mat.right, temp_icos, temp_isin);
    xVec2Init(&rot_mat.up, -temp_isin, temp_icos);

    xVec2 vec2 = { 0.0f, 1.0f };

    rr = xurand();
    rr = 1.0f - (rr * rr);
    vec2.y = rr * a->e_circle.radius;

    dot_ret_x = xVec2Dot(&rot_mat.right, &vec2);
    dot_ret_z = xVec2Dot(&rot_mat.up, &vec2);

    p->m_pos.x += dot_ret_x;
    p->m_pos.z += dot_ret_z;

    xParEmitterAngleVariation(p, a);

    if (a->e_circle.deflection != 0.0f)
    {
        dt_radius = a->e_circle.deflection * (a->e_circle.radius * dt);
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
    F32 rand;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    rand = xurand();
    if ((2.0f * (rand * a->e_rect.x_len)) > a->e_rect.x_len)
    {
        p->m_pos.x += a->e_rect.x_len;
    }
    else
    {
        p->m_pos.x -= a->e_rect.x_len;
    }

    rand = xurand();
    if ((2.0f * (rand * a->e_rect.z_len)) >= a->e_rect.z_len)
    {
        p->m_pos.z += a->e_rect.z_len;
    }
    else
    {
        p->m_pos.z -= a->e_rect.z_len;
    }

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, F32 dt)
{
    xVec3 vec;
    F32 len;
    F32 rand_len;
    F32 yaw;
    F32 pitch;
    F32 rr;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    xVec3Sub(&vec, &a->e_line.pos2, &a->e_line.pos1);
    len = xVec3Normalize(&vec, &vec);
    rand_len = len * xurand();

    p->m_pos.x = (vec.x * rand_len) + a->e_line.pos1.x;
    p->m_pos.y = (vec.y * rand_len) + a->e_line.pos1.y;
    p->m_pos.z = (vec.z * rand_len) + a->e_line.pos1.z;

    if (a->e_line.radius > 0.0f)
    {
        yaw = 6.2831855f * xurand();
        pitch = 6.2831855f * xurand();

        F32 sin_yaw = isin(yaw);
        rr = icos(yaw);
        F32 sin_pitch = isin(pitch);
        F32 cos_pitch = icos(pitch);

        xVec3 dir = { 0.0f, 0.0f, 0.0f };

        dir.x = -sin_yaw;
        dir.y = rr * sin_pitch;
        dir.z = rr * cos_pitch;

        F32 temp_random = xurand();

        temp_random = 1.0f - (temp_random * (temp_random * temp_random));
        p->m_pos += dir * (a->e_line.radius * temp_random);
    }

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 yaw;
    F32 pitch;
    F32 rr;

    p->m_vel = a->vel * dt;

    yaw = 6.2831855f * xurand();
    pitch = 6.2831855f * xurand();

    F32 sin_yaw = isin(yaw);
    rr = icos(yaw);
    F32 sin_pitch = isin(pitch);
    F32 cos_pitch = icos(pitch);

    xVec3 dir = { 0.0f, 0.0f, 0.0f };

    dir.x = -sin_yaw;
    dir.y = rr * sin_pitch;
    dir.z = rr * cos_pitch;

    p->m_pos += dir * (a->e_sphere.radius * xurand());

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, F32 dt, S32 subtype)
{
    xVec3 dirvec = { 0.0f, 0.0f, 1.0f };
    xVec3 offset = { 0.0f, 0.0f, 0.0f };
    xMat3x3 mat_rot = { 0 };

    F32 random_angle_72;
    F32 random_angle_71;
    F32 random_angle_10;
    F32 random_angle_11;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    switch (subtype)
    {
    case eParEmitterSphereEdge1:
        random_angle_71 = 6.2831855f * xurand();
        random_angle_72 = 6.2831855f * xurand();
        xMat3x3Euler(&mat_rot, 6.2831855f * xurand(), random_angle_72, random_angle_71);
        break;
    case eParEmitterSphereEdge2:
        random_angle_10 = (3.1415927f * xurand()) + 3.1415927f;
        xMat3x3Euler(&mat_rot, 6.2831855f * xurand(), random_angle_10, 0.0f);
        break;
    case eParEmitterSphereEdge3:
        random_angle_11 = 3.1415927f * xurand();
        xMat3x3Euler(&mat_rot, 6.2831855f * xurand(), random_angle_11, 0.0f);
        break;
    }

    dirvec = mat_rot.at;
    xVec3SMul(&p->m_vel, &dirvec, xVec3Length(&p->m_vel));
    xVec3SMul(&offset, &dirvec, a->e_sphere.radius);
    xVec3AddTo(&p->m_pos, &offset);
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, F32 dt, xVolume* vol)
{
    xVec3 size;
    xBound* b;

    p->m_vel = a->vel;
    xVec3SMulBy(&p->m_vel, dt);

    if (vol != NULL)
    {
        b = vol->GetBound();
        if (b->type == XBOUND_TYPE_BOX)
        {
            xVec3Sub(&size, &b->box.box.upper, &b->box.box.lower);
            size.x *= xurand();
            size.y *= xurand();
            size.z *= xurand();
            xVec3Add(&p->m_pos, &size, &b->box.box.lower);
        }
    }

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent)
{
    U32 size = 0;
    xModelInstance* model = ent->model;
    xVec3 loc;
    U32 which;

    while (model != NULL)
    {
        if (!(model->Flags & 0x8000))
        {
            size += model->Data->geometry->numVertices;
        }
        model = model->Next;
    }

    which = (xrand() >> 0xD) % size;

    {
        xModelInstance* model = ent->model;

        while (model != NULL)
        {
            if (!(model->Flags & 0x8000))
            {
                U32 size = model->Data->geometry->numVertices;

                if (which < size)
                {
                    iModelVertEval(model->Data, which, 1, model->Mat, NULL, &loc);
                    break;
                }

                which -= size;
            }
            model = model->Next;
        }
    }

    p->m_pos = loc;
    p->m_vel = a->vel * dt;
    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent)
{
    xModelInstance* model;
    RpAtomic* data;

    if (ent != NULL)
    {
        model = ent->model;
        data = model->Data;
        if (data->geometry->morphTarget->verts != NULL)
        {
            iModelTagEval(data, &pe->tag, model->Mat, &p->m_pos);
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

    p->m_vel *= dt;

    ang = 6.2831855f * xurand();

    xVec2 dir = { 0.0f, 0.0f };

    dir.x = isin(ang);
    dir.y = icos(ang);

    xVec2 offset = dir * a->e_vcyl.radius;

    p->m_pos.x += offset.x;
    p->m_pos.y += a->e_vcyl.height * xurand();
    p->m_pos.z += offset.y;

    deflect = a->e_vcyl.deflection * dt;
    p->m_vel.x += offset.x * deflect;
    p->m_vel.z += offset.y * deflect;

    xParEmitterAngleVariation(p, a);
}

void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt)
{
    ocircle_emit(*p, *a, dt, a->e_circle.radius);
}

namespace
{
    void ocircle_emit(xPar& p, xParEmitterAsset& a, F32 dt, F32 radius)
    {
        xMat3x3 rot_mat;
        F32 rot_amount;
        F32 temp_icos;
        F32 temp_isin;

        xMat3x3LookVec(&rot_mat, &a.e_circle.dir);

        rot_amount = 6.2831855f * xurand();
        temp_icos = icos(rot_amount);
        temp_isin = isin(rot_amount);

        xVec3 dir = { 0.0f, 0.0f, 0.0f };

        dir.x = temp_icos;
        dir.y = temp_isin;
        dir *= radius;
        xMat3x3RMulVec(&dir, &rot_mat, &dir);

        p.m_pos += dir;
        p.m_vel = a.e_circle.dir * a.vel.y;

        xParEmitterAngleVariation(&p, &a);

        if (a.e_circle.deflection != 0.0f)
        {
            p.m_vel += dir * (radius * a.e_circle.deflection);
        }

        p.m_vel *= dt;
    }
} // namespace

void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, F32 dt)
{
    F32 rr = xurand();
    F32 radius = 1.0f - (rr * rr);

    radius *= a->e_circle.radius;
    ocircle_emit(*p, *a, dt, radius);
}

xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, const xParEmitterAsset& a,
                                     const xEnt& ent)
{
    static xMat4x3 buffer_mat;

    xMat4x3* mat;
    xMat4x3* bone_mat = (xMat4x3*)ent.model->Mat;
    U8 bone = a.e_entbone.bone;

    if (bone == 0)
    {
        mat = bone_mat;
    }
    else
    {
        xMat4x3Mul(&buffer_mat, bone_mat + bone, bone_mat);
        mat = &buffer_mat;
    }

    transform_ent_bone(loc, vel, a, *mat);

    return mat;
}

namespace
{
    void transform_ent_bone(xVec3& loc, xVec3& vel, const xParEmitterAsset& a, const xMat4x3& mat)
    {
        if (a.e_entbone.flags & 0x1)
        {
            xMat3x3RMulVec(&vel, &mat, &a.vel);
        }
        else
        {
            vel = a.vel;
        }

        if (a.e_entbone.flags & 0x2)
        {
            if (a.e_entbone.flags & 0x4)
            {
                xVec3 offset = { 0.0f, 0.0f, 0.0f };

                offset.x = a.e_entbone.offset.x;
                offset.z = a.e_entbone.offset.z;
                xMat4x3Toworld(&loc, &mat, &offset);
                loc.y = a.e_entbone.offset.y;
            }
            else
            {
                xMat4x3Toworld(&loc, &mat, &a.e_entbone.offset);
            }
        }
        else
        {
            loc = mat.pos + a.e_entbone.offset;
            if (a.e_entbone.flags & 0x4)
            {
                loc.y = a.e_entbone.offset.y;
            }
        }

        if (a.e_entbone.flags & 0x4)
        {
            loc.y = a.e_entbone.offset.y;
        }
    }
} // namespace

void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, const xParEmitterAsset& a,
                                 const xMat4x3& mat)
{
    transform_ent_bone(loc, vel, a, mat);
}

void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, F32 dt, const xMat4x3& mat)
{
    const xPEEntBone& b = a->e_entbone;

    xVec3 offset = get_random_offset(b, mat);

    p->m_pos += offset;

    if (b.deflection != 0.0f)
    {
        p->m_vel += (offset * b.deflection) * dt;
    }

    xParEmitterAngleVariation(p, a);
}

namespace
{
    xVec3 get_random_offset(const xPEEntBone& region, const xMat4x3& mat)
    {
        xVec3 offset;

        switch (region.type)
        {
        case 0:
        {
            offset = 0.0f;
            break;
        }
        case 1:
        {
            F32 ang = 6.2831855f * xurand();
            F32 z = (2.0f * xurand()) - 1.0f;
            F32 s = xsqrt(1.0f - (z * z));
            F32 t = xurand();
            F32 radius = 1.0f - (t * (t * t));

            radius *= region.radius;
            F32 rs = radius * s;

            offset.assign(rs * icos(ang), rs * isin(ang), radius * z);
            break;
        }
        case 2:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius * xsqrt(xurand());

            offset.assign(radius * isin(ang), 0.0f, radius * icos(ang));
            break;
        }
        case 3:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius * xsqrt(xurand());

            offset = (mat.up * (radius * isin(ang))) + (mat.at * (radius * icos(ang)));
            break;
        }
        case 4:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius * xsqrt(xurand());

            offset = (mat.right * (radius * isin(ang))) + (mat.at * (radius * icos(ang)));
            break;
        }
        case 5:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius * xsqrt(xurand());

            offset = (mat.right * (radius * isin(ang))) + (mat.up * (radius * icos(ang)));
            break;
        }
        case 6:
        {
            F32 ang = 6.2831855f * xurand();
            F32 z = (2.0f * xurand()) - 1.0f;
            F32 rs = region.radius * xsqrt(1.0f - (z * z));

            offset.assign(rs * icos(ang), rs * isin(ang), z * region.radius);
            break;
        }
        case 7:
        {
            F32 ang = 6.2831855f * xurand();

            offset.assign(region.radius * isin(ang), 0.0f, region.radius * icos(ang));
            break;
        }
        case 8:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius;

            offset = (mat.up * (radius * isin(ang))) + (mat.at * (radius * icos(ang)));
            break;
        }
        case 9:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius;

            offset = (mat.right * (radius * isin(ang))) + (mat.at * (radius * icos(ang)));
            break;
        }
        case 10:
        {
            F32 ang = 6.2831855f * xurand();
            F32 radius = region.radius;

            offset = (mat.right * (radius * isin(ang))) + (mat.up * (radius * icos(ang)));
            break;
        }
        }

        return offset;
    }
} // namespace

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, F32 dt, const xEnt* ent)
{
    const xPEEntBound& region = a->e_entbound;
    const xMat4x3& mat = *(xMat4x3*)ent->model->Mat;

    if (region.flags & 0x1)
    {
        xMat3x3RMulVec(&p->m_vel, &mat, &a->vel);
    }
    else
    {
        p->m_vel = a->vel;
    }

    xVec3 offset = get_random_offset(ent->bound, region.expand, region.type);

    p->m_pos = mat.pos + offset;

    if (region.deflection != 0.0f)
    {
        p->m_vel += offset * region.deflection;
    }

    p->m_vel *= dt;

    xParEmitterAngleVariation(p, a);
}

namespace
{
    xVec3 get_random_offset(const xBound& b, F32 expand, U32 type)
    {
        xVec3 offset;

        switch (b.type | (type << 3))
        {
        case XBOUND_TYPE_SPHERE:
        {
            F32 ang = 6.2831855f * xurand();
            F32 z = (2.0f * xurand()) - 1.0f;
            F32 s = xsqrt(1.0f - (z * z));
            F32 t = xurand();
            F32 radius = 1.0f - (t * (t * t));

            radius *= (b.sph.r + expand);
            F32 rs = radius * s;

            offset.assign(rs * icos(ang), rs * isin(ang), radius * z);
            break;
        }
        case XBOUND_TYPE_BOX:
        {
            offset = (b.box.box.upper - b.box.center) + expand;
            offset.x *= (2.0f * xurand()) - 1.0f;
            offset.y *= (2.0f * xurand()) - 1.0f;
            offset.z *= (2.0f * xurand()) - 1.0f;
            break;
        }
        case XBOUND_TYPE_OBB:
        {
            offset = b.box.box.upper + expand;
            offset.x *= (2.0f * xurand()) - 1.0f;
            offset.y *= (2.0f * xurand()) - 1.0f;
            offset.z *= (2.0f * xurand()) - 1.0f;
            xMat3x3RMulVec(&offset, b.mat, &offset);
            break;
        }
        case (1 << 3) | XBOUND_TYPE_SPHERE:
        {
            F32 ang = 6.2831855f * xurand();
            F32 z = (2.0f * xurand()) - 1.0f;
            F32 rs = (b.sph.r + expand) * xsqrt(1.0f - (z * z));

            offset.assign(rs * icos(ang), rs * isin(ang), z * (b.sph.r + expand));
            break;
        }
        case (1 << 3) | XBOUND_TYPE_BOX:
        {
            xVec3 dir;
            U32 r = xrand() >> 0xD;
            U32 axis = r % 3;
            F32 sign = (r & 0x4) ? 1.0f : -1.0f;

            if (axis == 0)
            {
                dir.assign(sign, (2.0f * xurand()) - 1.0f, (2.0f * xurand()) - 1.0f);
            }
            else if (axis == 1)
            {
                dir.assign((2.0f * xurand()) - 1.0f, sign, (2.0f * xurand()) - 1.0f);
            }
            else
            {
                dir.assign((2.0f * xurand()) - 1.0f, (2.0f * xurand()) - 1.0f, sign);
            }

            offset = ((b.box.box.upper - b.box.center) + expand) * dir;
            break;
        }
        case (1 << 3) | XBOUND_TYPE_OBB:
        {
            xVec3 dir;
            U32 r = xrand() >> 0xD;
            U32 axis = r % 3;
            F32 sign = (r & 0x4) ? 1.0f : -1.0f;

            if (axis == 0)
            {
                dir.assign(sign, (2.0f * xurand()) - 1.0f, (2.0f * xurand()) - 1.0f);
            }
            else if (axis == 1)
            {
                dir.assign((2.0f * xurand()) - 1.0f, sign, (2.0f * xurand()) - 1.0f);
            }
            else
            {
                dir.assign((2.0f * xurand()) - 1.0f, (2.0f * xurand()) - 1.0f, sign);
            }

            offset = (b.box.box.upper + expand) * dir;
            xMat3x3RMulVec(&offset, b.mat, &offset);
            break;
        }
        }

        return offset;
    }
} // namespace
