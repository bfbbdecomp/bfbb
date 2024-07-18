#include <types.h>

#include "xMath3.h"
#include "xVec3.h"

#include "zNPCTypeBossPatrick.h"

#define f831 1.0f
#define f832 0.0f
#define f833 0.2f
#define f870 -1.0f
#define f891 2.0f
#define f892 -0.4f
#define f1045 0.125f
#define f1046 0.5f
#define f1047 0.7f
#define f1048 8.0f
#define f1049 5.0f
#define f1050 2.5f
#define f1051 3.0f
#define f1052 4.2f
#define f1053 12.0f
#define f1054 6.0f
#define f1055 10.0f
#define f1056 50.0f
#define f1137 5.5f
#define f1138 6.5f
#define f1139 0.365f
#define f1140 3.1415927f
#define f1141 20.0f
#define f1142 15.0f
#define f1143 -1000000000.0f
#define f1144 1000000000.0f
#define f1656 0.0001f
#define f1657 400.0f
#define f1658 0.5775f
#define f1659 40.0f
#define f1660 -2.01f
#define f1661 0.175f
#define f1662 0.025f
#define f1663 1.25f
#define f1664 0.25f
#define f1665 80.0f
#define f1666 6.2831855f
#define f1667 3.15f
#define f1668 0.00001f
#define f1669 0.1f
#define f1670 4.0f
#define f1671 0.77f
#define f1672 0.3f
#define f1673 1.5707964f
#define f1674 0.15f
#define f1675 0.65f
#define f1676 0.75f
#define f1677 0.01f
#define f1678 0.33f
#define f1679 18.5f
#define f1680 -18.5f
#define f1681 -20.0f
#define f1682 7.0f
#define f2006 100.0f
#define f2077 5.95f
#define f2078 0.539f
#define f2215 8.5f
#define f2256 0.50049996f
#define f2257 0.45f
#define f2280 1.7f
#define f2405 -3.1415927f
#define f2423 0.4f
#define f2424 0.8f
#define f2425 1.2f
#define f2426 1.5f
#define f2427 1.8f
#define f2428 2.1f
#define f2512 0.35f
#define f2596 -0.08f
#define f2597 25.0f
#define f2610 0.6545f
#define f2629 0.7853982f
#define f2630 1.75f
#define f2696 -4.0f
#define f2697 300.0f
#define f2885 12.5f
#define f2994 7.5f

static unsigned char sUseBossCam;
static unsigned char sWasUsingBossCam;
static unsigned char sOthersHaventBeenAdded;
static zNPCBPatrick* sPat_Ptr;
static xVec3* sCamSubTarget;
static F32 sSecsSincePatWasCarryingHead;
static xVec3 sCamSubTargetFixed;
static F32 sCurrYaw;
static F32 sCurrHeight;
static F32 sCurrRadius;
static F32 sCurrPitch;
static F32 sCurrYawOffset;
static F32 sCurrCamInterp;
static F32 minYVel;
static F32 varYVel;
static F32 minHMul;
static F32 varHMul;
static F32 minT;
static F32 varT;
static S32 sBone[10];
static S32 sBoundBone[4];
static F32 sBoundRadius[4];
static xVec3 sBoneOffset[4];
static newsfishSound sNFComment[37];
static U32 sCurrNFSound;
static tweak_callback newsfish_cb;
static tweak_callback recenter_cb;

void test(S32)
{
}

void zNPCBPatrick::Init(xEntAsset* asset)
{
    /*
        signed int i; // r20
        class xEnt * ent; // r19
        class RwTexture * tempTexture; // r2
    */
}

void on_change_newsfish(const tweak_info&)
{
}

void on_change_recenter(const tweak_info&)
{
    sPat_Ptr->bossFlags |= 0x200;
}

void zNPCBPatrick::Setup()
{
    /*
        char tempString[32]; // r29+0xA0
        signed int i; // r18
        signed int j; // r20
        class RpAtomic * tempIModel; // r2
        class xMarkerAsset * marker; // r2
        char objName[32]; // r29+0x80
    */
}

void zNPCBPatrick::SelfSetup()
{
    /*
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r16
        class xGoal * goal; // r2
    */
}

void zNPCBPatrick::Reset()
{
    /*
        signed int i; // r5
        class bossPatBox * bx; // r2
    */

    for (S32 i = 0; i < 0x2f; i++)
    {
        this->glob[i].flags = 0;
    }
}

