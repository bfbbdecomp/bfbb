#ifndef XCURVEASSET_H
#define XCURVEASSET_H

#include <types.h>

enum xCurveType
{
    xCVT_BAKED
};

enum xCurveClamp
{
    xCC_CONSTANT,
    xCC_CYCLE,
    xCC_OSCILLATE
};

struct xCurveAsset
{
    xCurveType type;
    xCurveClamp clamp;
    float32 delta;
    int32 numPoints;
    float32* points;
};

float32 xCurveAssetEvaluate(const xCurveAsset* curve_asset, float32 t);

#endif