#include "iAnimSKB.h"

#include <rwcore.h>
#include <rtslerp.h>

#include <limits.h>

#ifdef NON_MATCHING
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
    uint32 i, tidx, bcount, tcount;
    iAnimSKBKey* keys;
    float32* times;
    uint16* offsets;
    int32 asdf; // unused
    float32 scalex, scaley, scalez;

    tcount = data->TimeCount;
    bcount = data->BoneCount;

    keys = (iAnimSKBKey*)(data + 1);
    times = (float32*)(keys + data->KeyCount);
    offsets = (uint16*)(times + tcount);

    if (time < 0.0f)
    {
        time = 0.0f;
    }

    if (time > times[tcount - 1])
    {
        time = times[tcount - 1];
    }

    tidx = (tcount - 1) % 4;

    while (times[tidx] < time)
    {
        tidx += 4;
    }

    while (tidx && time <= times[tidx])
    {
        tidx--;
    }

    offsets += tidx * bcount;

    if (flags & 0x1)
    {
        bcount = 1;
    }

    if (flags & 0x2)
    {
        bcount--;
        offsets++;
    }

    if (tcount == 1)
    {
        // non-matching: float constants are loaded outside of loop

        scalex = data->Scale[0];
        scaley = data->Scale[1];
        scalez = data->Scale[2];

        for (i = 0; i < bcount; i++, quat++, tran++)
        {
            iAnimSKBKey* k = &keys[i];

            quat->v.x = k->Quat[0] * (1.0f / SHRT_MAX);
            quat->v.y = k->Quat[1] * (1.0f / SHRT_MAX);
            quat->v.z = k->Quat[2] * (1.0f / SHRT_MAX);
            quat->s = k->Quat[3] * (1.0f / SHRT_MAX);

            tran->x = k->Tran[0] * scalex;
            tran->y = k->Tran[1] * scaley;
            tran->z = k->Tran[2] * scalez;
        }
    }
    else
    {
        // non-matching: float constants are loaded outside of loop

        scalex = data->Scale[0];
        scaley = data->Scale[1];
        scalez = data->Scale[2];

        for (i = 0; i < bcount; i++, quat++, tran++)
        {
            // no idea if this part even functionally matches.
            // come back to this when not lazy

            RtQuatSlerpCache qcache;
            RtQuat q1, q2;
            RwReal time1, time2, lerp;
            iAnimSKBKey* k = &keys[*offsets];
            uint32 costheta, theta; // unused

            offsets++;

            time1 = time - times[k->TimeIndex];
            time2 = times[k[1].TimeIndex] - times[k[0].TimeIndex];
            lerp = time1 / time2;

            q1.imag.x = k[0].Quat[0] * (1.0f / SHRT_MAX);
            q1.imag.y = k[0].Quat[1] * (1.0f / SHRT_MAX);
            q1.imag.z = k[0].Quat[2] * (1.0f / SHRT_MAX);
            q1.real = k[0].Quat[3] * (1.0f / SHRT_MAX);

            q2.imag.x = k[1].Quat[0] * (1.0f / SHRT_MAX);
            q2.imag.y = k[1].Quat[1] * (1.0f / SHRT_MAX);
            q2.imag.z = k[1].Quat[2] * (1.0f / SHRT_MAX);
            q2.real = k[1].Quat[3] * (1.0f / SHRT_MAX);

            RtQuatSetupSlerpCache(&q1, &q2, &qcache);
            RtQuatSlerp((RtQuat*)quat, &q1, &q2, lerp, &qcache);

            tran->x =
                lerp * (scalex * k[1].Tran[0] - scalex * k[0].Tran[0]) + scalex * k[0].Tran[0];
            tran->y =
                lerp * (scaley * k[1].Tran[1] - scaley * k[0].Tran[1]) + scaley * k[1].Tran[1];
            tran->z =
                lerp * (scalez * k[1].Tran[2] - scalez * k[0].Tran[2]) + scalez * k[1].Tran[2];
        }
    }
}
#endif

float32 iAnimDurationSKB(iAnimSKBHeader* data)
{
    return ((float32*)((iAnimSKBKey*)(data + 1) + data->KeyCount))[data->TimeCount - 1];
}
