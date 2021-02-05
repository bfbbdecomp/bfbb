#include "iSnd.h"

#include <types.h>

#include "dolphin/dolphin.h"
#include "../src/Core/p2/iMix.h"
#include "../src/Core/x/xCutscene.h"
#include "../src/Core/x/xSnd.h"
#include "../src/Core/x/xMath.h"

extern vinfo voices[58];
extern int8 soundInited;
extern int32 SoundFlags;
extern float32 _1262;
extern float32 _1263;
extern volatile int32 fc;

// func_800CF92C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dv_callback__FPv")

// func_800CFA40
void arq_callback(long32)
{
    if (!soundInited)
    {
        return;
    }
    SoundFlags = 0;
}

// func_800CFA58
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dump_flags__FUi")

// func_800CFB9C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dvdcb__FlP11DVDFileInfo")

// func_800CFCAC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "arqcb__FUl")

// func_800CFE54
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "fcb__Fv")

// func_800D047C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndInit__Fv")

// func_800D07D8
void iSndExit()
{
    soundInited = 0;
    AXQuit();
}

// func_800D0800
//not sure where this type is from.
void iSndSetEnvironmentalEffect(isound_effect)
{
    return;
}

// func_800D0804
void iSndInitSceneLoaded()
{
}

// func_800D0808
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUi")

// func_800D08DC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUiUi")

// func_800D0978
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlayingByHandle__FUi")

// func_800D0A44
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLookup__FUi")

// func_800D0D34
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPause__FUiUi")

// func_800D0EFC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStop__FUi")

#ifndef NON_MATCHING
// func_800D1060
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iVolFromX__Ff")
#else
uint32 iVolFromX(float32 param1)
{
    float f = MAX(param1, _1263);

    int32 i = _1262 * xlog(f);
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

// func_800D10C8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol__FP13xSndVoiceInfoP5vinfo")

// func_800D115C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol3d__FP13xSndVoiceInfoP5vinfo")

// func_800D12D8
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

// func_800D1344
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdateStreams__Fv")

// func_800D14E8
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

// func_800D1570
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdate__Fv")

// func_800D16A4
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndFindFreeVoice__FUiUiUi")

// func_800D1938
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPrepStream__FP13xSndVoiceInfo")

// func_800D1A68
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayMemStream__FP13xSndVoiceInfo")

// func_800D1C6C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayStream__FP13xSndVoiceInfo")

// func_800D1EAC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlaySound__FP13xSndVoiceInfo")

// func_800D21A0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlay__FP13xSndVoiceInfo")

// func_800D2260
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetVol__FUif")

// func_800D23F0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetPitch__FUif")

// func_800D2560
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
}

// func_800D2564
void iSndStereo(uint32 i)
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

#ifndef NON_MATCHING
// func_800D25B4
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndWaitForDeadSounds__Fv")
#else
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

// func_800D260C
// #pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSuspendCD__FUi")
void iSndSuspendCD(uint32)
{
}

// func_800D2610
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSceneExit__Fv")

// func_800D27E4
void iSndMessWithEA(sDSPADPCM* param1) //sDSPADPCM*
{
    if (param1 != NULL)
    {
        param1->buffer[5] = SampleToNybbleAddress(param1->buffer[0] - 1);
    }
}

#if 1
// func_800D2820
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "SampleToNybbleAddress__FUi")
#else
uint32 SampleToNybbleAddress(uint32 sample)
{
    uint32 i = sample * 0x124924925U >> 0x20;
    i = i & 0xfffffff0;
    i = i + sample % 0xe + 2;
    return i;
}
#endif

// func_800D2854
void sndloadcb(tag_xFile* tag)
{
    SoundFlags = 0;
}

// func_800D2860
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLoadSounds__FPv")

// func_800D2DF0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndDIEDIEDIE__Fv")

// func_800D2EB8
void iSndSetExternalCallback(uint32 (*func_ptr)())
{
}

// func_800D2EBC
void iSndMyAXFree(_AXVPB** param1)
{
    if (param1 != NULL && *param1 != NULL)
    {
        AXFreeVoice(*param1);
        *param1 = NULL;
    }
}

// func_800D2F00
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSuspend__Fv")

// func_800D2F94
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndResume__Fv")

// func_800D3044
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndGetVol__FUi")
