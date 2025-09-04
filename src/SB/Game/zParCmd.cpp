#include "zParCmd.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

#include "xParCmd.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xString.h"

#include "zGlobals.h"
#include "zScene.h"
#include "zVolume.h"

static zVolume* sClipVolume[32];
static S32 sClipVolumeTotal;

void zParCmdInit()
{
    xParCmdInit();
    xParCmdRegister(0x04, 0x2c, xParCmdJet_Update);
    xParCmdRegister(0x0e, 0x10, xParCmdPlayerCollision_Update);
    xParCmdRegister(0x10, 0x1c, xParCmdCustom_Update);
    xParCmdRegister(0x1a, 0x0c, xParCmdClipVolumes_Update);
    xParCmdRegister(0x1b, 0x0c, xParCmdAnimalMagentism_Update);
    xParCmdRegister(0x1c, 0x10, xParCmdDamagePlayer_Update);
    xParCmdRegister(0x16, 0x14, xParCmdApplyCamMat_Update);
    xParCmdRegister(0x11, 0x10, xParCmdKillDistance_Update);
}

void zParCmdFindClipVolumes()
{
    char findname[64];

    memset(sClipVolume, 0, sizeof(zVolume*) * 32);
    for (sClipVolumeTotal = 0; sClipVolumeTotal < 32; sClipVolumeTotal++)
    {
        sprintf(findname, "PARTICLE_CLIP_%d", sClipVolumeTotal + 1);
        zVolume* vol = (zVolume*)zSceneFindObject(xStrHash(findname));
        if (vol == NULL)
        {
            return;
        }
        sClipVolume[sClipVolumeTotal] = vol;
    }
}

void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps, float)
{
    xPar* p = ps->m_root;
    xParCmdKillDistance* cmd = (xParCmdKillDistance*)c->tasset;
    xVec3* camera_pos = &globals.camera.mat.pos;
    xVec3 out;

    if (cmd->kill_greater_than)
    {
        for (; p != NULL; p = p->m_next)
        {
            xVec3Sub(&out, &p->m_pos, camera_pos);
            if (xVec3Length2(&out) > cmd->dSqr)
            {
                p->m_lifetime = -1.0f;
            }
        }
    }
    else
    {
        for (; p != NULL; p = p->m_next)
        {
            xVec3Sub(&out, &p->m_pos, camera_pos);
            if (xVec3Length2(&out) < cmd->dSqr)
            {
                p->m_lifetime = -1.0f;
            }
        }
    }
}

// Equivalent. The original function mixes the sClipVolume load into the prologue
void xParCmdClipVolumes_Update(xParCmd* c, xParGroup* ps, float)
{
    for (xPar* p = ps->m_root; p != NULL; p = p->m_next)
    {
        for (S32 i = 0; i < sClipVolumeTotal; i++)
        {
            xCollis collis;
            xVecHitsBound(&p->m_pos, &sClipVolume[i]->asset->bound, &collis);
            if (collis.flags & 1)
            {
                p->m_lifetime = -1.0f;
            }
        }
    }
}

void xParCmdPlayerCollision_Update(xParCmd* c, xParGroup* ps, F32 dt)
{
    return;
}

void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p = ps->m_root;
    xParCmdAnimalMagnetism* cmd = (xParCmdAnimalMagnetism*)c->tasset;

    xVec3 pos = *xEntGetPos(&globals.player.ent);
    pos.y += 1.0f;

    F32 mul = dt * -cmd->unknown;
    for (; p != NULL; p = p->m_next)
    {
        xVec3 vec;
        vec.x = p->m_pos.x - pos.x;
        vec.y = p->m_pos.y - pos.y;
        vec.z = p->m_pos.z - pos.z;
        F32 dist = xVec3Normalize(&vec, &vec);

        p->m_vel.x += vec.x * mul;
        p->m_vel.y += vec.y * mul;
        p->m_vel.z += vec.z * mul;
        if (dist < 0.25f)
        {
            p->m_lifetime = -1.0f;
        }
        else if (dist < 2.0f)
        {
            dist *= 0.49f;
            p->m_vel.x *= dist;
            p->m_vel.y *= dist;
            p->m_vel.z *= dist;
        }
    }
}

void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p;
    xParCmdDamagePlayer* cmd = (xParCmdDamagePlayer*)c->tasset;
    xBound* pbound = &globals.player.ent.bound;
    S32 last_idx = 10 - (xrand() & 1);

    p = ps->m_root;
    while (p != NULL && last_idx-- > 0)
    {
        p = p->m_next;
    }

    static xCollis collis;
    static xBound bnd_fake;

    memset(&collis, 0, sizeof(xCollis));
    memset(&bnd_fake, 0, sizeof(xBound));
    bnd_fake.type = XBOUND_TYPE_SPHERE;

    while (p != NULL)
    {
        if (p->m_lifetime > 0.1f)
        {
            collis.flags = 0;
            if (p->m_size > 1.0f)
            {
                bnd_fake.sph.r = 0.5f * p->m_size;
                xVec3Copy(&bnd_fake.sph.center, &p->m_pos);
                xQuickCullForBound(&bnd_fake.qcd, &bnd_fake);
                xBoundHitsBound(&bnd_fake, pbound, &collis);
            }
            else
            {
                xVecHitsBound(&p->m_pos, pbound, &collis);
            }

            if (collis.flags & 1)
            {
                zEntPlayer_Damage(NULL, 1, NULL);
            }
        }

        for (S32 i = 0; i < cmd->granular; i++)
        {
            if (p == NULL)
            {
                break;
            }
            p = p->m_next;
        }
    }
}

