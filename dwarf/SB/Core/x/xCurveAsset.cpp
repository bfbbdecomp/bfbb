typedef struct xCurveAsset;
typedef enum xCurveType;
typedef enum xCurveClamp;



struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	f32 delta;
	s32 numPoints;
	f32* points;
};

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


f32 xCurveAssetEvaluate(xCurveAsset* curve_asset, f32 t);

// xCurveAssetEvaluate__FPC11xCurveAssetf
// Start address: 0x3ade50
f32 xCurveAssetEvaluate(xCurveAsset* curve_asset, f32 t)
{
	f32 max_t;
	f32 curve_length;
	s32 curve_shift;
	u32 last_point;
	f32 u;
}

