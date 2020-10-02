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
int32 xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(xQCControl* ctrl, xBox* box);
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax);

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
	float32 radius_adjusted;
	xQCData a;
	xQCData b;
}

// xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3
// Start address: 0x1fa620
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r)
{
	xLine3 ln;
	float32 len;
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
int32 xQuickCullIsects(xQCData* a, xQCData* b)
{
	int32 result;
}

// xQuickCullInit__FP10xQCControlPC4xBox
// Start address: 0x1fab10
void xQuickCullInit(xQCControl* ctrl, xBox* box)
{
}

// xQuickCullInit__FP10xQCControlffffff
// Start address: 0x1fab30
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax)
{
}

