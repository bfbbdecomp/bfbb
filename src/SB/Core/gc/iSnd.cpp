#include "iSnd.h"

#include "dolphin/ai.h"
#include "dolphin/os.h"
#include "dolphin/os/OSAlloc.h"
#include "dolphin/os/OSCache.h"
#include "iMemMgr.h"
#include "iTRC.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xMath.h"
#include "iCutscene.h"

#include <dolphin/ar.h>
#include <dolphin/ax.h>
#include <dolphin/dvd/dvd.h>
#include <dolphin/mix.h>

#include <stdio.h>
#include <types.h>

#include <PowerPC_EABI_Support\MSL_C\MSL_Common\cmath>

u32 aram_array[40];

// Size: 0x20
// This was not in dwarf data
struct vinfo
{
    _AXVPB* voice;
    U32 flags;
    U32 aid;
    F32 xc;
    S32 x10;
    S32 x14;
    S32 x18;
    S32 x1c;
};

// Size: 0x10c
// Looks like this might be a vinfo struct at the beginning here.
struct UNK_STREAM
{
    vinfo vinf;
    U8 pad5[0x4];
    U32 x24;
    U8 pad4[0x60];
    U32 offset;
    U32 x8c;
    U32 x90;
    U32 x94;
    DVDFileInfo fileInfo;
    U32 source_a;
    u32 dest_a;
    u32 dest_b;
    U32 source_b;
    U32 xe4;
    ARQRequest request;
    U32 x10c;
};

UNK_STREAM streams[6];

vinfo voices[58];

U32* ua_stream_buffer = NULL; //unaligned stream buffer
U32* stream_buffer = 0;
u32 silence_buffer = 0;
volatile U32 zero_point = 0;
volatile U32 zero_end = 0;
volatile U32 SoundFlags = 0;
volatile S32 fc = 0;
static char soundInited = 0;
U32 houston_we_have_a_problem = 0;

ARQRequest* last_ar;

S32 staticibuf;

static void dv_callback(void* userdata)
{
    struct UNK_VOIDSTAR
    {
        U8 pad[0x14];
        U32 stream;
    };

    UNK_VOIDSTAR* data = (UNK_VOIDSTAR*)userdata;

    if (!soundInited)
    {
        return;
    }

    U32 stream = data->stream;
    xSndVoiceInfo* info = &gSnd.voice[stream];
    info->sndID = 0;
    info->flags = 0;
    if (stream < sizeof(streams) / sizeof(UNK_STREAM))
    {
        U32 idx = stream;
        if (streams[idx].vinf.voice == NULL)
        {
            return;
        }

        DVDCancelAsync(&streams[idx].fileInfo.cb, NULL);
        ARQRemoveRequest(&streams[idx].request);
        AXSetVoiceState(streams[idx].vinf.voice, 0);
        MIXReleaseChannel(streams[idx].vinf.voice);

        streams[idx].vinf.voice = NULL;
        streams[idx].vinf.flags = 0x40000;
        streams[idx].vinf.aid = 0;
    }
    else
    {
        U32 idx = stream - sizeof(streams) / sizeof(UNK_STREAM);
        if (voices[idx].voice == NULL)
        {
            return;
        }
        MIXReleaseChannel(voices[idx].voice);
        AXSetVoiceState(voices[idx].voice, 0);

        voices[idx].voice = NULL;
        voices[idx].flags = 0;
        voices[idx].aid = 0;
    }
}

static void arq_callback(u32)
{
    if (!soundInited)
    {
        return;
    }
    SoundFlags = 0;
}

static const char* dump_flags(U32 flags)
{
    char* ps;
    char* pps;

    static char str[0x40];
    memset(str, 0, 0x40);

    char blah[5] = "-01X";

    ps = &str[0];

    ps[0] = 'L';
    ps[1] = blah[(flags & 0x200) ? 1 : (flags & 0x400) ? 2 : 0];
    ps[2] = 'D';

    pps = &ps[3]; // This doesn't work?

    pps[0] = blah[(flags & 0x1000) ? 1 : (flags & 0x2000) ? 2 : 0];
    pps[1] = 'P';
    pps[2] = blah[(flags & 0x4000) ? 1 : (flags & 0x8000) ? 2 : 0];
    pps[3] = (flags & 0x400000) ? 'F' : '-';
    pps[4] = 'R';
    pps[5] = (flags & 0x100) ? 'X' : '-';
    pps[6] = 'D';
    pps[7] = (flags & 0x800) ? 'X' : '-';

    return str;
}

static void arqcb(u32 pointerToARQRequest);

