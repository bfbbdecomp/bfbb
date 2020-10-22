typedef struct xQCData;
typedef struct xQCControl;
typedef struct xVec3;
typedef struct xBox;
typedef struct xBBox;
typedef struct xRay3;
typedef struct xMat4x3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xLine3;
typedef struct xMat3x3;
typedef struct xBound;


typedef uint8 type[3];

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

xQCControl xqc_def_ctrl;

void xQuickCullForEverything(xQCData* q);
void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, xBox* b, xMat4x3* m);
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box);
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s);
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r);
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln);
void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, xVec3* v);
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b);
int32 xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(xQCControl* ctrl, xBox* box);
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax);

// xQuickCullForEverything__FP7xQCData
// Start address: 0x1fa330
void xQuickCullForEverything(xQCData* q)
{
	// Line 622, Address: 0x1fa330, Func Offset: 0
	// Line 626, Address: 0x1fa334, Func Offset: 0x4
	// Line 622, Address: 0x1fa338, Func Offset: 0x8
	// Line 623, Address: 0x1fa33c, Func Offset: 0xc
	// Line 624, Address: 0x1fa340, Func Offset: 0x10
	// Line 625, Address: 0x1fa344, Func Offset: 0x14
	// Line 626, Address: 0x1fa348, Func Offset: 0x18
	// Line 627, Address: 0x1fa34c, Func Offset: 0x1c
	// Line 628, Address: 0x1fa350, Func Offset: 0x20
	// Line 635, Address: 0x1fa354, Func Offset: 0x24
	// Func End, Address: 0x1fa35c, Func Offset: 0x2c
}

// xQuickCullForOBB__FP10xQCControlP7xQCDataPC4xBoxPC7xMat4x3
// Start address: 0x1fa360
void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, xBox* b, xMat4x3* m)
{
	xBox worldbox;
	// Line 605, Address: 0x1fa360, Func Offset: 0
	// Line 614, Address: 0x1fa378, Func Offset: 0x18
	// Line 615, Address: 0x1fa388, Func Offset: 0x28
	// Line 617, Address: 0x1fa398, Func Offset: 0x38
	// Func End, Address: 0x1fa3ac, Func Offset: 0x4c
}

// xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox
// Start address: 0x1fa3b0
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box)
{
	xQCData a;
	xQCData b;
	// Line 593, Address: 0x1fa3b0, Func Offset: 0
	// Line 599, Address: 0x1fa3d0, Func Offset: 0x20
	// Line 600, Address: 0x1fa3dc, Func Offset: 0x2c
	// Line 601, Address: 0x1fa3ec, Func Offset: 0x3c
	// Line 600, Address: 0x1fa3f4, Func Offset: 0x44
	// Line 601, Address: 0x1fa3fc, Func Offset: 0x4c
	// Line 602, Address: 0x1fa47c, Func Offset: 0xcc
	// Func End, Address: 0x1fa494, Func Offset: 0xe4
}

// xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
// Start address: 0x1fa4a0
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s)
{
	xVec3 v1;
	xVec3 v2;
	float32 radius_adjusted;
	xQCData a;
	xQCData b;
	// Line 567, Address: 0x1fa4a0, Func Offset: 0
	// Line 580, Address: 0x1fa4a4, Func Offset: 0x4
	// Line 567, Address: 0x1fa4a8, Func Offset: 0x8
	// Line 580, Address: 0x1fa4ac, Func Offset: 0xc
	// Line 567, Address: 0x1fa4b0, Func Offset: 0x10
	// Line 580, Address: 0x1fa4b4, Func Offset: 0x14
	// Line 567, Address: 0x1fa4b8, Func Offset: 0x18
	// Line 581, Address: 0x1fa4bc, Func Offset: 0x1c
	// Line 580, Address: 0x1fa4c0, Func Offset: 0x20
	// Line 581, Address: 0x1fa4c8, Func Offset: 0x28
	// Line 582, Address: 0x1fa4cc, Func Offset: 0x2c
	// Line 587, Address: 0x1fa4d8, Func Offset: 0x38
	// Line 580, Address: 0x1fa4dc, Func Offset: 0x3c
	// Line 581, Address: 0x1fa4e4, Func Offset: 0x44
	// Line 582, Address: 0x1fa4f0, Func Offset: 0x50
	// Line 583, Address: 0x1fa4fc, Func Offset: 0x5c
	// Line 584, Address: 0x1fa52c, Func Offset: 0x8c
	// Line 587, Address: 0x1fa554, Func Offset: 0xb4
	// Line 584, Address: 0x1fa558, Func Offset: 0xb8
	// Line 587, Address: 0x1fa55c, Func Offset: 0xbc
	// Line 588, Address: 0x1fa564, Func Offset: 0xc4
	// Line 589, Address: 0x1fa574, Func Offset: 0xd4
	// Line 588, Address: 0x1fa57c, Func Offset: 0xdc
	// Line 589, Address: 0x1fa584, Func Offset: 0xe4
	// Line 590, Address: 0x1fa604, Func Offset: 0x164
	// Func End, Address: 0x1fa618, Func Offset: 0x178
}

// xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3
// Start address: 0x1fa620
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r)
{
	xLine3 ln;
	float32 len;
	xQCData a;
	xQCData b;
	// Line 552, Address: 0x1fa620, Func Offset: 0
	// Line 558, Address: 0x1fa634, Func Offset: 0x14
	// Line 561, Address: 0x1fa740, Func Offset: 0x120
	// Line 558, Address: 0x1fa744, Func Offset: 0x124
	// Line 561, Address: 0x1fa748, Func Offset: 0x128
	// Line 558, Address: 0x1fa74c, Func Offset: 0x12c
	// Line 561, Address: 0x1fa750, Func Offset: 0x130
	// Line 558, Address: 0x1fa754, Func Offset: 0x134
	// Line 561, Address: 0x1fa778, Func Offset: 0x158
	// Line 562, Address: 0x1fa780, Func Offset: 0x160
	// Line 563, Address: 0x1fa790, Func Offset: 0x170
	// Line 562, Address: 0x1fa798, Func Offset: 0x178
	// Line 563, Address: 0x1fa7a0, Func Offset: 0x180
	// Line 564, Address: 0x1fa820, Func Offset: 0x200
	// Func End, Address: 0x1fa834, Func Offset: 0x214
}

// xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3
// Start address: 0x1fa840
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln)
{
	xQCData a;
	xQCData b;
	// Line 540, Address: 0x1fa840, Func Offset: 0
	// Line 546, Address: 0x1fa860, Func Offset: 0x20
	// Line 547, Address: 0x1fa868, Func Offset: 0x28
	// Line 548, Address: 0x1fa878, Func Offset: 0x38
	// Line 547, Address: 0x1fa880, Func Offset: 0x40
	// Line 548, Address: 0x1fa888, Func Offset: 0x48
	// Line 549, Address: 0x1fa908, Func Offset: 0xc8
	// Func End, Address: 0x1fa920, Func Offset: 0xe0
}

// xQuickCullCellForVec__FP10xQCControlP7xQCDataPC5xVec3
// Start address: 0x1fa920
void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, xVec3* v)
{
	// Line 202, Address: 0x1fa920, Func Offset: 0
	// Line 203, Address: 0x1fa940, Func Offset: 0x20
	// Line 204, Address: 0x1fa99c, Func Offset: 0x7c
	// Line 205, Address: 0x1fa9f8, Func Offset: 0xd8
	// Line 206, Address: 0x1faa34, Func Offset: 0x114
	// Line 207, Address: 0x1faa3c, Func Offset: 0x11c
	// Line 208, Address: 0x1faa44, Func Offset: 0x124
	// Line 209, Address: 0x1faa4c, Func Offset: 0x12c
	// Line 210, Address: 0x1faa54, Func Offset: 0x134
	// Line 211, Address: 0x1faa58, Func Offset: 0x138
	// Func End, Address: 0x1faa60, Func Offset: 0x140
}

// xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound
// Start address: 0x1faa60
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b)
{
	// Line 183, Address: 0x1faa60, Func Offset: 0
	// Line 185, Address: 0x1faa6c, Func Offset: 0xc
	// Line 183, Address: 0x1faa70, Func Offset: 0x10
	// Line 185, Address: 0x1faa74, Func Offset: 0x14
	// Line 186, Address: 0x1faa7c, Func Offset: 0x1c
	// Line 187, Address: 0x1faa84, Func Offset: 0x24
	// Line 188, Address: 0x1faa9c, Func Offset: 0x3c
	// Line 191, Address: 0x1faaa4, Func Offset: 0x44
	// Line 193, Address: 0x1faabc, Func Offset: 0x5c
	// Line 198, Address: 0x1faac8, Func Offset: 0x68
	// Func End, Address: 0x1faad4, Func Offset: 0x74
}

