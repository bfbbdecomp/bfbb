typedef struct xCMcredits;
typedef struct xCMpreset;
typedef struct xCMhunk;
typedef struct xCMtexture;
typedef struct _class;
typedef struct xCMheader;
typedef struct RwTexture;
typedef struct sxy;
typedef struct xLinkAsset;
typedef struct RwRaster;
typedef struct fade;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xBase;
typedef struct RwTexDictionary;
typedef struct xfont;
typedef struct basic_rect;
typedef struct xCreditsData;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct substr;
typedef struct xColorUnpack;
typedef struct iColor_tag;
typedef struct RwLinkList;
typedef struct xCMtextbox;

typedef void(*type_2)(jot&, xtextbox&, float32, float32);
typedef void(*type_3)(jot&, xtextbox&, xtextbox&);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_6)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef xCMtextbox type_0[2];
typedef float32 type_1[4];
typedef int8* type_5[5];
typedef int8 type_7[32];
typedef int8 type_8[32];
typedef int8 type_9[16];
typedef int8 type_10[16];

struct xCMcredits
{
	uint32 credits_size;
	float32 len;
	uint32 flags;
	sxy in;
	sxy out;
	float32 scroll_rate;
	float32 lifetime;
	fade fin;
	fade fout;
	uint32 num_presets;
};

struct xCMpreset
{
	uint16 num;
	uint16 align;
	float32 delay;
	float32 innerspace;
	xCMtextbox box[2];
};

struct xCMhunk
{
	uint32 hunk_size;
	uint32 preset;
	float32 t0;
	float32 t1;
	int8* text1;
	int8* text2;
};

struct xCMtexture
{
	uint32 assetID;
	iColor_tag color;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	RwTexture* texture;
	uint32 pad;
};

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

