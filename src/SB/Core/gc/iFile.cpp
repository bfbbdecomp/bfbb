#include "iFile.h"

#include "iTRC.h"

#include "xFile.h"
#include "xMath.h"
#include "xTRC.h"

#include <string.h>

struct file_queue_entry
{
    tag_xFile* file;
    void* buf;
    U32 size;
    U32 offset;
    IFILE_READSECTOR_STATUS stat;
    void (*callback)(tag_xFile* file);
    U32 asynckey;
};

file_queue_entry file_queue[4];

static U32 tbuffer[1024 + 8];
static U32* buffer32;
volatile U32 iFileSyncAsyncReadActive;

void iFileInit()
{
    buffer32 = (U32*)OSRoundUp32B(tbuffer);
}

void iFileExit()
{
}

U32* iFileLoad(char* name, U32* buffer, U32* size)
{
    char path[128];
    tag_xFile file;
    S32 fileSize, alignedSize;

    iFileFullPath(name, path);
    iFileOpen(name, IFILE_OPEN_ABSPATH, &file);

    fileSize = iFileGetSize(&file);

    if (!buffer)
    {
        buffer = (U32*)OSAlloc(OSRoundUp32B(fileSize));
    }

    alignedSize = OSRoundUp32B(fileSize);

    iFileRead(&file, buffer, alignedSize);

    if (size)
    {
        *size = alignedSize;
    }

    iFileClose(&file);

    return buffer;
}

U32 iFileOpen(const char* name, S32 flags, tag_xFile* file)
{
    tag_iFile* ps = &file->ps;

    if (flags & IFILE_OPEN_ABSPATH)
    {
        strcpy(ps->path, name);
    }
    else
    {
        iFileFullPath(name, ps->path);
    }

    ps->entrynum = DVDConvertPathToEntrynum(ps->path);

    if (ps->entrynum == -1)
    {
        return 1;
    }

    if (!DVDFastOpen(ps->entrynum, &ps->fileInfo))
    {
        ps->entrynum = -1;
        return 1;
    }

    ps->unkC4 = 0;
    ps->flags = 0x1;

    iFileSeek(file, 0, IFILE_SEEK_SET);

    return 0;
}

S32 iFileSeek(tag_xFile* file, S32 offset, S32 whence)
{
    tag_iFile* ps = &file->ps;
    S32 position, new_pos;

    switch (whence)
    {
    case IFILE_SEEK_SET:
    {
        new_pos = offset;
        break;
    }
    case IFILE_SEEK_CUR:
    {
        if (DVDGetCommandBlockStatus(&ps->fileInfo.cb) == DVD_STATE_BUSY)
        {
            return -1;
        }

        new_pos = offset + ps->offset;
        break;
    }
    case IFILE_SEEK_END:
    {
        new_pos = ps->fileInfo.length - offset;

        if (new_pos < 0)
        {
            new_pos = 0;
        }

        break;
    }
    default:
    {
        new_pos = offset;
        break;
    }
    }

    ps->offset = new_pos;

    return ps->offset;
}

static void ifilereadCB(tag_xFile* file)
{
    iFileSyncAsyncReadActive = 0;
}

U32 iFileRead(tag_xFile* file, void* buf, U32 size)
{
    tag_iFile* ps = &file->ps;

    iFileSeek(file, ps->offset, IFILE_SEEK_SET);

    iFileSyncAsyncReadActive = 1;

    iFileReadAsync(file, buf, size, ifilereadCB, 0);

    while (iFileSyncAsyncReadActive)
    {
        iTRCDisk::CheckDVDAndResetState();
    }

    return size;
}

