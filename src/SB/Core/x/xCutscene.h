#ifndef XCUTSCENE_H
#define XCUTSCENE_H

#include "xFile.h"
#include "rpworld.h"

struct xCutsceneInfo
{
    U32 Magic;
    U32 AssetID;
    U32 NumData;
    U32 NumTime;
    U32 MaxModel;
    U32 MaxBufEven;
    U32 MaxBufOdd;
    U32 HeaderSize;
    U32 VisCount;
    U32 VisSize;
    U32 BreakCount;
    U32 pad;
    char SoundLeft[16];
    char SoundRight[16];
};

struct xCutsceneData
{
    U32 DataType;
    U32 AssetID;
    U32 ChunkSize;
    union
    {
        U32 FileOffset;
        void* DataPtr;
    };
};

#define XCUTSCENEDATA_TYPE_SOUND 5
#define XCUTSCENEDATA_TYPE_6 6

struct xCutsceneBreak
{
    F32 Time;
    S32 Index;
};

struct xCutsceneTime
{
    F32 StartTime;
    F32 EndTime;
    U32 NumData;
    U32 ChunkIndex;
};

struct XCSNNosey
{
    void* userdata;
    S32 flg_nosey;

    void CanRenderNow()
    {
    }

    void UpdatedAnimated(RpAtomic*, RwMatrixTag*, U32, U32)
    {
    }
};

struct xCutscene
{
    xCutsceneInfo* Info;
    xCutsceneData* Data;
    U32* TimeChunkOffs;
    U32* Visibility;
    xCutsceneBreak* BreakList;
    xCutsceneTime* Play;
    xCutsceneTime* Stream;
    U32 Waiting;
    U32 BadReadPause;
    F32 BadReadSpeed;
    void* RawBuf;
    void* AlignBuf;
    F32 Time;
    F32 CamTime;
    U32 PlayIndex;
    U32 Ready;
    S32 DataLoading;
    U32 GotData;
    U32 ShutDownWait;
    F32 PlaybackSpeed;
    U32 Opened;
    tag_xFile File;
    S32 AsyncID;
    void* MemBuf;
    void* MemCurr;
    U32 SndStarted;
    U32 SndNumChannel;
    U32 SndChannelReq[2];
    U32 SndAssetID[2];
    U32 SndHandle[2];
    XCSNNosey* cb_nosey;
    void NoseySet(XCSNNosey* nosey);
};

struct CutsceneShadowModel
{
    RpAtomic* model;
    RwMatrixTag* animMat;
    U32 shadowBits;
};

struct xEnt;

extern U32 gFrameCount;

void xCutscene_Init(void* toc);
xCutscene* xCutscene_CurrentCutscene();
void xCutscene_Render(xCutscene* csn, xEnt**, S32*, F32*);
U32 iCSFileOpen(xCutscene* csn);
xCutscene* xCutscene_Create(U32 id);
S32 xCutscene_Destroy(xCutscene* csn);
S32 xCutscene_LoadStart(xCutscene* csn);
void xCutscene_SetSpeed(xCutscene* csn, F32 speed);
F32 xCutsceneConvertBreak(float time, xCutsceneBreak* breaklist, U32 breakcount, int idx);
S32 xCutscene_Update(xCutscene* csn, F32 dt);
void CutsceneShadowRender(CutsceneShadowModel* smod);

#endif
