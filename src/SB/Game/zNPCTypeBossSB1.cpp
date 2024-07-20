#include <types.h>
#include <string.h>
#include <xDebug.h>

#include "iMath.h"
#include "iModel.h"

#include "xDraw.h"
#include "xMathInlines.h"

#include "zGrid.h"
#include "zNPCGoals.h"
#include "zNPCTypeBossSB1.h"
#include "zThrown.h"
#include "zGlobals.h"

static xVec3 BossArmTags[8] = { //
    { 11.507f, 4.523f, 2.53f },
    {
        11.635f,
        4.113f,
        2.526f,
    },
    {
        11.615f,
        4.49f,
        2.034f,
    },
    {
        11.654f,
        4.172f,
        2.025f,
    },
    {
        -11.507f,
        4.523f,
        2.53f,
    },
    {
        -11.635f,
        4.113f,
        2.526f,
    },
    {
        -11.615f,
        4.49f,
        2.034f,
    },
    {
        -11.654f,
        4.172f,
        2.025f,
    }
};

static xVec3 BossFeetTags[4] = {
    //
    {
        1.188f,
        0.011f,
        -0.154f,
    },
    {
        1.188f,
        0.22f,
        1.509f,
    },
    {
        -1.19f,
        0.011f,
        -0.154f,
    },
    {
        -1.19f,
        0.22f,
        1.509f,
    },
};

static zNPCB_SB1* sSB1_Ptr;
static zEnt* sSB1_armTgtHit;
static U32 sSB1_deflated[2];

// Boss animation string table indices
#define Unknown 0
#define Idle01 1
#define Idle02 2
#define Taunt01 3
#define SmashStart 41
#define SmashLoop 42
#define SmashEnd 43
#define AttackStomp 44
#define AttackRumble 45
#define SmashHitLeft 46
#define SmashHitRight 47

xAnimTable* ZNPC_AnimTable_BossSB1()
{
    // clang-format off
    int ourAnims[11] = {
        Idle01,
        Idle02,
        Taunt01,
        SmashStart,
        SmashLoop,
        SmashEnd,
        AttackStomp,
        AttackRumble,
        SmashHitLeft,
        SmashHitRight,
        Unknown,
    };
    // clang-format on

    xAnimTable* table = xAnimTableNew("zNPCB_SB1_Muscle", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[Idle01], 0x10, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[Idle02], 0, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[Taunt01], 0, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[SmashStart], 0x20, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[SmashLoop], 0x10, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[SmashEnd], 0x20, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[AttackStomp], 0x10, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[AttackRumble], 0x10, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0,
                       0x0, xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[SmashHitLeft], 0, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[SmashHitRight], 0, 0, 1.0f, 0x0, 0x0, 0.0f, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, 0.2f);

    xAnimTableNewTransition(table, g_strz_bossanim[SmashStart], g_strz_bossanim[SmashLoop], 0x0,
                            0x0, 0x10, 0, 0.0f, 0.0f, 0, 0, 0.0f, 0x0);
    xAnimTableNewTransition(table, g_strz_bossanim[SmashEnd], g_strz_bossanim[Idle01], 0x0, 0x0,
                            0x10, 0, 0.0f, 0.0f, 0, 0, 0.0f, 0x0);

    xAnimTransition* t = table->TransitionList;
    while (t)
    {
        t->BlendRecip = 3.3333333f;
        t = t->Next;
    }

    return table;
}

static void SB1Dummy_UpdateFunc(xEnt* ent, xScene* param_2, F32 param_3)
{
    if (ent->frame != NULL)
    {
        xVec3Copy(&ent->frame->oldvel, &ent->frame->vel);
        ent->frame->oldmat = ent->frame->mat;
        xRotCopy(&ent->frame->oldrot, &ent->frame->rot);
        xMat4x3Copy(&ent->frame->mat, xModelGetFrame(ent->model));
        ent->frame->mode = 0;
    }
}

static void SB1Dummy_BoundFunc(xEnt* ent, xVec3* param_2)
{
    xBoundUpdate(&ent->bound);
    zGridUpdateEnt(ent);
}

