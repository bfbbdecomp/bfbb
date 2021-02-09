#ifndef ZNPCMESSENGER_H
#define ZNPCMESSENGER_H

#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"

void zNPCMsg_Startup();
void zNPCMsg_Shutdown();
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, float32 rad, int32 filter,
                        en_NPCTYPES toNPCType);

#endif