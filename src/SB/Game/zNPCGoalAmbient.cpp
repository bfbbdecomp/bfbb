#include <types.h>

#include "xMath.h"
#include "xMath3.h"
#include "xVec3.h"
#include "zNPCGoalAmbient.h"
#include "zNPCSndTable.h"
#include "xMathInlines.h"
#include "zNPCSupplement.h"
#include "zGlobals.h"

S32 zNPCGoalJellyBumped::Enter(F32 dt, void* updCtxt)
{
    zNPCJelly* npc;
    xVec3 dir_aim;

    npc = (zNPCJelly*)psyche->clt_owner;

    ExtractAimDir(&dir_aim);
    CalcEndPoint(&pos_grindin, &dir_aim);

    pos_bumpin = *npc->Pos();

    npc->cnt_angerLevel -= 40;
    npc->hitpoints--;

    npc->SndPlayRandom(NPC_STYP_OUCH);

    npc->ActLikeOctopus();

    StreakPrep();

    return zNPCGoalPushAnim::Enter(dt, updCtxt);
}

S32 zNPCGoalJellyBumped::Exit(F32 dt, void* updCtxt)
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    npc->VelStop();

    StreakDone();

    npc->SndPlayRandom(NPC_STYP_DEATHJELLY);
    npc->ActLikeOctopus();

    return zNPCGoalPushAnim::Exit(dt, updCtxt);
}

S32 zNPCGoalJellyBumped::Process(en_trantype* trantyp, F32 dt, void* updCxt, xScene* xscn)
{
    S32 nextgoal = 0;
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    xVec3 pos;
    F32 pam;

    PlayWithAnimSpd();
    MoveSwoosh(dt);

    npc->JellyBoneWorldPos(&pos, -1);

    zFX_SpawnBubbleTrail(&pos, 0x4);

    StreakUpdate();

    pam = npc->AnimTimeRemain(NULL) / npc->AnimDuration(NULL);
    pam = CLAMP(pam, 0.01f, 1.0f);

    if (npc->hitpoints < 1)
    {
        npc->SetAlpha(pam);
    }

    if (npc->hitpoints < 1 && pam < 0.01f)
    {
        *trantyp = GOAL_TRAN_SET;
        nextgoal = 'NGN5';
    }

    if (*trantyp != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    return zNPCGoalPushAnim::Process(trantyp, dt, updCxt, xscn);
}

void LERP(float dt, xVec3* pos_update, const xVec3*, const xVec3*);
F32 SMOOTH(float, float, float);

void zNPCGoalJellyBumped::MoveSwoosh(F32 dt)
{
    F32 pos_factor;
    xVec3 pos_update;
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;

    pos_factor = SQ(npc->AnimTimeRemain(NULL)) / SQ(npc->AnimDuration(NULL));
    pos_factor = 1.0f - pos_factor;
    pos_factor = CLAMP(pos_factor, 0.01f, 1.0f);

    LERP(pos_factor, &pos_update, &pos_bumpin, &pos_grindin);
    npc->frame->mat.pos = pos_update;

    npc->frame->mode |= 0x1;
}

void zNPCGoalJellyBumped::PlayWithAnimSpd()
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;

    F32 pos_factor = npc->AnimTimeRemain(NULL) / npc->AnimDuration(NULL);
    pos_factor = CLAMP(pos_factor, 0.01f, 1.0f);
    pos_factor = SMOOTH(pos_factor, 1.0f, 3.0f);

    npc->AnimCurSingle()->CurrentSpeed = pos_factor;
}

void zNPCGoalJellyBumped::StreakPrep()
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    if (npc->SelfType() == 'NTA1')
    {
        streakID = NPCC_StreakCreate(NPC_STRK_TOSSEDJELLYBLUE);
    }
    else
    {
        streakID = NPCC_StreakCreate(NPC_STRK_TOSSEDJELLY);
    }
}

void zNPCGoalJellyBumped::StreakDone()
{
    xFXStreakStop(streakID);
    streakID = 0xDEAD;
}

void zNPCGoalJellyBumped::StreakUpdate()
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    xVec3 bone_pos1;
    xVec3 bone_pos2;

    npc->JellyBoneWorldPos(&bone_pos1, 2);
    npc->JellyBoneWorldPos(&bone_pos2, 3);

    xFXStreakUpdate(streakID, (const xVec3*)&bone_pos1, (const xVec3*)&bone_pos2);
}

void zNPCGoalJellyBumped::ExtractAimDir(xVec3* dir_aim)
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    F32 length;

    if (flg_info & 0x10)
    {
        npc->XZVecToPos(dir_aim, (const xVec3*)&pos_bumper, NULL);
    }
    else
    {
        npc->XZVecToPlayer(dir_aim, NULL);
    }

    flg_info = 0x0;

    xVec3Inv(dir_aim, dir_aim);

    dir_aim->y = 0.0f;

    length = dir_aim->length();
    if (length < 1e-5f)
    {
        *dir_aim = *NPCC_faceDir(&globals.player.ent);
    }
    else
    {
        *dir_aim /= length;
    }
}

F32 zNPCGoalJellyBumped::CalcEndPoint(xVec3* pos_end, const xVec3* dir_aim)
{
    xCollis colrec;
    S32 rc;

    F32 dst_toEndPnt = 4.0f;
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;
    xVec3 vec = *dir_aim * dst_toEndPnt;
    xVec3 pos = *npc->Pos() + vec;

    memset(&colrec, 0, sizeof(colrec));
    colrec.flags = 0x1F00;

    rc = npc->HaveLOSToPos(&pos, 4.0f, globals.sceneCur, NULL, &colrec);
    if (rc)
    {
        *pos_end = pos;
        dst_toEndPnt = 4.0f;
    }
    else
    {
        dst_toEndPnt = colrec.dist;
        *pos_end = *npc->Pos() + *dir_aim * dst_toEndPnt;
    }

    return dst_toEndPnt;
}

S32 zNPCGoalJellyAttack::Enter(F32 arg0, void* arg1)
{
    zNPCJelly* npc = (zNPCJelly*)psyche->clt_owner;

    npc->SndPlayRandom(NPC_STYP_ENCOUNTER);
    npc->VelStop();
    flg_attack = 0;
    zNPCGoalJellyAttack::ZapperStart();
    return zNPCGoalPushAnim::Enter(arg0, arg1);
}

S32 zNPCGoalJellyAttack::Exit(F32 arg0, void* arg1)
{
    zNPCGoalJellyAttack::ZapperStop();
    return zNPCGoalPushAnim::Exit(arg0, arg1);
}

S32 zNPCGoalJellyAttack::Process(en_trantype* arg0, F32 arg1, void* arg2, xScene* arg3)
{
    zNPCGoalJellyAttack::ZapperUpdate();
    return zNPCGoalPushAnim::Process(arg0, arg1, arg2, arg3);
}

void zNPCGoalJellyAttack::ZapperStop()
{
    zNPC_SNDStop(eNPCSnd_JellyfishAttack);
    for (S32 i = 0; i < 3; i++)
    {
        if (zap_lytnin[i] != NULL)
        {
            zLightningKill(zap_lytnin[i]);
        }
        zap_lytnin[i] = NULL;
    }
}
