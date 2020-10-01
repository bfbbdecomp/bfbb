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

typedef u8(*type_1)(widget&, motive&, f32);
typedef s32(*type_5)(xBase*, xBase*, u32, f32*, xBase*);

typedef u32 type_0[5];
typedef f32 type_2[4];
typedef s8 type_3[16];
typedef s8 type_4[16];

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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	f32 r;
	f32 g;
	f32 b;
	f32 a;
};

struct meter_asset : asset
{
	f32 start_value;
	f32 min_value;
	f32 max_value;
	f32 increment_time;
	f32 decrement_time;
	_class_0 sound;
};

struct meter_widget : widget
{
	meter_asset& res;
	f32 value;
	f32 min_value;
	f32 max_value;
	f32 end_value;
	f32 value_vel;
	f32 value_accel;
	f32 ping_delay;
	f32 pitch;
	sound_queue pings;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct _class_0
{
	u32 start_increment;
	u32 increment;
	u32 start_decrement;
	u32 decrement;
};

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_1 fp_update;
	void* context;
	u8 inverse;
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

struct _anon0
{
};

struct _class_1
{
	u8 visible;
	u8 enabled;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
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
	type_0 _playing;
	s32 head;
	s32 tail;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_3 buffer;
type_4 buffer;
_anon0 __vt__Q24xhud12meter_widget;
_anon1 __vt__Q24xhud6widget;

void updater(meter_widget* this, f32 dt);
u8 is(meter_widget* this, u32 id);
u32 type();
void destruct(meter_widget* this);
void* __ct(meter_widget* this, meter_asset& a);
void set_value_immediate(meter_widget* this, f32 v);
void set_value(meter_widget* this, f32 v);

// updater__Q24xhud12meter_widgetFf
// Start address: 0x299cb0
void updater(meter_widget* this, f32 dt)
{
	f32 old_value;
	f32 pitch;
	f32 min_ping_time;
	f32 pitch;
	f32 min_ping_time;
}

// is__Q24xhud12meter_widgetCFUi
// Start address: 0x29a050
u8 is(meter_widget* this, u32 id)
{
	u32 myid;
	s8 @3750;
}

// type__Q24xhud12meter_widgetCFv
// Start address: 0x29a0c0
u32 type()
{
}

// destruct__Q24xhud12meter_widgetFv
// Start address: 0x29a100
void destruct(meter_widget* this)
{
}

// __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset
// Start address: 0x29a110
void* __ct(meter_widget* this, meter_asset& a)
{
}

// set_value_immediate__Q24xhud12meter_widgetFf
// Start address: 0x29a190
void set_value_immediate(meter_widget* this, f32 v)
{
}

// set_value__Q24xhud12meter_widgetFf
// Start address: 0x29a1a0
void set_value(meter_widget* this, f32 v)
{
	f32 dvalue;
	f32 sign;
}

