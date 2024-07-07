#include "xCurveAsset.h"

#include "xMath.h"

#include <stdlib.h>

F32 xCurveAssetEvaluate(const xCurveAsset* curve_asset, F32 t)
{
    F32 max_t = curve_asset->delta * (curve_asset->numPoints - 1);

    if (curve_asset->clamp == xCC_CONSTANT)
    {
        F32 curve_length = MIN(t, max_t);

        t = MAX(curve_length, 0.0f);
    }
    else
    {
        S32 curve_shift = t / max_t;

        if (t < 0.0f)
        {
            curve_shift--;
        }

        t -= curve_shift * max_t;

        if (curve_asset->clamp == xCC_OSCILLATE && abs(curve_shift % 2) == 1)
        {
            t = max_t - t;
        }
    }

    U32 last_point = t / curve_asset->delta;
    F32 u = (t - (last_point * curve_asset->delta)) / curve_asset->delta;

    return (1.0f - u) * curve_asset->points[last_point] + u * curve_asset->points[last_point + 1];
}
