typedef struct xCoef3;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct xCoef;


typedef f32 type_0[4];
typedef xVec3 type_1[4];
typedef xVec3 type_2[4];
typedef f32 type_3[4];
typedef type_3 type_4[4];
typedef f32 type_5[3];
typedef f32 type_6[4];
typedef f32 type_7[4];
typedef type_7 type_8[7];
typedef u32 type_9[4096];
typedef xVec3 type_10[4];
typedef f32 type_11[2];
typedef f32 type_12[3];
typedef f32 type_13[4];
typedef type_13 type_14[4];
typedef f32 type_15[4];
typedef type_15 type_16[7];
typedef f32 type_17[4];
typedef f32 type_18[4];
typedef f32 type_19[4];
typedef type_19 type_20[4];
typedef f32 type_21[4];

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
};

struct xCoef
{
	type_18 a;
};

type_20 sBasisUniformBspline;
type_4 sBasisBezier;
type_14 sBasisHermite;
u32 gActiveHeap;
type_9 ourGlobals;

xSpline3* xSpline3_Bezier(xVec3* points, f32* time, u32 numpoints, u32 numalloc, xVec3* p1, xVec3* p2);
xSpline3* AllocSpline3(xVec3* points, f32* time, u32 numpoints, u32 numalloc, u32 flags, u32 type);
void xSpline3_ArcInit(xSpline3* spl, u32 sample);
f32 xSpline3_EvalArcApprox(xSpline3* spl, f32 s, u32 deriv, xVec3* o);
f32 ArcEvalIterate(xSpline3* spl, f32 s, u32 deriv, xVec3* o, u32 iterations);
void xSpline3_EvalSeg(xSpline3* spl, f32 u, u32 deriv, xVec3* o);
xCoef3* CoefSeg3(xSpline3* spl, u32 seg, xCoef3* tempCoef);
void EvalBspline3(xSpline3* spl, f32 u, u32 deriv, xVec3* o);
void BasisBspline(type_6* N, f32* t);
void EvalCoef3(xCoef3* coef, f32 u, u32 deriv, xVec3* o);
f32 ArcLength3(xCoef3* coef, f32 ustart, f32 uend);
void Interpolate_Bspline(xVec3* data, xVec3* control, f32* knots, u32 nodata);
void Tridiag_Solve(f32* a, f32* b, f32* c, xVec3* d, xVec3* x, s32 n);

// xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
// Start address: 0x20ab00
xSpline3* xSpline3_Bezier(xVec3* points, f32* time, u32 numpoints, u32 numalloc, xVec3* p1, xVec3* p2)
{
	xSpline3* spl;
	u32 i;
}

// AllocSpline3__FP5xVec3PfUiUiUiUi
// Start address: 0x20ac50
xSpline3* AllocSpline3(xVec3* points, f32* time, u32 numpoints, u32 numalloc, u32 flags, u32 type)
{
	xSpline3* spl;
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x20ada0
void xSpline3_ArcInit(xSpline3* spl, u32 sample)
{
	u32 i;
	u32 seg;
	f32 len;
	f32 arcsum;
	xCoef3 tempCoef;
	xCoef3* coef;
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3
// Start address: 0x20af50
f32 xSpline3_EvalArcApprox(xSpline3* spl, f32 s, u32 deriv, xVec3* o)
{
}

// ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui
// Start address: 0x20afa0
f32 ArcEvalIterate(xSpline3* spl, f32 s, u32 deriv, xVec3* o, u32 iterations)
{
	xCoef3* coef;
	xCoef3 tempCoef;
	f32 umin;
	f32 umax;
	f32 smin;
	f32 smax;
	f32 utest;
	f32 arctest;
	s32 min;
	s32 max;
	s32 test;
	s32 seg;
	s32 segmul;
}

// xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3
// Start address: 0x20b2f0
void xSpline3_EvalSeg(xSpline3* spl, f32 u, u32 deriv, xVec3* o)
{
	xCoef3 tempCoef;
	u32 seg;
}

// CoefSeg3__FP8xSpline3UiP6xCoef3
// Start address: 0x20b660
xCoef3* CoefSeg3(xSpline3* spl, u32 seg, xCoef3* tempCoef)
{
	type_8 N;
}

// EvalBspline3__FP8xSpline3fUiP5xVec3
// Start address: 0x20bac0
void EvalBspline3(xSpline3* spl, f32 u, u32 deriv, xVec3* o)
{
	type_16 N;
	xCoef3 coef;
}

// BasisBspline__FPA4_fPf
// Start address: 0x20bcb0
void BasisBspline(type_6* N, f32* t)
{
	u32 i;
	u32 k;
	u32 c;
	f32 d1;
	f32 d2;
	type_17 Ntemp;
}

// EvalCoef3__FP6xCoef3fUiP5xVec3
// Start address: 0x20bec0
void EvalCoef3(xCoef3* coef, f32 u, u32 deriv, xVec3* o)
{
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x20c0b0
f32 ArcLength3(xCoef3* coef, f32 ustart, f32 uend)
{
	u32 i;
	f32 A;
	f32 B;
	f32 C;
	f32 D;
	f32 E;
	f32 h;
	f32 sum;
	f32 u;
}

// Interpolate_Bspline__FP5xVec3P5xVec3PfUi
// Start address: 0x20c290
void Interpolate_Bspline(xVec3* data, xVec3* control, f32* knots, u32 nodata)
{
	u32 i;
	f32* alpha;
	f32* beta;
	f32* gamma;
	f32 t1;
	f32 t2;
	f32 t3;
	f32 t4;
	f32 t5;
}

// Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i
// Start address: 0x20c4b0
void Tridiag_Solve(f32* a, f32* b, f32* c, xVec3* d, xVec3* x, s32 n)
{
	s32 j;
	f32 beta;
	f32* gamma;
	xVec3* delta;
}

