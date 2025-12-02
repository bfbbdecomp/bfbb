#include "zNPCMessenger.h"

#include "math.h"
#include "xEnt.h"
#include "xordarray.h"
#include "xMathInlines.h"
#include "zGlobals.h"
#include "zNPCMgr.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypeRobot.h"
#include "zNPCTypes.h"
#include <types.h>

static NPCPSData g_postoffice = {};
static S32 g_lockarea;

// see comment in header for why this is declared here
static S32 NPCPS_flagForMID(en_NPC_MSG_ID);

void zNPCMsg_Startup()
{
    NPCPSData* tempStartup;

    tempStartup = NPCPS_postOffice();
    NPCPS_CltPoolInit(tempStartup, 0x20);
    NPCPS_MsgPoolInit(tempStartup, 0x40);
}

void zNPCMsg_Shutdown()
{
}

void zNPCMsg_ScenePrepare()
{
}

void zNPCMsg_SceneFinish()
{
    return zNPCMsg_SceneReset();
}

void zNPCMsg_SceneReset()
{
    NPCPSData* tempReset;

    tempReset = NPCPS_postOffice();
    NPCPS_CltPoolReset(tempReset);
    NPCPS_MsgPoolReset(tempReset);
}

void zNPCMsg_Timestep(xScene*, F32 dt)
{
    NPCPSData* office = NPCPS_postOffice();

    for (S32 i = office->quelist.cnt - 1; i >= 0; i--)
    {
        NPCMsg* inmsg = (NPCMsg*)office->quelist.list[i];

        inmsg->tmr_delay = MAX(-1.0f, inmsg->tmr_delay - dt);

        if (inmsg->tmr_delay < 0.0f)
        {
            zNPCMsg_SendMsg(inmsg, -1.0f, 0);

            XOrdRemove(&office->quelist, 0, i);

            NPCPS_freeMsg(inmsg);
        }
    }
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, U32 npc_id)
{
    static NPCMsg msg;
    memset(&msg, 0, sizeof(NPCMsg));
    msg.msgid = msgevent;
    msg.sendto = npc_id;
    // float scheduling issue
    zNPCMsg_SendMsg(&msg, -1.0f, 0);
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, zNPCCommon* npc_sendto)
{
    static NPCMsg msg;
    memset(&msg, 0, sizeof(NPCMsg));
    msg.msgid = msgevent;
    msg.sendto = npc_sendto->id;
    // float scheduling issue
    zNPCMsg_SendMsg(&msg, -1.0f, npc_sendto);
}

void zNPCMsg_SendMsg(NPCMsg* inmsg, zNPCCommon* npc_sendto)
{
    zNPCMsg_SendMsg(inmsg, -1.0f, npc_sendto);
}

void zNPCMsg_SendMsg(NPCMsg* inmsg, F32 delay, zNPCCommon* npc_sendto)
{
    if (delay > 0.0f)
    {
        S32 grabMsg = NPCPS_grabMsg();
        if (grabMsg != NULL)
        {
            NPCPS_copyMsgInfo((NPCMsg*)grabMsg, inmsg, delay);
            NPCPS_queMessage((NPCMsg*)grabMsg);
        }
        else
        {
            zNPCMsg_SendMsg(inmsg, -1.0f, npc_sendto);
        }
    }
    else
    {
        if (npc_sendto == NULL)
        {
            st_XORDEREDARRAY* npclist = zNPCMgr_GetNPCList();
            S32 idx = XOrdLookup(npclist, (const void*)inmsg->sendto, zNPCMgr_OrdTest_npcid);
            if (idx >= 0)
            {
                npc_sendto = (zNPCCommon*)npclist->list[idx];
            }
        }
        if (npc_sendto != NULL)
        {
            npc_sendto->NPCMessage(inmsg);
        }
        NPCPSData* npcps = NPCPS_postOffice();
        S32 midFlag = NPCPS_flagForMID(inmsg->msgid);
        for (S32 i = 0; i < npcps->cltlist.cnt; i++)
        {
            NPCPSClt* clt = (NPCPSClt*)npcps->cltlist.list[i];
            if ((clt->flg_filter & midFlag) != 0)
            {
                clt->notify(clt->notedata, inmsg);
            }
        }
    }
}

static void NPCPS_copyMsgInfo(NPCMsg* msgA, NPCMsg* msgB, F32 delay)
{
    memcpy(msgA, msgB, 0x44);
    msgA->next = NULL;
    msgA->tmr_delay = delay;
}

static void NPCPS_queMessage(NPCMsg* msg)
{
    NPCPSData* npc = NPCPS_postOffice();
    XOrdAppend(&npc->quelist, msg);
}

static S32 NPCPS_flagForMID(en_NPC_MSG_ID)
{
    return NPC_MID_DTRON_NPCAVAIL;
}

