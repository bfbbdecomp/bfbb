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
	uint8 pad[3];
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
	float32 param[4];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	// Line 111, Address: 0x20ed40, Func Offset: 0
	// Line 114, Address: 0x20ed44, Func Offset: 0x4
	// Line 119, Address: 0x20ed60, Func Offset: 0x20
	// Func End, Address: 0x20ed68, Func Offset: 0x28
}

// xSurfaceGetNumSurfaces__Fv
// Start address: 0x20ed70
uint16 xSurfaceGetNumSurfaces()
{
	// Line 108, Address: 0x20ed70, Func Offset: 0
	// Func End, Address: 0x20ed78, Func Offset: 0x8
}

// xSurfaceReset__FP8xSurface
// Start address: 0x20ed80
void xSurfaceReset()
{
	// Line 103, Address: 0x20ed80, Func Offset: 0
	// Func End, Address: 0x20ed88, Func Offset: 0x8
}

// xSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x20ed90
void xSurfaceLoad(xSurface* ent, xSerial* s)
{
	// Line 93, Address: 0x20ed90, Func Offset: 0
	// Func End, Address: 0x20ed98, Func Offset: 0x8
}

// xSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x20eda0
void xSurfaceSave(xSurface* ent, xSerial* s)
{
	// Line 74, Address: 0x20eda0, Func Offset: 0
	// Func End, Address: 0x20eda8, Func Offset: 0x8
}

// xSurfaceExit__Fv
// Start address: 0x20edb0
void xSurfaceExit()
{
	// Line 61, Address: 0x20edb0, Func Offset: 0
	// Func End, Address: 0x20edb8, Func Offset: 0x8
}

// xSurfaceInit__FUs
// Start address: 0x20edc0
void xSurfaceInit(uint16 num_surfs)
{
	uint16 i;
	// Line 26, Address: 0x20edc0, Func Offset: 0
	// Line 28, Address: 0x20edc8, Func Offset: 0x8
	// Line 29, Address: 0x20edd0, Func Offset: 0x10
	// Line 32, Address: 0x20edec, Func Offset: 0x2c
	// Line 33, Address: 0x20ee10, Func Offset: 0x50
	// Line 32, Address: 0x20eec4, Func Offset: 0x104
	// Line 33, Address: 0x20eec8, Func Offset: 0x108
	// Line 34, Address: 0x20eee8, Func Offset: 0x128
	// Line 33, Address: 0x20eef4, Func Offset: 0x134
	// Line 34, Address: 0x20eefc, Func Offset: 0x13c
	// Line 35, Address: 0x20ef04, Func Offset: 0x144
	// Line 36, Address: 0x20ef10, Func Offset: 0x150
	// Line 37, Address: 0x20ef14, Func Offset: 0x154
	// Line 38, Address: 0x20ef18, Func Offset: 0x158
	// Func End, Address: 0x20ef24, Func Offset: 0x164
}

