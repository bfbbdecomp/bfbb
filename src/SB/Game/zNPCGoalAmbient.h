#ifndef ZNPCGOALAMBIENT_H
#define ZNPCGOALAMBIENT_H

#include "zNPCGoalCommon.h"

xFactoryInst* GOALCreate_Ambient(S32 who, RyzMemGrow* grow, void*);

struct zNPCGoalJellyBirth : zNPCGoalCommon
{
    xVec3 pos_spawn;
    F32 tmr_fall;

    void BirthInfoSet(const xVec3* pos_birth, F32 tym_fall);
    S32 Process(en_trantype* trantyp, F32 dt, void* ctxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
};

#endif
