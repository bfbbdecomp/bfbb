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
	type_2 markerid;
	uint8 cam_type;
	type_3 pad;
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
	type_1 eventFunc;
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
	type_0 param;
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

type_4 zCamMarkerEventCB;

int32 zCamMarkerEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

// zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x310910
int32 zCamMarkerEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
}

// zCamMarkerLoad__FP10zCamMarkerP7xSerial
// Start address: 0x310990
void zCamMarkerLoad(zCamMarker* m, xSerial* s)
{
}

// zCamMarkerSave__FP10zCamMarkerP7xSerial
// Start address: 0x3109a0
void zCamMarkerSave(zCamMarker* m, xSerial* s)
{
}

// zCamMarkerInit__FP5xBaseP9xCamAsset
// Start address: 0x3109b0
void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
}

