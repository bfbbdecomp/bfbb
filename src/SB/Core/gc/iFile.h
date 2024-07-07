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
    U32 flags;
    char path[128];
    S32 entrynum;
    DVDFileInfo fileInfo;
    S32 unkC4;
    S32 asynckey;
    S32 unknown[7];
    S32 unkE8;
    S32 offset;
};
#else
#ifdef PS2
struct tag_iFile
{
    U32 flags;
    char path[128];
    S32 fd;
    S32 offset;
    S32 length;
};
#endif
#endif

#define IFILE_OPEN_READ 0x1
#define IFILE_OPEN_WRITE 0x2
#define IFILE_OPEN_ABSPATH 0x4

#define IFILE_SEEK_SET 0
#define IFILE_SEEK_CUR 1
#define IFILE_SEEK_END 2

struct tag_xFile;

void iFileInit();
void iFileExit();
U32* iFileLoad(char* name, U32* buffer, U32* size);
U32 iFileOpen(const char* name, S32 flags, tag_xFile* file);
S32 iFileSeek(tag_xFile* file, S32 offset, S32 whence);
U32 iFileRead(tag_xFile* file, void* buf, U32 size);
S32 iFileReadAsync(tag_xFile* file, void* buf, U32 aSize, void (*callback)(tag_xFile*),
                     S32 priority);
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(S32 key, S32* amtToFar);
U32 iFileClose(tag_xFile* file);
U32 iFileGetSize(tag_xFile* file);
void iFileReadStop();
void iFileFullPath(const char* relname, char* fullname);
void iFileSetPath(char* path);
U32 iFileFind(const char* name, tag_xFile* file);
void iFileGetInfo(tag_xFile* file, U32* addr, U32* length);
void iFileAsyncService();

#endif
