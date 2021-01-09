#ifndef IFILE_H
#define IFILE_H

#include <types.h>
#include <dolphin.h>

enum IFILE_READSECTOR_STATUS
{
    IFILE_RDSTAT_NOOP,
    IFILE_RDSTAT_INPROG,
    IFILE_RDSTAT_DONE,
    IFILE_RDSTAT_FAIL,
    IFILE_RDSTAT_QUEUED,
    IFILE_RDSTAT_EXPIRED
};

#ifdef GAMECUBE
struct tag_iFile
{
    uint32 flags;
    char path[128];
    int32 entrynum;
    DVDFileInfo fileInfo;
    int32 unkC4;
    int32 asynckey;
    int32 unknown[7];
    int32 unkE8;
    int32 offset;
};
#else
#ifdef PS2
struct tag_iFile
{
    uint32 flags;
    char path[128];
    int32 fd;
    int32 offset;
    int32 length;
};
#endif
#endif

#define IFILE_SEEK_SET 0
#define IFILE_SEEK_CUR 1
#define IFILE_SEEK_END 2

struct tag_xFile;

uint32 iFileOpen(const char* name, int32 flags, tag_xFile* file);
int32 iFileSeek(tag_xFile* file, int32 offset, int32 whence);
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int32 key, int32* amtToFar);
int32 iFileReadAsync(tag_xFile* file, void* buf, uint32 aSize, void (*callback)(tag_xFile*),
                     int32 priority);
void iFileReadStop();

#endif