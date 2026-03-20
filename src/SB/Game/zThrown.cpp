#include "zThrown.h"

#include "zGlobals.h"
#include <types.h>
#include <string.h>

#include "zEntButton.h"
#include "zEvent.h"
#include "zFX.h"
#include "zGoo.h"
#include "zScene.h"
#include "zSurface.h"

#include "xMathInlines.h"

struct xNPCBasic;
S32 SelfType__9xNPCBasicCFv(const xNPCBasic*);

static void zThrownCollide_StoneTiki(zThrownStruct*, xEntCollis*, F32*, F32*);
void zThrown_LaunchVel(xEnt*, xVec3*);

static CarryableStats c_normal;
CarryableStats c_fruit;
static zThrownStruct zThrownList[32];
static LaunchStats l_normal = { 10.0f, 15.0f, 0.2f };
static ThrowableStats zThrowableModels[23] = {
    { "__default__",   NULL,                       &c_normal, &l_normal, { 0, 0, 0, 0 },         NULL,                    0.0f },
    { "tiki_wooden",   zThrownCollide_DestructObj,  &c_normal, &l_normal, { 0, 0, 0, 0 },         NULL,                    0.0f },
    { "reallybigrock", zThrownCollide_DestructObj,  &c_normal, &l_normal, { 0, 0, 0, 0 },         NULL,                    0.0f },
    { "b3_roof_chunk_sm_a", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "b3_roof_chunk_sm_b", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "b3_roof_chunk_sm_c", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "b3_roof_chunk_sm_d", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "b3_roof_chunk_sm_e", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "b3_roof_chunk_sm_f", zThrownCollide_DestructObj, &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { "tiki_wooden_bind",   zThrownCollide_Tiki,    &c_normal, &l_normal, { 0, 0, 0, 0 },         NULL,                    0.0f },
    { "tiki_thunder_bind",  zThrownCollide_Tiki,    &c_normal, &l_normal, { 0, 0, 0, 0 },         NULL,                    0.0f },
    { "tiki_stone_bind",    zThrownCollide_StoneTiki, &c_normal, &l_normal, { 0, 0, 0, 0 },       NULL,                    0.0f },
    { "fruit_freezy",       zThrownCollide_ThrowFreeze, &c_fruit, &l_normal, { 0, 0, 0, 0 },      "fruit_freezy_shrapnel", 0.77f },
    { "fruit_freezy_bind",  zThrownCollide_ThrowFreeze, &c_fruit, &l_normal, { 0, 0, 0, 0 },      NULL,                    0.77f },
    { "fruit_glow_blue",    zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 32, 32, 128, 255 }, "fruit_throw_shrapnel",  0.92f },
    { "fruit_glow_green",   zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 32, 128, 32, 255 }, "fruit_throw_shrapnel",  0.92f },
    { "fruit_glow_orange",  zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 128, 96, 32, 255 }, "fruit_throw_shrapnel",  0.92f },
    { "fruit_glow_red",     zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 128, 32, 32, 255 }, "fruit_throw_shrapnel",  0.92f },
    { "fruit_glow_yellow",  zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 128, 128, 32, 255 }, "fruit_throw_shrapnel", 0.92f },
    { "fruit_throw",        zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 32, 32, 32, 255 },  "fruit_throw_shrapnel",  0.92f },
    { "fruit_throw_bind",   zThrownCollide_ThrowFruit,  &c_fruit, &l_normal, { 32, 32, 32, 255 },  NULL,                    0.92f },
    { "boss_sa_head_bind",  zThrownCollide_BSandyHead,  &c_normal, &l_normal, { 0, 0, 0, 0 },     NULL,                    0.0f },
    { NULL }
};
U32 zThrownCount;
U32 sThrowButtonMask;
static F32 sSNDLandTimer;
U32 sFruitIsFreezy;
U32 sDebugDepth;

void zThrown_Setup(zScene* sc)
{
    ThrowableStats* stats;
    char tmpstr[256];

    F32 airTime;

    c_fruit.killTimer = globals.player.carry.fruitLifetime;
    airTime = xsqrt((2.0f * globals.player.carry.throwHeight) / globals.player.carry.throwGravity);
    l_normal.throwSpeedY = globals.player.carry.throwGravity * airTime;
    l_normal.throwSpeedXZ = globals.player.carry.throwDistance / (2.0f * airTime);

    stats = zThrowableModels;
    while (stats->name != NULL)
    {
        stats->nameHash = xStrHash(stats->name);
        strcpy(tmpstr, stats->name);
        strcat(tmpstr, ".MINF");
        stats->nameHashMINF = xStrHash(tmpstr);
        if (stats->shrapName != NULL)
        {
            stats->shrapAsset = (zShrapnelAsset*)xSTFindAsset(xStrHash(stats->shrapName), NULL);
        }
        else
        {
            stats->shrapAsset = NULL;
        }
        stats++;
    }

    for (U32 i = 0; i < sc->num_base; i++)
    {
        if (((xEnt*)sc->base[i])->baseType == 0x0B ||
            ((xEnt*)sc->base[i])->baseType == 0x1B)
        {
            stats = zThrowableModels;
            while (stats->name != NULL)
            {
                if (stats->nameHash == ((xEnt*)sc->base[i])->asset->modelInfoID ||
                    stats->nameHashMINF == ((xEnt*)sc->base[i])->asset->modelInfoID)
                {
                    ((xEnt*)sc->base[i])->moreFlags |= 0x8;
                    ((xEnt*)sc->base[i])->asset->moreFlags |= 0x8;
                    break;
                }
                stats++;
            }
        }
    }
}

void zThrown_AddTempFrame(zThrownStruct* thrown)
{
    xEnt* ent = thrown->ent;
    if (ent->frame == NULL)
    {
        memset(&thrown->frame, 0, sizeof(xEntFrame));
        ent->frame = &thrown->frame;
        ent->frame->mat = *(xMat4x3*)ent->model->Mat;
    }
}

