#ifndef XCUTSCENE_H
#define XCUTSCENE_H

#include "xFile.h"

struct xCutsceneInfo
{
    uint32 Magic;
    uint32 AssetID;
    uint32 NumData;
    uint32 NumTime;
    uint32 MaxModel;
    uint32 MaxBufEven;
    uint32 MaxBufOdd;
    uint32 HeaderSize;
    uint32 VisCount;
    uint32 VisSize;
    uint32 BreakCount;
    uint32 pad;
    char SoundLeft[16];
    char SoundRight[16];
};

struct xCutsceneData
{
    uint32 DataType;
    uint32 AssetID;
    uint32 ChunkSize;
    union
    {
        uint32 FileOffset;
        void* DataPtr;
    };
};

#define XCUTSCENEDATA_TYPE_SOUND 5
#define XCUTSCENEDATA_TYPE_6 6

struct xCutsceneBreak
{
    float32 Time;
    int32 Index;
};

struct xCutsceneTime
{
    float32 StartTime;
    float32 EndTime;
    uint32 NumData;
    uint32 ChunkIndex;
};

struct XCSNNosey
{
    void* userdata;
    int32 flg_nosey;
};

struct xCutscene
{
    xCutsceneInfo* Info;
    xCutsceneData* Data;
    uint32* TimeChunkOffs;
    uint32* Visibility;
    xCutsceneBreak* BreakList;
    xCutsceneTime* Play;
    xCutsceneTime* Stream;
    uint32 Waiting;
    uint32 BadReadPause;
    float32 BadReadSpeed;
    void* RawBuf;
    void* AlignBuf;
    float32 Time;
    float32 CamTime;
    uint32 PlayIndex;
    uint32 Ready;
    int32 DataLoading;
    uint32 GotData;
    uint32 ShutDownWait;
    float32 PlaybackSpeed;
    uint32 Opened;
    tag_xFile File;
    int32 AsyncID;
    void* MemBuf;
    void* MemCurr;
    uint32 SndStarted;
    uint32 SndNumChannel;
    uint32 SndChannelReq[2];
    uint32 SndAssetID[2];
    uint32 SndHandle[2];
    XCSNNosey* cb_nosey;
};

extern uint32 gFrameCount;

struct xEnt;

xCutscene* xCutscene_CurrentCutscene();
void xCutscene_Render(xCutscene* csn, xEnt**, int32*, float32*);

#endif