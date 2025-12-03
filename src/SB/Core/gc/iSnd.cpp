#include "iSnd.h"

#include "iTRC.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xMath.h"

#include <dolphin/ar.h>
#include <dolphin/ax.h>
#include <dolphin/dvd/dvd.h>
#include <dolphin/mix.h>

#include <types.h>

// Size: 0x20
// This was not in dwarf data
struct vinfo
{
    _AXVPB* voice;
    U32 flags;
    U32 aid;
    U8 buf[4];
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
    U8 pad2[0x4];
};

UNK_STREAM streams[6];

vinfo voices[58];

u32 zero_point = 0;
u32 zero_end = 0;
S32 SoundFlags = 0;
volatile S32 fc = 0;
static char soundInited = 0;
U32 houston_we_have_a_problem = 0;

ARQRequest* last_ar;

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
    static char str[0x40];
    memset(str, 0, sizeof(str));

    // TODO:

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
    if (!soundInited && iTRCDisk::IsDiskIDed())
    {
        return;
    }

    fc++;
    S32 i;
    S32 need_update = TRUE;
    for (i = 0; i < 6; i++)
    {
        xSndVoiceInfo* gsnd_voice = &gSnd.voice[i];
        U32 orig_flags = streams[i].vinf.flags;
        if (streams[i].vinf.voice == NULL)
        {
            continue;
        }

        u16 addrHi = streams[i].vinf.voice->pb.addr.currentAddressHi;
        if (orig_flags & 0xe0006)
        {
            continue;
        }
        u32 addr = addrHi << 16;
        addr += streams[i].vinf.voice->pb.addr.currentAddressLo;
        U32 dest = streams[i].dest_b;
        dump_flags(orig_flags);

        if (dest * 2 < addr && (orig_flags & 0x4000) == 0 && (orig_flags & 0x8) == 0)
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
        else if (dest * 2 >= addr && (orig_flags & 0x8000) == 0)
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
            dest = streams[i].dest_a * 2;
            dest += streams[i].x24 & 0xFFFF;
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

        if (dest >= zero_point && dest < zero_end && (orig_flags & 0x40))
        {
            streams[i].vinf.flags &= ~0x40;
            DVDCancelAsync(&streams[i].fileInfo.cb, NULL);
            ARQRemoveRequest(&streams[i].request);
            AXSetVoiceState(streams[i].vinf.voice, 0);
            MIXReleaseChannel(streams[i].vinf.voice);

            if (streams[i].vinf.flags & 0x10000)
            {
                u32 priority = gsnd_voice->priority;
                if (priority > 0xff)
                {
                    priority = 0xff;
                }

                iSndMyAXFree(&streams[i].vinf.voice);
                streams[i].vinf.voice = AXAcquireVoice(priority, dv_callback, i);
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
            U32 length;
            U32 source;
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

            U32 flags_bit_12;
            U32 flags_bit_10;
            U32 flags_bit_13;
            U32 flags_bit_9;
            flags_bit_9 = orig_flags & 0x200;
            flags_bit_12 = orig_flags & 0x1000;
            flags_bit_10 = orig_flags & 0x400;
            flags_bit_13 = orig_flags & 0x2000;
            dump_flags(orig_flags);

            if (flags_bit_12 && (orig_flags & 0x4000) && !flags_bit_10 && !flags_bit_13)
            {
                streams[i].vinf.flags |= 0x400;
                ARQPostRequest(&streams[i].request, (u32)streams[i].vinf.voice, 0, 1, source,
                               streams[i].dest_b, length, arqcb);
            }
            else if (flags_bit_13 && (orig_flags & 0x8000) && !flags_bit_9 && !flags_bit_12)
            {
                streams[i].vinf.flags |= 0x200;
                ARQPostRequest(&streams[i].request, (u32)streams[i].vinf.voice, 0, 1, source,
                               streams[i].dest_a, length, arqcb);
            }
        }

        if (streams[i].vinf.x10 == streams[i].vinf.x14 && streams[i].vinf.x18 == streams[i].vinf.x1c)
        {
            continue;
        }

        streams[i].vinf.x14 = streams[i].vinf.x10;
        streams[i].vinf.x1c = streams[i].vinf.x18;
        MIXAdjustInput(streams[i].vinf.voice, streams[i].vinf.x14 - MIXGetInput(streams[i].vinf.voice));
        MIXAdjustPan(streams[i].vinf.voice, streams[i].vinf.x1c - MIXGetPan(streams[i].vinf.voice));
        need_update = TRUE;
    }

    for (i = 0; i < 58; i++)
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
            U32 addr = (voices[i].voice->pb.addr.currentAddressHi << 16) +
                       voices[i].voice->pb.addr.currentAddressLo;
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
