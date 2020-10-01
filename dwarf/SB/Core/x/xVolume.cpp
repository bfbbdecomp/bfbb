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

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);

typedef u8 type_1[3];
typedef f32 type_2[4];

struct xVolumeAsset : xBaseAsset
{
	u32 flags;
	xBound bound;
	f32 rot;
	f32 xpivot;
	f32 zpivot;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_2 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 pad3;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
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