void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p;
    xParCmdJet* cmd = (xParCmdJet*)c->tasset;
    F32 mdt = cmd->gravity * dt;

    xVec3 center;
    if (cmd->mode == 0)
    {
        center.x = globals.player.ent.model->Mat->pos.x;
        center.y = globals.player.ent.model->Mat->pos.y;
        center.z = globals.player.ent.model->Mat->pos.z;
    }
    else
    {
        center = cmd->center;
    }

    for (p = ps->m_root; p != NULL; p = p->m_next)
    {
        xVec3 r;
        xVec3Sub(&r, &center, &p->m_pos);

        F32 rSqr = r.x * r.x + r.y * r.y + r.z * r.z;
        if (!(rSqr < cmd->radiusSqr))
        {
            continue;
        }

        F32 oorSqr = mdt / xsqrt(rSqr + cmd->epsilon);
        r.x = r.x < 0.0f ? 1.0f : -1.0f;
        r.z = r.z < 0.0f ? 1.0f : -1.0f;

        p->m_vel.x = cmd->acc.x * oorSqr * r.x + p->m_vel.x;
        p->m_vel.y = cmd->acc.y * oorSqr + p->m_vel.y;
        p->m_vel.z = cmd->acc.z * oorSqr * r.z + p->m_vel.z;
    }
}

// Extremely different float regalloc and scheduling, but looks equivalent
void xParCmdCustom_Grass_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p;

    xVec3 pos;
    pos.x = globals.player.ent.model->Mat->pos.x;
    pos.y = globals.player.ent.model->Mat->pos.y;
    pos.z = globals.player.ent.model->Mat->pos.z;

    for (p = ps->m_root; p != NULL; p = p->m_next)
    {
        xVec3 r;
        xVec3Sub(&r, &pos, &p->m_pos);

        F32 rSqr = r.x * r.x + r.y * r.y + r.z * r.z;
        if (rSqr < 2.0f)
        {
            p->m_size = p->m_size - 4.0f * dt;

            if (p->m_size < 0.1f)
            {
                p->m_size = 0.1f;
            }
        }
        else
        {
            p->m_size = p->m_size + .01f * dt;
            if (p->m_size > 1.0f)
            {
                p->m_size = 1.0f;
            }
        }
    }
}

void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p;
    xParCmdApplyCamMat* cmd = (xParCmdApplyCamMat*)c->tasset;
    xMat4x3* mat = &globals.camera.mat;
    F32 mul;

    if (cmd->apply.x != 0.0f)
    {
        mul = dt * cmd->apply.x;
        for (p = ps->m_root; p != NULL; p = p->m_next)
        {
            p->m_vel.x += mat->right.x * mul;
            p->m_vel.y += mat->right.y * mul;
            p->m_vel.z += mat->right.z * mul;
        }
    }

    if (cmd->apply.y != 0.0f)
    {
        mul = dt * cmd->apply.y;
        for (p = ps->m_root; p != NULL; p = p->m_next)
        {
            p->m_vel.x += mat->up.x * mul;
            p->m_vel.y += mat->up.y * mul;
            p->m_vel.z += mat->up.z * mul;
        }
    }

    if (cmd->apply.z != 0.0f)
    {
        mul = dt * cmd->apply.z;
        for (p = ps->m_root; p != NULL; p = p->m_next)
        {
            p->m_vel.x += mat->at.x * mul;
            p->m_vel.y += mat->at.y * mul;
            p->m_vel.z += mat->at.z * mul;
        }
    }
}

void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p = ps->m_root;
    xParCmdCustom* cmd = (xParCmdCustom*)c->tasset;

    switch (cmd->unknown)
    {
    case 0:
        F32 mdt = 4.0f * dt;
        xVec3 pos;
        pos.x = globals.player.ent.model->Mat->pos.x;
        pos.y = globals.player.ent.model->Mat->pos.y;
        pos.z = globals.player.ent.model->Mat->pos.z;

        for (; p != NULL; p = p->m_next)
        {
            xVec3 r;
            xVec3Sub(&r, &pos, &p->m_pos);
            F32 rSqr = r.x * r.x + r.y * r.y + r.z * r.z;
            if (!(rSqr < 16.0f))
            {
                continue;
            }

            F32 oorSqr = xsqrt(rSqr + 0.001f);
            r.x = r.x < 0.0f ? 1.0f : -1.0f;
            r.z = r.z < 0.0f ? 1.0f : -1.0f;

            p->m_size = 1.0f / (10.0f * (mdt / oorSqr) * (r.x + r.z));
        }
        break;
    case 2:
        for (; p != NULL; p = p->m_next)
        {
            p->m_vel.x = 0.0f;
            p->m_vel.y = 0.0f;
            p->m_vel.z = 0.0f;
        }
        break;
    case 10:
        xParCmdCustom_Grass_Update(c, ps, dt);
        break;
    case 11:
        for (; p != NULL; p = p->m_next)
        {
            xVec3Length2(&p->m_vel); // ?? Why did they do this
            xVec3SMulBy(&p->m_vel, 0.98f);
        }
        break;
    }
}
