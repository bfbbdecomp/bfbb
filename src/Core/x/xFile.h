#ifndef XFILE_H
#define XFILE_H

#include "../p2/iFile.h"

enum XFILE_READSECTOR_STATUS
{
    XFILE_RDSTAT_NOOP,
    XFILE_RDSTAT_INPROG,
    XFILE_RDSTAT_DONE,
    XFILE_RDSTAT_FAIL,
    XFILE_RDSTAT_QUEUED,
    XFILE_RDSTAT_EXPIRED
};

struct tag_xFile
{
    char relname[32];
    tag_iFile ps;
    void* user_data;
};

XFILE_READSECTOR_STATUS xFileReadAsyncStatus(int32 key, int32* amtToFar);

#endif