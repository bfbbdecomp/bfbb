typedef struct xCoef3;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct xCoef;


typedef float32 type_0[4];
typedef xVec3 type_1[4];
typedef xVec3 type_2[4];
typedef float32 type_3[4];
typedef type_3 type_4[4];
typedef float32 type_5[3];
typedef float32 type_6[4];
typedef float32 type_7[4];
typedef type_7 type_8[7];
typedef uint32 type_9[4096];
typedef xVec3 type_10[4];
typedef float32 type_11[2];
typedef float32 type_12[3];
typedef float32 type_13[4];
typedef type_13 type_14[4];
typedef float32 type_15[4];
typedef type_15 type_16[7];
typedef float32 type_17[4];
typedef float32 type_18[4];
typedef float32 type_19[4];
typedef type_19 type_20[4];
typedef float32 type_21[4];

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xCoef
{
	type_18 a;
};

type_20 sBasisUniformBspline;
type_4 sBasisBezier;
type_14 sBasisHermite;
uint32 gActiveHeap;
type_9 ourGlobals;

xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2);
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type);
void xSpline3_ArcInit(xSpline3* spl, uint32 sample);
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o);
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations);
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o);
xCoef3* CoefSeg3(xSpline3* spl, uint32 seg, xCoef3* tempCoef);
void EvalBspline3(xSpline3* spl, float32 u, uint32 deriv, xVec3* o);
void BasisBspline(type_6* N, float32* t);
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o);
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend);
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata);
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n);

// xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
// Start address: 0x20ab00
xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2)
{
	xSpline3* spl;
	uint32 i;
}

// AllocSpline3__FP5xVec3PfUiUiUiUi
// Start address: 0x20ac50
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type)
{
	xSpline3* spl;
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x20ada0
void xSpline3_ArcInit(xSpline3* spl, uint32 sample)
{
	uint32 i;
	uint32 seg;
	float32 len;
	float32 arcsum;
	xCoef3 tempCoef;
	xCoef3* coef;
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3
// Start address: 0x20af50
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o)
{
}

// ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui
// Start address: 0x20afa0
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations)
{
	xCoef3* coef;
	xCoef3 tempCoef;
	float32 umin;
	float32 umax;
	float32 smin;
	float32 smax;
	float32 utest;
	float32 arctest;
	int32 min;
	int32 max;
	int32 test;
	int32 seg;
	int32 segmul;
}

// xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3
// Start address: 0x20b2f0
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o)
{
	xCoef3 tempCoef;
	uint32 seg;
}

// CoefSeg3__FP8xSpline3UiP6xCoef3
// Start address: 0x20b660
xCoef3* CoefSeg3(xSpline3* spl, uint32 seg, xCoef3* tempCoef)
{
	type_8 N;
}

// EvalBspline3__FP8xSpline3fUiP5xVec3
// Start address: 0x20bac0
void EvalBspline3(xSpline3* spl, float32 u, uint32 deriv, xVec3* o)
{
	type_16 N;
	xCoef3 coef;
}

// BasisBspline__FPA4_fPf
// Start address: 0x20bcb0
void BasisBspline(type_6* N, float32* t)
{
	uint32 i;
	uint32 k;
	uint32 c;
	float32 d1;
	float32 d2;
	type_17 Ntemp;
}

// EvalCoef3__FP6xCoef3fUiP5xVec3
// Start address: 0x20bec0
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o)
{
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x20c0b0
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend)
{
	uint32 i;
	float32 A;
	float32 B;
	float32 C;
	float32 D;
	float32 E;
	float32 h;
	float32 sum;
	float32 u;
}

// Interpolate_Bspline__FP5xVec3P5xVec3PfUi
// Start address: 0x20c290
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata)
{
	uint32 i;
	float32* alpha;
	float32* beta;
	float32* gamma;
	float32 t1;
	float32 t2;
	float32 t3;
	float32 t4;
	float32 t5;
}

// Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i
// Start address: 0x20c4b0
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n)
{
	int32 j;
	float32 beta;
	float32* gamma;
	xVec3* delta;
}