// FIXME: param name
static void dvdcb(s32 r3, DVDFileInfo* info)
{
    if (!soundInited)
    {
        return;
    }

    UNK_STREAM* data = (UNK_STREAM*)info->cb.userData;
    xSTAssetName(data->vinf.aid);
    dump_flags(data->vinf.flags);
    if (data->vinf.voice == NULL)
    {
        return;
    }

    if (r3 <= 0)
    {
        return;
    }

    data->offset += r3;
    data->x90 += r3;
    data->vinf.flags |= 0x800;
    data->vinf.flags &= ~0x100;
    if (data->vinf.flags & (0x200 | 0x400))
    {
        houston_we_have_a_problem = TRUE;
    }
    if ((data->vinf.flags & 0x4) == 0)
    {
        return;
    }

    U32 dest = 0;
    if ((data->vinf.flags & 0x1000) == 0)
    {
        data->vinf.flags |= 0x200;
        dest = data->dest_a;
    }
    else if ((data->vinf.flags & 0x2000) == 0)
    {
        data->vinf.flags |= 0x400;
        dest = data->dest_b;
    }

    if (dest != 0)
    {
        ARQPostRequest(&data->request, (u32)data, 0, 1, data->source_a, dest, 0x4000, arqcb);
    }
}

static void arqcb(u32 pointerToARQRequest)
{
    if (!soundInited)
    {
        return;
    }

    UNK_STREAM* data = (UNK_STREAM*)((ARQRequest*)pointerToARQRequest)->owner;

    xSTAssetName(data->vinf.aid);
    dump_flags(data->vinf.flags);
    last_ar = (ARQRequest*)pointerToARQRequest;
    if (last_ar->length == 0)
    {
        return;
    }

    //FIXME: Missing redundant branch instruction here
    if (data->vinf.voice == NULL)
    {
        return;
    }

    if (data->vinf.flags & 0x100)
    {
        houston_we_have_a_problem = TRUE;
    }
    if (data->vinf.flags & 0x1000000)
    {
        if (data->vinf.flags & 0x200)
        {
            data->vinf.flags |= 0x1000;
            data->vinf.flags &= ~0x200;
        }
        if (data->vinf.flags & 0x400)
        {
            data->vinf.flags |= 0x2000;
            data->vinf.flags &= ~0x400;
        }

        data->x90 += data->xe4;
        data->xe4 = 0;
        data->source_b = 0;
    }
    else if (data->vinf.flags & 0x200)
    {
        data->vinf.flags |= 0x1000;
        data->vinf.flags &= ~0x200;
    }
    else if (data->vinf.flags & 0x400)
    {
        data->vinf.flags |= 0x2000;
        data->vinf.flags &= ~0x400;
    }

    if (data->x8c - data->x90 == 0)
    {
        xSTAssetName(data->vinf.aid);
        data->vinf.flags |= 0x20;
    }
    else if ((data->vinf.flags & 0x1000000) == 0)
    {
        data->vinf.flags |= 0x200000;
    }

    data->vinf.flags &= ~0x800;
    data->vinf.flags &= ~0x4000000;
    data->vinf.flags &= ~0x400000;
    if (data->vinf.flags & 0x4)
    {
        data->vinf.flags &= ~4;
        data->vinf.flags |= 0x8;
    }
}

static void iSndMyAXFree(AXVPB**);

