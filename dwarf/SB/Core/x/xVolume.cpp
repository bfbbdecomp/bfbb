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
	type_0 eventFunc;
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
	type_2 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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
	type_1 pad;
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


xBound* GetBound(xVolume* this);
void Load(xVolume* this, xSerial* s);
void Save(xVolume* this, xSerial* s);
void Reset(xVolume* this);
void Init(xVolume* this, xVolumeAsset* asset);

// GetBound__7xVolumeFv
// Start address: 0x2fe2f0
xBound* GetBound(xVolume* this)
{
}

// Load__7xVolumeFP7xSerial
// Start address: 0x2fe300
void Load(xVolume* this, xSerial* s)
{
}

// Save__7xVolumeFP7xSerial
// Start address: 0x2fe310
void Save(xVolume* this, xSerial* s)
{
}

// Reset__7xVolumeFv
// Start address: 0x2fe320
void Reset(xVolume* this)
{
}

// Init__7xVolumeFP12xVolumeAsset
// Start address: 0x2fe330
void Init(xVolume* this, xVolumeAsset* asset)
{
}

