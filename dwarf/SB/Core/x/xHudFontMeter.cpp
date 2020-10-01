typedef struct xBase;
typedef struct xDynAsset;
typedef struct xfont;
typedef struct widget;
typedef struct _anon0;
typedef struct asset;
typedef struct font_meter_asset;
typedef enum _enum;
typedef struct xLinkAsset;
typedef struct font_meter_widget;
typedef struct color32u;
typedef struct motive_node;
typedef struct xVec3;
typedef struct font_context;
typedef struct render_context;
typedef struct xVec2;
typedef struct meter_asset;
typedef struct xBaseAsset;
typedef struct basic_rect;
typedef struct _anon1;
typedef struct _class_0;
typedef struct _anon2;
typedef struct motive;
typedef struct meter_widget;
typedef struct sound_queue;
typedef struct _class_1;
typedef struct iColor_tag;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint8(*type_5)(widget&, motive&, float32);

typedef int8 type_1[16];
typedef int8* type_2[3];
typedef int8 type_3[12];
typedef uint32 type_4[5];
typedef float32 type_6[4];
typedef int8 type_7[16];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
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

struct _anon0
{
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct font_meter_asset : meter_asset
{
	font_context font;
	uint8 counter_mode;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_6 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	int32 precision;
	xVec2 offset;
	type_3 buffer;
	int32 last_value;
	xfont xf;
};

struct color32u
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct font_context
{
	uint32 id;
	int32 justify;
	float32 w;
	float32 h;
	float32 space;
	float32 drop_x;
	float32 drop_y;
	color32u c;
	color32u drop_c;
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

struct xVec2
{
	float32 x;
	float32 y;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _anon1
{
};

struct _class_0
{
	uint32 start_increment;
	uint32 increment;
	uint32 start_decrement;
	uint32 decrement;
};

struct _anon2
{
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	type_5 fp_update;
	void* context;
	uint8 inverse;
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

struct sound_queue
{
	type_4 _playing;
	int32 head;
	int32 tail;
};

struct _class_1
{
	uint8 visible;
	uint8 enabled;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_7 buffer;
type_1 buffer;
_anon2 __vt__Q24xhud17font_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(font_meter_widget* this);
void update(font_meter_widget* this, float32 dt);
uint8 is(font_meter_widget* this, uint32 id);
uint32 type();
void destroy(font_meter_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17font_meter_widgetFv
// Start address: 0x2996c0
void render(font_meter_widget* this)
{
	float32 x;
	float32 y;
}

// update__Q24xhud17font_meter_widgetFf
// Start address: 0x2997d0
void update(font_meter_widget* this, float32 dt)
{
	float32 a;
	int32 new_value;
	font_meter_asset& fma;
	basic_rect bounds;
	type_2 format_text;
}

// is__Q24xhud17font_meter_widgetCFUi
// Start address: 0x299a70
uint8 is(font_meter_widget* this, uint32 id)
{
	uint32 myid;
	int8 @3845;
}

// type__Q24xhud17font_meter_widgetCFv
// Start address: 0x299ae0
uint32 type()
{
}

// destroy__Q24xhud17font_meter_widgetFv
// Start address: 0x299b20
void destroy(font_meter_widget* this)
{
}

// load__Q24xhud17font_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x299b30
void load(xBase& data, xDynAsset& asset)
{
}