static void fcb()
{
    S32 i;
    S32 need_update;
    U32 orig_flags;
    U32 length;
    U32 source;
    U32 flags_bit_12;
    U32 flags_bit_10;
    U32 flags_bit_13;
    U32 flags_bit_9;
    U32 dest;
    u32 addr;
    xSndVoiceInfo* gsnd_voice;

    if (!soundInited && iTRCDisk::IsDiskIDed())
    {
        return;
    }

    fc++;
    need_update = FALSE;
    for (i = 0; i < 6; i++)
    {
        orig_flags = streams[i].vinf.flags;
        gsnd_voice = &gSnd.voice[i];
        if (streams[i].vinf.voice == NULL)
        {
            continue;
        }

        U32 addrHi = streams[i].vinf.voice->pb.addr.currentAddressHi;
        if (orig_flags & 0xe0006)
        {
            continue;
        }
        addr = (addrHi << 16);
        addr += streams[i].vinf.voice->pb.addr.currentAddressLo;
        dest = streams[i].dest_b;
        dump_flags(orig_flags);

        if ((addr < dest * 2) && (orig_flags & 0x4000) == 0 && (orig_flags & 0x8) == 0)
        {
            streams[i].vinf.flags |= 0x4000;
            streams[i].vinf.flags &= ~0x8000;
            streams[i].vinf.flags &= ~0x2000;
            if ((orig_flags & 0x1000000) && streams[i].source_b == 0)
            {
                streams[i].vinf.flags |= 0x2000000;
            }
            streams[i].x94 = streams[i].x90;
            orig_flags = streams[i].vinf.flags;
        }
        else if ((addr >= dest * 2) && (orig_flags & 0x8000) == 0)
        {
            streams[i].vinf.flags |= 0x8000;
            streams[i].vinf.flags &= ~0x4000;
            streams[i].vinf.flags &= ~0x1000;
            if ((orig_flags & 0x1000000))
            {
                streams[i].vinf.flags |= 0x2000000;
            }
            orig_flags = streams[i].vinf.flags;
        }

        if ((orig_flags & 0x20) && (orig_flags & 0x4000))
        {
            streams[i].vinf.flags &= ~0x20;
            U32 dest = streams[i].dest_a;
            dest <<= 1;
            dest += (streams[i].x24 & 0xFFFF);
            AXSetVoiceLoopAddr(streams[i].vinf.voice, zero_point);
            AXSetVoiceEndAddr(streams[i].vinf.voice, dest - 1);
            AXSetVoiceLoop(streams[i].vinf.voice, 0);
            AXSetVoiceType(streams[i].vinf.voice, 0);
            streams[i].vinf.flags |= 0x40;
            orig_flags = streams[i].vinf.flags;
        }

        if (orig_flags & 0x100000)
        {
            iSndMyAXFree(&streams[i].vinf.voice);
            streams[i].vinf.flags = 0;
            streams[i].vinf.aid = 0;
            streams[i].source_b = 0;
            streams[i].xe4 = 0;
            continue;
        }

        if (addr >= zero_point && addr < zero_end && (orig_flags & 0x40))
        {
            streams[i].vinf.flags &= ~0x40;
            DVDCancelAsync(&streams[i].fileInfo.cb, NULL);
            ARQRemoveRequest(&streams[i].request);
            AXSetVoiceState(streams[i].vinf.voice, 0);
            MIXReleaseChannel(streams[i].vinf.voice);

            if (streams[i].vinf.flags & 0x10000)
            {
                U32 priority = gsnd_voice->priority;
                if (priority > 0xff)
                {
                    priority = 0xff;
                }

                iSndMyAXFree(&streams[i].vinf.voice);
                streams[i].vinf.voice = AXAcquireVoice(priority >> 3, dv_callback, i);
                if (streams[i].vinf.voice == NULL)
                {
                    streams[i].vinf.voice = NULL;
                    streams[i].vinf.flags = 0;
                    streams[i].vinf.aid = 0;
                    streams[i].source_b = 0;
                    streams[i].xe4 = 0;
                    continue;
                }

                MIXInitChannel(streams[i].vinf.voice, 0xc, 0, -0x384, -0x384, 0x40, 0x7f, -0x384);
                streams[i].vinf.flags = 0x4;
                iSndPlay(gsnd_voice);
                continue;
            }
            streams[i].vinf.flags = 0x40000;
            continue;
        }

        if (orig_flags & 0x8)
        {
            if ((streams[i].vinf.flags & 0x2) == 0)
            {
                AXSetVoiceState(streams[i].vinf.voice, 1);
            }
            MIXUnMute(streams[i].vinf.voice);
            need_update = TRUE;
            streams[i].vinf.flags |= 0x10;
            streams[i].vinf.flags |= 0x4000;
            streams[i].vinf.flags &= ~0x8;
            orig_flags = streams[i].vinf.flags;
        }

        if ((orig_flags & 0x200000) && (orig_flags & 0x200) == 0 && (orig_flags & 0x400) == 0 &&
            (orig_flags & 0x100) == 0 && (orig_flags & 0x400000) == 0 &&
            (orig_flags & 0x1000000) == 0)
        {
            streams[i].vinf.flags &= ~0x200000;
            streams[i].vinf.flags |= 0x100;
            streams[i].vinf.flags |= 0x400000;

            U32 size = streams[i].x8c - streams[i].x90;
            if (size > 0x4000)
            {
                DVDReadAsyncPrio((DVDFileInfo*)&streams[i].fileInfo.cb, (void*)streams[i].source_a,
                                 0x4000, streams[i].offset, dvdcb, 2);
            }
            else
            {
                DVDReadAsyncPrio((DVDFileInfo*)&streams[i].fileInfo.cb, (void*)streams[i].source_a,
                                 size, streams[i].offset, dvdcb, 2);
            }
        }
        if ((orig_flags & 0x800) || (orig_flags & 0x4000000))
        {
            if (orig_flags & 0x800)
            {
                length = 0x4000;
                if (streams[i].x90 & 0x3FFF)
                {
                    length = streams[i].x90 & 0x3FFF;
                }
                source = streams[i].source_a;
            }
            else
            {
                length = streams[i].xe4;
                source = streams[i].source_b;
            }

            flags_bit_9 = orig_flags & 0x200;
            flags_bit_12 = orig_flags & 0x1000;
            flags_bit_10 = orig_flags & 0x400;
            flags_bit_13 = orig_flags & 0x2000;
            dump_flags(orig_flags);

            if (flags_bit_12 && (orig_flags & 0x4000) && !flags_bit_10 && !flags_bit_13)
            {
                streams[i].vinf.flags |= 0x400;
                ARQPostRequest(&streams[i].request, (u32)&streams[i], 0, 1, source,
                               streams[i].dest_b, length, arqcb);
            }
            else if (flags_bit_13 && (orig_flags & 0x8000) && !flags_bit_9 && !flags_bit_12)
            {
                streams[i].vinf.flags |= 0x200;
                ARQPostRequest(&streams[i].request, (u32)&streams[i], 0, 1, source,
                               streams[i].dest_a, length, arqcb);
            }
        }

        if (streams[i].vinf.x10 == streams[i].vinf.x14 &&
            streams[i].vinf.x18 == streams[i].vinf.x1c)
        {
            continue;
        }

        streams[i].vinf.x14 = streams[i].vinf.x10;
        streams[i].vinf.x1c = streams[i].vinf.x18;
        MIXAdjustInput(streams[i].vinf.voice,
                       streams[i].vinf.x14 - MIXGetInput(streams[i].vinf.voice));
        MIXAdjustPan(streams[i].vinf.voice, streams[i].vinf.x1c - MIXGetPan(streams[i].vinf.voice));
        need_update = TRUE;
    }

    for (S32 i = 0; i < 58; i++)
    {
        if (voices[i].voice == NULL || (voices[i].flags & 0x1))
        {
            continue;
        }

        if (voices[i].flags & 0x20000)
        {
            iSndMyAXFree(&voices[i].voice);
            voices[i].flags = NULL;
            voices[i].aid = 0;
        }
        else
        {
            addr = voices[i].voice->pb.addr.currentAddressHi;
            addr <<= 16;
            addr += voices[i].voice->pb.addr.currentAddressLo;
            if (voices[i].flags & 0x4 && !voices[i].voice->pb.addr.loopFlag && addr >= zero_point &&
                addr < zero_end)
            {
                voices[i].flags &= ~0x4;
                AXSetVoiceState(voices[i].voice, 0);
                MIXReleaseChannel(voices[i].voice);
                iSndMyAXFree(&voices[i].voice);
                voices[i].flags = NULL;
                voices[i].aid = 0;
            }
        }
    }

    if (need_update)
    {
        MIXUpdateSettings();
    }
}