void Recurse_TranslateStack(xEnt* ent, xVec3* delta)
{
    sDebugDepth++;
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].stackEnt == ent)
        {
            Recurse_TranslateStack(zThrownList[i].ent, delta);
            zThrownList[i].ent->model->Mat->pos.x += delta->x;
            zThrownList[i].ent->model->Mat->pos.y += delta->y;
            zThrownList[i].ent->model->Mat->pos.z += delta->z;
        }
    }
    sDebugDepth--;
}

void zThrown_PatrickLauncher(xEnt* ent, xEnt* launcher)
{
    int i = 0;

    for (; i < zThrownCount; i++)
    {
        if (ent == zThrownList[i].ent)
            break;
    }

    if (i != zThrownCount)
    {
        zThrownStruct* listInd = &zThrownList[i];
        listInd->patLauncher = launcher;
    }
}

void zThrown_Remove(xEnt* ent)
{
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].ent != ent)
        {
            continue;
        }

        zThrownStruct* thrown = &zThrownList[i];

        // Restore old update function
        thrown->ent->update = thrown->oldupdate;

        // Clear thrown flag from baseFlags
        ent->baseFlags &= ~0x80;

        // Clear frame if it was our temp frame
        if (thrown->ent->frame == &thrown->frame)
        {
            thrown->ent->frame = NULL;
        }

        // Zero out model color multipliers
        xModelInstance* mod = thrown->ent->model;
        mod->BlueMultiplier = 0.0f;
        mod->GreenMultiplier = 0.0f;
        mod->RedMultiplier = 0.0f;

        // Restore old shadow flags
        ent->baseFlags |= (U16)thrown->oldRecShadow;

        // Save collCB before overwriting
        void (*thisCollCB)(zThrownStruct*, xEntCollis*, F32*, F32*) = thrown->stats->collCB;

        // Copy last entry over this one
        *thrown = zThrownList[zThrownCount - 1];
        zThrownCount--;

        // Platform handling - call virtual Reset at vtable offset 0x98
        if (ent->baseType == 0x2B)
        {
            typedef void (*PlatResetFunc)(xEnt*, void*);
            PlatResetFunc fn = ((PlatResetFunc**)ent)[0x1B8 / 4][0x98 / 4];
            fn(ent, NULL);
        }

        // Type 0x2F handling
        if (ent->baseType == 0x2F)
        {
            *(xVec3*)((U8*)ent + 0x1A0) = thrown->vel;

            if (!xEntIsVisible(ent))
            {
                return;
            }

            if (thisCollCB == zThrownCollide_StoneTiki ||
                thisCollCB == zThrownCollide_ThrowFreeze ||
                thisCollCB == zThrownCollide_BSandyHead ||
                thisCollCB == zThrownCollide_ThrowFruit)
            {
                ent->chkby |= 0x10;
            }
        }

        return;
    }
}

