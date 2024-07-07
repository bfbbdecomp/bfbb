#ifndef ISND_H
#define ISND_H

#include <types.h>

struct xSndVoiceInfo;
struct tag_xFile;
struct _AXVPB;

struct iSndVol
{
    S16 volL;
    S16 volR;
};

struct iSndInfo
{
    U32 flags;
    iSndVol vol;
    U32 pitch;
    S32 lastStreamBuffer;
};

// Size: 0x20
// This was not in dwarf data
struct vinfo
{
    _AXVPB* voice;
    S32 buffer[4];
    U32 _0x14;
    S32 buffer2[2];
};

// Size: ???
// Not in dwarf data
struct sDSPADPCM
{
    S32 buffer[6];
};

// not in dwarf data,
enum isound_effect
{
    iSND_EFFECT_NONE,
    iSND_EFFECT_CAVE
};

void arq_callback(long);
void iSndExit();

void iSndPause(U32 snd, U32 pause);
void iSndSetEnvironmentalEffect(isound_effect);
void iSndInit();
void iSndCalcVol(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
void iSndCalcVol3d(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
void iSndVolUpdate(xSndVoiceInfo* info, vinfo* vinfo);
void iSndUpdateSounds();
void iSndUpdate();
void iSndSuspendCD(U32);
void iSndMessWithEA(sDSPADPCM* param1);
U32 SampleToNybbleAddress(U32 sample);
void iSndInitSceneLoaded();
S32 iSndIsPlaying(U32 assetID);
S32 iSndIsPlaying(U32 assetID, U32 parid);
void iSndWaitForDeadSounds();
void iSndSceneExit();
void sndloadcb(tag_xFile* tag);
void iSndSetExternalCallback(void (*func_ptr)(U32));
void iSndAXFree(_AXVPB** param1);
void iSndStartStereo(U32 id1, U32 id2, F32 pitch);
void iSndStop(U32 snd);
void iSndSetVol(U32 snd, F32 vol);
void iSndSetPitch(U32 snd, F32 pitch);
F32 iSndGetVol(U32 snd);
void iSndStereo(U32 stereo);

#endif