void iSndInit()
{
    soundInited = 1;
    AIInit(NULL);
    ARInit(aram_array, 40);
    ARQInit();
    AXInit();
    MIXInit();

    for (S32 i = 0; i < 58; i++)
    {
        voices[i].voice = NULL;
        voices[i].flags = 0;
    }

    for (S32 i = 0; i < 6; i++)
    {
        streams[i].vinf.voice = 0;
        streams[i].vinf.flags = 0;
        streams[i].source_a = 0;
        streams[i].dest_a = 0;
        streams[i].dest_b = 0;
        streams[i].source_b = 0;
        streams[i].xe4 = 0;
    }

    // FIXME: No idea what type this is, appears to only be used in this fuction.
    ua_stream_buffer = (U32*)OSAllocFromHeap(the_heap, 0x18100);
    stream_buffer = (U32*)(((U32)ua_stream_buffer + 0x1f) & ~0x1f);
    U32* local_buffer = stream_buffer;
    for (S32 i = 0; i < 0x100; i++)
    {
        local_buffer[i] = NULL;
    }

    silence_buffer = ARAlloc(0x400);
    zero_point = silence_buffer;
    zero_point *= 2;
    zero_point += 2;
    zero_end = zero_point + 0x800;

    SoundFlags |= 0x1;

    BOOL enabled = OSDisableInterrupts();
    DCInvalidateRange((void*)silence_buffer, 0x400);
    ARQRequest request;
    ARQPostRequest(&request, 0, 0, 1, (u32)stream_buffer, silence_buffer, 0x400, arq_callback);
    OSRestoreInterrupts(enabled);

    while (SoundFlags != 0)
        ;

    char str_buf[0x20];
    U32 r27 = 0;

    struct Junk
    {
        U8 foo[0x4000];
    };

    for (S32 i = 0; i < 6; i++)
    {
        u32 buf = ARAlloc(0x8000);
        sprintf(str_buf, "streaming channel %d", i);
        streams[i].dest_a = buf;
        streams[i].dest_b = buf + 0x4000;
        streams[i].source_a = (u32)stream_buffer + r27 + 0x4000;
        r27 += 0x4000;
    }
    AXRegisterCallback(fcb);
}

void iSndExit()
{
    soundInited = 0;
    AXQuit();
}

//not sure where this type is from.
void iSndSetEnvironmentalEffect(isound_effect)
{
    return;
}

void iSndInitSceneLoaded()
{
}

bool iSndIsPlaying(U32 assetID)
{
    if (assetID == 0)
    {
        return false;
    }

    for (S32 i = 0; i < 6; i++)
    {
        if (gSnd.voice[i].assetID == assetID)
        {
            if (streams[i].vinf.flags & 0xC000 && (streams[i].vinf.flags & 0x82) == 0)
            {
                return true;
            }
            return false;
        }
    }

    for (S32 i = 0; i < 0x3a; i++)
    {
        if (gSnd.voice[i + 6].assetID == assetID)
        {
            if (voices[i].flags & 0x4 && (voices[i].flags & 0x8) == 0)
            {
                return true;
            }
            return false;
        }
    }
    return true;
}

