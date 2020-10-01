typedef struct xSurface;
typedef struct xSerial;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct xBase;

typedef s32(*type_2)(xBase*, xBase*, u32, f32*, xBase*);

typedef u8 type_0[3];
typedef f32 type_1[4];

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_0 pad;
	void* moprops;
};

struct xSerial
{
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_1 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xEnt
{
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
};

xSurface* surfs;
u16 nsurfs;
u32 gActiveHeap;

xSurface* xSurfaceGetByIdx(u16 n);
u16 xSurfaceGetNumSurfaces();
void xSurfaceReset();
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceExit();
void xSurfaceInit(u16 num_surfs);

// xSurfaceGetByIdx__FUs
// Start address: 0x20ed40
xSurface* xSurfaceGetByIdx(u16 n)
{
}

// xSurfaceGetNumSurfaces__Fv
// Start address: 0x20ed70
u16 xSurfaceGetNumSurfaces()
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
void xSurfaceInit(u16 num_surfs)
{
	u16 i;
}

