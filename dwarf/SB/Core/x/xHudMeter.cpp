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
	type_5 eventFunc;
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
	type_1 fp_update;
	void* context;
	uint8 inverse;
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
	type_0 _playing;
	int32 head;
	int32 tail;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_3 buffer;
type_4 buffer;
_anon0 __vt__Q24xhud12meter_widget;
_anon1 __vt__Q24xhud6widget;

void updater(meter_widget* this, float32 dt);
uint8 is(meter_widget* this, uint32 id);
uint32 type();
void destruct(meter_widget* this);
void* __ct(meter_widget* this, meter_asset& a);
void set_value_immediate(meter_widget* this, float32 v);
void set_value(meter_widget* this, float32 v);

// updater__Q24xhud12meter_widgetFf
// Start address: 0x299cb0
void updater(meter_widget* this, float32 dt)
{
	float32 old_value;
	float32 pitch;
	float32 min_ping_time;
	float32 pitch;
	float32 min_ping_time;
}

// is__Q24xhud12meter_widgetCFUi
// Start address: 0x29a050
uint8 is(meter_widget* this, uint32 id)
{
	uint32 myid;
	int8 @3750;
}

// type__Q24xhud12meter_widgetCFv
// Start address: 0x29a0c0
uint32 type()
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
void set_value_immediate(meter_widget* this, float32 v)
{
}

// set_value__Q24xhud12meter_widgetFf
// Start address: 0x29a1a0
void set_value(meter_widget* this, float32 v)
{
	float32 dvalue;
	float32 sign;
}

