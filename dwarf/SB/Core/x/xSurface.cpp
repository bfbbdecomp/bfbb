typedef struct xSurface;
typedef struct xSerial;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct xBase;

typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_0[3];
typedef float32 type_1[4];

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	type_0 pad;
	void* moprops;
};

struct xSerial
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xEnt
{
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
};

xSurface* surfs;
uint16 nsurfs;
uint32 gActiveHeap;

xSurface* xSurfaceGetByIdx(uint16 n);
uint16 xSurfaceGetNumSurfaces();
void xSurfaceReset();
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceExit();
void xSurfaceInit(uint16 num_surfs);

// xSurfaceGetByIdx__FUs
// Start address: 0x20ed40
xSurface* xSurfaceGetByIdx(uint16 n)
{
}

// xSurfaceGetNumSurfaces__Fv
// Start address: 0x20ed70
uint16 xSurfaceGetNumSurfaces()
{
}

// xSurfaceReset__FP8xSurface
// Start address: 0x20ed80
void xSurfaceReset()
{
}

// xSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x20ed90
void xSurfaceLoad(xSurface* ent, xSerial* s)
{
}

// xSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x20eda0
void xSurfaceSave(xSurface* ent, xSerial* s)
{
}

// xSurfaceExit__Fv
// Start address: 0x20edb0
void xSurfaceExit()
{
}

// xSurfaceInit__FUs
// Start address: 0x20edc0
void xSurfaceInit(uint16 num_surfs)
{
	uint16 i;
}

