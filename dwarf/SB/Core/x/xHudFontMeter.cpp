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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	int32 precision;
	xVec2 offset;
	int8 buffer[12];
	int32 last_value;
	xfont xf;

	void render();
	void update(float32 dt);
	uint8 is(uint32 id);
	void destroy();
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
	uint8(*fp_update)(widget&, motive&, float32);
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
	uint32 _playing[5];
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
int8 buffer[16];
int8 buffer[16];
_anon2 __vt__Q24xhud17font_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render();
void update(float32 dt);
uint8 is(uint32 id);
uint32 type();
void destroy();
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17font_meter_widgetFv
// Start address: 0x2996c0
void font_meter_widget::render()
{
	float32 x;
	float32 y;
	// Line 81, Address: 0x2996c0, Func Offset: 0
	// Line 82, Address: 0x2996e0, Func Offset: 0x20
	// Line 83, Address: 0x2996e4, Func Offset: 0x24
	// Line 82, Address: 0x2996e8, Func Offset: 0x28
	// Line 83, Address: 0x2996f8, Func Offset: 0x38
	// Line 85, Address: 0x299700, Func Offset: 0x40
	// Line 86, Address: 0x299704, Func Offset: 0x44
	// Line 85, Address: 0x299708, Func Offset: 0x48
	// Line 86, Address: 0x299724, Func Offset: 0x64
	// Line 87, Address: 0x299754, Func Offset: 0x94
	// Line 88, Address: 0x299758, Func Offset: 0x98
	// Line 90, Address: 0x299764, Func Offset: 0xa4
	// Line 91, Address: 0x299768, Func Offset: 0xa8
	// Line 90, Address: 0x29976c, Func Offset: 0xac
	// Line 91, Address: 0x299784, Func Offset: 0xc4
	// Line 96, Address: 0x2997a8, Func Offset: 0xe8
	// Func End, Address: 0x2997c8, Func Offset: 0x108
}

// update__Q24xhud17font_meter_widgetFf
// Start address: 0x2997d0
void font_meter_widget::update(float32 dt)
{
	float32 a;
	int32 new_value;
	font_meter_asset& fma;
	basic_rect bounds;
	int8* format_text[3];
	// Line 51, Address: 0x2997d0, Func Offset: 0
	// Line 52, Address: 0x2997dc, Func Offset: 0xc
	// Line 53, Address: 0x2997e4, Func Offset: 0x14
	// Line 54, Address: 0x2997ec, Func Offset: 0x1c
	// Line 55, Address: 0x2997f4, Func Offset: 0x24
	// Line 56, Address: 0x299800, Func Offset: 0x30
	// Line 57, Address: 0x29980c, Func Offset: 0x3c
	// Line 58, Address: 0x299848, Func Offset: 0x78
	// Line 57, Address: 0x29984c, Func Offset: 0x7c
	// Line 58, Address: 0x299854, Func Offset: 0x84
	// Line 59, Address: 0x2998cc, Func Offset: 0xfc
	// Line 60, Address: 0x299908, Func Offset: 0x138
	// Line 59, Address: 0x29990c, Func Offset: 0x13c
	// Line 60, Address: 0x299914, Func Offset: 0x144
	// Line 62, Address: 0x29998c, Func Offset: 0x1bc
	// Line 63, Address: 0x299998, Func Offset: 0x1c8
	// Line 62, Address: 0x29999c, Func Offset: 0x1cc
	// Line 63, Address: 0x2999ac, Func Offset: 0x1dc
	// Line 65, Address: 0x2999b4, Func Offset: 0x1e4
	// Line 66, Address: 0x2999b8, Func Offset: 0x1e8
	// Line 73, Address: 0x2999bc, Func Offset: 0x1ec
	// Line 74, Address: 0x299a04, Func Offset: 0x234
	// Line 75, Address: 0x299a3c, Func Offset: 0x26c
	// Line 76, Address: 0x299a48, Func Offset: 0x278
	// Line 77, Address: 0x299a54, Func Offset: 0x284
	// Line 78, Address: 0x299a58, Func Offset: 0x288
	// Func End, Address: 0x299a68, Func Offset: 0x298
}

// is__Q24xhud17font_meter_widgetCFUi
// Start address: 0x299a70
uint8 font_meter_widget::is(uint32 id)
{
	uint32 myid;
	int8 @3845;
	// Line 46, Address: 0x299a70, Func Offset: 0
	// Line 47, Address: 0x299a84, Func Offset: 0x14
	// Line 48, Address: 0x299ac8, Func Offset: 0x58
	// Func End, Address: 0x299adc, Func Offset: 0x6c
}

// type__Q24xhud17font_meter_widgetCFv
// Start address: 0x299ae0
uint32 type()
{
	// Line 40, Address: 0x299ae0, Func Offset: 0
	// Line 41, Address: 0x299ae8, Func Offset: 0x8
	// Line 43, Address: 0x299b08, Func Offset: 0x28
	// Line 42, Address: 0x299b0c, Func Offset: 0x2c
	// Line 43, Address: 0x299b10, Func Offset: 0x30
	// Func End, Address: 0x299b18, Func Offset: 0x38
}

// destroy__Q24xhud17font_meter_widgetFv
// Start address: 0x299b20
void font_meter_widget::destroy()
{
	// Line 36, Address: 0x299b20, Func Offset: 0
	// Func End, Address: 0x299b28, Func Offset: 0x8
}

// load__Q24xhud17font_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x299b30
void load(xBase& data, xDynAsset& asset)
{
	// Line 9, Address: 0x299b30, Func Offset: 0
	// Line 11, Address: 0x299b34, Func Offset: 0x4
	// Line 9, Address: 0x299b38, Func Offset: 0x8
	// Line 11, Address: 0x299b48, Func Offset: 0x18
	// Line 13, Address: 0x299b50, Func Offset: 0x20
	// Line 14, Address: 0x299c88, Func Offset: 0x158
	// Func End, Address: 0x299c9c, Func Offset: 0x16c
}

