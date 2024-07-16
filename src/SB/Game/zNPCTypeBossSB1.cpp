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

#define f822 1.0f
#define f823 0.0f
#define f824 0.2f
#define f825 3.3333333f
#define f890 100.0f
#define f891 -3.5f
#define f892 -2.0f
#define f893 3.5f
#define f894 10.0f
#define f895 2.0f
#define f896 0.6f
#define f983 5.0f
#define f984 1.3f
#define f1008 100000000000000000000000000000000000000.0f // original ASM object
#define f1019 64.0f
#define f1034 0.75f
#define f1043 1.1f
#define f1053 1.5f
#define f1054 90.25f
#define f1065 4.7666664f
#define f1088 6.2831855f
#define f1089 3.1415927f
#define f1090 -3.1415927f
#define f1091 1.5707964f
#define f1160 0.25f
#define f1161 0.5f
#define f1209 0.76666665f
#define f1223 0.05f

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

static zNPCB_SB1* sSB1_Ptr; // size: 0x4, address: 0x510188
static zEnt* sSB1_armTgtHit;
static U32 sSB1_deflated[2];

void test(S32 a)
{
}

xAnimTable* ZNPC_AnimTable_BossSB1()
{
    int ourAnims[11] = {
        1, 2, 3, 41, 42, 43, 44, 45, 46, 47, 0,
    };

    xAnimTable* table = xAnimTableNew("zNPCB_SB1_Muscle", NULL, 0);

    xAnimTableNewState(table, g_strz_bossanim[1], 0x10, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[2], 0, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[3], 0, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[41], 0x20, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[42], 0x10, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[43], 0x20, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[44], 0x10, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[45], 0x10, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[46], 0, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);
    xAnimTableNewState(table, g_strz_bossanim[47], 0, 0, f822, 0x0, 0x0, f823, 0x0, 0x0,
                       xAnimDefaultBeforeEnter, 0x0, 0x0);

    NPCC_BuildStandardAnimTran(table, g_strz_bossanim, ourAnims, 1, f824);

    xAnimTableNewTransition(table, g_strz_bossanim[41], g_strz_bossanim[42], 0x0, 0x0, 0x10, 0,
                            f823, f823, 0, 0, f823, 0x0);
    xAnimTableNewTransition(table, g_strz_bossanim[43], g_strz_bossanim[1], 0x0, 0x0, 0x10, 0, f823,
                            f823, 0, 0, f823, 0x0);

    xAnimTransition* t = table->TransitionList;
    while (t)
    {
        t->BlendRecip = f825;
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

static void SB1_ResetGlobalStuff()
{
    sSB1_Ptr->m_subModels[2]->Flags |= 1;
    sSB1_Ptr->m_subModels[3]->Flags |= 1;
    sSB1_Ptr->m_subModels[4]->Flags &= ~1;
    sSB1_Ptr->m_subModels[5]->Flags &= ~1;

    sSB1_Ptr->m_tauntTimer = f823;

    sSB1_deflated[0] = 0; // sSB1_deflated[0];
    sSB1_deflated[1] = 0; // sSB1_deflated[0];
    sSB1_armTgtHit = NULL;

    memset(sSB1_Ptr->m_stompRing, 0, 0x40);

    //S32 i = 0;

    for (S32 i = 0; i < 2; i++)
    {
        if (sSB1_Ptr->m_armColl[i])
        {
            sSB1_Ptr->m_armColl[i]->model->Flags = 0x2800;
            sSB1_Ptr->m_armColl[i]->model->Next = NULL;
            sSB1_Ptr->m_armColl[i]->bound.type = 1;
            sSB1_Ptr->m_armColl[i]->bound.box.center = g_O3;

            sSB1_Ptr->m_armColl[i]->bound.box.box.upper.x = f890;
            sSB1_Ptr->m_armColl[i]->update = SB1Dummy_UpdateFunc;
            sSB1_Ptr->m_armColl[i]->bupdate = SB1Dummy_BoundFunc;
            sSB1_Ptr->m_armColl[i]->penby = 0x10;
            sSB1_Ptr->m_armColl[i]->chkby = 0x10;
        }
    }

    sSB1_Ptr->m_armColl[0]->model->Data = sSB1_Ptr->m_subModels[2]->Data;
    sSB1_Ptr->m_armColl[0]->model->Mat = sSB1_Ptr->m_subModels[2]->Mat;

    sSB1_Ptr->m_armColl[1]->model->Data = sSB1_Ptr->m_subModels[3]->Data;
    sSB1_Ptr->m_armColl[1]->model->Mat = sSB1_Ptr->m_subModels[3]->Mat;

    if (sSB1_Ptr->m_bodyColl)
    {
        sSB1_Ptr->model->Flags = 0x2000;

        sSB1_Ptr->m_bodyColl->bound.type = 4;

        sSB1_Ptr->m_bodyColl->bound.box.box.lower.x = f891;
        sSB1_Ptr->m_bodyColl->bound.box.box.lower.y = f823;
        sSB1_Ptr->m_bodyColl->bound.box.box.lower.z = f892;

        sSB1_Ptr->m_bodyColl->bound.box.box.upper.x = f893;
        sSB1_Ptr->m_bodyColl->bound.box.box.upper.y = f894;
        sSB1_Ptr->m_bodyColl->bound.box.box.upper.z = f895;

        sSB1_Ptr->m_bodyColl->bound.mat = (xMat4x3*)sSB1_Ptr->model->Mat;

        sSB1_Ptr->m_bodyColl->update = SB1Dummy_UpdateFunc;
        sSB1_Ptr->m_bodyColl->bupdate = SB1Dummy_BoundFunc;

        sSB1_Ptr->m_bodyColl->penby = 0x10;
        sSB1_Ptr->m_bodyColl->chkby = 0x10;
    }

    for (S32 i = 0; i < 2; i++)
    {
        sSB1_Ptr->m_armTgt[i]->render = SB1Dummy_RenderFunc;
        sSB1_Ptr->m_armTgt[i]->bupdate = SB1Dummy_BoundFunc;
        sSB1_Ptr->m_armTgt[i]->eventFunc = SB1Dummy_TgtEventFunc;
        sSB1_Ptr->m_armTgt[i]->bound.type = 1;
        sSB1_Ptr->m_armTgt[i]->bound.box.center = *(xVec3*)&sSB1_Ptr->m_armTgt[i]->model->Mat->pos;
        sSB1_Ptr->m_armTgt[i]->bound.box.box.upper.x = f896;
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
        minst->Data->boundingSphere.radius = f890;
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

static S32 idleCB(xGoal* rawgoal, void*, en_trantype* trantype, F32, void*);
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
    this->attack_delay = f823;

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
        if (this->model->Anim->Single->State->ID == g_hash_bossanim[42])
        {
            index = 43;
        }
        else
        {
            index = 1;
        }
        break;
    }
    case NPC_GOAL_BOSSSB1TAUNT:
    {
        index = 3;
        break;
    }
    case NPC_GOAL_BOSSSB1STOMP:
    {
        index = 44;
        break;
    }
    case NPC_GOAL_BOSSSB1SMASH:
    {
        index = 41;
        break;
    }
    case NPC_GOAL_BOSSSB1DEFLATE:
    {
        if (sSB1_armTgtHit == this->m_armTgt[0])
        {
            index = 46;
        }
        else
        {
            index = 47;
        }
        break;
    }
    default:
    {
        index = 1;
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

    if (this->attack_delay > f983)
    {
        this->attacking = !this->attacking;

        this->attack_delay = f823;
    }

    if (this->attacking && this->psy_instinct)
    {
        this->psy_instinct->Timestep(dt, NULL);
    }

    xFXRing* ring; // needs to be declared outside to match

    for (U32 i = 0; i < 16; i++)
    {
        ring = this->m_stompRing[i];

        if (ring && ring->time > f984)
        {
            F32 rescale = ring->time / (ring->time + f983 * dt);

            ring->ring_radius_delta *= rescale;
            ring->ring_tilt_delta *= rescale;
            ring->ring_height_delta *= rescale;
            ring->time += f983 * dt;
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
        return f823;
    }

    return f983 - this->attack_delay;
}

void zNPCB_SB1::HoldUpDude()
{
    this->attacking = 0;
    this->attack_delay = f1008;
}

void zNPCB_SB1::ThanksImDone()
{
    this->attacking = 1;
    this->attack_delay = f983;
}

static S32 SB1_CheckFeetStomp(zNPCB_SB1* sb1, S32* goal, en_trantype* trantype)
{
    xVec3* player_pos = (xVec3*)&globals.player.ent.model->Mat->pos;
    xVec3* boss_pos = (xVec3*)&sb1->model->Mat->pos;
    F32 dist = xVec3Dist2(boss_pos, player_pos);

    S32 result = 0;

    if (dist < f1019)
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

    if (idle->timeInGoal > f1034)
    {
        if (sb1->m_tauntTimer < f823)
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

    if (sb1->AnimTimeRemain(NULL) < f1043 * dt)
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

    if (stomp->timeInGoal > f1053)
    {
        xVec3* player_pos = (xVec3*)&globals.player.ent.model->Mat->pos;
        xVec3* boss_pos = (xVec3*)&sb1->model->Mat->pos;
        F32 dist = xVec3Dist2(boss_pos, player_pos);

        if (dist > f1054)
        {
            if (sb1->AnimTimeRemain(NULL) < f1043 * dt)
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

    if (smash->timeInGoal > f1065)
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

    if (sb1->AnimTimeRemain(NULL) < f1043 * dt)
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

    newAt.y = f823;
    F32 a = xVec3Normalize(&newAt, &newAt);

    F32 currRot = xatan2(sb1->model->Mat->at.x, sb1->model->Mat->at.z);
    F32 desireRot = xatan2(newAt.x, newAt.z);

    F32 diffRot = desireRot - currRot;

    if (diffRot > f1089)
    {
        diffRot -= f1088;
    }

    if (diffRot < f1090)
    {
        diffRot += f1088;
    }

    F32 deltaRot = f1091 * dt;

    if ((F32)iabs(diffRot) < deltaRot)
    {
        sb1->frame->mat.at = newAt;
        retval = 1;
    }
    else
    {
        if (diffRot < f823)
        {
            deltaRot = -deltaRot;
        }

        desireRot = currRot + deltaRot;
        deltaRot = isin(currRot + deltaRot);
        sb1->frame->mat.at.x = deltaRot;
        sb1->frame->mat.at.y = f823;
        deltaRot = icos(desireRot);
        sb1->frame->mat.at.z = deltaRot;
    }

    xVec3Cross(&sb1->frame->mat.right, &sb1->frame->mat.up, &sb1->frame->mat.at);

    return retval;
}

S32 zNPCGoalBossSB1Idle::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    this->timeInGoal = f823;
    xVec3Init(&sb1->frame->vel, f823, f823, f823);
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Idle::Process(en_trantype* trantype, F32 dt, void* ctxt, xScene* scene)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    if (sb1->model->Anim->Single->State->ID == g_hash_bossanim[1])
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
    this->timeInGoal = f823;
    sb1->m_tauntTimer = f983;
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
    this->timeInGoal = f823;
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

// scheduling memes preventing match
S32 zNPCGoalBossSB1Smash::Enter(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();
    sSB1_armTgtHit = NULL;
    this->timeInGoal = f823;
    return this->zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBossSB1Smash::Exit(F32 dt, void* updCtxt)
{
    zNPCB_SB1* sb1 = (zNPCB_SB1*)this->GetOwner();

    sb1->m_armTgt[0]->model->Mat->pos.y = f890;
    sb1->m_armTgt[1]->model->Mat->pos.y = f890;

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

    if (sb1->model->Anim->Single->State->ID == g_hash_bossanim[42] ||
        (sb1->model->Anim->Single->Time > f1209))
    {
        if (sSB1_deflated[0] == NULL)
        {
            xVec3 sumTag = { 0, 0, 0 };

            for (S32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[2]->Data, &sb1->m_leftArmTags[i],
                              sb1->m_subModels[2]->Mat, &curTag);
                xVec3Add(&sumTag, &sumTag, &curTag);
            }

            xVec3SMulBy(&sumTag, f1160);
            xVec3* pos = (xVec3*)&sSB1_Ptr->m_armTgt[0]->model->Mat->pos;
            *pos = sumTag;
            sSB1_Ptr->m_armTgt[0]->bound.sph.center = sumTag;
            SB1Dummy_BoundFunc(sb1->m_armTgt[0], NULL);
        }
        if (sSB1_deflated[1] == NULL)
        {
            xVec3 sumTag = { 0, 0, 0 };

            for (S32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[3]->Data, &sb1->m_rightArmTags[i],
                              sb1->m_subModels[3]->Mat, &curTag);
                xVec3Add(&sumTag, &sumTag, &curTag);
            }

            xVec3SMulBy(&sumTag, f1160);
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
    this->timeInGoal = f823;

    RpGeometry* srcGeom; // r18
    RpGeometry* dstGeom; // r17
    xAnimState* deflateState; // r16

    if (sSB1_armTgtHit == sb1->m_armTgt[0])
    {
        srcGeom = sb1->m_subModels[2]->Data->geometry;
        dstGeom = sb1->m_subModels[4]->Data->geometry;
        deflateState = xAnimTableGetStateID(sb1->model->Anim->Table, g_hash_bossanim[46]);
    }
    else
    {
        srcGeom = sb1->m_subModels[3]->Data->geometry;
        dstGeom = sb1->m_subModels[5]->Data->geometry;
        deflateState = xAnimTableGetStateID(sb1->model->Anim->Table, g_hash_bossanim[47]);
    }

    this->morphVertCount = srcGeom->numVertices;
    this->modelVec = srcGeom->morphTarget->verts;
    this->modelGeom = srcGeom;
    this->targetVec = dstGeom->morphTarget->verts;

    memcpy(this->morphVertBuf, this->modelVec, this->morphVertCount * sizeof(RwV3d));

    this->morphInvTime = f822 / (deflateState->Data->Duration - f1223);

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

    if (this->timeInGoal > f1160)
    {
        if (sb1->model->Anim->Single->LastTime > sb1->model->Anim->Single->Time)
        {
            for (U32 i = 0; i < 4; i++)
            {
                iModelTagEval(sb1->m_subModels[1]->Data, &sb1->m_feetTags[i],
                              sb1->m_subModels[1]->Mat, &feetTag[i]);
            }

            xVec3Lerp(&wavePt[0], &feetTag[0], &feetTag[1], f1161);
            xVec3Lerp(&wavePt[1], &feetTag[2], &feetTag[3], f1161);

            wavePt[0].y = f1160;
            wavePt[1].y = f1160;

            AddStompRing(sb1, &wavePt[0]);
            AddStompRing(sb1, &wavePt[1]);
        }
    }

    return xGoal::Process(trantype, dt, ctxt, scene);
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

        sSB1_deflated[0] = 1;
    }
    else
    {
        sb1->m_subModels[3]->Flags &= ~1;
        sb1->m_subModels[5]->Flags |= 1;

        sb1->m_armColl[1]->model->Data = sb1->m_subModels[5]->Data;
        sb1->m_armColl[1]->model->Mat = sb1->m_subModels[5]->Mat;

        sSB1_deflated[1] = 1;
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

    if (lerp > f822)
    {
        lerp = f822;
    }

    invlerp = f822 - lerp;

    for (S32 i = 0; i < this->morphVertCount; i++)
    {
        this->modelVec[i].x = invlerp * this->morphVertBuf[i].x + lerp * this->targetVec[i].x;
        this->modelVec[i].y = invlerp * this->morphVertBuf[i].y + lerp * this->targetVec[i].y;
        this->modelVec[i].z = invlerp * this->morphVertBuf[i].z + lerp * this->targetVec[i].z;
    }

    RpGeometryUnlock(this->modelGeom);

    return this->xGoal::Process(trantype, dt, ctxt, scene);
}
