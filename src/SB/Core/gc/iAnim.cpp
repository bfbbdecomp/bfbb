#include "iAnim.h"

#include "iAnimSKB.h"
#include "xMath.h"

#include <rwcore.h>
#include <rtslerp.h>

void iAnimInit()
{
    return;
}

void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
    iAnimEvalSKB((iAnimSKBHeader*)RawData, time, flags, tran, quat);
}

float32 iAnimDuration(void* RawData)
{
    return iAnimDurationSKB((iAnimSKBHeader*)RawData);
}

uint32 iAnimBoneCount(void* RawData)
{
    if (*(uint32*)RawData == '1BKS')
    {
        return ((iAnimSKBHeader*)RawData)->BoneCount;
    }

    return 0;
}

#ifdef NON_MATCHING
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset,
                float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2,
                xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest)
{
    // non-matching: incorrect instruction order and regalloc

    uint32 i;
    uint32 invert = 0;
    RtQuat* q2;
    RtQuat ident = { 0.0f, 0.0f, 0.0f, 1.0f };
    xVec3* t2;

    if (!Quat2)
    {
        q2 = &ident;
        invert = 1;
        t2 = (xVec3*)&ident.imag;
    }
    else
    {
        q2 = (RtQuat*)Quat2;
        t2 = Tran2;
    }

    if (BlendFactor < 0.0f)
    {
        BlendFactor = -BlendFactor;
        invert ^= 1;
    }

    if (!BoneTable && !BlendTimeOffset)
    {
        float32 lerp = BlendFactor * BlendRecip;

        if (lerp < 0.0f)
        {
            lerp = 0.0f;
        }
        else if (lerp > 1.0f)
        {
            lerp = 1.0f;
        }

        if (invert)
        {
            lerp = 1.0f - lerp;
        }

        if (Quat1)
        {
            // non-matching: 0.0f constant is loaded outside of loop

            for (i = 0; i < BoneCount; i++)
            {
                RtQuatSlerpCache qcache;

                RtQuatSetupSlerpCache((RtQuat*)Quat1, q2, &qcache);
                RtQuatSlerp((RtQuat*)QuatDest, (RtQuat*)Quat1, q2, lerp, &qcache);

                Quat1++;

                if (Quat2)
                {
                    q2++;
                }

                QuatDest++;
            }
        }

        if (Tran1)
        {
            if (Quat2)
            {
                for (i = 0; i < BoneCount; i++, TranDest++, t2++, Tran1++)
                {
                    TranDest->x = lerp * (t2->x - Tran1->x) + Tran1->x;
                    TranDest->y = lerp * (t2->y - Tran1->y) + Tran1->y;
                    TranDest->z = lerp * (t2->z - Tran1->z) + Tran1->z;
                }
            }
            else
            {
                for (i = 0; i < BoneCount; i++, TranDest++, Tran1++)
                {
                    TranDest->x = lerp * (t2->x - Tran1->x) + Tran1->x;
                    TranDest->y = lerp * (t2->y - Tran1->y) + Tran1->y;
                    TranDest->z = lerp * (t2->z - Tran1->z) + Tran1->z;
                }
            }
        }
    }
    else
    {
        float32 baselerp;

        if (!BlendTimeOffset)
        {
            baselerp = BlendFactor * BlendRecip;

            if (baselerp < 0.0f)
            {
                baselerp = 0.0f;
            }
            else if (baselerp > 1.0f)
            {
                baselerp = 1.0f;
            }

            if (invert)
            {
                baselerp = 1.0f - baselerp;
            }
        }

        for (i = 0; i < BoneCount; i++)
        {
            float32 lerp;

            if (BlendTimeOffset)
            {
                baselerp = -(1 / 1024.0f * BlendTimeOffset[i * 2] - BlendFactor);

                if (BlendTimeOffset[i * 2 + 1] != 0)
                {
                    baselerp *= 1 / 1024.0f * BlendTimeOffset[i * 2 + 1];

                    if (baselerp < 0.0f)
                    {
                        baselerp = 0.0f;
                    }
                    else if (baselerp > 1.0f)
                    {
                        baselerp = 1.0f;
                    }
                }
                else
                {
                    if (baselerp < 0.0f)
                    {
                        baselerp = 0.0f;
                    }
                    else
                    {
                        baselerp = 1.0f;
                    }
                }

                if (invert)
                {
                    baselerp = 1.0f - baselerp;
                }
            }

            if (BoneTable)
            {
                lerp = baselerp * BoneTable[i];
            }
            else
            {
                lerp = baselerp;
            }

            if (Quat1)
            {
                RtQuatSlerpCache qcache;

                RtQuatSetupSlerpCache((RtQuat*)Quat1, q2, &qcache);
                RtQuatSlerp((RtQuat*)QuatDest, (RtQuat*)Quat1, q2, lerp, &qcache);

                Quat1++;

                if (Quat2)
                {
                    q2++;
                }

                QuatDest++;
            }

            if (Tran1)
            {
                TranDest->x = lerp * (t2->x - Tran1->x) + Tran1->x;
                TranDest->y = lerp * (t2->y - Tran1->y) + Tran1->y;
                TranDest->z = lerp * (t2->z - Tran1->z) + Tran1->z;

                Tran1++;

                if (Quat2)
                {
                    t2++;
                }

                TranDest++;
            }
        }
    }
}
#endif
