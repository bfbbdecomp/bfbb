#include "zNPCMessenger.h"

#include <types.h>

static NPCPSData g_postoffice;

void zNPCCommon::Stun(F32)
{
}

void zNPCMSg_Startup()
{
}

void zNPCMsg_ScenePrepare()
{
}

void zNPCMsg_SceneFinish()
{
    return zNPCMsg_SceneReset();
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID, U8)
{
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID, zNPCCommon*)
{
}

void zNPCMsg_SendMsg(NPCMsg*, zNPCCommon*)
{
}

void zNPCMsg_SendMsg(NPCMsg*, float, zNPCCommon*)
{
}

void NPCPS_copyMsgInfo(NPCMsg*, NPCMsg*, float)
{
}

void NPCPS_queMessage(NPCMsg*)
{
}

S32 NPCPS_flagForMID(en_NPC_MSG_ID)
{
    return 7;
}

F32 NPCPS_MsgPoolInit(NPCPSData*, int)
{
    return 0;
}

void NPCPS_MsgPoolReset(NPCPSData*)
{
}

F32 NPCPS_CltPoolInit(NPCPSData*, int)
{
    return 0;
}

void NPCPS_CltPoolReset(NPCPSData*)
{
}

NPCPSData* NPCPS_postOffice()
{
    return &g_postoffice;
}

void NPCPS_grabMsg()
{
}

void NPCPS_freeMsg(NPCMsg*)
{
}

void zNPCMsg_SceneReset()
{
    //  57% there but not quite
    NPCPS_CltPoolReset(NPCPS_postOffice());
    NPCPS_MsgPoolReset(NPCPS_postOffice());
    return;
}

void zNPCMsg_Timestep(xScene*, float)
{
}

void zNPCMsg_Shutdown()
{
}

S32 zNPCCommon::IsAlive()
{
    return 1;
}
