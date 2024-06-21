#include "xCurveAsset.h"

#include "xMath.h"

#include <stdlib.h>

float32 xCurveAssetEvaluate(const xCurveAsset* curve_asset, float32 t)
{
    float32 max_t = curve_asset->delta * (curve_asset->numPoints - 1);

    if (curve_asset->clamp == xCC_CONSTANT)
    {
        float32 curve_length = MIN(t, max_t);

        t = MAX(curve_length, 0.0f);
    }
    else
    {
        int32 curve_shift = t / max_t;

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

    uint32 last_point = t / curve_asset->delta;
    float32 u = (t - (last_point * curve_asset->delta)) / curve_asset->delta;

    return (1.0f - u) * curve_asset->points[last_point] + u * curve_asset->points[last_point + 1];
}