S32 zThrown_KillFruit(xEnt* ent)
{
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].ent == ent)
        {
            if (zThrownList[i].stats->carry == &c_fruit)
            {
                zThrownList[i].killTimer = 1e-6f;
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

void zThrownCollide_ThrowFreeze(zThrownStruct* thrown, xEntCollis* collis, float* bounce,
                                float* friction)
{
    sFruitIsFreezy = 1;
    zThrownCollide_ThrowFruit(thrown, collis, bounce, friction);
    sFruitIsFreezy = 0;
}

void zEntPlayer_PatrickLaunch(xEnt*);
void zFXGooFreeze(RpAtomic*, const xVec3*, xVec3*);

S32 zThrownCollide_CauseDamage(zThrownStruct* thrown, xEntCollis* collis)
{
    S32 damageInflicted = 0;

    for (U32 collidx = 6; collidx < 18; collidx++)
    {
        xCollis* currcoll = &collis->colls[collidx];
        if (!(currcoll->flags & k_HIT_IT))
        {
            continue;
        }

        xEnt* hitent = (xEnt*)currcoll->optr;
        if (hitent == NULL)
        {
            continue;
        }

        if (thrown->patLauncher != NULL && thrown->patLauncher == hitent)
        {
            zEntPlayer_PatrickLaunch(hitent);
            thrown->patLauncher = NULL;
            return 1;
        }

        if (hitent->baseType == 0x1B)
        {
            zEntEvent(hitent, 0x168);
            damageInflicted = 1;
        }
        else if (hitent->baseType == 0x2B)
        {
            typedef void (*PlatDamageFunc)(xEnt*, U32, void*, void*);
            PlatDamageFunc fn = ((PlatDamageFunc**)hitent)[0x1B8 / 4][0x80 / 4];
            fn(hitent, 6, NULL, NULL);
            damageInflicted = 1;
        }
        else if (hitent->baseType == 0x18)
        {
            zEntEvent(hitent, 0x168);
            zEntButton_Press((_zEntButton*)hitent, sThrowButtonMask);
            zEntButton_Hold((_zEntButton*)hitent, 0x12000);
        }
        else
        {
            if (hitent->moreFlags & 0x10)
            {
                zEntEvent(hitent, 0x168);
                zEntEvent(hitent, 0x3A);
            }
            else
            {
                zEntEvent(hitent, 0x168);
                zEntEvent(hitent, 0x3A);

                if (sFruitIsFreezy && hitent->model != NULL)
                {
                    F32 dummy;
                    if (zGooIs(hitent, dummy, 0))
                    {
                        xVec3 pos;
                        pos = *(xVec3*)&thrown->ent->model->Mat->pos;
                        pos.x += currcoll->norm.x * currcoll->dist;
                        pos.y += currcoll->norm.y * currcoll->dist;
                        pos.z += currcoll->norm.z * currcoll->dist;
                        zFXGooFreeze(hitent->model->Data, (xVec3*)&hitent->model->Mat->pos, &pos);
                        zEntEvent(hitent, 0x219, 0.0f, 1.0f, 0.0f, 0.0f);
                    }

                    if (zGooIs(hitent, dummy, 0))
                    {
                        damageInflicted = 1;
                    }
                }
            }
        }
    }

    return damageInflicted;
}

static void zThrownCollide_StoneTiki(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                                     F32* friction)
{
    *bounce = 0.0f;
    *friction = 0.0f;
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);

    for (U32 collidx = 6; collidx < 18; collidx++)
    {
        if (!(collis->colls[collidx].flags & k_HIT_IT))
        {
            continue;
        }

        xEnt* hitent = (xEnt*)collis->colls[collidx].optr;
        if (hitent == NULL)
        {
            continue;
        }

        if (hitent->baseType == 0x2B)
        {
            if ((SelfType__9xNPCBasicCFv((const xNPCBasic*)hitent) & 0xFFFFFF00) == 0x4E544600)
            {
                zEntEvent(thrown->ent, 0x25);
            }
        }

        if (hitent->baseType == 0x31)
        {
            zEntEvent(thrown->ent, 0x25);
        }
    }

    // Find closest collision from env/dyn/stat ranges
    U32 collfound = 0;
    if (collis->env_eidx > collis->env_sidx)
    {
        collfound = collis->env_sidx;
    }
    else if (collis->dyn_eidx > collis->dyn_sidx)
    {
        collfound = collis->dyn_sidx;
    }
    else if (collis->stat_eidx > collis->stat_sidx)
    {
        collfound = collis->stat_sidx;
    }

    if (collfound == 0)
    {
        *bounce = 0.0f;
        *friction = 0.0f;
    }
    else if (collis->colls[collfound].dist < 0.7f)
    {
        *friction = 1.0f;
        *bounce = globals.player.carry.fruitWallBounce;
    }
}

void zThrownCollide_DestructObj(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                                F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
    zEntEvent(thrown->ent, eEventDestroy);
}

void zThrownCollide_BSandyHead(zThrownStruct* thrown, xEntCollis* collis, F32* bounce,
                               F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
}

void zThrownCollide_Tiki(zThrownStruct* thrown, xEntCollis* collis, F32* bounce, F32* friction)
{
    sThrowButtonMask = 0x40;
    zThrownCollide_CauseDamage(thrown, collis);
    *bounce = 0.0f;
    *friction = 0.0f;
    zEntEvent(thrown->ent, eEventDestroy);
}

// WIP.
S32 zThrown_IsFruit(xEnt* ent, F32* stackHeight)
{
    ThrowableStats* stats = &zThrowableModels[1];
    while (stats->name != NULL)
    {
        if (stats->nameHash == ent->asset->modelInfoID ||
            stats->nameHashMINF == ent->asset->modelInfoID)
        {
            break;
        }
        stats++;
    }
    if (stats != NULL && stats->carry == &c_fruit)
    {
        if (stackHeight != NULL)
        {
            *stackHeight = stats->stackHeight;
        }
        return 1;
    }
    return 0;
}

S32 zThrown_IsStacked(xEnt* ent)
{
    for (S32 i = 0; i < zThrownCount; i++)
    {
        if ((zThrownList[i].stackEnt == ent) ||
            (zThrownList[i].stackEnt != 0 && (zThrownList[i].ent == ent)))
        {
            return 1;
        }
    }

    return 0;
}

void checkAgainstButtons(xEnt* ent)
{
    struct
    {
        xVec3 center;
        F32 unk;
    } data;
    xVec3Copy(&data.center, xBoundCenter(&ent->bound));
    data.unk = 0.5f;
    zSceneForAllBase(zThrown_ButtonIteratorCB, 0x18, (void*)&data);
}

struct FruitPatternEntry
{
    F32 time;
    F32 value;
};

static FruitPatternEntry fruitPattern[] = {
    { 6.0f, 1.0f },
    { 3.2f, 0.3f },
    { 3.0f, 1.0f },
    { 2.2f, 0.3f },
    { 2.0f, 1.0f },
    { 1.2f, 0.3f },
    { 1.0f, 1.0f },
    { 0.0f, 0.15f },
    { -1.0f, 0.0f },
};

static void zFruit_ColorFade(zThrownStruct* thrown)
{
    F32 timer = thrown->killTimer;
    xModelInstance* mod = thrown->ent->model;

    if (timer == 0.0f)
    {
        return;
    }

    if (timer > fruitPattern[0].time)
    {
        F32 val = fruitPattern[0].value;
        mod->BlueMultiplier = val;
        mod->GreenMultiplier = val;
        mod->RedMultiplier = val;
        return;
    }

    FruitPatternEntry* p = fruitPattern;
    while (TRUE)
    {
        if (timer >= p[1].time)
        {
            F32 t = (timer - p->time) / (p[1].time - p->time);
            F32 val = (1.0f - t) * p->value + t * p[1].value;
            mod->BlueMultiplier = val;
            mod->GreenMultiplier = val;
            mod->RedMultiplier = val;
            return;
        }
        p++;
    }
}

extern xEnt* gReticleTarget;
extern xScene* g_xSceneCur;
void xEntApplyPhysics(xEnt*, xScene*, F32);
void xEntCollide(xEnt*, xScene*, F32);
void xEntDefaultBoundUpdate(xEnt*, xVec3*);
void xEntBoulder_RealBUpdate(xEnt*, xVec3*);
void xVec3Init(xVec3*, F32, F32, F32);
U32 xSndPlay3D(U32, F32, F32, U32, U32, xEnt*, F32, F32, S32, F32);
void zFX_SpawnBubbleTrail(const xVec3*, U32);
xSurface* zSurfaceGetSurface(const xCollis*);

static void zFruit_Update(xEnt*, xScene*, F32);

static void zThrown_Update(xEnt* ent, xScene* sc, F32 dt)
{
    // Find our thrown entry
    U32 i;
    U32 removethis = FALSE;
    for (i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].ent == ent)
        {
            break;
        }
    }

    zThrownStruct* thrown = &zThrownList[i];

    // Platform handling - save old position
    if (ent->baseType == 0x2B)
    {
        xVec3 oldpos = *(xVec3*)&ent->model->Mat->pos;
        thrown->oldupdate(ent, sc, dt);
        *(xVec3*)&ent->model->Mat->pos = oldpos;
        if (ent->frame != NULL)
        {
            *(xVec3*)&ent->frame->mat.pos = oldpos;
        }
    }

    // Decrement collision reset timer
    if (thrown->collResetTimer != 0.0f)
    {
        thrown->collResetTimer -= dt;
        if (thrown->collResetTimer < 0.0f)
        {
            thrown->collResetTimer = 0.0f;
            ent->chkby |= 0x10;
        }
    }

    // Save state
    xEntCollis* oldcollis = ent->collis;
    RwMatrix* mat = ent->model->Mat;
    U8 oldpflags = ent->pflags;
    U8 oldcollType = ent->collType;
    xVec3 stackDelta;
    stackDelta.x = -mat->pos.x;
    stackDelta.y = -mat->pos.y;
    stackDelta.z = -mat->pos.z;

    xEntBoundUpdateCallback old_bupdateFunc = ent->bupdate;
    ent->bupdate = NULL;

    // Set up temp collision struct
    xEntCollis collis;
    collis.chk = 0x2E;
    collis.pen = 0x2E;
    collis.post = NULL;
    collis.depenq = NULL;
    ent->collis = &collis;

    // Copy velocity to frame
    ent->frame->vel = thrown->vel;
    ent->pflags |= 0x04;
    ent->collType = 0x10;

    // Save bound and compute sphere bound for collision
    xBound oldbound;
    oldbound = ent->bound;
    if (oldbound.type != 3)
    {
        if (oldbound.type == 2 || oldbound.type == 4)
        {
            F32 halfX = 0.5f * (oldbound.box.box.upper.x - oldbound.box.box.lower.x);
            F32 halfZ = 0.5f * (oldbound.box.box.upper.z - oldbound.box.box.lower.z);
            if (halfX < halfZ)
            {
                halfZ = halfX;
            }
            ent->bound.sph.r = halfZ;
            ent->bound.sph.center.x = 0.5f * (oldbound.box.box.upper.x + oldbound.box.box.lower.x);
            ent->bound.sph.center.y = oldbound.box.box.lower.y + ent->bound.sph.r;
            ent->bound.sph.center.z = 0.5f * (oldbound.box.box.upper.z + oldbound.box.box.lower.z);
            if (oldbound.type == 4)
            {
                xMat4x3Toworld(&ent->bound.sph.center, oldbound.mat, &ent->bound.sph.center);
            }
        }
    }
    ent->bound.type = 1;
    xDrawSphere(&ent->bound.sph, 0xC0006);

    // Adjust bound for stacked entities
    if (thrown->stackTgt != NULL)
    {
        ent->bound.sph.center.y = -(1.5f * ent->bound.sph.r - ent->bound.sph.center.y);
        ent->bound.sph.r *= 0.7f;
    }

    // Begin update
    if (ent->baseType == 0x2B)
    {
        xEntBeginUpdate(ent, sc, 0.0f);
    }
    else
    {
        xEntBeginUpdate(ent, sc, dt);
    }

    // Apply physics with overridden gravity
    F32 oldgrav = globals.sceneCur->gravity;
    globals.sceneCur->gravity = -globals.player.carry.throwGravity;
    xEntApplyPhysics(ent, sc, dt);
    globals.sceneCur->gravity = oldgrav;

    // Stack target tracking
    if (thrown->stackTgt != NULL)
    {
        xEntFrame* frame = ent->frame;
        RwMatrix* tgtMat = thrown->stackTgt->model->Mat;
        if (frame->vel.x * (tgtMat->pos.x - frame->mat.pos.x) +
            frame->vel.z * (tgtMat->pos.z - frame->mat.pos.z) <= 0.0f)
        {
            xVec3 velunit;
            velunit.x = frame->vel.x;
            velunit.y = 0.0f;
            velunit.z = frame->vel.z;
            xVec3Normalize(&velunit, &velunit);

            frame = ent->frame;
            tgtMat = thrown->stackTgt->model->Mat;
            F32 posdot = velunit.x * (tgtMat->pos.x - frame->mat.pos.x) +
                         velunit.z * (tgtMat->pos.z - frame->mat.pos.z);
            if ((posdot * velunit.x + frame->mat.pos.x - tgtMat->pos.x) *
                        (posdot * velunit.x + frame->mat.pos.x - tgtMat->pos.x) +
                    (posdot * velunit.z + frame->mat.pos.z - tgtMat->pos.z) *
                        (posdot * velunit.z + frame->mat.pos.z - tgtMat->pos.z) <
                0.25f)
            {
                frame->mat.pos.x = posdot * velunit.x + frame->mat.pos.x;
                ent->frame->mat.pos.z = posdot * velunit.z + frame->mat.pos.z;
                ent->frame->vel.x = 0.0f;
                ent->frame->vel.z = 0.0f;
            }
            else
            {
                if (frame->vel.x != 0.0f || frame->vel.z != 0.0f)
                {
                    thrown->stackTgt = NULL;
                }
            }
        }
    }

    // Drive update
    if (thrown->drv.driven != NULL)
    {
        xEntDriveUpdate(&thrown->drv, sc, dt, NULL);
    }

    // Save old collision position
    thrown->oldcollpos = *(xVec3*)&ent->frame->mat.pos;

    // Bound update based on entity type
    if (ent->baseType == 0x2F)
    {
        xVec3Init((xVec3*)((U8*)ent + 0x1A0), 0.0f, 0.0f, 0.0f);
        xEntBoulder_RealBUpdate(ent, (xVec3*)&ent->frame->mat.pos);
    }
    else if (ent->bupdate != NULL)
    {
        ent->bupdate(ent, (xVec3*)&ent->frame->mat.pos);
    }
    else
    {
        xEntDefaultBoundUpdate(ent, (xVec3*)&ent->frame->mat.pos);
    }

    // Clear chkby for entities stacking on us
    for (U32 j = 0; j < zThrownCount; j++)
    {
        if (zThrownList[j].stackEnt == ent)
        {
            zThrownList[j].ent->chkby = 0;
        }
        if (zThrownList[j].stackTgt == ent)
        {
            zThrownList[j].ent->chkby = 0;
        }
    }

    // Swept sphere collision
    xSweptSphere sws;
    xVec3 start;
    start.x = (ent->bound.sph.center.x + mat->pos.x) - ent->frame->mat.pos.x;
    start.y = (ent->bound.sph.center.y + mat->pos.y) - ent->frame->mat.pos.y;
    start.z = (ent->bound.sph.center.z + mat->pos.z) - ent->frame->mat.pos.z;
    xSweptSpherePrepare(&sws, &start, &ent->bound.sph.center, ent->bound.sph.r);

    if (0.001f < sws.dist && xSweptSphereToScene(&sws, globals.sceneCur, ent, 0x10))
    {
        F32 lerpdist = 1.5f * ent->bound.sph.r;
        if (sws.dist - sws.curdist < lerpdist)
        {
            lerpdist = sws.dist - sws.curdist;
        }
        F32 lerp = (sws.curdist + lerpdist) / sws.dist;
        ent->frame->mat.pos.x =
            lerp * (ent->frame->mat.pos.x - ent->model->Mat->pos.x) + ent->model->Mat->pos.x;
        ent->frame->mat.pos.y =
            lerp * (ent->frame->mat.pos.y - ent->model->Mat->pos.y) + ent->model->Mat->pos.y;
        ent->frame->mat.pos.z =
            lerp * (ent->frame->mat.pos.z - ent->model->Mat->pos.z) + ent->model->Mat->pos.z;

        if (ent->baseType == 0x2F)
        {
            xVec3Init((xVec3*)((U8*)ent + 0x1A0), 0.0f, 0.0f, 0.0f);
            xEntBoulder_RealBUpdate(ent, (xVec3*)&ent->frame->mat.pos);
        }
        else if (ent->bupdate != NULL)
        {
            ent->bupdate(ent, (xVec3*)&ent->frame->mat.pos);
        }
        else
        {
            xEntDefaultBoundUpdate(ent, (xVec3*)&ent->frame->mat.pos);
        }
    }

    // Entity collision
    xEntCollide(ent, sc, dt);

    // Restore chkby for stacking entities
    for (U32 j = 0; j < zThrownCount; j++)
    {
        if (zThrownList[j].stackEnt == ent)
        {
            zThrownList[j].ent->chkby = 0x18;
        }
        if (zThrownList[j].stackTgt == ent)
        {
            zThrownList[j].ent->chkby = 0x18;
        }
    }

    // Check collision flags
    if (ent->collis->colls[0].flags & k_HIT_IT)
    {
        thrown->stackTgt = NULL;
    }

    // End update
    xEntEndUpdate(ent, sc, dt);

    // Collision response - sound and surface handling
    if (thrown->stats->collCB != NULL &&
        (collis.stat_eidx > collis.stat_sidx ||
         collis.dyn_eidx > collis.dyn_sidx ||
         collis.env_eidx > collis.env_sidx ||
         collis.npc_eidx > collis.npc_sidx))
    {
        if (sSNDLandTimer == 0.0f)
        {
            xSndPlay3D(xStrHash("Tfruit_land4"), 0, 0, 0, 0, ent, 0.0f, 0.0f, 0, 1.0f);
        }
        sSNDLandTimer = 0.1f;

        // Platform surface check
        if (ent->baseType == 0x2B)
        {
            xCollis* coll = collis.colls + collis.stat_sidx;
            xCollis* cend = collis.colls + collis.stat_eidx;
            for (; coll < cend; coll++)
            {
                if ((coll->flags & k_HIT_IT))
                {
                    xSurface* surf = zSurfaceGetSurface(coll);
                    if (surf != NULL && surf->state == 0 && surf->moprops != NULL)
                    {
                        zSurfaceProps* prop = (zSurfaceProps*)surf->moprops;
                        if (prop->asset != NULL && *((U8*)prop->asset + 8) != 0)
                        {
                            typedef void (*PlatDamageFunc)(xEnt*, U32, void*, void*);
                            PlatDamageFunc fn = ((PlatDamageFunc**)ent)[0x1B8 / 4][0x80 / 4];
                            fn(ent, 0x0E, NULL, NULL);
                        }
                    }
                }
            }
        }

        // Call collision callback
        F32 friction = 0.0f;
        F32 bounce = 0.0f;
        F32 dothdng = 0.0f;
        thrown->stats->collCB(thrown, &collis, &bounce, &friction);

        if (bounce == 0.0f && friction == 0.0f)
        {
            removethis = TRUE;
            if (ent->baseType == 0x2F)
            {
                xVec3Init((xVec3*)((U8*)ent + 0x1A0), 0.0f, 0.0f, 0.0f);
            }
            else
            {
                ent->frame->vel.x = 0.0f;
                ent->frame->vel.y = 0.0f;
                ent->frame->vel.z = 0.0f;
            }
        }
        else
        {
            // Apply bounce/friction to velocity using collision normal
            for (S32 ci = 0; ci < 18; ci++)
            {
                if (collis.colls[ci].flags & k_HIT_IT)
                {
                    F32 vx = thrown->vel.x;
                    F32 vy = thrown->vel.y;
                    F32 vz = thrown->vel.z;
                    dothdng = -collis.colls[ci].norm.x * vx +
                              -collis.colls[ci].norm.y * vy +
                              -collis.colls[ci].norm.z * vz;
                    F32 nx = -collis.colls[ci].norm.x * dothdng;
                    F32 ny = -collis.colls[ci].norm.y * dothdng;
                    F32 nz = -collis.colls[ci].norm.z * dothdng;
                    ent->frame->vel.x =
                        vx - (1.0f + bounce) * nx - (1.0f - friction) * (vx - nx);
                    ent->frame->vel.y =
                        vy - (1.0f + bounce) * ny - (1.0f - friction) * (vy - ny);
                    ent->frame->vel.z =
                        vz - (1.0f + bounce) * nz - (1.0f - friction) * (vz - nz);
                    break;
                }
            }
        }
    }

    // Update thrown velocity from frame
    thrown->vel = ent->frame->vel;

    // Restore entity state
    ent->collis = oldcollis;
    ent->pflags = oldpflags;
    ent->collType = oldcollType;
    ent->bupdate = old_bupdateFunc;

    // Restore bound
    if (oldbound.type != 3)
    {
        if (oldbound.type == 1)
        {
            if (thrown->stackTgt != NULL)
            {
                ent->bound.sph.r = oldbound.sph.r;
                ent->bound.sph.center.y = 1.5f * oldbound.sph.r + ent->bound.sph.center.y;
            }
        }
        else if (oldbound.type == 2)
        {
            ent->bound.type = 2;
            F32 halfX = 0.5f * (oldbound.box.box.upper.x - oldbound.box.box.lower.x);
            F32 heightY = oldbound.box.box.upper.y - oldbound.box.box.lower.y;
            F32 halfZ = 0.5f * (oldbound.box.box.upper.z - oldbound.box.box.lower.z);
            F32 sphR = ent->bound.sph.r;
            F32 heightYdiff = heightY - sphR;

            xVec3 tempCenter;
            tempCenter = ent->bound.sph.center;

            ent->bound.box.box.lower.x = tempCenter.x - halfX;
            ent->bound.box.box.lower.y = tempCenter.y - sphR;
            ent->bound.box.box.lower.z = tempCenter.z - halfZ;
            ent->bound.box.box.upper.x = tempCenter.x + halfX;
            ent->bound.box.box.upper.y = tempCenter.y + heightYdiff;
            ent->bound.box.box.upper.z = tempCenter.z + halfZ;
            ent->bound.box.center.x =
                0.5f * (ent->bound.box.box.lower.x + ent->bound.box.box.upper.x);
            ent->bound.box.center.y =
                0.5f * (ent->bound.box.box.lower.y + ent->bound.box.box.upper.y);
            ent->bound.box.center.z =
                0.5f * (ent->bound.box.box.lower.z + ent->bound.box.box.upper.z);
        }
        else if (oldbound.type == 4)
        {
            ent->bound.type = oldbound.type;
            ent->bound.box = oldbound.box;
            ent->bound.mat = oldbound.mat;
        }
    }

    // Compute translation delta
    stackDelta.x += ent->model->Mat->pos.x;
    stackDelta.y += ent->model->Mat->pos.y;
    stackDelta.z += ent->model->Mat->pos.z;
    Recurse_TranslateStack(ent, &stackDelta);

    // Kill timer
    if (thrown->killTimer != 0.0f)
    {
        thrown->killTimer -= dt;
        if (thrown->killTimer < 0.0f)
        {
            thrown->killTimer = 0.0f;
            zFruit_ColorFade(thrown);

            ent->update = zFruit_Update;

            if (globals.player.carry.grabbed == ent)
            {
                globals.player.carry.grabbed = NULL;
                gReticleTarget = NULL;
            }
            if (gReticleTarget == ent)
            {
                gReticleTarget = NULL;
            }

            zShrapnelAsset* shrap = thrown->stats->shrapAsset;
            if (shrap != NULL && shrap->initCB != NULL)
            {
                shrap->initCB(shrap, ent->model, NULL, NULL);
            }

            xEntReset(ent);
            zEntEvent(ent, 0x55);

            ent->model->Scale.x = -1.0f;
            ent->model->Scale.y = -1.0f;
            ent->model->Scale.z = -1.0f;
            ent->chkby &= ~0x10;
            ent->baseFlags &= ~0x10;

            for (U32 j = 0; j < zThrownCount; j++)
            {
                if (zThrownList[j].stackEnt == ent)
                {
                    zThrownList[j].stackEnt = NULL;
                    zThrownList[j].ent->update = zThrown_Update;
                }
                if (zThrownList[j].stackTgt == ent)
                {
                    zThrownList[j].stackTgt = NULL;
                }
            }
            return;
        }
        zFruit_ColorFade(thrown);
    }

    checkAgainstButtons(ent);
    zFX_SpawnBubbleTrail((xVec3*)&ent->model->Mat->pos, 1);

    // Final bound update
    if (ent->bupdate != NULL)
    {
        ent->bupdate(ent, (xVec3*)&ent->model->Mat->pos);
    }
    else
    {
        xEntDefaultBoundUpdate(ent, (xVec3*)&ent->model->Mat->pos);
    }

    // Drive mount/dismount logic
    xCollis* fcoll = &collis.colls[0];
    if (thrown->drv.driven == NULL)
    {
        if ((fcoll->flags & k_HIT_IT) == 0 ||
            fcoll->optr == NULL ||
            (xEnt*)fcoll->optr != thrown->driveLastFloor ||
            ((xEnt*)fcoll->optr)->frame == NULL ||
            thrown->vel.y > 0.0f)
        {
            thrown->driveDebounce = 0;
        }
        else
        {
            thrown->driveDebounce++;
            if (thrown->driveDebounce > 2)
            {
                xEntDriveMount(&thrown->drv, (xEnt*)fcoll->optr, 0.7f, NULL);
            }
        }
    }
    else
    {
        if ((fcoll->flags & k_HIT_IT) == 0 ||
            (xEnt*)fcoll->optr != thrown->drv.driven)
        {
            thrown->driveDebounce++;
            if (thrown->driveDebounce > 4)
            {
                xEntDriveDismount(&thrown->drv, 1.0f);
            }
        }
        else
        {
            thrown->driveDebounce = 0;
        }
    }
    thrown->driveLastFloor = (xEnt*)fcoll->optr;

    // Sound timer
    if (sSNDLandTimer != 0.0f)
    {
        sSNDLandTimer -= dt;
        if (sSNDLandTimer < 0.0f)
        {
            sSNDLandTimer = 0.0f;
        }
    }

    // If removethis, handle removal or transition to fruit update
    if (removethis)
    {
        if (thrown->stats->carry == &c_fruit)
        {
            if (thrown->stackEnt != NULL)
            {
                ent->update = zFruit_Update;
            }
        }
        else
        {
            zThrown_Remove(ent);
        }
    }
}
extern xEnt* gReticleTarget;
void xEntReset(xEnt*);
void xEntBeginUpdate(xEnt*, xScene*, F32);
void xEntEndUpdate(xEnt*, xScene*, F32);
F32 xVec3Dist(const xVec3*, const xVec3*);

