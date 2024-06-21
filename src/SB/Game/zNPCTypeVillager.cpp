#include "zNPCTypeVillager.h"

#include "zNPCTypes.h"

extern int8* g_strz_folkanim[26];
extern uint32 g_hash_folkanim[26];
extern int8* g_strz_platanim[2];
extern uint32 g_hash_platanim[2];
extern zParEmitter* g_pemit_aqualeak;
extern char zNPCTypeVillager_stringBase0[];
extern xParEmitterCustomSettings g_parf_aqualeak;
extern xVec3 g_O3;

void ZNPC_Villager_Startup()
{
    int32 i;

    for (i = 0; i < 26; i++)
    {
        g_hash_folkanim[i] = xStrHash(g_strz_folkanim[i]);
    }

    for (i = 0; i < 2; i++)
    {
        g_hash_platanim[i] = xStrHash(g_strz_platanim[i]);
    }
}

void ZNPC_Villager_Shutdown()
{
}

void zNPCVillager_ScenePrepare()
{
}

void zNPCVillager_SceneFinish()
{
    FOLK_KillEffects();
}

void zNPCVillager_SceneReset()
{
}

void zNPCVillager_ScenePostInit()
{
    FOLK_InitEffects();
}

void zNPCVillager_SceneTimestep(float32 dt)
{
    zNPCBubbleBuddy_AlphaUpdate(dt);
}

xFactoryInst* ZNPC_Create_Villager(int32 who, RyzMemGrow* growCtxt, void*)
{
    zNPCVillager* vil;

    switch (who)
    {
    case NPC_TYPE_VILLAGER:
    {
        vil = new (who, growCtxt) zNPCVillager(who);
        break;
    }
    case NPC_TYPE_FISH:
    case NPC_TYPE_FISH_MALE:
    case NPC_TYPE_FISH_FEMALE:
    case NPC_TYPE_FISH_ELDER:
    case NPC_TYPE_FISH_ELDESS:
    case NPC_TYPE_FISH_BOY:
    case NPC_TYPE_FISH_GIRL:
    case NPC_TYPE_GARY:
    case NPC_TYPE_SQUIDWARD:
    case NPC_TYPE_SQUIDWARD_MUSIC:
    case NPC_TYPE_SQUIDWARD_BANDAID:
    case NPC_TYPE_DUTCHMAN_NSB:
    case NPC_TYPE_SANDYNPC:
    case NPC_TYPE_PATNPC:
    case NPC_TYPE_BOBNPC:
    case NPC_TYPE_PLANKNPC:
    case NPC_TYPE_MRKRABS:
    case NPC_TYPE_MSPUFFS:
    case NPC_TYPE_LARRY:
    case NPC_TYPE_MOTORIST:
    case NPC_TYPE_MERMAN:
    case NPC_TYPE_BARNACLEBOY:
    case NPC_TYPE_WORM:
    {
        vil = new (who, growCtxt) zNPCFish(who);
        break;
    }
    case NPC_TYPE_BUBBUDDY:
    {
        vil = new (who, growCtxt) zNPCBubbleBuddy(who);
        break;
    }
    case NPC_TYPE_BALLOONBOY:
    {
        vil = new (who, growCtxt) zNPCBalloonBoy(who);
        break;
    }
    case NPC_TYPE_SANDYBIKINI:
    {
        vil = new (who, growCtxt) zNPCSandyBikini(who);
        break;
    }
    case NPC_TYPE_MERMANCHAIR:
    {
        vil = new (who, growCtxt) zNPCMerManChair(who);
        break;
    }
    case NPC_TYPE_NEWSFISH:
    {
        vil = new (who, growCtxt) zNPCNewsFish(who);
        break;
    }
    case NPC_TYPE_NEWSFISHTV:
    {
        vil = new (who, growCtxt) zNPCNewsFishTV(who);
        break;
    }
    default:
    {
        vil = new (who, growCtxt) zNPCVillager(who);
        break;
    }
    }

    return vil;
}

void ZNPC_Destroy_Villager(xFactoryInst* inst)
{
    delete inst;
}

xAnimTable* ZNPC_AnimTable_Villager()
{
    return ZNPC_AnimTable_Villager(NULL);
}




xAnimTable* ZNPC_AnimTable_BalloonBoy()
{
    return ZNPC_AnimTable_BalloonBoy(NULL);
}




xAnimTable* ZNPC_AnimTable_SuperFriend()
{
    return ZNPC_AnimTable_SuperFriend(NULL);
}







































                   
























    
    
















































                   




































                   

































                   









                   


































/*
void FOLK_InitEffects()
{
    g_pemit_aqualeak = zParEmitterFind(zNPCTypeVillager_stringBase0 + 0x4b6);
    g_parf_aqualeak.custom_flags = 0x300; // 0x138
    xVec3Copy((xVec3*)&g_parf_aqualeak.pos, (xVec3*)&g_O3); // 0x140
    xVec3Copy((xVec3*)&g_parf_aqualeak.vel, (xVec3*)&g_O3); // 0x14c
}
*/

void FOLK_KillEffects()
{
}




































                   





























































void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
