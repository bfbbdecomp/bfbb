#include "xEnt.h"
#include "xFX.h"
#include "xMath.h"
#include "xMath3.h"

#include "zHud.h"
#include "zFX.h"
#include "zScene.h"
#include "zTextBox.h"

#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>

extern xFXRing sPatrickStunRing[3];
extern xFXRing sPorterRing[2];
extern xFXRing sHammerRing[1];
extern xFXRing sMuscleArmRing[1];
extern xFXRing sPorterRing[2];
extern xFXRing sPatrickStunRing[3];

extern zFXGooInstance zFXGooInstances[24];

extern char zFX_strings[];
extern ztextbox* goo_timer_textbox;

xVec3 bubblehit_pos_rnd;
xVec3 bubblehit_vel_rnd;
float bubblehit_vel_scale;

void xDrawSphere2(const xVec3*, F32, U32)
{
}

void on_spawn_bubble_wall(const tweak_info& tweak)
{
    zFX_SpawnBubbleWall();
}

void zFX_SceneExit(RpWorld* world)
{
    xFX_SceneExit(world);
    zFXGoo_SceneExit();
}

void zFX_SceneReset()
{
    zFXGoo_SceneReset();
    reset_poppers();
    reset_entrails();
}

void zFXPatrickStun(const xVec3* pos)
{
    xFXRingCreate(pos, &sPatrickStunRing[0]);
    xFXRingCreate(pos, &sPatrickStunRing[1]);
    xFXRingCreate(pos, &sPatrickStunRing[2]);
}

void zFXHammer(const xVec3* pos)
{
    xFXRingCreate(pos, &sHammerRing[0]);
    zFX_SpawnBubbleSlam(pos, (xrand() & 31) + 32, 0.15f, 12.0f, 2.0f);
}

void zFXPorterWave(const xVec3* pos)
{
    xFXRingCreate(pos, &sPorterRing[0]);
    xFXRingCreate(pos, &sPorterRing[1]);
}

xFXRing* zFXMuscleArmWave(const xVec3* pos)
{
    return xFXRingCreate(pos, &sMuscleArmRing[0]);
}

void zFXGoo_SceneEnter()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 24; i++)
    {
        memset(goo, 0, 4);
        goo->state = zFXGooStateInactive;
        goo++;
    }
    U32 gameID = xStrHash(zFX_strings + 0x19); // "FREEZY_TIMER_TEXTBOX"
    goo_timer_textbox = (ztextbox*)zSceneFindObject(gameID);
}

void zFXGoo_SceneReset()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;

    for (i = 0; i < 24;)
    {
        if (goo->state != zFXGooStateInactive)
        {
            goo->state = zFXGooStateNormal;
        }
        i++;
        goo++;
    }
}

void zFXGoo_SceneExit()
{
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 0x18; i++)
    {
        memset(goo, 0, 4);
        goo->state = zFXGooStateInactive;
        goo++;
    }
}

void zFXUpdate(F32 dt)
{
    zFXGooUpdate(dt);
    update_poppers(dt);
    update_entrails(dt);
    xFXUpdate(dt);
}

namespace
{
    void add_popper_tweaks() { }
    void add_entrail_tweaks() { }

    S32 count_faces(xModelInstance* mdl)
    {
        int i = 0;
        for (; mdl != NULL; mdl = mdl->Next)
        {
            i += mdl->Data->geometry->numTriangles;
        }
        return i;
    }

    struct entrail_data
    {
        U16 flags;
        U16 type;
        xEnt* ent;
        xVec3 loc;
        xVec3 vel;
        F32 emitted;

        void reset();
        void update(F32);
    };

    enum state_enum
    {
        STATE_NONE,
        STATE_OFF,
        STATE_ON
    };

    struct popper_data
    {
        state_enum state;
        xEnt* ent;
        RpAtomic* atomic[4];
        U32 atomic_size;
        F32 time;
        F32 end_time;
        union
        {
            xVec3 model_scale;
            U32 pipe_flags;
        };
        F32 rate;
        F32 vel;
        F32 rloc;
        F32 rvel;
        F32 emitted;
        S32 faces;
        F32 radius;
        F32 area;
        F32 weight[768];
    };

    popper_data poppers[8];
    entrail_data* entrails;
    U32 entrails_size;

    void entrail_data::reset()
    {
        flags = 0;
        emitted = 0.0f;
    }

    void set_popper_alpha(popper_data& data, F32 alpha)
    {
        xEntShow(data.ent);
        xModelInstance* p = data.ent->model;
        p->Alpha = alpha;
        p->Flags |= 0x4000;
        p->PipeFlags = (p->PipeFlags & ~0xc) | 8;
    }
}

void update_entrails(F32 val)
{
    entrail_data* pData;
    entrail_data* pEnd = &entrails[entrails_size];
    for (pData = entrails; pData != pEnd; pData++)
    {
        pData->update(val);
    }
}

void reset_entrails()
{
    entrail_data* pData;
    entrail_data* pEnd = &entrails[entrails_size];
    for (pData = entrails; pData != pEnd; pData++)
    {
        pData->reset();
    }
}

void zFX_SpawnBubbleHit(const xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd, float vel_scale);
void zFX_SpawnBubbleTrail(const xVec3* pos, unsigned int num, const xVec3* pos_rnd, const xVec3* vel_rnd);

void zFX_SpawnBubbleHit(const xVec3* pos, U32 num)
{
    zFX_SpawnBubbleHit
    (
    pos,
    num,
    &bubblehit_pos_rnd,
    &bubblehit_vel_rnd,
    bubblehit_vel_scale
    );
}

void zFX_SpawnBubbleTrail(const xVec3* pos, U32 num)
{
    zFX_SpawnBubbleTrail
    (
    pos,
    num,
    &bubblehit_pos_rnd,
    &bubblehit_vel_rnd
    );
}

void init_poppers()
{
    reset_poppers();
    add_popper_tweaks();
}

void reset_poppers()
{
    popper_data* pData;
    popper_data* pEnd = &poppers[sizeof(poppers) / sizeof(popper_data)];
    for (pData = &poppers[0]; pData != pEnd; pData++)
    {
        pData->state = STATE_NONE;
        pData->ent = NULL;
    }
}

void zFXGooUpdateInstance(zFXGooInstance*, F32);

void zFXGooUpdate(F32 dt)
{
    int i;
    zFXGooInstance* pGoo = &zFXGooInstances[0];

    for (i = 0 ; i < 0x18; i++)
    {
        if (pGoo->state != zFXGooStateInactive)
        {
            zFXGooUpdateInstance(pGoo, dt);
        }
        pGoo++;
    }
}

void xDebugAddTweak(const char* unk1, const char* unk2, const tweak_callback* unk3, void* unk4,
                    U32 unk5)
{
}

xVec3& xVec3::up_normalize()
{
    return safe_normalize(xVec3::m_UnitAxisY);
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