static void zFruit_Update(xEnt* ent, xScene* sc, F32 dt)
{
    if (ent->model->Scale.x == 0.0f)
    {
        // Idle state - just update color
    }
    else if (ent->model->Scale.x == -1.0f)
    {
        // Expired - check distance to player for cleanup
        F32 dist = xVec3Dist((xVec3*)&ent->model->Mat->pos,
                             (xVec3*)&globals.player.ent.model->Mat->pos);
        if (dist < 10.0f)
        {
            xEntBeginUpdate(ent, sc, dt);
            xEntEndUpdate(ent, sc, dt);
        }
        return;
    }
    else
    {
        // Growing/shrinking
        ent->chkby |= 0x10;
        ent->model->Scale.x += dt / 0.5f;
        ent->model->Scale.y = ent->model->Scale.x;
        ent->model->Scale.z = ent->model->Scale.x;

        if (ent->model->Scale.x >= 1.0f)
        {
            ent->model->Scale.x = 0.0f;
            zThrown_Remove(ent);
            xEntBeginUpdate(ent, sc, dt);
            xEntEndUpdate(ent, sc, dt);
            return;
        }
    }

    // Find our thrown entry
    U32 i;
    zThrownStruct* thrown = NULL;
    for (i = 0; i < zThrownCount; i++)
    {
        if (ent == zThrownList[i].ent)
        {
            thrown = &zThrownList[i];
            break;
        }
    }

    xEntBeginUpdate(ent, sc, dt);
    xEntEndUpdate(ent, sc, dt);

    if (thrown->killTimer == 0.0f)
    {
        goto done;
    }

    thrown->killTimer -= dt;
    if (thrown->killTimer <= 0.0f)
    {
        thrown->killTimer = 0.0f;
    }
    else
    {
        goto color_fade;
    }

    zFruit_ColorFade(thrown);

    // Clear grab target if it's us
    if (globals.player.carry.grabbed == ent)
    {
        globals.player.carry.grabbed = NULL;
        gReticleTarget = NULL;
    }
    if (gReticleTarget == ent)
    {
        gReticleTarget = NULL;
    }

    // Call shrapnel init if exists
    {
        zShrapnelAsset* shrap = thrown->stats->shrapAsset;
        if (shrap != NULL && shrap->initCB != NULL)
        {
            shrap->initCB(shrap, ent->model, NULL, NULL);
        }
    }

    xEntReset(ent);
    zEntEvent(ent, 0x55);

    // Set to expired state
    ent->model->Scale.x = -1.0f;
    ent->model->Scale.y = -1.0f;
    ent->model->Scale.z = -1.0f;
    ent->chkby &= ~0x10;
    ent->baseFlags &= ~0x10;

    // Clear references to this entity in all thrown entries
    for (i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].stackEnt == ent)
        {
            zThrownList[i].stackEnt = NULL;
            zThrownList[i].ent->update = zThrown_Update;
        }
        if (zThrownList[i].stackTgt == ent)
        {
            zThrownList[i].stackTgt = NULL;
        }
    }
    goto done;

