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
	// Line 126, Address: 0x3ade50, Func Offset: 0
	// Line 131, Address: 0x3ade68, Func Offset: 0x18
	// Line 135, Address: 0x3ade88, Func Offset: 0x38
	// Line 137, Address: 0x3ade90, Func Offset: 0x40
	// Line 138, Address: 0x3adea8, Func Offset: 0x58
	// Line 139, Address: 0x3adec8, Func Offset: 0x78
	// Line 144, Address: 0x3aded0, Func Offset: 0x80
	// Line 149, Address: 0x3adedc, Func Offset: 0x8c
	// Line 146, Address: 0x3adee0, Func Offset: 0x90
	// Line 149, Address: 0x3adef4, Func Offset: 0xa4
	// Line 150, Address: 0x3adefc, Func Offset: 0xac
	// Line 156, Address: 0x3adf00, Func Offset: 0xb0
	// Line 153, Address: 0x3adf04, Func Offset: 0xb4
	// Line 156, Address: 0x3adf14, Func Offset: 0xc4
	// Line 157, Address: 0x3adf44, Func Offset: 0xf4
	// Line 161, Address: 0x3adf58, Func Offset: 0x108
	// Line 157, Address: 0x3adf5c, Func Offset: 0x10c
	// Line 161, Address: 0x3adf60, Func Offset: 0x110
	// Line 162, Address: 0x3adfa4, Func Offset: 0x154
	// Line 164, Address: 0x3adfdc, Func Offset: 0x18c
	// Line 165, Address: 0x3adfe0, Func Offset: 0x190
	// Line 162, Address: 0x3adfe4, Func Offset: 0x194
	// Line 164, Address: 0x3adfe8, Func Offset: 0x198
	// Line 165, Address: 0x3adfec, Func Offset: 0x19c
	// Line 162, Address: 0x3adff0, Func Offset: 0x1a0
	// Line 164, Address: 0x3adff4, Func Offset: 0x1a4
	// Line 165, Address: 0x3ae008, Func Offset: 0x1b8
	// Line 164, Address: 0x3ae010, Func Offset: 0x1c0
	// Line 165, Address: 0x3ae014, Func Offset: 0x1c4
	// Func End, Address: 0x3ae01c, Func Offset: 0x1cc
}

