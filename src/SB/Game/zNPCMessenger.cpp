#include "zNPCMessenger.h"

#include "xordarray.h"
#include <types.h>

static NPCPSData g_postoffice;

NPCPSData* NPCPS_postOffice()
{
    return &g_postoffice;
}

void zNPCCommon::Stun(F32)
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
    // LW - 50% match
    // probably a simple fix
    NPCPSData* tempQue;

    tempQue = NPCPS_postOffice();

    XOrdAppend(((st_XORDEREDARRAY*)tempQue + 0x2), NULL);
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

void NPCPS_grabMsg()
{
}

void NPCPS_freeMsg(NPCMsg*)
{
}

void zNPCMsg_Startup()
{
    NPCPSData* tempStartup;

    tempStartup = NPCPS_postOffice();
    NPCPS_CltPoolInit(tempStartup, 0x20);
    NPCPS_MsgPoolInit(tempStartup, 0x40);
}

void zNPCMsg_SceneReset()
{
    NPCPSData* tempReset;

    tempReset = NPCPS_postOffice();
    NPCPS_CltPoolReset(tempReset);
    NPCPS_MsgPoolReset(tempReset);
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
