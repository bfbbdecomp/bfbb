typedef struct xLinkAsset;
typedef struct xMovePoint;
typedef struct xMovePointAsset;
typedef struct xEnt;
typedef struct xBaseAsset;
typedef struct xVec3;
typedef struct xEnv;
typedef struct xSerial;
typedef struct xCoef;
typedef struct xSpline3;
typedef struct xCoef3;
typedef struct xScene;
typedef struct xMemPool;
typedef struct xBase;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_1)(uint32);
typedef int8*(*type_2)(xBase*);
typedef int8*(*type_3)(uint32);
typedef void(*type_6)(xMemPool*, void*);

typedef float32 type_4[4];
typedef uint8 type_5[2];
typedef float32 type_7[4];
typedef xVec3 type_8[2];

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct xEnt
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xEnv
{
};

struct xSerial
{
};

struct xCoef
{
	float32 a[4];
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xScene
{
	uint32 sceneID;
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

uint32 gActiveHeap;

xVec3* xMovePointGetPos(xMovePoint* m);
float32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng);
void xMovePointSplineDestroy(xMovePoint* m);
void xMovePointSplineSetup(xMovePoint* m);
void xMovePointSetup(xMovePoint* m, xScene* sc);
void xMovePointReset(xMovePoint* m);
void xMovePointLoad(xMovePoint* ent, xSerial* s);
void xMovePointSave(xMovePoint* ent, xSerial* s);
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset);

// xMovePointGetPos__FPC10xMovePoint
// Start address: 0x1f2870
xVec3* xMovePointGetPos(xMovePoint* m)
{
	// Line 271, Address: 0x1f2870, Func Offset: 0
	// Func End, Address: 0x1f2878, Func Offset: 0x8
}

// xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
// Start address: 0x1f2880
float32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
	int32 rnd;
	uint16 idx;
	xMovePoint* previousOption;
	// Line 208, Address: 0x1f2880, Func Offset: 0
	// Line 214, Address: 0x1f28a8, Func Offset: 0x28
	// Line 216, Address: 0x1f28b8, Func Offset: 0x38
	// Line 217, Address: 0x1f28c4, Func Offset: 0x44
	// Line 222, Address: 0x1f28c8, Func Offset: 0x48
	// Line 223, Address: 0x1f28e4, Func Offset: 0x64
	// Line 226, Address: 0x1f28f0, Func Offset: 0x70
	// Line 227, Address: 0x1f2908, Func Offset: 0x88
	// Line 230, Address: 0x1f2910, Func Offset: 0x90
	// Line 227, Address: 0x1f2914, Func Offset: 0x94
	// Line 230, Address: 0x1f2918, Func Offset: 0x98
	// Line 233, Address: 0x1f2920, Func Offset: 0xa0
	// Line 241, Address: 0x1f2928, Func Offset: 0xa8
	// Line 244, Address: 0x1f2930, Func Offset: 0xb0
	// Line 247, Address: 0x1f2938, Func Offset: 0xb8
	// Line 250, Address: 0x1f2940, Func Offset: 0xc0
	// Line 252, Address: 0x1f2960, Func Offset: 0xe0
	// Line 255, Address: 0x1f296c, Func Offset: 0xec
	// Line 256, Address: 0x1f2974, Func Offset: 0xf4
	// Line 258, Address: 0x1f2980, Func Offset: 0x100
	// Line 259, Address: 0x1f298c, Func Offset: 0x10c
	// Line 261, Address: 0x1f2990, Func Offset: 0x110
	// Line 262, Address: 0x1f2998, Func Offset: 0x118
	// Line 264, Address: 0x1f2a88, Func Offset: 0x208
	// Line 265, Address: 0x1f2a90, Func Offset: 0x210
	// Func End, Address: 0x1f2ab0, Func Offset: 0x230
}

// xMovePointSplineDestroy__FP10xMovePoint
// Start address: 0x1f2ab0
void xMovePointSplineDestroy(xMovePoint* m)
{
	// Line 174, Address: 0x1f2ab0, Func Offset: 0
	// Line 176, Address: 0x1f2abc, Func Offset: 0xc
	// Line 178, Address: 0x1f2ac0, Func Offset: 0x10
	// Func End, Address: 0x1f2ac8, Func Offset: 0x18
}