color_fade:
    zFruit_ColorFade(thrown);
done:
    return;
}

void zThrown_AddFruit(xEnt* ent)
{
    for (U32 i = 0; i < zThrownCount; i++)
    {
        if (zThrownList[i].ent == ent)
        {
            zThrownStruct* thrown = &zThrownList[i];
            thrown->stackEnt = NULL;
            thrown->stackTgt = NULL;
            ent->update = zFruit_Update;
            ent->baseFlags |= 0x80;
            if (thrown->drv.driven != NULL)
            {
                xEntDriveDismount(&thrown->drv, 1.0f);
                thrown = &zThrownList[i];
                thrown->driveDebounce = 0;
                thrown->driveLastFloor = NULL;
            }
            return;
        }
    }

    ThrowableStats* stats = &zThrowableModels[1];
    while (stats->name != NULL)
    {
        if (stats->nameHash == ent->asset->modelInfoID ||
            stats->nameHashMINF == ent->asset->modelInfoID)
        {
            break;
        }
        stats++;
    }

    if (stats->name == NULL)
    {
        return;
    }
    if (stats->carry != &c_fruit)
    {
        return;
    }

    zThrownStruct* newThrown = &zThrownList[zThrownCount];
    zThrownCount++;

    newThrown->killTimer = stats->carry->killTimer;
    newThrown->stats = stats;
    newThrown->oldupdate = ent->update;
    newThrown->ent = ent;
    newThrown->stackEnt = NULL;
    newThrown->stackTgt = NULL;
    newThrown->oldRecShadow = ent->baseFlags & 0x10;
    ent->update = zFruit_Update;
    ent->baseFlags |= 0x80;
    zThrown_AddTempFrame(newThrown);
    xEntDriveInit(&newThrown->drv, ent);
    newThrown->driveDebounce = 0;
    newThrown->driveLastFloor = NULL;
}