static void SB1Dummy_RenderFunc(xEnt* ent)
{
    xDrawSphere(&(ent->bound).sph, 0xc0006);
}

static S32 SB1Dummy_TgtEventFunc(xBase* to, xBase* from, U32 toEvent, const F32* param_f,
                                 xBase* param_x)
{
    if (toEvent == 360)
    {
        sSB1_armTgtHit = (zEnt*)from;
    }
    return 1;
}

// 86% match, just some sda2 scheduling issues
static void SB1_ResetGlobalStuff()
{
    sSB1_Ptr->m_subModels[2]->Flags |= 1;
    sSB1_Ptr->m_subModels[3]->Flags |= 1;
    sSB1_Ptr->m_subModels[4]->Flags &= ~1;
    sSB1_Ptr->m_subModels[5]->Flags &= ~1;

    sSB1_Ptr->m_tauntTimer = 0.0f;

    sSB1_deflated[0] = false;
    sSB1_deflated[1] = false;
    sSB1_armTgtHit = NULL;

    memset(sSB1_Ptr->m_stompRing, 0, sizeof(sSB1_Ptr->m_stompRing));

    S32 i;

    for (i = 0; i < 2; i++)
    {
        if (sSB1_Ptr->m_armColl[i])
        {
            sSB1_Ptr->m_armColl[i]->model->Flags = 0x2800;
            sSB1_Ptr->m_armColl[i]->model->Next = NULL;
            sSB1_Ptr->m_armColl[i]->bound.type = 1;
            sSB1_Ptr->m_armColl[i]->bound.box.center = g_O3;

            sSB1_Ptr->m_armColl[i]->bound.box.box.upper.x = 100.0f;
            sSB1_Ptr->m_armColl[i]->update = SB1Dummy_UpdateFunc;
            sSB1_Ptr->m_armColl[i]->bupdate = SB1Dummy_BoundFunc;
            sSB1_Ptr->m_armColl[i]->penby = XENT_COLLTYPE_PLYR;
            sSB1_Ptr->m_armColl[i]->chkby = XENT_COLLTYPE_PLYR;
        }
    }

    sSB1_Ptr->m_armColl[0]->model->Data = sSB1_Ptr->m_subModels[2]->Data;
    sSB1_Ptr->m_armColl[0]->model->Mat = sSB1_Ptr->m_subModels[2]->Mat;

    sSB1_Ptr->m_armColl[1]->model->Data = sSB1_Ptr->m_subModels[3]->Data;
    sSB1_Ptr->m_armColl[1]->model->Mat = sSB1_Ptr->m_subModels[3]->Mat;

    if (sSB1_Ptr->m_bodyColl)
    {
        sSB1_Ptr->m_bodyColl->model->Flags = 0x2000;

        sSB1_Ptr->m_bodyColl->bound.type = 4;

        sSB1_Ptr->m_bodyColl->bound.box.box.lower.x = -3.5f;
        sSB1_Ptr->m_bodyColl->bound.box.box.lower.y = 0.0f;
        sSB1_Ptr->m_bodyColl->bound.box.box.lower.z = -2.0f;

        sSB1_Ptr->m_bodyColl->bound.box.box.upper.x = 3.5f;
        sSB1_Ptr->m_bodyColl->bound.box.box.upper.y = 10.0f;
        sSB1_Ptr->m_bodyColl->bound.box.box.upper.z = 2.0f;

        sSB1_Ptr->m_bodyColl->bound.mat = (xMat4x3*)sSB1_Ptr->model->Mat;

        sSB1_Ptr->m_bodyColl->update = SB1Dummy_UpdateFunc;
        sSB1_Ptr->m_bodyColl->bupdate = SB1Dummy_BoundFunc;

        sSB1_Ptr->m_bodyColl->penby = XENT_COLLTYPE_PLYR;
        sSB1_Ptr->m_bodyColl->chkby = XENT_COLLTYPE_PLYR;
    }

    for (i = 0; i < 2; i++)
    {
        sSB1_Ptr->m_armTgt[i]->render = SB1Dummy_RenderFunc;
        sSB1_Ptr->m_armTgt[i]->bupdate = SB1Dummy_BoundFunc;
        sSB1_Ptr->m_armTgt[i]->eventFunc = SB1Dummy_TgtEventFunc;
        sSB1_Ptr->m_armTgt[i]->bound.type = 1;
        sSB1_Ptr->m_armTgt[i]->bound.box.center = *(xVec3*)&sSB1_Ptr->m_armTgt[i]->model->Mat->pos;
        sSB1_Ptr->m_armTgt[i]->bound.box.box.upper.x = 0.6f;
    }
}

