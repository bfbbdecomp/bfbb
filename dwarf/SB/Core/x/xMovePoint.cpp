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

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef xBase*(*type_1)(u32);
typedef s8*(*type_2)(xBase*);
typedef s8*(*type_3)(u32);
typedef void(*type_6)(xMemPool*, void*);

typedef f32 type_4[4];
typedef u8 type_5[2];
typedef f32 type_7[4];
typedef xVec3 type_8[2];

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_7 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_5 pad;
	f32 delay;
	xSpline3* spl;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	u16 wt;
	u8 on;
	u8 bezIndex;
	u8 flg_props;
	u8 pad;
	u16 numPoints;
	f32 delay;
	f32 zoneRadius;
	f32 arenaRadius;
};

struct xEnt
{
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xEnv
{
};

struct xSerial
{
};

struct xCoef
{
	type_4 a;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xScene
{
	u32 sceneID;
	u16 flags;
	u16 num_ents;
	u16 num_trigs;
	u16 num_stats;
	u16 num_dyns;
	u16 num_npcs;
	u16 num_act_ents;
	u16 num_nact_ents;
	f32 gravity;
	f32 drag;
	f32 friction;
	u16 num_ents_allocd;
	u16 num_trigs_allocd;
	u16 num_stats_allocd;
	u16 num_dyns_allocd;
	u16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_1 resolvID;
	type_2 base2Name;
	type_3 id2Name;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_6 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

u32 gActiveHeap;

xVec3* xMovePointGetPos(xMovePoint* m);
f32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng);
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
}

// xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
// Start address: 0x1f2880
f32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
	s32 rnd;
	u16 idx;
	xMovePoint* previousOption;
}

// xMovePointSplineDestroy__FP10xMovePoint
// Start address: 0x1f2ab0
void xMovePointSplineDestroy(xMovePoint* m)
{
}

// xMovePointSplineSetup__FP10xMovePoint
// Start address: 0x1f2ad0
void xMovePointSplineSetup(xMovePoint* m)
{
	xMovePoint* w0;
	xMovePoint* w2;
	xMovePoint* w3;
	type_8 points;
	xVec3 p1;
	xVec3 p2;
}

// xMovePointSetup__FP10xMovePointP6xScene
// Start address: 0x1f2cc0
void xMovePointSetup(xMovePoint* m, xScene* sc)
{
	u32* id;
	u16 idx;
}

// xMovePointReset__FP10xMovePoint
// Start address: 0x1f2d90
void xMovePointReset(xMovePoint* m)
{
}

// xMovePointLoad__FP10xMovePointP7xSerial
// Start address: 0x1f2dd0
void xMovePointLoad(xMovePoint* ent, xSerial* s)
{
}

// xMovePointSave__FP10xMovePointP7xSerial
// Start address: 0x1f2de0
void xMovePointSave(xMovePoint* ent, xSerial* s)
{
}

// xMovePointInit__FP10xMovePointP15xMovePointAsset
// Start address: 0x1f2df0
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset)
{
}