S32 zThrown_LaunchPos(xEnt* ent, xVec3* pos, xVec3* dir)
{
    ThrowableStats* stats = &zThrowableModels[1];
    while (stats->name != NULL)
    {
        if (stats->nameHash == ent->asset->modelInfoID ||
            stats->nameHashMINF == ent->asset->modelInfoID)
        {
            break;
        }
        stats++;
    }

    if (stats->name == NULL)
    {
        stats = &zThrowableModels[0];
    }

    F32 grav = globals.player.carry.throwGravity;
    F32 tpeak = stats->launch->throwSpeedY / grav;

    F32 hpeak;
    if (ent->baseType == 0x2F)
    {
        hpeak = stats->launch->throwSpeedY * tpeak +
                ent->bound.sph.center.y - ent->bound.sph.r -
                tpeak * (0.5f * grav * tpeak);
    }
    else
    {
        hpeak = stats->launch->throwSpeedY * tpeak +
                ent->model->Mat->pos.y -
                tpeak * (0.5f * grav * tpeak);
    }

    if (hpeak < 0.5f + pos->y)
    {
        xVec3 tempVel;
        tempVel.x = stats->launch->throwSpeedXZ * dir->x;
        tempVel.y = stats->launch->throwSpeedY;
        tempVel.z = stats->launch->throwSpeedXZ * dir->z;
        zThrown_LaunchVel(ent, &tempVel);
        return 0;
    }

    F32 hdiff = hpeak - pos->y;
    F32 fallTime = xsqrt(2.0f * hdiff / grav);

    F32 dx = ent->model->Mat->pos.x - pos->x;
    F32 dz = ent->model->Mat->pos.z - pos->z;
    F32 dist = xsqrt(dx * dx + dz * dz);

    F32 speed = dist / (fallTime + tpeak);

    xVec3 tempVel;
    tempVel.x = speed * dir->x;
    tempVel.y = stats->launch->throwSpeedY;
    tempVel.z = speed * dir->z;

    zThrown_LaunchVel(ent, &tempVel);
    return 1;
}

