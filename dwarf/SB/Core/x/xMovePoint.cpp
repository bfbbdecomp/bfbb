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
	type_7 param;
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
	type_5 pad;
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
	type_4 a;
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
	type_1 resolvID;
	type_2 base2Name;
	type_3 id2Name;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_6 InitCB;
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
	type_0 eventFunc;
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
}

// xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
// Start address: 0x1f2880
float32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
	int32 rnd;
	uint16 idx;
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
	uint32* id;
	uint16 idx;
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

