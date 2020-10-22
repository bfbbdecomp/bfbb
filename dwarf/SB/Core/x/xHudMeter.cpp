typedef struct motive_node;
typedef struct widget;
typedef struct xBase;
typedef struct xBaseAsset;
typedef struct render_context;
typedef struct meter_asset;
typedef struct meter_widget;
typedef struct basic_rect;
typedef struct asset;
typedef struct xVec3;
typedef struct _class_0;
typedef struct motive;
typedef struct xLinkAsset;
typedef struct _anon0;
typedef struct _class_1;
typedef struct xDynAsset;
typedef struct _anon1;
typedef enum _enum;
typedef struct sound_queue;

typedef uint8(*type_1)(widget&, motive&, float32);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint32 type_0[5];
typedef float32 type_2[4];
typedef int8 type_3[16];
typedef int8 type_4[16];

struct motive_node
{
	motive m;
	motive_node* next;
};

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct meter_asset : asset
{
	float32 start_value;
	float32 min_value;
	float32 max_value;
	float32 increment_time;
	float32 decrement_time;
	_class_0 sound;
};

struct meter_widget : widget
{
	meter_asset& res;
	float32 value;
	float32 min_value;
	float32 max_value;
	float32 end_value;
	float32 value_vel;
	float32 value_accel;
	float32 ping_delay;
	float32 pitch;
	sound_queue pings;