void zThrown_LaunchStack(xEnt* ent, xEnt* tgt)
{
    xVec3 stackPos;
    xBox tmpbox;

    stackPos.x = tgt->model->Mat->pos.x;

    switch (tgt->bound.type)
    {
    case 1: // sphere
        stackPos.y = tgt->bound.sph.center.y + tgt->bound.sph.r;
        break;
    case 2: // box
        stackPos.y = tgt->bound.box.box.upper.y;
        break;
    case 3:
    case 4: // OBB
        xBoxInitBoundOBB(&tmpbox, &tgt->bound.box.box, tgt->bound.mat);
        stackPos.y = tmpbox.upper.y;
        break;
    default:
        stackPos.y = tgt->model->Mat->pos.y;
        break;
    }

    stackPos.y += 0.2f;
    stackPos.z = tgt->model->Mat->pos.z;

    xVec3 stackDir;
    stackDir.x = stackPos.x - ent->model->Mat->pos.x;
    stackDir.y = 0.0f;
    stackDir.z = stackPos.z - ent->model->Mat->pos.z;
    xVec3Normalize(&stackDir, &stackDir);

    if (zThrown_LaunchPos(ent, &stackPos, &stackDir))
    {
        for (U32 i = 0; i < zThrownCount; i++)
        {
            if (ent == zThrownList[i].ent)
            {
                zThrownList[i].stackTgt = tgt;
                break;
            }
        }
    }
}

