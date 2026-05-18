#include "bink.h"
#include "binkngc.h"
#include "ngcfile.h"
#include "ngcrgb.h"

#include <dolphin/dvd/dvd.h>
#include <dolphin/dvd/dvdfs.h>
#include <dolphin/os/OSInterrupt.h>

void PTR4* memmove(void PTR4* dest, const void PTR4* src, u32 len);

typedef enum NGCBinkFileOwnership
{
    NGC_FILE_OWNS_DVD,
    NGC_FILE_BORROWS_DVD
} NGCBinkFileOwnership;

typedef struct NGCBinkIOData
{
    DVDFileInfo file;
    u32 read_cursor;    /* file-relative byte offset scheduled/read from DVD */
    u32 align_extra;    /* extra bytes requested to satisfy DVD alignment */
    u32 consume_cursor; /* file-relative byte offset consumed by Bink */
    u8 PTR4* read_ptr;  /* ring-buffer read pointer */
    u32 free_size;      /* free bytes remaining in the ring buffer */
    u8 PTR4* buffer;
    u8 PTR4* buffer_end;
    u8 PTR4* write_ptr; /* ring-buffer write pointer for async DVD fills */
    NGCBinkFileOwnership borrowed_file;
    u32 file_offset;    /* base offset when reading from a borrowed DVDFileInfo */
    u32 file_size;
    u32 simulate_rate;  /* nonzero throttles reads to this byte/sec rate */
    s32 simulate_delay; /* accumulated milliseconds still to wait */
    BOOL cancel_read;      /* suppresses async callback accounting while canceling DVD reads */
    BOOL callback_working; /* snapshot of BINKIO.Working when the async read was kicked */
    u32 read_start_time;   /* RADTimerRead value for the active read */
    BINKIO PTR4* owner;    /* parent BINKIO recovered from DVDFileInfo callback argument */
} NGCBinkIOData;

typedef char NGCBinkIODataFitsInBinkIOData
    [(sizeof(NGCBinkIOData) <= sizeof(((BINKIO PTR4*)0)->iodata)) ? 1 : -1];

