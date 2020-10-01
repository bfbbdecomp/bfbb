typedef struct xMat3x3;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xCapsule;
typedef struct xQuat;
typedef struct xConic;
typedef struct xIsect;
typedef struct xSphere;
typedef struct xBox;


typedef int32 type_0[3];
typedef float32 type_1[5];

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xCapsule
{
	xVec3 start;
	xVec3 end;
	float32 r;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xConic
{
	xMat4x3 basis;
	xMat4x3 invbasis;
	type_1 coef;
	xVec3 coneBasisCenter;
};

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

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

xVec3 g_O3;
xVec3 g_X3;
xVec3 g_Y3;
xVec3 g_Z3;
xVec3 g_NX3;
xVec3 g_NY3;
xVec3 g_NZ3;
xVec3 g_Onez;
xMat4x3 g_I3;
xQuat g_IQ;
float32 gs_fTolerance;

void xQuatDiff(xQuat* o, xQuat* a, xQuat* b);
void xQuatMul(xQuat* o, xQuat* a, xQuat* b);
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t);
float32 xQuatNormalize(xQuat* o, xQuat* q);
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t);
void xQuatToMat(xQuat* q, xMat3x3* m);
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t);
void xQuatFromMat(xQuat* q, xMat3x3* m);
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b);
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p);
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b);
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m);
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t);
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z);
void xMat3x3RotZ(xMat3x3* m, float32 t);
void xMat3x3RotY(xMat3x3* m, float32 t);
void xMat3x3RotX(xMat3x3* m, float32 t);
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t);
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll);
void xMat3x3Euler(xMat3x3* m, xVec3* ypr);
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at);
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag);
void xMat3x3GetEuler(xMat3x3* m, xVec3* a);
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m);
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2);
void xBoxInitBoundCapsule(xBox* b, xCapsule* c);
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m);
int32 xPointInBox(xBox* b, xVec3* p);
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx);
void xMath3Exit();
void xMath3Init();

// xQuatDiff__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x1ee070
void xQuatDiff(xQuat* o, xQuat* a, xQuat* b)
{
}

// xQuatMul__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x1ee110
void xQuatMul(xQuat* o, xQuat* a, xQuat* b)
{
}

// xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
// Start address: 0x1ee1a0
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t)
{
	float32 asph;
	float32 bsph;
	float32 one_sintheta;
	float32 abdot;
	xQuat b2;
}

// xQuatNormalize__FP5xQuatPC5xQuat
// Start address: 0x1ee350
float32 xQuatNormalize(xQuat* o, xQuat* q)
{
	float32 one_len;
}

// xQuatToAxisAngle__FPC5xQuatP5xVec3Pf
// Start address: 0x1ee460
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t)
{
}

// xQuatToMat__FPC5xQuatP7xMat3x3
// Start address: 0x1ee4c0
void xQuatToMat(xQuat* q, xMat3x3* m)
{
	float32 tx;
	float32 ty;
	float32 tz;
	float32 tsx;
	float32 tsy;
	float32 tsz;
	float32 txx;
	float32 txy;
	float32 txz;
	float32 tyy;
	float32 tyz;
	float32 tzz;
}

// xQuatFromAxisAngle__FP5xQuatPC5xVec3f
// Start address: 0x1ee570
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t)
{
	float32 t_2;
}

// xQuatFromMat__FP5xQuatPC7xMat3x3
// Start address: 0x1ee640
void xQuatFromMat(xQuat* q, xMat3x3* m)
{
	float32* mp;
	float32* qvp;
	float32 tr;
	float32 root;
	int32 i;
	int32 j;
	int32 k;
	type_0 nxt;
}

// xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
// Start address: 0x1ee8c0
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b)
{
}

// xMat4x3Rot__FP7xMat4x3PC5xVec3fPC5xVec3
// Start address: 0x1ee980
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p)
{
	xMat4x3 temp;
}

// xMat3x3Tolocal__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x1eeac0
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v)
{
}

// xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x1eeb90
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v)
{
	float32 y;
	float32 z;
}

// xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3
// Start address: 0x1eec00
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b)
{
	xMat3x3 temp;
	xMat3x3* tp;
	uint32 usetemp;
}

// xMat3x3Transpose__FP7xMat3x3PC7xMat3x3
// Start address: 0x1eede0
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m)
{
	float32 temp;
	float32 temp;
	float32 temp;
}

// xMat3x3RMulRotY__FP7xMat3x3PC7xMat3x3f
// Start address: 0x1eee80
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t)
{
	float32 temp;
}

// xMat3x3ScaleC__FP7xMat3x3fff
// Start address: 0x1eefd0
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z)
{
}

// xMat3x3RotZ__FP7xMat3x3f
// Start address: 0x1ef000
void xMat3x3RotZ(xMat3x3* m, float32 t)
{
}

// xMat3x3RotY__FP7xMat3x3f
// Start address: 0x1ef080
void xMat3x3RotY(xMat3x3* m, float32 t)
{
}

// xMat3x3RotX__FP7xMat3x3f
// Start address: 0x1ef100
void xMat3x3RotX(xMat3x3* m, float32 t)
{
}

// xMat3x3RotC__FP7xMat3x3ffff
// Start address: 0x1ef180
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t)
{
	float32 c;
}

// xMat3x3Euler__FP7xMat3x3fff
// Start address: 0x1ef2b0
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll)
{
}

// xMat3x3Euler__FP7xMat3x3PC5xVec3
// Start address: 0x1ef3b0
void xMat3x3Euler(xMat3x3* m, xVec3* ypr)
{
}

// xMat3x3LookVec__FP7xMat3x3PC5xVec3
// Start address: 0x1ef3c0
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at)
{
	float32 vec_len;
}

// xMat4x3MoveLocalAt__FP7xMat4x3f
// Start address: 0x1ef630
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag)
{
}

// xMat4x3MoveLocalUp__FP7xMat4x3f
// Start address: 0x1ef670
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag)
{
}

// xMat4x3MoveLocalRight__FP7xMat4x3f
// Start address: 0x1ef6b0
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag)
{
}

// xMat3x3GetEuler__FPC7xMat3x3P5xVec3
// Start address: 0x1ef6f0
void xMat3x3GetEuler(xMat3x3* m, xVec3* a)
{
	float32 pitch;
	float32 yaw;
	float32 roll;
}

// xMat3x3Normalize__FP7xMat3x3PC7xMat3x3
// Start address: 0x1ef800
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m)
{
}

// xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff
// Start address: 0x1ef8c0
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2)
{
	xBox temp;
}

// xBoxInitBoundCapsule__FP4xBoxPC8xCapsule
// Start address: 0x1efc40
void xBoxInitBoundCapsule(xBox* b, xCapsule* c)
{
}

// xBoxInitBoundOBB__FP4xBoxPC4xBoxPC7xMat4x3
// Start address: 0x1efd50
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m)
{
	xVec3 boxcent;
	float32 xmax;
	float32 ymax;
	float32 zmax;
}

// xPointInBox__FPC4xBoxPC5xVec3
// Start address: 0x1f0020
int32 xPointInBox(xBox* b, xVec3* p)
{
}

// xLine3VecDist2__FPC5xVec3PC5xVec3PC5xVec3P6xIsect
// Start address: 0x1f00e0
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx)
{
}

// xMath3Exit__Fv
// Start address: 0x1f0210
void xMath3Exit()
{
}

// xMath3Init__Fv
// Start address: 0x1f0220
void xMath3Init()
{
}

