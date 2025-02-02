#include <types.h>

#include "xMath3.h"
#include "xVec3.h"
#include "zNPCGoalAmbient.h"
#include "zNPCSndTable.h"

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

S32 zNPCGoalJellyAttack::Enter(F32 arg0, void* arg1)
{
    zNPCJelly* temp_r31 = (zNPCJelly*)psyche->clt_owner;

    temp_r31->SndPlayRandom(NPC_STYP_ENCOUNTER);
    temp_r31->VelStop();
    lastAnimTime = 0;
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

S32 zNPCGoalJellyAttack::ZapperStop()
{
    s32 var_r29;
    zLightning *temp_r3;
    zNPCGoalJellyAttack *var_r30;
    zNPC_SNDStop((_tageNPCSnd) 4);
    var_r30 = this;
    var_r29 = 0;
    for (S32 i = 0; i< 3; ++i) 
    {
        if(zap_lytnin[i] != NULL)
        {
            zLightningKill(zap_lytnin[i]);
        }
        zap_lytnin[i] = NULL;
    }
}