u32 ytable[RGB_LUMA_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 ytable_x4[RGB_LUMA_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 PTR4* clamp_ytable[RGB_LUMA_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamptable[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_a4[RGB_LUMA_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_r[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_g[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_b[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_rh[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_gh[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_bh[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_rr[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_gg[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 clamp_bb[RGB_CLAMP_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 mono16[RGB_MONO_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 mono16x2[RGB_MONO_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 mono32[RGB_MONO_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
RGBContext S RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
s32 YUVTables[YUV_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };
u32 RGBshift[RGB_SHIFT_TABLE_SIZE] RAD_ATTRIBUTE_ALIGN(NGC_TABLE_ALIGNMENT) = { 0 };

#define NGC_DATA(io) ((NGCBinkIOData PTR4*)((io)->iodata))
#define NGC_DVD(io) (&NGC_DATA(io)->file)
#define NGC_READ_CURSOR(io) (NGC_DATA(io)->read_cursor)
#define NGC_ALIGN_EXTRA(io) (NGC_DATA(io)->align_extra)
#define NGC_CONSUME_CURSOR(io) (NGC_DATA(io)->consume_cursor)
#define NGC_READ_PTR(io) (NGC_DATA(io)->read_ptr)
#define NGC_FREE_SIZE(io) (NGC_DATA(io)->free_size)
#define NGC_BUFFER(io) (NGC_DATA(io)->buffer)
#define NGC_BUFFER_END(io) (NGC_DATA(io)->buffer_end)
#define NGC_WRITE_PTR(io) (NGC_DATA(io)->write_ptr)
#define NGC_BORROWED_FILE(io) (NGC_DATA(io)->borrowed_file)
#define NGC_FILE_OFFSET(io) (NGC_DATA(io)->file_offset)
#define NGC_FILE_SIZE(io) (NGC_DATA(io)->file_size)
#define NGC_SIMULATE_RATE(io) (NGC_DATA(io)->simulate_rate)
#define NGC_SIMULATE_DELAY(io) (NGC_DATA(io)->simulate_delay)
#define NGC_CANCEL_READ(io) (NGC_DATA(io)->cancel_read)
#define NGC_CALLBACK_WORKING(io) (NGC_DATA(io)->callback_working)
#define NGC_READ_START_TIME(io) (NGC_DATA(io)->read_start_time)
#define NGC_OWNER(io) (NGC_DATA(io)->owner)
#define NGC_VOLATILE_U32(field) (*(volatile u32 PTR4*)&(field))

#define NGC_DVD_ALIGNMENT DVD_MIN_TRANSFER_SIZE
#define NGC_DVD_ALIGN_MASK (NGC_DVD_ALIGNMENT - 1)
#define NGC_ALIGN_UP(value, mask) (((value) + (mask)) & ~(mask))
#define NGC_ALIGN_DOWN(value, mask) ((value) & ~(mask))
#define NGC_BYTES_LEFT_TO_READ(io) (NGC_FILE_SIZE(io) - NGC_READ_CURSOR(io))
#define NGC_BYTES_LEFT_TO_CONSUME(io) (NGC_FILE_SIZE(io) - NGC_CONSUME_CURSOR(io))
#define NGC_STACK_READ_PAYLOAD_SIZE 0x400
#define NGC_STACK_READ_BUFFER_SIZE (NGC_STACK_READ_PAYLOAD_SIZE + NGC_DVD_ALIGNMENT)
#define NGC_READ_BLOCK_SIZE 0x1000
#define NGC_READ_BLOCK_MASK (NGC_READ_BLOCK_SIZE - 1)
#define NGC_ASYNC_WHOLE_BLOCK NGC_READ_BLOCK_SIZE
#define NGC_DVD_PRIORITY_LOW 0
#define NGC_MILLISECONDS_PER_SECOND 1000
#define BINK_FILE_CURRENT_OFFSET -1
#define NGC_DVD_STATUS_FAILED(status)                                                             \
    ((status) <= DVD_STATE_IGNORED ?                                                              \
         (DVD_STATE_COVER_CLOSED <= (status) || (status) == DVD_STATE_FATAL_ERROR) :               \
         (status) == DVD_STATE_RETRY)

static void ReadKickoff(BINKIO PTR4* io);

static void intelendian(void PTR4* ptr, u32 size)
{
    register void PTR4* r3 __asm__("r3") = ptr;
    register u32 r4 __asm__("r4") = size;

    __asm__ volatile(
        "addi 4,4,3\n\t"
        "srwi 4,4,2\n\t"
        "cmpwi 4,0\n\t"
        "subi 4,4,1\n\t"
        ".long 0x4D820020\n\t"
        "li 9,0\n\t"
        "0:\n\t"
        "lwbrx 0,9,3\n\t"
        "cmpwi 4,0\n\t"
        "stw 0,0(3)\n\t"
        "subi 4,4,1\n\t"
        "addi 3,3,4\n\t"
        "bne 0b"
        : "+r"(r3), "+r"(r4)
        :
        : "r0", "r9", "memory");
}

static u32 radreadngc(DVDFileInfo PTR4* file, u32 offset, void PTR4* dest, u32 size)
{
    u8 buffer[NGC_STACK_READ_BUFFER_SIZE];
    u8 PTR4* aligned = (u8 PTR4*)NGC_ALIGN_UP((u32)buffer, NGC_DVD_ALIGN_MASK);
    u32 max_size = NGC_ALIGN_DOWN(buffer + sizeof(buffer) - 1 - aligned, NGC_DVD_ALIGN_MASK);
    u8 PTR4* out = dest;
    u32 total = 0;

    while (size != 0) {
        u32 read_size;
        s32 status;

        if (size >= max_size) {
            read_size = max_size;
        } else {
            read_size = NGC_ALIGN_UP(size, NGC_DVD_ALIGN_MASK);
        }

        DVDReadAsyncPrio(file, aligned, read_size, offset, 0, NGC_DVD_PRIORITY_LOW);

        do {
            status = DVDGetCommandBlockStatus(&file->cb);
            if (status != DVD_STATE_END) {
                if (status <= DVD_STATE_END) {
                    if (DVD_STATE_FATAL_ERROR == status) {
                        return 0;
                    }
                } else if (status <= DVD_STATE_RETRY) {
                    if (DVD_STATE_WAITING < status) {
                        return 0;
                    }
                }
            }
        } while (status != DVD_STATE_END);

        if (read_size > size) {
            read_size = size;
        }

        memcpy(out, aligned, read_size);
        out += read_size;
        total += read_size;
        offset += read_size;
        size -= read_size;
    }

    return total;
}

static u32 BinkFileReadHeader(BINKIO PTR4* io, s32 offset, void PTR4* dest, u32 size)
{
    u32 amount;
    u32 cursor;
    u32 remaining;
    u32 limit;

    if (offset != BINK_FILE_CURRENT_OFFSET && NGC_READ_CURSOR(io) != (u32)offset) {
        NGC_READ_CURSOR(io) = offset;
    }

    amount = radreadngc(NGC_DVD(io), NGC_READ_CURSOR(io) + NGC_FILE_OFFSET(io), dest, size);
    cursor = NGC_READ_CURSOR(io) + amount;
    NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) = cursor;
    cursor = NGC_VOLATILE_U32(NGC_READ_CURSOR(io));
    limit = io->BufSize;
    remaining = NGC_FILE_SIZE(io) - cursor;
    NGC_VOLATILE_U32(NGC_CONSUME_CURSOR(io)) = cursor;

    if (remaining >= limit) {
        remaining = io->BufSize;
    }

    io->CurBufSize = remaining;
    intelendian(dest, amount);
    return amount;
}

static void dosimulate(BINKIO PTR4* io, u32 read_size, u32 start)
{
    u32 last;
    u32 elapsed;
    s32 delay;

    delay = mult64anddiv(read_size, NGC_MILLISECONDS_PER_SECOND, NGC_SIMULATE_RATE(io));
    last = RADTimerRead();
    elapsed = last - start;
    delay -= elapsed;
    NGC_SIMULATE_DELAY(io) += delay;

    while (NGC_SIMULATE_DELAY(io) > 0) {
        u32 now;

        do {
            now = RADTimerRead();
        } while ((s32)(now - last) < NGC_SIMULATE_DELAY(io));

        NGC_SIMULATE_DELAY(io) -= now - last;
        last = now;
    }
}

static void DVDReadCallback(s32 result, DVDFileInfo PTR4* fileInfo)
{
    /* DVDFileInfo is the first field of NGCBinkIOData, so the callback can recover owner. */
    BINKIO PTR4* io = ((NGCBinkIOData PTR4*)fileInfo)->owner;

    if (NGC_CANCEL_READ(io) == 0) {
        u32 extra;

        if (result != NGC_ASYNC_WHOLE_BLOCK) {
            if (NGC_BYTES_LEFT_TO_READ(io) + NGC_ALIGN_EXTRA(io) != (u32)result) {
                io->DoingARead = 0;
                io->ReadError = 1;
                return;
            }
        }

        extra = NGC_ALIGN_EXTRA(io);
        if (extra != 0) {
            /* Final DVD reads are aligned upward; drop the leading alignment padding. */
            memmove(NGC_WRITE_PTR(io), NGC_WRITE_PTR(io) + extra,
                    NGC_BYTES_LEFT_TO_READ(io));
            extra = NGC_ALIGN_EXTRA(io);
            NGC_ALIGN_EXTRA(io) = 0;
            result -= extra;
        }

            io->BytesRead += result;
            {
                u8 PTR4* write = NGC_WRITE_PTR(io) + result;
                u32 cursor = NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) + result;

                NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) = cursor;
                NGC_WRITE_PTR(io) = write;

                if ((u32)write >= (u32)NGC_BUFFER_END(io)) {
                    NGC_WRITE_PTR(io) = NGC_BUFFER(io);
                }
            }

            NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = NGC_FREE_SIZE(io) - result;
            io->CurBufUsed += result;
            if (io->CurBufUsed > io->BufHighUsed) {
                io->BufHighUsed = io->CurBufUsed;
            }

            if (NGC_SIMULATE_RATE(io) != 0) {
                dosimulate(io, result, NGC_READ_START_TIME(io));
            }

            {
                u32 elapsed = RADTimerRead() - NGC_READ_START_TIME(io);

                NGC_READ_START_TIME(io) = elapsed;
                io->TotalTime += elapsed;

                if (NGC_CALLBACK_WORKING(io) != 0 || io->Working != 0) {
                    io->ThreadTime += elapsed;
                } else {
                    io->IdleTime += elapsed;
                }
            }

            io->DoingARead = 0;
            ReadKickoff(io);
    }
}

static void ReadKickoff(BINKIO PTR4* io)
{
    s32 status = DVDGetCommandBlockStatus(&NGC_DVD(io)->cb);
    u32 remaining = NGC_BYTES_LEFT_TO_READ(io);

    if (NGC_DVD_STATUS_FAILED(status)) {
        io->ReadError = 1;
        return;
    }

    if (NGC_CANCEL_READ(io) == 0 &&
        (status == DVD_STATE_END || status == DVD_STATE_CANCELED)) {
        if (NGC_FREE_SIZE(io) < NGC_READ_BLOCK_SIZE) {
            io->CurBufSize = io->CurBufUsed;
        } else if (remaining != 0) {
            NGC_CALLBACK_WORKING(io) = io->Working;
            NGC_READ_START_TIME(io) = RADTimerRead();
            io->DoingARead = 1;

            if (remaining > NGC_READ_BLOCK_SIZE) {
                remaining = NGC_READ_BLOCK_SIZE;
            } else if ((remaining & NGC_DVD_ALIGN_MASK) != 0) {
                /* DVD reads must be aligned, so the last request starts early and trims in callback. */
                NGC_ALIGN_EXTRA(io) = (-remaining) & NGC_DVD_ALIGN_MASK;
                remaining += NGC_ALIGN_EXTRA(io);
            }

            DVDReadAsyncPrio(NGC_DVD(io), NGC_WRITE_PTR(io), remaining,
                             (NGC_READ_CURSOR(io) - NGC_ALIGN_EXTRA(io)) + NGC_FILE_OFFSET(io),
                             DVDReadCallback, NGC_DVD_PRIORITY_LOW);
        } else {
            io->CurBufSize = io->CurBufUsed;
        }
    }
}

static u32 BinkFileIdle(BINKIO PTR4* io)
{
    s32 status;

    if (io->ReadError != 0) {
        return 0;
    }

    status = DVDGetCommandBlockStatus(&NGC_DVD(io)->cb);
    if (status > DVD_STATE_WAITING) {
        if (status == DVD_STATE_CANCELED) {
            return io->DoingARead;
        }
        if (status < DVD_STATE_CANCELED) {
            goto read_error;
        }
        if (status == DVD_STATE_RETRY) {
            goto read_error;
        }
        return io->DoingARead;
    }

    if (status >= DVD_STATE_BUSY) {
        return io->DoingARead;
    }
    if (status == DVD_STATE_FATAL_ERROR) {
        goto read_error;
    }
    if (status == DVD_STATE_END) {
        ReadKickoff(io);
    }
    return io->DoingARead;

read_error:
    io->ReadError = 1;
    return io->DoingARead;
}

static void CancelReadRequests(BINKIO PTR4* io)
{
    s32 status;

    NGC_CANCEL_READ(io) = 1;
    DVDCancel(&NGC_DVD(io)->cb);

    do {
        status = DVDGetCommandBlockStatus(&NGC_DVD(io)->cb);
    } while ((u32)(status - DVD_STATE_BUSY) <= (DVD_STATE_WAITING - DVD_STATE_BUSY));

    NGC_VOLATILE_U32(NGC_CANCEL_READ(io)) = 0;
    io->DoingARead = 0;
}

static u32 BinkFileReadFrame(BINKIO PTR4* io, u32 frame_num, s32 offset, void PTR4* dest, u32 size)
{
    u32 start_time;
    u32 read_time;
    u32 foreground_time;
    u32 total = 0;
    void PTR4* start_dest = dest;

    if (io->ReadError != 0) {
        return 0;
    }

    start_time = RADTimerRead();

    if (offset != BINK_FILE_CURRENT_OFFSET && NGC_CONSUME_CURSOR(io) != (u32)offset) {
        if ((u32)offset > NGC_CONSUME_CURSOR(io) && (u32)offset <= NGC_READ_CURSOR(io)) {
            BOOL enabled = OSDisableInterrupts();
            u32 skip = offset - NGC_CONSUME_CURSOR(io);
            u8 PTR4* ptr;

            /* A forward seek already buffered by DVD can be consumed by advancing the ring pointer. */
            NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = NGC_FREE_SIZE(io) + skip;
            ptr = NGC_READ_PTR(io) + skip;
            NGC_CONSUME_CURSOR(io) = offset;
            NGC_READ_PTR(io) = ptr;
            io->CurBufUsed -= skip;
            if ((u32)ptr > (u32)NGC_BUFFER_END(io)) {
                NGC_READ_PTR(io) = ptr - io->BufSize;
            }

            OSRestoreInterrupts(enabled);
        } else {
            BOOL enabled;

            /* Seeks outside the buffered window discard pending async state and restart the ring. */
            CancelReadRequests(io);
            enabled = OSDisableInterrupts();
            NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) = offset;
            NGC_CONSUME_CURSOR(io) = offset;
            NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = io->BufSize;
            io->CurBufUsed = 0;
            NGC_READ_PTR(io) = NGC_BUFFER(io);
            NGC_WRITE_PTR(io) = NGC_BUFFER(io);
            OSRestoreInterrupts(enabled);
        }
    }

    if (NGC_BUFFER(io) == 0) {
        u32 direct_start = RADTimerRead();
        u32 read;

        read = radreadngc(NGC_DVD(io), NGC_READ_CURSOR(io), dest, size);
        if (read < size) {
            io->ReadError = 1;
        }

        NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) = NGC_VOLATILE_U32(NGC_READ_CURSOR(io)) + read;
        NGC_CONSUME_CURSOR(io) += read;
        io->BytesRead += read;
        total = read;

        if (NGC_SIMULATE_RATE(io) != 0) {
            dosimulate(io, total, direct_start);
        }

        read_time = RADTimerRead();
        io->TotalTime += read_time - direct_start;
        foreground_time = io->ForegroundTime + (read_time - start_time);
    } else {
        while (size != 0 && io->ReadError == 0) {
            u32 amount;

            ReadKickoff(io);
            amount = io->CurBufUsed;
            if (amount != 0) {
                u32 first;

                if (amount > size) {
                    amount = size;
                }

                size -= amount;
                total += amount;
                NGC_CONSUME_CURSOR(io) += amount;
                first = NGC_BUFFER_END(io) - NGC_READ_PTR(io);

                /* Copy to the end of the ring first, then wrap to the buffer base. */
                if (first <= amount) {
                    BOOL enabled;

                    memcpy(dest, NGC_READ_PTR(io), first);
                    dest = (u8 PTR4*)dest + first;
                    amount -= first;
                    NGC_READ_PTR(io) = NGC_BUFFER(io);

                    enabled = OSDisableInterrupts();
                    io->CurBufUsed -= first;
                    NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = NGC_FREE_SIZE(io) + first;
                    OSRestoreInterrupts(enabled);
                }

                if (amount != 0) {
                    BOOL enabled;

                    memcpy(dest, NGC_READ_PTR(io), amount);
                    dest = (u8 PTR4*)dest + amount;
                    NGC_READ_PTR(io) = NGC_READ_PTR(io) + amount;

                    enabled = OSDisableInterrupts();
                    io->CurBufUsed -= amount;
                    NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = NGC_FREE_SIZE(io) + amount;
                    OSRestoreInterrupts(enabled);
                }
            }
        }

        read_time = RADTimerRead();
        foreground_time = io->ForegroundTime + (read_time - start_time);
    }
    io->ForegroundTime = foreground_time;

    {
        u32 cur_buf_size = NGC_BYTES_LEFT_TO_CONSUME(io);

        if (cur_buf_size >= io->BufSize) {
            cur_buf_size = io->BufSize;
        }

        io->CurBufSize = cur_buf_size;
    }

    if (io->CurBufUsed + NGC_READ_BLOCK_SIZE > io->CurBufSize) {
        io->CurBufSize = io->CurBufUsed;
    }

    intelendian(start_dest, total);
    return total;
}

static u32 BinkFileGetBufferSize(BINKIO PTR4* io, u32 size)
{
    return NGC_ALIGN_UP(size, NGC_READ_BLOCK_MASK);
}

static void BinkFileSetInfo(BINKIO PTR4* io, void PTR4* buf, u32 size, u32 file_size, u32 simulate)
{
    u32 aligned_size;
    BOOL enabled = OSDisableInterrupts();

    aligned_size = NGC_ALIGN_DOWN(size, NGC_READ_BLOCK_MASK);
    NGC_VOLATILE_U32(NGC_FREE_SIZE(io)) = aligned_size;
    io->BufSize = aligned_size;
    NGC_FILE_SIZE(io) = file_size;
    NGC_SIMULATE_RATE(io) = simulate;
    NGC_OWNER(io) = io;
    NGC_BUFFER(io) = (u8 PTR4*)buf;
    NGC_READ_PTR(io) = (u8 PTR4*)buf;
    NGC_WRITE_PTR(io) = (u8 PTR4*)buf;
    io->CurBufUsed = 0;
    NGC_BUFFER_END(io) = (u8 PTR4*)buf + aligned_size;

    OSRestoreInterrupts(enabled);
}

static void BinkFileClose(BINKIO PTR4* io)
{
    CancelReadRequests(io);

    if (NGC_BORROWED_FILE(io) == NGC_FILE_OWNS_DVD) {
        DVDClose(NGC_DVD(io));
    }
}

s32 BinkFileOpen(BINKIO PTR4* io, const char PTR4* name, u32 flags)
{
    memset(io, 0, sizeof(*io));

    if ((flags & BINKFILEHANDLE) != 0) {
        *NGC_DVD(io) = *(DVDFileInfo PTR4*)name;
        NGC_BORROWED_FILE(io) = NGC_FILE_BORROWS_DVD;
        NGC_FILE_OFFSET(io) = (u32)NGC_DVD(io)->cb.userData;
    } else {
        s32 entry = DVDConvertPathToEntrynum(name);

        if (entry == -1 || DVDFastOpen(entry, NGC_DVD(io)) == 0) {
            return 0;
        }
    }

    io->ReadHeader = BinkFileReadHeader;
    io->ReadFrame = BinkFileReadFrame;
    io->GetBufferSize = BinkFileGetBufferSize;
    io->SetInfo = BinkFileSetInfo;
    io->Idle = BinkFileIdle;
    io->Close = BinkFileClose;

    return 1;
}