static void async_cb(s32 result, DVDFileInfo* fileInfo)
{
    file_queue_entry* entry = &file_queue[(S32)fileInfo->cb.userData];
    s32 r7 = DVD_RESULT_FATAL_ERROR;

    switch (result)
    {
    case DVD_RESULT_FATAL_ERROR:
    {
        xTRCDisk(TRC_DiskFatal);
        return;
    }
    case DVD_RESULT_GOOD:
    case DVD_RESULT_IGNORED:
    {
        if (result >= DVD_RESULT_GOOD)
        {
            r7 = result;
        }

        break;
    }
    }

    if (r7 < DVD_RESULT_GOOD)
    {
        entry->stat = IFILE_RDSTAT_FAIL;

        if (entry->callback)
        {
            entry->callback(entry->file);
        }
    }
    else if (r7 + entry->offset >= entry->size ||
             r7 + entry->offset + entry->file->ps.offset >= entry->file->ps.fileInfo.length)
    {
        entry->stat = IFILE_RDSTAT_DONE;
        entry->offset = entry->size;

        if (entry->callback)
        {
            entry->callback(entry->file);
        }

        entry->file->ps.asynckey = -1;
    }
    else
    {
        entry->offset += r7;
        entry->stat = IFILE_RDSTAT_INPROG;

        s32 length;
        if ((entry->size - entry->offset < 0x8000))
        {
            length = ALIGN(entry->size - entry->offset, 4);
        }
        else
        {
            length = 0x10000 - 0x8000;
        }

        if (length + entry->offset + entry->file->ps.offset > entry->file->ps.fileInfo.length)
        {
            // length = OSRoundUp32B(entry->file->ps.fileInfo.length - entry->file->ps.offset -
            //     entry->offset);
            length = entry->file->ps.fileInfo.length;
            length -= entry->file->ps.offset;
            length -= entry->offset;
            length = length + 32 - 1;
            length = length & ~(32 - 1);
        }

        void* addr = (void*)((U32)entry->buf + entry->offset);
        DVDReadAsync(&entry->file->ps.fileInfo, addr, length,
                     entry->file->ps.offset + entry->offset, async_cb);
    }
}

S32 iFileReadAsync(tag_xFile* file, void* buf, U32 aSize, void (*callback)(tag_xFile*),
                   S32 priority)
{
    static S32 fopcount = 1;
    tag_iFile* ps = &file->ps;
    S32 i;

    for (i = 0; i < 4; i++)
    {
        if (file_queue[i].stat != IFILE_RDSTAT_QUEUED && file_queue[i].stat != IFILE_RDSTAT_INPROG)
        {
            S32 id = fopcount++ << 2;
            S32 asynckey = id + i;

            file_queue[i].file = file;
            file_queue[i].buf = buf;
            file_queue[i].size = aSize;
            file_queue[i].offset = 0;
            file_queue[i].stat = IFILE_RDSTAT_QUEUED;
            file_queue[i].callback = callback;
            file_queue[i].asynckey = asynckey;

            aSize = (aSize < 32) ? ALIGN(aSize, 4) : 32;

            ps->fileInfo.cb.userData = (void*)i;

            DVDReadAsync(&ps->fileInfo, buf, aSize, ps->offset, async_cb);

            ps->asynckey = asynckey;

            return id + i;
        }
    }

    return -1;
}

IFILE_READSECTOR_STATUS iFileReadAsyncStatus(S32 key, S32* amtToFar)
{
    if (key != file_queue[key & 0x3].asynckey)
    {
        return IFILE_RDSTAT_EXPIRED;
    }

    if (amtToFar)
    {
        *amtToFar = file_queue[key & 0x3].offset;
    }

    return file_queue[key & 0x3].stat;
}

U32 iFileClose(tag_xFile* file)
{
    tag_iFile* ps = &file->ps;
    S32 ret;

    ret = DVDClose(&file->ps.fileInfo);
    ret = DVDClose(&file->ps.fileInfo);

    if (!ret)
    {
        return 1;
    }

    ps->flags = 0;
    return 0;
}

U32 iFileGetSize(tag_xFile* file)
{
    return file->ps.fileInfo.length;
}

void iFileReadStop()
{
    DVDCancelAllAsync(NULL);
}

void iFileFullPath(const char* relname, char* fullname)
{
    strcpy(fullname, relname);
}

void iFileSetPath(char* path)
{
}

U32 iFileFind(const char* name, tag_xFile* file)
{
    return iFileOpen(name, 0, file);
}

void iFileGetInfo(tag_xFile* file, U32* addr, U32* length)
{
    if (addr)
    {
        *addr = file->ps.fileInfo.startAddr;
    }

    if (length)
    {
        *length = file->ps.fileInfo.length;
    }
}
