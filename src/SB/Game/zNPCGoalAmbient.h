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
    class zLightning * zap_lytnin[3];
    U32 lastAnimTime;
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantyp, F32 dt, void* updCxt, xScene* xscn);
    S32 ZapperStart(); 
    S32 ZapperStop();
    S32 ZapperUpdate();
};

#endif