void zNPCB_SB1::Init(xEntAsset* asset)
{
    this->zNPCCommon::Init(asset);

    sSB1_Ptr = this;

    S32 i = 0;

    xModelInstance* minst = this->model;
    while (minst)
    {
        minst->Data->boundingSphere.radius = 100.0f;
        this->m_subModels[i] = minst;
        i = i + 1;
        minst = minst->Next;
    }

    for (i = 0; i < 4; i++)
    {
        iModelTagSetup(&this->m_leftArmTags[i], this->m_subModels[2]->Data, BossArmTags[i].x,
                       BossArmTags[i].y, BossArmTags[i].z);

        iModelTagSetup(&this->m_rightArmTags[i], this->m_subModels[3]->Data, BossArmTags[i + 4].x,
                       BossArmTags[i + 4].y, BossArmTags[i + 4].z);
    }

    for (i = 0; i < 4; i++)
    {
        iModelTagSetup(&this->m_feetTags[i], this->m_subModels[1]->Data, BossFeetTags[i].x,
                       BossFeetTags[i].y, BossFeetTags[i].z);
    }

    // get object by hash of each thing and assign each one
    this->m_armColl[0] = (zEnt*)zSceneFindObject(xStrHash("DUMMY_ARMCOLL_LEFT"));
    this->m_armColl[1] = (zEnt*)zSceneFindObject(xStrHash("DUMMY_ARMCOLL_RIGHT"));
    this->m_bodyColl = (zEnt*)zSceneFindObject(xStrHash("DUMMY_BODYCOLL"));
    this->m_armTgt[0] = (zEnt*)zSceneFindObject(xStrHash("DUMMY_ARMTGT_LEFT"));
    this->m_armTgt[1] = (zEnt*)zSceneFindObject(xStrHash("DUMMY_ARMTGT_RIGHT"));

    SB1_ResetGlobalStuff();
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 stompCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 smashCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);
static S32 deflateCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*);

void zNPCB_SB1::SelfSetup()
{
    SB1_ResetGlobalStuff();

    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    this->psy_instinct = bmgr->Subscribe(this, 0);

    xPsyche* psy = this->psy_instinct;

    psy->BrainBegin();

    xGoal* goal = psy->AddGoal(NPC_GOAL_BOSSSB1IDLE, NULL);
    goal->SetCallbacks(idleCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSSB1TAUNT, NULL);
    goal->SetCallbacks(tauntCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSSB1STOMP, NULL);
    goal->SetCallbacks(stompCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSSB1SMASH, NULL);
    goal->SetCallbacks(smashCB, NULL, NULL, NULL);

    goal = psy->AddGoal(NPC_GOAL_BOSSSB1DEFLATE, NULL);
    goal->SetCallbacks(deflateCB, NULL, NULL, NULL);

    psy->BrainEnd();

    psy->SetSafety(NPC_GOAL_BOSSSB1IDLE);
}

void zNPCB_SB1::Reset()
{
    SB1_ResetGlobalStuff();
    this->zNPCCommon::Reset();
    this->attacking = 1;
    this->attack_delay = 0.0f;

    if (this->psy_instinct)
    {
        this->psy_instinct->GoalSet(NPC_GOAL_BOSSSB1IDLE, 0);
    }
}

