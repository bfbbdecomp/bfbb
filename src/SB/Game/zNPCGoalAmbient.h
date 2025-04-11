#ifndef ZNPCGOALAMBIENT_H
#define ZNPCGOALAMBIENT_H

#include "zNPCGoalAmbient.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"
#include "zNPCSndTable.h"
#include "zNPCTypeAmbient.h"
#include "zNPCSupport.h"
#include "zLightning.h"

xFactoryInst* GOALCreate_Ambient(S32 who, RyzMemGrow* grow, void*);

struct zNPCGoalJellyBirth : zNPCGoalCommon
{
    xVec3 pos_spawn;
    F32 tmr_fall;

    void BirthInfoSet(const xVec3* pos_birth, F32 tym_fall);
    S32 Process(en_trantype* trantyp, F32 dt, void* ctxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalJellyAttack : zNPCGoalPushAnim
{
    S32 flg_attack;
    zLightning* zap_lytnin[3];
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantyp, F32 dt, void* updCxt, xScene* xscn);
    S32 ZapperStart();
    void ZapperStop();
    S32 ZapperUpdate();
};

struct zNPCGoalJellyBumped : zNPCGoalPushAnim
{
    xVec3 pos_bumper;
    xVec3 pos_bumpin;
    xVec3 pos_grindin;
    U32 streakID;

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantyp, F32 dt, void* updCxt, xScene* xscn);
    void MoveSwoosh(F32 dt);
    void PlayWithAnimSpd();
    void StreakPrep();
    void StreakDone();
    void StreakUpdate();
    void ExtractAimDir(xVec3* dir);
    F32 CalcEndPoint(xVec3* pos_end, const xVec3* dir_aim);
};

#endif