static void NPCPS_MsgPoolInit(NPCPSData* npc, S32 unk)
{
    XOrdInit(&npc->quelist, unk, 0);
    npc->msgblob = (NPCMsg*)xMemAlloc(gActiveHeap, unk * sizeof(NPCMsg), 0);
    memset(npc->msgblob, 0, unk * sizeof(NPCMsg));
    NPCPS_MsgPoolReset(npc);
}

static void NPCPS_MsgPoolReset(NPCPSData* npc)
{
    npc->quelist.cnt = 0;
    S32 max_msgs = npc->quelist.max;
    memset(npc->msgblob, 0, max_msgs * sizeof(NPCMsg));
    npc->msgfree = NULL;

    for (S32 i = 0; i < max_msgs; i++)
    {
        NPCMsg* current_msg = &npc->msgblob[i];

        current_msg->next = npc->msgfree;
        npc->msgfree = current_msg;
    }
}

static void NPCPS_CltPoolInit(NPCPSData* npc, S32 unk)
{
    XOrdInit(&npc->cltlist, unk, 0);
    npc->cltblob = (NPCPSClt*)xMemAlloc(gActiveHeap, unk * 16, 0);
    memset(npc->cltblob, 0, unk * 16);
    NPCPS_CltPoolReset(npc);
}

static void NPCPS_CltPoolReset(NPCPSData* npc)
{
    S32 max_clts = npc->cltlist.max;
    memset(npc->cltblob, 0, max_clts * sizeof(NPCPSClt));
    npc->cltfree = NULL;
    for (S32 i = 0; i < max_clts; i++)
    {
        NPCPSClt* current_clt = &npc->cltblob[i];

        current_clt->next = npc->cltfree;
        npc->cltfree = current_clt;
    }
    npc->cltlist.cnt = 0;
}

static NPCPSData* NPCPS_postOffice()
{
    return &g_postoffice;
}

static S32 NPCPS_grabMsg()
{
    NPCPSData* npc = NPCPS_postOffice();
    NPCMsg* grabbed_msg = npc->msgfree;
    if (grabbed_msg == NULL)
    {
        return 0;
    }
    npc->msgfree = grabbed_msg->next;
    grabbed_msg->next = NULL;
    return (S32)grabbed_msg;
}

static void NPCPS_freeMsg(NPCMsg* inmsg)
{
    NPCPSData* post_office = NPCPS_postOffice();
    inmsg->next = post_office->msgfree;
    post_office->msgfree = inmsg;
}

static NPCMsg g_msgdata;

void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES toNPCType)
{
    if (g_lockarea == 0)
    {
        g_lockarea = 1;
        // sda scheduling issue
        en_NPCTYPES toTypes[2] = { toNPCType, NPC_TYPE_UNKNOWN };
        memset(&g_msgdata, 0, sizeof(NPCMsg));
        g_msgdata.from = (sender != NULL) ? (en_NPC_MSG_ID)sender->id : (en_NPC_MSG_ID)'FAKE';
        g_msgdata.msgid = msgid;
        g_msgdata.sendto = 0;
        g_msgdata.infotype = NPC_MDAT_BLANK;
        zNPCMsg_AreaNotify(sender, &g_msgdata, rad, filter, toTypes);
        g_lockarea = 0;
    }
}

void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES* toNPCType)
{
    if (g_lockarea == 0)
    {
        g_lockarea = 1;
        memset(&g_msgdata, 0, sizeof(NPCMsg));
        en_NPC_MSG_ID from_id;
        g_msgdata.from = (sender != NULL) ? (en_NPC_MSG_ID)sender->id : (en_NPC_MSG_ID)'FAKE';
        g_msgdata.msgid = msgid;
        g_msgdata.sendto = 0;
        g_msgdata.infotype = NPC_MDAT_BLANK;
        zNPCMsg_AreaNotify(sender, &g_msgdata, rad, filter, toNPCType);
        g_lockarea = 0;
    }
}