U32 zNPCB_SB1::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal* goal)
{
    S32 index = -1;
    U32 animId = 0;

    switch (gid)
    {
    case NPC_GOAL_BOSSSB1IDLE:
    {
        if (this->model->Anim->Single->State->ID == g_hash_bossanim[SmashLoop])
        {
            index = SmashEnd;
        }
        else
        {
            index = Idle01;
        }
        break;
    }
    case NPC_GOAL_BOSSSB1TAUNT:
    {
        index = Taunt01;
        break;
    }
    case NPC_GOAL_BOSSSB1STOMP:
    {
        index = AttackStomp;
        break;
    }
    case NPC_GOAL_BOSSSB1SMASH:
    {
        index = SmashStart;
        break;
    }
    case NPC_GOAL_BOSSSB1DEFLATE:
    {
        if (sSB1_armTgtHit == this->m_armTgt[0])
        {
            index = SmashHitLeft;
        }
        else
        {
            index = SmashHitRight;
        }
        break;
    }
    default:
    {
        index = Idle01;
    }
    }

    if (index > -1)
    {
        animId = g_hash_bossanim[index];
    }

    return animId;
}

void zNPCB_SB1::Process(xScene* xscn, F32 dt)
{
    this->attack_delay += dt;

    if (this->attack_delay > 5.0f)
    {
        this->attacking = !this->attacking;

        this->attack_delay = 0.0f;
    }

    if (this->attacking && this->psy_instinct)
    {
        this->psy_instinct->Timestep(dt, NULL);
    }

    xFXRing* ring;

    for (U32 i = 0; i < 16; i++)
    {
        ring = this->m_stompRing[i];

        if (ring && ring->time > 1.3f)
        {
            F32 rescale = ring->time / (ring->time + 5.0f * dt);

            ring->ring_radius_delta *= rescale;
            ring->ring_tilt_delta *= rescale;
            ring->ring_height_delta *= rescale;
            ring->time += 5.0f * dt;
        }
    }

    this->zNPCCommon::Process(xscn, dt);

    xprintf("BOSS:  %s  %f\n", this->model->Anim->Single->State->Name,
            this->model->Anim->Single->Time);
}

void zNPCB_SB1::NewTime(xScene* xscn, F32 dt)
{
    // the compiler unrolls this loop
    for (S32 i = 0; i < 2; i++)
    {
        if (sSB1_Ptr->m_armColl[i])
        {
            sSB1_Ptr->m_armColl[i]->model->Flags &= 0b1110111111111111;
        }
    }

    this->zNPCCommon::NewTime(xscn, dt);

    xDrawOBB(&sSB1_Ptr->m_bodyColl->bound.box.box, sSB1_Ptr->m_bodyColl->bound.mat);
}

F32 zNPCB_SB1::AttackTimeLeft()
{
    if (this->attacking == 0)
    {
        return 0.0f;
    }

    return 5.0f - this->attack_delay;
}

void zNPCB_SB1::HoldUpDude()
{
    this->attacking = 0;
    this->attack_delay = 100000000000000000000000000000000000000.0f; // heavy iron moment
}

void zNPCB_SB1::ThanksImDone()
{
    this->attacking = 1;
    this->attack_delay = 5.0f;
}

static S32 SB1_CheckFeetStomp(zNPCB_SB1* sb1, S32* goal, en_trantype* trantype)
{
    xVec3* player_pos = (xVec3*)&globals.player.ent.model->Mat->pos;
    xVec3* boss_pos = (xVec3*)&sb1->model->Mat->pos;
    F32 dist = xVec3Dist2(boss_pos, player_pos);

    S32 result = 0;

    if (dist < 64.0f)
    {
        result = 1;
        *goal = NPC_GOAL_BOSSSB1STOMP;
        *trantype = GOAL_TRAN_SET;
    }
    else
    {
        result = 0;
    }

    return result;
}

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)rawgoal->GetOwner();
    zNPCGoalBossSB1Idle* idle = (zNPCGoalBossSB1Idle*)rawgoal;

    S32 nextgoal = 0;

    if (SB1_CheckFeetStomp(sb1, &nextgoal, trantype))
    {
        return nextgoal;
    }

    if (idle->timeInGoal > 0.75f)
    {
        if (sb1->m_tauntTimer < 0.0f)
        {
            nextgoal = NPC_GOAL_BOSSSB1TAUNT;
            *trantype = GOAL_TRAN_SET;
        }
        else
        {
            nextgoal = NPC_GOAL_BOSSSB1SMASH;
            *trantype = GOAL_TRAN_SET;
        }
    }

    return nextgoal;
}

