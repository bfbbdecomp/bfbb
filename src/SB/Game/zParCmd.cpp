#include "zParCmd.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

#include "xParCmd.h"
#include "xMath.h"
#include "xString.h"

#include "zGlobals.h"
#include "zScene.h"
#include "zVolume.h"

static zVolume* sClipVolume[32];
static int32 sClipVolumeTotal;

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
        for (int32 i = 0; i < sClipVolumeTotal; i++)
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

void xParCmdPlayerCollision_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
    return;
}

// This function looks like it was written with math operations on the vector types but
// that ends up calling the math operator functions.
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xPar* p = ps->m_root;

    xVec3 pos = *xEntGetPos(&globals.player.ent);
    pos.y += 1.0f;

    float32 mul = dt * -p->m_lifetime;
    for (; p != NULL; p = p->m_next)
    {
        // xVec3 vec = p->m_pos - pos;
        xVec3 vec;
        vec.x = p->m_pos.x - pos.x;
        vec.y = p->m_pos.y - pos.y;
        vec.z = p->m_pos.z - pos.z;
        float32 dist = xVec3Normalize(&vec, &vec);

        // p->m_vel += vec * mul;
        p->m_vel.x += vec.x * mul;
        p->m_vel.y += vec.y * mul;
        p->m_vel.z += vec.z * mul;
        if (dist < 0.25f)
        {
            p->m_lifetime = -1.0f;
        }
        else if (dist < 2.0f)
        {
            // p->m_vel *= dist * 0.5f;
            p->m_vel.x *= dist * 0.5f;
            p->m_vel.y *= dist * 0.5f;
            p->m_vel.z *= dist * 0.5f;
        }
    }
}

// WIP
#if 0
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps, float dt)
{
    xParCmdDamagePlayer* cmd = (xParCmdDamagePlayer*)c->tasset;
    xPar* p;
    xBound* pbound = &globals.player.ent.bound;
    int32 last_idx = 10 - (xrand() & 1);

    // int32 i = 0;
    // for (; p != NULL, last_idx > 0; last_idx--)
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

    while (p != NULL && last_idx > 0)
    {
        // for (; last_idx < 1 && p != NULL;)
        // while (cmd->granular <= 0)
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
                    break;
                }

                // if (cmd->granular <= 0)
                // {
                //     last_idx = cmd->granular;
                //     continue;
                // }
            }

            // for()
            if(cmd->granular)
            {
                return;
            }
        }
        // for (; !last_idx != 0;)
        // while (cmd->granular != 0)
        // while(p != NULL)
        // {
        //     p = p->m_next;
        // }
    }
}
#endif

void xParCmdJet_Update(xParCmd*, xParGroup*, float)
{
}

void xParCmdCustom_Grass_Update(xParCmd*, xParGroup*, float)
{
}

void xParCmdApplyCamMat_Update(xParCmd*, xParGroup*, float)
{
}

void xParCmdCustom_Update(xParCmd*, xParGroup*, float)
{
}