void zNPCMsg_AreaNotify(zNPCCommon* sender, NPCMsg* msg, F32 radius, S32 filter,
                        en_NPCTYPES* npcTypeList)
{
    F32 radiusSq = SQ(radius);
    st_XORDEREDARRAY* npclist = zNPCMgr_GetNPCList();
    xVec3 checkPos;

    if (filter & 0x100)
    {
        xVec3Copy(&checkPos, xEntGetPos(&globals.player.ent));
    }
    else if (sender != NULL)
    {
        xVec3Copy(&checkPos, sender->Pos());
    }
    else
    {
        xVec3Copy(&checkPos, &g_O3);
    }

    if (msg->infotype == 0)
    {
        xVec3Copy(&msg->target.pos_tgt, &checkPos);
        msg->target.bas_tgt = sender;
        msg->infotype = NPC_MDAT_AREANOTIFY;
    }

    for (S32 i = 0; i < npclist->cnt; i++)
    {
        zNPCCommon* targetNPC = ((zNPCCommon**)npclist->list)[i];

        if (!(filter & 0x800))
        {
            if ((targetNPC->baseFlags & 0x40))
            {
                continue;
            }
        }

        if (sender != NULL && !(filter & 0x8) && targetNPC == (zNPCCommon*)sender)
        {
            continue;
        }

        S32 targetNPCType = targetNPC->SelfType();

        if (sender != NULL && (filter & 0x200) && (targetNPCType != sender->SelfType()))
        {
            continue;
        }

        if (npcTypeList != NULL && *npcTypeList != NPC_TYPE_UNKNOWN)
        {
            en_NPCTYPES* typePtr = npcTypeList;
            S32 inList = TRUE;

            while (*typePtr != NPC_TYPE_UNKNOWN)
            {
                if (targetNPCType == *typePtr)
                {
                    inList = FALSE;
                    break;
                }
                typePtr++;
            }

            if (inList)
            {
                continue;
            }
        }

        if ((filter & 0x10) == 0)
        {
            U32 typePrefix = targetNPCType & 0xffffff00;

            if (typePrefix != 'NTT\0' && typePrefix != 'NTR\0' && typePrefix != 'NTF\0')
            {
                continue;
            }

            if ((typePrefix == 'NTT\0' && !(filter & 0x1)) ||
                (typePrefix == 'NTR\0' && !(filter & 0x2)) ||
                (typePrefix == 'NTF\0' && !(filter & 0x4)))
            {
                continue;
            }
        }

        if (!(filter & 0x400) && !targetNPC->IsAlive())
        {
            continue;
        }

        xVec3 vecDiff;
        xVec3Sub(&vecDiff, xEntGetPos((xEnt*)targetNPC), &checkPos);

        if (FABS(vecDiff.y) > 2.0f)
        {
            continue;
        }

        vecDiff.y = 0.0f;
        if (xVec3Length2(&vecDiff) > radiusSq)
        {
            continue;
        }

        msg->sendto = targetNPC->id;
        targetNPC->NPCMessage(msg);
    }
}

void zNPCMsg_AreaPlayerStun(F32 stuntime, F32 radius, xVec3* pos)
{
    st_XORDEREDARRAY* npclist = zNPCMgr_GetNPCList();
    xVec3 from;

    if (pos != NULL)
    {
        xVec3Copy(&from, pos);
    }
    else
    {
        xVec3Copy(&from, xEntGetPos(&globals.player.ent));
    }

    F32 ds2_discard = SQ(radius);

    for (S32 i = 0; i < npclist->cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist->list[i];

        if (((npc->baseFlags & 0x40) == 0) &&
            (npc->model == NULL || (npc->model->Flags & 0x400) == 0) &&
            (npc->flg_vuln & 0x10000000))
        {
            U32 ntyp = npc->SelfType();

            if ((ntyp & 0xFFFFFF00) == 'NTR\0')
            {
                zNPCRobot* robo = (zNPCRobot*)npc;
                if (robo->IsDying())
                {
                    continue;
                }
            }
            else
            {
                if (!npc->IsAlive())
                {
                    continue;
                }
            }

            xVec3 diff;
            npc->XYZVecToPos(&diff, &from);

            if (FABS(diff.y) > radius)
            {
                continue;
            }
            diff.y = 0.0f;
            if (xVec3Length2(&diff) > ds2_discard)
            {
                continue;
            }
            npc->Stun(stuntime);
        }
    }
}

void zNPCMsg_AreaNPCExplodeNoRobo(zNPCCommon* who, F32 radius, const xVec3* pos_fromHere)
{
    st_XORDEREDARRAY* npclist = zNPCMgr_GetNPCList();
    xVec3 from = (pos_fromHere != NULL) ? *pos_fromHere : *who->Center();
    F32 ds2_discard = SQ(radius);
    for (S32 i = 0; i < npclist->cnt; i++)
    {
        zNPCCommon* npc = (zNPCCommon*)npclist->list[i];
        if (npc == who)
        {
            continue;
        }
        if (npc->baseFlags & 0x40)
        {
            continue;
        }
        if (npc->model != NULL && (npc->model->Flags & 0x400) != 0)
        {
            continue;
        }
        S32 ntyp = npc->SelfType() & 0xFFFFFF00;
        if (ntyp == 'NTR\0')
        {
            continue;
        }
        xVec3 diff;
        F32 ds2_tgt = npc->XYZDstSqToPos(&from, &diff);
        if (ds2_tgt > ds2_discard)
        {
            continue;
        }
        if (ntyp == 'NTR\0')
        {
            zNPCRobot* robo = (zNPCRobot*)npc;
            if (robo->IsDying() != 0)
            {
                continue;
            }
        }
        else if (npc->IsAlive() == 0)
        {
            continue;
        }
        F32 dst = xsqrt(ds2_tgt);
        if (dst > 0.00001f)
        {
            diff /= dst;
        }
        else
        {
            if (FABS(diff.x) > FABS(diff.z))
            {
                diff = (diff.x > 0.0f) ? g_X3 : g_NX3;
            }
            else
            {
                diff = (diff.z > 0.0f) ? g_Z3 : g_NZ3;
            }
        }
        npc->Damage(DMGTYP_HITBYTOSS, who, &diff);
    }
}