	void update(float32 dt);
	void updater(float32 dt);
	uint8 is(uint32 id);
	void destruct();
	void* __ct(meter_asset& a);
	void set_value_immediate(float32 v);
	void set_value(float32 v);
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _class_0
{
	uint32 start_increment;
	uint32 increment;
	uint32 start_decrement;
	uint32 decrement;
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	uint8(*fp_update)(widget&, motive&, float32);
	void* context;
	uint8 inverse;
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

struct _anon0
{
};

struct _class_1
{
	uint8 visible;
	uint8 enabled;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct _anon1
{
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct sound_queue
{
	uint32 _playing[5];
	int32 head;
	int32 tail;
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
_anon0 __vt__Q24xhud12meter_widget;
_anon1 __vt__Q24xhud6widget;

void updater(float32 dt);
uint8 is(uint32 id);
uint32 type();
void destruct();
void* __ct(meter_asset& a);
void set_value_immediate(float32 v);
void set_value(float32 v);

// updater__Q24xhud12meter_widgetFf
// Start address: 0x299cb0
void meter_widget::updater(float32 dt)
{
	float32 old_value;
	float32 pitch;
	float32 min_ping_time;
	float32 pitch;
	float32 min_ping_time;
	// Line 117, Address: 0x299cb0, Func Offset: 0
	// Line 118, Address: 0x299cd0, Func Offset: 0x20
	// Line 120, Address: 0x299cd8, Func Offset: 0x28
	// Line 123, Address: 0x299cdc, Func Offset: 0x2c
	// Line 120, Address: 0x299ce0, Func Offset: 0x30
	// Line 121, Address: 0x299ce8, Func Offset: 0x38
	// Line 123, Address: 0x299cf8, Func Offset: 0x48
	// Line 126, Address: 0x299d04, Func Offset: 0x54
	// Line 125, Address: 0x299d10, Func Offset: 0x60
	// Line 129, Address: 0x299d14, Func Offset: 0x64
	// Line 126, Address: 0x299d18, Func Offset: 0x68
	// Line 127, Address: 0x299d30, Func Offset: 0x80
	// Line 129, Address: 0x299d44, Func Offset: 0x94
	// Line 131, Address: 0x299d5c, Func Offset: 0xac
	// Line 133, Address: 0x299d6c, Func Offset: 0xbc
	// Line 134, Address: 0x299d70, Func Offset: 0xc0
	// Line 135, Address: 0x299d74, Func Offset: 0xc4
	// Line 136, Address: 0x299d78, Func Offset: 0xc8
	// Line 138, Address: 0x299d80, Func Offset: 0xd0
	// Line 136, Address: 0x299d84, Func Offset: 0xd4
	// Line 138, Address: 0x299d88, Func Offset: 0xd8
	// Line 139, Address: 0x299d9c, Func Offset: 0xec
	// Line 138, Address: 0x299da4, Func Offset: 0xf4
	// Line 139, Address: 0x299da8, Func Offset: 0xf8
	// Line 142, Address: 0x299dbc, Func Offset: 0x10c
	// Line 140, Address: 0x299dc0, Func Offset: 0x110
	// Line 142, Address: 0x299dcc, Func Offset: 0x11c
	// Line 145, Address: 0x299e08, Func Offset: 0x158
	// Line 146, Address: 0x299e0c, Func Offset: 0x15c
	// Line 145, Address: 0x299e14, Func Offset: 0x164
	// Line 146, Address: 0x299e18, Func Offset: 0x168
	// Line 148, Address: 0x299ebc, Func Offset: 0x20c
	// Line 151, Address: 0x299ecc, Func Offset: 0x21c
	// Line 153, Address: 0x299edc, Func Offset: 0x22c
	// Line 154, Address: 0x299ee0, Func Offset: 0x230
	// Line 155, Address: 0x299ee4, Func Offset: 0x234
	// Line 156, Address: 0x299ee8, Func Offset: 0x238
	// Line 158, Address: 0x299ef0, Func Offset: 0x240
	// Line 156, Address: 0x299ef4, Func Offset: 0x244
	// Line 158, Address: 0x299ef8, Func Offset: 0x248
	// Line 159, Address: 0x299f0c, Func Offset: 0x25c
	// Line 158, Address: 0x299f14, Func Offset: 0x264
	// Line 159, Address: 0x299f18, Func Offset: 0x268
	// Line 162, Address: 0x299f2c, Func Offset: 0x27c
	// Line 160, Address: 0x299f30, Func Offset: 0x280
	// Line 162, Address: 0x299f3c, Func Offset: 0x28c
	// Line 165, Address: 0x299f78, Func Offset: 0x2c8
	// Line 166, Address: 0x299f7c, Func Offset: 0x2cc
	// Line 165, Address: 0x299f84, Func Offset: 0x2d4
	// Line 166, Address: 0x299f88, Func Offset: 0x2d8
	// Line 170, Address: 0x29a030, Func Offset: 0x380
	// Func End, Address: 0x29a050, Func Offset: 0x3a0
}

// is__Q24xhud12meter_widgetCFUi
// Start address: 0x29a050
uint8 meter_widget::is(uint32 id)
{
	uint32 myid;
	int8 @3750;
	// Line 112, Address: 0x29a050, Func Offset: 0
	// Line 113, Address: 0x29a064, Func Offset: 0x14
	// Line 114, Address: 0x29a0a8, Func Offset: 0x58
	// Func End, Address: 0x29a0bc, Func Offset: 0x6c
}

// type__Q24xhud12meter_widgetCFv
// Start address: 0x29a0c0
uint32 type()
{
	// Line 106, Address: 0x29a0c0, Func Offset: 0
	// Line 107, Address: 0x29a0c8, Func Offset: 0x8
	// Line 109, Address: 0x29a0e8, Func Offset: 0x28
	// Line 108, Address: 0x29a0ec, Func Offset: 0x2c
	// Line 109, Address: 0x29a0f0, Func Offset: 0x30
	// Func End, Address: 0x29a0f8, Func Offset: 0x38
}

// destruct__Q24xhud12meter_widgetFv
// Start address: 0x29a100
void meter_widget::destruct()
{
	// Line 103, Address: 0x29a100, Func Offset: 0
	// Func End, Address: 0x29a108, Func Offset: 0x8
}

// __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset
// Start address: 0x29a110
void* meter_widget::__ct(meter_asset& a)
{
	// Line 96, Address: 0x29a110, Func Offset: 0
	// Line 101, Address: 0x29a140, Func Offset: 0x30
	// Line 96, Address: 0x29a144, Func Offset: 0x34
	// Line 101, Address: 0x29a174, Func Offset: 0x64
	// Func End, Address: 0x29a188, Func Offset: 0x78
}

// set_value_immediate__Q24xhud12meter_widgetFf
// Start address: 0x29a190
void meter_widget::set_value_immediate(float32 v)
{
	// Line 91, Address: 0x29a190, Func Offset: 0
	// Line 93, Address: 0x29a198, Func Offset: 0x8
	// Func End, Address: 0x29a1a0, Func Offset: 0x10
}

// set_value__Q24xhud12meter_widgetFf
// Start address: 0x29a1a0
void meter_widget::set_value(float32 v)
{
	float32 dvalue;
	float32 sign;
	// Line 54, Address: 0x29a1a0, Func Offset: 0
	// Line 58, Address: 0x29a1a4, Func Offset: 0x4
	// Line 54, Address: 0x29a1a8, Func Offset: 0x8
	// Line 58, Address: 0x29a1ac, Func Offset: 0xc
	// Line 54, Address: 0x29a1b0, Func Offset: 0x10
	// Line 58, Address: 0x29a1b4, Func Offset: 0x14
	// Line 54, Address: 0x29a1b8, Func Offset: 0x18
	// Line 55, Address: 0x29a1c8, Func Offset: 0x28
	// Line 58, Address: 0x29a1d0, Func Offset: 0x30
	// Line 60, Address: 0x29a1e4, Func Offset: 0x44
	// Line 61, Address: 0x29a1ec, Func Offset: 0x4c
	// Line 62, Address: 0x29a210, Func Offset: 0x70
	// Line 63, Address: 0x29a230, Func Offset: 0x90
	// Line 64, Address: 0x29a240, Func Offset: 0xa0
	// Line 65, Address: 0x29a248, Func Offset: 0xa8
	// Line 66, Address: 0x29a250, Func Offset: 0xb0
	// Line 68, Address: 0x29a274, Func Offset: 0xd4
	// Line 69, Address: 0x29a27c, Func Offset: 0xdc
	// Line 70, Address: 0x29a2a0, Func Offset: 0x100
	// Line 71, Address: 0x29a2c0, Func Offset: 0x120
	// Line 72, Address: 0x29a2d0, Func Offset: 0x130
	// Line 73, Address: 0x29a2d8, Func Offset: 0x138
	// Line 75, Address: 0x29a2e0, Func Offset: 0x140
	// Line 77, Address: 0x29a2f0, Func Offset: 0x150
	// Line 78, Address: 0x29a2f4, Func Offset: 0x154
	// Line 79, Address: 0x29a30c, Func Offset: 0x16c
	// Line 81, Address: 0x29a31c, Func Offset: 0x17c
	// Line 79, Address: 0x29a328, Func Offset: 0x188
	// Line 81, Address: 0x29a32c, Func Offset: 0x18c
	// Line 82, Address: 0x29a354, Func Offset: 0x1b4
	// Line 81, Address: 0x29a358, Func Offset: 0x1b8
	// Line 82, Address: 0x29a35c, Func Offset: 0x1bc
	// Line 83, Address: 0x29a370, Func Offset: 0x1d0
	// Line 84, Address: 0x29a378, Func Offset: 0x1d8
	// Line 85, Address: 0x29a390, Func Offset: 0x1f0
	// Line 86, Address: 0x29a39c, Func Offset: 0x1fc
	// Line 87, Address: 0x29a3b0, Func Offset: 0x210
	// Func End, Address: 0x29a3cc, Func Offset: 0x22c
}

