#include "xFX.h"
#include "xMath.h"
#include "xMath3.h"

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

extern F32 lbl_803CD968; // 0.15f
extern F32 lbl_803CD96C; // 12.0f
extern F32 lbl_803CD970; // 2.0f

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

void zFXPatrickStun(xVec3* pos)
{
    xFXRingCreate(pos, &sPatrickStunRing[0]);
    xFXRingCreate(pos, &sPatrickStunRing[1]);
    xFXRingCreate(pos, &sPatrickStunRing[2]);
}

void zFXHammer(xVec3* pos)
{
    xFXRingCreate(pos, &sHammerRing[0]);
    // weird xrand arithmetic might have something to do with signed integers
    zFX_SpawnBubbleSlam(pos, (xrand() & 31) + 32, lbl_803CD968, lbl_803CD96C, lbl_803CD970);
}

void zFXPorterWave(xVec3* pos)
{
    xFXRingCreate(pos, &sPorterRing[0]);
    xFXRingCreate(pos, &sPorterRing[1]);
}

// PS2 dwarf data says this returns an xFXRing*, but gamecube symbols say it's void
void zFXMuscleArmWave(xVec3* pos)
{
    xFXRingCreate(pos, &sMuscleArmRing[0]);
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

#if 0
void zFXGoo_SceneReset()
{
    // This almost matches, only two instructions are flipped.
    // otherwise, its perfect.
    S32 i;
    zFXGooInstance* goo = zFXGooInstances;

    for (i = 0; i < 24; i++)
    {
        if (goo->state != zFXGooStateInactive)
        {
            goo->state = zFXGooStateNormal;
        }
        goo++;
    }
}

#endif

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

#if 0
// Idk what the name of the other function is.
void init_poppers()
{
    reset_poppers();
    add_popper_tweaks__17 @unnamed @zFX_cpp @Fv();
}

#endif

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
