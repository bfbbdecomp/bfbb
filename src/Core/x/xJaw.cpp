#include "xJaw.h"

#include "xstransvc.h"

#include <cmath>

struct xJawDataTable
{
    uint32 soundHashID;
    uint32 dataStart;
    uint32 dataLength;
};

void* xJaw_FindData(uint32 soundID)
{
    int32 i, numJawTables;

    numJawTables = xSTAssetCountByType('JAW ');

    for (i = 0; i < numJawTables; i++)
    {
        uint32 j;
        void* data;
        uint32 jawcount;
        xJawDataTable* tbl;
        void* rawdata;

        data = xSTFindAssetByType('JAW ', i, NULL);
        jawcount = *(uint32*)data;
        tbl = (xJawDataTable*)((uint32*)data + 1);
        rawdata = tbl + jawcount;

        for (j = 0; j < jawcount; j++)
        {
            if (soundID == tbl[j].soundHashID)
            {
                return (uint8*)rawdata + tbl[j].dataStart;
            }
        }
    }

    xSTAssetName(soundID);
    return NULL;
}

#define swap(data)                                                                                 \
    {                                                                                              \
        uint8 c;                                                                                   \
        c = ((uint8*)(data))[3];                                                                   \
        ((uint8*)(data))[3] = ((uint8*)(data))[0];                                                 \
        ((uint8*)(data))[0] = c;                                                                   \
        c = ((uint8*)(data))[2];                                                                   \
        ((uint8*)(data))[2] = ((uint8*)(data))[1];                                                 \
        ((uint8*)(data))[1] = c;                                                                   \
    }

float32 xJaw_EvalData(void* data, float32 time)
{
    float32 lerp;
    int32 idx, numdata;

    numdata = *(int32*)data;

    if (numdata > (uint32)0xFFFF)
    {
        swap(data);
    }

    time *= 60.0f;
    idx = std::floorf(time);
    lerp = time - std::floorf(time);

    if (idx < 0)
    {
        return 0.0f;
    }
    else if (idx >= numdata - 1)
    {
        return 0.0f;
    }
    else
    {
        uint8* jawdata;
        jawdata = (uint8*)data + 4;

        return ((1.0f - lerp) * jawdata[idx] + lerp * jawdata[idx + 1]) / 255.0f;
    }
}
