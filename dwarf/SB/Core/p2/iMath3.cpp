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
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	xVec3 point;
	xVec3 norm;
	float32 dist;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	float32 r;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xPlane
{
	xVec3 norm;
	float32 d;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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


void iBoxBoundVec(xBox* o, xBox* b, xVec3* v);
void iBoxInitBoundVec(xBox* b, xVec3* v);
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx);
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx);
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out);
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
	uint32 xcode;
	uint32 ycode;
	uint32 zcode;
}

// iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
// Start address: 0x1ab760
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx)
{
	float32 t_in;
	float32 t_out;
}

// ClipPlane__FffPfPf
// Start address: 0x1ab9f0
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out)
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
	float32 b;
}

// iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3
// Start address: 0x1ac5f0
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v)
{
	float32 scale;
	xSphere temp;
	xSphere* tp;
	uint32 usetemp;
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
	float32 t_in;
	float32 t_out;
	uint32 num;
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