static S32 tauntCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)rawgoal->GetOwner();

    S32 nextgoal = 0;

    if (SB1_CheckFeetStomp(sb1, &nextgoal, trantype))
    {
        return nextgoal;
    }

    if (sb1->AnimTimeRemain(NULL) < 1.1f * dt)
    {
        nextgoal = NPC_GOAL_BOSSSB1IDLE;
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 stompCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSB1Stomp* stomp = (zNPCGoalBossSB1Stomp*)rawgoal;
    zNPCB_SB1* sb1 = (zNPCB_SB1*)rawgoal->GetOwner();
    S32 nextgoal = 0;

    if (stomp->timeInGoal > 1.5f)
    {
        xVec3* player_pos = (xVec3*)&globals.player.ent.model->Mat->pos;
        xVec3* boss_pos = (xVec3*)&sb1->model->Mat->pos;
        F32 dist = xVec3Dist2(boss_pos, player_pos);

        if (dist > 90.25f)
        {
            if (sb1->AnimTimeRemain(NULL) < 1.1f * dt)
            {
                nextgoal = NPC_GOAL_BOSSSB1IDLE;
                *trantype = GOAL_TRAN_SET;
            }
        }
    }

    return nextgoal;
}

// 91% match, just has a register scheduling issue
static S32 smashCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCGoalBossSB1Smash* smash = (zNPCGoalBossSB1Smash*)rawgoal;
    zNPCB_SB1* sb1 = (zNPCB_SB1*)rawgoal->GetOwner();

    S32 nextgoal = 0;

    if (sSB1_armTgtHit)
    {
        nextgoal = NPC_GOAL_BOSSSB1DEFLATE;
        *trantype = GOAL_TRAN_SET;
        return nextgoal;
    }

    if (SB1_CheckFeetStomp(sb1, &nextgoal, trantype))
    {
        return nextgoal;
    }

    if (smash->timeInGoal > 4.7666664f)
    {
        nextgoal = NPC_GOAL_BOSSSB1IDLE;
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 deflateCB(xGoal* rawgoal, void*, en_trantype* trantype, F32 dt, void*)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)rawgoal->GetOwner();

    S32 nextgoal = 0;

    if (sb1->AnimTimeRemain(NULL) < 1.1f * dt)
    {
        nextgoal = NPC_GOAL_BOSSSB1IDLE;
        *trantype = GOAL_TRAN_SET;
    }

    return nextgoal;
}

static S32 SB1_FaceTarget(zNPCB_SB1* sb1, xVec3* target, F32 dt)
{
    S32 retval = 0;
    xVec3 newAt;

    xVec3Sub(&newAt, target, (xVec3*)&sb1->model->Mat->pos);

    newAt.y = 0.0f;
    F32 a = xVec3Normalize(&newAt, &newAt);

    F32 currRot = xatan2(sb1->model->Mat->at.x, sb1->model->Mat->at.z);
    F32 desireRot = xatan2(newAt.x, newAt.z);

    F32 diffRot = desireRot - currRot;

    if (diffRot > 3.1415927f)
    {
        diffRot -= 6.2831855f;
    }

    if (diffRot < -3.1415927f)
    {
        diffRot += 6.2831855f;
    }

    F32 deltaRot = 1.5707964f * dt;

    if ((F32)iabs(diffRot) < deltaRot)
    {
        sb1->frame->mat.at = newAt;
        retval = 1;
    }
    else
    {
        if (diffRot < 0.0f)
        {
            deltaRot = -deltaRot;
        }

        desireRot = currRot + deltaRot;
        deltaRot = isin(currRot + deltaRot);
        sb1->frame->mat.at.x = deltaRot;
        sb1->frame->mat.at.y = 0.0f;
        deltaRot = icos(desireRot);
        sb1->frame->mat.at.z = deltaRot;
    }

    xVec3Cross(&sb1->frame->mat.right, &sb1->frame->mat.up, &sb1->frame->mat.at);

    return retval;
}

