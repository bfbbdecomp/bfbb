#include "iSnd.h"

#include "xSnd.h"
#include "xstransvc.h"
#include "xMath.h"

#include <dolphin/ar.h>
#include <dolphin/ax.h>
#include <dolphin/dvd/dvd.h>
#include <dolphin/mix.h>

#include <types.h>

// Size: 0x10c
struct UNK_STREAMS
{
    AXVPB* voice;
    U32 x4;
    U32 x8;
    U8 pad[0x8C];
    DVDCommandBlock cb;
    U8 pad3[0x20];
    ARQRequest request;
    U8 pad2[0x4];
};

UNK_STREAMS streams[6];

vinfo voices[58];

S32 SoundFlags;
volatile S32 fc;
static char soundInited;
U32 houston_we_have_a_problem;

struct UNK_USERDATA
{
    U32 x0;
    U32 flags;
    U32 aid;
    U8 pad5[0xC];
    U32 x18;
    U8 pad[0x6C];
    U32 x88;
    U32 x8c;
    U32 x90;
    U8 pad3[0x40];
    U32 source;
    U32 dest_a;
    U32 dest_b;
    U32 xe0;
    U32 xe4;
    ARQRequest request;
};
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
    if (stream < sizeof(streams) / sizeof(UNK_STREAMS))
    {
        U32 idx = stream;
        if (streams[idx].voice == NULL)
        {
            return;
        }

        DVDCancelAsync(&streams[idx].cb, NULL);
        ARQRemoveRequest(&streams[idx].request);
        AXSetVoiceState(streams[idx].voice, 0);
        MIXReleaseChannel(streams[idx].voice);

        streams[idx].voice = NULL;
        streams[idx].x4 = 0x40000;
        streams[idx].x8 = 0;
    }
    else
    {
        U32 idx = stream - sizeof(streams) / sizeof(UNK_STREAMS);
        if (voices[idx].voice == NULL)
        {
            return;
        }
        MIXReleaseChannel(voices[idx].voice);
        AXSetVoiceState(voices[idx].voice, 0);

        voices[idx].voice = NULL;
        voices[idx].x4 = 0;
        voices[idx].x8 = 0;
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

    UNK_USERDATA* data = (UNK_USERDATA*)info->cb.userData;
    xSTAssetName(data->aid);
    dump_flags(data->flags);
    if (data->x0 == 0)
    {
        return;
    }

    if (r3 <= 0)
    {
        return;
    }

    data->x88 += r3;
    data->x90 += r3;
    data->flags |= 0x800;
    data->flags &= ~0x100;
    if (data->flags & (0x200 | 0x400))
    {
        houston_we_have_a_problem = TRUE;
    }
    if ((data->flags & 0x4) == 0)
    {
        return;
    }

    U32 dest = 0;
    if ((data->flags & 0x1000) == 0)
    {
        data->flags |= 0x200;
        dest = data->dest_a;
    }
    else if ((data->flags & 0x2000) == 0)
    {
        data->flags |= 0x400;
        dest = data->dest_b;
    }

    if (dest != 0)
    {
        ARQPostRequest(&data->request, (u32)data, 0, 1, data->source, dest, 0x4000, arqcb);
    }
}

static void arqcb(u32 pointerToARQRequest)
{
    if (!soundInited)
    {
        return;
    }

    UNK_USERDATA* data = (UNK_USERDATA*)((ARQRequest*)pointerToARQRequest)->owner;

    xSTAssetName(data->aid);
    dump_flags(data->flags);
    last_ar = (ARQRequest*)pointerToARQRequest;
    if (last_ar->length == 0)
    {
        return;
    }

    //FIXME: Missing redundant branch instruction here
    if (data->x0 == 0)
    {
        return;
    }

    if (data->flags & 0x100)
    {
        houston_we_have_a_problem = TRUE;
    }
    if (data->flags & 0x1000000)
    {
        if (data->flags & 0x200)
        {
            data->flags |= 0x1000;
            data->flags &= ~0x200;
        }
        if (data->flags & 0x400)
        {
            data->flags |= 0x2000;
            data->flags &= ~0x400;
        }

        data->x90 += data->xe4;
        data->xe4 = 0;
        data->xe0 = 0;
    }
    else if (data->flags & 0x200)
    {
        data->flags |= 0x1000;
        data->flags &= ~0x200;
    }
    else if (data->flags & 0x400)
    {
        data->flags |= 0x2000;
        data->flags &= ~0x400;
    }

    if (data->x8c - data->x90 == 0)
    {
        xSTAssetName(data->aid);
        data->flags |= 0x20;
    }
    else if ((data->flags & 0x1000000) == 0)
    {
        data->flags |= 0x200000;
    }

    data->flags &= ~0x800;
    data->flags &= ~0x4000000;
    data->flags &= ~0x400000;
    if(data->flags & 0x4) {
        data->flags &= ~4;
        data->flags |= 0x8;
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