// xMovePointSplineSetup__FP10xMovePoint
// Start address: 0x1f2ad0
void xMovePointSplineSetup(xMovePoint* m)
{
	xMovePoint* w0;
	xMovePoint* w2;
	xMovePoint* w3;
	xVec3 points[2];
	xVec3 p1;
	xVec3 p2;
	// Line 123, Address: 0x1f2ad0, Func Offset: 0
	// Line 130, Address: 0x1f2ad4, Func Offset: 0x4
	// Line 123, Address: 0x1f2ad8, Func Offset: 0x8
	// Line 130, Address: 0x1f2ae4, Func Offset: 0x14
	// Line 137, Address: 0x1f2b00, Func Offset: 0x30
	// Line 139, Address: 0x1f2b04, Func Offset: 0x34
	// Line 141, Address: 0x1f2b08, Func Offset: 0x38
	// Line 139, Address: 0x1f2b0c, Func Offset: 0x3c
	// Line 141, Address: 0x1f2b10, Func Offset: 0x40
	// Line 144, Address: 0x1f2b28, Func Offset: 0x58
	// Line 146, Address: 0x1f2b38, Func Offset: 0x68
	// Line 147, Address: 0x1f2b3c, Func Offset: 0x6c
	// Line 146, Address: 0x1f2b40, Func Offset: 0x70
	// Line 147, Address: 0x1f2b44, Func Offset: 0x74
	// Line 148, Address: 0x1f2b5c, Func Offset: 0x8c
	// Line 149, Address: 0x1f2b78, Func Offset: 0xa8
	// Line 150, Address: 0x1f2b90, Func Offset: 0xc0
	// Line 157, Address: 0x1f2b98, Func Offset: 0xc8
	// Line 158, Address: 0x1f2bd0, Func Offset: 0x100
	// Line 159, Address: 0x1f2bec, Func Offset: 0x11c
	// Line 160, Address: 0x1f2c08, Func Offset: 0x138
	// Line 161, Address: 0x1f2c24, Func Offset: 0x154
	// Line 162, Address: 0x1f2c40, Func Offset: 0x170
	// Line 163, Address: 0x1f2c5c, Func Offset: 0x18c
	// Line 167, Address: 0x1f2c78, Func Offset: 0x1a8
	// Line 168, Address: 0x1f2c98, Func Offset: 0x1c8
	// Line 169, Address: 0x1f2ca4, Func Offset: 0x1d4
	// Line 170, Address: 0x1f2ca8, Func Offset: 0x1d8
	// Func End, Address: 0x1f2cb8, Func Offset: 0x1e8
}

// xMovePointSetup__FP10xMovePointP6xScene
// Start address: 0x1f2cc0
void xMovePointSetup(xMovePoint* m, xScene* sc)
{
	uint32* id;
	uint16 idx;
	// Line 98, Address: 0x1f2cc0, Func Offset: 0
	// Line 106, Address: 0x1f2ce4, Func Offset: 0x24
	// Line 107, Address: 0x1f2cec, Func Offset: 0x2c
	// Line 109, Address: 0x1f2cf0, Func Offset: 0x30
	// Line 113, Address: 0x1f2d08, Func Offset: 0x48
	// Line 119, Address: 0x1f2d18, Func Offset: 0x58
	// Line 118, Address: 0x1f2d20, Func Offset: 0x60
	// Line 113, Address: 0x1f2d24, Func Offset: 0x64
	// Line 116, Address: 0x1f2d2c, Func Offset: 0x6c
	// Line 118, Address: 0x1f2d4c, Func Offset: 0x8c
	// Line 119, Address: 0x1f2d5c, Func Offset: 0x9c
	// Line 120, Address: 0x1f2d70, Func Offset: 0xb0
	// Func End, Address: 0x1f2d90, Func Offset: 0xd0
}

// xMovePointReset__FP10xMovePoint
// Start address: 0x1f2d90
void xMovePointReset(xMovePoint* m)
{
	// Line 85, Address: 0x1f2d90, Func Offset: 0
	// Line 90, Address: 0x1f2d9c, Func Offset: 0xc
	// Line 93, Address: 0x1f2da8, Func Offset: 0x18
	// Line 94, Address: 0x1f2db4, Func Offset: 0x24
	// Line 95, Address: 0x1f2dc0, Func Offset: 0x30
	// Func End, Address: 0x1f2dd0, Func Offset: 0x40
}

// xMovePointLoad__FP10xMovePointP7xSerial
// Start address: 0x1f2dd0
void xMovePointLoad(xMovePoint* ent, xSerial* s)
{
	// Line 78, Address: 0x1f2dd0, Func Offset: 0
	// Func End, Address: 0x1f2dd8, Func Offset: 0x8
}

// xMovePointSave__FP10xMovePointP7xSerial
// Start address: 0x1f2de0
void xMovePointSave(xMovePoint* ent, xSerial* s)
{
	// Line 59, Address: 0x1f2de0, Func Offset: 0
	// Func End, Address: 0x1f2de8, Func Offset: 0x8
}

// xMovePointInit__FP10xMovePointP15xMovePointAsset
// Start address: 0x1f2df0
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset)
{
	// Line 24, Address: 0x1f2df0, Func Offset: 0
	// Line 28, Address: 0x1f2e04, Func Offset: 0x14
	// Line 30, Address: 0x1f2e0c, Func Offset: 0x1c
	// Line 31, Address: 0x1f2e10, Func Offset: 0x20
	// Line 34, Address: 0x1f2e1c, Func Offset: 0x2c
	// Line 35, Address: 0x1f2e24, Func Offset: 0x34
	// Line 36, Address: 0x1f2e2c, Func Offset: 0x3c
	// Line 38, Address: 0x1f2e34, Func Offset: 0x44
	// Line 39, Address: 0x1f2e3c, Func Offset: 0x4c
	// Line 41, Address: 0x1f2e4c, Func Offset: 0x5c
	// Line 44, Address: 0x1f2e58, Func Offset: 0x68
	// Line 45, Address: 0x1f2e5c, Func Offset: 0x6c
	// Line 46, Address: 0x1f2e60, Func Offset: 0x70
	// Func End, Address: 0x1f2e74, Func Offset: 0x84
}