bool iSndIsPlaying(U32 assetID, U32 parid)
{
    for (U32 i = 0; i < 0x40; i++)
    {
        if ((assetID == 0 || gSnd.voice[i].assetID == assetID) && gSnd.voice[i].parentID == parid)
        {
            if (iSndIsPlaying(gSnd.voice[i].assetID))
            {
                return true;
            };
        }
    }
    return false;
}

bool iSndIsPlayingByHandle(U32 handle)
{
    if (handle == 0)
    {
        return false;
    }

    for (S32 i = 0; i < 6; i++)
    {
        if (gSnd.voice[i].sndID == handle)
        {
            return (streams[i].vinf.flags & 0xC000 && (streams[i].vinf.flags & 0x82) == 0);
        }
    }

    for (S32 i = 0; i < 0x3a; i++)
    {
        if (gSnd.voice[i + 6].sndID == handle)
        {
            return (voices[i].flags & 0x4 && (voices[i].flags & 0x8) == 0);
        }
    }
    return false;
}

void iSndPause(U32 snd, U32 pause)
{
    if (!soundInited)
    {
        return;
    }

    S32 i;
    for (i = 0; i < 64; i++)
    {
        if (gSnd.voice[i].sndID == snd)
        {
            break;
        }
    }

    if (i < 6)
    {
        if (streams[i].vinf.voice != NULL)
        {
            if (pause != 0)
            {
                AXSetVoiceState(streams[i].vinf.voice, 0);
                streams[i].vinf.flags |= 2;
            }
            else
            {
                AXSetVoiceState(streams[i].vinf.voice, 1);
                streams[i].vinf.flags &= 0xFFFFFFFD;
            }
        }
    }
    else if (i >= 64)
    {
        return;
    }
    else
    {
        S32 iv = i - 6;
        if (voices[iv].voice != NULL)
        {
            if (pause != 0)
            {
                AXSetVoiceState(voices[iv].voice, 0);
                voices[iv].flags |= 8;
            }
            else
            {
                AXSetVoiceState(voices[iv].voice, 1);
                voices[iv].flags &= 0xFFFFFFF7;
            }
        }
    }
}

void iSndStop(U32 snd)
{
    if (snd == 0)
    {
        return;
    }

    U32 enabled = OSDisableInterrupts();
    S32 i;

    for (i = 0; i < 64; i++)
    {
        if (gSnd.voice[i].sndID == snd)
        {
            gSnd.voice[i].sndID = 0;
            gSnd.voice[i].flags = 0;
            break;
        }
    }

    if (i < 6)
    {
        if (streams[i].vinf.voice != NULL)
        {
            DVDCancel(&streams[i].fileInfo.cb);
            ARQRemoveRequest(&streams[i].request);
            AXSetVoiceState(streams[i].vinf.voice, 0);
            MIXReleaseChannel(streams[i].vinf.voice);
            iSndMyAXFree(&streams[i].vinf.voice);
            streams[i].vinf.flags = 0x40000;
            streams[i].vinf.aid = 0;
            streams[i].vinf.flags = 0x40000;
        }
    }
    else if (i < 64)
    {
        i -= 6;
        if (voices[i].voice != NULL)
        {
            AXSetVoiceState(voices[i].voice, 0);
            MIXReleaseChannel(voices[i].voice);
            iSndMyAXFree(&voices[i].voice);
            voices[i].flags = 0;
            voices[i].aid = 0;
        }
    }

    OSRestoreInterrupts(enabled);
}

U32 iVolFromX(F32 param1)
{
    float f = MAX(param1, 1e-20f);

    S32 i = 43.43f * xlog(f);
    S32 comp = MIN(i, 0);

    if (comp < -0x388)
    {
        return -0x388;
    }
    else
    {
        return MIN(i, 0);
    }
}

void iSndCalcVol(xSndVoiceInfo* vp, vinfo* info)
{
    S32 vol = iVolFromX(vp->vol * gSnd.categoryVolFader[vp->category]);

    info->x10 = vol;
    info->x14 = vol;
    info->x18 = 0x40;
    info->x1c = 0x40;
    MIXAdjustFader(info->voice, vol - MIXGetFader(info->voice));
    MIXAdjustPan(info->voice, 0x40 - MIXGetPan(info->voice));
}

