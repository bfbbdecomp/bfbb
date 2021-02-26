#ifndef ZNPCGOALAMBIENT_H
#define ZNPCGOALAMBIENT_H

#include "zNPCGoalCommon.h"

xFactoryInst* GOALCreate_Ambient(int32 who, RyzMemGrow* grow, void*);

struct zNPCGoalJellyBirth : zNPCGoalCommon
{
    xVec3 pos_spawn;
    float32 tmr_fall;

    void BirthInfoSet(const xVec3* pos_birth, float32 tym_fall);
    int32 Process(en_trantype* trantyp, float32 dt, void* ctxt, xScene* xscn);
    int32 Enter(float32 dt, void* updCtxt);
};

#endif