// xQuickCullIsects__FPC7xQCDataPC7xQCData
// Start address: 0x1faae0
int32 xQuickCullIsects(xQCData* a, xQCData* b)
{
	int32 result;
	// Line 147, Address: 0x1faae0, Func Offset: 0
	// Line 148, Address: 0x1faae4, Func Offset: 0x4
	// Line 149, Address: 0x1faae8, Func Offset: 0x8
	// Line 150, Address: 0x1faaec, Func Offset: 0xc
	// Line 151, Address: 0x1faaf0, Func Offset: 0x10
	// Line 152, Address: 0x1faaf4, Func Offset: 0x14
	// Line 153, Address: 0x1faaf8, Func Offset: 0x18
	// Line 154, Address: 0x1faafc, Func Offset: 0x1c
	// Line 180, Address: 0x1fab00, Func Offset: 0x20
	// Func End, Address: 0x1fab08, Func Offset: 0x28
}

// xQuickCullInit__FP10xQCControlPC4xBox
// Start address: 0x1fab10
void xQuickCullInit(xQCControl* ctrl, xBox* box)
{
	// Line 130, Address: 0x1fab10, Func Offset: 0
	// Func End, Address: 0x1fab2c, Func Offset: 0x1c
}

// xQuickCullInit__FP10xQCControlffffff
// Start address: 0x1fab30
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax)
{
	// Line 55, Address: 0x1fab30, Func Offset: 0
	// Line 56, Address: 0x1fab34, Func Offset: 0x4
	// Line 57, Address: 0x1fab38, Func Offset: 0x8
	// Line 58, Address: 0x1fab3c, Func Offset: 0xc
	// Line 59, Address: 0x1fab40, Func Offset: 0x10
	// Line 61, Address: 0x1fab44, Func Offset: 0x14
	// Line 60, Address: 0x1fab48, Func Offset: 0x18
	// Line 61, Address: 0x1fab4c, Func Offset: 0x1c
	// Line 62, Address: 0x1fab50, Func Offset: 0x20
	// Line 63, Address: 0x1fab58, Func Offset: 0x28
	// Line 65, Address: 0x1fab60, Func Offset: 0x30
	// Line 69, Address: 0x1fab98, Func Offset: 0x68
	// Line 90, Address: 0x1faba8, Func Offset: 0x78
	// Line 93, Address: 0x1fabb0, Func Offset: 0x80
	// Line 90, Address: 0x1fabb4, Func Offset: 0x84
	// Line 93, Address: 0x1fabb8, Func Offset: 0x88
	// Line 90, Address: 0x1fabc0, Func Offset: 0x90
	// Line 91, Address: 0x1fabc8, Func Offset: 0x98
	// Line 94, Address: 0x1fabcc, Func Offset: 0x9c
	// Line 95, Address: 0x1fabd0, Func Offset: 0xa0
	// Line 91, Address: 0x1fabd4, Func Offset: 0xa4
	// Line 92, Address: 0x1fabdc, Func Offset: 0xac
	// Line 93, Address: 0x1fabe0, Func Offset: 0xb0
	// Line 92, Address: 0x1fabe4, Func Offset: 0xb4
	// Line 93, Address: 0x1fabec, Func Offset: 0xbc
	// Line 94, Address: 0x1fabf0, Func Offset: 0xc0
	// Line 93, Address: 0x1fabf4, Func Offset: 0xc4
	// Line 94, Address: 0x1fac00, Func Offset: 0xd0
	// Line 95, Address: 0x1fac04, Func Offset: 0xd4
	// Line 94, Address: 0x1fac08, Func Offset: 0xd8
	// Line 95, Address: 0x1fac14, Func Offset: 0xe4
	// Line 125, Address: 0x1fac24, Func Offset: 0xf4
	// Func End, Address: 0x1fac2c, Func Offset: 0xfc
}