void iSndCalcVol3d(xSndVoiceInfo* vp, vinfo* vi)
{
    xVec3 pos;
    xVec3Sub(&pos, &vp->playPos, &gSnd.pos);
    F32 dist = xVec3Length2(&pos);
    xVec3Normalize(&pos, &pos);
    F32 right = xVec3Dot(&pos, &gSnd.right);
    if (dist > vp->outerRadius2)
    {
        dist = 0.0f;
    }
    else if (dist <= vp->innerRadius2)
    {
        dist = 1.0f;
    }
    else
    {
        F32 range = vp->outerRadius2 - vp->innerRadius2;
        dist = std::sqrtf((range - (dist - vp->innerRadius2)) / range);
    }
    S32 pan = (S32)(right * 64.0f) + 0x40;
    S32 vol = iVolFromX(dist * (vp->vol * gSnd.categoryVolFader[vp->category]));
    if (pan < 0)
    {
        pan = 0;
    }
    else if (pan > 0x7F)
    {
        pan = 0x7F;
    }
    vi->x10 = vol;
    vi->x14 = vol;
    vi->x18 = pan;
    vi->x1c = pan;
    MIXAdjustFader(vi->voice, vol - MIXGetFader(vi->voice));
    MIXAdjustPan(vi->voice, pan - MIXGetPan(vi->voice));
}

void iSndVolUpdate(xSndVoiceInfo* info, vinfo* vinfo)
{
    MIXUnMute(vinfo->voice);
    xSndInternalUpdateVoicePos(info);
    if ((info->flags & 8) != 0)
    {
        iSndCalcVol3d(info, vinfo);
    }
    else
    {
        iSndCalcVol(info, vinfo);
    }
}

void iSndUpdateStreams()
{
    UNK_STREAM* stream;

    if (!soundInited)
    {
        return;
    }

    for (S32 i = 0; i < 6; i++)
    {
        stream = &streams[i];
        if (stream->vinf.voice == NULL)
        {
            continue;
        }
        U32 flags = stream->vinf.flags;
        if (flags & 0x40000)
        {
            stream->vinf.flags = 0x80000;
        }
        else if (flags & 0x80000)
        {
            stream->vinf.flags = 0x100000;
        }
        else if (flags & 0x20000)
        {
            stream->vinf.flags = flags & 0xfffdffff;
            if (!(stream->vinf.flags & 2))
            {
                AXSetVoiceState(stream->vinf.voice, 1);
            }
        }
        else
        {
            xSndVoiceInfo* vp = &gSnd.voice[i];
            iSndVolUpdate(vp, &stream->vinf);
            if ((stream->vinf.flags & 0x1000000) && (stream->vinf.flags & 0x2000000))
            {
                void* data = iCSSoundGetData(vp, &stream->xe4);
                stream->source_b = (U32)data;
                if (data != NULL)
                {
                    U32 enabled = OSDisableInterrupts();
                    if (stream->vinf.flags & 4)
                    {
                        stream->vinf.flags |= 0x200;
                        stream->vinf.flags |= 0x400;
                        ARQPostRequest(&stream->request, (U32)stream, 0, 1, stream->source_b,
                                       stream->dest_a, 0x8000, arqcb);
                        stream->x10c = 0;
                    }
                    else
                    {
                        stream->x10c++;
                    }
                    stream->vinf.flags &= 0xfdffffff;
                    stream->vinf.flags |= 0x4000000;
                    staticibuf = stream->source_b;
                    OSRestoreInterrupts(enabled);
                }
            }
        }
    }
}

void iSndUpdateSounds()
{
    if (!soundInited)
    {
        return;
    }

    for (int i = 0; i < 58; i++)
    {
        if (voices[i].voice != NULL)
        {
            iSndVolUpdate(&gSnd.voice[i + 6], &voices[i]);
        }
    }
}

void iSndUpdate()
{
    bool active;
    _AXVPB* v;
    U32 flags;
    xSndVoiceInfo* vp;
    S32 testBuffer;

    if (!soundInited)
    {
        return;
    }

    S32 enabled = OSDisableInterrupts();
    iSndUpdateStreams();
    iSndUpdateSounds();
    MIXUpdateSettings();
    OSRestoreInterrupts(enabled);

    for (S32 i = 0; i < 0x40; i++)
    {
        vp = &gSnd.voice[i];

        if (i < 6)
        {
            active = (streams[i].vinf.flags & 0xc07f);
        }
        else
        {
            v = voices[i - 6].voice;
            testBuffer = 0;
            if (v != NULL)
            {
                testBuffer = v->pb.addr.currentAddressHi;
                testBuffer <<= 16;
                testBuffer += v->pb.addr.currentAddressLo;
            }
            flags = voices[i - 6].flags;
            active = 0;
            if ((flags & 4) && !(flags & 8))
            {
                if ((testBuffer >= zero_point) && (testBuffer < zero_end))
                {
                    active = 1;
                }
            }
            active |= (bool)v;
        }
        if (active)
        {
            vp->flags |= 1;
        }
        else
        {
            vp->flags &= 0xfffffffe;
        }
    }
}

