#include "iCutscene.h"

#include "xpkrsvc.h"
#include "xstransvc.h"
#include "xMath.h"

#include "iModel.h"

#include <rwcore.h>
#include <string.h>

U32 read_sizzze = 0;

extern F32 _835_1;
extern F32 _836_1;
extern F32 _837_4;

void iCSSoundSetup(xCutscene* csn)
{
    xCutsceneData* data;
    U32 dataIndex;
    U32 numData;

    data = (xCutsceneData*)(csn->Play + 1);
    numData = csn->Play->NumData;

    for (dataIndex = 0; dataIndex < numData; dataIndex++)
    {
        if (data->DataType == XCUTSCENEDATA_TYPE_SOUND)
        {
            if (csn->SndNumChannel >= 2)
            {
                break;
            }

            csn->SndAssetID[csn->SndNumChannel] = data->AssetID;
            csn->SndNumChannel++;
        }

        data = (xCutsceneData*)((U8*)data + ALIGN(data->ChunkSize, 16) + sizeof(xCutsceneData));
    }
}

void* iCSSoundGetData(xSndVoiceInfo* vp, U32* size)
{
    U32 channelIndex;
    U32 dataIndex;
    xCutscene* csn;
    void* retdata;
    xCutsceneData* data;
    U32 numChannel;
    U32 numData;
    S32 sndChannelIndex;
    U32 r4;
    U32 sndChannelReq;

    csn = xCutscene_CurrentCutscene();

    numChannel = csn->SndNumChannel;
    retdata = NULL;
    sndChannelIndex = -1;

    for (channelIndex = 0; channelIndex < numChannel; channelIndex++)
    {
        if (csn->SndAssetID[channelIndex] == vp->assetID)
        {
            sndChannelIndex = channelIndex;
            sndChannelReq = csn->SndChannelReq[channelIndex];
        }
    }

    if (sndChannelIndex == -1)
    {
        return NULL;
    }

    if (!csn->Waiting && csn->Stream->ChunkIndex == sndChannelReq)
    {
        numData = csn->Stream->NumData;
        data = (xCutsceneData*)(csn->Stream + 1);
    }
    else
    {
        numData = csn->Play->NumData;
        data = (xCutsceneData*)(csn->Play + 1);

        if (csn->SndChannelReq[sndChannelIndex] != csn->Play->ChunkIndex)
        {
            csn->SndChannelReq[sndChannelIndex] = csn->Play->ChunkIndex;
        }
    }

    r4 = 0;

    for (dataIndex = 0; dataIndex < numData; dataIndex++)
    {
        if (data->DataType == XCUTSCENEDATA_TYPE_SOUND)
        {
            if (!retdata)
            {
                retdata = (void*)(data + 1);
                *size = data->ChunkSize;
            }

            if (sndChannelIndex == r4)
            {
                retdata = (void*)(data + 1);
                *size = data->ChunkSize;

                break;
            }
            else
            {
                r4++;
            }
        }

        data = (xCutsceneData*)((U8*)data + ALIGN(data->ChunkSize, 16) + sizeof(xCutsceneData));
    }

    if (!retdata)
    {
        return NULL;
    }

    while ((U32)retdata & 0x1F)
    {
        retdata = (void*)((U8*)retdata + 16);
        *size -= 16;
    }

    csn->SndChannelReq[sndChannelIndex]++;

    return retdata;
}

static void iCSAsyncReadCB(tag_xFile* file)
{
    S32 bytes;
    xCutscene* csn;

    if (file)
    {
        if (iFileReadAsyncStatus(file->ps.asynckey, &bytes) == IFILE_RDSTAT_DONE)
        {
            iFileSeek(file, bytes, IFILE_SEEK_CUR);
        }

        csn = xCutscene_CurrentCutscene();
        csn->Waiting = 0;
    }
}

U32 iCSFileOpen(xCutscene* csn)
{
    U32 headerskip;
    st_PKR_ASSET_TOCINFO ainfo;
    const char* filename;

    headerskip = ALIGN(csn->Info->HeaderSize, 2048);

    if (!xSTGetAssetInfo(csn->Info->AssetID, &ainfo))
    {
        return 0;
    }

    filename = xST_xAssetID_HIPFullPath(csn->Info->AssetID);

    if (iFileOpen(filename, 0x1, &csn->File) == 0)
    {
        iFileSeek(&csn->File, headerskip + (ainfo.sector - csn->File.ps.fileInfo.startAddr << 5),
                  IFILE_SEEK_SET);

        csn->File.ps.asynckey = -1;
    }
    else
    {
        return 0;
    }

    return 1;
}

void iCSFileAsyncRead(xCutscene* csn, void* dest, U32 size)
{
    U32* buf = (U32*)dest;
    U32 i;

    read_sizzze = size;
    csn->Waiting = 1;

    for (i = 0; i < size / 4; i++)
    {
        buf[i] = 0xDEADBEEF;
    }

    iFileReadAsync(&csn->File, dest, size, iCSAsyncReadCB, 0);
}

