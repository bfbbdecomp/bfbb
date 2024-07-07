#include "iSnd.h"

#include <types.h>

#include "dolphin/dolphin.h"
#include "iMix.h"
#include "xCutscene.h"
#include "xSnd.h"
#include "xMath.h"

extern vinfo voices[58];
extern char soundInited;
extern S32 SoundFlags;
extern F32 _1262;
extern F32 _1263;
extern volatile S32 fc;

void arq_callback(long)
{
    if (!soundInited)
    {
        return;
    }
    SoundFlags = 0;
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

#ifdef NON_MATCHING
U32 iVolFromX(F32 param1)
{
    float f = MAX(param1, _1263);

    S32 i = _1262 * xlog(f);
    i = (i & i >> 0x1f);
    if (i < -0x388)
    {
        return -0x388;
    }
    else
    {
        return (i & i >> 0x1f);
    }
}
#endif

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

#ifdef NON_MATCHING
void iSndWaitForDeadSounds()
{
    fc = 0;
    int i = 0;
    // Can't get 0x8c to get stored in r31
    while ((i = fc) < 0x8c) //for (int i = 0; (i = fc) < 0x8c; )
    {
        i = fc;
        while (fc < i + 0xe)
            ;
        iSndUpdate();
    }
}
#endif

//
void iSndSuspendCD(U32)
{
}

void iSndMessWithEA(sDSPADPCM* param1) //sDSPADPCM*
{
    if (param1 != NULL)
    {
        param1->buffer[5] = SampleToNybbleAddress(param1->buffer[0] - 1);
    }
}

#if 0
U32 SampleToNybbleAddress(U32 sample)
{
    U32 i = sample * 0x124924925U >> 0x20;
    i = i & 0xfffffff0;
    i = i + sample % 0xe + 2;
    return i;
}
#endif

void sndloadcb(tag_xFile* tag)
{
    SoundFlags = 0;
}

void iSndSetExternalCallback(void (*func_ptr)(U32))
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