struct
{
    U32 a; // 0x00
    U32 b; // 0x04
    U32 c; // 0x08
    AXPBADDR addr; // 0x0C
    AXPBADPCM adpcm; // 0x1C
    AXPBADPCMLOOP adpcmLoop; // 0x44
    char pad[22]; // 0x4A
    U32 id;
} snd;

S32 sound_stream;

S32 iSndPlaySound(xSndVoiceInfo* vp)
{
    vinfo* vi;
    S32 vp_i;
    U32 priority;
    S32 i;

    if ((snd.id != vp->assetID) && (iSndLookup(vp->assetID), snd.id != vp->assetID))
    {
        return 0;
    }

    if (sound_stream != 0)
    {
        sound_stream = 0;
    }

    vp_i = ((S32)vp - (S32)&gSnd.voice) / (S32)sizeof(xSndVoiceInfo);

    priority = vp->priority;
    if (priority >= 0xFF)
    {
        priority = 0xFF;
    }
    priority >>= 3;

    i = vp_i - 6;
    vi = &voices[i];
    if (vi->voice == NULL)
    {
        voices[i].aid = vp->assetID;
        voices[i].xc = ((F32)snd.a * 1000.0f) / (F32)snd.c;

        AXPBADDR addr;
        memcpy(&addr, &snd.addr, 0x10);

        if (snd.addr.loopFlag == 0)
        {
            U32 zero = zero_point;
            addr.loopAddressHi = (U16)(zero >> 16);
            addr.loopAddressLo = (U16)zero;
        }

        if (priority == 0)
        {
            priority = 1;
        }

        vi->voice = AXAcquireVoice(priority, dv_callback, vp_i);
        if (vi->voice == NULL)
        {
            return 0;
        }
        else
        {
            S32 enabled = OSDisableInterrupts();
            AXSetVoiceAddr(vi->voice, &addr);
            AXSetVoiceType(vi->voice, NULL);
            AXSetVoiceAdpcm(vi->voice, &snd.adpcm);
            AXSetVoiceSrcType(vi->voice, 1);
            MIXInitChannel(vi->voice, 4, 0, 0xFFFFFC78, 0xFFFFFC78, 0x40, 0x7F, 0xFFFFFC78);
            iSndVolUpdate(vp, vi);
            F32 scale = std::powf(2.0f, vp->pitch / 12.0f);
            F32 ratio = (snd.c * scale) / 32000.0f;
            vi->voice->pb.src.ratioHi = ratio;
            vi->voice->pb.src.ratioLo = ratio * 65536.0;
            if (snd.addr.loopFlag)
            {
                AXSetVoiceAdpcmLoop(vi->voice, &snd.adpcmLoop);
            }
            vi->voice->sync |= 0x80000000;
            MIXUnMute(vi->voice);
            MIXUpdateSettings();
            AXSetVoiceState(vi->voice, 1);
            OSRestoreInterrupts(enabled);
            voices[i].flags &= 0xFFFFFFFE;
            voices[i].flags |= 4;
            return vp->sndID;
        }
    }
    else
    {
        return 0;
    }

    return vp_i;
}

S32 iSndPlay(xSndVoiceInfo* vp)
{
    S32 offset = (S32)vp - (S32)gSnd.voice;
    S32 div = offset / 100;

    xSTAssetName(vp->assetID);

    if ((div < 0) || (div >= 64))
    {
        return 0;
    }
    else if (div < 6)
    {
        U32 ret = iSndPrepStream(vp);
        if (ret < 0x3a)
        {
            if (vp->flags & 0x200)
            {
                return iSndPlayMemStream(vp);
            }
            else
            {
                return iSndPlayStream(vp);
            }
        }
        return ret;
    }
    else
    {
        return iSndPlaySound(vp);
    }
}

void iSndSetVol(U32 snd, F32 vol)
{
    xSndVoiceInfo* vp = &gSnd.voice[0];

    S32 i = 0;
    for (; i < 64; i++, vp++)
    {
        if (vp->sndID == snd)
            break;
    }

    if (i != 64)
    {
        vp->vol = vol;
        S32 adj = iVolFromX(vol * gSnd.categoryVolFader[vp->category]);
        vinfo* info;
        if (i < 6)
        {
            info = &streams[i].vinf;
        }
        else
        {
            info = &voices[i - 6];
        }
        if (info->voice != 0)
        {
            info->x10 = adj;
            info->x14 = adj;
            info->x18 = 0x40;
            info->x1c = 0x40;
            MIXAdjustFader(info->voice, adj - MIXGetFader(info->voice));
            MIXAdjustPan(info->voice, 0x40 - MIXGetPan(info->voice));
        }
    }
}

void iSndSetPitch(U32 snd, F32 pitch)
{
    xSndVoiceInfo* vp = &gSnd.voice[0];

    S32 i = 0;
    for (; i < 64; i++, vp++)
    {
        if (vp->sndID == snd)
            break;
    }

    if (i != 64)
    {
        vinfo* info;
        if (i < 6)
        {
            info = &streams[i].vinf;
        }
        else
        {
            info = &voices[i - 6];
        }
        if (info->voice != 0)
        {
            // todo: define std::powf
            AXSetVoiceSrcRatio(info->voice, ((1.0f / 32000) * vp->sample_rate) *
                                                std::powf(2.0f, (pitch / 12.0f)));
        }
    }
}

