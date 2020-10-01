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

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_4)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];
typedef u32 type_2[2];
typedef u8 type_3[3];

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	s16 offset_start_frames;
	s16 offset_end_frames;
	f32 fov;
	f32 trans_time;
	_tagTransType trans_type;
	u32 flags;
	f32 fade_up;
	f32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	u32 valid_flags;
	type_2 markerid;
	u8 cam_type;
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
	f32 rotation;
	f32 distance;
	f32 height;
	f32 rubber_band;
	f32 start_speed;
	f32 end_speed;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct _tagxCamShoulderAsset
{
	f32 distance;
	f32 height;
	f32 realign_speed;
	f32 realign_delay;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_0 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _tagp2CamStaticAsset
{
	u32 unused;
};

struct _tagp2CamStaticFollowAsset
{
	f32 rubber_band;
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
	u32 assetID;
	f32 time_end;
	f32 time_delay;
};

type_4 zCamMarkerEventCB;

s32 zCamMarkerEventCB(xBase* to, u32 toEvent, f32* toParam);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

// zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x310910
s32 zCamMarkerEventCB(xBase* to, u32 toEvent, f32* toParam)
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