void iCSFileAsyncSkip(xCutscene* csn, U32 amount)
{
    csn->Waiting = 1;

    iFileSeek(&csn->File, amount, IFILE_SEEK_CUR);
}

void iCSFileClose(xCutscene* csn)
{
    iFileReadStop();

    csn->Opened = 0;
}

S32 iCSLoadStep(xCutscene* csn)
{
    S32 bytes;
    XFILE_READSECTOR_STATUS cdstat;
    U32 skipAccum;
    U32 tmpSize;
    void* foundModel;
    U32 i;

    if (csn->Waiting)
    {
        cdstat = xFileReadAsyncStatus(csn->File.ps.asynckey, &bytes);

        if (cdstat == XFILE_RDSTAT_INPROG || cdstat == XFILE_RDSTAT_QUEUED)
        {
            return 0;
        }
    }

    if (csn->DataLoading >= 0)
    {
        skipAccum = 0;

        while (csn->DataLoading < (S32)csn->Info->NumData)
        {
            if (csn->Data[csn->DataLoading].DataType == XCUTSCENEDATA_TYPE_6)
            {
                foundModel = NULL;
            }
            else
            {
                foundModel = xSTFindAsset(csn->Data[csn->DataLoading].AssetID, &tmpSize);
            }

            if (foundModel || csn->Data[csn->DataLoading].ChunkSize == 0)
            {
                csn->Data[csn->DataLoading].DataPtr = foundModel;

                skipAccum += ALIGN(csn->Data[csn->DataLoading].ChunkSize, 2048);

                csn->DataLoading++;
            }
            else
            {
                if (skipAccum)
                {
                    iCSFileAsyncSkip(csn, skipAccum);

                    skipAccum = 0;
                }

                if (csn->GotData)
                {
                    if (csn->Data[csn->DataLoading].DataType == XCUTSCENEDATA_TYPE_6)
                    {
                        csn->Data[csn->DataLoading].DataPtr =
                            RwMalloc(csn->Data[csn->DataLoading].ChunkSize);

                        memcpy(csn->Data[csn->DataLoading].DataPtr, csn->AlignBuf,
                               csn->Data[csn->DataLoading].ChunkSize);
                    }
                    else
                    {
                        csn->Data[csn->DataLoading].DataPtr =
                            iModelFileNew(csn->AlignBuf, csn->Data[csn->DataLoading].ChunkSize);
                    }

                    csn->Data[csn->DataLoading].DataType |= 0x80000000;
                    csn->DataLoading++;
                    csn->GotData = 0;
                }
                else
                {
                    iCSFileAsyncRead(csn, csn->AlignBuf,
                                     ALIGN(csn->Data[csn->DataLoading].ChunkSize, 2048));

                    csn->GotData = 1;
                    return 0;
                }
            }
        }

        if (skipAccum)
        {
            iCSFileAsyncSkip(csn, skipAccum);
        }

        csn->DataLoading = -1;
    }

    if (csn->DataLoading == -1)
    {
        if (csn->GotData)
        {
            iCSSoundSetup(csn);

            if (csn->SndNumChannel != 0)
            {
                xSndPauseAll(1, 1);
                xSndUpdate();

                if (csn->SndNumChannel == 2)
                {
                    // Stereo

                    csn->SndHandle[0] = xSndPlay(csn->SndAssetID[0], _835_1, _836_1, 255, 0x200, 0,
                                                 SND_CAT_CUTSCENE, _837_4);
                    csn->SndHandle[1] = xSndPlay(csn->SndAssetID[1], _835_1, _836_1, 255, 0x200, 0,
                                                 SND_CAT_CUTSCENE, _837_4);
                }
                else
                {
                    // Mono

                    csn->SndHandle[0] = xSndPlay(csn->SndAssetID[0], _835_1, _836_1, 255, 0x200, 0,
                                                 SND_CAT_CUTSCENE, _837_4);
                    csn->SndHandle[1] = 0;
                }
            }

            csn->GotData = 0;
            csn->DataLoading = -2;
        }
        else
        {
            iCSFileAsyncRead(csn, csn->Play, csn->TimeChunkOffs[1] - csn->TimeChunkOffs[0]);

            csn->GotData = 1;
            return 0;
        }
    }

    if (csn->DataLoading == -2)
    {
        if (csn->Info->NumTime > 1)
        {
            iCSFileAsyncRead(csn, csn->Stream, csn->TimeChunkOffs[2] - csn->TimeChunkOffs[1]);
        }

        csn->DataLoading = -3;
    }

    for (i = 0; i < csn->SndNumChannel; i++)
    {
    }

    csn->Ready = 1;
    return 1;
}