struct xCMheader
{
	uint32 magic;
	uint32 version;
	uint32 crdID;
	uint32 state;
	float32 total_time;
	uint32 total_size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct sxy
{
	float32 x;
	float32 y;
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

struct fade
{
	float32 start;
	float32 end;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct xCreditsData
{
	uint32 dummy;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct substr
{
	int8* text;
	uint32 size;
};

struct xColorUnpack
{
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCMtextbox
{
	uint32 font;
	iColor_tag color;
	sxy char_size;
	sxy char_spacing;
	sxy box;
};

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
int8* preset_names[5];
float32 dtscale;
float32 credits_time;
xCreditsData* credits_data;
uint32 credits_parentID;
callback text_cb;

void xCMstop();
void xCMstart(xCreditsData* data, xBase* parent);
void xCMrender();
void xCMupdate(float32 dt);
uint32 xCMrender(float32 time, xCreditsData* data);
void xCMprep(xCreditsData* data);

// xCMstop__Fv
// Start address: 0x3d5cd0
void xCMstop()
{
	// Line 1213, Address: 0x3d5cd0, Func Offset: 0
	// Line 1221, Address: 0x3d5cd4, Func Offset: 0x4
	// Line 1213, Address: 0x3d5cd8, Func Offset: 0x8
	// Line 1221, Address: 0x3d5cdc, Func Offset: 0xc
	// Line 1222, Address: 0x3d5ce0, Func Offset: 0x10
	// Line 1224, Address: 0x3d5ce8, Func Offset: 0x18
	// Line 1226, Address: 0x3d5cf0, Func Offset: 0x20
	// Line 1228, Address: 0x3d5cf8, Func Offset: 0x28
	// Func End, Address: 0x3d5d04, Func Offset: 0x34
}

// xCMstart__FP12xCreditsDatafP5xBase
// Start address: 0x3d5d10
void xCMstart(xCreditsData* data, xBase* parent)
{
	// Line 1205, Address: 0x3d5d10, Func Offset: 0
	// Line 1208, Address: 0x3d5d18, Func Offset: 0x8
	// Line 1209, Address: 0x3d5d20, Func Offset: 0x10
	// Line 1210, Address: 0x3d5d28, Func Offset: 0x18
	// Func End, Address: 0x3d5d30, Func Offset: 0x20
}

// xCMrender__Fv
// Start address: 0x3d5d30
void xCMrender()
{
	// Line 1189, Address: 0x3d5d30, Func Offset: 0
	// Func End, Address: 0x3d5d3c, Func Offset: 0xc
}

// xCMupdate__Ff
// Start address: 0x3d5d40
void xCMupdate(float32 dt)
{
	// Line 1172, Address: 0x3d5d40, Func Offset: 0
	// Line 1177, Address: 0x3d5d4c, Func Offset: 0xc
	// Line 1178, Address: 0x3d5d54, Func Offset: 0x14
	// Line 1181, Address: 0x3d5d68, Func Offset: 0x28
	// Line 1182, Address: 0x3d5d7c, Func Offset: 0x3c
	// Line 1184, Address: 0x3d5d9c, Func Offset: 0x5c
	// Line 1185, Address: 0x3d5da0, Func Offset: 0x60
	// Func End, Address: 0x3d5dac, Func Offset: 0x6c
}

// xCMrender__FfP12xCreditsData
// Start address: 0x3d5db0
uint32 xCMrender(float32 time, xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	float32 a;
	xCMpreset* preset;
	float32 nx;
	float32 ny;
	float32 x0;
	float32 x1;
	float32 y0;
	float32 y1;
	float32 ca;
	xCMtexture* tex;
	basic_rect bounds;
	xtextbox tb;
	uint32 alignL;
	uint32 alignR;
	basic_rect bounds;
	xtextbox tb;
	basic_rect bounds;
	xtextbox tb;
	// Line 974, Address: 0x3d5db0, Func Offset: 0
	// Line 976, Address: 0x3d5df4, Func Offset: 0x44
	// Line 977, Address: 0x3d5e10, Func Offset: 0x60
	// Line 980, Address: 0x3d5e18, Func Offset: 0x68
	// Line 981, Address: 0x3d5e28, Func Offset: 0x78
	// Line 983, Address: 0x3d5e30, Func Offset: 0x80
	// Line 989, Address: 0x3d5e48, Func Offset: 0x98
	// Line 988, Address: 0x3d5e4c, Func Offset: 0x9c
	// Line 989, Address: 0x3d5e50, Func Offset: 0xa0
	// Line 993, Address: 0x3d5e70, Func Offset: 0xc0
	// Line 999, Address: 0x3d5e78, Func Offset: 0xc8
	// Line 1000, Address: 0x3d5e7c, Func Offset: 0xcc
	// Line 999, Address: 0x3d5e80, Func Offset: 0xd0
	// Line 1000, Address: 0x3d5e9c, Func Offset: 0xec
	// Line 1002, Address: 0x3d5eac, Func Offset: 0xfc
	// Line 1000, Address: 0x3d5eb0, Func Offset: 0x100
	// Line 1004, Address: 0x3d5eb4, Func Offset: 0x104
	// Line 1011, Address: 0x3d5ed0, Func Offset: 0x120
	// Line 1007, Address: 0x3d5ed4, Func Offset: 0x124
	// Line 1011, Address: 0x3d5ed8, Func Offset: 0x128
	// Line 1007, Address: 0x3d5ee0, Func Offset: 0x130
	// Line 1011, Address: 0x3d5ee4, Func Offset: 0x134
	// Line 1021, Address: 0x3d5ef8, Func Offset: 0x148
	// Line 1011, Address: 0x3d5efc, Func Offset: 0x14c
	// Line 1021, Address: 0x3d5f00, Func Offset: 0x150
	// Line 1026, Address: 0x3d5f04, Func Offset: 0x154
	// Line 1021, Address: 0x3d5f08, Func Offset: 0x158
	// Line 1026, Address: 0x3d5f10, Func Offset: 0x160
	// Line 1027, Address: 0x3d5f28, Func Offset: 0x178
	// Line 1028, Address: 0x3d5f38, Func Offset: 0x188
	// Line 1029, Address: 0x3d5f54, Func Offset: 0x1a4
	// Line 1030, Address: 0x3d5f74, Func Offset: 0x1c4
	// Line 1031, Address: 0x3d5f8c, Func Offset: 0x1dc
	// Line 1033, Address: 0x3d5fa8, Func Offset: 0x1f8
	// Line 1035, Address: 0x3d5fb4, Func Offset: 0x204
	// Line 1037, Address: 0x3d5fec, Func Offset: 0x23c
	// Line 1044, Address: 0x3d5ff0, Func Offset: 0x240
	// Line 1045, Address: 0x3d5ffc, Func Offset: 0x24c
	// Line 1046, Address: 0x3d6014, Func Offset: 0x264
	// Line 1048, Address: 0x3d601c, Func Offset: 0x26c
	// Line 1052, Address: 0x3d6028, Func Offset: 0x278
	// Line 1050, Address: 0x3d602c, Func Offset: 0x27c
	// Line 1053, Address: 0x3d6030, Func Offset: 0x280
	// Line 1054, Address: 0x3d6034, Func Offset: 0x284
	// Line 1051, Address: 0x3d6038, Func Offset: 0x288
	// Line 1055, Address: 0x3d603c, Func Offset: 0x28c
	// Line 1052, Address: 0x3d6040, Func Offset: 0x290
	// Line 1053, Address: 0x3d6044, Func Offset: 0x294
	// Line 1056, Address: 0x3d6048, Func Offset: 0x298
	// Line 1054, Address: 0x3d604c, Func Offset: 0x29c
	// Line 1056, Address: 0x3d6050, Func Offset: 0x2a0
	// Line 1055, Address: 0x3d6054, Func Offset: 0x2a4
	// Line 1052, Address: 0x3d6058, Func Offset: 0x2a8
	// Line 1054, Address: 0x3d605c, Func Offset: 0x2ac
	// Line 1053, Address: 0x3d6060, Func Offset: 0x2b0
	// Line 1055, Address: 0x3d6064, Func Offset: 0x2b4
	// Line 1056, Address: 0x3d6068, Func Offset: 0x2b8
	// Line 1057, Address: 0x3d608c, Func Offset: 0x2dc
	// Line 1066, Address: 0x3d60d4, Func Offset: 0x324
	// Line 1068, Address: 0x3d60dc, Func Offset: 0x32c
	// Line 1069, Address: 0x3d60e0, Func Offset: 0x330
	// Line 1082, Address: 0x3d60e8, Func Offset: 0x338
	// Line 1069, Address: 0x3d60ec, Func Offset: 0x33c
	// Line 1082, Address: 0x3d60f0, Func Offset: 0x340
	// Line 1069, Address: 0x3d60f4, Func Offset: 0x344
	// Line 1082, Address: 0x3d60f8, Func Offset: 0x348
	// Line 1069, Address: 0x3d60fc, Func Offset: 0x34c
	// Line 1082, Address: 0x3d6100, Func Offset: 0x350
	// Line 1069, Address: 0x3d610c, Func Offset: 0x35c
	// Line 1082, Address: 0x3d6110, Func Offset: 0x360
	// Line 1083, Address: 0x3d6340, Func Offset: 0x590
	// Line 1082, Address: 0x3d6344, Func Offset: 0x594
	// Line 1083, Address: 0x3d6348, Func Offset: 0x598
	// Line 1084, Address: 0x3d6378, Func Offset: 0x5c8
	// Line 1083, Address: 0x3d6380, Func Offset: 0x5d0
	// Line 1084, Address: 0x3d6384, Func Offset: 0x5d4
	// Line 1083, Address: 0x3d63a4, Func Offset: 0x5f4
	// Line 1084, Address: 0x3d63a8, Func Offset: 0x5f8
	// Line 1083, Address: 0x3d63ac, Func Offset: 0x5fc
	// Line 1084, Address: 0x3d63b0, Func Offset: 0x600
	// Line 1083, Address: 0x3d63c4, Func Offset: 0x614
	// Line 1084, Address: 0x3d63cc, Func Offset: 0x61c
	// Line 1083, Address: 0x3d63d0, Func Offset: 0x620
	// Line 1084, Address: 0x3d63d4, Func Offset: 0x624
	// Line 1087, Address: 0x3d65b8, Func Offset: 0x808
	// Line 1088, Address: 0x3d65c4, Func Offset: 0x814
	// Line 1090, Address: 0x3d65e4, Func Offset: 0x834
	// Line 1094, Address: 0x3d65ec, Func Offset: 0x83c
	// Line 1096, Address: 0x3d65f0, Func Offset: 0x840
	// Line 1110, Address: 0x3d65f8, Func Offset: 0x848
	// Line 1096, Address: 0x3d65fc, Func Offset: 0x84c
	// Line 1110, Address: 0x3d661c, Func Offset: 0x86c
	// Line 1111, Address: 0x3d6624, Func Offset: 0x874
	// Line 1112, Address: 0x3d6628, Func Offset: 0x878
	// Line 1114, Address: 0x3d663c, Func Offset: 0x88c
	// Line 1115, Address: 0x3d6648, Func Offset: 0x898
	// Line 1116, Address: 0x3d664c, Func Offset: 0x89c
	// Line 1118, Address: 0x3d6650, Func Offset: 0x8a0
	// Line 1119, Address: 0x3d6894, Func Offset: 0xae4
	// Line 1118, Address: 0x3d6898, Func Offset: 0xae8
	// Line 1119, Address: 0x3d689c, Func Offset: 0xaec
	// Line 1120, Address: 0x3d68cc, Func Offset: 0xb1c
	// Line 1119, Address: 0x3d68d4, Func Offset: 0xb24
	// Line 1120, Address: 0x3d68d8, Func Offset: 0xb28
	// Line 1119, Address: 0x3d68f8, Func Offset: 0xb48
	// Line 1120, Address: 0x3d68fc, Func Offset: 0xb4c
	// Line 1119, Address: 0x3d6900, Func Offset: 0xb50
	// Line 1120, Address: 0x3d6904, Func Offset: 0xb54
	// Line 1119, Address: 0x3d6914, Func Offset: 0xb64
	// Line 1120, Address: 0x3d691c, Func Offset: 0xb6c
	// Line 1119, Address: 0x3d6920, Func Offset: 0xb70
	// Line 1120, Address: 0x3d6924, Func Offset: 0xb74
	// Line 1123, Address: 0x3d6b18, Func Offset: 0xd68
	// Line 1124, Address: 0x3d6b24, Func Offset: 0xd74
	// Line 1128, Address: 0x3d6b44, Func Offset: 0xd94
	// Line 1141, Address: 0x3d6b48, Func Offset: 0xd98
	// Line 1128, Address: 0x3d6b4c, Func Offset: 0xd9c
	// Line 1141, Address: 0x3d6b50, Func Offset: 0xda0
	// Line 1128, Address: 0x3d6b64, Func Offset: 0xdb4
	// Line 1141, Address: 0x3d6b68, Func Offset: 0xdb8
	// Line 1142, Address: 0x3d6d98, Func Offset: 0xfe8
	// Line 1141, Address: 0x3d6d9c, Func Offset: 0xfec
	// Line 1142, Address: 0x3d6da0, Func Offset: 0xff0
	// Line 1143, Address: 0x3d6dd0, Func Offset: 0x1020
	// Line 1142, Address: 0x3d6dd8, Func Offset: 0x1028
	// Line 1143, Address: 0x3d6ddc, Func Offset: 0x102c
	// Line 1142, Address: 0x3d6dfc, Func Offset: 0x104c
	// Line 1143, Address: 0x3d6e00, Func Offset: 0x1050
	// Line 1142, Address: 0x3d6e04, Func Offset: 0x1054
	// Line 1143, Address: 0x3d6e08, Func Offset: 0x1058
	// Line 1142, Address: 0x3d6e18, Func Offset: 0x1068
	// Line 1143, Address: 0x3d6e20, Func Offset: 0x1070
	// Line 1142, Address: 0x3d6e24, Func Offset: 0x1074
	// Line 1143, Address: 0x3d6e28, Func Offset: 0x1078
	// Line 1146, Address: 0x3d7020, Func Offset: 0x1270
	// Line 1147, Address: 0x3d702c, Func Offset: 0x127c
	// Line 1151, Address: 0x3d704c, Func Offset: 0x129c
	// Line 1152, Address: 0x3d7050, Func Offset: 0x12a0
	// Line 1153, Address: 0x3d7054, Func Offset: 0x12a4
	// Line 1152, Address: 0x3d7058, Func Offset: 0x12a8
	// Line 1153, Address: 0x3d705c, Func Offset: 0x12ac
	// Line 1155, Address: 0x3d7070, Func Offset: 0x12c0
	// Line 1161, Address: 0x3d7088, Func Offset: 0x12d8
	// Line 1162, Address: 0x3d70c0, Func Offset: 0x1310
	// Func End, Address: 0x3d7104, Func Offset: 0x1354
}

// xCMprep__FP12xCreditsData
// Start address: 0x3d7110
void xCMprep(xCreditsData* data)
{
	xCMheader* hdr;
	int8* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	// Line 188, Address: 0x3d7110, Func Offset: 0
	// Line 191, Address: 0x3d7124, Func Offset: 0x14
	// Line 190, Address: 0x3d7128, Func Offset: 0x18
	// Line 191, Address: 0x3d712c, Func Offset: 0x1c
	// Line 197, Address: 0x3d713c, Func Offset: 0x2c
	// Line 194, Address: 0x3d7148, Func Offset: 0x38
	// Line 195, Address: 0x3d714c, Func Offset: 0x3c
	// Line 193, Address: 0x3d7150, Func Offset: 0x40
	// Line 194, Address: 0x3d7154, Func Offset: 0x44
	// Line 195, Address: 0x3d716c, Func Offset: 0x5c
	// Line 197, Address: 0x3d7180, Func Offset: 0x70
	// Line 204, Address: 0x3d71c8, Func Offset: 0xb8
	// Line 206, Address: 0x3d71d8, Func Offset: 0xc8
	// Line 207, Address: 0x3d71e0, Func Offset: 0xd0
	// Line 208, Address: 0x3d71ec, Func Offset: 0xdc
	// Line 209, Address: 0x3d71f4, Func Offset: 0xe4
	// Line 210, Address: 0x3d71f8, Func Offset: 0xe8
	// Line 212, Address: 0x3d7204, Func Offset: 0xf4
	// Line 213, Address: 0x3d720c, Func Offset: 0xfc
	// Line 214, Address: 0x3d721c, Func Offset: 0x10c
	// Line 215, Address: 0x3d7224, Func Offset: 0x114
	// Line 219, Address: 0x3d722c, Func Offset: 0x11c
	// Line 220, Address: 0x3d7230, Func Offset: 0x120
	// Line 221, Address: 0x3d7234, Func Offset: 0x124
	// Line 220, Address: 0x3d7238, Func Offset: 0x128
	// Line 221, Address: 0x3d723c, Func Offset: 0x12c
	// Line 222, Address: 0x3d7250, Func Offset: 0x140
	// Line 223, Address: 0x3d7254, Func Offset: 0x144
	// Line 224, Address: 0x3d7268, Func Offset: 0x158
	// Line 225, Address: 0x3d7278, Func Offset: 0x168
	// Func End, Address: 0x3d7280, Func Offset: 0x170
}

