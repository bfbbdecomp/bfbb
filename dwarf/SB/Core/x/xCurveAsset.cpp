typedef struct xCurveAsset;
typedef enum xCurveType;
typedef enum xCurveClamp;



struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	float32 delta;
	int32 numPoints;
	float32* points;
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


float32 xCurveAssetEvaluate(xCurveAsset* curve_asset, float32 t);

// xCurveAssetEvaluate__FPC11xCurveAssetf
// Start address: 0x3ade50
float32 xCurveAssetEvaluate(xCurveAsset* curve_asset, float32 t)
{
	float32 max_t;
	float32 curve_length;
	int32 curve_shift;
	uint32 last_point;
	float32 u;
}

