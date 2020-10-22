typedef struct xVolumeAsset;
typedef struct xBase;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xSerial;
typedef struct xLinkAsset;
typedef struct xVolume;
typedef struct xVec3;
typedef struct xBaseAsset;
typedef struct xBound;
typedef struct xMat4x3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xMat3x3;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_1[3];
typedef float32 type_2[4];

struct xVolumeAsset : xBaseAsset
{
	uint32 flags;
	xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xSerial
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;

	xBound* GetBound();
	void Load(xSerial* s);
	void Save(xSerial* s);
	void Reset();
	void Init(xVolumeAsset* asset);
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};


xBound* GetBound();
void Load(xSerial* s);
void Save(xSerial* s);
void Reset();
void Init(xVolumeAsset* asset);

// GetBound__7xVolumeFv
// Start address: 0x2fe2f0
xBound* xVolume::GetBound()
{
	// Line 84, Address: 0x2fe2f0, Func Offset: 0
	// Line 85, Address: 0x2fe2f4, Func Offset: 0x4
	// Func End, Address: 0x2fe2fc, Func Offset: 0xc
}

// Load__7xVolumeFP7xSerial
// Start address: 0x2fe300
void xVolume::Load(xSerial* s)
{
	// Line 73, Address: 0x2fe300, Func Offset: 0
	// Func End, Address: 0x2fe308, Func Offset: 0x8
}

// Save__7xVolumeFP7xSerial
// Start address: 0x2fe310
void xVolume::Save(xSerial* s)
{
	// Line 55, Address: 0x2fe310, Func Offset: 0
	// Func End, Address: 0x2fe318, Func Offset: 0x8
}

// Reset__7xVolumeFv
// Start address: 0x2fe320
void xVolume::Reset()
{
	// Line 40, Address: 0x2fe320, Func Offset: 0
	// Func End, Address: 0x2fe328, Func Offset: 0x8
}

// Init__7xVolumeFP12xVolumeAsset
// Start address: 0x2fe330
void xVolume::Init(xVolumeAsset* asset)
{
	// Line 22, Address: 0x2fe330, Func Offset: 0
	// Line 24, Address: 0x2fe344, Func Offset: 0x14
	// Line 27, Address: 0x2fe34c, Func Offset: 0x1c
	// Line 29, Address: 0x2fe350, Func Offset: 0x20
	// Line 30, Address: 0x2fe35c, Func Offset: 0x2c
	// Line 32, Address: 0x2fe370, Func Offset: 0x40
	// Line 33, Address: 0x2fe378, Func Offset: 0x48
	// Func End, Address: 0x2fe38c, Func Offset: 0x5c
}

