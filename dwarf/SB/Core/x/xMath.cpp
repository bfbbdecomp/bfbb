typedef struct xFuncPiece;


typedef float32 type_0[0];
typedef int32 type_1[32];
typedef float32 type_2[5];

struct xFuncPiece
{
	type_2 coef;
	float32 end;
	int32 order;
	xFuncPiece* next;
};

int32 xmath_inited;
int32 xmath_exited;
uint32 rndseed;
type_0 cosSinPolynomial;

void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero);
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff);
float32 xFuncPiece_Eval(xFuncPiece* func, float32 param, xFuncPiece** iterator);
void xAccelStop(float32& x, float32& v, float32 a, float32 dt);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv);
float32 xAccelMoveTime(float32 dx, float32 a, float32 maxv);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv);
float32 xDangleClamp(float32 a);
float32 xAngleClampFast(float32 a);
float32 xAngleClamp(float32 a);
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3);
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
float32 xurand();
uint32 xrand();
void xsrand(uint32 seed);
float32 xatof(int8* x);
void xMathExit();
void xMathInit();

// xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef
// Start address: 0x1ed190
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero)
{
	int32 i;
	int32 j;
	xFuncPiece temp;
}

// xFuncPiece_EndPoints__FP10xFuncPieceffff
// Start address: 0x1ed2b0
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff)
{
	float32 xfinv;
}

// xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
// Start address: 0x1ed2f0
float32 xFuncPiece_Eval(xFuncPiece* func, float32 param, xFuncPiece** iterator)
{
	float32 result;
	int32 i;
}

// xAccelStop__FRfRfff
// Start address: 0x1ed3a0
void xAccelStop(float32& x, float32& v, float32 a, float32 dt)
{
	uint32 aa;
	float32 oldv;
}

// xAccelMove__FRfRffff
// Start address: 0x1ed4f0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv)
{
	uint32 bn;
	uint32 bp;
	uint32 aa;
	uint32 bn;
	uint32 bp;
	uint32 aa;
	float32 diff;
	float32 dv;
}

// xAccelMoveTime__Fffff
// Start address: 0x1ed630
float32 xAccelMoveTime(float32 dx, float32 a, float32 maxv)
{
	float32 time;
	float32 atime;
	float32 adist;
}

// xAccelMove__FRfRfffff
// Start address: 0x1ed6b0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv)
{
	float32 offset;
	float32 t1;
	float32 t2;
	float32 oldv;
	float32 dv;
	float32 newv;
	float32 adx;
	float32 diff;
	float32 dx;
}

// xDangleClamp__Ff
// Start address: 0x1ed9a0
float32 xDangleClamp(float32 a)
{
	float32 b;
}

// xAngleClampFast__Ff
// Start address: 0x1eda30
float32 xAngleClampFast(float32 a)
{
}

// xAngleClamp__Ff
// Start address: 0x1eda80
float32 xAngleClamp(float32 a)
{
	float32 b;
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x1edad0
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3)
{
	float32 arecip;
	float32 fA;
	float32 fB;
	float32 fOffset;
	float32 fDiscr;
	float32 fHalfB;
	float32 fTemp;
	float32 fDist;
	float32 fAngle;
	float32 fCos;
	float32 fSin;
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x1ede80
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2)
{
	float32 d;
	float32 dx;
	float32 p;
}

// xurand__Fv
// Start address: 0x1edf90
float32 xurand()
{
}

// xrand__Fv
// Start address: 0x1edff0
uint32 xrand()
{
}

// xsrand__FUi
// Start address: 0x1ee010
void xsrand(uint32 seed)
{
}

// xatof__FPCc
// Start address: 0x1ee020
float32 xatof(int8* x)
{
}

// xMathExit__Fv
// Start address: 0x1ee030
void xMathExit()
{
}

// xMathInit__Fv
// Start address: 0x1ee050
void xMathInit()
{
}

