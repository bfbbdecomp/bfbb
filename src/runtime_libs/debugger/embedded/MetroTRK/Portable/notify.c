
#include "PowerPC_EABI_Support/MetroTRK/trk.h"

inline DSError TRKWaitForACK(TRKBuffer* msg, MessageCommandID cmd)
{
    if (msg->position >= 0x880)
    {
        return DS_MessageBufferOverflow;
    }
    msg->data[msg->position++] = cmd;
    msg->length += 1;
    return DS_NoError;
}

DSError TRKDoNotifyStopped(u8 cmd)
{
    DSError err;
    int reqIdx;
    TRKBuffer* msg;
    int bufIdx;

    // &msg
    // &bufIdx

    err = TRKGetFreeBuffer(&bufIdx, &msg);
    if (err == DS_NoError)
    {
        err = TRKWaitForACK(msg, cmd);

        if (err == DS_NoError)
        {
            if (cmd == DSMSG_NotifyStopped)
            {
                TRKTargetAddStopInfo(msg);
            }
            else
            {
                TRKTargetAddExceptionInfo(msg);
            }
        }

        err = TRKRequestSend(msg, &reqIdx, 2, 3, 1);
        if (err == DS_NoError)
        {
            TRKReleaseBuffer(reqIdx);
        }
        TRKReleaseBuffer(bufIdx);
    }

    return err;
}
