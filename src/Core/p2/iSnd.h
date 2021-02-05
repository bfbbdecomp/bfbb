#ifndef ISND_H
#define ISND_H

#include <types.h>

struct xSndVoiceInfo;
struct tag_xFile;
struct _AXVPB;

struct iSndVol
{
    int16 volL;
    int16 volR;
};

struct iSndInfo
{
    uint32 flags;
    iSndVol vol;
    uint32 pitch;
    int32 lastStreamBuffer;
};

// Size: 0x20
// This was not in dwarf data
struct vinfo
{
    _AXVPB* voice;
    int32 buffer[4];
    uint32 _0x14;
    int32 buffer2[2];
};

// Size: ???
// Not in dwarf data
struct sDSPADPCM
{
    int32 buffer[6];
};

// not in dwarf data,
struct isound_effect
{
};

void arq_callback(long32);
void iSndExit();

void iSndInit();
void iSndCalcVol(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
void iSndCalcVol3d(xSndVoiceInfo* xSndVoiceInfo, vinfo* vinfo);
void iSndVolUpdate(xSndVoiceInfo* info, vinfo* vinfo);
void iSndUpdateSounds();
void iSndUpdate();
void iSndSuspendCD(uint32);
void iSndMessWithEA(sDSPADPCM* param1);
uint32 SampleToNybbleAddress(uint32 sample);
void iSndInitSceneLoaded();
uint8 iSndIsPlaying(uint32 assetID);
uint8 iSndIsPlaying(uint32 assetID, uint32 parid);
void iSndWaitForDeadSounds();
void iSndSceneExit();
void sndloadcb(tag_xFile* tag);
void iSndSetExternalCallback(uint32 (*func_ptr)());
void iSndAXFree(_AXVPB** param1);
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch);

#endif