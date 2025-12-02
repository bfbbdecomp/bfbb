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

struct iSndFileInfo
{
    U32 ID; // offset 0x0
    U32 assetID; // offset 0x4
    U16 sample_rate; // offset 0x8
    U8 is_streamed; // offset 0xA
    union
    {
        struct
        {
            U32 address; // offset 0x0
            U32 size; // offset 0x4
        } nonstream; // offset 0xC
        struct
        {
            S32 file_index; // offset 0x0
            U32 lsn; // offset 0x4
            U32 data_size; // offset 0x8
            U16 stream_interleave_size; // offset 0xC
            U16 stream_interleave_count; // offset 0xE
        } stream; // offset 0xC
    };
};

// Size: 0x20
// This was not in dwarf data
struct vinfo
{
    _AXVPB* voice;
    U32 x4;
    U32 x8;
    S32 buffer[2];
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

typedef void (*iSndExternalCallback)(U32);

void iSndInit();
void iSndExit();

void iSndSetEnvironmentalEffect(isound_effect);
void iSndInitSceneLoaded();

S32 iSndIsPlaying(U32 assetID);
S32 iSndIsPlaying(U32 assetID, U32 parid);
S32 iSndIsPlayingByHandle(U32 handle);
iSndFileInfo* iSndLookup(U32 id);

void iSndPause(U32 snd, U32 pause);
void iSndStop(U32 snd);
void iSndUpdate();

void iSndFindFreeVoice(U32 priority, U32 flags, U32 owner);

void iSndPlay(xSndVoiceInfo* vp);
void iSndSetVol(U32 snd, F32 vol);
void iSndSetPitch(U32 snd, F32 pitch);
void iSndStartStereo(U32 id1, U32 id2, F32 pitch);
void iSndStereo(U32 stereo);

void iSndWaitForDeadSounds();
void iSndSuspendCD(U32);

void iSndSceneExit();

S32 iSndLoadSounds(void*);
void iSndDIEDIEDIE();
void iSndSetExternalCallback(iSndExternalCallback callback);

void iSndSuspend();
void iSndResume();

F32 iSndGetVol(U32 snd);

// FIXME: delete these
U32 SampleToNybbleAddress(U32 sample);
void iSndCalcVol(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
void iSndCalcVol3d(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
#endif