S32 zNPCGoalBossSB1Idle::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    this->timeInGoal = 0.0f;
    xVec3Init(&sb1->frame->vel, 0.0f, 0.0f, 0.0f);
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Idle::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    if (sb1->model->Anim->Single->State->ID == g_hash_bossanim[Idle01])
    {
        this->timeInGoal += dt;
        sb1->m_tauntTimer -= dt;
    }

    SB1_FaceTarget(sb1, (xVec3*)&globals.player.ent.model->Mat->pos, dt);

    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossSB1Taunt::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    this->timeInGoal = 0.0f;
    sb1->m_tauntTimer = 5.0f;
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Taunt::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    this->timeInGoal += dt;

    SB1_FaceTarget(sb1, (xVec3*)&globals.player.ent.model->Mat->pos, dt);

    return xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossSB1Stomp::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    this->timeInGoal = 0.0f;
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

static void AddStompRing(zNPCB_SB1* sb1, xVec3* pos)
{
    for (S32 i = 0; i < 16; i++)
    {
        if (sb1->m_stompRing[i] == NULL)
        {
            sb1->m_stompRing[i] = zFXMuscleArmWave(pos);

            if (!sb1->m_stompRing[i])
            {
                break;
            }
            else
            {
                // set the parent to itself...???
                sb1->m_stompRing[i]->parent = &sb1->m_stompRing[i];
                break;
            }
        }
    }
}

S32 zNPCGoalBossSB1Stomp::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    xVec3 feetTag[4];
    xVec3 wavePt[2];

    this->timeInGoal += dt;

    SB1_FaceTarget(sb1, (xVec3*)&globals.player.ent.model->Mat->pos, dt);

    if (this->timeInGoal > 0.25f)
    {
        if (sb1->model->Anim->Single->LastTime > sb1->model->Anim->Single->Time)
        {
            for (U32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[1]->Data, &sb1->m_feetTags[i],
                              sb1->m_subModels[1]->Mat, &feetTag[i]);
            }

            xVec3Lerp(&wavePt[0], &feetTag[0], &feetTag[1], 0.5f);
            xVec3Lerp(&wavePt[1], &feetTag[2], &feetTag[3], 0.5f);

            wavePt[0].y = 0.25f;
            wavePt[1].y = 0.25f;

            AddStompRing(sb1, &wavePt[0]);
            AddStompRing(sb1, &wavePt[1]);
        }
    }

    return xGoal::Process(trantype, dt, ctxt, scene);
}

// scheduling memes preventing perfect match
S32 zNPCGoalBossSB1Smash::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    sSB1_armTgtHit = NULL;
    this->timeInGoal = 0.0f;
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Smash::Exit(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    sb1->m_armTgt[0]->model->Mat->pos.y = 100.0f;
    sb1->m_armTgt[1]->model->Mat->pos.y = 100.0f;

    sSB1_Ptr->m_armTgt[0]->bound.box.center = (xVec3&)sSB1_Ptr->m_armTgt[0]->model->Mat->pos;
    sSB1_Ptr->m_armTgt[1]->bound.box.center = (xVec3&)sSB1_Ptr->m_armTgt[1]->model->Mat->pos;

    SB1Dummy_BoundFunc(sb1->m_armTgt[0], NULL);
    SB1Dummy_BoundFunc(sb1->m_armTgt[1], NULL);

    return this->zNPCGoalCommon::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB1Smash::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    xVec3 curTag;

    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    this->timeInGoal += dt;

    if (sb1->model->Anim->Single->State->ID == g_hash_bossanim[SmashLoop] ||
        (sb1->model->Anim->Single->Time > 0.76666665f))
    {
        if (!sSB1_deflated[0])
        {
            xVec3 sumTag = { 0, 0, 0 };

            for (S32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[2]->Data, &sb1->m_leftArmTags[i],
                              sb1->m_subModels[2]->Mat, &curTag);
                xVec3Add(&sumTag, &sumTag, &curTag);
            }

            xVec3SMulBy(&sumTag, 0.25f);
            xVec3* pos = (xVec3*)&sSB1_Ptr->m_armTgt[0]->model->Mat->pos;
            *pos = sumTag;
            sSB1_Ptr->m_armTgt[0]->bound.sph.center = sumTag;
            SB1Dummy_BoundFunc(sb1->m_armTgt[0], NULL);
        }
        if (!sSB1_deflated[1])
        {
            xVec3 sumTag = { 0, 0, 0 };

            for (S32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[3]->Data, &sb1->m_rightArmTags[i],
                              sb1->m_subModels[3]->Mat, &curTag);
                xVec3Add(&sumTag, &sumTag, &curTag);
            }

            xVec3SMulBy(&sumTag, 0.25f);
            xVec3* pos = (xVec3*)&sSB1_Ptr->m_armTgt[1]->model->Mat->pos;
            *pos = sumTag;
            sSB1_Ptr->m_armTgt[1]->bound.sph.center = sumTag;
            SB1Dummy_BoundFunc(sb1->m_armTgt[1], NULL);
        }
    }

    return this->xGoal::Process(trantype, dt, ctxt, scene);
}

