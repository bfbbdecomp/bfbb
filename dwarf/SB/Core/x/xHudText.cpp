typedef struct xtextbox;
typedef struct _class_0;
typedef struct split_tag;
typedef struct xTextAsset;
typedef struct tag_type;
typedef struct callback;
typedef struct motive_node;
typedef enum _enum_0;
typedef struct widget;
typedef enum _enum_1;
typedef struct ztextbox;
typedef struct xBase;
typedef struct text_widget;
typedef struct xVec3;
typedef struct render_context;
typedef union _class_1;
typedef struct RwRaster;
typedef struct substr;
typedef struct xBaseAsset;
typedef struct xfont;
typedef struct basic_rect;
typedef struct asset;
typedef struct _class_2;
typedef struct asset_type;
typedef struct _class_3;
typedef struct motive;
typedef struct xLinkAsset;
typedef struct color_type;
typedef struct xDynAsset;
typedef struct text_asset;
typedef struct jot;
typedef struct _class_4;
typedef struct _class_5;
typedef struct _class_6;
typedef struct _anon0;
typedef struct iColor_tag;
typedef struct _anon1;
typedef enum _enum_2;

typedef void(*type_0)(jot&, xtextbox&, xtextbox&);
typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_2)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef u8(*type_4)(widget&, motive&, f32);
typedef void(*type_7)(jot&, xtextbox&, f32, f32);

typedef s8* type_3[16];
typedef f32 type_5[4];
typedef s8 type_6[16];
typedef s8 type_8[128];
typedef s8 type_9[16];

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
};

struct _class_0
{
	f32 left;
	f32 top;
	f32 right;
	f32 bottom;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct xTextAsset
{
	u32 len;
};

struct tag_type
{
	substr name;
	type_2 parse_tag;
	type_2 reset_tag;
	void* context;
};

struct callback
{
	type_7 render;
	type_0 layout_update;
	type_0 render_update;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct widget
{
	_class_5 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum_2 activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct ztextbox : xBase
{
	_class_1 flag;
	asset_type* asset;
	xtextbox tb;
	type_3 segments;
	u32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
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

struct text_widget : widget
{
	type_8 text;
	xtextbox tb;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

union _class_1
{
	u8 active;
	u8 dirty;
	u8 show_backdrop;
	u8 visible;
	u8 hack_invisible;
};

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
};

struct substr
{
	s8* text;
	u32 size;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct _class_2
{
	u32 type;
	color_type color;
	u32 texture;
};

struct asset_type : xDynAsset
{
	u32 text;
	basic_rect bounds;
	u32 font;
	_class_4 size;
	_class_6 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	f32 max_height;
	_class_2 backdrop;
};

struct _class_3
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_4 fp_update;
	void* context;
	u8 inverse;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_5 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct color_type
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct text_asset : asset
{
	u32 text_box;
	u32 text;
};

struct jot
{
	substr s;
	_class_3 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct _class_4
{
	f32 width;
	f32 height;
};

struct _class_5
{
	u8 visible;
	u8 enabled;
};

struct _class_6
{
	f32 x;
	f32 y;
};

struct _anon0
{
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct _anon1
{
};

enum _enum_2
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_6 buffer;
type_9 buffer;
_anon0 __vt__Q24xhud11text_widget;
callback text_cb;
iColor_tag g_WHITE;
_anon1 __vt__Q24xhud6widget;

void render(text_widget* this);
void update(text_widget* this, f32 dt);
u8 is(text_widget* this, u32 id);
u32 type();
void destroy(text_widget* this);
void setup(text_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud11text_widgetFv
// Start address: 0x3d5490
void render(text_widget* this)
{
	f32 x;
	f32 y;
	u8 r;
	u8 g;
	u8 b;
	u8 a;
	f32 floatA;
	u8 newA;
}

// update__Q24xhud11text_widgetFf
// Start address: 0x3d5660
void update(text_widget* this, f32 dt)
{
}

// is__Q24xhud11text_widgetCFUi
// Start address: 0x3d5840
u8 is(text_widget* this, u32 id)
{
	u32 myid;
	s8 @3835;
}

// type__Q24xhud11text_widgetCFv
// Start address: 0x3d58b0
u32 type()
{
}

// destroy__Q24xhud11text_widgetFv
// Start address: 0x3d58f0
void destroy(text_widget* this)
{
}

// setup__Q24xhud11text_widgetFv
// Start address: 0x3d5900
void setup(text_widget* this)
{
	text_asset& ta;
	ztextbox* ztb;
	xTextAsset* t;
	s8* s;
	u32 len;
}

// load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3d5c70
void load(xBase& data, xDynAsset& asset)
{
}