void zThrown_LaunchVel(xEnt* ent, xVec3* vel)
{
    ThrowableStats* stats = &zThrowableModels[1];
    while (stats->name != NULL)
    {
        if (stats->nameHash == ent->asset->modelInfoID ||
            stats->nameHashMINF == ent->asset->modelInfoID)
        {
            break;
        }
        stats++;
    }

    if (stats->name == NULL)
    {
        stats = &zThrowableModels[0];
    }

    zThrownStruct* newThrown = NULL;

    if (ent->update == zFruit_Update)
    {
        for (U32 i = 0; i < zThrownCount; i++)
        {
            if (zThrownList[i].ent == ent)
            {
                newThrown = &zThrownList[i];
                break;
            }
        }
    }
    else
    {
        zThrown_Remove(ent);
    }

    if (newThrown == NULL)
    {
        newThrown = &zThrownList[zThrownCount];
        zThrownCount++;
    }

    newThrown->killTimer = stats->carry->killTimer;
    newThrown->stats = stats;
    newThrown->oldupdate = ent->update;
    newThrown->ent = ent;
    newThrown->stackEnt = NULL;
    newThrown->stackTgt = NULL;
    newThrown->patLauncher = NULL;
    newThrown->oldRecShadow = ent->baseFlags & 0x10;
    xEntDriveInit(&newThrown->drv, ent);
    newThrown->driveDebounce = 0;
    newThrown->driveLastFloor = NULL;
    newThrown->vel = *vel;
    newThrown->collResetTimer = stats->launch->collResetTimer;
    ent->update = zThrown_Update;
    ent->baseFlags |= 0x80;
    zThrown_AddTempFrame(newThrown);
}

void zThrown_LaunchDir(xEnt* ent, xVec3* dir)
{
    globals.player.carry.throwTarget = NULL;

    ThrowableStats* stats = &zThrowableModels[1];
    while (stats->name != NULL)
    {
        if (stats->nameHash == ent->asset->modelInfoID ||
            stats->nameHashMINF == ent->asset->modelInfoID)
        {
            break;
        }
        stats++;
    }

    if (stats->name == NULL)
    {
        stats = &zThrowableModels[0];
    }

    xVec3 tempVel;
    tempVel.x = stats->launch->throwSpeedXZ * dir->x;
    tempVel.y = stats->launch->throwSpeedY;
    tempVel.z = stats->launch->throwSpeedXZ * dir->z;
    zThrown_LaunchVel(ent, &tempVel);
}

void zThrown_Reset()
{
    for (U32 i = 0; i < zThrownCount; i++)
    {
        zThrownList[i].ent->update = zThrownList[i].oldupdate;

        zThrownList[i].ent->baseFlags &= ~0x80;

        if (zThrownList[i].ent->frame == &zThrownList[i].frame)
        {
            zThrownList[i].ent->frame = NULL;
        }

        xModelInstance* mod = zThrownList[i].ent->model;
        mod->BlueMultiplier = 0.0f;
        mod->GreenMultiplier = 0.0f;
        mod->RedMultiplier = 0.0f;

        zThrownList[i].ent->chkby |= 0x10;

        zThrownList[i].ent->baseFlags |= (U16)zThrownList[i].oldRecShadow;
    }
    zThrownCount = 0;
}

xBase* zThrown_ButtonIteratorCB(xBase* base, zScene* sc, void* data)
{
    xCollis collis;
    collis.flags = 0;
    xSphereHitsModel((xSphere*)data, ((xEnt*)base)->model, &collis);
    if (collis.flags & k_HIT_IT)
    {
        zEntButton_Hold((_zEntButton*)base, 0x10000);
    }
    return base;
}

void xDrawSphere(const xSphere*, U32)
{
}
