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
    F32 delta;
    S32 numPoints;
    F32* points;
};

F32 xCurveAssetEvaluate(const xCurveAsset* curve_asset, F32 t);

#endif