void iSndStartStereo(U32 id1, U32 id2, F32 pitch)
{
}

void iSndStereo(U32 i)
{
    if (i == 0)
    {
        OSSetSoundMode(0);
        gSnd.stereo = 0;
    }
    else
    {
        OSSetSoundMode(1);
        gSnd.stereo = 1;
    }
}

void iSndWaitForDeadSounds()
{
    fc = 0;
    for (int i = 0x8c; fc < i;)
    {
        // `i` is weird, it's stored in a saved register but never mutated. However it needs to be mutated to put it in a saved register
        i = fc;
        while (fc < i + 0xe)
            ;
        // This adds the nonmatching instruction, but get's us back to the state `i`'s register should be in.
        i = 0x8c;
        iSndUpdate();
    }
}

void iSndSuspendCD(U32)
{
}

void iSndMessWithEA(sDSPADPCM* param1)
{
    if (param1 != NULL)
    {
        param1->buffer[5] = SampleToNybbleAddress(param1->buffer[0] - 1);
    }
}

U32 SampleToNybbleAddress(U32 sample)
{
    U32 a = __mulhwu(0x24924925, sample);
    U32 b = (sample - a) >> 1;

    a = b + a;
    b = (a >> 3);
    a = (a << 1) & 0xfffffff0;
    a = a + (sample - (b * 0xe)) + 2;

    return a;
}

void sndloadcb(tag_xFile* tag)
{
    SoundFlags = 0;
}

void iSndDIEDIEDIE()
{
    if (!soundInited)
    {
        return;
    }

    OSDisableInterrupts();
    soundInited = 0;

    for (S32 i = 0; i < (S32)(sizeof(streams) / (sizeof(UNK_STREAM))); i++)
    {
        UNK_STREAM* pv = &streams[i];

        if (pv->vinf.voice != NULL)
        {
            MIXReleaseChannel(pv->vinf.voice);
            AXSetVoiceState(pv->vinf.voice, 0);
            iSndMyAXFree(&pv->vinf.voice);
        }
        pv++;
    }

    for (S32 i = 0; i < (S32)(sizeof(voices) / (sizeof(vinfo))); i++)
    {
        vinfo* v = &voices[i];

        if ((v->voice != NULL))
        {
            MIXReleaseChannel(v->voice);
            AXSetVoiceState(v->voice, 0);
            iSndMyAXFree(&v->voice);
        }
    }

    AXQuit();
}

void iSndSetExternalCallback(iSndExternalCallback callback)
{
}

void iSndMyAXFree(_AXVPB** param1)
{
    if (param1 != NULL && *param1 != NULL)
    {
        AXFreeVoice(*param1);
        *param1 = NULL;
    }
}

void iSndSuspend()
{
    AXRegisterCallback(0);

    for (S32 i = 0; i < (S32)(sizeof(streams) / (sizeof(UNK_STREAM))); i++)
    {
        UNK_STREAM* pv = &streams[i];

        if (pv->vinf.voice != NULL)
        {
            AXSetVoiceState(pv->vinf.voice, 0);
        }
        pv++;
    }

    for (S32 i = 0; i < (S32)(sizeof(voices) / (sizeof(vinfo))); i++)
    {
        vinfo* v = &voices[i];

        if ((v->voice != NULL))
        {
            AXSetVoiceState(v->voice, 0);
        }
    }
}

void iSndResume()
{
    for (S32 i = 0; i < (S32)(sizeof(streams) / (sizeof(UNK_STREAM))); i++)
    {
        UNK_STREAM* pv = &streams[i];

        if ((pv->vinf.voice != NULL) && !(pv->vinf.flags & 2))
        {
            AXSetVoiceState(pv->vinf.voice, 1);
        }
        pv++;
    }

    for (S32 i = 0; i < (S32)(sizeof(voices) / (sizeof(vinfo))); i++)
    {
        vinfo* v = &voices[i];

        if ((v->voice != NULL) && !(v->flags & 8))
        {
            AXSetVoiceState(v->voice, 1);
        }
    }

    AXRegisterCallback(fcb);
}

F32 iSndGetVol(U32 snd)
{
    xSndVoiceInfo* vp = &gSnd.voice[0];

    for (int i = 0; i < 0x40; i++)
    {
        if (vp->flags & 1)
        {
            if (vp->sndID == snd)
            {
                if (gSnd.categoryVolFader[vp->category] <= 0.0f)
                {
                    return 0.0f;
                }
                return (vp->vol / gSnd.categoryVolFader[vp->category]);
            }
        }
        vp++;
    }

    return 0.0f;
}