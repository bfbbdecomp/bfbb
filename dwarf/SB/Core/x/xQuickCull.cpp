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


typedef u8 type[3];

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xQCControl
{
	f32 world_xmin;
	f32 world_ymin;
	f32 world_zmin;
	f32 world_xmax;
	f32 world_ymax;
	f32 world_zmax;
	f32 world_xsz;
	f32 world_ysz;
	f32 world_zsz;
	f32 scale_x;
	f32 scale_y;
	f32 scale_z;
	f32 center_x;
	f32 center_y;
	f32 center_z;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type pad;
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
s32 xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(xQCControl* ctrl, xBox* box);
void xQuickCullInit(xQCControl* ctrl, f32 xmin, f32 ymin, f32 zmin, f32 xmax, f32 ymax, f32 zmax);

// xQuickCullForEverything__FP7xQCData
// Start address: 0x1fa330
void xQuickCullForEverything(xQCData* q)
{
}

// xQuickCullForOBB__FP10xQCControlP7xQCDataPC4xBoxPC7xMat4x3
// Start address: 0x1fa360
void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, xBox* b, xMat4x3* m)
{
	xBox worldbox;
}

// xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox
// Start address: 0x1fa3b0
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box)
{
	xQCData a;
	xQCData b;
}

// xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
// Start address: 0x1fa4a0
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s)
{
	xVec3 v1;
	xVec3 v2;
	f32 radius_adjusted;
	xQCData a;
	xQCData b;
}

// xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3
// Start address: 0x1fa620
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r)
{
	xLine3 ln;
	f32 len;
	xQCData a;
	xQCData b;
}

// xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3
// Start address: 0x1fa840
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln)
{
	xQCData a;
	xQCData b;
}

// xQuickCullCellForVec__FP10xQCControlP7xQCDataPC5xVec3
// Start address: 0x1fa920
void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, xVec3* v)
{
}

// xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound
// Start address: 0x1faa60
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b)
{
}

// xQuickCullIsects__FPC7xQCDataPC7xQCData
// Start address: 0x1faae0
s32 xQuickCullIsects(xQCData* a, xQCData* b)
{
	s32 result;
}

// xQuickCullInit__FP10xQCControlPC4xBox
// Start address: 0x1fab10
void xQuickCullInit(xQCControl* ctrl, xBox* box)
{
}

// xQuickCullInit__FP10xQCControlffffff
// Start address: 0x1fab30
void xQuickCullInit(xQCControl* ctrl, f32 xmin, f32 ymin, f32 zmin, f32 xmax, f32 ymax, f32 zmax)
{
}

