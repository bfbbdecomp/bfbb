#ifndef XFILE_H
#define XFILE_H

#include "iFile.h"

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

void xFileSetUserData(tag_xFile* file, void* userdata);
XFILE_READSECTOR_STATUS xFileReadAsyncStatus(S32 key, S32* amtToFar);

#endif
