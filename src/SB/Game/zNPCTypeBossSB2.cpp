
#include "zNPCTypeBossSB2.h"
#include "xLightKit.h"
#include "zNPCGoalCommon.h"
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

namespace
{
    S32 set_alpha_blend(xModelInstance*)
    {
        return 0; // to-do
    }

    F32 max(float maxFloat1, float maxFloat2) //Temp names till file is further
    {
        if (maxFloat1 > maxFloat2)
        {
            return maxFloat1;
        }
        return maxFloat2;
    }

    S32 tweak()
    {
        return 0; // to-do
    }

    S32 play_sound(int, const xVec3*, float)
    {
        return 0; // to-do
    }

} // namespace

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

void zNPCB_SB2::SelfSetup()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    xPsyche* psy = 0;
    this->psy_instinct = bmgr->Subscribe(this, NULL);
    this->psy_instinct->BrainBegin();
    for (S32 i = NPC_GOAL_BOSSSB2INTRO; i <= NPC_GOAL_BOSSSB2DEATH; i++)
    {
        psy_instinct->AddGoal(i, this);
    }
    psy_instinct->AddGoal(NPC_GOAL_LIMBO, this);
    psy_instinct->BrainEnd();
    psy_instinct->SetSafety(NPC_GOAL_BOSSSB2IDLE);
}

void zNPCB_SB2::Destroy()
{
    zNPCB_SB2::destroy_glow_light();
    zNPCCommon::Destroy();
}


void zNPCB_SB2::render_debug()
{
}

void zNPCB_SB2::decompose()
{
}

void zNPCB_SB2::show_nodes() 
{
    // Haven't found 0x74
    S32 i;
    for (i = 0; i < 9; i++)
    {
        if (nodes->ent != 0){
        xEntShow(nodes->ent);
        }
    }

}

void zNPCB_SB2::ouchie()
{
    xPsyche* psy = psy_instinct;
    S32 tempOuch;
    tempOuch = psy_instinct->GIDOfActive();
    if (tempOuch != NPC_GOAL_BOSSSB2HIT)
    {
        set_vulnerable(false);
        psy_instinct->GoalSet(NPC_GOAL_BOSSSB2HIT, 1);
    }
    
}



void zNPCB_SB2::Render()
{
    xNPCBasic::Render();
    zNPCB_SB2::render_debug();
}

F32 zNPCB_SB2::AttackTimeLeft()
{
    if (flag.dizzy != false)
    {
        return 0.0f;
    }
    return 1e38f;
}

void zNPCB_SB2::HoldUpDude()
{
}

void zNPCB_SB2::ThanksImDone()
{
    flag.dizzy = false;
}

void zNPCB_SB2::reset_speed()
{
    turn.accel = 0;
    turn.max_vel = 0;
}

S32 zNPCB_SB2::player_platform()
{
    return 0; // TODO
}

void zNPCB_SB2::activate_hand(zNPCB_SB2::hand_enum, bool)
{
   hands[0].hurt_player = 1;
   hands[0].hit_platforms = 0x10;
   penby = 0x10;
}

void zNPCB_SB2::deactivate_hand(zNPCB_SB2::hand_enum)
{
   hands[0].hit_platforms = 0;
   hands[0].hurt_player = 0x10;
   penby = 0x10;
}

S32 zNPCB_SB2::player_on_ground() const
{
    return 0;
    // TODO
}

void zNPCB_SB2::abandon_slugs()
{
   
}

void zNPCB_SB2::reset_stage()
{
    stage = -1;
    stage_delay = 0;
}

void zNPCB_SB2::destroy_glow_light()
{
    xLightKit_Destroy(&glow_light.kit);
}

S32 zNPCGoalBossSB2Intro::Enter(float dt, void* updCtxt)
{
    if (owner.said_intro == 0)
    {
        owner.say(0);
        owner.said_intro = 1;
    }
    owner.delay = 0.0f;
    zEntPlayerControlOff(CONTROL_OWNER_BOSS);
    return zNPCGoalCommon::Enter(dt, updCtxt);
    
}

S32 zNPCGoalBossSB2Intro::Exit(float dt, void* updCtxt)
{
    zEntPlayerControlOn(CONTROL_OWNER_BOSS);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Idle::Enter(float dt, void* updCtxt)
{
    transitioning = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Idle::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Taunt::Enter(float dt, void* updCtxt)
{
    ::play_sound(0, &owner.sound_loc.mouth , 1.0f);
    owner.flag.face_player = 1;
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Taunt::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Dizzy::Enter(float dt, void* updCtxt)
{
    sicked = 0;
    owner.flag.face_player = 0;
    owner.delay = 0;
    owner.set_vulnerable(false);
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Dizzy::Exit(float dt, void* updCtxt)
{
    S32 tempDizzy;
    owner.set_vulnerable(true);
    if (sicked != false && owner.player_on_ground() == 0)  //Not compared correctly
    {
        owner.plankton->here_boy();
    }
    if (owner.life == 1)
    {
        owner.say(6);
    }
    else if (owner.flag.dizzy == false)
    {
        owner.say(0xb);
    }
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Hit::Enter(float dt, void* updCtxt) 
{
    // Function needs set up differently
    // im just dumb

    S32 tempHitVar;

    owner.flag.face_player = 1;
    owner.set_vulnerable(false);

    if (owner.flag.dizzy == false) {
    if (owner.life < 4){
        if (owner.life < 2){
            if (owner.life > 0){
                owner.say(9);
            }
        }
        else {
            owner.say(2);
        }
    }
    else {
        owner.say(3);
    }
    }
    else {
    owner.say(4);
    }

return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Hit::Exit(float dt, void* updCtxt)
{
    owner.set_vulnerable(true);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Swipe::Exit(float dt, void* updCtxt)
{
    owner.flag.face_player = true;
    owner.deactivate_hand(owner.active_hand);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Swipe::can_start() const
{
    S32 tempStart;
    tempStart = owner.player_platform();
    return tempStart != 0;
}

S32 zNPCGoalBossSB2Chop::Exit(float dt, void* updCtxt)
{
    owner.deactivate_hand(owner.active_hand);
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Karate::Exit(float dt, void* updCtxt)
{
    owner.abandon_slugs();
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Karate::can_start() const
{
    S32 tempStart;
    tempStart = owner.player_platform();
    return tempStart != 0;
}

S32 zNPCGoalBossSB2Death::Enter(float dt, void* updCtxt)
{
    owner.decompose();
    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB2Death::Exit(float dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB2Death::Process(en_trantype*, F32, void*, xScene*)
{
    return 0;
}

// WEAK

void zNPCB_SB2::choose_hand() //53%
{
    S32 rand;
    rand = xrand() >> 0xd & 1;

}