S32 zNPCGoalBossSB1Deflate::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    this->timeInGoal = 0.0f;

    RpGeometry* srcGeom;
    RpGeometry* dstGeom;
    xAnimState* deflateState;

    if (sSB1_armTgtHit == sb1->m_armTgt[0])
    {
        srcGeom = sb1->m_subModels[2]->Data->geometry;
        dstGeom = sb1->m_subModels[4]->Data->geometry;
        deflateState = xAnimTableGetStateID(sb1->model->Anim->Table, g_hash_bossanim[SmashHitLeft]);
    }
    else
    {
        srcGeom = sb1->m_subModels[3]->Data->geometry;
        dstGeom = sb1->m_subModels[5]->Data->geometry;
        deflateState =
            xAnimTableGetStateID(sb1->model->Anim->Table, g_hash_bossanim[SmashHitRight]);
    }

    this->morphVertCount = srcGeom->numVertices;
    this->modelVec = srcGeom->morphTarget->verts;
    this->modelGeom = srcGeom;
    this->targetVec = dstGeom->morphTarget->verts;

    memcpy(this->morphVertBuf, this->modelVec, this->morphVertCount * sizeof(RwV3d));

    this->morphInvTime = 1.0f / (deflateState->Data->Duration - 0.05f);

    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Deflate::Exit(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    RpGeometryLock(this->modelGeom, 2);
    memcpy(this->modelVec, this->morphVertBuf, this->morphVertCount * sizeof(xVec3));
    RpGeometryUnlock(this->modelGeom);

    if (sSB1_armTgtHit == sb1->m_armTgt[0])
    {
        sb1->m_subModels[2]->Flags &= ~1;
        sb1->m_subModels[4]->Flags |= 1;

        sb1->m_armColl[0]->model->Data = sb1->m_subModels[4]->Data;
        sb1->m_armColl[0]->model->Mat = sb1->m_subModels[4]->Mat;

        sSB1_deflated[0] = true;
    }
    else
    {
        sb1->m_subModels[3]->Flags &= ~1;
        sb1->m_subModels[5]->Flags |= 1;

        sb1->m_armColl[1]->model->Data = sb1->m_subModels[5]->Data;
        sb1->m_armColl[1]->model->Mat = sb1->m_subModels[5]->Mat;

        sSB1_deflated[1] = true;
    }

    return this->zNPCGoalCommon::Exit(dt, updCtxt);
}

S32 zNPCGoalBossSB1Deflate::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    this->timeInGoal += dt;

    RpGeometryLock(this->modelGeom, 2);
    F32 invlerp;
    F32 lerp;

    lerp = this->timeInGoal * this->morphInvTime;

    if (lerp > 1.0f)
    {
        lerp = 1.0f;
    }

    invlerp = 1.0f - lerp;

    for (S32 i = 0; i < this->morphVertCount; i++)
    {
        this->modelVec[i].x = invlerp * this->morphVertBuf[i].x + lerp * this->targetVec[i].x;
        this->modelVec[i].y = invlerp * this->morphVertBuf[i].y + lerp * this->targetVec[i].y;
        this->modelVec[i].z = invlerp * this->morphVertBuf[i].z + lerp * this->targetVec[i].z;
    }

    RpGeometryUnlock(this->modelGeom);

    return this->xGoal::Process(trantype, dt, ctxt, scene);
}