void zNPCBPatrick::Destroy()
{
    if (this->frozenSB)
    {
        xModelInstanceFree(this->frozenSB);
        this->frozenSB = NULL;
    }

    if (this->frozenSBIce)
    {
        xModelInstanceFree(this->frozenSBIce);
        this->frozenSBIce = NULL;
    }

    zNPCCommon::Destroy();
}

U32 zNPCBPatrick::AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
}

void zNPCBPatrick::Process(xScene* xscn, F32 dt)
{
    /*
        signed int i; // r5
        signed int j; // r21
        signed int csn; // r17
        float fudgeRate; // r1
        float * swingY; // r4
        signed int shouldPlayIt; // r3
        float finalHeight; // r2
        class xModelInstance * tempModel; // r19
        float maxDist; // r28
        float numSnowflakes; // r27
        float currSize; // r26
        class xVec3 snowDir; // r29+0x170
        class xVec3 snowPos; // r29+0x160
        signed int numSamples; // r20
        float interp; // r25
        signed int numToEmit; // r19
        float theta; // r21
        float moveSplat; // r20
        float timeTillEnd; // r1
        class xCollis colls; // r29+0xF0
        unsigned int doDamage; // r20
        class xVec3 knockback; // r29+0x150
        signed int touchDamage; // r19
        class xCollis * coll; // r6
        class xCollis * cend; // r5
        class xVec3 bubbleVel; // r29+0x140
        unsigned int picker; // r2
        signed int num; // r17
    */
}

void zNPCBPatrick::DuploNotice(en_SM_NOTICES note, void* data)
{
    /*
        class zNPCCommon * npc; // r2
        signed int i; // r5
    */
}

void zNPCBPatrick::Damage(en_NPC_DAMAGE_TYPE dmg_type, xBase* who, const xVec3* vec_hit)
{
    /*
        class xVec3 toHit; // r29+0x20
    */
}

void zNPCBPatrick_GameIsPaused(zScene* scn)
{
    if (sPat_Ptr && sPat_Ptr->bossFlags & 0x100)
    {
        sPat_Ptr->bossFlags &= 0xfffffeff;
        sPat_Ptr->hiddenByCutscene();
    }
}

void zNPCBPatrick::RenderGlobs()
{
    /*
        class xMat4x3 globMat; // r29+0xB0
        signed int i; // r29+0xA0
    */
}

void zNPCBPatrick::RenderFrozenPlayer()
{
    /*
        class xMat4x3 globMat; // r29+0xB0
        signed int i; // r20
    */
}

void zNPCBPatrick::RenderExtra()
{
    // enum _SDRenderState oldState; // r16
}

void zNPCBPatrick::NewTime(xScene* xscn, F32 dt)
{
    // signed int i; // r20
}

S32 zNPCBPatrick::nextGoal()
{
    // signed int nextgoal; // r16
}

// return type probably wrong
// not in PS2 dwarf
void zNPCBPatrick::getNextFreeGlob()
{
}

void zNPCBPatrick::playSplat(xVec3* pos)
{
    // float picker; // r2
}

U32 zNPCBPatrick::canSpawnChucks()
{
    /*
        unsigned int result; // r2
        signed int i; // r5
    */
}

void zNPCBPatrick::gotoRound(S32 num)
{
}

// return type probably wrong. not in PS2 dwarf
void zNPCBPatrick::ConveyorTimeLeft(zPlatform* platform, xVec3* vec_unk)
{
}

void zNPCBPatrick::ParabolaHitsConveyors(xParabola* path, xCollis* colls)
{
    /*
        signed int i; // r13
        signed int j; // r12
        class xMat4x3 * mat; // r11
        class xVec3 * lower; // r10
        class xVec3 * upper; // r9
        float a; // r10
        float b; // r9
        float det; // r4
        float t[2]; // r29+0x18
        float dispX; // r11
        float dispZ; // r8
    */
}

// return type probably wrong. not in PS2 dwarf
void zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox* bx)
{
}

void zNPCBPatrick::bossPatBoxUpdate(bossPatBox* bx, F32 dt)
{
}

void zNPCBPatrick::hiddenByCutscene()
{
    /*
        signed int i; // r17
        class bossPatBox * bx; // r2
        class bossPatBox * bx; // r2
    */
}

void zNPCBPatrick_AddBoundEntsToGrid(zScene* scn)
{
    /*
        signed int i; // r17
        class xEnt * ent; // r18
    */
}

static void Pat_ResetGlobalStuff()
{
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

WEAK void xDebugAddTweak(const char*, U32*, U32, U32, const tweak_callback*, void*, U32)
{
}
