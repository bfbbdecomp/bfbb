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

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef u8(*type_5)(widget&, motive&, f32);

typedef s8 type_1[16];
typedef s8* type_2[3];
typedef s8 type_3[12];
typedef u32 type_4[5];
typedef f32 type_6[4];
typedef s8 type_7[16];

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct xfont
{
	u32 id;
	f32 width;
	f32 height;
	f32 space;
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
	u8 counter_mode;
	u8 pad1;
	u8 pad2;
	u8 pad3;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_6 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	s32 precision;
	xVec2 offset;
	type_3 buffer;
	s32 last_value;
	xfont xf;
};

struct color32u
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct font_context
{
	u32 id;
	s32 justify;
	f32 w;
	f32 h;
	f32 space;
	f32 drop_x;
	f32 drop_y;
	color32u c;
	color32u drop_c;
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

struct xVec2
{
	f32 x;
	f32 y;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct _anon1
{
};

struct _class_0
{
	u32 start_increment;
	u32 increment;
	u32 start_decrement;
	u32 decrement;
};

struct _anon2
{
};

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_5 fp_update;
	void* context;
	u8 inverse;
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

struct sound_queue
{
	type_4 _playing;
	s32 head;
	s32 tail;
};

struct _class_1
{
	u8 visible;
	u8 enabled;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_7 buffer;
type_1 buffer;
_anon2 __vt__Q24xhud17font_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(font_meter_widget* this);
void update(font_meter_widget* this, f32 dt);
u8 is(font_meter_widget* this, u32 id);
u32 type();
void destroy(font_meter_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17font_meter_widgetFv
// Start address: 0x2996c0
void render(font_meter_widget* this)
{
	f32 x;
	f32 y;
}

// update__Q24xhud17font_meter_widgetFf
// Start address: 0x2997d0
void update(font_meter_widget* this, f32 dt)
{
	f32 a;
	s32 new_value;
	font_meter_asset& fma;
	basic_rect bounds;
	type_2 format_text;
}

// is__Q24xhud17font_meter_widgetCFUi
// Start address: 0x299a70
u8 is(font_meter_widget* this, u32 id)
{
	u32 myid;
	s8 @3845;
}

// type__Q24xhud17font_meter_widgetCFv
// Start address: 0x299ae0
u32 type()
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

