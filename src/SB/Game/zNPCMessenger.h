#ifndef ZNPCMESSENGER_H
#define ZNPCMESSENGER_H

#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"

void zNPCMsg_SceneReset();
void zNPCMsg_ScenePrepare();
void zNPCMsg_Startup();
void zNPCMsg_Shutdown();
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES toNPCType);

struct NPCPSClt {
    // total size: 0x10
    void (* notify)(void *, class NPCMsg *); // offset 0x0, size 0x4
    void * notedata; // offset 0x4, size 0x4
    signed int flg_filter; // offset 0x8, size 0x4
    class NPCPSClt * next; // offset 0xC, size 0x4
};

struct NPCPSData {
    // total size: 0x30
     NPCPSClt * cltblob; // offset 0x0, size 0x4
     NPCPSClt * cltfree; // offset 0x4, size 0x4
     st_XORDEREDARRAY cltlist; // offset 0x8, size 0x10
     NPCMsg * msgblob; // offset 0x18, size 0x4
     NPCMsg * msgfree; // offset 0x1C, size 0x4
     st_XORDEREDARRAY quelist; // offset 0x20, size 0x10
};

#endif
