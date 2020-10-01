typedef struct xIsect;
typedef struct xBox;
typedef struct xVec3;
typedef struct xTri3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xRay3;
typedef struct xPlane;
typedef struct xMat4x3;
typedef struct xMat3x3;



struct xIsect
{
	u32 flags;
	f32 penned;
	f32 contained;
	f32 lapped;
	xVec3 point;
	xVec3 norm;
	f32 dist;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xTri3
{
	xVec3 p1;
	xVec3 p2;
	xVec3 p3;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xPlane
{
	xVec3 norm;
	f32 d;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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


void iBoxBoundVec(xBox* o, xBox* b, xVec3* v);
void iBoxInitBoundVec(xBox* b, xVec3* v);
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx);
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx);
u32 ClipPlane(f32 denom, f32 numer, f32* t_in, f32* t_out);
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx);
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx);
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx);
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v);
void iSphereInitBoundVec(xSphere* s, xVec3* v);
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx);
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx);
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx);
void iMath3Exit();
void iMath3Init();

// iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3
// Start address: 0x1ab2c0
void iBoxBoundVec(xBox* o, xBox* b, xVec3* v)
{
}

// iBoxInitBoundVec__FP4xBoxPC5xVec3
// Start address: 0x1ab3a0
void iBoxInitBoundVec(xBox* b, xVec3* v)
{
}

// iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect
// Start address: 0x1ab3e0
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx)
{
	u32 xcode;
	u32 ycode;
	u32 zcode;
}

// iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
// Start address: 0x1ab760
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx)
{
	f32 t_in;
	f32 t_out;
}

// ClipPlane__FffPfPf
// Start address: 0x1ab9f0
u32 ClipPlane(f32 denom, f32 numer, f32* t_in, f32* t_out)
{
}

// iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abad0
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx)
{
}

// iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abb60
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx)
{
}

// iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect
// Start address: 0x1ac570
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx)
{
	f32 b;
}

// iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3
// Start address: 0x1ac5f0
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v)
{
	f32 scale;
	xSphere temp;
	xSphere* tp;
	u32 usetemp;
}

// iSphereInitBoundVec__FP7xSpherePC5xVec3
// Start address: 0x1ac730
void iSphereInitBoundVec(xSphere* s, xVec3* v)
{
}

// iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect
// Start address: 0x1ac760
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx)
{
}

// iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect
// Start address: 0x1ac7e0
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx)
{
	f32 t_in;
	f32 t_out;
	u32 num;
}

// iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect
// Start address: 0x1ac9d0
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx)
{
}

// iMath3Exit__Fv
// Start address: 0x1aca40
void iMath3Exit()
{
}

// iMath3Init__Fv
// Start address: 0x1aca50
void iMath3Init()
{
}

