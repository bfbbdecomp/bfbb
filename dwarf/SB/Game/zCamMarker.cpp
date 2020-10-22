typedef struct xCamAsset;
typedef struct zCamMarker;
typedef struct xSerial;
typedef struct _tagxCamFollowAsset;
typedef struct xBase;
typedef struct xVec3;
typedef struct _tagxCamShoulderAsset;
typedef struct xLinkAsset;
typedef struct xBaseAsset;
typedef struct _tagp2CamStaticAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum _tagTransType;
typedef struct _tagxCamPathAsset;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef uint32 type_2[2];
typedef uint8 type_3[3];

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	int16 offset_start_frames;
	int16 offset_end_frames;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	uint32 flags;
	float32 fade_up;
	float32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	uint32 valid_flags;
	uint32 markerid[2];
	uint8 cam_type;
	uint8 pad[3];
};

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

struct xSerial
{
};

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

int32(*zCamMarkerEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zCamMarkerEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

// zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x310910
int32 zCamMarkerEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	// Line 47, Address: 0x310910, Func Offset: 0
	// Line 51, Address: 0x310914, Func Offset: 0x4
	// Line 59, Address: 0x310948, Func Offset: 0x38
	// Line 60, Address: 0x310954, Func Offset: 0x44
	// Line 62, Address: 0x31095c, Func Offset: 0x4c
	// Line 63, Address: 0x310960, Func Offset: 0x50
	// Line 64, Address: 0x310968, Func Offset: 0x58
	// Line 67, Address: 0x310970, Func Offset: 0x60
	// Line 72, Address: 0x310978, Func Offset: 0x68
	// Line 71, Address: 0x31097c, Func Offset: 0x6c
	// Line 72, Address: 0x310980, Func Offset: 0x70
	// Func End, Address: 0x310988, Func Offset: 0x78
}

// zCamMarkerLoad__FP10zCamMarkerP7xSerial
// Start address: 0x310990
void zCamMarkerLoad(zCamMarker* m, xSerial* s)
{
	// Line 38, Address: 0x310990, Func Offset: 0
	// Func End, Address: 0x310998, Func Offset: 0x8
}

// zCamMarkerSave__FP10zCamMarkerP7xSerial
// Start address: 0x3109a0
void zCamMarkerSave(zCamMarker* m, xSerial* s)
{
	// Line 29, Address: 0x3109a0, Func Offset: 0
	// Func End, Address: 0x3109a8, Func Offset: 0x8
}

// zCamMarkerInit__FP5xBaseP9xCamAsset
// Start address: 0x3109b0
void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
	// Line 10, Address: 0x3109b0, Func Offset: 0
	// Line 12, Address: 0x3109c4, Func Offset: 0x14
	// Line 17, Address: 0x3109cc, Func Offset: 0x1c
	// Line 18, Address: 0x3109d8, Func Offset: 0x28
	// Line 21, Address: 0x3109e0, Func Offset: 0x30
	// Line 23, Address: 0x3109ec, Func Offset: 0x3c
	// Line 24, Address: 0x3109f0, Func Offset: 0x40
	// Func End, Address: 0x310a04, Func Offset: 0x54
}

