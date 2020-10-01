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
typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_2)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef uint8(*type_4)(widget&, motive&, float32);
typedef void(*type_7)(jot&, xtextbox&, float32, float32);

typedef int8* type_3[16];
typedef float32 type_5[4];
typedef int8 type_6[16];
typedef int8 type_8[128];
typedef int8 type_9[16];

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct _class_0
{
	float32 left;
	float32 top;
	float32 right;
	float32 bottom;
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
	uint32 len;
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
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
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

struct text_widget : widget
{
	type_8 text;
	xtextbox tb;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

union _class_1
{
	uint8 active;
	uint8 dirty;
	uint8 show_backdrop;
	uint8 visible;
	uint8 hack_invisible;
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct substr
{
	int8* text;
	uint32 size;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _class_2
{
	uint32 type;
	color_type color;
	uint32 texture;
};

struct asset_type : xDynAsset
{
	uint32 text;
	basic_rect bounds;
	uint32 font;
	_class_4 size;
	_class_6 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float32 max_height;
	_class_2 backdrop;
};

struct _class_3
{
	union
	{
		uint8 invisible;
		uint8 ethereal;
		uint8 merge;
		uint8 word_break;
		uint8 word_end;
		uint8 line_break;
		uint8 stop;
		uint8 tab;
	};
	union
	{
		uint8 insert;
		uint8 dynamic;
		uint8 page_break;
		uint8 stateful;
	};
	uint16 dummy;
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	type_4 fp_update;
	void* context;
	uint8 inverse;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_5 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct color_type
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct text_asset : asset
{
	uint32 text_box;
	uint32 text;
};

struct jot
{
	substr s;
	_class_3 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct _class_4
{
	float32 width;
	float32 height;
};

struct _class_5
{
	uint8 visible;
	uint8 enabled;
};

struct _class_6
{
	float32 x;
	float32 y;
};

struct _anon0
{
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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
void update(text_widget* this, float32 dt);
uint8 is(text_widget* this, uint32 id);
uint32 type();
void destroy(text_widget* this);
void setup(text_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud11text_widgetFv
// Start address: 0x3d5490
void render(text_widget* this)
{
	float32 x;
	float32 y;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 floatA;
	uint8 newA;
}

// update__Q24xhud11text_widgetFf
// Start address: 0x3d5660
void update(text_widget* this, float32 dt)
{
}

// is__Q24xhud11text_widgetCFUi
// Start address: 0x3d5840
uint8 is(text_widget* this, uint32 id)
{
	uint32 myid;
	int8 @3835;
}

// type__Q24xhud11text_widgetCFv
// Start address: 0x3d58b0
uint32 type()
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
	int8* s;
	uint32 len;
}

// load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3d5c70
void load(xBase& data, xDynAsset& asset)
{
}

