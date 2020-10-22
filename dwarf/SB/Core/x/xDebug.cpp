typedef struct _class;
typedef struct xSB;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xfont;
typedef struct basic_rect;
typedef struct iColor_tag;
typedef struct substr;

typedef void(*type_0)(jot&, xtextbox&, float32, float32);
typedef void(*type_1)(jot&, xtextbox&, xtextbox&);
typedef void(*type_4)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef int8 type_2[16];
typedef int8 type_3[16];
typedef int8 type_5[32];
typedef int8 type_6[32][35];
typedef uint32 type_7[4096];

struct _class
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
};

struct xSB
{
	int8* buf;
	uint32 max;
	int8* cur;
	int8* disp;
};

struct jot
{
	substr s;
	_class flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

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

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct substr
{
	int8* text;
	uint32 size;
};

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
int8 xStatsFieldName[32][35];
uint32 gFrameCount;
callback text_cb;
iColor_tag g_WHITE;
uint32 ourGlobals[4096];

void xDebugTimestampScreen();
void xDebugExit();
void xDebugUpdate();
void xDebugInit();
int32 xDebugModeAdd();
void xprintf();

// xDebugTimestampScreen__Fv
// Start address: 0x1d0bb0
void xDebugTimestampScreen()
{
	// Line 2065, Address: 0x1d0bb0, Func Offset: 0
	// Func End, Address: 0x1d0bb8, Func Offset: 0x8
}

// xDebugExit__Fv
// Start address: 0x1d0bc0
void xDebugExit()
{
	// Line 1992, Address: 0x1d0bc0, Func Offset: 0
	// Func End, Address: 0x1d0bc8, Func Offset: 0x8
}

// xDebugUpdate__Fv
// Start address: 0x1d0bd0
void xDebugUpdate()
{
	// Line 1988, Address: 0x1d0bd0, Func Offset: 0
	// Func End, Address: 0x1d0bd8, Func Offset: 0x8
}

// xDebugInit__Fv
// Start address: 0x1d0be0
void xDebugInit()
{
	// Line 1920, Address: 0x1d0be0, Func Offset: 0
	// Func End, Address: 0x1d0be8, Func Offset: 0x8
}

// xDebugModeAdd__FPCcPFv_v
// Start address: 0x1d0bf0
int32 xDebugModeAdd()
{
	// Line 830, Address: 0x1d0bf0, Func Offset: 0
	// Func End, Address: 0x1d0bf8, Func Offset: 0x8
}

// xprintf__FPCce
// Start address: 0x1d0c00
void xprintf()
{
	// Line 634, Address: 0x1d0c00, Func Offset: 0
	// Line 662, Address: 0x1d0c20, Func Offset: 0x20
	// Func End, Address: 0x1d0c28, Func Offset: 0x28
}

