
#include "zNPCTypeBossSB2.h"
#include <types.h>
#include "string.h"
#include "iModel.h"
#include "xCollide.h"
#include "xMath.h"
#include "xMath3.h"
#include "xstransvc.h"
#include "xSnd.h"
#include "xVec3.h"

#include "zCamera.h"
#include "zEntSimpleObj.h"
#include "zEntDestructObj.h"
#include "zGlobals.h"
#include "zGrid.h"
#include "zNPCTypeBossPatrick.h"
#include "zRenderState.h"
#include "zNPCGoals.h"
#include "zLightning.h"
#include "zNPCTypeRobot.h"
#include <xMathInlines.h>

#define ANIM_Unknown 0 //0x0
#define ANIM_Idle01 1 // 0x4
#define ANIM_Idle02 2 // 0x8
#define ANIM_Taunt01 3 // 0xC
#define ANIM_Hit01 7 //0x1c
#define ANIM_Hit02 8 //0x20
#define ANIM_Dizzy01 10 //0x28
#define ANIM_SmashHitLeft 46
#define ANIM_SmashHitRight 47
#define ANIM_SmackLeft01 48
#define ANIM_SmackRight01 49
#define ANIM_ChopLeftBegin 50
#define ANIM_ChopLeftLoop 51
#define ANIM_ChopLeftEnd 52
#define ANIM_ChopRightBegin 53
#define ANIM_ChopRightLoop 54
#define ANIM_ChopRightEnd 55
#define ANIM_SwipeLeftBegin 56
#define ANIM_SwipeLeftLoop 57
#define ANIM_SwipeLeftEnd 58
#define ANIM_SwipeRightBegin 59
#define ANIM_SwipeRightLoop 60
#define ANIM_SwipeRightEnd 61
#define ANIM_ReturnIdle01 62
#define ANIM_KarateStart 63
#define ANIM_KarateLoop 64
#define ANIM_KarateEnd 65

xAnimTable* ZNPC_AnimTable_BossSB2()
{
    // clang-format off
    // S32 anim_list[27] = {

    // ANIM_Idle01,
    // ANIM_Idle02,
    // ANIM_Taunt01,
    // ANIM_Hit01,
    // ANIM_Hit02,
    // ANIM_SmashHitLeft,
    // ANIM_SmashHitRight,
    // ANIM_SmackLeft01,
    // ANIM_SmackRight01,
    // ANIM_ChopLeftBegin,
    // ANIM_ChopLeftLoop,
    // ANIM_ChopLeftEnd,
    // ANIM_ChopRightBegin,             No longer needed?
    // ANIM_ChopRightLoop,              Was used instead of "ANIM_xxxxx;" right before new state
    // ANIM_ChopRightEnd,               
    // ANIM_SwipeLeftBegin,
    // ANIM_SwipeLeftLoop,
    // ANIM_SwipeLeftEnd,
    // ANIM_SwipeRightBegin,
    // ANIM_SwipeRightLoop,
    // ANIM_SwipeRightEnd,
    // ANIM_ReturnIdle01,
    // ANIM_KarateStart,
    // ANIM_KarateLoop,
    // ANIM_KarateEnd,
    // ANIM_Dizzy01,  
    // };
    

    xAnimTable* table = xAnimTableNew("zNPCB_SB2_Karate", NULL, 0);
    //24 new state
    //15  new transition
    ANIM_Idle01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Idle01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_Idle02;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Idle02], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_Taunt01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Taunt01], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SmackLeft01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SmackLeft01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SmackRight01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SmackRight01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopLeftBegin;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopLeftLoop;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftLoop], 0, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopLeftEnd;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopLeftEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopRightBegin;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopRightLoop;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightLoop], 0, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ChopRightEnd;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ChopRightEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeLeftBegin;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftBegin], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeLeftLoop;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeLeftEnd;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeLeftEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeRightBegin;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightBegin], 0x20, 0, 1, NULL, NULL, 0,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeRightLoop;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_SwipeRightEnd;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_SwipeRightEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_Dizzy01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Dizzy01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_Hit01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Hit01], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_Hit02;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_Hit02], 0, 0, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_ReturnIdle01;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_ReturnIdle01], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_KarateStart;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateStart], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_KarateLoop;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateLoop], 0x10, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    ANIM_KarateEnd;
    xAnimTableNewState(table, g_strz_bossanim[ANIM_KarateEnd], 0x20, 0, 1, NULL, NULL, 0, NULL,
                       NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, 0, 1, 0.2);

    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SmackLeft01], g_strz_bossanim[ANIM_Dizzy01],
                            0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SmackRight01],
                            g_strz_bossanim[ANIM_Dizzy01], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ReturnIdle01], g_strz_bossanim[ANIM_Idle01],
                            0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_KarateStart],
                            g_strz_bossanim[ANIM_KarateLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_KarateEnd], g_strz_bossanim[ANIM_Idle01], 0,
                            0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopLeftBegin],
                            g_strz_bossanim[ANIM_ChopLeftLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopLeftLoop],
                            g_strz_bossanim[ANIM_ChopLeftEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopRightBegin],
                            g_strz_bossanim[ANIM_ChopRightLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_ChopRightLoop],
                            g_strz_bossanim[ANIM_ChopRightEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeLeftBegin],
                            g_strz_bossanim[ANIM_SwipeLeftLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeLeftLoop],
                            g_strz_bossanim[ANIM_SwipeLeftEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeRightBegin],
                            g_strz_bossanim[ANIM_SwipeRightLoop], 0, 0, 0x10, 0, 0, 0, 0, 0, 0.1,
                            0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_SwipeRightLoop],
                            g_strz_bossanim[ANIM_SwipeRightEnd], 0, 0, 0, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_Hit01], g_strz_bossanim[ANIM_Idle01], 0, 0,
                            0x10, 0, 0, 0, 0, 0, 0.1, 0);
    xAnimTableNewTransition(table, g_strz_bossanim[ANIM_Hit02], g_strz_bossanim[ANIM_Dizzy01], 0, 0,
                            0x10, 0, 0, 0, 0, 0, 0.1, 0);

    return table;
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

void zNPCB_SB2::render_debug()
{
}

void zNPCB_SB2::decompose()
{
}

void zNPCB_SB2::HoldUpDude()
{
}

S32 zNPCGoalBossSB2Death::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}
